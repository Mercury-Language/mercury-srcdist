/*
** Automatically generated from `program_representation_utils.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 80 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

#line 83 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0;

#line 86 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 89 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 92 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 95 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;

#line 98 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1;

#line 101 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 104 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 107 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1;

#line 110 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 113 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 116 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 119 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0;

#line 122 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0[1];

#line 125 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0;

#line 128 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1;

#line 131 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0[1];

#line 134 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1[1];

#line 137 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0[2];

#line 140 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0[2];

#line 143 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0[2];

#line 146 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0;

#line 149 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 152 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_inst_map_0_0[2];

#line 155 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_inst_map_0_0[2];

#line 158 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0;

#line 161 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0[1];

#line 164 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0[1];

#line 167 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0[1];

#line 170 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_0[1];

#line 173 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0[1];

#line 176 "program_representation_utils.c"
static const MR_NotagFunctorDesc program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0;

#line 179 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__pseudo_1__pseudo_2;

#line 182 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 185 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0[2];

#line 188 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0[2];

#line 191 "program_representation_utils.c"
static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0;

#line 194 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0[1];

#line 197 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2[1];

#line 200 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2[1];

#line 203 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2[1];

#line 206 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0;

#line 209 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1;

#line 212 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0[2];

#line 215 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0[2];

#line 218 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0[2];

#line 221 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1];

#line 224 "program_representation_utils.c"
static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1];

#line 227 "program_representation_utils.c"
static const MR_TypeClassId program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1;

#line 230 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
#line 233 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 235 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 238 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
#line 241 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 243 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 245 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 248 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
#line 251 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 253 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 256 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
#line 259 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 261 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 263 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 266 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
#line 269 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 271 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 274 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
#line 277 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 279 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 281 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 284 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
#line 287 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 289 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 291 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 293 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4);

#line 296 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
#line 299 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 301 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 303 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 305 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 307 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_5);

#line 310 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
#line 313 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 315 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 318 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
#line 321 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 323 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 325 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3);

#line 328 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 331 "program_representation_utils.c"
  MR_Box program_representation_utils__closure_arg,
#line 333 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 335 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 337 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 232 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 232 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47);

#line 864 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 864 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3);

#line 774 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 774 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5);

#line 774 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 774 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5);

#line 774 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 774 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5);

#line 760 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 760 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8);

#line 760 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 760 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8);

#line 960 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper__ho1_10_p_0(
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 960 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 960 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24);

#line 925 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__925__1_1_f_0(
#line 925 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_80);

#line 920 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__920__1_1_f_0(
#line 920 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_87);

#line 1213 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1213__2_3_p_0(
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_52,
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_53,
#line 1213 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_54);

#line 1213 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1213__1_3_p_0(
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_30,
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_31,
#line 1213 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_32);

#line 1178 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1178__1_5_p_0(
#line 1178 "program_representation_utils.m"
  MR_Word program_representation_utils__Before_4,
#line 1178 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_15,
#line 1178 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_16,
#line 1178 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__4_17,
#line 1178 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_18);

#line 1044 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1044__1_3_p_0(
#line 1044 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_24,
#line 1044 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_25,
#line 1044 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_26);

#line 548 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__548__1_2_f_0(
#line 548 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_194,
#line 548 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_195);

#line 546 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__546__1_2_f_0(
#line 546 "program_representation_utils.m"
  MR_Word program_representation_utils__LinePrefix_46,
#line 546 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_159);

#line 391 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__391__1_2_f_0(
#line 391 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
#line 391 "program_representation_utils.m"
  MR_Box program_representation_utils__HeadVar__2_7);

#line 232 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_44,
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 232 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47);

#line 864 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 864 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 864 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3);

#line 1118 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
#line 1118 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1118 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1118 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1118 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1106 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
#line 1106 "program_representation_utils.m"
  MR_Word program_representation_utils__VarToDepVars_5,
#line 1106 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarRep_6,
#line 1106 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Set_0_9,
#line 1106 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Set_10);

#line 1065 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
#line 1065 "program_representation_utils.m"
  MR_Word program_representation_utils__DepVars0_7,
#line 1065 "program_representation_utils.m"
  MR_Integer program_representation_utils__Var_8,
#line 1065 "program_representation_utils.m"
  MR_Word program_representation_utils__InstMap0_9,
#line 1065 "program_representation_utils.m"
  MR_Word * program_representation_utils__InstMap_10,
#line 1065 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
#line 1065 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22);

#line 1049 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
#line 1049 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 1049 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 1049 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3);

#line 996 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
#line 996 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 996 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_9,
#line 996 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_10);

#line 969 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_case_9_p_0(
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_37,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_10,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Case_0_20,
#line 969 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Case_21,
#line 969 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_CaseNum_0_22,
#line 969 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_CaseNum_23,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_24,
#line 969 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_25,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_26,
#line 969 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_27);

#line 960 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__MakePathStep_11,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 960 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 960 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24);

#line 930 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8);

#line 925 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8);

#line 925 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 920 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8);

#line 920 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 908 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_94,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__ContainingGoal_8,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_43,
#line 908 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_44,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_45,
#line 908 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_46,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_47,
#line 908 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_48);

#line 857 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
#line 857 "program_representation_utils.m"
  MR_String program_representation_utils__Str_3);

#line 853 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void);

#line 821 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
#line 821 "program_representation_utils.m"
  MR_Word program_representation_utils__Detism_3,
#line 821 "program_representation_utils.m"
  MR_Word * program_representation_utils__DetismStrCord_4);

#line 808 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
#line 808 "program_representation_utils.m"
  MR_Integer program_representation_utils__N_3);

#line 791 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
#line 791 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 791 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 791 "program_representation_utils.m"
  MR_String * program_representation_utils__String_7);

#line 667 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
#line 667 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 667 "program_representation_utils.m"
  MR_Word program_representation_utils__AtomicGoalRep_5,
#line 667 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6);

#line 657 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
#line 657 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_4,
#line 657 "program_representation_utils.m"
  MR_Word program_representation_utils__ConsIdArityRep_5,
#line 657 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6);

#line 645 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
#line 645 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 645 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 645 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 627 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_50,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_49,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 627 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 627 "program_representation_utils.m"
  MR_Integer program_representation_utils__CaseNum_4,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 627 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7);

#line 605 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_36,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_35,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 605 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 605 "program_representation_utils.m"
  MR_Integer program_representation_utils__DisjNum_4,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 605 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7);

#line 579 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_31,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 579 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 579 "program_representation_utils.m"
  MR_Integer program_representation_utils__ConjNum_4,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 579 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__6_6);

#line 565 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_17,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_16,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_6,
#line 565 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_7,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_8,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__GoalReps_9,
#line 565 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_10);

#line 421 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
#line 421 "program_representation_utils.m"
  MR_Word program_representation_utils__VarNameTable_6,
#line 421 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarNum_7,
#line 421 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_8,
#line 421 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_15,
#line 421 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_16);

#line 364 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
#line 364 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadTypeRep_1,
#line 364 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 364 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_3);

#line 280 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
#line 280 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_3,
#line 280 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_4);

#line 268 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
#line 268 "program_representation_utils.m"
  MR_Integer program_representation_utils__TypeNum_5,
#line 268 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_6,
#line 268 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_11,
#line 268 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_12);

#line 257 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
#line 257 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 257 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 256 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
#line 256 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 256 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 255 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
#line 255 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 255 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 254 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 254 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 253 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
#line 253 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 253 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 253 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 252 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
#line 252 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 252 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 252 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2);

#line 239 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
#line 239 "program_representation_utils.m"
  MR_Word program_representation_utils__OISUTypeProcs_4,
#line 239 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_7,
#line 239 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_8);

#line 1209 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1209 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1209 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1209 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1137 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 1137 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 1044 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
#line 1044 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1044 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1044 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1044 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1043 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1043 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1043 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 1062 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1062 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 1062 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_5);

#line 993 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
#line 993 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 993 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 993 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 993 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);

#line 548 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
#line 548 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 548 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 548 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2);

#line 546 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
#line 546 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 546 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 416 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 416 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 391 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
#line 391 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 391 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1);

#line 416 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 416 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 232 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 232 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 224 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 224 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4);

#line 222 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
#line 222 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 222 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 222 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 222 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3);


static /* final */ const MR_Box program_representation_utils_scalar_common_1[11][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_2[20][3];

static /* final */ const MR_Box program_representation_utils_scalar_common_3[1][1];

static /* final */ const MR_Box program_representation_utils_scalar_common_4[8][6];

static /* final */ const MR_Box program_representation_utils_scalar_common_5[3][7];

static /* final */ const MR_Box program_representation_utils_scalar_common_6[2][8];

static /* final */ const MR_Integer program_representation_utils_scalar_common_7[2][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_8[1][9];

static /* final */ const MR_Box program_representation_utils_scalar_common_9[3][5];

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][14];

static /* final */ const MR_Box program_representation_utils_scalar_common_11[1][13];




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
    ((MR_Box) (&program_representation_utils_scalar_common_4[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_5[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_5[1])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[2])),
    ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[3])),
    ((MR_Box) (program_representation_utils__initial_inst_map_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[4])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[5])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[6])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[6])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[0])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[0])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[0])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_4[8][6] = {
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
    ((MR_Box) (&program_representation_utils_scalar_common_7[0])),
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

static /* final */ const MR_Box program_representation_utils_scalar_common_5[3][7] = {
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

static /* final */ const MR_Box program_representation_utils_scalar_common_6[2][8] = {
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

static /* final */ const MR_Integer program_representation_utils_scalar_common_7[2][2] = {
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

static /* final */ const MR_Box program_representation_utils_scalar_common_8[1][9] = {
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

static /* final */ const MR_Box program_representation_utils_scalar_common_9[3][5] = {
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

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_7[1])),
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

static /* final */ const MR_Box program_representation_utils_scalar_common_11[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_7[1])),
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



#line 1646 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1654 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1662 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1671 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1679 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1687 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
  }
};

#line 1697 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1705 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1713 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1722 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1730 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1738 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1746 "program_representation_utils.c"
static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1755 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct1 program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1763 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0[1] = {
  (MR_PseudoTypeInfo) &program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 1768 "program_representation_utils.c"
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

#line 1783 "program_representation_utils.c"
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

#line 1798 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1
};

#line 1803 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0
};

#line 1808 "program_representation_utils.c"
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

#line 1822 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0[2] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0,
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1
};

#line 1828 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1834 "program_representation_utils.c"
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

#line 1855 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0
  }
};

#line 1864 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1873 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_inst_map_0_0[2] = {
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0,
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 1879 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_inst_map_0_0[2] = {
  (MR_String) "im_inst_map",
  (MR_String) "im_var_dep_map"
};

#line 1885 "program_representation_utils.c"
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

#line 1900 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0
};

#line 1905 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0
  }
};

#line 1914 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0
};

#line 1919 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_0[1] = {
  (MR_Integer) 0
};

#line 1924 "program_representation_utils.c"
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

#line 1945 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0[1] = {
  (MR_Integer) 0
};

#line 1950 "program_representation_utils.c"
static const MR_NotagFunctorDesc program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 = {
  (MR_String) "inst_map_delta",
  (MR_PseudoTypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0,
  NULL
};

#line 1957 "program_representation_utils.c"
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

#line 1978 "program_representation_utils.c"
static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1988 "program_representation_utils.c"
static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1997 "program_representation_utils.c"
static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0[2] = {
  (MR_PseudoTypeInfo) &program_representation_utils____vpti_func_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
};

#line 2003 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0[2] = {
  (MR_String) "pgi_lookup_annotation",
  (MR_String) "pgi_var_name_table"
};

#line 2009 "program_representation_utils.c"
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

#line 2024 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0
};

#line 2029 "program_representation_utils.c"
static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0
  }
};

#line 2038 "program_representation_utils.c"
static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0
};

#line 2043 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2[1] = {
  (MR_Integer) 0
};

#line 2048 "program_representation_utils.c"
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

#line 2069 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0 = {
  (MR_String) "seen_duplicate_instantiation",
  (MR_Integer) 0
};

#line 2075 "program_representation_utils.c"
static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1 = {
  (MR_String) "have_not_seen_duplicate_instantiation",
  (MR_Integer) 1
};

#line 2081 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0[2] = {
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0,
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1
};

#line 2087 "program_representation_utils.c"
static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0[2] = {
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1,
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0
};

#line 2093 "program_representation_utils.c"
static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2099 "program_representation_utils.c"
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

#line 2120 "program_representation_utils.c"
const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

#line 2130 "program_representation_utils.c"
static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1] = {
  (MR_String) "T"
};

#line 2135 "program_representation_utils.c"
static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1] = {
  {
    (MR_String) "print_goal_annotation_to_strings",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 2144 "program_representation_utils.c"
static const MR_TypeClassId program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1 = {
  (MR_String) "program_representation_utils",
  (MR_String) "goal_annotation",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1,
  program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1
};

#line 2155 "program_representation_utils.c"
const MR_TypeClassDeclStruct program_representation_utils__program_representation_utils__type_class_decl_goal_annotation_1 = {
  &program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2163 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
#line 2166 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2168 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2170 "program_representation_utils.c"
{
#line 2172 "program_representation_utils.c"
  {
#line 2174 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2177 "program_representation_utils.c"
    {
#line 2179 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____atomic_goal_is_call_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2182 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2184 "program_representation_utils.c"
  }
#line 2186 "program_representation_utils.c"
}

#line 2189 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
#line 2192 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2194 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2196 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2198 "program_representation_utils.c"
{
#line 2200 "program_representation_utils.c"
  {
#line 2202 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2205 "program_representation_utils.c"
    {
#line 2207 "program_representation_utils.c"
      program_representation_utils____Compare____atomic_goal_is_call_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2210 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2212 "program_representation_utils.c"
  }
#line 2214 "program_representation_utils.c"
}

#line 2217 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
#line 2220 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2222 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2224 "program_representation_utils.c"
{
#line 2226 "program_representation_utils.c"
  {
#line 2228 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2231 "program_representation_utils.c"
    {
#line 2233 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____inst_map_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2236 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2238 "program_representation_utils.c"
  }
#line 2240 "program_representation_utils.c"
}

#line 2243 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
#line 2246 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2248 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2250 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2252 "program_representation_utils.c"
{
#line 2254 "program_representation_utils.c"
  {
#line 2256 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2259 "program_representation_utils.c"
    {
#line 2261 "program_representation_utils.c"
      program_representation_utils____Compare____inst_map_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2264 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2266 "program_representation_utils.c"
  }
#line 2268 "program_representation_utils.c"
}

#line 2271 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
#line 2274 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2276 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2278 "program_representation_utils.c"
{
#line 2280 "program_representation_utils.c"
  {
#line 2282 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2285 "program_representation_utils.c"
    {
#line 2287 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____inst_map_delta_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2290 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2292 "program_representation_utils.c"
  }
#line 2294 "program_representation_utils.c"
}

#line 2297 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
#line 2300 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2302 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2304 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2306 "program_representation_utils.c"
{
#line 2308 "program_representation_utils.c"
  {
#line 2310 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2313 "program_representation_utils.c"
    {
#line 2315 "program_representation_utils.c"
      program_representation_utils____Compare____inst_map_delta_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2318 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2320 "program_representation_utils.c"
  }
#line 2322 "program_representation_utils.c"
}

#line 2325 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
#line 2328 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2330 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2332 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 2334 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4)
#line 2336 "program_representation_utils.c"
{
#line 2338 "program_representation_utils.c"
  {
#line 2340 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2343 "program_representation_utils.c"
    {
#line 2345 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____print_goal_info_2_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), ((MR_Word) program_representation_utils__wrapper_arg_4));
    }
#line 2348 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2350 "program_representation_utils.c"
  }
#line 2352 "program_representation_utils.c"
}

#line 2355 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
#line 2358 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2360 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2362 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 2364 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 2366 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_5)
#line 2368 "program_representation_utils.c"
{
#line 2370 "program_representation_utils.c"
  {
#line 2372 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2375 "program_representation_utils.c"
    {
#line 2377 "program_representation_utils.c"
      program_representation_utils____Compare____print_goal_info_2_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_4), ((MR_Word) program_representation_utils__wrapper_arg_5));
    }
#line 2380 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2382 "program_representation_utils.c"
  }
#line 2384 "program_representation_utils.c"
}

#line 2387 "program_representation_utils.c"
static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
#line 2390 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2392 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 2394 "program_representation_utils.c"
{
#line 2396 "program_representation_utils.c"
  {
#line 2398 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;

#line 2401 "program_representation_utils.c"
    {
#line 2403 "program_representation_utils.c"
      program_representation_utils__succeeded = program_representation_utils____Unify____seen_duplicate_instantiation_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 2406 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 2408 "program_representation_utils.c"
  }
#line 2410 "program_representation_utils.c"
}

#line 2413 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
#line 2416 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_1,
#line 2418 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2420 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_3)
#line 2422 "program_representation_utils.c"
{
#line 2424 "program_representation_utils.c"
  {
#line 2426 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

#line 2429 "program_representation_utils.c"
    {
#line 2431 "program_representation_utils.c"
      program_representation_utils____Compare____seen_duplicate_instantiation_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
#line 2434 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
#line 2436 "program_representation_utils.c"
  }
#line 2438 "program_representation_utils.c"
}

#line 2441 "program_representation_utils.c"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 2444 "program_representation_utils.c"
  MR_Box program_representation_utils__closure_arg,
#line 2446 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 2448 "program_representation_utils.c"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 2450 "program_representation_utils.c"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 2452 "program_representation_utils.c"
{
#line 2454 "program_representation_utils.c"
  {
#line 2456 "program_representation_utils.c"
    MR_Box program_representation_utils__closure;
#line 2458 "program_representation_utils.c"
    MR_Word program_representation_utils__conv0_HeadVar__3_3;

#line 2461 "program_representation_utils.c"
    program_representation_utils__closure = program_representation_utils__closure_arg;
#line 2463 "program_representation_utils.c"
    {
#line 2465 "program_representation_utils.c"
      program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_HeadVar__3_3);
    }
#line 2468 "program_representation_utils.c"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_3));
#line 2470 "program_representation_utils.c"
  }
#line 2472 "program_representation_utils.c"
}

#line 232 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 232 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47)
#line 232 "program_representation_utils.m"
{
#line 232 "program_representation_utils.m"
  {
#line 232 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 232 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcStrings_66;

#line 384 "program_representation_utils.m"
    {
#line 384 "program_representation_utils.m"
      program_representation_utils__print_proc_to_strings_2_p_0((MR_Word) &program_representation_utils_scalar_common_1[1], program_representation_utils__HeadVar__2_45, &program_representation_utils__ProcStrings_66);
    }
#line 385 "program_representation_utils.m"
    {
#line 385 "program_representation_utils.m"
      *program_representation_utils__HeadVar__4_47 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__HeadVar__3_46, program_representation_utils__ProcStrings_66);
    }
#line 232 "program_representation_utils.m"
  }
#line 232 "program_representation_utils.m"
}

#line 864 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 864 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 864 "program_representation_utils.m"
{
#line 870 "program_representation_utils.m"
  {
#line 870 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 870 "program_representation_utils.m"
    {
#line 870 "program_representation_utils.m"
      *program_representation_utils__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &program_representation_utils_scalar_common_1[0]);
    }
#line 870 "program_representation_utils.m"
  }
#line 864 "program_representation_utils.m"
}

#line 774 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 774 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5)
#line 774 "program_representation_utils.m"
{
#line 777 "program_representation_utils.m"
  {
#line 777 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 777 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "program_representation_utils.m"
      {
#line 777 "program_representation_utils.m"
        {
#line 777 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 777 "program_representation_utils.m"
      }
#line 777 "program_representation_utils.m"
    else
#line 778 "program_representation_utils.m"
      {
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
#line 778 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arg_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 778 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_15;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_16;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__V_19_19;

#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__Arg_11, &program_representation_utils__ArgName_15);
        }
#line 2583 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__V_17_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho8_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__V_17_17, &program_representation_utils__ArgsString_16);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__V_19_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__V_19_19);
        }
#line 778 "program_representation_utils.m"
      }
#line 777 "program_representation_utils.m"
  }
#line 774 "program_representation_utils.m"
}

#line 774 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 774 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5)
#line 774 "program_representation_utils.m"
{
#line 777 "program_representation_utils.m"
  {
#line 777 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 777 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "program_representation_utils.m"
      {
#line 777 "program_representation_utils.m"
        {
#line 777 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 777 "program_representation_utils.m"
      }
#line 777 "program_representation_utils.m"
    else
#line 778 "program_representation_utils.m"
      {
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 778 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_15;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_16;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__V_19_19;

#line 787 "program_representation_utils.m"
        if ((program_representation_utils__Arg_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "program_representation_utils.m"
          program_representation_utils__ArgName_15 = (MR_String) "_";
#line 787 "program_representation_utils.m"
        else
#line 788 "program_representation_utils.m"
          {
#line 788 "program_representation_utils.m"
            MR_Integer program_representation_utils__VarRep_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Arg_11, (MR_Integer) 0)));

#line 789 "program_representation_utils.m"
            {
#line 789 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__VarRep_25, &program_representation_utils__ArgName_15);
            }
#line 788 "program_representation_utils.m"
          }
#line 2678 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__V_17_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho7_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__V_17_17, &program_representation_utils__ArgsString_16);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__V_19_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__V_19_19);
        }
#line 778 "program_representation_utils.m"
      }
#line 777 "program_representation_utils.m"
  }
#line 774 "program_representation_utils.m"
}

#line 774 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_2,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3,
#line 774 "program_representation_utils.m"
  MR_Word program_representation_utils__Prefix_4,
#line 774 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_5)
#line 774 "program_representation_utils.m"
{
#line 777 "program_representation_utils.m"
  {
#line 777 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 777 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "program_representation_utils.m"
      {
#line 777 "program_representation_utils.m"
        {
#line 777 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 777 "program_representation_utils.m"
      }
#line 777 "program_representation_utils.m"
    else
#line 778 "program_representation_utils.m"
      {
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 778 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_15;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_16;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 778 "program_representation_utils.m"
        MR_Word program_representation_utils__V_19_19;

#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__Arg_11, &program_representation_utils__ArgName_15);
        }
#line 2760 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__V_17_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__V_17_17, &program_representation_utils__ArgsString_16);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__V_19_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__V_19_19);
        }
#line 778 "program_representation_utils.m"
      }
#line 777 "program_representation_utils.m"
  }
#line 774 "program_representation_utils.m"
}

#line 760 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 760 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8)
#line 760 "program_representation_utils.m"
{
#line 766 "program_representation_utils.m"
  {
#line 766 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 766 "program_representation_utils.m"
    if ((program_representation_utils__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "program_representation_utils.m"
      {
#line 765 "program_representation_utils.m"
        {
#line 765 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 764 "program_representation_utils.m"
      }
#line 766 "program_representation_utils.m"
    else
#line 767 "program_representation_utils.m"
      {
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_36;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_11;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_12_12;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_14_14;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_25;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_26;
#line 767 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_29;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_30;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_31_31;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_33_33;

#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_12_12 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_18);
        }
#line 778 "program_representation_utils.m"
        program_representation_utils__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 0)));
#line 778 "program_representation_utils.m"
        program_representation_utils__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 1)));
#line 787 "program_representation_utils.m"
        if ((program_representation_utils__Arg_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "program_representation_utils.m"
          program_representation_utils__ArgName_29 = (MR_String) "_";
#line 787 "program_representation_utils.m"
        else
#line 788 "program_representation_utils.m"
          {
#line 788 "program_representation_utils.m"
            MR_Integer program_representation_utils__VarRep_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Arg_25, (MR_Integer) 0)));

#line 789 "program_representation_utils.m"
            {
#line 789 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_6, program_representation_utils__VarRep_39, &program_representation_utils__ArgName_29);
            }
#line 788 "program_representation_utils.m"
          }
#line 2870 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) ((MR_String) ", ")));
        }
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho7_5_p_0(program_representation_utils__VarTable_6, program_representation_utils__Args_26, program_representation_utils__V_31_31, &program_representation_utils__ArgsString_30);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__V_33_33 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) (program_representation_utils__ArgName_29)), program_representation_utils__ArgsString_30);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__ArgsStr_11 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_36, program_representation_utils__V_12_12, program_representation_utils__V_33_33);
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          program_representation_utils__V_14_14 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_18, program_representation_utils__ArgsStr_11, ((MR_Box) ((MR_String) ")")));
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_18, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_14_14);
        }
#line 767 "program_representation_utils.m"
      }
#line 766 "program_representation_utils.m"
  }
#line 760 "program_representation_utils.m"
}

#line 760 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_6,
#line 760 "program_representation_utils.m"
  MR_Word program_representation_utils__Args_7,
#line 760 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_8)
#line 760 "program_representation_utils.m"
{
#line 766 "program_representation_utils.m"
  {
#line 766 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 766 "program_representation_utils.m"
    if ((program_representation_utils__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "program_representation_utils.m"
      {
#line 765 "program_representation_utils.m"
        {
#line 765 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 764 "program_representation_utils.m"
      }
#line 766 "program_representation_utils.m"
    else
#line 767 "program_representation_utils.m"
      {
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_36;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_11;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_12_12;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_14_14;
#line 767 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arg_25;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_26;
#line 767 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_29;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_30;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_31_31;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_33_33;

#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_12_12 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_18);
        }
#line 778 "program_representation_utils.m"
        program_representation_utils__Arg_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 0)));
#line 778 "program_representation_utils.m"
        program_representation_utils__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 1)));
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_6, program_representation_utils__Arg_25, &program_representation_utils__ArgName_29);
        }
#line 2977 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) ((MR_String) ", ")));
        }
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho8_5_p_0(program_representation_utils__VarTable_6, program_representation_utils__Args_26, program_representation_utils__V_31_31, &program_representation_utils__ArgsString_30);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__V_33_33 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) (program_representation_utils__ArgName_29)), program_representation_utils__ArgsString_30);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__ArgsStr_11 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_36, program_representation_utils__V_12_12, program_representation_utils__V_33_33);
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          program_representation_utils__V_14_14 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_18, program_representation_utils__ArgsStr_11, ((MR_Box) ((MR_String) ")")));
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          *program_representation_utils__Strings_8 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_18, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_14_14);
        }
#line 767 "program_representation_utils.m"
      }
#line 766 "program_representation_utils.m"
  }
#line 760 "program_representation_utils.m"
}

#line 960 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper__ho1_10_p_0(
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 960 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 960 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24)
#line 960 "program_representation_utils.m"
{
#line 964 "program_representation_utils.m"
  {
#line 964 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 964 "program_representation_utils.m"
    MR_Word program_representation_utils__V_25_25;
#line 964 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;

#line 976 "program_representation_utils.m"
    {
#line 976 "program_representation_utils.m"
      program_representation_utils__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 976 "program_representation_utils.m"
      MR_hl_field(MR_mktag(3), program_representation_utils__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 976 "program_representation_utils.m"
      MR_hl_field(MR_mktag(3), program_representation_utils__V_29_29, 1) = ((MR_Box) (program_representation_utils__STATE_VARIABLE_GoalNum_0_19));
#line 976 "program_representation_utils.m"
      MR_hl_field(MR_mktag(3), program_representation_utils__V_29_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 976 "program_representation_utils.m"
    }
#line 965 "program_representation_utils.m"
    {
#line 965 "program_representation_utils.m"
      program_representation_utils__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 0) = ((MR_Box) (program_representation_utils__ParentGoalId_12));
#line 965 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 1) = ((MR_Box) (program_representation_utils__V_29_29));
#line 965 "program_representation_utils.m"
    }
#line 965 "program_representation_utils.m"
    {
#line 965 "program_representation_utils.m"
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__V_25_25, program_representation_utils__STATE_VARIABLE_Goal_0_17, program_representation_utils__STATE_VARIABLE_Goal_18, program_representation_utils__STATE_VARIABLE_Counter_0_21, program_representation_utils__STATE_VARIABLE_Counter_22, program_representation_utils__STATE_VARIABLE_Map_0_23, program_representation_utils__STATE_VARIABLE_Map_24);
    }
#line 967 "program_representation_utils.m"
    *program_representation_utils__STATE_VARIABLE_GoalNum_20 = (program_representation_utils__STATE_VARIABLE_GoalNum_0_19 + (MR_Integer) 1);
#line 964 "program_representation_utils.m"
  }
#line 960 "program_representation_utils.m"
}

#line 925 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__925__1_1_f_0(
#line 925 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_80)
#line 925 "program_representation_utils.m"
{
#line 925 "program_representation_utils.m"
  {
#line 925 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 925 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_81;

#line 925 "program_representation_utils.m"
    {
#line 925 "program_representation_utils.m"
      program_representation_utils__HeadVar__2_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "program_representation_utils.m"
      MR_hl_field(MR_mktag(2), program_representation_utils__HeadVar__2_81, 0) = ((MR_Box) (program_representation_utils__HeadVar__1_80));
#line 925 "program_representation_utils.m"
    }
#line 925 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_81;
#line 925 "program_representation_utils.m"
  }
#line 925 "program_representation_utils.m"
}

#line 920 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__920__1_1_f_0(
#line 920 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__1_87)
#line 920 "program_representation_utils.m"
{
#line 920 "program_representation_utils.m"
  {
#line 920 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 920 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_88;

#line 920 "program_representation_utils.m"
    {
#line 920 "program_representation_utils.m"
      program_representation_utils__HeadVar__2_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 920 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_88, 0) = ((MR_Box) (program_representation_utils__HeadVar__1_87));
#line 920 "program_representation_utils.m"
    }
#line 920 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_88;
#line 920 "program_representation_utils.m"
  }
#line 920 "program_representation_utils.m"
}

#line 1213 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1213__2_3_p_0(
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_52,
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_53,
#line 1213 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_54)
#line 1213 "program_representation_utils.m"
{
#line 1213 "program_representation_utils.m"
  {
#line 1213 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1213 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__1_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "program_representation_utils.m"
      *program_representation_utils__HeadVar__3_54 = program_representation_utils__HeadVar__2_53;
#line 1213 "program_representation_utils.m"
    else
#line 1211 "program_representation_utils.m"
      {
#line 1211 "program_representation_utils.m"
        MR_Integer program_representation_utils__VarI_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__1_52, (MR_Integer) 0)));

#line 1212 "program_representation_utils.m"
        {
#line 1212 "program_representation_utils.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__VarI_55)), program_representation_utils__HeadVar__2_53, program_representation_utils__HeadVar__3_54);
#line 1212 "program_representation_utils.m"
          return;
        }
#line 1211 "program_representation_utils.m"
      }
#line 1213 "program_representation_utils.m"
  }
#line 1213 "program_representation_utils.m"
}

#line 1213 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1213__1_3_p_0(
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_30,
#line 1213 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_31,
#line 1213 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_32)
#line 1213 "program_representation_utils.m"
{
#line 1213 "program_representation_utils.m"
  {
#line 1213 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1213 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__1_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "program_representation_utils.m"
      *program_representation_utils__HeadVar__3_32 = program_representation_utils__HeadVar__2_31;
#line 1213 "program_representation_utils.m"
    else
#line 1211 "program_representation_utils.m"
      {
#line 1211 "program_representation_utils.m"
        MR_Integer program_representation_utils__VarI_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__1_30, (MR_Integer) 0)));

#line 1212 "program_representation_utils.m"
        {
#line 1212 "program_representation_utils.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__VarI_17)), program_representation_utils__HeadVar__2_31, program_representation_utils__HeadVar__3_32);
#line 1212 "program_representation_utils.m"
          return;
        }
#line 1211 "program_representation_utils.m"
      }
#line 1213 "program_representation_utils.m"
  }
#line 1213 "program_representation_utils.m"
}

#line 1178 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1178__1_5_p_0(
#line 1178 "program_representation_utils.m"
  MR_Word program_representation_utils__Before_4,
#line 1178 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_15,
#line 1178 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_16,
#line 1178 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__4_17,
#line 1178 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__5_18)
#line 1178 "program_representation_utils.m"
{
#line 1178 "program_representation_utils.m"
  {
#line 1178 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1178 "program_representation_utils.m"
    MR_Word program_representation_utils__BeforeInst_11;
#line 1139 "program_representation_utils.m"
    MR_Word program_representation_utils__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Before_4, (MR_Integer) 0)));
#line 1139 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Before_4, (MR_Integer) 1)));
#line 1139 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_BeforeInst_11;

#line 1139 "program_representation_utils.m"
    {
#line 1139 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__V_19_19, program_representation_utils__HeadVar__2_15, &program_representation_utils__conv0_BeforeInst_11);
    }
#line 1139 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1139 "program_representation_utils.m"
      {
#line 1139 "program_representation_utils.m"
        program_representation_utils__BeforeInst_11 = ((MR_Word) program_representation_utils__conv0_BeforeInst_11);
#line 1139 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 1139 "program_representation_utils.m"
      }
#line 1178 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1153 "program_representation_utils.m"
      if ((program_representation_utils__BeforeInst_11 == (MR_Integer) 0))
#line 1146 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1145 "program_representation_utils.m"
          *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1146 "program_representation_utils.m"
        else
#line 1149 "program_representation_utils.m"
          {
#line 1151 "program_representation_utils.m"
            {
#line 1151 "program_representation_utils.m"
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__HeadVar__2_15)), program_representation_utils__HeadVar__4_17, program_representation_utils__HeadVar__5_18);
#line 1151 "program_representation_utils.m"
              return;
            }
#line 1149 "program_representation_utils.m"
          }
#line 1153 "program_representation_utils.m"
      else
#line 1153 "program_representation_utils.m"
        if ((program_representation_utils__BeforeInst_11 == (MR_Integer) 1))
#line 1154 "program_representation_utils.m"
          {
#line 1159 "program_representation_utils.m"
            if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1156 "program_representation_utils.m"
              {
#line 1157 "program_representation_utils.m"
                {
#line 1157 "program_representation_utils.m"
                  mercury__require__error_1_p_0((MR_String) "calc_inst_map_delta: Variables cannot become less instantiated.");
#line 1157 "program_representation_utils.m"
                  return;
                }
#line 1156 "program_representation_utils.m"
              }
#line 1159 "program_representation_utils.m"
            else
#line 1159 "program_representation_utils.m"
              if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 1))
#line 1160 "program_representation_utils.m"
                {
#line 1160 "program_representation_utils.m"
                }
#line 1159 "program_representation_utils.m"
              else
#line 1161 "program_representation_utils.m"
                {
#line 1161 "program_representation_utils.m"
                }
#line 1164 "program_representation_utils.m"
            *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1154 "program_representation_utils.m"
          }
#line 1153 "program_representation_utils.m"
        else
#line 1166 "program_representation_utils.m"
          {
#line 1171 "program_representation_utils.m"
            if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1168 "program_representation_utils.m"
              {
#line 1169 "program_representation_utils.m"
                {
#line 1169 "program_representation_utils.m"
                  mercury__require__error_1_p_0((MR_String) "calc_inst_map_delta: Variables cannot become less instantiated.");
#line 1169 "program_representation_utils.m"
                  return;
                }
#line 1168 "program_representation_utils.m"
              }
#line 1171 "program_representation_utils.m"
            else
#line 1171 "program_representation_utils.m"
              if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 1))
#line 1172 "program_representation_utils.m"
                {
#line 1172 "program_representation_utils.m"
                }
#line 1171 "program_representation_utils.m"
              else
#line 1173 "program_representation_utils.m"
                {
#line 1173 "program_representation_utils.m"
                }
#line 1176 "program_representation_utils.m"
            *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1166 "program_representation_utils.m"
          }
#line 1178 "program_representation_utils.m"
    else
#line 1184 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__3_16 == (MR_Integer) 0))
#line 1183 "program_representation_utils.m"
        *program_representation_utils__HeadVar__5_18 = program_representation_utils__HeadVar__4_17;
#line 1184 "program_representation_utils.m"
      else
#line 1187 "program_representation_utils.m"
        {
#line 1189 "program_representation_utils.m"
          {
#line 1189 "program_representation_utils.m"
            mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__HeadVar__2_15)), program_representation_utils__HeadVar__4_17, program_representation_utils__HeadVar__5_18);
#line 1189 "program_representation_utils.m"
            return;
          }
#line 1187 "program_representation_utils.m"
        }
#line 1178 "program_representation_utils.m"
  }
#line 1178 "program_representation_utils.m"
}

#line 1044 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1044__1_3_p_0(
#line 1044 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_24,
#line 1044 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_25,
#line 1044 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_26)
#line 1044 "program_representation_utils.m"
{
#line 1044 "program_representation_utils.m"
  {
#line 1044 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1044 "program_representation_utils.m"
    {
#line 1044 "program_representation_utils.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__HeadVar__1_24, program_representation_utils__HeadVar__2_25, program_representation_utils__HeadVar__3_26);
#line 1044 "program_representation_utils.m"
      return;
    }
#line 1044 "program_representation_utils.m"
  }
#line 1044 "program_representation_utils.m"
}

#line 548 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__548__1_2_f_0(
#line 548 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_194,
#line 548 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_195)
#line 548 "program_representation_utils.m"
{
#line 548 "program_representation_utils.m"
  {
#line 548 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 548 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__3_196;

#line 548 "program_representation_utils.m"
    {
#line 548 "program_representation_utils.m"
      program_representation_utils__HeadVar__3_196 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__HeadVar__1_194, program_representation_utils__HeadVar__2_195);
    }
#line 548 "program_representation_utils.m"
    return program_representation_utils__HeadVar__3_196;
#line 548 "program_representation_utils.m"
  }
#line 548 "program_representation_utils.m"
}

#line 546 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__546__1_2_f_0(
#line 546 "program_representation_utils.m"
  MR_Word program_representation_utils__LinePrefix_46,
#line 546 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_159)
#line 546 "program_representation_utils.m"
{
#line 546 "program_representation_utils.m"
  {
#line 546 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 546 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__3_160;
#line 546 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 546 "program_representation_utils.m"
    MR_Word program_representation_utils__V_161_161;
#line 546 "program_representation_utils.m"
    MR_Word program_representation_utils__V_162_162;

#line 546 "program_representation_utils.m"
    {
#line 546 "program_representation_utils.m"
      program_representation_utils__V_162_162 = program_representation_utils__nl_0_f_0();
    }
#line 546 "program_representation_utils.m"
    {
#line 546 "program_representation_utils.m"
      program_representation_utils__V_161_161 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_193_193, program_representation_utils__HeadVar__2_159, program_representation_utils__V_162_162);
    }
#line 546 "program_representation_utils.m"
    {
#line 546 "program_representation_utils.m"
      program_representation_utils__HeadVar__3_160 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_193_193, program_representation_utils__LinePrefix_46, program_representation_utils__V_161_161);
    }
#line 546 "program_representation_utils.m"
    return program_representation_utils__HeadVar__3_160;
#line 546 "program_representation_utils.m"
  }
#line 546 "program_representation_utils.m"
}

#line 391 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__391__1_2_f_0(
#line 391 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
#line 391 "program_representation_utils.m"
  MR_Box program_representation_utils__HeadVar__2_7)
#line 391 "program_representation_utils.m"
{
#line 391 "program_representation_utils.m"
  {
#line 391 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 391 "program_representation_utils.m"
    MR_Box program_representation_utils__HeadVar__3_8;
#line 391 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_10_10;

#line 3502 "program_representation_utils.c"
    {
#line 3504 "program_representation_utils.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &program_representation_utils__TypeInfo_10_10);
    }
#line 391 "program_representation_utils.m"
    {
#line 391 "program_representation_utils.m"
      return program_representation_utils__HeadVar__3_8 = mercury__std_util__id_1_f_0(program_representation_utils__TypeInfo_10_10, program_representation_utils__HeadVar__2_7);
    }
#line 391 "program_representation_utils.m"
    return program_representation_utils__HeadVar__3_8;
#line 391 "program_representation_utils.m"
  }
#line 391 "program_representation_utils.m"
}

#line 232 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_44,
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_45,
#line 232 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_46,
#line 232 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__4_47)
#line 232 "program_representation_utils.m"
{
#line 232 "program_representation_utils.m"
  {
#line 232 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 232 "program_representation_utils.m"
    {
#line 232 "program_representation_utils.m"
      program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(program_representation_utils__HeadVar__2_45, program_representation_utils__HeadVar__3_46, program_representation_utils__HeadVar__4_47);
#line 232 "program_representation_utils.m"
      return;
    }
#line 232 "program_representation_utils.m"
  }
#line 232 "program_representation_utils.m"
}

#line 864 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 864 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 864 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 864 "program_representation_utils.m"
{
#line 870 "program_representation_utils.m"
  {
#line 870 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 870 "program_representation_utils.m"
    {
#line 870 "program_representation_utils.m"
      program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(program_representation_utils__HeadVar__3_3);
#line 870 "program_representation_utils.m"
      return;
    }
#line 870 "program_representation_utils.m"
  }
#line 864 "program_representation_utils.m"
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
#line 3616 "program_representation_utils.c"
  {
#line 3618 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded = (program_representation_utils__HeadVar__2_1 == program_representation_utils__HeadVar__2_2);

#line 3621 "program_representation_utils.c"
    return program_representation_utils__succeeded;
#line 3623 "program_representation_utils.c"
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
#line 3656 "program_representation_utils.c"
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
#line 3678 "program_representation_utils.c"
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

#line 3749 "program_representation_utils.c"
        {
#line 3751 "program_representation_utils.c"
          program_representation_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) program_representation_utils__V_3_3, (MR_Word) program_representation_utils__V_5_5);
        }
#line 56 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 56 "program_representation_utils.m"
          {
#line 3758 "program_representation_utils.c"
            program_representation_utils__TypeCtorInfo_11_11 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0;
#line 3760 "program_representation_utils.c"
            {
#line 3762 "program_representation_utils.c"
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

#line 1126 "program_representation_utils.m"
void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0(
#line 1126 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 1126 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 1126 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3)
#line 1126 "program_representation_utils.m"
{
#line 1126 "program_representation_utils.m"
  {
#line 1126 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1126 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;
#line 1126 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_7 = (MR_Integer) program_representation_utils__HeadVar__3_3;

#line 1126 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_6 == program_representation_utils__CastY_7);
#line 1126 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 3800 "program_representation_utils.c"
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 1126 "program_representation_utils.m"
    else
#line 1126 "program_representation_utils.m"
      {
#line 1126 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = (MR_Word) program_representation_utils__HeadVar__2_2;
#line 1126 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = (MR_Word) program_representation_utils__HeadVar__3_3;

#line 1126 "program_representation_utils.m"
        {
#line 1126 "program_representation_utils.m"
          mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__V_4_4)), ((MR_Box) (program_representation_utils__V_5_5)));
#line 1126 "program_representation_utils.m"
          return;
        }
#line 1126 "program_representation_utils.m"
      }
#line 1126 "program_representation_utils.m"
  }
#line 1126 "program_representation_utils.m"
}

#line 1126 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0(
#line 1126 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 1126 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2)
#line 1126 "program_representation_utils.m"
{
#line 1126 "program_representation_utils.m"
  {
#line 1126 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1126 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_5 = (MR_Integer) program_representation_utils__HeadVar__1_1;
#line 1126 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;

#line 1126 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_5 == program_representation_utils__CastY_6);
#line 1126 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1126 "program_representation_utils.m"
      program_representation_utils__succeeded = MR_TRUE;
#line 1126 "program_representation_utils.m"
    else
#line 1126 "program_representation_utils.m"
      {
#line 1126 "program_representation_utils.m"
        MR_Word program_representation_utils__V_3_3 = (MR_Word) program_representation_utils__HeadVar__1_1;
#line 1126 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = (MR_Word) program_representation_utils__HeadVar__2_2;

#line 3858 "program_representation_utils.c"
        {
#line 3860 "program_representation_utils.c"
          return program_representation_utils__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], ((MR_Box) (program_representation_utils__V_3_3)), ((MR_Box) (program_representation_utils__V_4_4)));
        }
#line 1126 "program_representation_utils.m"
      }
#line 1126 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 1126 "program_representation_utils.m"
  }
#line 1126 "program_representation_utils.m"
}

#line 982 "program_representation_utils.m"
void MR_CALL 
program_representation_utils____Compare____inst_map_0_0(
#line 982 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__1_1,
#line 982 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 982 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__3_3)
#line 982 "program_representation_utils.m"
{
#line 982 "program_representation_utils.m"
  {
#line 982 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 982 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_9 = (MR_Integer) program_representation_utils__HeadVar__2_2;
#line 982 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_10 = (MR_Integer) program_representation_utils__HeadVar__3_3;

#line 982 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_9 == program_representation_utils__CastY_10);
#line 982 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 3896 "program_representation_utils.c"
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 982 "program_representation_utils.m"
    else
#line 982 "program_representation_utils.m"
      {
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_8_8;

#line 982 "program_representation_utils.m"
        {
#line 982 "program_representation_utils.m"
          mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_2[1], &program_representation_utils__V_8_8, ((MR_Box) (program_representation_utils__V_4_4)), ((MR_Box) (program_representation_utils__V_6_6)));
        }
#line 3918 "program_representation_utils.c"
        program_representation_utils__succeeded = (program_representation_utils__V_8_8 == (MR_Integer) 0);
#line 982 "program_representation_utils.m"
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
#line 982 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 982 "program_representation_utils.m"
          *program_representation_utils__HeadVar__1_1 = program_representation_utils__V_8_8;
#line 982 "program_representation_utils.m"
        else
#line 982 "program_representation_utils.m"
          {
#line 982 "program_representation_utils.m"
            {
#line 982 "program_representation_utils.m"
              mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_2[2], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__V_5_5)), ((MR_Box) (program_representation_utils__V_7_7)));
#line 982 "program_representation_utils.m"
              return;
            }
#line 982 "program_representation_utils.m"
          }
#line 982 "program_representation_utils.m"
      }
#line 982 "program_representation_utils.m"
  }
#line 982 "program_representation_utils.m"
}

#line 982 "program_representation_utils.m"
MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0(
#line 982 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 982 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2)
#line 982 "program_representation_utils.m"
{
#line 982 "program_representation_utils.m"
  {
#line 982 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 982 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastX_7 = (MR_Integer) program_representation_utils__HeadVar__1_1;
#line 982 "program_representation_utils.m"
    MR_Integer program_representation_utils__CastY_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;

#line 982 "program_representation_utils.m"
    program_representation_utils__succeeded = (program_representation_utils__CastX_7 == program_representation_utils__CastY_8);
#line 982 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 982 "program_representation_utils.m"
      program_representation_utils__succeeded = MR_TRUE;
#line 982 "program_representation_utils.m"
    else
#line 982 "program_representation_utils.m"
      {
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeInfo_10_10;
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 982 "program_representation_utils.m"
        MR_Word program_representation_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));

#line 3985 "program_representation_utils.c"
        {
#line 3987 "program_representation_utils.c"
          program_representation_utils__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &program_representation_utils_scalar_common_2[1], ((MR_Box) (program_representation_utils__V_3_3)), ((MR_Box) (program_representation_utils__V_5_5)));
        }
#line 982 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 982 "program_representation_utils.m"
          {
#line 3994 "program_representation_utils.c"
            program_representation_utils__TypeInfo_10_10 = (MR_Word) &program_representation_utils_scalar_common_2[2];
#line 3996 "program_representation_utils.c"
            {
#line 3998 "program_representation_utils.c"
              return program_representation_utils__succeeded = mercury__builtin__unify_2_p_0(program_representation_utils__TypeInfo_10_10, ((MR_Box) (program_representation_utils__V_4_4)), ((MR_Box) (program_representation_utils__V_6_6)));
            }
#line 982 "program_representation_utils.m"
          }
#line 982 "program_representation_utils.m"
      }
#line 982 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 982 "program_representation_utils.m"
  }
#line 982 "program_representation_utils.m"
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
#line 4036 "program_representation_utils.c"
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
#line 4048 "program_representation_utils.c"
          *program_representation_utils__HeadVar__1_1 = (MR_Integer) 2;
#line 193 "program_representation_utils.m"
      else
#line 193 "program_representation_utils.m"
        {
#line 193 "program_representation_utils.m"
          MR_Word program_representation_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));

#line 193 "program_representation_utils.m"
          if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4059 "program_representation_utils.c"
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
#line 4142 "program_representation_utils.c"
              program_representation_utils__TypeInfo_9_9 = (MR_Word) &program_representation_utils_scalar_common_1[8];
#line 4144 "program_representation_utils.c"
              {
#line 4146 "program_representation_utils.c"
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

#line 1118 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
#line 1118 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1118 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1118 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1118 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1118 "program_representation_utils.m"
{
#line 1118 "program_representation_utils.m"
  {
#line 1118 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1118 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_STATE_VARIABLE_Set_10;

#line 1118 "program_representation_utils.m"
    {
#line 1118 "program_representation_utils.m"
      program_representation_utils__inst_map_get_var_deps_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_STATE_VARIABLE_Set_10);
    }
#line 1118 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_STATE_VARIABLE_Set_10));
#line 1118 "program_representation_utils.m"
  }
#line 1118 "program_representation_utils.m"
}

#line 1106 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
#line 1106 "program_representation_utils.m"
  MR_Word program_representation_utils__VarToDepVars_5,
#line 1106 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarRep_6,
#line 1106 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Set_0_9,
#line 1106 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Set_10)
#line 1106 "program_representation_utils.m"
{
#line 1115 "program_representation_utils.m"
  {
#line 1115 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1110 "program_representation_utils.m"
    {
#line 1110 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__set__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__STATE_VARIABLE_Set_0_9, ((MR_Box) (program_representation_utils__VarRep_6)));
    }
#line 1115 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1110 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Set_10 = program_representation_utils__STATE_VARIABLE_Set_0_9;
#line 1115 "program_representation_utils.m"
    else
#line 1119 "program_representation_utils.m"
      {
#line 1119 "program_representation_utils.m"
        MR_Word program_representation_utils__DepVars_8;
#line 1116 "program_representation_utils.m"
        MR_Box program_representation_utils__conv0_DepVars_8;

#line 1116 "program_representation_utils.m"
        {
#line 1116 "program_representation_utils.m"
          program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars_5, program_representation_utils__VarRep_6, &program_representation_utils__conv0_DepVars_8);
        }
#line 1116 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 1116 "program_representation_utils.m"
          {
#line 1116 "program_representation_utils.m"
            program_representation_utils__DepVars_8 = ((MR_Word) program_representation_utils__conv0_DepVars_8);
#line 1116 "program_representation_utils.m"
            program_representation_utils__succeeded = MR_TRUE;
#line 1116 "program_representation_utils.m"
          }
#line 1119 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 1117 "program_representation_utils.m"
          {
#line 1117 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1117 "program_representation_utils.m"
            MR_Word program_representation_utils__STATE_VARIABLE_Set_11_11;
#line 1117 "program_representation_utils.m"
            MR_Word program_representation_utils__V_12_12;
#line 1118 "program_representation_utils.m"
            MR_Box program_representation_utils__conv2_STATE_VARIABLE_Set_10;

#line 1117 "program_representation_utils.m"
            {
#line 1117 "program_representation_utils.m"
              program_representation_utils__STATE_VARIABLE_Set_11_11 = mercury__set__union_2_f_0(program_representation_utils__TypeCtorInfo_17_17, program_representation_utils__STATE_VARIABLE_Set_0_9, program_representation_utils__DepVars_8);
            }
#line 1118 "program_representation_utils.m"
            {
#line 1118 "program_representation_utils.m"
              program_representation_utils__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_5[2]));
#line 1118 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 1) = ((MR_Box) (program_representation_utils__inst_map_get_var_deps_2_4_p_0_1));
#line 1118 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1118 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 3) = ((MR_Box) (program_representation_utils__VarToDepVars_5));
#line 1118 "program_representation_utils.m"
            }
#line 1118 "program_representation_utils.m"
            {
#line 1118 "program_representation_utils.m"
              mercury__set__fold_4_p_0(program_representation_utils__TypeCtorInfo_17_17, (MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__V_12_12, program_representation_utils__DepVars_8, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Set_11_11)), &program_representation_utils__conv2_STATE_VARIABLE_Set_10);
            }
#line 1118 "program_representation_utils.m"
            *program_representation_utils__STATE_VARIABLE_Set_10 = ((MR_Word) program_representation_utils__conv2_STATE_VARIABLE_Set_10);
#line 1117 "program_representation_utils.m"
          }
#line 1119 "program_representation_utils.m"
        else
#line 1118 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_Set_10 = program_representation_utils__STATE_VARIABLE_Set_0_9;
#line 1119 "program_representation_utils.m"
      }
#line 1115 "program_representation_utils.m"
  }
#line 1106 "program_representation_utils.m"
}

#line 1065 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
#line 1065 "program_representation_utils.m"
  MR_Word program_representation_utils__DepVars0_7,
#line 1065 "program_representation_utils.m"
  MR_Integer program_representation_utils__Var_8,
#line 1065 "program_representation_utils.m"
  MR_Word program_representation_utils__InstMap0_9,
#line 1065 "program_representation_utils.m"
  MR_Word * program_representation_utils__InstMap_10,
#line 1065 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
#line 1065 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22)
#line 1065 "program_representation_utils.m"
{
#line 1070 "program_representation_utils.m"
  {
#line 1070 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1070 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMap0_9, (MR_Integer) 0)));
#line 1070 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMap0_9, (MR_Integer) 1)));
#line 1070 "program_representation_utils.m"
    MR_Word program_representation_utils__NewInst_16;
#line 1070 "program_representation_utils.m"
    MR_Word program_representation_utils__DepVars_17;
#line 1070 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst_19;
#line 1070 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_20;
#line 4328 "program_representation_utils.c"
    MR_Word program_representation_utils__InstPrime_14;
#line 1072 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_InstPrime_14;

#line 1072 "program_representation_utils.m"
    {
#line 1072 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarToInst0_12, program_representation_utils__Var_8, &program_representation_utils__conv0_InstPrime_14);
    }
#line 1072 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1072 "program_representation_utils.m"
      {
#line 1072 "program_representation_utils.m"
        program_representation_utils__InstPrime_14 = ((MR_Word) program_representation_utils__conv0_InstPrime_14);
#line 1072 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 1072 "program_representation_utils.m"
      }
#line 4348 "program_representation_utils.c"
    if (program_representation_utils__succeeded)
#line 1081 "program_representation_utils.m"
      if ((program_representation_utils__InstPrime_14 == (MR_Integer) 0))
#line 1078 "program_representation_utils.m"
        {
#line 1079 "program_representation_utils.m"
          program_representation_utils__NewInst_16 = (MR_Integer) 1;
#line 1080 "program_representation_utils.m"
          program_representation_utils__DepVars_17 = program_representation_utils__DepVars0_7;
#line 1080 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
#line 1078 "program_representation_utils.m"
        }
#line 1081 "program_representation_utils.m"
      else
#line 1084 "program_representation_utils.m"
        {
#line 1084 "program_representation_utils.m"
          MR_Word program_representation_utils__DepVarsFromIM_18;
#line 1086 "program_representation_utils.m"
          MR_Box program_representation_utils__conv1_DepVarsFromIM_18;

#line 1085 "program_representation_utils.m"
          program_representation_utils__NewInst_16 = (MR_Integer) 2;
#line 1086 "program_representation_utils.m"
          {
#line 1086 "program_representation_utils.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars0_13, program_representation_utils__Var_8, &program_representation_utils__conv1_DepVarsFromIM_18);
          }
#line 1086 "program_representation_utils.m"
          program_representation_utils__DepVarsFromIM_18 = ((MR_Word) program_representation_utils__conv1_DepVarsFromIM_18);
#line 1087 "program_representation_utils.m"
          {
#line 1087 "program_representation_utils.m"
            program_representation_utils__DepVars_17 = mercury__set__union_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__DepVars0_7, program_representation_utils__DepVarsFromIM_18);
          }
#line 1088 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = (MR_Integer) 0;
#line 1084 "program_representation_utils.m"
        }
#line 4389 "program_representation_utils.c"
    else
#line 4391 "program_representation_utils.c"
      {
#line 1079 "program_representation_utils.m"
        program_representation_utils__NewInst_16 = (MR_Integer) 1;
#line 1080 "program_representation_utils.m"
        program_representation_utils__DepVars_17 = program_representation_utils__DepVars0_7;
#line 1080 "program_representation_utils.m"
        *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
#line 4399 "program_representation_utils.c"
      }
#line 1090 "program_representation_utils.m"
    {
#line 1090 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__Var_8, ((MR_Box) (program_representation_utils__NewInst_16)), program_representation_utils__VarToInst0_12, &program_representation_utils__VarToInst_19);
    }
#line 1091 "program_representation_utils.m"
    {
#line 1091 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__Var_8, ((MR_Box) (program_representation_utils__DepVars_17)), program_representation_utils__VarToDepVars0_13, &program_representation_utils__VarToDepVars_20);
    }
#line 1092 "program_representation_utils.m"
    {
#line 1092 "program_representation_utils.m"
      MR_Word base;
#line 1092 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "program_representation_utils.m"
      *program_representation_utils__InstMap_10 = base;
#line 1092 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__VarToInst_19));
#line 1092 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_20));
#line 1092 "program_representation_utils.m"
    }
#line 1070 "program_representation_utils.m"
  }
#line 1065 "program_representation_utils.m"
}

#line 1049 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
#line 1049 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 1049 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 1049 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__3_3)
#line 1049 "program_representation_utils.m"
{
#line 1051 "program_representation_utils.m"
  {
#line 1051 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1051 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__1_1 == (MR_Integer) 0))
#line 1051 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 0))
#line 1051 "program_representation_utils.m"
        *program_representation_utils__HeadVar__3_3 = (MR_Integer) 0;
#line 1051 "program_representation_utils.m"
      else
#line 1051 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 1))
#line 1052 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1051 "program_representation_utils.m"
        else
#line 1053 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1051 "program_representation_utils.m"
    else
#line 1051 "program_representation_utils.m"
      if ((program_representation_utils__HeadVar__1_1 == (MR_Integer) 1))
#line 1051 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 0))
#line 1054 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1051 "program_representation_utils.m"
        else
#line 1051 "program_representation_utils.m"
          if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 1))
#line 1055 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 1;
#line 1051 "program_representation_utils.m"
          else
#line 1056 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1051 "program_representation_utils.m"
      else
#line 1051 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 0))
#line 1057 "program_representation_utils.m"
          *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1051 "program_representation_utils.m"
        else
#line 1051 "program_representation_utils.m"
          if ((program_representation_utils__HeadVar__2_2 == (MR_Integer) 1))
#line 1058 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1051 "program_representation_utils.m"
          else
#line 1059 "program_representation_utils.m"
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
#line 1051 "program_representation_utils.m"
  }
#line 1049 "program_representation_utils.m"
}

#line 996 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
#line 996 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__1_1,
#line 996 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_9,
#line 996 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_10)
#line 996 "program_representation_utils.m"
{
#line 999 "program_representation_utils.m"
  {
#line 999 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 999 "program_representation_utils.m"
    MR_Integer program_representation_utils__VarRep_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__ModeRep_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__InitialInstRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModeRep_5, (MR_Integer) 0)));
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__V_11_11;
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst0_19;
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars0_20;
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst_21;
#line 999 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_22;
#line 1000 "program_representation_utils.m"
    MR_Word program_representation_utils__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModeRep_5, (MR_Integer) 1)));

#line 1001 "program_representation_utils.m"
    {
#line 1001 "program_representation_utils.m"
      program_representation_utils__V_11_11 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 1009 "program_representation_utils.m"
    program_representation_utils__VarToInst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_InstMap_0_9, (MR_Integer) 0)));
#line 1009 "program_representation_utils.m"
    program_representation_utils__VarToDepVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_InstMap_0_9, (MR_Integer) 1)));
#line 1010 "program_representation_utils.m"
    {
#line 1010 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarRep_4, ((MR_Box) (program_representation_utils__InitialInstRep_7)), program_representation_utils__VarToInst0_19, &program_representation_utils__VarToInst_21);
    }
#line 1011 "program_representation_utils.m"
    {
#line 1011 "program_representation_utils.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarRep_4, ((MR_Box) (program_representation_utils__V_11_11)), program_representation_utils__VarToDepVars0_20, &program_representation_utils__VarToDepVars_22);
    }
#line 1012 "program_representation_utils.m"
    {
#line 1012 "program_representation_utils.m"
      MR_Word base;
#line 1012 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_InstMap_10 = base;
#line 1012 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__VarToInst_21));
#line 1012 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_22));
#line 1012 "program_representation_utils.m"
    }
#line 999 "program_representation_utils.m"
  }
#line 996 "program_representation_utils.m"
}

#line 969 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_case_9_p_0(
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_37,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_10,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Case_0_20,
#line 969 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Case_21,
#line 969 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_CaseNum_0_22,
#line 969 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_CaseNum_23,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_24,
#line 969 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_25,
#line 969 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_26,
#line 969 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_27)
#line 969 "program_representation_utils.m"
{
#line 973 "program_representation_utils.m"
  {
#line 973 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 973 "program_representation_utils.m"
    MR_Word program_representation_utils__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 0)));
#line 973 "program_representation_utils.m"
    MR_Word program_representation_utils__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 1)));
#line 973 "program_representation_utils.m"
    MR_Word program_representation_utils__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 2)));
#line 973 "program_representation_utils.m"
    MR_Word program_representation_utils__Goal_19;

#line 975 "program_representation_utils.m"
    {
#line 975 "program_representation_utils.m"
      program_representation_utils__label_goal_wrapper__ho1_10_p_0(program_representation_utils__TypeInfo_for_T_37, program_representation_utils__ParentGoalId_10, program_representation_utils__Goal0_17, &program_representation_utils__Goal_19, program_representation_utils__STATE_VARIABLE_CaseNum_0_22, program_representation_utils__STATE_VARIABLE_CaseNum_23, program_representation_utils__STATE_VARIABLE_Counter_0_24, program_representation_utils__STATE_VARIABLE_Counter_25, program_representation_utils__STATE_VARIABLE_Map_0_26, program_representation_utils__STATE_VARIABLE_Map_27);
    }
#line 978 "program_representation_utils.m"
    {
#line 978 "program_representation_utils.m"
      MR_Word base;
#line 978 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 978 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Case_21 = base;
#line 978 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__MainConsId_15));
#line 978 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__OtherConsIds_16));
#line 978 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (program_representation_utils__Goal_19));
#line 978 "program_representation_utils.m"
    }
#line 973 "program_representation_utils.m"
  }
#line 969 "program_representation_utils.m"
}

#line 960 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__MakePathStep_11,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__ParentGoalId_12,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
#line 960 "program_representation_utils.m"
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
#line 960 "program_representation_utils.m"
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
#line 960 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
#line 960 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24)
#line 960 "program_representation_utils.m"
{
#line 964 "program_representation_utils.m"
  {
#line 964 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 964 "program_representation_utils.m"
    MR_Word program_representation_utils__V_25_25;
#line 964 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;
#line 965 "program_representation_utils.m"
    MR_Box MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), program_representation_utils__MakePathStep_11, (MR_Integer) 1)));
#line 965 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_V_29_29;

#line 965 "program_representation_utils.m"
    {
#line 965 "program_representation_utils.m"
      program_representation_utils__conv1_V_29_29 = program_representation_utils__func_0(((MR_Box) program_representation_utils__MakePathStep_11), ((MR_Box) (program_representation_utils__STATE_VARIABLE_GoalNum_0_19)));
    }
#line 965 "program_representation_utils.m"
    program_representation_utils__V_29_29 = ((MR_Word) program_representation_utils__conv1_V_29_29);
#line 965 "program_representation_utils.m"
    {
#line 965 "program_representation_utils.m"
      program_representation_utils__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 0) = ((MR_Box) (program_representation_utils__ParentGoalId_12));
#line 965 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 1) = ((MR_Box) (program_representation_utils__V_29_29));
#line 965 "program_representation_utils.m"
    }
#line 965 "program_representation_utils.m"
    {
#line 965 "program_representation_utils.m"
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__V_25_25, program_representation_utils__STATE_VARIABLE_Goal_0_17, program_representation_utils__STATE_VARIABLE_Goal_18, program_representation_utils__STATE_VARIABLE_Counter_0_21, program_representation_utils__STATE_VARIABLE_Counter_22, program_representation_utils__STATE_VARIABLE_Map_0_23, program_representation_utils__STATE_VARIABLE_Map_24);
    }
#line 967 "program_representation_utils.m"
    *program_representation_utils__STATE_VARIABLE_GoalNum_20 = (program_representation_utils__STATE_VARIABLE_GoalNum_0_19 + (MR_Integer) 1);
#line 964 "program_representation_utils.m"
  }
#line 960 "program_representation_utils.m"
}

#line 930 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 930 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 930 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8)
#line 930 "program_representation_utils.m"
{
#line 930 "program_representation_utils.m"
  {
#line 930 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 930 "program_representation_utils.m"
    MR_Word program_representation_utils__conv19_STATE_VARIABLE_Case_21;
#line 930 "program_representation_utils.m"
    MR_Integer program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23;
#line 930 "program_representation_utils.m"
    MR_Word program_representation_utils__conv17_STATE_VARIABLE_Counter_25;
#line 930 "program_representation_utils.m"
    MR_Word program_representation_utils__conv16_STATE_VARIABLE_Map_27;

#line 930 "program_representation_utils.m"
    {
#line 930 "program_representation_utils.m"
      program_representation_utils__label_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv19_STATE_VARIABLE_Case_21, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv17_STATE_VARIABLE_Counter_25, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv16_STATE_VARIABLE_Map_27);
    }
#line 930 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv19_STATE_VARIABLE_Case_21));
#line 930 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23));
#line 930 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv17_STATE_VARIABLE_Counter_25));
#line 930 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv16_STATE_VARIABLE_Map_27));
#line 930 "program_representation_utils.m"
  }
#line 930 "program_representation_utils.m"
}

#line 925 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 925 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8)
#line 925 "program_representation_utils.m"
{
#line 925 "program_representation_utils.m"
  {
#line 925 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 925 "program_representation_utils.m"
    MR_Word program_representation_utils__conv12_STATE_VARIABLE_Goal_18;
#line 925 "program_representation_utils.m"
    MR_Integer program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20;
#line 925 "program_representation_utils.m"
    MR_Word program_representation_utils__conv10_STATE_VARIABLE_Counter_22;
#line 925 "program_representation_utils.m"
    MR_Word program_representation_utils__conv9_STATE_VARIABLE_Map_24;

#line 925 "program_representation_utils.m"
    {
#line 925 "program_representation_utils.m"
      program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 5))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv12_STATE_VARIABLE_Goal_18, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv10_STATE_VARIABLE_Counter_22, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv9_STATE_VARIABLE_Map_24);
    }
#line 925 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv12_STATE_VARIABLE_Goal_18));
#line 925 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20));
#line 925 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv10_STATE_VARIABLE_Counter_22));
#line 925 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv9_STATE_VARIABLE_Map_24));
#line 925 "program_representation_utils.m"
  }
#line 925 "program_representation_utils.m"
}

#line 925 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 925 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 925 "program_representation_utils.m"
{
#line 925 "program_representation_utils.m"
  {
#line 925 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 925 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 925 "program_representation_utils.m"
    MR_Word program_representation_utils__conv8_HeadVar__2_81;

#line 925 "program_representation_utils.m"
    {
#line 925 "program_representation_utils.m"
      program_representation_utils__conv8_HeadVar__2_81 = program_representation_utils__IntroducedFrom__func__label_goal__925__1_1_f_0(((MR_Integer) program_representation_utils__wrapper_arg_1));
    }
#line 925 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv8_HeadVar__2_81));
#line 925 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 925 "program_representation_utils.m"
  }
#line 925 "program_representation_utils.m"
}

#line 920 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_5,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_6,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_7,
#line 920 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_8)
#line 920 "program_representation_utils.m"
{
#line 920 "program_representation_utils.m"
  {
#line 920 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 920 "program_representation_utils.m"
    MR_Word program_representation_utils__conv4_STATE_VARIABLE_Goal_18;
#line 920 "program_representation_utils.m"
    MR_Integer program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20;
#line 920 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_STATE_VARIABLE_Counter_22;
#line 920 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_STATE_VARIABLE_Map_24;

#line 920 "program_representation_utils.m"
    {
#line 920 "program_representation_utils.m"
      program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 5))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv4_STATE_VARIABLE_Goal_18, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv2_STATE_VARIABLE_Counter_22, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv1_STATE_VARIABLE_Map_24);
    }
#line 920 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv4_STATE_VARIABLE_Goal_18));
#line 920 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20));
#line 920 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv2_STATE_VARIABLE_Counter_22));
#line 920 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv1_STATE_VARIABLE_Map_24));
#line 920 "program_representation_utils.m"
  }
#line 920 "program_representation_utils.m"
}

#line 920 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 920 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 920 "program_representation_utils.m"
{
#line 920 "program_representation_utils.m"
  {
#line 920 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 920 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 920 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_HeadVar__2_88;

#line 920 "program_representation_utils.m"
    {
#line 920 "program_representation_utils.m"
      program_representation_utils__conv0_HeadVar__2_88 = program_representation_utils__IntroducedFrom__func__label_goal__920__1_1_f_0(((MR_Integer) program_representation_utils__wrapper_arg_1));
    }
#line 920 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_HeadVar__2_88));
#line 920 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 920 "program_representation_utils.m"
  }
#line 920 "program_representation_utils.m"
}

#line 908 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_94,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__ContainingGoal_8,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_43,
#line 908 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_44,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_45,
#line 908 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_46,
#line 908 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_47,
#line 908 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_48)
#line 908 "program_representation_utils.m"
{
#line 913 "program_representation_utils.m"
  {
#line 913 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 913 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 0)));
#line 913 "program_representation_utils.m"
    MR_Word program_representation_utils__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 1)));
#line 913 "program_representation_utils.m"
    MR_Integer program_representation_utils__GoalIdNum_15;
#line 913 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalId_16;
#line 913 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalExpr_21;
#line 913 "program_representation_utils.m"
    MR_Word program_representation_utils__STATE_VARIABLE_Counter_49_49;
#line 913 "program_representation_utils.m"
    MR_Word program_representation_utils__STATE_VARIABLE_Map_50_50;
#line 914 "program_representation_utils.m"
    MR_Box program_representation_utils__V_14_14 = (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 2));

#line 915 "program_representation_utils.m"
    {
#line 915 "program_representation_utils.m"
      mercury__counter__allocate_3_p_0(&program_representation_utils__GoalIdNum_15, program_representation_utils__STATE_VARIABLE_Counter_0_45, &program_representation_utils__STATE_VARIABLE_Counter_49_49);
    }
#line 916 "program_representation_utils.m"
    program_representation_utils__GoalId_16 = (MR_Word) program_representation_utils__GoalIdNum_15;
#line 917 "program_representation_utils.m"
    {
#line 917 "program_representation_utils.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ((MR_Box) (program_representation_utils__GoalId_16)), ((MR_Box) (program_representation_utils__ContainingGoal_8)), program_representation_utils__STATE_VARIABLE_Map_0_47, &program_representation_utils__STATE_VARIABLE_Map_50_50);
    }
#line 923 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 0))))
#line 919 "program_representation_utils.m"
      {
#line 919 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeInfo_106_106;
#line 919 "program_representation_utils.m"
        MR_Word program_representation_utils__Conjs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
#line 919 "program_representation_utils.m"
        MR_Word program_representation_utils__Conjs_19;
#line 919 "program_representation_utils.m"
        MR_Word program_representation_utils__V_82_82;
#line 920 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_20_20;
#line 920 "program_representation_utils.m"
        MR_Box program_representation_utils__conv7_V_20_20;
#line 920 "program_representation_utils.m"
        MR_Box program_representation_utils__conv6_STATE_VARIABLE_Counter_46;
#line 920 "program_representation_utils.m"
        MR_Box program_representation_utils__conv5_STATE_VARIABLE_Map_48;

#line 920 "program_representation_utils.m"
        {
#line 920 "program_representation_utils.m"
          program_representation_utils__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 920 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 0) = ((MR_Box) (&program_representation_utils_scalar_common_10[0]));
#line 920 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_2));
#line 920 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 920 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 920 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[18]));
#line 920 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_82_82, 5) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 920 "program_representation_utils.m"
        }
#line 5025 "program_representation_utils.c"
        {
#line 5027 "program_representation_utils.c"
          program_representation_utils__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5029 "program_representation_utils.c"
          MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_106_106, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
#line 5031 "program_representation_utils.c"
          MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_106_106, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 5033 "program_representation_utils.c"
        }
#line 920 "program_representation_utils.m"
        {
#line 920 "program_representation_utils.m"
          mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_106_106, (MR_Word) &program_representation_utils_scalar_common_1[6], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__V_82_82, (MR_Word) program_representation_utils__Conjs0_17, &program_representation_utils__Conjs_19, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv7_V_20_20, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv6_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv5_STATE_VARIABLE_Map_48);
        }
#line 920 "program_representation_utils.m"
        program_representation_utils__V_20_20 = ((MR_Integer) program_representation_utils__conv7_V_20_20);
#line 920 "program_representation_utils.m"
        *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv6_STATE_VARIABLE_Counter_46);
#line 920 "program_representation_utils.m"
        *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv5_STATE_VARIABLE_Map_48);
#line 922 "program_representation_utils.m"
        {
#line 922 "program_representation_utils.m"
          program_representation_utils__GoalExpr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 922 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Conjs_19));
#line 922 "program_representation_utils.m"
        }
#line 919 "program_representation_utils.m"
      }
#line 923 "program_representation_utils.m"
    else
#line 923 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 1))))
#line 924 "program_representation_utils.m"
        {
#line 924 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeInfo_120_120;
#line 924 "program_representation_utils.m"
          MR_Word program_representation_utils__Disjs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
#line 924 "program_representation_utils.m"
          MR_Word program_representation_utils__Disjs_23;
#line 924 "program_representation_utils.m"
          MR_Word program_representation_utils__V_75_75;
#line 925 "program_representation_utils.m"
          MR_Integer program_representation_utils__V_24_24;
#line 925 "program_representation_utils.m"
          MR_Box program_representation_utils__conv15_V_24_24;
#line 925 "program_representation_utils.m"
          MR_Box program_representation_utils__conv14_STATE_VARIABLE_Counter_46;
#line 925 "program_representation_utils.m"
          MR_Box program_representation_utils__conv13_STATE_VARIABLE_Map_48;

#line 925 "program_representation_utils.m"
          {
#line 925 "program_representation_utils.m"
            program_representation_utils__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 925 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 0) = ((MR_Box) (&program_representation_utils_scalar_common_10[0]));
#line 925 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_4));
#line 925 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 925 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 925 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[19]));
#line 925 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__V_75_75, 5) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 925 "program_representation_utils.m"
          }
#line 5097 "program_representation_utils.c"
          {
#line 5099 "program_representation_utils.c"
            program_representation_utils__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5101 "program_representation_utils.c"
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_120_120, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
#line 5103 "program_representation_utils.c"
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_120_120, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 5105 "program_representation_utils.c"
          }
#line 925 "program_representation_utils.m"
          {
#line 925 "program_representation_utils.m"
            mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_120_120, (MR_Word) &program_representation_utils_scalar_common_1[6], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__V_75_75, (MR_Word) program_representation_utils__Disjs0_22, &program_representation_utils__Disjs_23, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv15_V_24_24, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv14_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv13_STATE_VARIABLE_Map_48);
          }
#line 925 "program_representation_utils.m"
          program_representation_utils__V_24_24 = ((MR_Integer) program_representation_utils__conv15_V_24_24);
#line 925 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv14_STATE_VARIABLE_Counter_46);
#line 925 "program_representation_utils.m"
          *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv13_STATE_VARIABLE_Map_48);
#line 927 "program_representation_utils.m"
          {
#line 927 "program_representation_utils.m"
            program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "program_representation_utils.m"
            MR_hl_field(MR_mktag(1), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Disjs_23));
#line 927 "program_representation_utils.m"
          }
#line 924 "program_representation_utils.m"
        }
#line 923 "program_representation_utils.m"
      else
#line 923 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 2))))
#line 929 "program_representation_utils.m"
          {
#line 929 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeInfo_134_134;
#line 929 "program_representation_utils.m"
            MR_Integer program_representation_utils__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
#line 929 "program_representation_utils.m"
            MR_Word program_representation_utils__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 929 "program_representation_utils.m"
            MR_Word program_representation_utils__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
#line 929 "program_representation_utils.m"
            MR_Word program_representation_utils__Cases_28;
#line 929 "program_representation_utils.m"
            MR_Word program_representation_utils__V_71_71;
#line 930 "program_representation_utils.m"
            MR_Integer program_representation_utils__V_29_29;
#line 930 "program_representation_utils.m"
            MR_Box program_representation_utils__conv22_V_29_29;
#line 930 "program_representation_utils.m"
            MR_Box program_representation_utils__conv21_STATE_VARIABLE_Counter_46;
#line 930 "program_representation_utils.m"
            MR_Box program_representation_utils__conv20_STATE_VARIABLE_Map_48;

#line 930 "program_representation_utils.m"
            {
#line 930 "program_representation_utils.m"
              program_representation_utils__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 0) = ((MR_Box) (&program_representation_utils_scalar_common_11[0]));
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_5));
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 930 "program_representation_utils.m"
              MR_hl_field(MR_mktag(0), program_representation_utils__V_71_71, 4) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 930 "program_representation_utils.m"
            }
#line 5171 "program_representation_utils.c"
            {
#line 5173 "program_representation_utils.c"
              program_representation_utils__TypeInfo_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5175 "program_representation_utils.c"
              MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_134_134, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1));
#line 5177 "program_representation_utils.c"
              MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_134_134, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
#line 5179 "program_representation_utils.c"
            }
#line 930 "program_representation_utils.m"
            {
#line 930 "program_representation_utils.m"
              mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_134_134, (MR_Word) &program_representation_utils_scalar_common_1[7], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__V_71_71, (MR_Word) program_representation_utils__Cases0_27, &program_representation_utils__Cases_28, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv22_V_29_29, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv21_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv20_STATE_VARIABLE_Map_48);
            }
#line 930 "program_representation_utils.m"
            program_representation_utils__V_29_29 = ((MR_Integer) program_representation_utils__conv22_V_29_29);
#line 930 "program_representation_utils.m"
            *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv21_STATE_VARIABLE_Counter_46);
#line 930 "program_representation_utils.m"
            *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv20_STATE_VARIABLE_Map_48);
#line 931 "program_representation_utils.m"
            {
#line 931 "program_representation_utils.m"
              program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 931 "program_representation_utils.m"
              MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Var_25));
#line 931 "program_representation_utils.m"
              MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__CanFail_26));
#line 931 "program_representation_utils.m"
              MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__Cases_28));
#line 931 "program_representation_utils.m"
            }
#line 929 "program_representation_utils.m"
          }
#line 923 "program_representation_utils.m"
        else
#line 923 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 952 "program_representation_utils.m"
            {
#line 953 "program_representation_utils.m"
              program_representation_utils__GoalExpr_21 = program_representation_utils__GoalExpr0_12;
#line 953 "program_representation_utils.m"
              *program_representation_utils__STATE_VARIABLE_Counter_46 = program_representation_utils__STATE_VARIABLE_Counter_49_49;
#line 953 "program_representation_utils.m"
              *program_representation_utils__STATE_VARIABLE_Map_48 = program_representation_utils__STATE_VARIABLE_Map_50_50;
#line 952 "program_representation_utils.m"
            }
#line 923 "program_representation_utils.m"
          else
#line 923 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 933 "program_representation_utils.m"
              {
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__Cond0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__Then0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__Else0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 3)));
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__Cond_33;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__Then_34;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__Else_35;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__V_59_59;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Counter_60_60;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Map_61_61;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__V_63_63;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Counter_64_64;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__STATE_VARIABLE_Map_65_65;
#line 933 "program_representation_utils.m"
                MR_Word program_representation_utils__V_67_67;

#line 934 "program_representation_utils.m"
                {
#line 934 "program_representation_utils.m"
                  program_representation_utils__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_59_59, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 934 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "program_representation_utils.m"
                }
#line 934 "program_representation_utils.m"
                {
#line 934 "program_representation_utils.m"
                  program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_59_59, program_representation_utils__Cond0_30, &program_representation_utils__Cond_33, program_representation_utils__STATE_VARIABLE_Counter_49_49, &program_representation_utils__STATE_VARIABLE_Counter_60_60, program_representation_utils__STATE_VARIABLE_Map_50_50, &program_representation_utils__STATE_VARIABLE_Map_61_61);
                }
#line 936 "program_representation_utils.m"
                {
#line 936 "program_representation_utils.m"
                  program_representation_utils__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_63_63, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 936 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 936 "program_representation_utils.m"
                }
#line 936 "program_representation_utils.m"
                {
#line 936 "program_representation_utils.m"
                  program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_63_63, program_representation_utils__Then0_31, &program_representation_utils__Then_34, program_representation_utils__STATE_VARIABLE_Counter_60_60, &program_representation_utils__STATE_VARIABLE_Counter_64_64, program_representation_utils__STATE_VARIABLE_Map_61_61, &program_representation_utils__STATE_VARIABLE_Map_65_65);
                }
#line 938 "program_representation_utils.m"
                {
#line 938 "program_representation_utils.m"
                  program_representation_utils__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_67_67, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 938 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 938 "program_representation_utils.m"
                }
#line 938 "program_representation_utils.m"
                {
#line 938 "program_representation_utils.m"
                  program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_67_67, program_representation_utils__Else0_32, &program_representation_utils__Else_35, program_representation_utils__STATE_VARIABLE_Counter_64_64, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_65_65, program_representation_utils__STATE_VARIABLE_Map_48);
                }
#line 940 "program_representation_utils.m"
                {
#line 940 "program_representation_utils.m"
                  program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 940 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 940 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__Cond_33));
#line 940 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__Then_34));
#line 940 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 3) = ((MR_Box) (program_representation_utils__Else_35));
#line 940 "program_representation_utils.m"
                }
#line 933 "program_representation_utils.m"
              }
#line 923 "program_representation_utils.m"
            else
#line 923 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 942 "program_representation_utils.m"
                {
#line 942 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 942 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal_37;
#line 942 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_55_55;

#line 943 "program_representation_utils.m"
                  {
#line 943 "program_representation_utils.m"
                    program_representation_utils__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_55_55, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 943 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 943 "program_representation_utils.m"
                  }
#line 943 "program_representation_utils.m"
                  {
#line 943 "program_representation_utils.m"
                    program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_55_55, program_representation_utils__SubGoal0_36, &program_representation_utils__SubGoal_37, program_representation_utils__STATE_VARIABLE_Counter_49_49, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_50_50, program_representation_utils__STATE_VARIABLE_Map_48);
                  }
#line 945 "program_representation_utils.m"
                  {
#line 945 "program_representation_utils.m"
                    program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 945 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__SubGoal_37));
#line 945 "program_representation_utils.m"
                  }
#line 942 "program_representation_utils.m"
                }
#line 923 "program_representation_utils.m"
              else
#line 947 "program_representation_utils.m"
                {
#line 947 "program_representation_utils.m"
                  MR_Word program_representation_utils__ScopeIsCut_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
#line 947 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_51_51;
#line 947 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_54_54;
#line 947 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
#line 947 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoal_93;

#line 948 "program_representation_utils.m"
                  {
#line 948 "program_representation_utils.m"
                    program_representation_utils__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 948 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_54_54, 1) = ((MR_Box) (program_representation_utils__ScopeIsCut_38));
#line 948 "program_representation_utils.m"
                  }
#line 948 "program_representation_utils.m"
                  {
#line 948 "program_representation_utils.m"
                    program_representation_utils__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_51_51, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 948 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__V_51_51, 1) = ((MR_Box) (program_representation_utils__V_54_54));
#line 948 "program_representation_utils.m"
                  }
#line 948 "program_representation_utils.m"
                  {
#line 948 "program_representation_utils.m"
                    program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__V_51_51, program_representation_utils__SubGoal0_92, &program_representation_utils__SubGoal_93, program_representation_utils__STATE_VARIABLE_Counter_49_49, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_50_50, program_representation_utils__STATE_VARIABLE_Map_48);
                  }
#line 950 "program_representation_utils.m"
                  {
#line 950 "program_representation_utils.m"
                    program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 950 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 950 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__SubGoal_93));
#line 950 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__ScopeIsCut_38));
#line 950 "program_representation_utils.m"
                  }
#line 947 "program_representation_utils.m"
                }
#line 955 "program_representation_utils.m"
    {
#line 955 "program_representation_utils.m"
      MR_Word base;
#line 955 "program_representation_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 955 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Goal_44 = base;
#line 955 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__GoalExpr_21));
#line 955 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__Detism_13));
#line 955 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (program_representation_utils__GoalId_16));
#line 955 "program_representation_utils.m"
    }
#line 913 "program_representation_utils.m"
  }
#line 908 "program_representation_utils.m"
}

#line 857 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
#line 857 "program_representation_utils.m"
  MR_String program_representation_utils__Str_3)
#line 857 "program_representation_utils.m"
{
#line 859 "program_representation_utils.m"
  {
#line 859 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 859 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_2;
#line 859 "program_representation_utils.m"
    MR_Word program_representation_utils__V_4_4;

#line 859 "program_representation_utils.m"
    {
#line 859 "program_representation_utils.m"
      program_representation_utils__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_4_4, 0) = ((MR_Box) (program_representation_utils__Str_3));
#line 859 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[10])));
#line 859 "program_representation_utils.m"
    }
#line 859 "program_representation_utils.m"
    {
#line 859 "program_representation_utils.m"
      program_representation_utils__HeadVar__2_2 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_4_4);
    }
#line 859 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_2;
#line 859 "program_representation_utils.m"
  }
#line 857 "program_representation_utils.m"
}

#line 853 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void)
#line 853 "program_representation_utils.m"
{
#line 855 "program_representation_utils.m"
  {
#line 855 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 855 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__1_1;

#line 855 "program_representation_utils.m"
    {
#line 855 "program_representation_utils.m"
      program_representation_utils__HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 855 "program_representation_utils.m"
    return program_representation_utils__HeadVar__1_1;
#line 855 "program_representation_utils.m"
  }
#line 853 "program_representation_utils.m"
}

#line 821 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
#line 821 "program_representation_utils.m"
  MR_Word program_representation_utils__Detism_3,
#line 821 "program_representation_utils.m"
  MR_Word * program_representation_utils__DetismStrCord_4)
#line 821 "program_representation_utils.m"
{
#line 823 "program_representation_utils.m"
  {
#line 823 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 823 "program_representation_utils.m"
    MR_String program_representation_utils__DetismStr_5;

#line 827 "program_representation_utils.m"
    if ((program_representation_utils__Detism_3 == (MR_Integer) 5))
#line 841 "program_representation_utils.m"
      program_representation_utils__DetismStr_5 = (MR_String) "cc_multi";
#line 827 "program_representation_utils.m"
    else
#line 827 "program_representation_utils.m"
      if ((program_representation_utils__Detism_3 == (MR_Integer) 4))
#line 838 "program_representation_utils.m"
        program_representation_utils__DetismStr_5 = (MR_String) "cc_nondet";
#line 827 "program_representation_utils.m"
      else
#line 827 "program_representation_utils.m"
        if ((program_representation_utils__Detism_3 == (MR_Integer) 0))
#line 826 "program_representation_utils.m"
          program_representation_utils__DetismStr_5 = (MR_String) "det";
#line 827 "program_representation_utils.m"
        else
#line 827 "program_representation_utils.m"
          if ((program_representation_utils__Detism_3 == (MR_Integer) 6))
#line 844 "program_representation_utils.m"
            program_representation_utils__DetismStr_5 = (MR_String) "erroneous";
#line 827 "program_representation_utils.m"
          else
#line 827 "program_representation_utils.m"
            if ((program_representation_utils__Detism_3 == (MR_Integer) 7))
#line 847 "program_representation_utils.m"
              program_representation_utils__DetismStr_5 = (MR_String) "failure";
#line 827 "program_representation_utils.m"
            else
#line 827 "program_representation_utils.m"
              if ((program_representation_utils__Detism_3 == (MR_Integer) 3))
#line 835 "program_representation_utils.m"
                program_representation_utils__DetismStr_5 = (MR_String) "multi";
#line 827 "program_representation_utils.m"
              else
#line 827 "program_representation_utils.m"
                if ((program_representation_utils__Detism_3 == (MR_Integer) 2))
#line 832 "program_representation_utils.m"
                  program_representation_utils__DetismStr_5 = (MR_String) "nondet";
#line 827 "program_representation_utils.m"
                else
#line 829 "program_representation_utils.m"
                  program_representation_utils__DetismStr_5 = (MR_String) "semidet";
#line 849 "program_representation_utils.m"
    {
#line 849 "program_representation_utils.m"
      *program_representation_utils__DetismStrCord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_5)));
    }
#line 823 "program_representation_utils.m"
  }
#line 821 "program_representation_utils.m"
}

#line 808 "program_representation_utils.m"
static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
#line 808 "program_representation_utils.m"
  MR_Integer program_representation_utils__N_3)
#line 808 "program_representation_utils.m"
{
#line 810 "program_representation_utils.m"
  {
#line 810 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded = (program_representation_utils__N_3 <= (MR_Integer) 0);
#line 810 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVar__2_2;

#line 810 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 812 "program_representation_utils.m"
      {
#line 812 "program_representation_utils.m"
        {
#line 812 "program_representation_utils.m"
          program_representation_utils__HeadVar__2_2 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 812 "program_representation_utils.m"
      }
#line 810 "program_representation_utils.m"
    else
#line 814 "program_representation_utils.m"
      {
#line 814 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 814 "program_representation_utils.m"
        MR_Word program_representation_utils__V_5_5;
#line 814 "program_representation_utils.m"
        MR_Word program_representation_utils__V_7_7;
#line 814 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_8_8;

#line 814 "program_representation_utils.m"
        {
#line 814 "program_representation_utils.m"
          program_representation_utils__V_5_5 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_11_11, ((MR_Box) ((MR_String) "  ")));
        }
#line 814 "program_representation_utils.m"
        program_representation_utils__V_8_8 = (program_representation_utils__N_3 - (MR_Integer) 1);
#line 814 "program_representation_utils.m"
        {
#line 814 "program_representation_utils.m"
          program_representation_utils__V_7_7 = program_representation_utils__indent_1_f_0(program_representation_utils__V_8_8);
        }
#line 814 "program_representation_utils.m"
        {
#line 814 "program_representation_utils.m"
          program_representation_utils__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_11_11, program_representation_utils__V_5_5, program_representation_utils__V_7_7);
        }
#line 814 "program_representation_utils.m"
      }
#line 810 "program_representation_utils.m"
    return program_representation_utils__HeadVar__2_2;
#line 810 "program_representation_utils.m"
  }
#line 808 "program_representation_utils.m"
}

#line 791 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
#line 791 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 791 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 791 "program_representation_utils.m"
  MR_String * program_representation_utils__String_7)
#line 791 "program_representation_utils.m"
{
#line 794 "program_representation_utils.m"
  {
#line 794 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 794 "program_representation_utils.m"
    MR_Integer program_representation_utils__VarRep_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 794 "program_representation_utils.m"
    MR_Word program_representation_utils__VarMode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__VarName_8;
#line 794 "program_representation_utils.m"
    MR_Word program_representation_utils__InitialInst_9;
#line 794 "program_representation_utils.m"
    MR_Word program_representation_utils__FinalInst_10;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__InitialInstStr_11;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__FinalInstStr_12;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__V_22_22;
#line 794 "program_representation_utils.m"
    MR_Word program_representation_utils__V_28_28;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__V_29_29;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__V_31_31;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__V_32_32;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__V_39_39;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__V_41_41;
#line 794 "program_representation_utils.m"
    MR_String program_representation_utils__V_42_42;

#line 795 "program_representation_utils.m"
    {
#line 795 "program_representation_utils.m"
      mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_5, &program_representation_utils__VarName_8);
    }
#line 796 "program_representation_utils.m"
    program_representation_utils__InitialInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__VarMode_6, (MR_Integer) 0)));
#line 796 "program_representation_utils.m"
    program_representation_utils__FinalInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__VarMode_6, (MR_Integer) 1)));
#line 804 "program_representation_utils.m"
    if ((program_representation_utils__InitialInst_9 == (MR_Integer) 0))
#line 804 "program_representation_utils.m"
      program_representation_utils__InitialInstStr_11 = (MR_String) "free";
#line 804 "program_representation_utils.m"
    else
#line 804 "program_representation_utils.m"
      if ((program_representation_utils__InitialInst_9 == (MR_Integer) 1))
#line 805 "program_representation_utils.m"
        program_representation_utils__InitialInstStr_11 = (MR_String) "ground";
#line 804 "program_representation_utils.m"
      else
#line 806 "program_representation_utils.m"
        program_representation_utils__InitialInstStr_11 = (MR_String) "other";
#line 804 "program_representation_utils.m"
    if ((program_representation_utils__FinalInst_10 == (MR_Integer) 0))
#line 804 "program_representation_utils.m"
      program_representation_utils__FinalInstStr_12 = (MR_String) "free";
#line 804 "program_representation_utils.m"
    else
#line 804 "program_representation_utils.m"
      if ((program_representation_utils__FinalInst_10 == (MR_Integer) 1))
#line 805 "program_representation_utils.m"
        program_representation_utils__FinalInstStr_12 = (MR_String) "ground";
#line 804 "program_representation_utils.m"
      else
#line 806 "program_representation_utils.m"
        program_representation_utils__FinalInstStr_12 = (MR_String) "other";
#line 5708 "program_representation_utils.c"
    program_representation_utils__V_28_28 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 800 "program_representation_utils.m"
    {
#line 800 "program_representation_utils.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_28_28, program_representation_utils__FinalInstStr_12, &program_representation_utils__V_22_22);
    }
#line 799 "program_representation_utils.m"
    {
#line 799 "program_representation_utils.m"
      program_representation_utils__V_29_29 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_22_22, (MR_String) ")");
    }
#line 799 "program_representation_utils.m"
    {
#line 799 "program_representation_utils.m"
      program_representation_utils__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", program_representation_utils__V_29_29);
    }
#line 800 "program_representation_utils.m"
    {
#line 800 "program_representation_utils.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_28_28, program_representation_utils__InitialInstStr_11, &program_representation_utils__V_32_32);
    }
#line 799 "program_representation_utils.m"
    {
#line 799 "program_representation_utils.m"
      program_representation_utils__V_39_39 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_32_32, program_representation_utils__V_31_31);
    }
#line 799 "program_representation_utils.m"
    {
#line 799 "program_representation_utils.m"
      program_representation_utils__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "::(", program_representation_utils__V_39_39);
    }
#line 800 "program_representation_utils.m"
    {
#line 800 "program_representation_utils.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_28_28, program_representation_utils__VarName_8, &program_representation_utils__V_42_42);
    }
#line 799 "program_representation_utils.m"
    {
#line 799 "program_representation_utils.m"
      *program_representation_utils__String_7 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_42_42, program_representation_utils__V_41_41);
    }
#line 794 "program_representation_utils.m"
  }
#line 791 "program_representation_utils.m"
}

#line 667 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
#line 667 "program_representation_utils.m"
  MR_Word program_representation_utils__VarTable_4,
#line 667 "program_representation_utils.m"
  MR_Word program_representation_utils__AtomicGoalRep_5,
#line 667 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6)
#line 667 "program_representation_utils.m"
{
#line 670 "program_representation_utils.m"
  {
#line 670 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 670 "program_representation_utils.m"
    MR_Word program_representation_utils__Strings0_14;
#line 670 "program_representation_utils.m"
    MR_Word program_representation_utils__V_112_112;

#line 684 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 2))))
#line 693 "program_representation_utils.m"
      {
#line 693 "program_representation_utils.m"
        MR_Word program_representation_utils__MaybeArgReps_193 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 693 "program_representation_utils.m"
        MR_Integer program_representation_utils__VarRep_203 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__ConsIdRep_204 = ((MR_String) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__VarName_206;
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__UnifyString_207;
#line 693 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_208;
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__V_332_332;
#line 693 "program_representation_utils.m"
        MR_Word program_representation_utils__V_338_338;
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__V_340_340;
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__V_341_341;
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__V_348_348;
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__V_350_350;
#line 693 "program_representation_utils.m"
        MR_String program_representation_utils__V_351_351;

#line 694 "program_representation_utils.m"
        {
#line 694 "program_representation_utils.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_203, &program_representation_utils__VarName_206);
        }
#line 5811 "program_representation_utils.c"
        program_representation_utils__V_338_338 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 695 "program_representation_utils.m"
        {
#line 695 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_338_338, program_representation_utils__ConsIdRep_204, &program_representation_utils__V_332_332);
        }
#line 695 "program_representation_utils.m"
        {
#line 695 "program_representation_utils.m"
          program_representation_utils__V_340_340 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_332_332);
        }
#line 695 "program_representation_utils.m"
        {
#line 695 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_338_338, (MR_String) "=>", &program_representation_utils__V_341_341);
        }
#line 695 "program_representation_utils.m"
        {
#line 695 "program_representation_utils.m"
          program_representation_utils__V_348_348 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_341_341, program_representation_utils__V_340_340);
        }
#line 695 "program_representation_utils.m"
        {
#line 695 "program_representation_utils.m"
          program_representation_utils__V_350_350 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_348_348);
        }
#line 695 "program_representation_utils.m"
        {
#line 695 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_338_338, program_representation_utils__VarName_206, &program_representation_utils__V_351_351);
        }
#line 695 "program_representation_utils.m"
        {
#line 695 "program_representation_utils.m"
          program_representation_utils__UnifyString_207 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_351_351, program_representation_utils__V_350_350);
        }
#line 697 "program_representation_utils.m"
        {
#line 697 "program_representation_utils.m"
          program_representation_utils__print_args_to_strings__ho3_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__MaybeArgReps_193, &program_representation_utils__ArgsString_208);
        }
#line 699 "program_representation_utils.m"
        {
#line 699 "program_representation_utils.m"
          program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_207)), program_representation_utils__ArgsString_208);
        }
#line 693 "program_representation_utils.m"
      }
#line 684 "program_representation_utils.m"
    else
#line 684 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 0))))
#line 678 "program_representation_utils.m"
        {
#line 678 "program_representation_utils.m"
          MR_Integer program_representation_utils__VarRep_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__ConsIdRep_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 678 "program_representation_utils.m"
          MR_Word program_representation_utils__ArgReps_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__VarName_11;
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__UnifyString_12;
#line 678 "program_representation_utils.m"
          MR_Word program_representation_utils__ArgsString_13;
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__V_274_274;
#line 678 "program_representation_utils.m"
          MR_Word program_representation_utils__V_280_280;
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__V_282_282;
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__V_283_283;
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__V_290_290;
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__V_292_292;
#line 678 "program_representation_utils.m"
          MR_String program_representation_utils__V_293_293;

#line 679 "program_representation_utils.m"
          {
#line 679 "program_representation_utils.m"
            mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_7, &program_representation_utils__VarName_11);
          }
#line 5898 "program_representation_utils.c"
          program_representation_utils__V_280_280 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 680 "program_representation_utils.m"
          {
#line 680 "program_representation_utils.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_280_280, program_representation_utils__ConsIdRep_8, &program_representation_utils__V_274_274);
          }
#line 680 "program_representation_utils.m"
          {
#line 680 "program_representation_utils.m"
            program_representation_utils__V_282_282 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_274_274);
          }
#line 680 "program_representation_utils.m"
          {
#line 680 "program_representation_utils.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_280_280, (MR_String) "<=", &program_representation_utils__V_283_283);
          }
#line 680 "program_representation_utils.m"
          {
#line 680 "program_representation_utils.m"
            program_representation_utils__V_290_290 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_283_283, program_representation_utils__V_282_282);
          }
#line 680 "program_representation_utils.m"
          {
#line 680 "program_representation_utils.m"
            program_representation_utils__V_292_292 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_290_290);
          }
#line 680 "program_representation_utils.m"
          {
#line 680 "program_representation_utils.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_280_280, program_representation_utils__VarName_11, &program_representation_utils__V_293_293);
          }
#line 680 "program_representation_utils.m"
          {
#line 680 "program_representation_utils.m"
            program_representation_utils__UnifyString_12 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_293_293, program_representation_utils__V_292_292);
          }
#line 682 "program_representation_utils.m"
          {
#line 682 "program_representation_utils.m"
            program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__ArgReps_9, &program_representation_utils__ArgsString_13);
          }
#line 683 "program_representation_utils.m"
          {
#line 683 "program_representation_utils.m"
            program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_12)), program_representation_utils__ArgsString_13);
          }
#line 678 "program_representation_utils.m"
        }
#line 684 "program_representation_utils.m"
      else
#line 684 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 1))))
#line 678 "program_representation_utils.m"
          {
#line 678 "program_representation_utils.m"
            MR_Integer program_representation_utils__VarRep_214 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__ConsIdRep_215 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 678 "program_representation_utils.m"
            MR_Word program_representation_utils__ArgReps_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__VarName_218;
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__UnifyString_219;
#line 678 "program_representation_utils.m"
            MR_Word program_representation_utils__ArgsString_220;
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__V_248_248;
#line 678 "program_representation_utils.m"
            MR_Word program_representation_utils__V_254_254;
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__V_256_256;
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__V_257_257;
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__V_264_264;
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__V_266_266;
#line 678 "program_representation_utils.m"
            MR_String program_representation_utils__V_267_267;

#line 679 "program_representation_utils.m"
            {
#line 679 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_214, &program_representation_utils__VarName_218);
            }
#line 5985 "program_representation_utils.c"
            program_representation_utils__V_254_254 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 680 "program_representation_utils.m"
            {
#line 680 "program_representation_utils.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_254_254, program_representation_utils__ConsIdRep_215, &program_representation_utils__V_248_248);
            }
#line 680 "program_representation_utils.m"
            {
#line 680 "program_representation_utils.m"
              program_representation_utils__V_256_256 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_248_248);
            }
#line 680 "program_representation_utils.m"
            {
#line 680 "program_representation_utils.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_254_254, (MR_String) "=>", &program_representation_utils__V_257_257);
            }
#line 680 "program_representation_utils.m"
            {
#line 680 "program_representation_utils.m"
              program_representation_utils__V_264_264 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_257_257, program_representation_utils__V_256_256);
            }
#line 680 "program_representation_utils.m"
            {
#line 680 "program_representation_utils.m"
              program_representation_utils__V_266_266 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_264_264);
            }
#line 680 "program_representation_utils.m"
            {
#line 680 "program_representation_utils.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_254_254, program_representation_utils__VarName_218, &program_representation_utils__V_267_267);
            }
#line 680 "program_representation_utils.m"
            {
#line 680 "program_representation_utils.m"
              program_representation_utils__UnifyString_219 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_267_267, program_representation_utils__V_266_266);
            }
#line 682 "program_representation_utils.m"
            {
#line 682 "program_representation_utils.m"
              program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__ArgReps_216, &program_representation_utils__ArgsString_220);
            }
#line 683 "program_representation_utils.m"
            {
#line 683 "program_representation_utils.m"
              program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_219)), program_representation_utils__ArgsString_220);
            }
#line 678 "program_representation_utils.m"
          }
#line 684 "program_representation_utils.m"
        else
#line 684 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 744 "program_representation_utils.m"
            {
#line 744 "program_representation_utils.m"
              MR_Word program_representation_utils__ArgsString_138;
#line 744 "program_representation_utils.m"
              MR_Word program_representation_utils__Args_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 744 "program_representation_utils.m"
              MR_String program_representation_utils__HeadString_140;
#line 744 "program_representation_utils.m"
              MR_String program_representation_utils__Module_141 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 744 "program_representation_utils.m"
              MR_String program_representation_utils__Pred_142 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 744 "program_representation_utils.m"
              MR_String program_representation_utils__V_438_438;
#line 744 "program_representation_utils.m"
              MR_Word program_representation_utils__V_444_444 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 744 "program_representation_utils.m"
              MR_String program_representation_utils__V_446_446;
#line 744 "program_representation_utils.m"
              MR_String program_representation_utils__V_447_447;
#line 744 "program_representation_utils.m"
              MR_String program_representation_utils__V_454_454;

#line 745 "program_representation_utils.m"
              {
#line 745 "program_representation_utils.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_444_444, program_representation_utils__Pred_142, &program_representation_utils__V_438_438);
              }
#line 745 "program_representation_utils.m"
              {
#line 745 "program_representation_utils.m"
                program_representation_utils__V_446_446 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__V_438_438);
              }
#line 745 "program_representation_utils.m"
              {
#line 745 "program_representation_utils.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_444_444, program_representation_utils__Module_141, &program_representation_utils__V_447_447);
              }
#line 745 "program_representation_utils.m"
              {
#line 745 "program_representation_utils.m"
                program_representation_utils__V_454_454 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_447_447, program_representation_utils__V_446_446);
              }
#line 745 "program_representation_utils.m"
              {
#line 745 "program_representation_utils.m"
                program_representation_utils__HeadString_140 = mercury__string__f_43_43_2_f_0((MR_String) "builtin ", program_representation_utils__V_454_454);
              }
#line 746 "program_representation_utils.m"
              {
#line 746 "program_representation_utils.m"
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_139, &program_representation_utils__ArgsString_138);
              }
#line 747 "program_representation_utils.m"
              {
#line 747 "program_representation_utils.m"
                program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_140)), program_representation_utils__ArgsString_138);
              }
#line 744 "program_representation_utils.m"
            }
#line 684 "program_representation_utils.m"
          else
#line 684 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 707 "program_representation_utils.m"
              {
#line 707 "program_representation_utils.m"
                MR_Integer program_representation_utils__TargetRep_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 707 "program_representation_utils.m"
                MR_Integer program_representation_utils__SourceRep_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 707 "program_representation_utils.m"
                MR_String program_representation_utils__TargetName_121;
#line 707 "program_representation_utils.m"
                MR_String program_representation_utils__SourceName_122;
#line 707 "program_representation_utils.m"
                MR_String program_representation_utils__String_123;
#line 707 "program_representation_utils.m"
                MR_String program_representation_utils__V_420_420;
#line 707 "program_representation_utils.m"
                MR_Word program_representation_utils__V_426_426;
#line 707 "program_representation_utils.m"
                MR_String program_representation_utils__V_428_428;
#line 707 "program_representation_utils.m"
                MR_String program_representation_utils__V_429_429;
#line 707 "program_representation_utils.m"
                MR_String program_representation_utils__V_436_436;

#line 708 "program_representation_utils.m"
                {
#line 708 "program_representation_utils.m"
                  mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_119, &program_representation_utils__TargetName_121);
                }
#line 709 "program_representation_utils.m"
                {
#line 709 "program_representation_utils.m"
                  mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_120, &program_representation_utils__SourceName_122);
                }
#line 6135 "program_representation_utils.c"
                program_representation_utils__V_426_426 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 710 "program_representation_utils.m"
                {
#line 710 "program_representation_utils.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_426_426, program_representation_utils__TargetName_121, &program_representation_utils__V_420_420);
                }
#line 710 "program_representation_utils.m"
                {
#line 710 "program_representation_utils.m"
                  program_representation_utils__V_428_428 = mercury__string__f_43_43_2_f_0((MR_String) " to ", program_representation_utils__V_420_420);
                }
#line 710 "program_representation_utils.m"
                {
#line 710 "program_representation_utils.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_426_426, program_representation_utils__SourceName_122, &program_representation_utils__V_429_429);
                }
#line 710 "program_representation_utils.m"
                {
#line 710 "program_representation_utils.m"
                  program_representation_utils__V_436_436 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_429_429, program_representation_utils__V_428_428);
                }
#line 710 "program_representation_utils.m"
                {
#line 710 "program_representation_utils.m"
                  program_representation_utils__String_123 = mercury__string__f_43_43_2_f_0((MR_String) "cast ", program_representation_utils__V_436_436);
                }
#line 711 "program_representation_utils.m"
                {
#line 711 "program_representation_utils.m"
                  program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_123)));
                }
#line 707 "program_representation_utils.m"
              }
#line 684 "program_representation_utils.m"
            else
#line 684 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 749 "program_representation_utils.m"
                {
#line 749 "program_representation_utils.m"
                  MR_String program_representation_utils__Event_30 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 749 "program_representation_utils.m"
                  MR_Word program_representation_utils__ArgsString_143;
#line 749 "program_representation_utils.m"
                  MR_Word program_representation_utils__Args_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 749 "program_representation_utils.m"
                  MR_String program_representation_utils__HeadString_145;
#line 749 "program_representation_utils.m"
                  MR_String program_representation_utils__V_412_412;

#line 750 "program_representation_utils.m"
                  {
#line 750 "program_representation_utils.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &program_representation_utils_scalar_common_3[0], program_representation_utils__Event_30, &program_representation_utils__V_412_412);
                  }
#line 750 "program_representation_utils.m"
                  {
#line 750 "program_representation_utils.m"
                    program_representation_utils__HeadString_145 = mercury__string__f_43_43_2_f_0((MR_String) "event ", program_representation_utils__V_412_412);
                  }
#line 751 "program_representation_utils.m"
                  {
#line 751 "program_representation_utils.m"
                    program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_144, &program_representation_utils__ArgsString_143);
                  }
#line 752 "program_representation_utils.m"
                  {
#line 752 "program_representation_utils.m"
                    program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_145)), program_representation_utils__ArgsString_143);
                  }
#line 749 "program_representation_utils.m"
                }
#line 684 "program_representation_utils.m"
              else
#line 684 "program_representation_utils.m"
                if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 724 "program_representation_utils.m"
                  {
#line 724 "program_representation_utils.m"
                    MR_Word program_representation_utils__TypeCtorInfo_168_168;
#line 724 "program_representation_utils.m"
                    MR_Integer program_representation_utils__HOVarRep_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 724 "program_representation_utils.m"
                    MR_String program_representation_utils__HOVarName_23;
#line 724 "program_representation_utils.m"
                    MR_String program_representation_utils__HeadString_24;
#line 724 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_66_66;
#line 724 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_67_67;
#line 724 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_68_68;
#line 724 "program_representation_utils.m"
                    MR_Word program_representation_utils__ArgsString_130;
#line 724 "program_representation_utils.m"
                    MR_Word program_representation_utils__Args_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 724 "program_representation_utils.m"
                    MR_String program_representation_utils__V_405_405;

#line 725 "program_representation_utils.m"
                    {
#line 725 "program_representation_utils.m"
                      mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__HOVarRep_22, &program_representation_utils__HOVarName_23);
                    }
#line 726 "program_representation_utils.m"
                    {
#line 726 "program_representation_utils.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &program_representation_utils_scalar_common_3[0], program_representation_utils__HOVarName_23, &program_representation_utils__V_405_405);
                    }
#line 726 "program_representation_utils.m"
                    {
#line 726 "program_representation_utils.m"
                      program_representation_utils__HeadString_24 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_405_405, (MR_String) "(");
                    }
#line 727 "program_representation_utils.m"
                    {
#line 727 "program_representation_utils.m"
                      program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_131, &program_representation_utils__ArgsString_130);
                    }
#line 6255 "program_representation_utils.c"
                    program_representation_utils__TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 728 "program_representation_utils.m"
                    {
#line 728 "program_representation_utils.m"
                      program_representation_utils__V_66_66 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_168_168, ((MR_Box) (program_representation_utils__HeadString_24)));
                    }
#line 729 "program_representation_utils.m"
                    {
#line 729 "program_representation_utils.m"
                      program_representation_utils__V_68_68 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_168_168, ((MR_Box) ((MR_String) ")")));
                    }
#line 728 "program_representation_utils.m"
                    {
#line 728 "program_representation_utils.m"
                      program_representation_utils__V_67_67 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_168_168, program_representation_utils__ArgsString_130, program_representation_utils__V_68_68);
                    }
#line 728 "program_representation_utils.m"
                    {
#line 728 "program_representation_utils.m"
                      program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_168_168, program_representation_utils__V_66_66, program_representation_utils__V_67_67);
                    }
#line 724 "program_representation_utils.m"
                  }
#line 684 "program_representation_utils.m"
                else
#line 684 "program_representation_utils.m"
                  if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 731 "program_representation_utils.m"
                    {
#line 731 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_173_173;
#line 731 "program_representation_utils.m"
                      MR_Integer program_representation_utils__TCIVarRep_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 731 "program_representation_utils.m"
                      MR_Integer program_representation_utils__MethodNumber_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 731 "program_representation_utils.m"
                      MR_String program_representation_utils__TCIVarName_27;
#line 731 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_57_57;
#line 731 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_58_58;
#line 731 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_59_59;
#line 731 "program_representation_utils.m"
                      MR_Word program_representation_utils__ArgsString_132;
#line 731 "program_representation_utils.m"
                      MR_Word program_representation_utils__Args_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 731 "program_representation_utils.m"
                      MR_String program_representation_utils__HeadString_134;
#line 731 "program_representation_utils.m"
                      MR_String program_representation_utils__V_385_385;
#line 731 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_391_391;
#line 731 "program_representation_utils.m"
                      MR_String program_representation_utils__V_392_392;
#line 731 "program_representation_utils.m"
                      MR_String program_representation_utils__V_394_394;
#line 731 "program_representation_utils.m"
                      MR_String program_representation_utils__V_395_395;
#line 731 "program_representation_utils.m"
                      MR_String program_representation_utils__V_402_402;

#line 732 "program_representation_utils.m"
                      {
#line 732 "program_representation_utils.m"
                        mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TCIVarRep_25, &program_representation_utils__TCIVarName_27);
                      }
#line 6323 "program_representation_utils.c"
                      program_representation_utils__V_391_391 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 733 "program_representation_utils.m"
                      {
#line 733 "program_representation_utils.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_391_391, program_representation_utils__TCIVarName_27, &program_representation_utils__V_385_385);
                      }
#line 733 "program_representation_utils.m"
                      {
#line 733 "program_representation_utils.m"
                        program_representation_utils__V_392_392 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_385_385, (MR_String) "(");
                      }
#line 733 "program_representation_utils.m"
                      {
#line 733 "program_representation_utils.m"
                        program_representation_utils__V_394_394 = mercury__string__f_43_43_2_f_0((MR_String) " of ", program_representation_utils__V_392_392);
                      }
#line 733 "program_representation_utils.m"
                      {
#line 733 "program_representation_utils.m"
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__V_391_391, program_representation_utils__MethodNumber_26, &program_representation_utils__V_395_395);
                      }
#line 733 "program_representation_utils.m"
                      {
#line 733 "program_representation_utils.m"
                        program_representation_utils__V_402_402 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_395_395, program_representation_utils__V_394_394);
                      }
#line 733 "program_representation_utils.m"
                      {
#line 733 "program_representation_utils.m"
                        program_representation_utils__HeadString_134 = mercury__string__f_43_43_2_f_0((MR_String) "method ", program_representation_utils__V_402_402);
                      }
#line 735 "program_representation_utils.m"
                      {
#line 735 "program_representation_utils.m"
                        program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_133, &program_representation_utils__ArgsString_132);
                      }
#line 6360 "program_representation_utils.c"
                      program_representation_utils__TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 736 "program_representation_utils.m"
                      {
#line 736 "program_representation_utils.m"
                        program_representation_utils__V_57_57 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_173_173, ((MR_Box) (program_representation_utils__HeadString_134)));
                      }
#line 737 "program_representation_utils.m"
                      {
#line 737 "program_representation_utils.m"
                        program_representation_utils__V_59_59 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_173_173, ((MR_Box) ((MR_String) ")")));
                      }
#line 736 "program_representation_utils.m"
                      {
#line 736 "program_representation_utils.m"
                        program_representation_utils__V_58_58 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_173_173, program_representation_utils__ArgsString_132, program_representation_utils__V_59_59);
                      }
#line 736 "program_representation_utils.m"
                      {
#line 736 "program_representation_utils.m"
                        program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_173_173, program_representation_utils__V_57_57, program_representation_utils__V_58_58);
                      }
#line 731 "program_representation_utils.m"
                    }
#line 684 "program_representation_utils.m"
                  else
#line 684 "program_representation_utils.m"
                    if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 693 "program_representation_utils.m"
                      {
#line 693 "program_representation_utils.m"
                        MR_Word program_representation_utils__MaybeArgReps_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 693 "program_representation_utils.m"
                        MR_Integer program_representation_utils__VarRep_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__ConsIdRep_114 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__VarName_116;
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__UnifyString_117;
#line 693 "program_representation_utils.m"
                        MR_Word program_representation_utils__ArgsString_118;
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__V_358_358;
#line 693 "program_representation_utils.m"
                        MR_Word program_representation_utils__V_364_364;
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__V_366_366;
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__V_367_367;
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__V_374_374;
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__V_376_376;
#line 693 "program_representation_utils.m"
                        MR_String program_representation_utils__V_377_377;

#line 694 "program_representation_utils.m"
                        {
#line 694 "program_representation_utils.m"
                          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_113, &program_representation_utils__VarName_116);
                        }
#line 6422 "program_representation_utils.c"
                        program_representation_utils__V_364_364 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 695 "program_representation_utils.m"
                        {
#line 695 "program_representation_utils.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_364_364, program_representation_utils__ConsIdRep_114, &program_representation_utils__V_358_358);
                        }
#line 695 "program_representation_utils.m"
                        {
#line 695 "program_representation_utils.m"
                          program_representation_utils__V_366_366 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_358_358);
                        }
#line 695 "program_representation_utils.m"
                        {
#line 695 "program_representation_utils.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_364_364, (MR_String) "<=", &program_representation_utils__V_367_367);
                        }
#line 695 "program_representation_utils.m"
                        {
#line 695 "program_representation_utils.m"
                          program_representation_utils__V_374_374 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_367_367, program_representation_utils__V_366_366);
                        }
#line 695 "program_representation_utils.m"
                        {
#line 695 "program_representation_utils.m"
                          program_representation_utils__V_376_376 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_374_374);
                        }
#line 695 "program_representation_utils.m"
                        {
#line 695 "program_representation_utils.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_364_364, program_representation_utils__VarName_116, &program_representation_utils__V_377_377);
                        }
#line 695 "program_representation_utils.m"
                        {
#line 695 "program_representation_utils.m"
                          program_representation_utils__UnifyString_117 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_377_377, program_representation_utils__V_376_376);
                        }
#line 697 "program_representation_utils.m"
                        {
#line 697 "program_representation_utils.m"
                          program_representation_utils__print_args_to_strings__ho3_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__MaybeArgReps_15, &program_representation_utils__ArgsString_118);
                        }
#line 699 "program_representation_utils.m"
                        {
#line 699 "program_representation_utils.m"
                          program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_117)), program_representation_utils__ArgsString_118);
                        }
#line 693 "program_representation_utils.m"
                      }
#line 684 "program_representation_utils.m"
                    else
#line 684 "program_representation_utils.m"
                      if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 739 "program_representation_utils.m"
                        {
#line 739 "program_representation_utils.m"
                          MR_String program_representation_utils__Module_28 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 739 "program_representation_utils.m"
                          MR_String program_representation_utils__Pred_29 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 739 "program_representation_utils.m"
                          MR_Word program_representation_utils__ArgsString_135;
#line 739 "program_representation_utils.m"
                          MR_Word program_representation_utils__Args_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
#line 739 "program_representation_utils.m"
                          MR_String program_representation_utils__HeadString_137;
#line 739 "program_representation_utils.m"
                          MR_String program_representation_utils__V_316_316;
#line 739 "program_representation_utils.m"
                          MR_Word program_representation_utils__V_322_322 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 739 "program_representation_utils.m"
                          MR_String program_representation_utils__V_324_324;
#line 739 "program_representation_utils.m"
                          MR_String program_representation_utils__V_325_325;

#line 740 "program_representation_utils.m"
                          {
#line 740 "program_representation_utils.m"
                            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_322_322, program_representation_utils__Pred_29, &program_representation_utils__V_316_316);
                          }
#line 740 "program_representation_utils.m"
                          {
#line 740 "program_representation_utils.m"
                            program_representation_utils__V_324_324 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__V_316_316);
                          }
#line 740 "program_representation_utils.m"
                          {
#line 740 "program_representation_utils.m"
                            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_322_322, program_representation_utils__Module_28, &program_representation_utils__V_325_325);
                          }
#line 740 "program_representation_utils.m"
                          {
#line 740 "program_representation_utils.m"
                            program_representation_utils__HeadString_137 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_325_325, program_representation_utils__V_324_324);
                          }
#line 741 "program_representation_utils.m"
                          {
#line 741 "program_representation_utils.m"
                            program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_136, &program_representation_utils__ArgsString_135);
                          }
#line 742 "program_representation_utils.m"
                          {
#line 742 "program_representation_utils.m"
                            program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_137)), program_representation_utils__ArgsString_135);
                          }
#line 739 "program_representation_utils.m"
                        }
#line 684 "program_representation_utils.m"
                      else
#line 684 "program_representation_utils.m"
                        if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 719 "program_representation_utils.m"
                          {
#line 719 "program_representation_utils.m"
                            MR_Word program_representation_utils__TypeCtorInfo_163_163;
#line 719 "program_representation_utils.m"
                            MR_Word program_representation_utils__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 719 "program_representation_utils.m"
                            MR_Word program_representation_utils__V_71_71;
#line 719 "program_representation_utils.m"
                            MR_Word program_representation_utils__V_73_73;
#line 719 "program_representation_utils.m"
                            MR_Word program_representation_utils__V_74_74;
#line 719 "program_representation_utils.m"
                            MR_Word program_representation_utils__ArgsString_129;

#line 720 "program_representation_utils.m"
                            {
#line 720 "program_representation_utils.m"
                              program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_21, &program_representation_utils__ArgsString_129);
                            }
#line 6552 "program_representation_utils.c"
                            program_representation_utils__TypeCtorInfo_163_163 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 721 "program_representation_utils.m"
                            {
#line 721 "program_representation_utils.m"
                              program_representation_utils__V_71_71 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_163_163, ((MR_Box) ((MR_String) "foreign_proc(")));
                            }
#line 722 "program_representation_utils.m"
                            {
#line 722 "program_representation_utils.m"
                              program_representation_utils__V_74_74 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_163_163, ((MR_Box) ((MR_String) ")")));
                            }
#line 721 "program_representation_utils.m"
                            {
#line 721 "program_representation_utils.m"
                              program_representation_utils__V_73_73 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_163_163, program_representation_utils__ArgsString_129, program_representation_utils__V_74_74);
                            }
#line 721 "program_representation_utils.m"
                            {
#line 721 "program_representation_utils.m"
                              program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_163_163, program_representation_utils__V_71_71, program_representation_utils__V_73_73);
                            }
#line 719 "program_representation_utils.m"
                          }
#line 684 "program_representation_utils.m"
                        else
#line 684 "program_representation_utils.m"
                          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 701 "program_representation_utils.m"
                            {
#line 701 "program_representation_utils.m"
                              MR_Integer program_representation_utils__TargetRep_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 701 "program_representation_utils.m"
                              MR_Integer program_representation_utils__SourceRep_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 701 "program_representation_utils.m"
                              MR_String program_representation_utils__TargetName_18;
#line 701 "program_representation_utils.m"
                              MR_String program_representation_utils__SourceName_19;
#line 701 "program_representation_utils.m"
                              MR_String program_representation_utils__String_20;
#line 701 "program_representation_utils.m"
                              MR_String program_representation_utils__V_300_300;
#line 701 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_306_306;
#line 701 "program_representation_utils.m"
                              MR_String program_representation_utils__V_308_308;
#line 701 "program_representation_utils.m"
                              MR_String program_representation_utils__V_309_309;

#line 702 "program_representation_utils.m"
                              {
#line 702 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_16, &program_representation_utils__TargetName_18);
                              }
#line 703 "program_representation_utils.m"
                              {
#line 703 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_17, &program_representation_utils__SourceName_19);
                              }
#line 6611 "program_representation_utils.c"
                              program_representation_utils__V_306_306 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 704 "program_representation_utils.m"
                              {
#line 704 "program_representation_utils.m"
                                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_306_306, program_representation_utils__SourceName_19, &program_representation_utils__V_300_300);
                              }
#line 704 "program_representation_utils.m"
                              {
#line 704 "program_representation_utils.m"
                                program_representation_utils__V_308_308 = mercury__string__f_43_43_2_f_0((MR_String) " := ", program_representation_utils__V_300_300);
                              }
#line 704 "program_representation_utils.m"
                              {
#line 704 "program_representation_utils.m"
                                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_306_306, program_representation_utils__TargetName_18, &program_representation_utils__V_309_309);
                              }
#line 704 "program_representation_utils.m"
                              {
#line 704 "program_representation_utils.m"
                                program_representation_utils__String_20 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_309_309, program_representation_utils__V_308_308);
                              }
#line 705 "program_representation_utils.m"
                              {
#line 705 "program_representation_utils.m"
                                program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_20)));
                              }
#line 701 "program_representation_utils.m"
                            }
#line 684 "program_representation_utils.m"
                          else
#line 713 "program_representation_utils.m"
                            {
#line 713 "program_representation_utils.m"
                              MR_Integer program_representation_utils__TargetRep_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
#line 713 "program_representation_utils.m"
                              MR_Integer program_representation_utils__SourceRep_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
#line 713 "program_representation_utils.m"
                              MR_String program_representation_utils__TargetName_126;
#line 713 "program_representation_utils.m"
                              MR_String program_representation_utils__SourceName_127;
#line 713 "program_representation_utils.m"
                              MR_String program_representation_utils__String_128;
#line 713 "program_representation_utils.m"
                              MR_String program_representation_utils__V_232_232;
#line 713 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_238_238;
#line 713 "program_representation_utils.m"
                              MR_String program_representation_utils__V_240_240;
#line 713 "program_representation_utils.m"
                              MR_String program_representation_utils__V_241_241;

#line 714 "program_representation_utils.m"
                              {
#line 714 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_124, &program_representation_utils__TargetName_126);
                              }
#line 715 "program_representation_utils.m"
                              {
#line 715 "program_representation_utils.m"
                                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_125, &program_representation_utils__SourceName_127);
                              }
#line 6673 "program_representation_utils.c"
                              program_representation_utils__V_238_238 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 716 "program_representation_utils.m"
                              {
#line 716 "program_representation_utils.m"
                                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_238_238, program_representation_utils__TargetName_126, &program_representation_utils__V_232_232);
                              }
#line 716 "program_representation_utils.m"
                              {
#line 716 "program_representation_utils.m"
                                program_representation_utils__V_240_240 = mercury__string__f_43_43_2_f_0((MR_String) " == ", program_representation_utils__V_232_232);
                              }
#line 716 "program_representation_utils.m"
                              {
#line 716 "program_representation_utils.m"
                                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_238_238, program_representation_utils__SourceName_127, &program_representation_utils__V_241_241);
                              }
#line 716 "program_representation_utils.m"
                              {
#line 716 "program_representation_utils.m"
                                program_representation_utils__String_128 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_241_241, program_representation_utils__V_240_240);
                              }
#line 717 "program_representation_utils.m"
                              {
#line 717 "program_representation_utils.m"
                                program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_128)));
                              }
#line 713 "program_representation_utils.m"
                            }
#line 754 "program_representation_utils.m"
    {
#line 754 "program_representation_utils.m"
      program_representation_utils__V_112_112 = program_representation_utils__nl_0_f_0();
    }
#line 754 "program_representation_utils.m"
    {
#line 754 "program_representation_utils.m"
      *program_representation_utils__Strings_6 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Strings0_14, program_representation_utils__V_112_112);
    }
#line 670 "program_representation_utils.m"
  }
#line 667 "program_representation_utils.m"
}

#line 657 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
#line 657 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_4,
#line 657 "program_representation_utils.m"
  MR_Word program_representation_utils__ConsIdArityRep_5,
#line 657 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_6)
#line 657 "program_representation_utils.m"
{
#line 660 "program_representation_utils.m"
  {
#line 660 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 660 "program_representation_utils.m"
    MR_String program_representation_utils__ConsIdRep_7 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ConsIdArityRep_5, (MR_Integer) 0)));
#line 660 "program_representation_utils.m"
    MR_Integer program_representation_utils__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ConsIdArityRep_5, (MR_Integer) 1)));
#line 660 "program_representation_utils.m"
    MR_String program_representation_utils__String_9;
#line 660 "program_representation_utils.m"
    MR_Word program_representation_utils__V_16_16;
#line 660 "program_representation_utils.m"
    MR_String program_representation_utils__V_19_19;
#line 660 "program_representation_utils.m"
    MR_Word program_representation_utils__V_25_25 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 660 "program_representation_utils.m"
    MR_String program_representation_utils__V_26_26;
#line 660 "program_representation_utils.m"
    MR_String program_representation_utils__V_28_28;
#line 660 "program_representation_utils.m"
    MR_String program_representation_utils__V_29_29;
#line 660 "program_representation_utils.m"
    MR_String program_representation_utils__V_36_36;

#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__V_25_25, program_representation_utils__Arity_8, &program_representation_utils__V_19_19);
    }
#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      program_representation_utils__V_26_26 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_19_19, (MR_String) "\n");
    }
#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      program_representation_utils__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__V_26_26);
    }
#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_25_25, program_representation_utils__ConsIdRep_7, &program_representation_utils__V_29_29);
    }
#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      program_representation_utils__V_36_36 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_29_29, program_representation_utils__V_28_28);
    }
#line 662 "program_representation_utils.m"
    {
#line 662 "program_representation_utils.m"
      program_representation_utils__String_9 = mercury__string__f_43_43_2_f_0((MR_String) "% case ", program_representation_utils__V_36_36);
    }
#line 663 "program_representation_utils.m"
    {
#line 663 "program_representation_utils.m"
      program_representation_utils__V_16_16 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_4);
    }
#line 663 "program_representation_utils.m"
    {
#line 663 "program_representation_utils.m"
      *program_representation_utils__Strings_6 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_16_16, ((MR_Box) (program_representation_utils__String_9)));
    }
#line 660 "program_representation_utils.m"
  }
#line 657 "program_representation_utils.m"
}

#line 645 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
#line 645 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 645 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 645 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2)
#line 645 "program_representation_utils.m"
{
#line 645 "program_representation_utils.m"
  {
#line 645 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 645 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_Strings_6;

#line 645 "program_representation_utils.m"
    {
#line 645 "program_representation_utils.m"
      program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_Strings_6);
    }
#line 645 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_Strings_6));
#line 645 "program_representation_utils.m"
  }
#line 645 "program_representation_utils.m"
}

#line 627 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_50,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_49,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 627 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 627 "program_representation_utils.m"
  MR_Integer program_representation_utils__CaseNum_4,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 627 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 627 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7)
#line 627 "program_representation_utils.m"
{
#line 632 "program_representation_utils.m"
  {
#line 632 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 632 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "program_representation_utils.m"
      {
#line 632 "program_representation_utils.m"
        {
#line 632 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 632 "program_representation_utils.m"
      }
#line 632 "program_representation_utils.m"
    else
#line 634 "program_representation_utils.m"
      {
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_58_58;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__CaseRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__CaseReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__DelimString_21;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__MainConsIdArityRep_22;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__OtherConsIdArityRep_23;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalRep_24;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__ConsIdArityString_25;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__OtherConsIdArityStrings_26;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__RevSubGoalPath_27;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadGoalString_28;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__TailCasesStrings_29;
#line 634 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_33_33;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__V_35_35;
#line 634 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_36_36;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__V_38_38;
#line 634 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_40_40;
#line 634 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_42_42;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__V_45_45;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__V_46_46;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__V_47_47;
#line 634 "program_representation_utils.m"
        MR_Word program_representation_utils__V_48_48;

#line 638 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__6_6 == (MR_Integer) 0))
#line 636 "program_representation_utils.m"
          {
#line 637 "program_representation_utils.m"
            {
#line 637 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 636 "program_representation_utils.m"
          }
#line 638 "program_representation_utils.m"
        else
#line 639 "program_representation_utils.m"
          {
#line 639 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 639 "program_representation_utils.m"
            MR_Word program_representation_utils__V_30_30;
#line 639 "program_representation_utils.m"
            MR_Word program_representation_utils__V_31_31;

#line 640 "program_representation_utils.m"
            {
#line 640 "program_representation_utils.m"
              program_representation_utils__V_30_30 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
            }
#line 640 "program_representation_utils.m"
            {
#line 640 "program_representation_utils.m"
              program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_53_53, ((MR_Box) ((MR_String) ";\n")));
            }
#line 640 "program_representation_utils.m"
            {
#line 640 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_53_53, program_representation_utils__V_30_30, program_representation_utils__V_31_31);
            }
#line 639 "program_representation_utils.m"
          }
#line 642 "program_representation_utils.m"
        program_representation_utils__MainConsIdArityRep_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 0)));
#line 642 "program_representation_utils.m"
        program_representation_utils__OtherConsIdArityRep_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 1)));
#line 642 "program_representation_utils.m"
        program_representation_utils__GoalRep_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 2)));
#line 643 "program_representation_utils.m"
        program_representation_utils__V_33_33 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 643 "program_representation_utils.m"
        {
#line 643 "program_representation_utils.m"
          program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(program_representation_utils__V_33_33, program_representation_utils__MainConsIdArityRep_22, &program_representation_utils__ConsIdArityString_25);
        }
#line 645 "program_representation_utils.m"
        program_representation_utils__V_36_36 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 645 "program_representation_utils.m"
        {
#line 645 "program_representation_utils.m"
          program_representation_utils__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 645 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[7]));
#line 645 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 1) = ((MR_Box) (program_representation_utils__print_switch_to_strings_7_p_0_1));
#line 645 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 645 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_35_35, 3) = ((MR_Box) (program_representation_utils__V_36_36));
#line 645 "program_representation_utils.m"
        }
#line 645 "program_representation_utils.m"
        {
#line 645 "program_representation_utils.m"
          mercury__list__map_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__V_35_35, program_representation_utils__OtherConsIdArityRep_23, &program_representation_utils__OtherConsIdArityStrings_26);
        }
#line 648 "program_representation_utils.m"
        {
#line 648 "program_representation_utils.m"
          program_representation_utils__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "program_representation_utils.m"
          MR_hl_field(MR_mktag(3), program_representation_utils__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 648 "program_representation_utils.m"
          MR_hl_field(MR_mktag(3), program_representation_utils__V_38_38, 1) = ((MR_Box) (program_representation_utils__CaseNum_4));
#line 648 "program_representation_utils.m"
          MR_hl_field(MR_mktag(3), program_representation_utils__V_38_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "program_representation_utils.m"
        }
#line 647 "program_representation_utils.m"
        {
#line 647 "program_representation_utils.m"
          program_representation_utils__RevSubGoalPath_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_27, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
#line 647 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_27, 1) = ((MR_Box) (program_representation_utils__V_38_38));
#line 647 "program_representation_utils.m"
        }
#line 649 "program_representation_utils.m"
        program_representation_utils__V_40_40 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 649 "program_representation_utils.m"
        {
#line 649 "program_representation_utils.m"
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_50, program_representation_utils__TypeClassInfo_for_goal_annotation_49, program_representation_utils__Info_1, program_representation_utils__V_40_40, program_representation_utils__RevSubGoalPath_27, program_representation_utils__GoalRep_24, &program_representation_utils__HeadGoalString_28);
        }
#line 651 "program_representation_utils.m"
        program_representation_utils__V_42_42 = (program_representation_utils__CaseNum_4 + (MR_Integer) 1);
#line 651 "program_representation_utils.m"
        {
#line 651 "program_representation_utils.m"
          program_representation_utils__print_switch_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_50, program_representation_utils__TypeClassInfo_for_goal_annotation_49, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__V_42_42, program_representation_utils__CaseReps_18, (MR_Integer) 1, &program_representation_utils__TailCasesStrings_29);
        }
#line 7025 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 654 "program_representation_utils.m"
        {
#line 654 "program_representation_utils.m"
          program_representation_utils__V_47_47 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__OtherConsIdArityStrings_26);
        }
#line 654 "program_representation_utils.m"
        {
#line 654 "program_representation_utils.m"
          program_representation_utils__V_48_48 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__HeadGoalString_28, program_representation_utils__TailCasesStrings_29);
        }
#line 654 "program_representation_utils.m"
        {
#line 654 "program_representation_utils.m"
          program_representation_utils__V_46_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__V_47_47, program_representation_utils__V_48_48);
        }
#line 653 "program_representation_utils.m"
        {
#line 653 "program_representation_utils.m"
          program_representation_utils__V_45_45 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__ConsIdArityString_25, program_representation_utils__V_46_46);
        }
#line 653 "program_representation_utils.m"
        {
#line 653 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__DelimString_21, program_representation_utils__V_45_45);
        }
#line 634 "program_representation_utils.m"
      }
#line 632 "program_representation_utils.m"
  }
#line 627 "program_representation_utils.m"
}

#line 605 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_36,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_35,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 605 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 605 "program_representation_utils.m"
  MR_Integer program_representation_utils__DisjNum_4,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 605 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__6_6,
#line 605 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__7_7)
#line 605 "program_representation_utils.m"
{
#line 610 "program_representation_utils.m"
  {
#line 610 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 610 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "program_representation_utils.m"
      {
#line 610 "program_representation_utils.m"
        {
#line 610 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 610 "program_representation_utils.m"
      }
#line 610 "program_representation_utils.m"
    else
#line 612 "program_representation_utils.m"
      {
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_40_40;
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__DelimString_21;
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__RevSubGoalPath_22;
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadGoalString_23;
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__TailGoalsString_24;
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__V_28_28;
#line 612 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_29_29;
#line 612 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_31_31;
#line 612 "program_representation_utils.m"
        MR_Word program_representation_utils__V_34_34;

#line 616 "program_representation_utils.m"
        if ((program_representation_utils__HeadVar__6_6 == (MR_Integer) 0))
#line 614 "program_representation_utils.m"
          {
#line 615 "program_representation_utils.m"
            {
#line 615 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 614 "program_representation_utils.m"
          }
#line 616 "program_representation_utils.m"
        else
#line 617 "program_representation_utils.m"
          {
#line 617 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 617 "program_representation_utils.m"
            MR_Word program_representation_utils__V_25_25;
#line 617 "program_representation_utils.m"
            MR_Word program_representation_utils__V_26_26;

#line 618 "program_representation_utils.m"
            {
#line 618 "program_representation_utils.m"
              program_representation_utils__V_25_25 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
            }
#line 618 "program_representation_utils.m"
            {
#line 618 "program_representation_utils.m"
              program_representation_utils__V_26_26 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_39_39, ((MR_Box) ((MR_String) ";\n")));
            }
#line 618 "program_representation_utils.m"
            {
#line 618 "program_representation_utils.m"
              program_representation_utils__DelimString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_39_39, program_representation_utils__V_25_25, program_representation_utils__V_26_26);
            }
#line 617 "program_representation_utils.m"
          }
#line 620 "program_representation_utils.m"
        {
#line 620 "program_representation_utils.m"
          program_representation_utils__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 620 "program_representation_utils.m"
          MR_hl_field(MR_mktag(2), program_representation_utils__V_28_28, 0) = ((MR_Box) (program_representation_utils__DisjNum_4));
#line 620 "program_representation_utils.m"
        }
#line 620 "program_representation_utils.m"
        {
#line 620 "program_representation_utils.m"
          program_representation_utils__RevSubGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_22, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
#line 620 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_22, 1) = ((MR_Box) (program_representation_utils__V_28_28));
#line 620 "program_representation_utils.m"
        }
#line 621 "program_representation_utils.m"
        program_representation_utils__V_29_29 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
#line 621 "program_representation_utils.m"
        {
#line 621 "program_representation_utils.m"
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_36, program_representation_utils__TypeClassInfo_for_goal_annotation_35, program_representation_utils__Info_1, program_representation_utils__V_29_29, program_representation_utils__RevSubGoalPath_22, program_representation_utils__GoalRep_17, &program_representation_utils__HeadGoalString_23);
        }
#line 623 "program_representation_utils.m"
        program_representation_utils__V_31_31 = (program_representation_utils__DisjNum_4 + (MR_Integer) 1);
#line 623 "program_representation_utils.m"
        {
#line 623 "program_representation_utils.m"
          program_representation_utils__print_disj_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_36, program_representation_utils__TypeClassInfo_for_goal_annotation_35, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__V_31_31, program_representation_utils__GoalReps_18, (MR_Integer) 1, &program_representation_utils__TailGoalsString_24);
        }
#line 7196 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 625 "program_representation_utils.m"
        {
#line 625 "program_representation_utils.m"
          program_representation_utils__V_34_34 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_40, program_representation_utils__HeadGoalString_23, program_representation_utils__TailGoalsString_24);
        }
#line 625 "program_representation_utils.m"
        {
#line 625 "program_representation_utils.m"
          *program_representation_utils__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_40, program_representation_utils__DelimString_21, program_representation_utils__V_34_34);
        }
#line 612 "program_representation_utils.m"
      }
#line 610 "program_representation_utils.m"
  }
#line 605 "program_representation_utils.m"
}

#line 579 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_32,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_31,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_1,
#line 579 "program_representation_utils.m"
  MR_Integer program_representation_utils__HeadVar__2_2,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_3,
#line 579 "program_representation_utils.m"
  MR_Integer program_representation_utils__ConjNum_4,
#line 579 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__5_5,
#line 579 "program_representation_utils.m"
  MR_Word * program_representation_utils__HeadVar__6_6)
#line 579 "program_representation_utils.m"
{
#line 583 "program_representation_utils.m"
  {
#line 583 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 583 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "program_representation_utils.m"
      {
#line 583 "program_representation_utils.m"
        {
#line 583 "program_representation_utils.m"
          *program_representation_utils__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 583 "program_representation_utils.m"
      }
#line 583 "program_representation_utils.m"
    else
#line 585 "program_representation_utils.m"
      {
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_36_36;
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalReps_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__RevSubGoalPath_18;
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadGoalString_19;
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__TailGoalsString_20;
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__Separator_21;
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__V_24_24;
#line 585 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_25_25;
#line 585 "program_representation_utils.m"
        MR_Word program_representation_utils__V_30_30;

#line 591 "program_representation_utils.m"
        {
#line 591 "program_representation_utils.m"
          program_representation_utils__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 591 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_24_24, 0) = ((MR_Box) (program_representation_utils__ConjNum_4));
#line 591 "program_representation_utils.m"
        }
#line 591 "program_representation_utils.m"
        {
#line 591 "program_representation_utils.m"
          program_representation_utils__RevSubGoalPath_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_18, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
#line 591 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_18, 1) = ((MR_Box) (program_representation_utils__V_24_24));
#line 591 "program_representation_utils.m"
        }
#line 592 "program_representation_utils.m"
        {
#line 592 "program_representation_utils.m"
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__TypeClassInfo_for_goal_annotation_31, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevSubGoalPath_18, program_representation_utils__GoalRep_15, &program_representation_utils__HeadGoalString_19);
        }
#line 594 "program_representation_utils.m"
        program_representation_utils__V_25_25 = (program_representation_utils__ConjNum_4 + (MR_Integer) 1);
#line 594 "program_representation_utils.m"
        {
#line 594 "program_representation_utils.m"
          program_representation_utils__print_conj_to_strings_2_6_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__TypeClassInfo_for_goal_annotation_31, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__V_25_25, program_representation_utils__GoalReps_16, &program_representation_utils__TailGoalsString_20);
        }
#line 599 "program_representation_utils.m"
        if ((program_representation_utils__GoalReps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "program_representation_utils.m"
          {
#line 598 "program_representation_utils.m"
            {
#line 598 "program_representation_utils.m"
              program_representation_utils__Separator_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 597 "program_representation_utils.m"
          }
#line 599 "program_representation_utils.m"
        else
#line 600 "program_representation_utils.m"
          {
#line 600 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 600 "program_representation_utils.m"
            MR_Word program_representation_utils__V_27_27;
#line 600 "program_representation_utils.m"
            MR_Word program_representation_utils__V_28_28;

#line 601 "program_representation_utils.m"
            {
#line 601 "program_representation_utils.m"
              program_representation_utils__V_27_27 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
            }
#line 601 "program_representation_utils.m"
            {
#line 601 "program_representation_utils.m"
              program_representation_utils__V_28_28 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) ((MR_String) ",\n")));
            }
#line 601 "program_representation_utils.m"
            {
#line 601 "program_representation_utils.m"
              program_representation_utils__Separator_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__V_27_27, program_representation_utils__V_28_28);
            }
#line 600 "program_representation_utils.m"
          }
#line 7346 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 603 "program_representation_utils.m"
        {
#line 603 "program_representation_utils.m"
          program_representation_utils__V_30_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_36_36, program_representation_utils__Separator_21, program_representation_utils__TailGoalsString_20);
        }
#line 603 "program_representation_utils.m"
        {
#line 603 "program_representation_utils.m"
          *program_representation_utils__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_36_36, program_representation_utils__HeadGoalString_19, program_representation_utils__V_30_30);
        }
#line 585 "program_representation_utils.m"
      }
#line 583 "program_representation_utils.m"
  }
#line 579 "program_representation_utils.m"
}

#line 565 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeInfo_for_T_17,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_16,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__Info_6,
#line 565 "program_representation_utils.m"
  MR_Integer program_representation_utils__Indent_7,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__RevGoalPath_8,
#line 565 "program_representation_utils.m"
  MR_Word program_representation_utils__GoalReps_9,
#line 565 "program_representation_utils.m"
  MR_Word * program_representation_utils__Strings_10)
#line 565 "program_representation_utils.m"
{
#line 573 "program_representation_utils.m"
  {
#line 573 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 573 "program_representation_utils.m"
    if ((program_representation_utils__GoalReps_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "program_representation_utils.m"
      {
#line 571 "program_representation_utils.m"
        MR_Word program_representation_utils__V_14_14;

#line 572 "program_representation_utils.m"
        {
#line 572 "program_representation_utils.m"
          program_representation_utils__V_14_14 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
        }
#line 572 "program_representation_utils.m"
        {
#line 572 "program_representation_utils.m"
          *program_representation_utils__Strings_10 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_14_14, ((MR_Box) ((MR_String) "true\n")));
        }
#line 571 "program_representation_utils.m"
      }
#line 573 "program_representation_utils.m"
    else
#line 574 "program_representation_utils.m"
      {
#line 575 "program_representation_utils.m"
        {
#line 575 "program_representation_utils.m"
          program_representation_utils__print_conj_to_strings_2_6_p_0(program_representation_utils__TypeInfo_for_T_17, program_representation_utils__TypeClassInfo_for_goal_annotation_16, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__GoalReps_9, program_representation_utils__Strings_10);
#line 575 "program_representation_utils.m"
          return;
        }
#line 574 "program_representation_utils.m"
      }
#line 573 "program_representation_utils.m"
  }
#line 565 "program_representation_utils.m"
}

#line 421 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
#line 421 "program_representation_utils.m"
  MR_Word program_representation_utils__VarNameTable_6,
#line 421 "program_representation_utils.m"
  MR_Integer program_representation_utils__VarNum_7,
#line 421 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_8,
#line 421 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_15,
#line 421 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_16)
#line 421 "program_representation_utils.m"
{
#line 425 "program_representation_utils.m"
  {
#line 425 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 425 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_35_35;
#line 425 "program_representation_utils.m"
    MR_String program_representation_utils__VarNumStr_10;
#line 425 "program_representation_utils.m"
    MR_Word program_representation_utils__VarIdStrs_12;
#line 425 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeRepStrs_13;
#line 425 "program_representation_utils.m"
    MR_Word program_representation_utils__EntryStrs_14;
#line 425 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 425 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 432 "program_representation_utils.m"
    MR_String program_representation_utils__VarName_11;

#line 426 "program_representation_utils.m"
    {
#line 426 "program_representation_utils.m"
      mercury__string__int_to_string_2_p_0(program_representation_utils__VarNum_7, &program_representation_utils__VarNumStr_10);
    }
#line 428 "program_representation_utils.m"
    {
#line 428 "program_representation_utils.m"
      program_representation_utils__succeeded = mdbcomp__program_representation__search_var_name_3_p_0(program_representation_utils__VarNameTable_6, program_representation_utils__VarNum_7, &program_representation_utils__VarName_11);
    }
#line 428 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 428 "program_representation_utils.m"
      {
#line 429 "program_representation_utils.m"
        program_representation_utils__succeeded = (strcmp(program_representation_utils__VarName_11, (MR_String) "") == 0);
#line 429 "program_representation_utils.m"
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
#line 428 "program_representation_utils.m"
      }
#line 432 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 431 "program_representation_utils.m"
      {
#line 431 "program_representation_utils.m"
        MR_Word program_representation_utils__V_17_17;
#line 431 "program_representation_utils.m"
        MR_Word program_representation_utils__V_18_18;
#line 431 "program_representation_utils.m"
        MR_Word program_representation_utils__V_20_20;

#line 431 "program_representation_utils.m"
        {
#line 431 "program_representation_utils.m"
          program_representation_utils__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_20_20, 0) = ((MR_Box) (program_representation_utils__VarNumStr_10));
#line 431 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
#line 431 "program_representation_utils.m"
        }
#line 431 "program_representation_utils.m"
        {
#line 431 "program_representation_utils.m"
          program_representation_utils__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_18_18, 0) = ((MR_Box) ((MR_String) " "));
#line 431 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_18_18, 1) = ((MR_Box) (program_representation_utils__V_20_20));
#line 431 "program_representation_utils.m"
        }
#line 431 "program_representation_utils.m"
        {
#line 431 "program_representation_utils.m"
          program_representation_utils__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_17_17, 0) = ((MR_Box) (program_representation_utils__VarName_11));
#line 431 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_17_17, 1) = ((MR_Box) (program_representation_utils__V_18_18));
#line 431 "program_representation_utils.m"
        }
#line 431 "program_representation_utils.m"
        {
#line 431 "program_representation_utils.m"
          program_representation_utils__VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_17_17);
        }
#line 431 "program_representation_utils.m"
      }
#line 432 "program_representation_utils.m"
    else
#line 433 "program_representation_utils.m"
      {
#line 433 "program_representation_utils.m"
        MR_Word program_representation_utils__V_24_24;
#line 433 "program_representation_utils.m"
        MR_Word program_representation_utils__V_26_26;

#line 433 "program_representation_utils.m"
        {
#line 433 "program_representation_utils.m"
          program_representation_utils__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 0) = ((MR_Box) (program_representation_utils__VarNumStr_10));
#line 433 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
#line 433 "program_representation_utils.m"
        }
#line 433 "program_representation_utils.m"
        {
#line 433 "program_representation_utils.m"
          program_representation_utils__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_24_24, 0) = ((MR_Box) ((MR_String) "unnamed_var "));
#line 433 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), program_representation_utils__V_24_24, 1) = ((MR_Box) (program_representation_utils__V_26_26));
#line 433 "program_representation_utils.m"
        }
#line 433 "program_representation_utils.m"
        {
#line 433 "program_representation_utils.m"
          program_representation_utils__VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_24_24);
        }
#line 433 "program_representation_utils.m"
      }
#line 435 "program_representation_utils.m"
    {
#line 435 "program_representation_utils.m"
      program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__TypeRep_8, &program_representation_utils__TypeRepStrs_13);
    }
#line 7571 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 855 "program_representation_utils.m"
    {
#line 855 "program_representation_utils.m"
      program_representation_utils__V_31_31 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 436 "program_representation_utils.m"
    {
#line 436 "program_representation_utils.m"
      program_representation_utils__V_30_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeRepStrs_13, program_representation_utils__V_31_31);
    }
#line 436 "program_representation_utils.m"
    {
#line 436 "program_representation_utils.m"
      program_representation_utils__EntryStrs_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__VarIdStrs_12, program_representation_utils__V_30_30);
    }
#line 437 "program_representation_utils.m"
    {
#line 437 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Strings_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__STATE_VARIABLE_Strings_0_15, program_representation_utils__EntryStrs_14);
    }
#line 425 "program_representation_utils.m"
  }
#line 421 "program_representation_utils.m"
}

#line 364 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
#line 364 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadTypeRep_1,
#line 364 "program_representation_utils.m"
  MR_Word program_representation_utils__HeadVar__2_2,
#line 364 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_3)
#line 364 "program_representation_utils.m"
{
#line 367 "program_representation_utils.m"
  {
#line 367 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 367 "program_representation_utils.m"
    if ((program_representation_utils__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "program_representation_utils.m"
      {
#line 368 "program_representation_utils.m"
        program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__HeadTypeRep_1, program_representation_utils__Cord_3);
#line 368 "program_representation_utils.m"
        return;
      }
#line 367 "program_representation_utils.m"
    else
#line 370 "program_representation_utils.m"
      {
#line 370 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_15_15;
#line 370 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadTailTypeRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 370 "program_representation_utils.m"
        MR_Word program_representation_utils__TailTailTypeReps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 370 "program_representation_utils.m"
        MR_Word program_representation_utils__HeadCord_10;
#line 370 "program_representation_utils.m"
        MR_Word program_representation_utils__TailCord_11;
#line 370 "program_representation_utils.m"
        MR_Word program_representation_utils__V_12_12;
#line 370 "program_representation_utils.m"
        MR_Word program_representation_utils__V_13_13;

#line 371 "program_representation_utils.m"
        {
#line 371 "program_representation_utils.m"
          program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__HeadTypeRep_1, &program_representation_utils__HeadCord_10);
        }
#line 372 "program_representation_utils.m"
        {
#line 372 "program_representation_utils.m"
          program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTailTypeRep_7, program_representation_utils__TailTailTypeReps_8, &program_representation_utils__TailCord_11);
        }
#line 7652 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 373 "program_representation_utils.m"
        {
#line 373 "program_representation_utils.m"
          program_representation_utils__V_13_13 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_15_15, ((MR_Box) ((MR_String) ", ")));
        }
#line 373 "program_representation_utils.m"
        {
#line 373 "program_representation_utils.m"
          program_representation_utils__V_12_12 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_15_15, program_representation_utils__V_13_13, program_representation_utils__TailCord_11);
        }
#line 373 "program_representation_utils.m"
        {
#line 373 "program_representation_utils.m"
          *program_representation_utils__Cord_3 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_15_15, program_representation_utils__HeadCord_10, program_representation_utils__V_12_12);
        }
#line 370 "program_representation_utils.m"
      }
#line 367 "program_representation_utils.m"
  }
#line 364 "program_representation_utils.m"
}

#line 280 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
#line 280 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_3,
#line 280 "program_representation_utils.m"
  MR_Word * program_representation_utils__Cord_4)
#line 280 "program_representation_utils.m"
{
#line 284 "program_representation_utils.m"
  {
#line 284 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 284 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 1))))
#line 299 "program_representation_utils.m"
      {
#line 299 "program_representation_utils.m"
        MR_Word program_representation_utils__BuiltinTypeRep_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__TypeRep_3, (MR_Integer) 0)));
#line 299 "program_representation_utils.m"
        MR_String program_representation_utils__TypeNameStr_13;

#line 303 "program_representation_utils.m"
        if ((program_representation_utils__BuiltinTypeRep_12 == (MR_Integer) 3))
#line 311 "program_representation_utils.m"
          program_representation_utils__TypeNameStr_13 = (MR_String) "char";
#line 303 "program_representation_utils.m"
        else
#line 303 "program_representation_utils.m"
          if ((program_representation_utils__BuiltinTypeRep_12 == (MR_Integer) 1))
#line 305 "program_representation_utils.m"
            program_representation_utils__TypeNameStr_13 = (MR_String) "float";
#line 303 "program_representation_utils.m"
          else
#line 303 "program_representation_utils.m"
            if ((program_representation_utils__BuiltinTypeRep_12 == (MR_Integer) 0))
#line 302 "program_representation_utils.m"
              program_representation_utils__TypeNameStr_13 = (MR_String) "int";
#line 303 "program_representation_utils.m"
            else
#line 308 "program_representation_utils.m"
              program_representation_utils__TypeNameStr_13 = (MR_String) "string";
#line 313 "program_representation_utils.m"
        {
#line 313 "program_representation_utils.m"
          *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__TypeNameStr_13)));
        }
#line 299 "program_representation_utils.m"
      }
#line 284 "program_representation_utils.m"
    else
#line 284 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 0))))
#line 284 "program_representation_utils.m"
        {
#line 284 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_82_82;
#line 284 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__TypeRep_3, (MR_Integer) 0)));
#line 284 "program_representation_utils.m"
          MR_Word program_representation_utils__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__TypeRep_3, (MR_Integer) 1)));
#line 284 "program_representation_utils.m"
          MR_String program_representation_utils__TypeCtorSymNameStr_7;
#line 284 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorSymNameCord_8;

#line 285 "program_representation_utils.m"
          {
#line 285 "program_representation_utils.m"
            program_representation_utils__TypeCtorSymNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(program_representation_utils__TypeCtorSymName_5);
          }
#line 7748 "program_representation_utils.c"
          program_representation_utils__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 286 "program_representation_utils.m"
          {
#line 286 "program_representation_utils.m"
            program_representation_utils__TypeCtorSymNameCord_8 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) (program_representation_utils__TypeCtorSymNameStr_7)));
          }
#line 290 "program_representation_utils.m"
          if ((program_representation_utils__ArgTypes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "program_representation_utils.m"
            *program_representation_utils__Cord_4 = program_representation_utils__TypeCtorSymNameCord_8;
#line 290 "program_representation_utils.m"
          else
#line 291 "program_representation_utils.m"
            {
#line 291 "program_representation_utils.m"
              MR_Word program_representation_utils__HeadTypeRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_6, (MR_Integer) 0)));
#line 291 "program_representation_utils.m"
              MR_Word program_representation_utils__TailTypeReps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_6, (MR_Integer) 1)));
#line 291 "program_representation_utils.m"
              MR_Word program_representation_utils__ArgTypesCord_11;
#line 291 "program_representation_utils.m"
              MR_Word program_representation_utils__V_41_41;
#line 291 "program_representation_utils.m"
              MR_Word program_representation_utils__V_42_42;
#line 291 "program_representation_utils.m"
              MR_Word program_representation_utils__V_44_44;
#line 291 "program_representation_utils.m"
              MR_Word program_representation_utils__V_45_45;

#line 292 "program_representation_utils.m"
              {
#line 292 "program_representation_utils.m"
                program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_9, program_representation_utils__TailTypeReps_10, &program_representation_utils__ArgTypesCord_11);
              }
#line 294 "program_representation_utils.m"
              {
#line 294 "program_representation_utils.m"
                program_representation_utils__V_42_42 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) ((MR_String) "(")));
              }
#line 296 "program_representation_utils.m"
              {
#line 296 "program_representation_utils.m"
                program_representation_utils__V_45_45 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) ((MR_String) ")")));
              }
#line 296 "program_representation_utils.m"
              {
#line 296 "program_representation_utils.m"
                program_representation_utils__V_44_44 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__ArgTypesCord_11, program_representation_utils__V_45_45);
              }
#line 295 "program_representation_utils.m"
              {
#line 295 "program_representation_utils.m"
                program_representation_utils__V_41_41 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__V_42_42, program_representation_utils__V_44_44);
              }
#line 294 "program_representation_utils.m"
              {
#line 294 "program_representation_utils.m"
                *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__TypeCtorSymNameCord_8, program_representation_utils__V_41_41);
              }
#line 291 "program_representation_utils.m"
            }
#line 284 "program_representation_utils.m"
        }
#line 284 "program_representation_utils.m"
      else
#line 284 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 2))))
#line 315 "program_representation_utils.m"
          {
#line 315 "program_representation_utils.m"
            MR_Word program_representation_utils__ArgTypes_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__TypeRep_3, (MR_Integer) 0)));

#line 319 "program_representation_utils.m"
            if ((program_representation_utils__ArgTypes_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "program_representation_utils.m"
              {
#line 318 "program_representation_utils.m"
                {
#line 318 "program_representation_utils.m"
                  *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "{}")));
                }
#line 317 "program_representation_utils.m"
              }
#line 319 "program_representation_utils.m"
            else
#line 320 "program_representation_utils.m"
              {
#line 320 "program_representation_utils.m"
                MR_Word program_representation_utils__TypeCtorInfo_85_85;
#line 320 "program_representation_utils.m"
                MR_Word program_representation_utils__V_35_35;
#line 320 "program_representation_utils.m"
                MR_Word program_representation_utils__V_37_37;
#line 320 "program_representation_utils.m"
                MR_Word program_representation_utils__V_38_38;
#line 320 "program_representation_utils.m"
                MR_Word program_representation_utils__HeadTypeRep_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_53, (MR_Integer) 0)));
#line 320 "program_representation_utils.m"
                MR_Word program_representation_utils__TailTypeReps_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_53, (MR_Integer) 1)));
#line 320 "program_representation_utils.m"
                MR_Word program_representation_utils__ArgTypesCord_49;

#line 321 "program_representation_utils.m"
                {
#line 321 "program_representation_utils.m"
                  program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_47, program_representation_utils__TailTypeReps_48, &program_representation_utils__ArgTypesCord_49);
                }
#line 7856 "program_representation_utils.c"
                program_representation_utils__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 323 "program_representation_utils.m"
                {
#line 323 "program_representation_utils.m"
                  program_representation_utils__V_35_35 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_85_85, ((MR_Box) ((MR_String) "{")));
                }
#line 325 "program_representation_utils.m"
                {
#line 325 "program_representation_utils.m"
                  program_representation_utils__V_38_38 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_85_85, ((MR_Box) ((MR_String) "}")));
                }
#line 325 "program_representation_utils.m"
                {
#line 325 "program_representation_utils.m"
                  program_representation_utils__V_37_37 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_85_85, program_representation_utils__ArgTypesCord_49, program_representation_utils__V_38_38);
                }
#line 324 "program_representation_utils.m"
                {
#line 324 "program_representation_utils.m"
                  *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_85_85, program_representation_utils__V_35_35, program_representation_utils__V_37_37);
                }
#line 320 "program_representation_utils.m"
              }
#line 315 "program_representation_utils.m"
          }
#line 284 "program_representation_utils.m"
        else
#line 284 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__TypeRep_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 328 "program_representation_utils.m"
            {
#line 328 "program_representation_utils.m"
              MR_Word program_representation_utils__MaybeResultType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 2)));
#line 328 "program_representation_utils.m"
              MR_Word program_representation_utils__ArgTypes_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 1)));

#line 342 "program_representation_utils.m"
              if ((program_representation_utils__MaybeResultType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "program_representation_utils.m"
                if ((program_representation_utils__ArgTypes_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "program_representation_utils.m"
                  {
#line 333 "program_representation_utils.m"
                    {
#line 333 "program_representation_utils.m"
                      *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "pred ()")));
                    }
#line 332 "program_representation_utils.m"
                  }
#line 334 "program_representation_utils.m"
                else
#line 335 "program_representation_utils.m"
                  {
#line 335 "program_representation_utils.m"
                    MR_Word program_representation_utils__TypeCtorInfo_87_87;
#line 335 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_29_29;
#line 335 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_31_31;
#line 335 "program_representation_utils.m"
                    MR_Word program_representation_utils__V_32_32;
#line 335 "program_representation_utils.m"
                    MR_Word program_representation_utils__HeadTypeRep_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 0)));
#line 335 "program_representation_utils.m"
                    MR_Word program_representation_utils__TailTypeReps_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 1)));
#line 335 "program_representation_utils.m"
                    MR_Word program_representation_utils__ArgTypesCord_59;

#line 336 "program_representation_utils.m"
                    {
#line 336 "program_representation_utils.m"
                      program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_57, program_representation_utils__TailTypeReps_58, &program_representation_utils__ArgTypesCord_59);
                    }
#line 7930 "program_representation_utils.c"
                    program_representation_utils__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 338 "program_representation_utils.m"
                    {
#line 338 "program_representation_utils.m"
                      program_representation_utils__V_29_29 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_87_87, ((MR_Box) ((MR_String) "pred(")));
                    }
#line 340 "program_representation_utils.m"
                    {
#line 340 "program_representation_utils.m"
                      program_representation_utils__V_32_32 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_87_87, ((MR_Box) ((MR_String) ")")));
                    }
#line 340 "program_representation_utils.m"
                    {
#line 340 "program_representation_utils.m"
                      program_representation_utils__V_31_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_87_87, program_representation_utils__ArgTypesCord_59, program_representation_utils__V_32_32);
                    }
#line 339 "program_representation_utils.m"
                    {
#line 339 "program_representation_utils.m"
                      *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_87_87, program_representation_utils__V_29_29, program_representation_utils__V_31_31);
                    }
#line 335 "program_representation_utils.m"
                  }
#line 342 "program_representation_utils.m"
              else
#line 343 "program_representation_utils.m"
                {
#line 343 "program_representation_utils.m"
                  MR_Word program_representation_utils__ResultType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeResultType_14, (MR_Integer) 0)));
#line 343 "program_representation_utils.m"
                  MR_Word program_representation_utils__ResultTypeCord_16;

#line 344 "program_representation_utils.m"
                  {
#line 344 "program_representation_utils.m"
                    program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__ResultType_15, &program_representation_utils__ResultTypeCord_16);
                  }
#line 348 "program_representation_utils.m"
                  if ((program_representation_utils__ArgTypes_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "program_representation_utils.m"
                    {
#line 346 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_88_88 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 346 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_27_27;

#line 347 "program_representation_utils.m"
                      {
#line 347 "program_representation_utils.m"
                        program_representation_utils__V_27_27 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_88_88, ((MR_Box) ((MR_String) "func = ")));
                      }
#line 347 "program_representation_utils.m"
                      {
#line 347 "program_representation_utils.m"
                        *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_88_88, program_representation_utils__V_27_27, program_representation_utils__ResultTypeCord_16);
                      }
#line 346 "program_representation_utils.m"
                    }
#line 348 "program_representation_utils.m"
                  else
#line 349 "program_representation_utils.m"
                    {
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_89_89;
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_21_21;
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_23_23;
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_24_24;
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__V_25_25;
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__HeadTypeRep_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 0)));
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__TailTypeReps_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 1)));
#line 349 "program_representation_utils.m"
                      MR_Word program_representation_utils__ArgTypesCord_68;

#line 350 "program_representation_utils.m"
                      {
#line 350 "program_representation_utils.m"
                        program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_66, program_representation_utils__TailTypeReps_67, &program_representation_utils__ArgTypesCord_68);
                      }
#line 8015 "program_representation_utils.c"
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
#line 355 "program_representation_utils.m"
                      {
#line 355 "program_representation_utils.m"
                        program_representation_utils__V_24_24 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__V_25_25, program_representation_utils__ResultTypeCord_16);
                      }
#line 354 "program_representation_utils.m"
                      {
#line 354 "program_representation_utils.m"
                        program_representation_utils__V_23_23 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__ArgTypesCord_68, program_representation_utils__V_24_24);
                      }
#line 353 "program_representation_utils.m"
                      {
#line 353 "program_representation_utils.m"
                        *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__V_21_21, program_representation_utils__V_23_23);
                      }
#line 349 "program_representation_utils.m"
                    }
#line 343 "program_representation_utils.m"
                }
#line 328 "program_representation_utils.m"
            }
#line 284 "program_representation_utils.m"
          else
#line 359 "program_representation_utils.m"
            {
#line 359 "program_representation_utils.m"
              MR_Integer program_representation_utils__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 1)));
#line 359 "program_representation_utils.m"
              MR_String program_representation_utils__NStr_18;
#line 359 "program_representation_utils.m"
              MR_String program_representation_utils__V_19_19;

#line 360 "program_representation_utils.m"
              {
#line 360 "program_representation_utils.m"
                mercury__string__int_to_string_2_p_0(program_representation_utils__N_17, &program_representation_utils__NStr_18);
              }
#line 361 "program_representation_utils.m"
              {
#line 361 "program_representation_utils.m"
                program_representation_utils__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "T", program_representation_utils__NStr_18);
              }
#line 361 "program_representation_utils.m"
              {
#line 361 "program_representation_utils.m"
                *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__V_19_19)));
              }
#line 359 "program_representation_utils.m"
            }
#line 284 "program_representation_utils.m"
  }
#line 280 "program_representation_utils.m"
}

#line 268 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
#line 268 "program_representation_utils.m"
  MR_Integer program_representation_utils__TypeNum_5,
#line 268 "program_representation_utils.m"
  MR_Word program_representation_utils__TypeRep_6,
#line 268 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_11,
#line 268 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_12)
#line 268 "program_representation_utils.m"
{
#line 271 "program_representation_utils.m"
  {
#line 271 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_21_21;
#line 271 "program_representation_utils.m"
    MR_String program_representation_utils__TypeNumStr_8;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeRepStrCord_9;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__Str_10;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__V_13_13;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__V_14_14;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__V_15_15;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__V_17_17;
#line 271 "program_representation_utils.m"
    MR_Word program_representation_utils__V_18_18;

#line 272 "program_representation_utils.m"
    {
#line 272 "program_representation_utils.m"
      mercury__string__int_to_string_2_p_0(program_representation_utils__TypeNum_5, &program_representation_utils__TypeNumStr_8);
    }
#line 273 "program_representation_utils.m"
    {
#line 273 "program_representation_utils.m"
      program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__TypeRep_6, &program_representation_utils__TypeRepStrCord_9);
    }
#line 8127 "program_representation_utils.c"
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
#line 277 "program_representation_utils.m"
    {
#line 277 "program_representation_utils.m"
      program_representation_utils__V_18_18 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_21_21, ((MR_Box) ((MR_String) "\n")));
    }
#line 277 "program_representation_utils.m"
    {
#line 277 "program_representation_utils.m"
      program_representation_utils__V_17_17 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__TypeRepStrCord_9, program_representation_utils__V_18_18);
    }
#line 276 "program_representation_utils.m"
    {
#line 276 "program_representation_utils.m"
      program_representation_utils__V_14_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__V_15_15, program_representation_utils__V_17_17);
    }
#line 275 "program_representation_utils.m"
    {
#line 275 "program_representation_utils.m"
      program_representation_utils__Str_10 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__V_13_13, program_representation_utils__V_14_14);
    }
#line 278 "program_representation_utils.m"
    {
#line 278 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Strings_12 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__STATE_VARIABLE_Strings_0_11, program_representation_utils__Str_10);
    }
#line 271 "program_representation_utils.m"
  }
#line 268 "program_representation_utils.m"
}

#line 257 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
#line 257 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 257 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 257 "program_representation_utils.m"
{
#line 257 "program_representation_utils.m"
  {
#line 257 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 257 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 257 "program_representation_utils.m"
    MR_Word program_representation_utils__conv5_HeadVar__2_2;

#line 257 "program_representation_utils.m"
    {
#line 257 "program_representation_utils.m"
      program_representation_utils__conv5_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
#line 257 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv5_HeadVar__2_2));
#line 257 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 257 "program_representation_utils.m"
  }
#line 257 "program_representation_utils.m"
}

#line 256 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
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
    MR_Word program_representation_utils__conv4_HeadVar__2_2;

#line 256 "program_representation_utils.m"
    {
#line 256 "program_representation_utils.m"
      program_representation_utils__conv4_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
#line 256 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv4_HeadVar__2_2));
#line 256 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 256 "program_representation_utils.m"
  }
#line 256 "program_representation_utils.m"
}

#line 255 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
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
    MR_Word program_representation_utils__conv3_HeadVar__2_2;

#line 255 "program_representation_utils.m"
    {
#line 255 "program_representation_utils.m"
      program_representation_utils__conv3_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
#line 255 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv3_HeadVar__2_2));
#line 255 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 255 "program_representation_utils.m"
  }
#line 255 "program_representation_utils.m"
}

#line 254 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 254 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 254 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_2)
#line 254 "program_representation_utils.m"
{
#line 254 "program_representation_utils.m"
  {
#line 254 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 254 "program_representation_utils.m"
    MR_String program_representation_utils__conv2_String_4;

#line 254 "program_representation_utils.m"
    {
#line 254 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv2_String_4);
    }
#line 254 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv2_String_4));
#line 254 "program_representation_utils.m"
  }
#line 254 "program_representation_utils.m"
}

#line 253 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
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
    MR_String program_representation_utils__conv1_String_4;

#line 253 "program_representation_utils.m"
    {
#line 253 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv1_String_4);
    }
#line 253 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv1_String_4));
#line 253 "program_representation_utils.m"
  }
#line 253 "program_representation_utils.m"
}

#line 252 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
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
    MR_String program_representation_utils__conv0_String_4;

#line 252 "program_representation_utils.m"
    {
#line 252 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_String_4);
    }
#line 252 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_String_4));
#line 252 "program_representation_utils.m"
  }
#line 252 "program_representation_utils.m"
}

#line 239 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
#line 239 "program_representation_utils.m"
  MR_Word program_representation_utils__OISUTypeProcs_4,
#line 239 "program_representation_utils.m"
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_7,
#line 239 "program_representation_utils.m"
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_8)
#line 239 "program_representation_utils.m"
{
#line 242 "program_representation_utils.m"
  {
#line 242 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_39_47 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_40_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_45_53;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__OISUStr_6;
#line 242 "program_representation_utils.m"
    MR_String program_representation_utils__TypeCtor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 0)));
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__CreatorProcLabels_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 1)));
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__MutatorProcLabels_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 2)));
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__DestructorProcLabels_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 3)));
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__CreatorStrs_17;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__MutatorStrs_18;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__DestructorStrs_19;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__CreatorNlCords_20;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__MutatorNlCords_21;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__DestructorNlCords_22;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_34_34;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_35_35;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_37_37;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_38_38;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_39_39;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_41_41;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_42_42;
#line 242 "program_representation_utils.m"
    MR_Word program_representation_utils__V_44_44;

#line 252 "program_representation_utils.m"
    {
#line 252 "program_representation_utils.m"
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[12], program_representation_utils__CreatorProcLabels_14, &program_representation_utils__CreatorStrs_17);
    }
#line 253 "program_representation_utils.m"
    {
#line 253 "program_representation_utils.m"
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[13], program_representation_utils__MutatorProcLabels_15, &program_representation_utils__MutatorStrs_18);
    }
#line 254 "program_representation_utils.m"
    {
#line 254 "program_representation_utils.m"
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[14], program_representation_utils__DestructorProcLabels_16, &program_representation_utils__DestructorStrs_19);
    }
#line 8436 "program_representation_utils.c"
    program_representation_utils__TypeInfo_45_53 = (MR_Word) &program_representation_utils_scalar_common_1[0];
#line 255 "program_representation_utils.m"
    {
#line 255 "program_representation_utils.m"
      program_representation_utils__CreatorNlCords_20 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[15], program_representation_utils__CreatorStrs_17);
    }
#line 256 "program_representation_utils.m"
    {
#line 256 "program_representation_utils.m"
      program_representation_utils__MutatorNlCords_21 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[16], program_representation_utils__MutatorStrs_18);
    }
#line 257 "program_representation_utils.m"
    {
#line 257 "program_representation_utils.m"
      program_representation_utils__DestructorNlCords_22 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[17], program_representation_utils__DestructorStrs_19);
    }
#line 258 "program_representation_utils.m"
    {
#line 258 "program_representation_utils.m"
      program_representation_utils__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_32_32, 0) = ((MR_Box) (program_representation_utils__TypeCtor_13));
#line 258 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "program_representation_utils.m"
    }
#line 258 "program_representation_utils.m"
    {
#line 258 "program_representation_utils.m"
      program_representation_utils__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_30_30, 0) = ((MR_Box) ((MR_String) "\nOISU type constructor "));
#line 258 "program_representation_utils.m"
      MR_hl_field(MR_mktag(1), program_representation_utils__V_30_30, 1) = ((MR_Box) (program_representation_utils__V_32_32));
#line 258 "program_representation_utils.m"
    }
#line 258 "program_representation_utils.m"
    {
#line 258 "program_representation_utils.m"
      program_representation_utils__V_29_29 = mercury__cord__from_list_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_30_30);
    }
#line 260 "program_representation_utils.m"
    {
#line 260 "program_representation_utils.m"
      program_representation_utils__V_37_37 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__CreatorNlCords_20);
    }
#line 259 "program_representation_utils.m"
    {
#line 259 "program_representation_utils.m"
      program_representation_utils__V_35_35 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nCreator procs:\n")), program_representation_utils__V_37_37);
    }
#line 262 "program_representation_utils.m"
    {
#line 262 "program_representation_utils.m"
      program_representation_utils__V_41_41 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__MutatorNlCords_21);
    }
#line 261 "program_representation_utils.m"
    {
#line 261 "program_representation_utils.m"
      program_representation_utils__V_39_39 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nMutator procs:\n")), program_representation_utils__V_41_41);
    }
#line 264 "program_representation_utils.m"
    {
#line 264 "program_representation_utils.m"
      program_representation_utils__V_44_44 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__DestructorNlCords_22);
    }
#line 263 "program_representation_utils.m"
    {
#line 263 "program_representation_utils.m"
      program_representation_utils__V_42_42 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nDestructor procs:\n")), program_representation_utils__V_44_44);
    }
#line 263 "program_representation_utils.m"
    {
#line 263 "program_representation_utils.m"
      program_representation_utils__V_38_38 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_39_39, program_representation_utils__V_42_42);
    }
#line 261 "program_representation_utils.m"
    {
#line 261 "program_representation_utils.m"
      program_representation_utils__V_34_34 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_35_35, program_representation_utils__V_38_38);
    }
#line 259 "program_representation_utils.m"
    {
#line 259 "program_representation_utils.m"
      program_representation_utils__OISUStr_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__V_29_29, program_representation_utils__V_34_34);
    }
#line 244 "program_representation_utils.m"
    {
#line 244 "program_representation_utils.m"
      *program_representation_utils__STATE_VARIABLE_Strings_8 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__STATE_VARIABLE_Strings_0_7, program_representation_utils__OISUStr_6);
    }
#line 242 "program_representation_utils.m"
  }
#line 239 "program_representation_utils.m"
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
#line 1257 "program_representation_utils.m"
  {
#line 1257 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1257 "program_representation_utils.m"
    if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1263 "program_representation_utils.m"
      {
#line 1263 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1260 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1264 "program_representation_utils.m"
        {
#line 1264 "program_representation_utils.m"
          MR_Word base;
#line 1264 "program_representation_utils.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "program_representation_utils.m"
          *program_representation_utils__IsCall_4 = base;
#line 1264 "program_representation_utils.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_30));
#line 1264 "program_representation_utils.m"
        }
#line 1263 "program_representation_utils.m"
      }
#line 1257 "program_representation_utils.m"
    else
#line 1257 "program_representation_utils.m"
      if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1263 "program_representation_utils.m"
        {
#line 1263 "program_representation_utils.m"
          MR_Word program_representation_utils__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1261 "program_representation_utils.m"
          MR_Integer program_representation_utils__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1261 "program_representation_utils.m"
          MR_Integer program_representation_utils__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1264 "program_representation_utils.m"
          {
#line 1264 "program_representation_utils.m"
            MR_Word base;
#line 1264 "program_representation_utils.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "program_representation_utils.m"
            *program_representation_utils__IsCall_4 = base;
#line 1264 "program_representation_utils.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_35));
#line 1264 "program_representation_utils.m"
          }
#line 1263 "program_representation_utils.m"
        }
#line 1257 "program_representation_utils.m"
      else
#line 1257 "program_representation_utils.m"
        if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1263 "program_representation_utils.m"
          {
#line 1263 "program_representation_utils.m"
            MR_Word program_representation_utils__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1262 "program_representation_utils.m"
            MR_String program_representation_utils__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1262 "program_representation_utils.m"
            MR_String program_representation_utils__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1264 "program_representation_utils.m"
            {
#line 1264 "program_representation_utils.m"
              MR_Word base;
#line 1264 "program_representation_utils.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "program_representation_utils.m"
              *program_representation_utils__IsCall_4 = base;
#line 1264 "program_representation_utils.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_36));
#line 1264 "program_representation_utils.m"
            }
#line 1263 "program_representation_utils.m"
          }
#line 1257 "program_representation_utils.m"
        else
#line 1258 "program_representation_utils.m"
          *program_representation_utils__IsCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "program_representation_utils.m"
  }
#line 197 "program_representation_utils.m"
}

#line 1209 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1209 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1209 "program_representation_utils.m"
{
#line 1209 "program_representation_utils.m"
  {
#line 1209 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1209 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_HeadVar__3_32;

#line 1209 "program_representation_utils.m"
    {
#line 1209 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1213__1_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv2_HeadVar__3_32);
    }
#line 1209 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv2_HeadVar__3_32));
#line 1209 "program_representation_utils.m"
  }
#line 1209 "program_representation_utils.m"
}

#line 1209 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1209 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1209 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1209 "program_representation_utils.m"
{
#line 1209 "program_representation_utils.m"
  {
#line 1209 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1209 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_HeadVar__3_54;

#line 1209 "program_representation_utils.m"
    {
#line 1209 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1213__2_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__3_54);
    }
#line 1209 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_54));
#line 1209 "program_representation_utils.m"
  }
#line 1209 "program_representation_utils.m"
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
#line 1202 "program_representation_utils.m"
  {
#line 1202 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1202 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 2))))
#line 1208 "program_representation_utils.m"
      {
#line 1208 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_41_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1208 "program_representation_utils.m"
        MR_Word program_representation_utils__MaybeVars_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1208 "program_representation_utils.m"
        MR_Word program_representation_utils__V_77_77;
#line 1208 "program_representation_utils.m"
        MR_Integer program_representation_utils__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
#line 1208 "program_representation_utils.m"
        MR_Word program_representation_utils__Vars0_82;
#line 1207 "program_representation_utils.m"
        MR_String program_representation_utils__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1209 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_Vars0_82;

#line 1216 "program_representation_utils.m"
        {
#line 1216 "program_representation_utils.m"
          program_representation_utils__V_77_77 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_41_84);
        }
#line 1209 "program_representation_utils.m"
        {
#line 1209 "program_representation_utils.m"
          mercury__list__foldl_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[4], (MR_Word) &program_representation_utils_scalar_common_1[3], (MR_Word) &program_representation_utils_scalar_common_2[10], program_representation_utils__MaybeVars_74, ((MR_Box) (program_representation_utils__V_77_77)), &program_representation_utils__conv1_Vars0_82);
        }
#line 1209 "program_representation_utils.m"
        program_representation_utils__Vars0_82 = ((MR_Word) program_representation_utils__conv1_Vars0_82);
#line 1217 "program_representation_utils.m"
        {
#line 1217 "program_representation_utils.m"
          mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_41_84, ((MR_Box) (program_representation_utils__Var_81)), program_representation_utils__Vars0_82, program_representation_utils__Vars_4);
#line 1217 "program_representation_utils.m"
          return;
        }
#line 1208 "program_representation_utils.m"
      }
#line 1202 "program_representation_utils.m"
    else
#line 1202 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 0))))
#line 1202 "program_representation_utils.m"
        {
#line 1202 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_39_100 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1202 "program_representation_utils.m"
          MR_Integer program_representation_utils__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
#line 1202 "program_representation_utils.m"
          MR_Word program_representation_utils__VarsL_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1202 "program_representation_utils.m"
          MR_Word program_representation_utils__Vars0_99;
#line 1198 "program_representation_utils.m"
          MR_String program_representation_utils__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1203 "program_representation_utils.m"
          {
#line 1203 "program_representation_utils.m"
            program_representation_utils__Vars0_99 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_100, program_representation_utils__VarsL_98);
          }
#line 1204 "program_representation_utils.m"
          {
#line 1204 "program_representation_utils.m"
            mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_100, ((MR_Box) (program_representation_utils__Var_97)), program_representation_utils__Vars0_99, program_representation_utils__Vars_4);
#line 1204 "program_representation_utils.m"
            return;
          }
#line 1202 "program_representation_utils.m"
        }
#line 1202 "program_representation_utils.m"
      else
#line 1202 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 1))))
#line 1202 "program_representation_utils.m"
          {
#line 1202 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_39_104 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1202 "program_representation_utils.m"
            MR_Integer program_representation_utils__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
#line 1202 "program_representation_utils.m"
            MR_Word program_representation_utils__VarsL_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1202 "program_representation_utils.m"
            MR_Word program_representation_utils__Vars0_103;
#line 1199 "program_representation_utils.m"
            MR_String program_representation_utils__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1203 "program_representation_utils.m"
            {
#line 1203 "program_representation_utils.m"
              program_representation_utils__Vars0_103 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_104, program_representation_utils__VarsL_102);
            }
#line 1204 "program_representation_utils.m"
            {
#line 1204 "program_representation_utils.m"
              mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_104, ((MR_Box) (program_representation_utils__Var_101)), program_representation_utils__Vars0_103, program_representation_utils__Vars_4);
#line 1204 "program_representation_utils.m"
              return;
            }
#line 1202 "program_representation_utils.m"
          }
#line 1202 "program_representation_utils.m"
        else
#line 1202 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1229 "program_representation_utils.m"
            {
#line 1229 "program_representation_utils.m"
              MR_Word program_representation_utils__VarsL_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1227 "program_representation_utils.m"
              MR_String program_representation_utils__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1227 "program_representation_utils.m"
              MR_String program_representation_utils__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1230 "program_representation_utils.m"
              {
#line 1230 "program_representation_utils.m"
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_38);
              }
#line 1229 "program_representation_utils.m"
            }
#line 1202 "program_representation_utils.m"
          else
#line 1202 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1222 "program_representation_utils.m"
              {
#line 1222 "program_representation_utils.m"
                MR_Integer program_representation_utils__VarA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1222 "program_representation_utils.m"
                MR_Integer program_representation_utils__VarB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1222 "program_representation_utils.m"
                MR_Word program_representation_utils__V_25_25;
#line 1222 "program_representation_utils.m"
                MR_Word program_representation_utils__V_26_26;

#line 1223 "program_representation_utils.m"
                {
#line 1223 "program_representation_utils.m"
                  program_representation_utils__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 0) = ((MR_Box) (program_representation_utils__VarB_19));
#line 1223 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "program_representation_utils.m"
                }
#line 1223 "program_representation_utils.m"
                {
#line 1223 "program_representation_utils.m"
                  program_representation_utils__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 0) = ((MR_Box) (program_representation_utils__VarA_18));
#line 1223 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__V_25_25, 1) = ((MR_Box) (program_representation_utils__V_26_26));
#line 1223 "program_representation_utils.m"
                }
#line 1223 "program_representation_utils.m"
                {
#line 1223 "program_representation_utils.m"
                  *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__V_25_25);
                }
#line 1222 "program_representation_utils.m"
              }
#line 1202 "program_representation_utils.m"
            else
#line 1202 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1229 "program_representation_utils.m"
                {
#line 1229 "program_representation_utils.m"
                  MR_Word program_representation_utils__VarsL_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1226 "program_representation_utils.m"
                  MR_String program_representation_utils__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1230 "program_representation_utils.m"
                  {
#line 1230 "program_representation_utils.m"
                    *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_46);
                  }
#line 1229 "program_representation_utils.m"
                }
#line 1202 "program_representation_utils.m"
              else
#line 1202 "program_representation_utils.m"
                if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1202 "program_representation_utils.m"
                  {
#line 1202 "program_representation_utils.m"
                    MR_Word program_representation_utils__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1202 "program_representation_utils.m"
                    MR_Integer program_representation_utils__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1202 "program_representation_utils.m"
                    MR_Word program_representation_utils__VarsL_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1202 "program_representation_utils.m"
                    MR_Word program_representation_utils__Vars0_10;

#line 1203 "program_representation_utils.m"
                    {
#line 1203 "program_representation_utils.m"
                      program_representation_utils__Vars0_10 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_39, program_representation_utils__VarsL_7);
                    }
#line 1204 "program_representation_utils.m"
                    {
#line 1204 "program_representation_utils.m"
                      mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_39, ((MR_Box) (program_representation_utils__Var_5)), program_representation_utils__Vars0_10, program_representation_utils__Vars_4);
#line 1204 "program_representation_utils.m"
                      return;
                    }
#line 1202 "program_representation_utils.m"
                  }
#line 1202 "program_representation_utils.m"
                else
#line 1202 "program_representation_utils.m"
                  if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1202 "program_representation_utils.m"
                    {
#line 1202 "program_representation_utils.m"
                      MR_Word program_representation_utils__TypeCtorInfo_39_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1202 "program_representation_utils.m"
                      MR_Integer program_representation_utils__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1202 "program_representation_utils.m"
                      MR_Word program_representation_utils__VarsL_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1202 "program_representation_utils.m"
                      MR_Word program_representation_utils__Vars0_50;
#line 1201 "program_representation_utils.m"
                      MR_Integer program_representation_utils__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1203 "program_representation_utils.m"
                      {
#line 1203 "program_representation_utils.m"
                        program_representation_utils__Vars0_50 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_51, program_representation_utils__VarsL_49);
                      }
#line 1204 "program_representation_utils.m"
                      {
#line 1204 "program_representation_utils.m"
                        mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_51, ((MR_Box) (program_representation_utils__Var_48)), program_representation_utils__Vars0_50, program_representation_utils__Vars_4);
#line 1204 "program_representation_utils.m"
                        return;
                      }
#line 1202 "program_representation_utils.m"
                    }
#line 1202 "program_representation_utils.m"
                  else
#line 1202 "program_representation_utils.m"
                    if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1208 "program_representation_utils.m"
                      {
#line 1208 "program_representation_utils.m"
                        MR_Word program_representation_utils__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1208 "program_representation_utils.m"
                        MR_Word program_representation_utils__MaybeVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1208 "program_representation_utils.m"
                        MR_Word program_representation_utils__V_29_29;
#line 1208 "program_representation_utils.m"
                        MR_Integer program_representation_utils__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1208 "program_representation_utils.m"
                        MR_Word program_representation_utils__Vars0_37;
#line 1206 "program_representation_utils.m"
                        MR_String program_representation_utils__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1209 "program_representation_utils.m"
                        MR_Box program_representation_utils__conv3_Vars0_37;

#line 1216 "program_representation_utils.m"
                        {
#line 1216 "program_representation_utils.m"
                          program_representation_utils__V_29_29 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_41_41);
                        }
#line 1209 "program_representation_utils.m"
                        {
#line 1209 "program_representation_utils.m"
                          mercury__list__foldl_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[4], (MR_Word) &program_representation_utils_scalar_common_1[3], (MR_Word) &program_representation_utils_scalar_common_2[11], program_representation_utils__MaybeVars_12, ((MR_Box) (program_representation_utils__V_29_29)), &program_representation_utils__conv3_Vars0_37);
                        }
#line 1209 "program_representation_utils.m"
                        program_representation_utils__Vars0_37 = ((MR_Word) program_representation_utils__conv3_Vars0_37);
#line 1217 "program_representation_utils.m"
                        {
#line 1217 "program_representation_utils.m"
                          mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_41_41, ((MR_Box) (program_representation_utils__Var_36)), program_representation_utils__Vars0_37, program_representation_utils__Vars_4);
#line 1217 "program_representation_utils.m"
                          return;
                        }
#line 1208 "program_representation_utils.m"
                      }
#line 1202 "program_representation_utils.m"
                    else
#line 1202 "program_representation_utils.m"
                      if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1229 "program_representation_utils.m"
                        {
#line 1229 "program_representation_utils.m"
                          MR_Word program_representation_utils__VarsL_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
#line 1228 "program_representation_utils.m"
                          MR_String program_representation_utils__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1228 "program_representation_utils.m"
                          MR_String program_representation_utils__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

#line 1230 "program_representation_utils.m"
                          {
#line 1230 "program_representation_utils.m"
                            *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_87);
                          }
#line 1229 "program_representation_utils.m"
                        }
#line 1202 "program_representation_utils.m"
                      else
#line 1202 "program_representation_utils.m"
                        if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1229 "program_representation_utils.m"
                          {
#line 1229 "program_representation_utils.m"
                            MR_Word program_representation_utils__VarsL_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

#line 1230 "program_representation_utils.m"
                            {
#line 1230 "program_representation_utils.m"
                              *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_89);
                            }
#line 1229 "program_representation_utils.m"
                          }
#line 1202 "program_representation_utils.m"
                        else
#line 1202 "program_representation_utils.m"
                          if (((((MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1222 "program_representation_utils.m"
                            {
#line 1222 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarA_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1222 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarB_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1222 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_93_93;
#line 1222 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_94_94;

#line 1223 "program_representation_utils.m"
                              {
#line 1223 "program_representation_utils.m"
                                program_representation_utils__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_94_94, 0) = ((MR_Box) (program_representation_utils__VarB_92));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "program_representation_utils.m"
                              }
#line 1223 "program_representation_utils.m"
                              {
#line 1223 "program_representation_utils.m"
                                program_representation_utils__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_93_93, 0) = ((MR_Box) (program_representation_utils__VarA_91));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_93_93, 1) = ((MR_Box) (program_representation_utils__V_94_94));
#line 1223 "program_representation_utils.m"
                              }
#line 1223 "program_representation_utils.m"
                              {
#line 1223 "program_representation_utils.m"
                                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__V_93_93);
                              }
#line 1222 "program_representation_utils.m"
                            }
#line 1202 "program_representation_utils.m"
                          else
#line 1222 "program_representation_utils.m"
                            {
#line 1222 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarA_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
#line 1222 "program_representation_utils.m"
                              MR_Integer program_representation_utils__VarB_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
#line 1222 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_107_107;
#line 1222 "program_representation_utils.m"
                              MR_Word program_representation_utils__V_108_108;

#line 1223 "program_representation_utils.m"
                              {
#line 1223 "program_representation_utils.m"
                                program_representation_utils__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_108_108, 0) = ((MR_Box) (program_representation_utils__VarB_106));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "program_representation_utils.m"
                              }
#line 1223 "program_representation_utils.m"
                              {
#line 1223 "program_representation_utils.m"
                                program_representation_utils__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_107_107, 0) = ((MR_Box) (program_representation_utils__VarA_105));
#line 1223 "program_representation_utils.m"
                                MR_hl_field(MR_mktag(1), program_representation_utils__V_107_107, 1) = ((MR_Box) (program_representation_utils__V_108_108));
#line 1223 "program_representation_utils.m"
                              }
#line 1223 "program_representation_utils.m"
                              {
#line 1223 "program_representation_utils.m"
                                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__V_107_107);
                              }
#line 1222 "program_representation_utils.m"
                            }
#line 1202 "program_representation_utils.m"
  }
#line 189 "program_representation_utils.m"
}

#line 1137 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1137 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 1137 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 1137 "program_representation_utils.m"
{
#line 1137 "program_representation_utils.m"
  {
#line 1137 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1137 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_HeadVar__5_18;

#line 1137 "program_representation_utils.m"
    {
#line 1137 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1178__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_HeadVar__5_18);
    }
#line 1137 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_HeadVar__5_18));
#line 1137 "program_representation_utils.m"
  }
#line 1137 "program_representation_utils.m"
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
#line 1136 "program_representation_utils.m"
  {
#line 1136 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1136 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_36_36;
#line 1136 "program_representation_utils.m"
    MR_Word program_representation_utils__DeltaVars_6;
#line 1136 "program_representation_utils.m"
    MR_Word program_representation_utils__V_12_12;
#line 1136 "program_representation_utils.m"
    MR_Word program_representation_utils__V_13_13;
#line 1136 "program_representation_utils.m"
    MR_Word program_representation_utils__V_14_14;
#line 1137 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 1137 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_DeltaVars_6;

#line 1137 "program_representation_utils.m"
    {
#line 1137 "program_representation_utils.m"
      program_representation_utils__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_6[1]));
#line 1137 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 1) = ((MR_Box) (program_representation_utils__calc_inst_map_delta_3_p_0_1));
#line 1137 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1137 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 3) = ((MR_Box) (program_representation_utils__Before_4));
#line 1137 "program_representation_utils.m"
    }
#line 1137 "program_representation_utils.m"
    program_representation_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__After_5, (MR_Integer) 0)));
#line 1137 "program_representation_utils.m"
    program_representation_utils__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__After_5, (MR_Integer) 1)));
#line 9200 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1192 "program_representation_utils.m"
    {
#line 1192 "program_representation_utils.m"
      program_representation_utils__V_14_14 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_36_36);
    }
#line 1137 "program_representation_utils.m"
    {
#line 1137 "program_representation_utils.m"
      mercury__map__foldl_4_p_0(program_representation_utils__TypeCtorInfo_36_36, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__V_12_12, program_representation_utils__V_13_13, ((MR_Box) (program_representation_utils__V_14_14)), &program_representation_utils__conv1_DeltaVars_6);
    }
#line 1137 "program_representation_utils.m"
    program_representation_utils__DeltaVars_6 = ((MR_Word) program_representation_utils__conv1_DeltaVars_6);
#line 1136 "program_representation_utils.m"
    *program_representation_utils__HeadVar__3_3 = (MR_Word) program_representation_utils__DeltaVars_6;
#line 1136 "program_representation_utils.m"
  }
#line 182 "program_representation_utils.m"
}

#line 173 "program_representation_utils.m"
MR_Word MR_CALL 
program_representation_utils__empty_inst_map_delta_0_f_0(void)
#line 173 "program_representation_utils.m"
{
#line 1131 "program_representation_utils.m"
  {
#line 1131 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1131 "program_representation_utils.m"
    MR_Word program_representation_utils__InstMap_2;
#line 1131 "program_representation_utils.m"
    MR_Word program_representation_utils__Vars_3;

#line 1132 "program_representation_utils.m"
    {
#line 1132 "program_representation_utils.m"
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &program_representation_utils__Vars_3);
    }
#line 1131 "program_representation_utils.m"
    program_representation_utils__InstMap_2 = (MR_Word) program_representation_utils__Vars_3;
#line 1131 "program_representation_utils.m"
    return program_representation_utils__InstMap_2;
#line 1131 "program_representation_utils.m"
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
#line 1131 "program_representation_utils.m"
  {
#line 1131 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1131 "program_representation_utils.m"
    MR_Word program_representation_utils__Vars_2;

#line 1132 "program_representation_utils.m"
    {
#line 1132 "program_representation_utils.m"
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &program_representation_utils__Vars_2);
    }
#line 1131 "program_representation_utils.m"
    *program_representation_utils__HeadVar__1_1 = (MR_Word) program_representation_utils__Vars_2;
#line 1131 "program_representation_utils.m"
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
#line 1129 "program_representation_utils.m"
  {
#line 1129 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 1129 "program_representation_utils.m"
    *program_representation_utils__Vars_3 = (MR_Word) program_representation_utils__HeadVar__1_1;
#line 1129 "program_representation_utils.m"
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
#line 1103 "program_representation_utils.m"
  {
#line 1103 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1103 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 1103 "program_representation_utils.m"
    MR_Word program_representation_utils__V_8_8;
#line 1103 "program_representation_utils.m"
    MR_Word program_representation_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));

#line 1104 "program_representation_utils.m"
    {
#line 1104 "program_representation_utils.m"
      program_representation_utils__V_8_8 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 1104 "program_representation_utils.m"
    {
#line 1104 "program_representation_utils.m"
      program_representation_utils__inst_map_get_var_deps_2_4_p_0(program_representation_utils__VarToDepVars_5, program_representation_utils__VarRep_6, program_representation_utils__V_8_8, program_representation_utils__DepVars_7);
#line 1104 "program_representation_utils.m"
      return;
    }
#line 1103 "program_representation_utils.m"
  }
#line 155 "program_representation_utils.m"
}

#line 1044 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
#line 1044 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1044 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1044 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1044 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 1044 "program_representation_utils.m"
{
#line 1044 "program_representation_utils.m"
  {
#line 1044 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1044 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_HeadVar__3_26;

#line 1044 "program_representation_utils.m"
    {
#line 1044 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__merge_inst_map__1044__1_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_HeadVar__3_26);
    }
#line 1044 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_HeadVar__3_26));
#line 1044 "program_representation_utils.m"
  }
#line 1044 "program_representation_utils.m"
}

#line 1043 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
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
    MR_Word program_representation_utils__conv0_HeadVar__3_3;

#line 1043 "program_representation_utils.m"
    {
#line 1043 "program_representation_utils.m"
      program_representation_utils__inst_intersect_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__3_3);
    }
#line 1043 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_3));
#line 1043 "program_representation_utils.m"
  }
#line 1043 "program_representation_utils.m"
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
#line 1018 "program_representation_utils.m"
  {
#line 1018 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1018 "program_representation_utils.m"
    MR_Word program_representation_utils__InstMap_10;

#line 1018 "program_representation_utils.m"
    if ((((program_representation_utils__DetismA_7 == (MR_Integer) 6)) || ((program_representation_utils__DetismA_7 == (MR_Integer) 7))))
#line 1019 "program_representation_utils.m"
      program_representation_utils__InstMap_10 = program_representation_utils__InstMapB_8;
#line 1018 "program_representation_utils.m"
    else
#line 1033 "program_representation_utils.m"
      if ((((program_representation_utils__DetismB_9 == (MR_Integer) 6)) || ((program_representation_utils__DetismB_9 == (MR_Integer) 7))))
#line 1032 "program_representation_utils.m"
        program_representation_utils__InstMap_10 = program_representation_utils__InstMapA_6;
#line 1033 "program_representation_utils.m"
      else
#line 1040 "program_representation_utils.m"
        {
#line 1040 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1040 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToInstA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapA_6, (MR_Integer) 0)));
#line 1040 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToDepVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapA_6, (MR_Integer) 1)));
#line 1040 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToInstB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapB_8, (MR_Integer) 0)));
#line 1040 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToDepVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapB_8, (MR_Integer) 1)));
#line 1040 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToInst_15;
#line 1040 "program_representation_utils.m"
          MR_Word program_representation_utils__VarToDepVars_16;

#line 1043 "program_representation_utils.m"
          {
#line 1043 "program_representation_utils.m"
            mercury__map__union_4_p_1((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__TypeCtorInfo_23_23, (MR_Word) &program_representation_utils_scalar_common_2[8], program_representation_utils__VarToInstA_11, program_representation_utils__VarToInstB_13, &program_representation_utils__VarToInst_15);
          }
#line 1044 "program_representation_utils.m"
          {
#line 1044 "program_representation_utils.m"
            mercury__map__union_4_p_1((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__TypeCtorInfo_23_23, (MR_Word) &program_representation_utils_scalar_common_2[9], program_representation_utils__VarToDepVarsA_12, program_representation_utils__VarToDepVarsB_14, &program_representation_utils__VarToDepVars_16);
          }
#line 1045 "program_representation_utils.m"
          {
#line 1045 "program_representation_utils.m"
            program_representation_utils__InstMap_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__InstMap_10, 0) = ((MR_Box) (program_representation_utils__VarToInst_15));
#line 1045 "program_representation_utils.m"
            MR_hl_field(MR_mktag(0), program_representation_utils__InstMap_10, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_16));
#line 1045 "program_representation_utils.m"
          }
#line 1040 "program_representation_utils.m"
        }
#line 1018 "program_representation_utils.m"
    return program_representation_utils__InstMap_10;
#line 1018 "program_representation_utils.m"
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
#line 1094 "program_representation_utils.m"
  {
#line 1094 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1094 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 1094 "program_representation_utils.m"
    MR_Word program_representation_utils__VarToDepVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "program_representation_utils.m"
    MR_Word program_representation_utils__InstPrime_10;
#line 1095 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_InstPrime_10;

#line 1095 "program_representation_utils.m"
    {
#line 1095 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarToInst_5, program_representation_utils__Var_7, &program_representation_utils__conv0_InstPrime_10);
    }
#line 1095 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1095 "program_representation_utils.m"
      {
#line 1095 "program_representation_utils.m"
        program_representation_utils__InstPrime_10 = ((MR_Word) program_representation_utils__conv0_InstPrime_10);
#line 1095 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 1095 "program_representation_utils.m"
      }
#line 1098 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1096 "program_representation_utils.m"
      {
#line 1097 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_DepVars_9;

#line 1096 "program_representation_utils.m"
        *program_representation_utils__Inst_8 = program_representation_utils__InstPrime_10;
#line 1097 "program_representation_utils.m"
        {
#line 1097 "program_representation_utils.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars_6, program_representation_utils__Var_7, &program_representation_utils__conv1_DepVars_9);
        }
#line 1097 "program_representation_utils.m"
        *program_representation_utils__DepVars_9 = ((MR_Word) program_representation_utils__conv1_DepVars_9);
#line 1096 "program_representation_utils.m"
      }
#line 1098 "program_representation_utils.m"
    else
#line 1099 "program_representation_utils.m"
      {
#line 1099 "program_representation_utils.m"
        *program_representation_utils__Inst_8 = (MR_Integer) 0;
#line 1100 "program_representation_utils.m"
        {
#line 1100 "program_representation_utils.m"
          *program_representation_utils__DepVars_9 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 1099 "program_representation_utils.m"
      }
#line 1094 "program_representation_utils.m"
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
#line 1239 "program_representation_utils.m"
  {
#line 1239 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded = (program_representation_utils__A_4 == (MR_Integer) 1);
#line 1239 "program_representation_utils.m"
    MR_Word program_representation_utils__R_6;

#line 1235 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1236 "program_representation_utils.m"
      program_representation_utils__succeeded = (program_representation_utils__B_5 == (MR_Integer) 1);
#line 1239 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 1238 "program_representation_utils.m"
      program_representation_utils__R_6 = (MR_Integer) 1;
#line 1239 "program_representation_utils.m"
    else
#line 1240 "program_representation_utils.m"
      program_representation_utils__R_6 = (MR_Integer) 0;
#line 1239 "program_representation_utils.m"
    return program_representation_utils__R_6;
#line 1239 "program_representation_utils.m"
  }
#line 138 "program_representation_utils.m"
}

#line 1062 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 1062 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3,
#line 1062 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_4,
#line 1062 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_5)
#line 1062 "program_representation_utils.m"
{
#line 1062 "program_representation_utils.m"
  {
#line 1062 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 1062 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_InstMap_10;
#line 1062 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22;

#line 1062 "program_representation_utils.m"
    {
#line 1062 "program_representation_utils.m"
      program_representation_utils__inst_map_ground_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_InstMap_10, ((MR_Word) program_representation_utils__wrapper_arg_4), &program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22);
    }
#line 1062 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_InstMap_10));
#line 1062 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_5 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22));
#line 1062 "program_representation_utils.m"
  }
#line 1062 "program_representation_utils.m"
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
#line 1061 "program_representation_utils.m"
  {
#line 1061 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 1061 "program_representation_utils.m"
    MR_Word program_representation_utils__V_12_12;
#line 1062 "program_representation_utils.m"
    MR_Box program_representation_utils__conv3_STATE_VARIABLE_InstMap_11;
#line 1062 "program_representation_utils.m"
    MR_Box program_representation_utils__conv2_SeenDuplicateInstantiation_9;

#line 1062 "program_representation_utils.m"
    {
#line 1062 "program_representation_utils.m"
      program_representation_utils__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_8[0]));
#line 1062 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 1) = ((MR_Box) (program_representation_utils__inst_map_ground_vars_5_p_0_1));
#line 1062 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1062 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_12_12, 3) = ((MR_Box) (program_representation_utils__DepVars_7));
#line 1062 "program_representation_utils.m"
    }
#line 1062 "program_representation_utils.m"
    {
#line 1062 "program_representation_utils.m"
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0, program_representation_utils__V_12_12, program_representation_utils__Vars_6, ((MR_Box) (program_representation_utils__STATE_VARIABLE_InstMap_0_10)), &program_representation_utils__conv3_STATE_VARIABLE_InstMap_11, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv2_SeenDuplicateInstantiation_9);
    }
#line 1062 "program_representation_utils.m"
    *program_representation_utils__STATE_VARIABLE_InstMap_11 = ((MR_Word) program_representation_utils__conv3_STATE_VARIABLE_InstMap_11);
#line 1062 "program_representation_utils.m"
    *program_representation_utils__SeenDuplicateInstantiation_9 = ((MR_Word) program_representation_utils__conv2_SeenDuplicateInstantiation_9);
#line 1061 "program_representation_utils.m"
  }
#line 125 "program_representation_utils.m"
}

#line 993 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
#line 993 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 993 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 993 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 993 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 993 "program_representation_utils.m"
{
#line 993 "program_representation_utils.m"
  {
#line 993 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 993 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_InstMap_10;

#line 993 "program_representation_utils.m"
    {
#line 993 "program_representation_utils.m"
      program_representation_utils__add_head_var_inst_to_map_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_STATE_VARIABLE_InstMap_10);
    }
#line 993 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_InstMap_10));
#line 993 "program_representation_utils.m"
  }
#line 993 "program_representation_utils.m"
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
#line 991 "program_representation_utils.m"
  {
#line 991 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__InstMap_4;
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__HeadVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 0)));
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__V_7_7;
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__V_8_8;
#line 991 "program_representation_utils.m"
    MR_Word program_representation_utils__V_9_9;
#line 992 "program_representation_utils.m"
    MR_Word program_representation_utils__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 1)));
#line 992 "program_representation_utils.m"
    MR_Word program_representation_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 2)));
#line 992 "program_representation_utils.m"
    MR_Word program_representation_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 3)));
#line 992 "program_representation_utils.m"
    MR_Word program_representation_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 4)));
#line 993 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_InstMap_4;

#line 994 "program_representation_utils.m"
    {
#line 994 "program_representation_utils.m"
      program_representation_utils__V_8_8 = mercury__map__init_0_f_0(program_representation_utils__TypeCtorInfo_18_18, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0);
    }
#line 994 "program_representation_utils.m"
    {
#line 994 "program_representation_utils.m"
      program_representation_utils__V_9_9 = mercury__map__init_0_f_0(program_representation_utils__TypeCtorInfo_18_18, (MR_Word) &program_representation_utils_scalar_common_1[3]);
    }
#line 994 "program_representation_utils.m"
    {
#line 994 "program_representation_utils.m"
      program_representation_utils__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_7_7, 0) = ((MR_Box) (program_representation_utils__V_8_8));
#line 994 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_7_7, 1) = ((MR_Box) (program_representation_utils__V_9_9));
#line 994 "program_representation_utils.m"
    }
#line 993 "program_representation_utils.m"
    {
#line 993 "program_representation_utils.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0, (MR_Word) &program_representation_utils_scalar_common_2[7], program_representation_utils__HeadVars_5, ((MR_Box) (program_representation_utils__V_7_7)), &program_representation_utils__conv1_InstMap_4);
    }
#line 993 "program_representation_utils.m"
    program_representation_utils__InstMap_4 = ((MR_Word) program_representation_utils__conv1_InstMap_4);
#line 991 "program_representation_utils.m"
    return program_representation_utils__InstMap_4;
#line 991 "program_representation_utils.m"
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
#line 874 "program_representation_utils.m"
  {
#line 874 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 874 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_12_33;
#line 874 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_13_34;
#line 874 "program_representation_utils.m"
    MR_String program_representation_utils__DefModule_9;
#line 874 "program_representation_utils.m"
    MR_Word program_representation_utils__ModuleRep_17;
#line 874 "program_representation_utils.m"
    MR_Word program_representation_utils__ModuleReps_22;
#line 874 "program_representation_utils.m"
    MR_Word program_representation_utils__V_28_28;
#line 888 "program_representation_utils.m"
    MR_Box program_representation_utils__conv0_ModuleRep_17;
#line 896 "program_representation_utils.m"
    MR_String program_representation_utils__V_29_29;
#line 896 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 896 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 896 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 896 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_ProcRep_6;

#line 876 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__ProcLabel_5)) == (MR_mktag((MR_Integer) 0))))
#line 875 "program_representation_utils.m"
      {
#line 875 "program_representation_utils.m"
        MR_Word program_representation_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 0)));
#line 875 "program_representation_utils.m"
        MR_String program_representation_utils___DeclModule_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 1)));
#line 875 "program_representation_utils.m"
        MR_String program_representation_utils__V_10_10;
#line 875 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_11_11;
#line 875 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_12_12;

#line 875 "program_representation_utils.m"
        program_representation_utils__DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 2)));
#line 875 "program_representation_utils.m"
        program_representation_utils__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 3)));
#line 875 "program_representation_utils.m"
        program_representation_utils__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 4)));
#line 875 "program_representation_utils.m"
        program_representation_utils__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 5)));
#line 875 "program_representation_utils.m"
      }
#line 876 "program_representation_utils.m"
    else
#line 876 "program_representation_utils.m"
      {
#line 876 "program_representation_utils.m"
        MR_String program_representation_utils__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 0)));
#line 876 "program_representation_utils.m"
        MR_String program_representation_utils__V_14_14;
#line 876 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_15_15;
#line 876 "program_representation_utils.m"
        MR_Integer program_representation_utils__V_16_16;
#line 876 "program_representation_utils.m"
        MR_String program_representation_utils___DeclModule_18 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 1)));

#line 876 "program_representation_utils.m"
        program_representation_utils__DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 2)));
#line 876 "program_representation_utils.m"
        program_representation_utils__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 3)));
#line 876 "program_representation_utils.m"
        program_representation_utils__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 4)));
#line 876 "program_representation_utils.m"
        program_representation_utils__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 5)));
#line 876 "program_representation_utils.m"
      }
#line 887 "program_representation_utils.m"
    program_representation_utils__ModuleReps_22 = (MR_Word) program_representation_utils__ProgRep_4;
#line 888 "program_representation_utils.m"
    {
#line 888 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &program_representation_utils_scalar_common_1[5], program_representation_utils__ModuleReps_22, ((MR_Box) (program_representation_utils__DefModule_9)), &program_representation_utils__conv0_ModuleRep_17);
    }
#line 888 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 888 "program_representation_utils.m"
      {
#line 888 "program_representation_utils.m"
        program_representation_utils__ModuleRep_17 = ((MR_Word) program_representation_utils__conv0_ModuleRep_17);
#line 888 "program_representation_utils.m"
        program_representation_utils__succeeded = MR_TRUE;
#line 888 "program_representation_utils.m"
      }
#line 874 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 874 "program_representation_utils.m"
      {
#line 896 "program_representation_utils.m"
        program_representation_utils__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 0)));
#line 896 "program_representation_utils.m"
        program_representation_utils__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 1)));
#line 896 "program_representation_utils.m"
        program_representation_utils__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 2)));
#line 896 "program_representation_utils.m"
        program_representation_utils__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 3)));
#line 896 "program_representation_utils.m"
        program_representation_utils__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 4)));
#line 9906 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_12_33 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
#line 9908 "program_representation_utils.c"
        program_representation_utils__TypeInfo_13_34 = (MR_Word) &program_representation_utils_scalar_common_1[2];
#line 896 "program_representation_utils.m"
        {
#line 896 "program_representation_utils.m"
          program_representation_utils__succeeded = mercury__map__search_3_p_0(program_representation_utils__TypeCtorInfo_12_33, program_representation_utils__TypeInfo_13_34, program_representation_utils__V_28_28, ((MR_Box) (program_representation_utils__ProcLabel_5)), &program_representation_utils__conv1_ProcRep_6);
        }
#line 896 "program_representation_utils.m"
        if (program_representation_utils__succeeded)
#line 896 "program_representation_utils.m"
          {
#line 896 "program_representation_utils.m"
            *program_representation_utils__ProcRep_6 = ((MR_Word) program_representation_utils__conv1_ProcRep_6);
#line 896 "program_representation_utils.m"
            program_representation_utils__succeeded = MR_TRUE;
#line 896 "program_representation_utils.m"
          }
#line 874 "program_representation_utils.m"
      }
#line 874 "program_representation_utils.m"
    return program_representation_utils__succeeded;
#line 874 "program_representation_utils.m"
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
#line 903 "program_representation_utils.m"
  {
#line 903 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 903 "program_representation_utils.m"
    MR_Integer program_representation_utils__LastIdPlus1_5;
#line 903 "program_representation_utils.m"
    MR_Word program_representation_utils__Counter_8;
#line 903 "program_representation_utils.m"
    MR_Integer program_representation_utils__V_12_12;
#line 903 "program_representation_utils.m"
    MR_Word program_representation_utils__V_16_16;
#line 903 "program_representation_utils.m"
    MR_Word program_representation_utils__V_17_17;
#line 906 "program_representation_utils.m"
    MR_Word program_representation_utils__V_9_9;

#line 904 "program_representation_utils.m"
    {
#line 904 "program_representation_utils.m"
      program_representation_utils__V_16_16 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 905 "program_representation_utils.m"
    {
#line 905 "program_representation_utils.m"
      program_representation_utils__V_17_17 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
    }
#line 904 "program_representation_utils.m"
    {
#line 904 "program_representation_utils.m"
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__STATE_VARIABLE_Goal_0_10, program_representation_utils__STATE_VARIABLE_Goal_11, program_representation_utils__V_16_16, &program_representation_utils__Counter_8, program_representation_utils__V_17_17, program_representation_utils__Map_6);
    }
#line 906 "program_representation_utils.m"
    {
#line 906 "program_representation_utils.m"
      mercury__counter__allocate_3_p_0(&program_representation_utils__LastIdPlus1_5, program_representation_utils__Counter_8, &program_representation_utils__V_9_9);
    }
#line 903 "program_representation_utils.m"
    program_representation_utils__V_12_12 = (program_representation_utils__LastIdPlus1_5 - (MR_Integer) 1);
#line 903 "program_representation_utils.m"
    *program_representation_utils__HeadVar__1_1 = (MR_Word) program_representation_utils__V_12_12;
#line 903 "program_representation_utils.m"
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
#line 10008 "program_representation_utils.c"
  {
#line 10010 "program_representation_utils.c"
    MR_bool program_representation_utils__succeeded;
#line 10012 "program_representation_utils.c"
    void MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), program_representation_utils__TypeClassInfo_for_goal_annotation_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10014 "program_representation_utils.c"
    MR_Box program_representation_utils__conv1_HeadVar__3_3;

#line 10017 "program_representation_utils.c"
    {
#line 10019 "program_representation_utils.c"
      program_representation_utils__func_0(((MR_Box) program_representation_utils__TypeClassInfo_for_goal_annotation_4), ((MR_Box) (program_representation_utils__HeadVar__1_1)), program_representation_utils__HeadVar__2_2, &program_representation_utils__conv1_HeadVar__3_3);
    }
#line 10022 "program_representation_utils.c"
    *program_representation_utils__HeadVar__3_3 = ((MR_Word) program_representation_utils__conv1_HeadVar__3_3);
#line 10024 "program_representation_utils.c"
  }
#line 77 "program_representation_utils.m"
}

#line 548 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
#line 548 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 548 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 548 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2)
#line 548 "program_representation_utils.m"
{
#line 548 "program_representation_utils.m"
  {
#line 548 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_3;
#line 548 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 548 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_HeadVar__3_196;

#line 548 "program_representation_utils.m"
    {
#line 548 "program_representation_utils.m"
      program_representation_utils__conv2_HeadVar__3_196 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__548__1_2_f_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
#line 548 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv2_HeadVar__3_196));
#line 548 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_3;
#line 548 "program_representation_utils.m"
  }
#line 548 "program_representation_utils.m"
}

#line 546 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
#line 546 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 546 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 546 "program_representation_utils.m"
{
#line 546 "program_representation_utils.m"
  {
#line 546 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 546 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 546 "program_representation_utils.m"
    MR_Word program_representation_utils__conv1_HeadVar__3_160;

#line 546 "program_representation_utils.m"
    {
#line 546 "program_representation_utils.m"
      program_representation_utils__conv1_HeadVar__3_160 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__546__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) program_representation_utils__wrapper_arg_1));
    }
#line 546 "program_representation_utils.m"
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv1_HeadVar__3_160));
#line 546 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 546 "program_representation_utils.m"
  }
#line 546 "program_representation_utils.m"
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
#line 461 "program_representation_utils.m"
  {
#line 461 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_190_190;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalExprRep_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 0)));
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismRep_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 1)));
#line 461 "program_representation_utils.m"
    MR_Box program_representation_utils__AnnotationKey_13 = (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 2));
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__VarTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 1)));
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__ExprString_16;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__LinePrefix_46;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__ExtraLineForConjunctions_47;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismString_48;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismLine_49;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__LookupAnnotation_50;
#line 461 "program_representation_utils.m"
    MR_Box program_representation_utils__GoalAnnotation_51;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalAnnotationLines0_52;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalAnnotationLines_53;
#line 461 "program_representation_utils.m"
    MR_String program_representation_utils__GoalPathString0_56;
#line 461 "program_representation_utils.m"
    MR_String program_representation_utils__GoalPathString_57;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalPathLine_58;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_156_156;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_157_157;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_165_165;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_166_166;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_167_167;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_168_168;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_169_169;
#line 461 "program_representation_utils.m"
    MR_Word program_representation_utils__V_170_170;
#line 463 "program_representation_utils.m"
    MR_Word program_representation_utils__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 0)));
#line 530 "program_representation_utils.m"
    MR_Word program_representation_utils__V_45_45;
#line 539 "program_representation_utils.m"
    MR_Word program_representation_utils__V_176_176;
#line 540 "program_representation_utils.m"
    MR_Box MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box);

#line 468 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 0))))
#line 465 "program_representation_utils.m"
      {
#line 465 "program_representation_utils.m"
        MR_Word program_representation_utils__ConjGoalReps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));

#line 466 "program_representation_utils.m"
        {
#line 466 "program_representation_utils.m"
          program_representation_utils__print_conj_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, program_representation_utils__ConjGoalReps_15, &program_representation_utils__ExprString_16);
        }
#line 465 "program_representation_utils.m"
      }
#line 468 "program_representation_utils.m"
    else
#line 468 "program_representation_utils.m"
      if (((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 1))))
#line 469 "program_representation_utils.m"
        {
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_179_179;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__DisjGoalReps_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__DisjString_18;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__V_141_141;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__V_142_142;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__V_143_143;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__V_145_145;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__V_146_146;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__V_147_147;
#line 469 "program_representation_utils.m"
          MR_Word program_representation_utils__V_148_148;

#line 470 "program_representation_utils.m"
          {
#line 470 "program_representation_utils.m"
            program_representation_utils__print_disj_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__DisjGoalReps_17, (MR_Integer) 0, &program_representation_utils__DisjString_18);
          }
#line 10223 "program_representation_utils.c"
          program_representation_utils__TypeCtorInfo_179_179 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 472 "program_representation_utils.m"
          {
#line 472 "program_representation_utils.m"
            program_representation_utils__V_141_141 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
#line 473 "program_representation_utils.m"
          {
#line 473 "program_representation_utils.m"
            program_representation_utils__V_143_143 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_179_179, ((MR_Box) ((MR_String) "(\n")));
          }
#line 473 "program_representation_utils.m"
          {
#line 473 "program_representation_utils.m"
            program_representation_utils__V_147_147 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
#line 474 "program_representation_utils.m"
          {
#line 474 "program_representation_utils.m"
            program_representation_utils__V_148_148 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_179_179, ((MR_Box) ((MR_String) ")\n")));
          }
#line 473 "program_representation_utils.m"
          {
#line 473 "program_representation_utils.m"
            program_representation_utils__V_146_146 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__V_147_147, program_representation_utils__V_148_148);
          }
#line 473 "program_representation_utils.m"
          {
#line 473 "program_representation_utils.m"
            program_representation_utils__V_145_145 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__DisjString_18, program_representation_utils__V_146_146);
          }
#line 473 "program_representation_utils.m"
          {
#line 473 "program_representation_utils.m"
            program_representation_utils__V_142_142 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__V_143_143, program_representation_utils__V_145_145);
          }
#line 472 "program_representation_utils.m"
          {
#line 472 "program_representation_utils.m"
            program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__V_141_141, program_representation_utils__V_142_142);
          }
#line 469 "program_representation_utils.m"
        }
#line 468 "program_representation_utils.m"
      else
#line 468 "program_representation_utils.m"
        if (((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 2))))
#line 476 "program_representation_utils.m"
          {
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__TypeCtorInfo_181_181;
#line 476 "program_representation_utils.m"
            MR_Integer program_representation_utils__SwitchVarRep_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__CanFail_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__CasesRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 476 "program_representation_utils.m"
            MR_String program_representation_utils__SwitchVarName_22;
#line 476 "program_representation_utils.m"
            MR_String program_representation_utils__SwitchOnString_23;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__SwitchString_24;
#line 476 "program_representation_utils.m"
            MR_String program_representation_utils__V_118_118;
#line 476 "program_representation_utils.m"
            MR_Integer program_representation_utils__V_122_122;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_126_126;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_127_127;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_128_128;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_129_129;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_130_130;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_131_131;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_132_132;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_134_134;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_135_135;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_136_136;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_137_137;
#line 476 "program_representation_utils.m"
            MR_String program_representation_utils__V_199_199;
#line 476 "program_representation_utils.m"
            MR_Word program_representation_utils__V_205_205;
#line 476 "program_representation_utils.m"
            MR_String program_representation_utils__V_206_206;
#line 476 "program_representation_utils.m"
            MR_String program_representation_utils__V_208_208;
#line 476 "program_representation_utils.m"
            MR_String program_representation_utils__V_209_209;

#line 477 "program_representation_utils.m"
            {
#line 477 "program_representation_utils.m"
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_14, program_representation_utils__SwitchVarRep_19, &program_representation_utils__SwitchVarName_22);
            }
#line 479 "program_representation_utils.m"
            {
#line 479 "program_representation_utils.m"
              program_representation_utils__V_118_118 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (program_representation_utils__CanFail_20)));
            }
#line 10334 "program_representation_utils.c"
            program_representation_utils__V_205_205 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 479 "program_representation_utils.m"
            {
#line 479 "program_representation_utils.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_205_205, program_representation_utils__SwitchVarName_22, &program_representation_utils__V_199_199);
            }
#line 478 "program_representation_utils.m"
            {
#line 478 "program_representation_utils.m"
              program_representation_utils__V_206_206 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_199_199, (MR_String) "\n");
            }
#line 478 "program_representation_utils.m"
            {
#line 478 "program_representation_utils.m"
              program_representation_utils__V_208_208 = mercury__string__f_43_43_2_f_0((MR_String) " switch on ", program_representation_utils__V_206_206);
            }
#line 479 "program_representation_utils.m"
            {
#line 479 "program_representation_utils.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_205_205, program_representation_utils__V_118_118, &program_representation_utils__V_209_209);
            }
#line 478 "program_representation_utils.m"
            {
#line 478 "program_representation_utils.m"
              program_representation_utils__SwitchOnString_23 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_209_209, program_representation_utils__V_208_208);
            }
#line 480 "program_representation_utils.m"
            program_representation_utils__V_122_122 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 480 "program_representation_utils.m"
            {
#line 480 "program_representation_utils.m"
              program_representation_utils__print_switch_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_122_122, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__CasesRep_21, (MR_Integer) 0, &program_representation_utils__SwitchString_24);
            }
#line 10368 "program_representation_utils.c"
            program_representation_utils__TypeCtorInfo_181_181 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_126_126 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_128_128 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) (program_representation_utils__SwitchOnString_23)));
            }
#line 483 "program_representation_utils.m"
            {
#line 483 "program_representation_utils.m"
              program_representation_utils__V_130_130 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
            }
#line 483 "program_representation_utils.m"
            {
#line 483 "program_representation_utils.m"
              program_representation_utils__V_132_132 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) ((MR_String) "(\n")));
            }
#line 484 "program_representation_utils.m"
            {
#line 484 "program_representation_utils.m"
              program_representation_utils__V_136_136 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
            }
#line 484 "program_representation_utils.m"
            {
#line 484 "program_representation_utils.m"
              program_representation_utils__V_137_137 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) ((MR_String) ")\n")));
            }
#line 484 "program_representation_utils.m"
            {
#line 484 "program_representation_utils.m"
              program_representation_utils__V_135_135 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_136_136, program_representation_utils__V_137_137);
            }
#line 483 "program_representation_utils.m"
            {
#line 483 "program_representation_utils.m"
              program_representation_utils__V_134_134 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__SwitchString_24, program_representation_utils__V_135_135);
            }
#line 483 "program_representation_utils.m"
            {
#line 483 "program_representation_utils.m"
              program_representation_utils__V_131_131 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_132_132, program_representation_utils__V_134_134);
            }
#line 483 "program_representation_utils.m"
            {
#line 483 "program_representation_utils.m"
              program_representation_utils__V_129_129 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_130_130, program_representation_utils__V_131_131);
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__V_127_127 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_128_128, program_representation_utils__V_129_129);
            }
#line 482 "program_representation_utils.m"
            {
#line 482 "program_representation_utils.m"
              program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__V_126_126, program_representation_utils__V_127_127);
            }
#line 476 "program_representation_utils.m"
          }
#line 468 "program_representation_utils.m"
        else
#line 468 "program_representation_utils.m"
          if (((((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 525 "program_representation_utils.m"
            {
#line 525 "program_representation_utils.m"
              MR_Word program_representation_utils__AtomicGoalRep_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 4)));
#line 525 "program_representation_utils.m"
              MR_Word program_representation_utils__ExprString0_44;
#line 525 "program_representation_utils.m"
              MR_Word program_representation_utils__V_59_59;
#line 524 "program_representation_utils.m"
              MR_String program_representation_utils___FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 524 "program_representation_utils.m"
              MR_Integer program_representation_utils___LineNumber_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 524 "program_representation_utils.m"
              MR_Word program_representation_utils___BoundVars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 3)));

#line 526 "program_representation_utils.m"
              {
#line 526 "program_representation_utils.m"
                program_representation_utils__print_atomic_goal_to_strings_3_p_0(program_representation_utils__VarTable_14, program_representation_utils__AtomicGoalRep_43, &program_representation_utils__ExprString0_44);
              }
#line 527 "program_representation_utils.m"
              {
#line 527 "program_representation_utils.m"
                program_representation_utils__V_59_59 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
#line 527 "program_representation_utils.m"
              {
#line 527 "program_representation_utils.m"
                program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__V_59_59, program_representation_utils__ExprString0_44);
              }
#line 525 "program_representation_utils.m"
            }
#line 468 "program_representation_utils.m"
          else
#line 468 "program_representation_utils.m"
            if (((((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 486 "program_representation_utils.m"
              {
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__TypeCtorInfo_182_182;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__CondRep_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__ThenRep_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__ElseRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 3)));
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__RevGoalPathCond_28;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__RevGoalPathThen_29;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__RevGoalPathElse_30;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__CondString_31;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__ThenString_32;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__ElseString_33;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__IndentString_34;
#line 486 "program_representation_utils.m"
                MR_Integer program_representation_utils__V_92_92;
#line 486 "program_representation_utils.m"
                MR_Integer program_representation_utils__V_94_94;
#line 486 "program_representation_utils.m"
                MR_Integer program_representation_utils__V_96_96;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_98_98;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_99_99;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_101_101;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_102_102;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_103_103;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_104_104;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_106_106;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_107_107;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_108_108;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_109_109;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_111_111;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_112_112;
#line 486 "program_representation_utils.m"
                MR_Word program_representation_utils__V_113_113;

#line 487 "program_representation_utils.m"
                {
#line 487 "program_representation_utils.m"
                  program_representation_utils__RevGoalPathCond_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathCond_28, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 487 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathCond_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "program_representation_utils.m"
                }
#line 488 "program_representation_utils.m"
                {
#line 488 "program_representation_utils.m"
                  program_representation_utils__RevGoalPathThen_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathThen_29, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 488 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathThen_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 488 "program_representation_utils.m"
                }
#line 489 "program_representation_utils.m"
                {
#line 489 "program_representation_utils.m"
                  program_representation_utils__RevGoalPathElse_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathElse_30, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 489 "program_representation_utils.m"
                  MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathElse_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 489 "program_representation_utils.m"
                }
#line 490 "program_representation_utils.m"
                program_representation_utils__V_92_92 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 490 "program_representation_utils.m"
                {
#line 490 "program_representation_utils.m"
                  program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_92_92, program_representation_utils__RevGoalPathCond_28, program_representation_utils__CondRep_25, &program_representation_utils__CondString_31);
                }
#line 492 "program_representation_utils.m"
                program_representation_utils__V_94_94 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 492 "program_representation_utils.m"
                {
#line 492 "program_representation_utils.m"
                  program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_94_94, program_representation_utils__RevGoalPathThen_29, program_representation_utils__ThenRep_26, &program_representation_utils__ThenString_32);
                }
#line 494 "program_representation_utils.m"
                program_representation_utils__V_96_96 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 494 "program_representation_utils.m"
                {
#line 494 "program_representation_utils.m"
                  program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_96_96, program_representation_utils__RevGoalPathElse_30, program_representation_utils__ElseRep_27, &program_representation_utils__ElseString_33);
                }
#line 496 "program_representation_utils.m"
                {
#line 496 "program_representation_utils.m"
                  program_representation_utils__IndentString_34 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                }
#line 10585 "program_representation_utils.c"
                program_representation_utils__TypeCtorInfo_182_182 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__V_99_99 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) "(\n")));
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_104_104 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) "->\n")));
                }
#line 499 "program_representation_utils.m"
                {
#line 499 "program_representation_utils.m"
                  program_representation_utils__V_109_109 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) ";\n")));
                }
#line 500 "program_representation_utils.m"
                {
#line 500 "program_representation_utils.m"
                  program_representation_utils__V_113_113 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) ")\n")));
                }
#line 500 "program_representation_utils.m"
                {
#line 500 "program_representation_utils.m"
                  program_representation_utils__V_112_112 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_113_113);
                }
#line 499 "program_representation_utils.m"
                {
#line 499 "program_representation_utils.m"
                  program_representation_utils__V_111_111 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__ElseString_33, program_representation_utils__V_112_112);
                }
#line 499 "program_representation_utils.m"
                {
#line 499 "program_representation_utils.m"
                  program_representation_utils__V_108_108 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__V_109_109, program_representation_utils__V_111_111);
                }
#line 499 "program_representation_utils.m"
                {
#line 499 "program_representation_utils.m"
                  program_representation_utils__V_107_107 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_108_108);
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_106_106 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__ThenString_32, program_representation_utils__V_107_107);
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_103_103 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__V_104_104, program_representation_utils__V_106_106);
                }
#line 498 "program_representation_utils.m"
                {
#line 498 "program_representation_utils.m"
                  program_representation_utils__V_102_102 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_103_103);
                }
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__V_101_101 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__CondString_31, program_representation_utils__V_102_102);
                }
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__V_98_98 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__V_99_99, program_representation_utils__V_101_101);
                }
#line 497 "program_representation_utils.m"
                {
#line 497 "program_representation_utils.m"
                  program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__V_98_98);
                }
#line 486 "program_representation_utils.m"
              }
#line 468 "program_representation_utils.m"
            else
#line 468 "program_representation_utils.m"
              if (((((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 502 "program_representation_utils.m"
                {
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__TypeCtorInfo_183_183;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalRep_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__RevSubGoalPath_36;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalString_37;
#line 502 "program_representation_utils.m"
                  MR_Integer program_representation_utils__V_78_78;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_80_80;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_81_81;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_82_82;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_84_84;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_85_85;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_86_86;
#line 502 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_87_87;

#line 503 "program_representation_utils.m"
                  {
#line 503 "program_representation_utils.m"
                    program_representation_utils__RevSubGoalPath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_36, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 503 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 503 "program_representation_utils.m"
                  }
#line 504 "program_representation_utils.m"
                  program_representation_utils__V_78_78 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 504 "program_representation_utils.m"
                  {
#line 504 "program_representation_utils.m"
                    program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_78_78, program_representation_utils__RevSubGoalPath_36, program_representation_utils__SubGoalRep_35, &program_representation_utils__SubGoalString_37);
                  }
#line 10707 "program_representation_utils.c"
                  program_representation_utils__TypeCtorInfo_183_183 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 506 "program_representation_utils.m"
                  {
#line 506 "program_representation_utils.m"
                    program_representation_utils__V_80_80 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 506 "program_representation_utils.m"
                  {
#line 506 "program_representation_utils.m"
                    program_representation_utils__V_82_82 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_183_183, ((MR_Box) ((MR_String) "not (\n")));
                  }
#line 507 "program_representation_utils.m"
                  {
#line 507 "program_representation_utils.m"
                    program_representation_utils__V_86_86 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 507 "program_representation_utils.m"
                  {
#line 507 "program_representation_utils.m"
                    program_representation_utils__V_87_87 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_183_183, ((MR_Box) ((MR_String) ")\n")));
                  }
#line 507 "program_representation_utils.m"
                  {
#line 507 "program_representation_utils.m"
                    program_representation_utils__V_85_85 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__V_86_86, program_representation_utils__V_87_87);
                  }
#line 507 "program_representation_utils.m"
                  {
#line 507 "program_representation_utils.m"
                    program_representation_utils__V_84_84 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__SubGoalString_37, program_representation_utils__V_85_85);
                  }
#line 506 "program_representation_utils.m"
                  {
#line 506 "program_representation_utils.m"
                    program_representation_utils__V_81_81 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__V_82_82, program_representation_utils__V_84_84);
                  }
#line 506 "program_representation_utils.m"
                  {
#line 506 "program_representation_utils.m"
                    program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__V_80_80, program_representation_utils__V_81_81);
                  }
#line 502 "program_representation_utils.m"
                }
#line 468 "program_representation_utils.m"
              else
#line 509 "program_representation_utils.m"
                {
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__TypeCtorInfo_186_186;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__MaybeCut_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__CutString_39;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_61_61;
#line 509 "program_representation_utils.m"
                  MR_Integer program_representation_utils__V_62_62;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_64_64;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_65_65;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_66_66;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_68_68;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_69_69;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_70_70;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_72_72;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_73_73;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_74_74;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__V_75_75;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalRep_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__RevSubGoalPath_172;
#line 509 "program_representation_utils.m"
                  MR_Word program_representation_utils__SubGoalString_173;

#line 513 "program_representation_utils.m"
                  if ((program_representation_utils__MaybeCut_38 == (MR_Integer) 0))
#line 511 "program_representation_utils.m"
                    {
#line 512 "program_representation_utils.m"
                      {
#line 512 "program_representation_utils.m"
                        program_representation_utils__CutString_39 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) " cut")));
                      }
#line 511 "program_representation_utils.m"
                    }
#line 513 "program_representation_utils.m"
                  else
#line 514 "program_representation_utils.m"
                    {
#line 515 "program_representation_utils.m"
                      {
#line 515 "program_representation_utils.m"
                        program_representation_utils__CutString_39 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                      }
#line 514 "program_representation_utils.m"
                    }
#line 517 "program_representation_utils.m"
                  {
#line 517 "program_representation_utils.m"
                    program_representation_utils__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 517 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(3), program_representation_utils__V_61_61, 1) = ((MR_Box) (program_representation_utils__MaybeCut_38));
#line 517 "program_representation_utils.m"
                  }
#line 517 "program_representation_utils.m"
                  {
#line 517 "program_representation_utils.m"
                    program_representation_utils__RevSubGoalPath_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_172, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
#line 517 "program_representation_utils.m"
                    MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_172, 1) = ((MR_Box) (program_representation_utils__V_61_61));
#line 517 "program_representation_utils.m"
                  }
#line 518 "program_representation_utils.m"
                  program_representation_utils__V_62_62 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
#line 518 "program_representation_utils.m"
                  {
#line 518 "program_representation_utils.m"
                    program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__V_62_62, program_representation_utils__RevSubGoalPath_172, program_representation_utils__SubGoalRep_171, &program_representation_utils__SubGoalString_173);
                  }
#line 10841 "program_representation_utils.c"
                  program_representation_utils__TypeCtorInfo_186_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 520 "program_representation_utils.m"
                  {
#line 520 "program_representation_utils.m"
                    program_representation_utils__V_64_64 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 520 "program_representation_utils.m"
                  {
#line 520 "program_representation_utils.m"
                    program_representation_utils__V_66_66 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) "scope")));
                  }
#line 521 "program_representation_utils.m"
                  {
#line 521 "program_representation_utils.m"
                    program_representation_utils__V_70_70 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) " (\n")));
                  }
#line 522 "program_representation_utils.m"
                  {
#line 522 "program_representation_utils.m"
                    program_representation_utils__V_74_74 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
                  }
#line 522 "program_representation_utils.m"
                  {
#line 522 "program_representation_utils.m"
                    program_representation_utils__V_75_75 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) ")\n")));
                  }
#line 522 "program_representation_utils.m"
                  {
#line 522 "program_representation_utils.m"
                    program_representation_utils__V_73_73 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_74_74, program_representation_utils__V_75_75);
                  }
#line 522 "program_representation_utils.m"
                  {
#line 522 "program_representation_utils.m"
                    program_representation_utils__V_72_72 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__SubGoalString_173, program_representation_utils__V_73_73);
                  }
#line 521 "program_representation_utils.m"
                  {
#line 521 "program_representation_utils.m"
                    program_representation_utils__V_69_69 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_70_70, program_representation_utils__V_72_72);
                  }
#line 520 "program_representation_utils.m"
                  {
#line 520 "program_representation_utils.m"
                    program_representation_utils__V_68_68 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__CutString_39, program_representation_utils__V_69_69);
                  }
#line 520 "program_representation_utils.m"
                  {
#line 520 "program_representation_utils.m"
                    program_representation_utils__V_65_65 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_66_66, program_representation_utils__V_68_68);
                  }
#line 520 "program_representation_utils.m"
                  {
#line 520 "program_representation_utils.m"
                    program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__V_64_64, program_representation_utils__V_65_65);
                  }
#line 509 "program_representation_utils.m"
                }
#line 530 "program_representation_utils.m"
    program_representation_utils__succeeded = ((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 0)));
#line 530 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 530 "program_representation_utils.m"
      {
#line 530 "program_representation_utils.m"
        program_representation_utils__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
#line 531 "program_representation_utils.m"
        {
#line 531 "program_representation_utils.m"
          MR_Word program_representation_utils__TypeCtorInfo_188_188 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 531 "program_representation_utils.m"
          MR_Word program_representation_utils__V_150_150;
#line 531 "program_representation_utils.m"
          MR_Word program_representation_utils__V_151_151;

#line 531 "program_representation_utils.m"
          {
#line 531 "program_representation_utils.m"
            program_representation_utils__V_150_150 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
#line 531 "program_representation_utils.m"
          {
#line 531 "program_representation_utils.m"
            program_representation_utils__V_151_151 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_188_188, ((MR_Box) ((MR_String) "% conjunction: ")));
          }
#line 531 "program_representation_utils.m"
          {
#line 531 "program_representation_utils.m"
            program_representation_utils__LinePrefix_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_188_188, program_representation_utils__V_150_150, program_representation_utils__V_151_151);
          }
#line 532 "program_representation_utils.m"
          {
#line 532 "program_representation_utils.m"
            program_representation_utils__ExtraLineForConjunctions_47 = program_representation_utils__nl_0_f_0();
          }
#line 531 "program_representation_utils.m"
        }
#line 530 "program_representation_utils.m"
      }
#line 530 "program_representation_utils.m"
    else
#line 534 "program_representation_utils.m"
      {
#line 534 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_189_189 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 534 "program_representation_utils.m"
        MR_Word program_representation_utils__V_153_153;
#line 534 "program_representation_utils.m"
        MR_Word program_representation_utils__V_154_154;

#line 534 "program_representation_utils.m"
        {
#line 534 "program_representation_utils.m"
          program_representation_utils__V_153_153 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
        }
#line 534 "program_representation_utils.m"
        {
#line 534 "program_representation_utils.m"
          program_representation_utils__V_154_154 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_189_189, ((MR_Box) ((MR_String) "% ")));
        }
#line 534 "program_representation_utils.m"
        {
#line 534 "program_representation_utils.m"
          program_representation_utils__LinePrefix_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_189_189, program_representation_utils__V_153_153, program_representation_utils__V_154_154);
        }
#line 535 "program_representation_utils.m"
        {
#line 535 "program_representation_utils.m"
          program_representation_utils__ExtraLineForConjunctions_47 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_189_189);
        }
#line 534 "program_representation_utils.m"
      }
#line 537 "program_representation_utils.m"
    {
#line 537 "program_representation_utils.m"
      program_representation_utils__detism_to_string_2_p_0(program_representation_utils__DetismRep_12, &program_representation_utils__DetismString_48);
    }
#line 10979 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_190_190 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 538 "program_representation_utils.m"
    {
#line 538 "program_representation_utils.m"
      program_representation_utils__V_157_157 = program_representation_utils__nl_0_f_0();
    }
#line 538 "program_representation_utils.m"
    {
#line 538 "program_representation_utils.m"
      program_representation_utils__V_156_156 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__DetismString_48, program_representation_utils__V_157_157);
    }
#line 538 "program_representation_utils.m"
    {
#line 538 "program_representation_utils.m"
      program_representation_utils__DetismLine_49 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__LinePrefix_46, program_representation_utils__V_156_156);
    }
#line 539 "program_representation_utils.m"
    program_representation_utils__LookupAnnotation_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 0)));
#line 539 "program_representation_utils.m"
    program_representation_utils__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 1)));
#line 540 "program_representation_utils.m"
    program_representation_utils__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), program_representation_utils__LookupAnnotation_50, (MR_Integer) 1)));
#line 540 "program_representation_utils.m"
    {
#line 540 "program_representation_utils.m"
      program_representation_utils__GoalAnnotation_51 = program_representation_utils__func_0(((MR_Box) program_representation_utils__LookupAnnotation_50), program_representation_utils__AnnotationKey_13);
    }
#line 541 "program_representation_utils.m"
    {
#line 541 "program_representation_utils.m"
      program_representation_utils__print_goal_annotation_to_strings_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__VarTable_14, program_representation_utils__GoalAnnotation_51, &program_representation_utils__GoalAnnotationLines0_52);
    }
#line 543 "program_representation_utils.m"
    {
#line 543 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__GoalAnnotationLines0_52);
    }
#line 545 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 544 "program_representation_utils.m"
      {
#line 544 "program_representation_utils.m"
        program_representation_utils__GoalAnnotationLines_53 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_190_190);
      }
#line 545 "program_representation_utils.m"
    else
#line 547 "program_representation_utils.m"
      {
#line 547 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeInfo_192_192 = (MR_Word) &program_representation_utils_scalar_common_1[0];
#line 547 "program_representation_utils.m"
        MR_Word program_representation_utils__GoalAnnotationLines1_54;
#line 547 "program_representation_utils.m"
        MR_Word program_representation_utils__V_158_158;
#line 547 "program_representation_utils.m"
        MR_Word program_representation_utils__V_164_164;
#line 548 "program_representation_utils.m"
        MR_Box program_representation_utils__conv3_GoalAnnotationLines_53;

#line 546 "program_representation_utils.m"
        {
#line 546 "program_representation_utils.m"
          program_representation_utils__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 546 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[2]));
#line 546 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 1) = ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_1));
#line 546 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 546 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_158_158, 3) = ((MR_Box) (program_representation_utils__LinePrefix_46));
#line 546 "program_representation_utils.m"
        }
#line 546 "program_representation_utils.m"
        {
#line 546 "program_representation_utils.m"
          program_representation_utils__GoalAnnotationLines1_54 = mercury__cord__map_2_f_0(program_representation_utils__TypeInfo_192_192, program_representation_utils__TypeInfo_192_192, program_representation_utils__V_158_158, program_representation_utils__GoalAnnotationLines0_52);
        }
#line 548 "program_representation_utils.m"
        {
#line 548 "program_representation_utils.m"
          program_representation_utils__V_164_164 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_190_190);
        }
#line 548 "program_representation_utils.m"
        {
#line 548 "program_representation_utils.m"
          program_representation_utils__conv3_GoalAnnotationLines_53 = mercury__cord__foldr_3_f_0(program_representation_utils__TypeInfo_192_192, program_representation_utils__TypeInfo_192_192, (MR_Word) &program_representation_utils_scalar_common_2[6], program_representation_utils__GoalAnnotationLines1_54, ((MR_Box) (program_representation_utils__V_164_164)));
        }
#line 548 "program_representation_utils.m"
        program_representation_utils__GoalAnnotationLines_53 = ((MR_Word) program_representation_utils__conv3_GoalAnnotationLines_53);
#line 547 "program_representation_utils.m"
      }
#line 551 "program_representation_utils.m"
    {
#line 551 "program_representation_utils.m"
      program_representation_utils__GoalPathString0_56 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(program_representation_utils__RevGoalPath_8);
    }
#line 552 "program_representation_utils.m"
    program_representation_utils__succeeded = (strcmp(program_representation_utils__GoalPathString0_56, (MR_String) "") == 0);
#line 554 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 553 "program_representation_utils.m"
      program_representation_utils__GoalPathString_57 = (MR_String) "root goal";
#line 554 "program_representation_utils.m"
    else
#line 555 "program_representation_utils.m"
      program_representation_utils__GoalPathString_57 = program_representation_utils__GoalPathString0_56;
#line 557 "program_representation_utils.m"
    {
#line 557 "program_representation_utils.m"
      program_representation_utils__V_166_166 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_190_190, ((MR_Box) (program_representation_utils__GoalPathString_57)));
    }
#line 557 "program_representation_utils.m"
    {
#line 557 "program_representation_utils.m"
      program_representation_utils__V_167_167 = program_representation_utils__nl_0_f_0();
    }
#line 557 "program_representation_utils.m"
    {
#line 557 "program_representation_utils.m"
      program_representation_utils__V_165_165 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__V_166_166, program_representation_utils__V_167_167);
    }
#line 557 "program_representation_utils.m"
    {
#line 557 "program_representation_utils.m"
      program_representation_utils__GoalPathLine_58 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__LinePrefix_46, program_representation_utils__V_165_165);
    }
#line 563 "program_representation_utils.m"
    {
#line 563 "program_representation_utils.m"
      program_representation_utils__V_170_170 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__ExtraLineForConjunctions_47, program_representation_utils__ExprString_16);
    }
#line 562 "program_representation_utils.m"
    {
#line 562 "program_representation_utils.m"
      program_representation_utils__V_169_169 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__GoalAnnotationLines_53, program_representation_utils__V_170_170);
    }
#line 561 "program_representation_utils.m"
    {
#line 561 "program_representation_utils.m"
      program_representation_utils__V_168_168 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__DetismLine_49, program_representation_utils__V_169_169);
    }
#line 560 "program_representation_utils.m"
    {
#line 560 "program_representation_utils.m"
      *program_representation_utils__Strings_10 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__GoalPathLine_58, program_representation_utils__V_168_168);
    }
#line 461 "program_representation_utils.m"
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
#line 442 "program_representation_utils.m"
  {
#line 442 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;

#line 442 "program_representation_utils.m"
    if (((MR_tag((MR_Word) program_representation_utils__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
#line 442 "program_representation_utils.m"
      {
#line 442 "program_representation_utils.m"
        MR_Word program_representation_utils__PredFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 0)));
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__DeclModule_6 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 1)));
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 3)));
#line 442 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 4)));
#line 442 "program_representation_utils.m"
        MR_Integer program_representation_utils__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 5)));
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__PF_11;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_89_89;
#line 442 "program_representation_utils.m"
        MR_Word program_representation_utils__V_95_95;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_97_97;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_98_98;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_105_105;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_107_107;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_108_108;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_115_115;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_117_117;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_118_118;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_125_125;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_127_127;
#line 442 "program_representation_utils.m"
        MR_String program_representation_utils__V_128_128;
#line 441 "program_representation_utils.m"
        MR_String program_representation_utils___DefModule_7 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 2)));

#line 446 "program_representation_utils.m"
        if ((program_representation_utils__PredFunc_5 == (MR_Integer) 1))
#line 448 "program_representation_utils.m"
          program_representation_utils__PF_11 = (MR_String) "func";
#line 446 "program_representation_utils.m"
        else
#line 445 "program_representation_utils.m"
          program_representation_utils__PF_11 = (MR_String) "pred";
#line 11199 "program_representation_utils.c"
        program_representation_utils__V_95_95 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 451 "program_representation_utils.m"
        {
#line 451 "program_representation_utils.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__V_95_95, program_representation_utils__Mode_10, &program_representation_utils__V_89_89);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          program_representation_utils__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) "-", program_representation_utils__V_89_89);
        }
#line 451 "program_representation_utils.m"
        {
#line 451 "program_representation_utils.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__V_95_95, program_representation_utils__Arity_9, &program_representation_utils__V_98_98);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          program_representation_utils__V_105_105 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_98_98, program_representation_utils__V_97_97);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          program_representation_utils__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__V_105_105);
        }
#line 451 "program_representation_utils.m"
        {
#line 451 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_95_95, program_representation_utils__Name_8, &program_representation_utils__V_108_108);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          program_representation_utils__V_115_115 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_108_108, program_representation_utils__V_107_107);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          program_representation_utils__V_117_117 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__V_115_115);
        }
#line 451 "program_representation_utils.m"
        {
#line 451 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_95_95, program_representation_utils__DeclModule_6, &program_representation_utils__V_118_118);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          program_representation_utils__V_125_125 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_118_118, program_representation_utils__V_117_117);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          program_representation_utils__V_127_127 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__V_125_125);
        }
#line 451 "program_representation_utils.m"
        {
#line 451 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_95_95, program_representation_utils__PF_11, &program_representation_utils__V_128_128);
        }
#line 450 "program_representation_utils.m"
        {
#line 450 "program_representation_utils.m"
          *program_representation_utils__String_4 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_128_128, program_representation_utils__V_127_127);
        }
#line 442 "program_representation_utils.m"
      }
#line 442 "program_representation_utils.m"
    else
#line 454 "program_representation_utils.m"
      {
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 0)));
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__TypeModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 1)));
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 3)));
#line 454 "program_representation_utils.m"
        MR_Integer program_representation_utils__Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 4)));
#line 454 "program_representation_utils.m"
        MR_Integer program_representation_utils__Mode_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 5)));
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_43_43;
#line 454 "program_representation_utils.m"
        MR_Word program_representation_utils__V_49_49 = (MR_Word) &program_representation_utils_scalar_common_3[0];
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_51_51;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_52_52;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_59_59;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_61_61;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_62_62;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_69_69;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_71_71;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_72_72;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_79_79;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_81_81;
#line 454 "program_representation_utils.m"
        MR_String program_representation_utils__V_82_82;
#line 453 "program_representation_utils.m"
        MR_String program_representation_utils___DefModule_38 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 2)));

#line 456 "program_representation_utils.m"
        {
#line 456 "program_representation_utils.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__V_49_49, program_representation_utils__Mode_42, &program_representation_utils__V_43_43);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          program_representation_utils__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "-", program_representation_utils__V_43_43);
        }
#line 456 "program_representation_utils.m"
        {
#line 456 "program_representation_utils.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__V_49_49, program_representation_utils__Arity_41, &program_representation_utils__V_52_52);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          program_representation_utils__V_59_59 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_52_52, program_representation_utils__V_51_51);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          program_representation_utils__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__V_59_59);
        }
#line 456 "program_representation_utils.m"
        {
#line 456 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_49_49, program_representation_utils__TypeName_12, &program_representation_utils__V_62_62);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          program_representation_utils__V_69_69 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_62_62, program_representation_utils__V_61_61);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          program_representation_utils__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__V_69_69);
        }
#line 456 "program_representation_utils.m"
        {
#line 456 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_49_49, program_representation_utils__TypeModule_13, &program_representation_utils__V_72_72);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          program_representation_utils__V_79_79 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_72_72, program_representation_utils__V_71_71);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          program_representation_utils__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) " for ", program_representation_utils__V_79_79);
        }
#line 456 "program_representation_utils.m"
        {
#line 456 "program_representation_utils.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(program_representation_utils__V_49_49, program_representation_utils__Name_40, &program_representation_utils__V_82_82);
        }
#line 455 "program_representation_utils.m"
        {
#line 455 "program_representation_utils.m"
          *program_representation_utils__String_4 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_82_82, program_representation_utils__V_81_81);
        }
#line 454 "program_representation_utils.m"
      }
#line 442 "program_representation_utils.m"
  }
#line 54 "program_representation_utils.m"
}

#line 416 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 416 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 416 "program_representation_utils.m"
{
#line 416 "program_representation_utils.m"
  {
#line 416 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 416 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_16;

#line 416 "program_representation_utils.m"
    {
#line 416 "program_representation_utils.m"
      program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_STATE_VARIABLE_Strings_16);
    }
#line 416 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_16));
#line 416 "program_representation_utils.m"
  }
#line 416 "program_representation_utils.m"
}

#line 391 "program_representation_utils.m"
static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
#line 391 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 391 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1)
#line 391 "program_representation_utils.m"
{
#line 391 "program_representation_utils.m"
  {
#line 391 "program_representation_utils.m"
    MR_Box program_representation_utils__wrapper_arg_2;
#line 391 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;

#line 391 "program_representation_utils.m"
    {
#line 391 "program_representation_utils.m"
      program_representation_utils__wrapper_arg_2 = program_representation_utils__IntroducedFrom__func__print_proc_to_strings__391__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), program_representation_utils__wrapper_arg_1);
    }
#line 391 "program_representation_utils.m"
    return program_representation_utils__wrapper_arg_2;
#line 391 "program_representation_utils.m"
  }
#line 391 "program_representation_utils.m"
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
#line 390 "program_representation_utils.m"
  {
#line 390 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_12_12;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_40_47;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_5_5;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabel_16;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcDefnRep_17;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgVarReps_18;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalRep_19;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__VarNameTable_20;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__MaybeVarTypeTable_21;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__Detism_22;
#line 390 "program_representation_utils.m"
    MR_String program_representation_utils__ProcLabelString0_23;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismString_24;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabelString_25;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgsString_26;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalString_27;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__MainStrings_28;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_34_34;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_36_36;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_39_39;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_40_40;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_41_41;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_43_43;
#line 390 "program_representation_utils.m"
    MR_Word program_representation_utils__V_44_44;
#line 390 "program_representation_utils.m"
    MR_String program_representation_utils__DetismStr_61;

#line 391 "program_representation_utils.m"
    {
#line 391 "program_representation_utils.m"
      program_representation_utils__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 391 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[1]));
#line 391 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_1));
#line 391 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_5_5, 3) = ((MR_Box) (program_representation_utils__TypeClassInfo_for_goal_annotation_6));
#line 391 "program_representation_utils.m"
    }
#line 11527 "program_representation_utils.c"
    {
#line 11529 "program_representation_utils.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &program_representation_utils__TypeInfo_12_12);
    }
#line 398 "program_representation_utils.m"
    program_representation_utils__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_3, (MR_Integer) 0)));
#line 398 "program_representation_utils.m"
    program_representation_utils__ProcDefnRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_3, (MR_Integer) 1)));
#line 399 "program_representation_utils.m"
    program_representation_utils__ArgVarReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 0)));
#line 399 "program_representation_utils.m"
    program_representation_utils__GoalRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 1)));
#line 399 "program_representation_utils.m"
    program_representation_utils__VarNameTable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 2)));
#line 399 "program_representation_utils.m"
    program_representation_utils__MaybeVarTypeTable_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 3)));
#line 399 "program_representation_utils.m"
    program_representation_utils__Detism_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 4)));
#line 401 "program_representation_utils.m"
    {
#line 401 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(program_representation_utils__ProcLabel_16, &program_representation_utils__ProcLabelString0_23);
    }
#line 827 "program_representation_utils.m"
    if ((program_representation_utils__Detism_22 == (MR_Integer) 5))
#line 841 "program_representation_utils.m"
      program_representation_utils__DetismStr_61 = (MR_String) "cc_multi";
#line 827 "program_representation_utils.m"
    else
#line 827 "program_representation_utils.m"
      if ((program_representation_utils__Detism_22 == (MR_Integer) 4))
#line 838 "program_representation_utils.m"
        program_representation_utils__DetismStr_61 = (MR_String) "cc_nondet";
#line 827 "program_representation_utils.m"
      else
#line 827 "program_representation_utils.m"
        if ((program_representation_utils__Detism_22 == (MR_Integer) 0))
#line 826 "program_representation_utils.m"
          program_representation_utils__DetismStr_61 = (MR_String) "det";
#line 827 "program_representation_utils.m"
        else
#line 827 "program_representation_utils.m"
          if ((program_representation_utils__Detism_22 == (MR_Integer) 6))
#line 844 "program_representation_utils.m"
            program_representation_utils__DetismStr_61 = (MR_String) "erroneous";
#line 827 "program_representation_utils.m"
          else
#line 827 "program_representation_utils.m"
            if ((program_representation_utils__Detism_22 == (MR_Integer) 7))
#line 847 "program_representation_utils.m"
              program_representation_utils__DetismStr_61 = (MR_String) "failure";
#line 827 "program_representation_utils.m"
            else
#line 827 "program_representation_utils.m"
              if ((program_representation_utils__Detism_22 == (MR_Integer) 3))
#line 835 "program_representation_utils.m"
                program_representation_utils__DetismStr_61 = (MR_String) "multi";
#line 827 "program_representation_utils.m"
              else
#line 827 "program_representation_utils.m"
                if ((program_representation_utils__Detism_22 == (MR_Integer) 2))
#line 832 "program_representation_utils.m"
                  program_representation_utils__DetismStr_61 = (MR_String) "nondet";
#line 827 "program_representation_utils.m"
                else
#line 829 "program_representation_utils.m"
                  program_representation_utils__DetismStr_61 = (MR_String) "semidet";
#line 849 "program_representation_utils.m"
    {
#line 849 "program_representation_utils.m"
      program_representation_utils__DetismString_24 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_61)));
    }
#line 11600 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_40_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 403 "program_representation_utils.m"
    {
#line 403 "program_representation_utils.m"
      program_representation_utils__V_32_32 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) ((MR_String) " ")));
    }
#line 404 "program_representation_utils.m"
    {
#line 404 "program_representation_utils.m"
      program_representation_utils__V_34_34 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) (program_representation_utils__ProcLabelString0_23)));
    }
#line 403 "program_representation_utils.m"
    {
#line 403 "program_representation_utils.m"
      program_representation_utils__V_31_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__V_32_32, program_representation_utils__V_34_34);
    }
#line 403 "program_representation_utils.m"
    {
#line 403 "program_representation_utils.m"
      program_representation_utils__ProcLabelString_25 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__DetismString_24, program_representation_utils__V_31_31);
    }
#line 766 "program_representation_utils.m"
    if ((program_representation_utils__ArgVarReps_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "program_representation_utils.m"
      {
#line 765 "program_representation_utils.m"
        {
#line 765 "program_representation_utils.m"
          program_representation_utils__ArgsString_26 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 764 "program_representation_utils.m"
      }
#line 766 "program_representation_utils.m"
    else
#line 767 "program_representation_utils.m"
      {
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_97;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_70;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_71_71;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_73_73;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_86;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_87;
#line 767 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_90;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_91;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_92_92;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_94_94;

#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_71_71 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_77);
        }
#line 778 "program_representation_utils.m"
        program_representation_utils__Arg_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_18, (MR_Integer) 0)));
#line 778 "program_representation_utils.m"
        program_representation_utils__Args_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_18, (MR_Integer) 1)));
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarNameTable_20, program_representation_utils__Arg_86, &program_representation_utils__ArgName_90);
        }
#line 11674 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__V_92_92 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_97, ((MR_Box) ((MR_String) ", ")));
        }
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarNameTable_20, program_representation_utils__Args_87, program_representation_utils__V_92_92, &program_representation_utils__ArgsString_91);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__V_94_94 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_97, ((MR_Box) (program_representation_utils__ArgName_90)), program_representation_utils__ArgsString_91);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__ArgsStr_70 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_97, program_representation_utils__V_71_71, program_representation_utils__V_94_94);
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          program_representation_utils__V_73_73 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_77, program_representation_utils__ArgsStr_70, ((MR_Box) ((MR_String) ")")));
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          program_representation_utils__ArgsString_26 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_77, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_73_73);
        }
#line 767 "program_representation_utils.m"
      }
#line 407 "program_representation_utils.m"
    {
#line 407 "program_representation_utils.m"
      program_representation_utils__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_36_36, 0) = ((MR_Box) (program_representation_utils__V_5_5));
#line 407 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_36_36, 1) = ((MR_Box) (program_representation_utils__VarNameTable_20));
#line 407 "program_representation_utils.m"
    }
#line 407 "program_representation_utils.m"
    {
#line 407 "program_representation_utils.m"
      program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_12_12, program_representation_utils__TypeClassInfo_for_goal_annotation_6, program_representation_utils__V_36_36, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__GoalRep_19, &program_representation_utils__GoalString_27);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__V_41_41 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) ((MR_String) " :-\n")));
    }
#line 855 "program_representation_utils.m"
    {
#line 855 "program_representation_utils.m"
      program_representation_utils__V_44_44 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 410 "program_representation_utils.m"
    {
#line 410 "program_representation_utils.m"
      program_representation_utils__V_43_43 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__GoalString_27, program_representation_utils__V_44_44);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__V_40_40 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__V_41_41, program_representation_utils__V_43_43);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__V_39_39 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__ArgsString_26, program_representation_utils__V_40_40);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__MainStrings_28 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__ProcLabelString_25, program_representation_utils__V_39_39);
    }
#line 414 "program_representation_utils.m"
    if ((program_representation_utils__MaybeVarTypeTable_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "program_representation_utils.m"
      *program_representation_utils__Strings_4 = program_representation_utils__MainStrings_28;
#line 414 "program_representation_utils.m"
    else
#line 415 "program_representation_utils.m"
      {
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__VarTypeTable_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeVarTypeTable_21, (MR_Integer) 0)));
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeTableStrings_30;
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__V_45_45;
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__V_46_46;
#line 416 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_TypeTableStrings_30;

#line 416 "program_representation_utils.m"
        {
#line 416 "program_representation_utils.m"
          program_representation_utils__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 0) = ((MR_Box) (&program_representation_utils_scalar_common_6[0]));
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_2));
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_45_45, 3) = ((MR_Box) (program_representation_utils__VarNameTable_20));
#line 416 "program_representation_utils.m"
        }
#line 417 "program_representation_utils.m"
        {
#line 417 "program_representation_utils.m"
          program_representation_utils__V_46_46 = mercury__cord__init_0_f_0(program_representation_utils__TypeCtorInfo_40_47);
        }
#line 416 "program_representation_utils.m"
        {
#line 416 "program_representation_utils.m"
          mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__V_45_45, program_representation_utils__VarTypeTable_29, ((MR_Box) (program_representation_utils__V_46_46)), &program_representation_utils__conv1_TypeTableStrings_30);
        }
#line 416 "program_representation_utils.m"
        program_representation_utils__TypeTableStrings_30 = ((MR_Word) program_representation_utils__conv1_TypeTableStrings_30);
#line 418 "program_representation_utils.m"
        {
#line 418 "program_representation_utils.m"
          *program_representation_utils__Strings_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__TypeTableStrings_30, program_representation_utils__MainStrings_28);
        }
#line 415 "program_representation_utils.m"
      }
#line 390 "program_representation_utils.m"
  }
#line 49 "program_representation_utils.m"
}

#line 416 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 416 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 416 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 416 "program_representation_utils.m"
{
#line 416 "program_representation_utils.m"
  {
#line 416 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 416 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_16;

#line 416 "program_representation_utils.m"
    {
#line 416 "program_representation_utils.m"
      program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_STATE_VARIABLE_Strings_16);
    }
#line 416 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_16));
#line 416 "program_representation_utils.m"
  }
#line 416 "program_representation_utils.m"
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
#line 388 "program_representation_utils.m"
  {
#line 388 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_40_43;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_5, (MR_Integer) 0)));
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcDefnRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_5, (MR_Integer) 1)));
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgVarReps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 0)));
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 1)));
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__VarNameTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 2)));
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__MaybeVarTypeTable_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 3)));
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 4)));
#line 388 "program_representation_utils.m"
    MR_String program_representation_utils__ProcLabelString0_19;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__DetismString_20;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcLabelString_21;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__ArgsString_22;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__GoalString_23;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__MainStrings_24;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_27_27;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_28_28;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_32_32;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_35_35;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_36_36;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_37_37;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_39_39;
#line 388 "program_representation_utils.m"
    MR_Word program_representation_utils__V_40_40;
#line 388 "program_representation_utils.m"
    MR_String program_representation_utils__DetismStr_57;

#line 401 "program_representation_utils.m"
    {
#line 401 "program_representation_utils.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(program_representation_utils__ProcLabel_12, &program_representation_utils__ProcLabelString0_19);
    }
#line 827 "program_representation_utils.m"
    if ((program_representation_utils__Detism_18 == (MR_Integer) 5))
#line 841 "program_representation_utils.m"
      program_representation_utils__DetismStr_57 = (MR_String) "cc_multi";
#line 827 "program_representation_utils.m"
    else
#line 827 "program_representation_utils.m"
      if ((program_representation_utils__Detism_18 == (MR_Integer) 4))
#line 838 "program_representation_utils.m"
        program_representation_utils__DetismStr_57 = (MR_String) "cc_nondet";
#line 827 "program_representation_utils.m"
      else
#line 827 "program_representation_utils.m"
        if ((program_representation_utils__Detism_18 == (MR_Integer) 0))
#line 826 "program_representation_utils.m"
          program_representation_utils__DetismStr_57 = (MR_String) "det";
#line 827 "program_representation_utils.m"
        else
#line 827 "program_representation_utils.m"
          if ((program_representation_utils__Detism_18 == (MR_Integer) 6))
#line 844 "program_representation_utils.m"
            program_representation_utils__DetismStr_57 = (MR_String) "erroneous";
#line 827 "program_representation_utils.m"
          else
#line 827 "program_representation_utils.m"
            if ((program_representation_utils__Detism_18 == (MR_Integer) 7))
#line 847 "program_representation_utils.m"
              program_representation_utils__DetismStr_57 = (MR_String) "failure";
#line 827 "program_representation_utils.m"
            else
#line 827 "program_representation_utils.m"
              if ((program_representation_utils__Detism_18 == (MR_Integer) 3))
#line 835 "program_representation_utils.m"
                program_representation_utils__DetismStr_57 = (MR_String) "multi";
#line 827 "program_representation_utils.m"
              else
#line 827 "program_representation_utils.m"
                if ((program_representation_utils__Detism_18 == (MR_Integer) 2))
#line 832 "program_representation_utils.m"
                  program_representation_utils__DetismStr_57 = (MR_String) "nondet";
#line 827 "program_representation_utils.m"
                else
#line 829 "program_representation_utils.m"
                  program_representation_utils__DetismStr_57 = (MR_String) "semidet";
#line 849 "program_representation_utils.m"
    {
#line 849 "program_representation_utils.m"
      program_representation_utils__DetismString_20 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_57)));
    }
#line 11964 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_40_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 403 "program_representation_utils.m"
    {
#line 403 "program_representation_utils.m"
      program_representation_utils__V_28_28 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) ((MR_String) " ")));
    }
#line 404 "program_representation_utils.m"
    {
#line 404 "program_representation_utils.m"
      program_representation_utils__V_30_30 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) (program_representation_utils__ProcLabelString0_19)));
    }
#line 403 "program_representation_utils.m"
    {
#line 403 "program_representation_utils.m"
      program_representation_utils__V_27_27 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__V_28_28, program_representation_utils__V_30_30);
    }
#line 403 "program_representation_utils.m"
    {
#line 403 "program_representation_utils.m"
      program_representation_utils__ProcLabelString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__DetismString_20, program_representation_utils__V_27_27);
    }
#line 766 "program_representation_utils.m"
    if ((program_representation_utils__ArgVarReps_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "program_representation_utils.m"
      {
#line 765 "program_representation_utils.m"
        {
#line 765 "program_representation_utils.m"
          program_representation_utils__ArgsString_22 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 764 "program_representation_utils.m"
      }
#line 766 "program_representation_utils.m"
    else
#line 767 "program_representation_utils.m"
      {
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_18_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeCtorInfo_22_93;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsStr_66;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_67_67;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_69_69;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__Arg_82;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__Args_83;
#line 767 "program_representation_utils.m"
        MR_String program_representation_utils__ArgName_86;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__ArgsString_87;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_88_88;
#line 767 "program_representation_utils.m"
        MR_Word program_representation_utils__V_90_90;

#line 768 "program_representation_utils.m"
        {
#line 768 "program_representation_utils.m"
          program_representation_utils__V_67_67 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_73);
        }
#line 778 "program_representation_utils.m"
        program_representation_utils__Arg_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_14, (MR_Integer) 0)));
#line 778 "program_representation_utils.m"
        program_representation_utils__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_14, (MR_Integer) 1)));
#line 779 "program_representation_utils.m"
        {
#line 779 "program_representation_utils.m"
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarNameTable_16, program_representation_utils__Arg_82, &program_representation_utils__ArgName_86);
        }
#line 12038 "program_representation_utils.c"
        program_representation_utils__TypeCtorInfo_22_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__V_88_88 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_93, ((MR_Box) ((MR_String) ", ")));
        }
#line 780 "program_representation_utils.m"
        {
#line 780 "program_representation_utils.m"
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarNameTable_16, program_representation_utils__Args_83, program_representation_utils__V_88_88, &program_representation_utils__ArgsString_87);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__V_90_90 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_93, ((MR_Box) (program_representation_utils__ArgName_86)), program_representation_utils__ArgsString_87);
        }
#line 782 "program_representation_utils.m"
        {
#line 782 "program_representation_utils.m"
          program_representation_utils__ArgsStr_66 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_93, program_representation_utils__V_67_67, program_representation_utils__V_90_90);
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          program_representation_utils__V_69_69 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_73, program_representation_utils__ArgsStr_66, ((MR_Box) ((MR_String) ")")));
        }
#line 769 "program_representation_utils.m"
        {
#line 769 "program_representation_utils.m"
          program_representation_utils__ArgsString_22 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_73, ((MR_Box) ((MR_String) "(")), program_representation_utils__V_69_69);
        }
#line 767 "program_representation_utils.m"
      }
#line 407 "program_representation_utils.m"
    {
#line 407 "program_representation_utils.m"
      program_representation_utils__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_32_32, 0) = ((MR_Box) (program_representation_utils__Lookup_4));
#line 407 "program_representation_utils.m"
      MR_hl_field(MR_mktag(0), program_representation_utils__V_32_32, 1) = ((MR_Box) (program_representation_utils__VarNameTable_16));
#line 407 "program_representation_utils.m"
    }
#line 407 "program_representation_utils.m"
    {
#line 407 "program_representation_utils.m"
      program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, program_representation_utils__TypeClassInfo_for_goal_annotation_7, program_representation_utils__V_32_32, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__GoalRep_15, &program_representation_utils__GoalString_23);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__V_37_37 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) ((MR_String) " :-\n")));
    }
#line 855 "program_representation_utils.m"
    {
#line 855 "program_representation_utils.m"
      program_representation_utils__V_40_40 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 410 "program_representation_utils.m"
    {
#line 410 "program_representation_utils.m"
      program_representation_utils__V_39_39 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__GoalString_23, program_representation_utils__V_40_40);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__V_36_36 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__V_37_37, program_representation_utils__V_39_39);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__V_35_35 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__ArgsString_22, program_representation_utils__V_36_36);
    }
#line 409 "program_representation_utils.m"
    {
#line 409 "program_representation_utils.m"
      program_representation_utils__MainStrings_24 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__ProcLabelString_21, program_representation_utils__V_35_35);
    }
#line 414 "program_representation_utils.m"
    if ((program_representation_utils__MaybeVarTypeTable_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "program_representation_utils.m"
      *program_representation_utils__Strings_6 = program_representation_utils__MainStrings_24;
#line 414 "program_representation_utils.m"
    else
#line 415 "program_representation_utils.m"
      {
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__VarTypeTable_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeVarTypeTable_17, (MR_Integer) 0)));
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__TypeTableStrings_26;
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__V_41_41;
#line 415 "program_representation_utils.m"
        MR_Word program_representation_utils__V_42_42;
#line 416 "program_representation_utils.m"
        MR_Box program_representation_utils__conv1_TypeTableStrings_26;

#line 416 "program_representation_utils.m"
        {
#line 416 "program_representation_utils.m"
          program_representation_utils__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 0) = ((MR_Box) (&program_representation_utils_scalar_common_6[0]));
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_3_p_0_1));
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 416 "program_representation_utils.m"
          MR_hl_field(MR_mktag(0), program_representation_utils__V_41_41, 3) = ((MR_Box) (program_representation_utils__VarNameTable_16));
#line 416 "program_representation_utils.m"
        }
#line 417 "program_representation_utils.m"
        {
#line 417 "program_representation_utils.m"
          program_representation_utils__V_42_42 = mercury__cord__init_0_f_0(program_representation_utils__TypeCtorInfo_40_43);
        }
#line 416 "program_representation_utils.m"
        {
#line 416 "program_representation_utils.m"
          mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__V_41_41, program_representation_utils__VarTypeTable_25, ((MR_Box) (program_representation_utils__V_42_42)), &program_representation_utils__conv1_TypeTableStrings_26);
        }
#line 416 "program_representation_utils.m"
        program_representation_utils__TypeTableStrings_26 = ((MR_Word) program_representation_utils__conv1_TypeTableStrings_26);
#line 418 "program_representation_utils.m"
        {
#line 418 "program_representation_utils.m"
          *program_representation_utils__Strings_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__TypeTableStrings_26, program_representation_utils__MainStrings_24);
        }
#line 415 "program_representation_utils.m"
      }
#line 388 "program_representation_utils.m"
  }
#line 45 "program_representation_utils.m"
}

#line 232 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 232 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 232 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 232 "program_representation_utils.m"
{
#line 232 "program_representation_utils.m"
  {
#line 232 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 232 "program_representation_utils.m"
    MR_Word program_representation_utils__conv4_HeadVar__4_47;

#line 232 "program_representation_utils.m"
    {
#line 232 "program_representation_utils.m"
      program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv4_HeadVar__4_47);
    }
#line 232 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv4_HeadVar__4_47));
#line 232 "program_representation_utils.m"
  }
#line 232 "program_representation_utils.m"
}

#line 224 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 224 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_3,
#line 224 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_4)
#line 224 "program_representation_utils.m"
{
#line 224 "program_representation_utils.m"
  {
#line 224 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 224 "program_representation_utils.m"
    MR_Word program_representation_utils__conv2_STATE_VARIABLE_Strings_12;

#line 224 "program_representation_utils.m"
    {
#line 224 "program_representation_utils.m"
      program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv2_STATE_VARIABLE_Strings_12);
    }
#line 224 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv2_STATE_VARIABLE_Strings_12));
#line 224 "program_representation_utils.m"
  }
#line 224 "program_representation_utils.m"
}

#line 222 "program_representation_utils.m"
static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
#line 222 "program_representation_utils.m"
  MR_Box program_representation_utils__closure_arg,
#line 222 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_1,
#line 222 "program_representation_utils.m"
  MR_Box program_representation_utils__wrapper_arg_2,
#line 222 "program_representation_utils.m"
  MR_Box * program_representation_utils__wrapper_arg_3)
#line 222 "program_representation_utils.m"
{
#line 222 "program_representation_utils.m"
  {
#line 222 "program_representation_utils.m"
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
#line 222 "program_representation_utils.m"
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_8;

#line 222 "program_representation_utils.m"
    {
#line 222 "program_representation_utils.m"
      program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_STATE_VARIABLE_Strings_8);
    }
#line 222 "program_representation_utils.m"
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_8));
#line 222 "program_representation_utils.m"
  }
#line 222 "program_representation_utils.m"
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
#line 218 "program_representation_utils.m"
  {
#line 218 "program_representation_utils.m"
    MR_bool program_representation_utils__succeeded;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeCtorInfo_35_35;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeInfo_37_37;
#line 218 "program_representation_utils.m"
    MR_String program_representation_utils__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 0)));
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__OISUTypesProcs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 2)));
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeTableMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 3)));
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcReps_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 4)));
#line 218 "program_representation_utils.m"
    MR_String program_representation_utils__HeaderString_10;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__OISUStrs_11;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeTableStrs0_12;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__TypeTableStrs_13;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__ProcRepStrs_14;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__V_20_20;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__V_22_22;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__V_28_28;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__V_29_29;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__V_30_30;
#line 218 "program_representation_utils.m"
    MR_Word program_representation_utils__V_31_31;
#line 218 "program_representation_utils.m"
    MR_String program_representation_utils__V_52_52;
#line 218 "program_representation_utils.m"
    MR_String program_representation_utils__V_59_59;
#line 219 "program_representation_utils.m"
    MR_Word program_representation_utils___StringTable_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 1)));
#line 222 "program_representation_utils.m"
    MR_Box program_representation_utils__conv1_OISUStrs_11;
#line 224 "program_representation_utils.m"
    MR_Box program_representation_utils__conv3_TypeTableStrs0_12;
#line 232 "program_representation_utils.m"
    MR_Box program_representation_utils__conv5_ProcRepStrs_14;

#line 221 "program_representation_utils.m"
    {
#line 221 "program_representation_utils.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &program_representation_utils_scalar_common_3[0], program_representation_utils__ModuleName_5, &program_representation_utils__V_52_52);
    }
#line 221 "program_representation_utils.m"
    {
#line 221 "program_representation_utils.m"
      program_representation_utils__V_59_59 = mercury__string__f_43_43_2_f_0(program_representation_utils__V_52_52, (MR_String) "\n");
    }
#line 221 "program_representation_utils.m"
    {
#line 221 "program_representation_utils.m"
      program_representation_utils__HeaderString_10 = mercury__string__f_43_43_2_f_0((MR_String) "Module ", program_representation_utils__V_59_59);
    }
#line 12349 "program_representation_utils.c"
    program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 223 "program_representation_utils.m"
    {
#line 223 "program_representation_utils.m"
      program_representation_utils__V_20_20 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
#line 12356 "program_representation_utils.c"
    program_representation_utils__TypeInfo_37_37 = (MR_Word) &program_representation_utils_scalar_common_1[0];
#line 222 "program_representation_utils.m"
    {
#line 222 "program_representation_utils.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_oisu_type_procs_0, program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[3], program_representation_utils__OISUTypesProcs_7, ((MR_Box) (program_representation_utils__V_20_20)), &program_representation_utils__conv1_OISUStrs_11);
    }
#line 222 "program_representation_utils.m"
    program_representation_utils__OISUStrs_11 = ((MR_Word) program_representation_utils__conv1_OISUStrs_11);
#line 225 "program_representation_utils.m"
    {
#line 225 "program_representation_utils.m"
      program_representation_utils__V_22_22 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
#line 224 "program_representation_utils.m"
    {
#line 224 "program_representation_utils.m"
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[4], program_representation_utils__TypeTableMap_8, ((MR_Box) (program_representation_utils__V_22_22)), &program_representation_utils__conv3_TypeTableStrs0_12);
    }
#line 224 "program_representation_utils.m"
    program_representation_utils__TypeTableStrs0_12 = ((MR_Word) program_representation_utils__conv3_TypeTableStrs0_12);
#line 226 "program_representation_utils.m"
    {
#line 226 "program_representation_utils.m"
      program_representation_utils__succeeded = mercury__cord__is_empty_1_p_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs0_12);
    }
#line 228 "program_representation_utils.m"
    if (program_representation_utils__succeeded)
#line 227 "program_representation_utils.m"
      program_representation_utils__TypeTableStrs_13 = program_representation_utils__TypeTableStrs0_12;
#line 228 "program_representation_utils.m"
    else
#line 229 "program_representation_utils.m"
      {
#line 229 "program_representation_utils.m"
        MR_Word program_representation_utils__V_23_23;
#line 229 "program_representation_utils.m"
        MR_Word program_representation_utils__V_25_25;
#line 229 "program_representation_utils.m"
        MR_Word program_representation_utils__V_26_26;

#line 229 "program_representation_utils.m"
        {
#line 229 "program_representation_utils.m"
          program_representation_utils__V_23_23 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) ((MR_String) "\nType table:\n")));
        }
#line 855 "program_representation_utils.m"
        {
#line 855 "program_representation_utils.m"
          program_representation_utils__V_26_26 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
        }
#line 230 "program_representation_utils.m"
        {
#line 230 "program_representation_utils.m"
          program_representation_utils__V_25_25 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs0_12, program_representation_utils__V_26_26);
        }
#line 229 "program_representation_utils.m"
        {
#line 229 "program_representation_utils.m"
          program_representation_utils__TypeTableStrs_13 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__V_23_23, program_representation_utils__V_25_25);
        }
#line 229 "program_representation_utils.m"
      }
#line 233 "program_representation_utils.m"
    {
#line 233 "program_representation_utils.m"
      program_representation_utils__V_28_28 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
#line 232 "program_representation_utils.m"
    {
#line 232 "program_representation_utils.m"
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &program_representation_utils_scalar_common_1[2], program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[5], program_representation_utils__ProcReps_9, ((MR_Box) (program_representation_utils__V_28_28)), &program_representation_utils__conv5_ProcRepStrs_14);
    }
#line 232 "program_representation_utils.m"
    program_representation_utils__ProcRepStrs_14 = ((MR_Word) program_representation_utils__conv5_ProcRepStrs_14);
#line 234 "program_representation_utils.m"
    {
#line 234 "program_representation_utils.m"
      program_representation_utils__V_29_29 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) (program_representation_utils__HeaderString_10)));
    }
#line 235 "program_representation_utils.m"
    {
#line 235 "program_representation_utils.m"
      program_representation_utils__V_31_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs_13, program_representation_utils__ProcRepStrs_14);
    }
#line 234 "program_representation_utils.m"
    {
#line 234 "program_representation_utils.m"
      program_representation_utils__V_30_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__OISUStrs_11, program_representation_utils__V_31_31);
    }
#line 234 "program_representation_utils.m"
    {
#line 234 "program_representation_utils.m"
      *program_representation_utils__Strings_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__V_29_29, program_representation_utils__V_30_30);
    }
#line 218 "program_representation_utils.m"
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
