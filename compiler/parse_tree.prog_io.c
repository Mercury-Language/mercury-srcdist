/*
** Automatically generated from `prog_io.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module parse_tree.prog_io. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io__init
ENDINIT
*/

#include "parse_tree.prog_io.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_item.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1078 "prog_io.m"
struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s {
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13;
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16;
#line 1089 "prog_io.m"
  MR_bool parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded;
#line 1098 "prog_io.m"
  jmp_buf parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0;
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90;
#line 1098 "prog_io.m"
  MR_Box parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90;
#line 1078 "prog_io.m"
};


#line 123 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 126 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 129 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 132 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 135 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 138 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0;

#line 141 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 144 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0;

#line 147 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1[2];

#line 150 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1;

#line 153 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0[1];

#line 156 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1[1];

#line 159 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_lookahead_0[2];

#line 162 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0[2];

#line 165 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0[2];

#line 168 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0[1];

#line 171 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0;

#line 174 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1[2];

#line 177 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1;

#line 180 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2[2];

#line 183 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2;

#line 186 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0[1];

#line 189 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1[1];

#line 192 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2[1];

#line 195 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_module_decl_present_0[3];

#line 198 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0[3];

#line 201 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0[3];

#line 204 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0;

#line 207 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1;

#line 210 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0[2];

#line 213 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0[2];

#line 216 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0[2];

#line 219 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0;

#line 222 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1;

#line 225 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0[2];

#line 228 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0[2];

#line 231 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0[2];

#line 234 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0;

#line 237 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1[1];

#line 240 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1;

#line 243 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 246 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 249 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2[4];

#line 252 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2;

#line 255 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3[3];

#line 258 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3;

#line 261 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0[1];

#line 264 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1[1];

#line 267 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2[1];

#line 270 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3[1];

#line 273 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_iom_result_0[4];

#line 276 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0[4];

#line 279 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0[4];

#line 282 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct7 parse_tree__prog_io____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 285 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001(
#line 288 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 290 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 292 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 295 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001(
#line 298 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 300 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 302 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 304 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 307 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001(
#line 310 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 312 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 315 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001(
#line 318 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 320 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 322 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 325 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001(
#line 328 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 330 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 333 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001(
#line 336 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 338 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 340 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 343 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001(
#line 346 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 348 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 351 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001(
#line 354 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 356 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 358 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 361 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001(
#line 364 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 366 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 369 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001(
#line 372 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 374 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 376 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 379 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0_10001(
#line 382 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 384 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 387 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0_10001(
#line 390 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 392 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 394 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 397 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0_10001(
#line 400 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 402 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 404 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 407 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0_10001(
#line 410 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 412 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 414 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 416 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 276 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 276 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 276 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 280 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 280 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 280 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 649 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21);

#line 311 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_17,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__MakeDummyParseTree_20,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadParseTree_21,
#line 311 "prog_io.m"
  MR_Box * parse_tree__prog_io__ParseTree_22,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_23,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_24);

#line 276 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 276 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 276 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1435 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1435 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1435 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 199 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0(
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 199 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0(
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1130 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(
#line 1130 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1130 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1134 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1134 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1134 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1412 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1412 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1412 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 280 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 280 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 280 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1551 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1551 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1551 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20);

#line 1525 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1525 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1525 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1525 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33);

#line 1497 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1497 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1497 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19);

#line 1483 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1483 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1483 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1483 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1483 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1483 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15);

#line 1442 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1442 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1442 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1442 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1442 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1442 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1442 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11);

#line 1416 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1416 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1416 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1416 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1416 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1416 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1416 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);

#line 1367 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1367 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1367 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1367 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29);

#line 1291 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_18_p_0(
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_20,
#line 1291 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53,
#line 1291 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_54,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_56,
#line 1291 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57,
#line 1291 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_61,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_62,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_63,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_64);

#line 1271 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_16_p_0(
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_18,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_19,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_20,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_29,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_30,
#line 1271 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_31,
#line 1271 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_33,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_35,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_36,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_37,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_38);

#line 1157 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1157 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49,
#line 1157 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_51,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_53,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_54,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_55,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_56);

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1078 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1078 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1078 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1078 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27);

#line 1032 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1032 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1032 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51);

#line 999 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 999 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 999 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 999 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21);

#line 986 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_5_p_0(
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_6,
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_7,
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_8,
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11,
#line 986 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12);

#line 824 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_70,
#line 824 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71,
#line 824 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_72,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_75,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_76,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_77,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_78);

#line 757 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28);

#line 712 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_16_p_0(
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_18,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_19,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_20,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_22,
#line 712 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_33,
#line 712 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_34,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_35,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_36,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_37,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_38,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_39,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_40);

#line 565 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_16_p_0(
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_18,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_50,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_22,
#line 565 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51,
#line 565 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_55,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_56,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_57,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_58);

#line 521 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_16_p_0(
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_18,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_19,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_20,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_21,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeLastSection_22,
#line 521 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_37,
#line 521 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_38,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_39,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_41,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_42,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_43,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_44);

#line 459 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 459 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 459 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 459 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 459 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 459 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_35,
#line 459 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_36);

#line 392 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0(
#line 392 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_9,
#line 392 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 392 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_33,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_34);

#line 297 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 297 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 297 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 297 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 290 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 290 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 290 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 290 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 285 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 285 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 285 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4);

#line 252 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 251 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 248 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 248 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 248 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 248 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 248 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3);

#line 240 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 239 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 228 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_2(
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 228 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_1(
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[74][2];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[2][3];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_7[2][6];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_8[2][11];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_9[1][9];




static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[74][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[18])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: source file"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains module named"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 69 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[41])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_io__actually_read_module_src_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_io__actually_read_module_src_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_8[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_file_kind_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1825 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1833 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 1841 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1849 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1858 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1868 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_make_dummy_parse_tree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "make_dummy_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1885 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0 = {
  (MR_String) "no_lookahead",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1900 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1908 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1916 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0
};

#line 1922 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1 = {
  (MR_String) "lookahead",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1,
  NULL,
  NULL,
  NULL
};

#line 1937 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0
};

#line 1942 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1
};

#line 1947 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_lookahead_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1
  }
};

#line 1961 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0
};

#line 1967 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1973 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_lookahead_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "maybe_lookahead",
  {     parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0 },
  {     parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_lookahead_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0
};

#line 1990 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_lookahead_0
};

#line 1995 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0 = {
  (MR_String) "no_module_decl_present",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0,
  NULL,
  NULL,
  NULL
};

#line 2010 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2016 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1 = {
  (MR_String) "wrong_module_decl_present",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1,
  NULL,
  NULL,
  NULL
};

#line 2031 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2037 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2 = {
  (MR_String) "right_module_decl_present",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2,
  NULL,
  NULL,
  NULL
};

#line 2052 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0
};

#line 2057 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1
};

#line 2062 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2
};

#line 2067 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_module_decl_present_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2
  }
};

#line 2086 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1
};

#line 2093 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2100 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_module_decl_present_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "maybe_module_decl_present",
  {     parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0 },
  {     parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_module_decl_present_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0
};

#line 2117 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0 = {
  (MR_String) "dont_require_module_decl",
  (MR_Integer) 0
};

#line 2123 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1 = {
  (MR_String) "require_module_decl",
  (MR_Integer) 1
};

#line 2129 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1
};

#line 2135 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1
};

#line 2141 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2147 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_require_module_decl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "maybe_require_module_decl",
  {     parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0 },
  {     parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0
};

#line 2164 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0 = {
  (MR_String) "have_not_given_missing_section_start_warning",
  (MR_Integer) 0
};

#line 2170 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1 = {
  (MR_String) "have_given_missing_section_start_warning",
  (MR_Integer) 1
};

#line 2176 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1
};

#line 2182 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0
};

#line 2188 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2194 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_missing_section_start_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "missing_section_start_warning",
  {     parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0 },
  {     parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0
};

#line 2211 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0 = {
  (MR_String) "read_iom_eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2226 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2231 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1 = {
  (MR_String) "read_iom_read_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 2246 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2254 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 2262 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 2270 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2 = {
  (MR_String) "read_iom_parse_errors",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2,
  NULL,
  NULL,
  NULL
};

#line 2285 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_item_or_marker_0
};

#line 2292 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3 = {
  (MR_String) "read_iom_ok",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3,
  NULL,
  NULL,
  NULL
};

#line 2307 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0
};

#line 2312 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1
};

#line 2317 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2
};

#line 2322 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3
};

#line 2327 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_iom_result_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3
  }
};

#line 2351 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0[4] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1
};

#line 2359 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2367 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_iom_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io____Unify____read_iom_result_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____read_iom_result_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "read_iom_result",
  {     parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0 },
  {     parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_iom_result_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0
};

#line 2384 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct7 parse_tree__prog_io____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 2399 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_parse_tree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io____Unify____read_parse_tree_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____read_parse_tree_1_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "read_parse_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2416 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001(
#line 2419 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2421 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2423 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2425 "parse_tree.prog_io.c"
{
#line 2427 "parse_tree.prog_io.c"
  {
#line 2429 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2432 "parse_tree.prog_io.c"
    {
#line 2434 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2437 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2439 "parse_tree.prog_io.c"
  }
#line 2441 "parse_tree.prog_io.c"
}

#line 2444 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001(
#line 2447 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2449 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 2451 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 2453 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4)
#line 2455 "parse_tree.prog_io.c"
{
#line 2457 "parse_tree.prog_io.c"
  {
#line 2459 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2462 "parse_tree.prog_io.c"
    {
#line 2464 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_3), ((MR_Word) parse_tree__prog_io__wrapper_arg_4));
    }
#line 2467 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2469 "parse_tree.prog_io.c"
  }
#line 2471 "parse_tree.prog_io.c"
}

#line 2474 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001(
#line 2477 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2479 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2481 "parse_tree.prog_io.c"
{
#line 2483 "parse_tree.prog_io.c"
  {
#line 2485 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2488 "parse_tree.prog_io.c"
    {
#line 2490 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_lookahead_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2493 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2495 "parse_tree.prog_io.c"
  }
#line 2497 "parse_tree.prog_io.c"
}

#line 2500 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001(
#line 2503 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2505 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2507 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2509 "parse_tree.prog_io.c"
{
#line 2511 "parse_tree.prog_io.c"
  {
#line 2513 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2516 "parse_tree.prog_io.c"
    {
#line 2518 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_lookahead_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2521 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2523 "parse_tree.prog_io.c"
  }
#line 2525 "parse_tree.prog_io.c"
}

#line 2528 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001(
#line 2531 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2533 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2535 "parse_tree.prog_io.c"
{
#line 2537 "parse_tree.prog_io.c"
  {
#line 2539 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2542 "parse_tree.prog_io.c"
    {
#line 2544 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2547 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2549 "parse_tree.prog_io.c"
  }
#line 2551 "parse_tree.prog_io.c"
}

#line 2554 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001(
#line 2557 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2559 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2561 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2563 "parse_tree.prog_io.c"
{
#line 2565 "parse_tree.prog_io.c"
  {
#line 2567 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2570 "parse_tree.prog_io.c"
    {
#line 2572 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2575 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2577 "parse_tree.prog_io.c"
  }
#line 2579 "parse_tree.prog_io.c"
}

#line 2582 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001(
#line 2585 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2587 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2589 "parse_tree.prog_io.c"
{
#line 2591 "parse_tree.prog_io.c"
  {
#line 2593 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2596 "parse_tree.prog_io.c"
    {
#line 2598 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2601 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2603 "parse_tree.prog_io.c"
  }
#line 2605 "parse_tree.prog_io.c"
}

#line 2608 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001(
#line 2611 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2613 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2615 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2617 "parse_tree.prog_io.c"
{
#line 2619 "parse_tree.prog_io.c"
  {
#line 2621 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2624 "parse_tree.prog_io.c"
    {
#line 2626 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2629 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2631 "parse_tree.prog_io.c"
  }
#line 2633 "parse_tree.prog_io.c"
}

#line 2636 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001(
#line 2639 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2641 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2643 "parse_tree.prog_io.c"
{
#line 2645 "parse_tree.prog_io.c"
  {
#line 2647 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2650 "parse_tree.prog_io.c"
    {
#line 2652 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____missing_section_start_warning_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2655 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2657 "parse_tree.prog_io.c"
  }
#line 2659 "parse_tree.prog_io.c"
}

#line 2662 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001(
#line 2665 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2667 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2669 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2671 "parse_tree.prog_io.c"
{
#line 2673 "parse_tree.prog_io.c"
  {
#line 2675 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2678 "parse_tree.prog_io.c"
    {
#line 2680 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____missing_section_start_warning_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2683 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2685 "parse_tree.prog_io.c"
  }
#line 2687 "parse_tree.prog_io.c"
}

#line 2690 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0_10001(
#line 2693 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2695 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2697 "parse_tree.prog_io.c"
{
#line 2699 "parse_tree.prog_io.c"
  {
#line 2701 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2704 "parse_tree.prog_io.c"
    {
#line 2706 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_iom_result_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2709 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2711 "parse_tree.prog_io.c"
  }
#line 2713 "parse_tree.prog_io.c"
}

#line 2716 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0_10001(
#line 2719 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2721 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2723 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2725 "parse_tree.prog_io.c"
{
#line 2727 "parse_tree.prog_io.c"
  {
#line 2729 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2732 "parse_tree.prog_io.c"
    {
#line 2734 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_iom_result_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2737 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2739 "parse_tree.prog_io.c"
  }
#line 2741 "parse_tree.prog_io.c"
}

#line 2744 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0_10001(
#line 2747 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2749 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2751 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2753 "parse_tree.prog_io.c"
{
#line 2755 "parse_tree.prog_io.c"
  {
#line 2757 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2760 "parse_tree.prog_io.c"
    {
#line 2762 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2765 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2767 "parse_tree.prog_io.c"
  }
#line 2769 "parse_tree.prog_io.c"
}

#line 2772 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0_10001(
#line 2775 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2777 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 2779 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 2781 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4)
#line 2783 "parse_tree.prog_io.c"
{
#line 2785 "parse_tree.prog_io.c"
  {
#line 2787 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2790 "parse_tree.prog_io.c"
    {
#line 2792 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_3), ((MR_Word) parse_tree__prog_io__wrapper_arg_4));
    }
#line 2795 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2797 "parse_tree.prog_io.c"
  }
#line 2799 "parse_tree.prog_io.c"
}

#line 276 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 276 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 276 "prog_io.m"
{
#line 276 "prog_io.m"
  {
#line 276 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 276 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 276 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 276 "prog_io.m"
    {
#line 276 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 276 "prog_io.m"
      return;
    }
#line 276 "prog_io.m"
  }
#line 276 "prog_io.m"
}

#line 276 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 276 "prog_io.m"
{
#line 276 "prog_io.m"
  {
#line 276 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 276 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 276 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 276 "prog_io.m"
    {
#line 276 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 276 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 276 "prog_io.m"
  }
#line 276 "prog_io.m"
}

#line 280 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 280 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 280 "prog_io.m"
{
#line 280 "prog_io.m"
  {
#line 280 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 280 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 280 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 280 "prog_io.m"
    {
#line 280 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 280 "prog_io.m"
      return;
    }
#line 280 "prog_io.m"
  }
#line 280 "prog_io.m"
}

#line 280 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 280 "prog_io.m"
{
#line 280 "prog_io.m"
  {
#line 280 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 280 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 280 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 280 "prog_io.m"
    {
#line 280 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 280 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 280 "prog_io.m"
  }
#line 280 "prog_io.m"
}

#line 649 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 649 "prog_io.m"
{
#line 656 "prog_io.m"
  {
#line 656 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 706 "prog_io.m"
#line 706 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 706 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 706 "prog_io.m"
      case (MR_Integer) 1:
#line 707 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 706 "prog_io.m"
        break;
#line 706 "prog_io.m"
      case (MR_Integer) 0:
#line 660 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 706 "prog_io.m"
        break;
#line 706 "prog_io.m"
    }
#line 656 "prog_io.m"
    *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 656 "prog_io.m"
    *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 656 "prog_io.m"
  }
#line 649 "prog_io.m"
}

#line 311 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_17,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__MakeDummyParseTree_20,
#line 311 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadParseTree_21,
#line 311 "prog_io.m"
  MR_Box * parse_tree__prog_io__ParseTree_22,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_23,
#line 311 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_24)
#line 311 "prog_io.m"
{
#line 321 "prog_io.m"
  {
#line 321 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 321 "prog_io.m"
    MR_Word parse_tree__prog_io__OldInputStream_26;
#line 321 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenResult_27;
#line 323 "prog_io.m"
    void MR_CALL (* parse_tree__prog_io__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 323 "prog_io.m"
    MR_Box parse_tree__prog_io__conv2_OpenResult_27;
#line 323 "prog_io.m"
    MR_Box parse_tree__prog_io__conv1_STATE_VARIABLE_IO_43_43;

#line 322 "prog_io.m"
    {
#line 322 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__OldInputStream_26);
    }
#line 323 "prog_io.m"
    parse_tree__prog_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_16, (MR_Integer) 1)));
#line 323 "prog_io.m"
    {
#line 323 "prog_io.m"
      parse_tree__prog_io__func_0(((MR_Box) parse_tree__prog_io__OpenFile_16), &parse_tree__prog_io__conv2_OpenResult_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 323 "prog_io.m"
    parse_tree__prog_io__OpenResult_27 = ((MR_Word) parse_tree__prog_io__conv2_OpenResult_27);
#line 364 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__OpenResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 365 "prog_io.m"
      {
#line 365 "prog_io.m"
        MR_String parse_tree__prog_io__ErrorMsg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0)));
#line 365 "prog_io.m"
        MR_String parse_tree__prog_io__Progname_37;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_38;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_39;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_47_47;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_50_50;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_51_51;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_58_58;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;
#line 365 "prog_io.m"
        MR_Word parse_tree__prog_io__V_63_63;
#line 367 "prog_io.m"
        void MR_CALL (* parse_tree__prog_io__func_3)(MR_Box, MR_Box, MR_Box *);

#line 366 "prog_io.m"
        *parse_tree__prog_io__MaybeFileData_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 367 "prog_io.m"
        parse_tree__prog_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MakeDummyParseTree_20, (MR_Integer) 1)));
#line 367 "prog_io.m"
        {
#line 367 "prog_io.m"
          parse_tree__prog_io__func_3(((MR_Box) parse_tree__prog_io__MakeDummyParseTree_20), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22);
        }
#line 368 "prog_io.m"
        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "prog_io.m"
        {
#line 370 "prog_io.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io__Progname_37);
        }
#line 371 "prog_io.m"
        {
#line 371 "prog_io.m"
          parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__Progname_37));
#line 371 "prog_io.m"
        }
#line 371 "prog_io.m"
        {
#line 371 "prog_io.m"
          parse_tree__prog_io__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_36));
#line 371 "prog_io.m"
        }
#line 371 "prog_io.m"
        {
#line 371 "prog_io.m"
          parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io__V_51_51));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 371 "prog_io.m"
        }
#line 371 "prog_io.m"
        {
#line 371 "prog_io.m"
          parse_tree__prog_io__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[73])));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 371 "prog_io.m"
        }
#line 371 "prog_io.m"
        {
#line 371 "prog_io.m"
          parse_tree__prog_io__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_38, 0) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_38, 1) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 371 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_38));
#line 373 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 373 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io__V_58_58));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "prog_io.m"
        }
#line 372 "prog_io.m"
        {
#line 372 "prog_io.m"
          parse_tree__prog_io__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 372 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 2) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 372 "prog_io.m"
        }
#line 374 "prog_io.m"
        {
#line 374 "prog_io.m"
          MR_Word base;
#line 374 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "prog_io.m"
          *parse_tree__prog_io__Specs_23 = base;
#line 374 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_39));
#line 374 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "prog_io.m"
        }
#line 375 "prog_io.m"
        {
#line 375 "prog_io.m"
          *parse_tree__prog_io__Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 365 "prog_io.m"
      }
#line 364 "prog_io.m"
    else
#line 325 "prog_io.m"
      {
#line 325 "prog_io.m"
        MR_Box parse_tree__prog_io__FileData_28 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0));
#line 325 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleInputStream_35;
#line 347 "prog_io.m"
        MR_Word parse_tree__prog_io__OldTimestamp_34;
#line 347 "prog_io.m"
        MR_Word parse_tree__prog_io__V_75_75;
#line 347 "prog_io.m"
        MR_Word parse_tree__prog_io__V_83_83;

#line 326 "prog_io.m"
        {
#line 326 "prog_io.m"
          MR_Word base;
#line 326 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io.m"
          *parse_tree__prog_io__MaybeFileData_17 = base;
#line 326 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io__FileData_28;
#line 326 "prog_io.m"
        }
#line 341 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__ReadModuleAndTimestamps_18)) == (MR_mktag((MR_Integer) 0))))
#line 341 "prog_io.m"
          {
#line 341 "prog_io.m"
            MR_Word parse_tree__prog_io__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReadModuleAndTimestamps_18, (MR_Integer) 0)));

#line 341 "prog_io.m"
#line 341 "prog_io.m"
            switch (parse_tree__prog_io__V_102_102) {
#line 341 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 341 "prog_io.m"
              case (MR_Integer) 0:
#line 330 "prog_io.m"
                {
#line 330 "prog_io.m"
                  MR_String parse_tree__prog_io__InputStreamName_30;
#line 330 "prog_io.m"
                  MR_Word parse_tree__prog_io__TimestampResult_31;

#line 331 "prog_io.m"
                  {
#line 331 "prog_io.m"
                    mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_30);
                  }
#line 332 "prog_io.m"
                  {
#line 332 "prog_io.m"
                    mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_30, &parse_tree__prog_io__TimestampResult_31);
                  }
#line 337 "prog_io.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_31)) == (MR_mktag((MR_Integer) 1))))
#line 338 "prog_io.m"
                    {
#line 338 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_72_72 = (MR_Word) parse_tree__prog_io__TimestampResult_31;

#line 339 "prog_io.m"
                      {
#line 339 "prog_io.m"
                        MR_Word base;
#line 339 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io.m"
                        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 339 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 339 "prog_io.m"
                      }
#line 338 "prog_io.m"
                    }
#line 337 "prog_io.m"
                  else
#line 334 "prog_io.m"
                    {
#line 334 "prog_io.m"
                      MR_Word parse_tree__prog_io__Timestamp_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_31, (MR_Integer) 0)));
#line 334 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_73_73;
#line 334 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_74_74;

#line 336 "prog_io.m"
                      {
#line 336 "prog_io.m"
                        parse_tree__prog_io__V_74_74 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_32);
                      }
#line 336 "prog_io.m"
                      {
#line 336 "prog_io.m"
                        parse_tree__prog_io__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 336 "prog_io.m"
                      }
#line 336 "prog_io.m"
                      {
#line 336 "prog_io.m"
                        MR_Word base;
#line 336 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io.m"
                        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 336 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_73_73));
#line 336 "prog_io.m"
                      }
#line 334 "prog_io.m"
                    }
#line 330 "prog_io.m"
                }
#line 341 "prog_io.m"
                break;
#line 341 "prog_io.m"
              case (MR_Integer) 1:
#line 344 "prog_io.m"
                *parse_tree__prog_io__MaybeModuleTimestampRes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "prog_io.m"
                break;
#line 341 "prog_io.m"
            }
#line 341 "prog_io.m"
          }
#line 341 "prog_io.m"
        else
#line 330 "prog_io.m"
          {
#line 330 "prog_io.m"
            MR_String parse_tree__prog_io__InputStreamName_94;
#line 330 "prog_io.m"
            MR_Word parse_tree__prog_io__TimestampResult_95;

#line 331 "prog_io.m"
            {
#line 331 "prog_io.m"
              mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_94);
            }
#line 332 "prog_io.m"
            {
#line 332 "prog_io.m"
              mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_94, &parse_tree__prog_io__TimestampResult_95);
            }
#line 337 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_95)) == (MR_mktag((MR_Integer) 1))))
#line 338 "prog_io.m"
              {
#line 338 "prog_io.m"
                MR_Word parse_tree__prog_io__V_85_85 = (MR_Word) parse_tree__prog_io__TimestampResult_95;

#line 339 "prog_io.m"
                {
#line 339 "prog_io.m"
                  MR_Word base;
#line 339 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 339 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_85_85));
#line 339 "prog_io.m"
                }
#line 338 "prog_io.m"
              }
#line 337 "prog_io.m"
            else
#line 334 "prog_io.m"
              {
#line 334 "prog_io.m"
                MR_Word parse_tree__prog_io__Timestamp_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_95, (MR_Integer) 0)));
#line 334 "prog_io.m"
                MR_Word parse_tree__prog_io__V_87_87;
#line 334 "prog_io.m"
                MR_Word parse_tree__prog_io__V_88_88;

#line 336 "prog_io.m"
                {
#line 336 "prog_io.m"
                  parse_tree__prog_io__V_88_88 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_86);
                }
#line 336 "prog_io.m"
                {
#line 336 "prog_io.m"
                  parse_tree__prog_io__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io__V_88_88));
#line 336 "prog_io.m"
                }
#line 336 "prog_io.m"
                {
#line 336 "prog_io.m"
                  MR_Word base;
#line 336 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 336 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_87_87));
#line 336 "prog_io.m"
                }
#line 334 "prog_io.m"
              }
#line 330 "prog_io.m"
          }
#line 347 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ReadModuleAndTimestamps_18)) == (MR_mktag((MR_Integer) 1)));
#line 347 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 347 "prog_io.m"
          {
#line 347 "prog_io.m"
            parse_tree__prog_io__OldTimestamp_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadModuleAndTimestamps_18, (MR_Integer) 0)));
#line 348 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_io__MaybeModuleTimestampRes_19)) == (MR_mktag((MR_Integer) 1)));
#line 348 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 348 "prog_io.m"
              {
#line 348 "prog_io.m"
                parse_tree__prog_io__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io__MaybeModuleTimestampRes_19, (MR_Integer) 0)));
#line 348 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_75_75)) == (MR_mktag((MR_Integer) 0)));
#line 348 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 348 "prog_io.m"
                  {
#line 348 "prog_io.m"
                    parse_tree__prog_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, (MR_Integer) 0)));
#line 348 "prog_io.m"
                    {
#line 348 "prog_io.m"
                      parse_tree__prog_io__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__prog_io__OldTimestamp_34, parse_tree__prog_io__V_83_83);
                    }
#line 348 "prog_io.m"
                  }
#line 348 "prog_io.m"
              }
#line 347 "prog_io.m"
          }
#line 358 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 355 "prog_io.m"
          {
#line 355 "prog_io.m"
            void MR_CALL (* parse_tree__prog_io__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MakeDummyParseTree_20, (MR_Integer) 1)));

#line 355 "prog_io.m"
            {
#line 355 "prog_io.m"
              parse_tree__prog_io__func_4(((MR_Box) parse_tree__prog_io__MakeDummyParseTree_20), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22);
            }
#line 356 "prog_io.m"
            *parse_tree__prog_io__Specs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "prog_io.m"
            {
#line 357 "prog_io.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__Errors_24);
            }
#line 355 "prog_io.m"
          }
#line 358 "prog_io.m"
        else
#line 359 "prog_io.m"
          {
#line 359 "prog_io.m"
            void MR_CALL (* parse_tree__prog_io__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReadParseTree_21, (MR_Integer) 1)));
#line 359 "prog_io.m"
            MR_Box parse_tree__prog_io__conv8_Specs_23;
#line 359 "prog_io.m"
            MR_Box parse_tree__prog_io__conv7_Errors_24;
#line 359 "prog_io.m"
            MR_Box parse_tree__prog_io__conv6_STATE_VARIABLE_IO_76_76;

#line 359 "prog_io.m"
            {
#line 359 "prog_io.m"
              parse_tree__prog_io__func_5(((MR_Box) parse_tree__prog_io__ReadParseTree_21), ((MR_Box) (parse_tree__prog_io__Globals_14)), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22, &parse_tree__prog_io__conv8_Specs_23, &parse_tree__prog_io__conv7_Errors_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv6_STATE_VARIABLE_IO_76_76);
            }
#line 359 "prog_io.m"
            *parse_tree__prog_io__Specs_23 = ((MR_Word) parse_tree__prog_io__conv8_Specs_23);
#line 359 "prog_io.m"
            *parse_tree__prog_io__Errors_24 = ((MR_Word) parse_tree__prog_io__conv7_Errors_24);
#line 359 "prog_io.m"
          }
#line 362 "prog_io.m"
        {
#line 362 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__OldInputStream_26, &parse_tree__prog_io__ModuleInputStream_35);
        }
#line 363 "prog_io.m"
        {
#line 363 "prog_io.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io__ModuleInputStream_35);
#line 363 "prog_io.m"
          return;
        }
#line 325 "prog_io.m"
      }
#line 321 "prog_io.m"
  }
#line 311 "prog_io.m"
}

#line 276 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 276 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 276 "prog_io.m"
{
#line 276 "prog_io.m"
  {
#line 276 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 276 "prog_io.m"
    {
#line 276 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 276 "prog_io.m"
      return;
    }
#line 276 "prog_io.m"
  }
#line 276 "prog_io.m"
}

#line 276 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 276 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 276 "prog_io.m"
{
#line 276 "prog_io.m"
  {
#line 276 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 276 "prog_io.m"
    {
#line 276 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 276 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 276 "prog_io.m"
  }
#line 276 "prog_io.m"
}

#line 1435 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1435 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1435 "prog_io.m"
{
#line 1435 "prog_io.m"
  {
#line 1435 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1435 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_73 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1435 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_74 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1435 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_73 == parse_tree__prog_io__CastY_74);
#line 1435 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 3594 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1435 "prog_io.m"
    else
#line 1435 "prog_io.m"
#line 1435 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1435 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "prog_io.m"
        case (MR_Integer) 0:
#line 1435 "prog_io.m"
#line 1435 "prog_io.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1435 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "prog_io.m"
            case (MR_Integer) 0:
#line 1435 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1435 "prog_io.m"
              break;
#line 1435 "prog_io.m"
            case (MR_Integer) 1:
#line 3618 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1435 "prog_io.m"
              break;
#line 1435 "prog_io.m"
            case (MR_Integer) 2:
#line 3624 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1435 "prog_io.m"
              break;
#line 1435 "prog_io.m"
            case (MR_Integer) 3:
#line 3630 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1435 "prog_io.m"
              break;
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
        case (MR_Integer) 1:
#line 1435 "prog_io.m"
          {
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_90_90 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);

#line 1435 "prog_io.m"
#line 1435 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1435 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "prog_io.m"
              case (MR_Integer) 0:
#line 3652 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 1:
#line 1435 "prog_io.m"
                {
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_14_14 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__3_3), (MR_Integer) 1);

#line 1435 "prog_io.m"
                  {
#line 1435 "prog_io.m"
                    parse_tree__error_util____Compare____error_spec_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_90_90, parse_tree__prog_io__V_14_14);
#line 1435 "prog_io.m"
                    return;
                  }
#line 1435 "prog_io.m"
                }
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 2:
#line 3676 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 3:
#line 3682 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
            }
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
        case (MR_Integer) 2:
#line 1435 "prog_io.m"
          {
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1435 "prog_io.m"
#line 1435 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1435 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "prog_io.m"
              case (MR_Integer) 0:
#line 3712 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 1:
#line 3718 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 2:
#line 1435 "prog_io.m"
                {
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 3)));
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_41_41;

#line 1435 "prog_io.m"
                  {
#line 1435 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], &parse_tree__prog_io__V_41_41, ((MR_Box) (parse_tree__prog_io__V_89_89)), ((MR_Box) (parse_tree__prog_io__V_37_37)));
                  }
#line 3742 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_41_41 == (MR_Integer) 0);
#line 1435 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1435 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_41_41;
#line 1435 "prog_io.m"
                  else
#line 1435 "prog_io.m"
                    {
#line 1435 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_42_42;

#line 1435 "prog_io.m"
                      {
#line 1435 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_42_42, ((MR_Box) (parse_tree__prog_io__V_88_88)), ((MR_Box) (parse_tree__prog_io__V_38_38)));
                      }
#line 3762 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_42_42 == (MR_Integer) 0);
#line 1435 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1435 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_42_42;
#line 1435 "prog_io.m"
                      else
#line 1435 "prog_io.m"
                        {
#line 1435 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_43_43;

#line 1435 "prog_io.m"
                          {
#line 1435 "prog_io.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], &parse_tree__prog_io__V_43_43, ((MR_Box) (parse_tree__prog_io__V_87_87)), ((MR_Box) (parse_tree__prog_io__V_39_39)));
                          }
#line 3782 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_43_43 == (MR_Integer) 0);
#line 1435 "prog_io.m"
                          parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1435 "prog_io.m"
                          if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                            *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_43_43;
#line 1435 "prog_io.m"
                          else
#line 1435 "prog_io.m"
                            {
#line 1435 "prog_io.m"
                              {
#line 1435 "prog_io.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[3], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_86_86)), ((MR_Box) (parse_tree__prog_io__V_40_40)));
#line 1435 "prog_io.m"
                                return;
                              }
#line 1435 "prog_io.m"
                            }
#line 1435 "prog_io.m"
                        }
#line 1435 "prog_io.m"
                    }
#line 1435 "prog_io.m"
                }
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 3:
#line 3813 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
            }
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
        case (MR_Integer) 3:
#line 1435 "prog_io.m"
          {
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1435 "prog_io.m"
#line 1435 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1435 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "prog_io.m"
              case (MR_Integer) 0:
#line 3841 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 1:
#line 3847 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 2:
#line 3853 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
              case (MR_Integer) 3:
#line 1435 "prog_io.m"
                {
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1435 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_71_71;

#line 1435 "prog_io.m"
                  {
#line 1435 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], &parse_tree__prog_io__V_71_71, ((MR_Box) (parse_tree__prog_io__V_85_85)), ((MR_Box) (parse_tree__prog_io__V_68_68)));
                  }
#line 3875 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_71_71 == (MR_Integer) 0);
#line 1435 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1435 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_71_71;
#line 1435 "prog_io.m"
                  else
#line 1435 "prog_io.m"
                    {
#line 1435 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_72_72;

#line 1435 "prog_io.m"
                      {
#line 1435 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_72_72, ((MR_Box) (parse_tree__prog_io__V_84_84)), ((MR_Box) (parse_tree__prog_io__V_69_69)));
                      }
#line 3895 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_72_72 == (MR_Integer) 0);
#line 1435 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1435 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_72_72;
#line 1435 "prog_io.m"
                      else
#line 1435 "prog_io.m"
                        {
#line 1435 "prog_io.m"
                          parse_tree__prog_io_item____Compare____item_or_marker_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_83_83, parse_tree__prog_io__V_70_70);
#line 1435 "prog_io.m"
                          return;
                        }
#line 1435 "prog_io.m"
                    }
#line 1435 "prog_io.m"
                }
#line 1435 "prog_io.m"
                break;
#line 1435 "prog_io.m"
            }
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
      }
#line 1435 "prog_io.m"
  }
#line 1435 "prog_io.m"
}

#line 1435 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1435 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1435 "prog_io.m"
{
#line 1435 "prog_io.m"
  {
#line 1435 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1435 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_21 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1435 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_22 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1435 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_21 == parse_tree__prog_io__CastY_22);
#line 1435 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1435 "prog_io.m"
    else
#line 1435 "prog_io.m"
#line 1435 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1435 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1435 "prog_io.m"
        case (MR_Integer) 0:
#line 1435 "prog_io.m"
          {
#line 1435 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1435 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1435 "prog_io.m"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
        case (MR_Integer) 1:
#line 1435 "prog_io.m"
          {
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__1_1), (MR_Integer) 1);
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6;

#line 1435 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1435 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
              {
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);
#line 3994 "parse_tree.prog_io.c"
                {
#line 3996 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__error_util____Unify____error_spec_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_6_6);
                }
#line 1435 "prog_io.m"
              }
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
        case (MR_Integer) 2:
#line 1435 "prog_io.m"
          {
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_26_26;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_27_27;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_28_28;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_29_29;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 3)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_13_13;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_14_14;

#line 1435 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1435 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
              {
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 4048 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 4050 "parse_tree.prog_io.c"
                {
#line 4052 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_io__V_7_7)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
                }
#line 1435 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                  {
#line 4059 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4061 "parse_tree.prog_io.c"
                    {
#line 4063 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_io__V_8_8)), ((MR_Box) (parse_tree__prog_io__V_12_12)));
                    }
#line 1435 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                      {
#line 4070 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 4072 "parse_tree.prog_io.c"
                        {
#line 4074 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_io__V_9_9)), ((MR_Box) (parse_tree__prog_io__V_13_13)));
                        }
#line 1435 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                          {
#line 4081 "parse_tree.prog_io.c"
                            parse_tree__prog_io__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_io_scalar_common_1[3];
#line 4083 "parse_tree.prog_io.c"
                            {
#line 4085 "parse_tree.prog_io.c"
                              return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_io__V_10_10)), ((MR_Box) (parse_tree__prog_io__V_14_14)));
                            }
#line 1435 "prog_io.m"
                          }
#line 1435 "prog_io.m"
                      }
#line 1435 "prog_io.m"
                  }
#line 1435 "prog_io.m"
              }
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
        case (MR_Integer) 3:
#line 1435 "prog_io.m"
          {
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_23_23;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_24_24;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_18_18;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_19_19;
#line 1435 "prog_io.m"
            MR_Word parse_tree__prog_io__V_20_20;

#line 1435 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1435 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
              {
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1435 "prog_io.m"
                parse_tree__prog_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 4133 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 4135 "parse_tree.prog_io.c"
                {
#line 4137 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_23_23, ((MR_Box) (parse_tree__prog_io__V_15_15)), ((MR_Box) (parse_tree__prog_io__V_18_18)));
                }
#line 1435 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1435 "prog_io.m"
                  {
#line 4144 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_24_24 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4146 "parse_tree.prog_io.c"
                    {
#line 4148 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_24_24, ((MR_Box) (parse_tree__prog_io__V_16_16)), ((MR_Box) (parse_tree__prog_io__V_19_19)));
                    }
#line 1435 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 4153 "parse_tree.prog_io.c"
                      {
#line 4155 "parse_tree.prog_io.c"
                        return parse_tree__prog_io__succeeded = parse_tree__prog_io_item____Unify____item_or_marker_0_0(parse_tree__prog_io__V_17_17, parse_tree__prog_io__V_20_20);
                      }
#line 1435 "prog_io.m"
                  }
#line 1435 "prog_io.m"
              }
#line 1435 "prog_io.m"
          }
#line 1435 "prog_io.m"
          break;
#line 1435 "prog_io.m"
      }
#line 1435 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1435 "prog_io.m"
  }
#line 1435 "prog_io.m"
}

#line 199 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0(
#line 199 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 199 "prog_io.m"
{
#line 199 "prog_io.m"
  {
#line 199 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 199 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 199 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 199 "prog_io.m"
    {
#line 199 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 199 "prog_io.m"
      return;
    }
#line 199 "prog_io.m"
  }
#line 199 "prog_io.m"
}

#line 199 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0(
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 199 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 199 "prog_io.m"
{
#line 4216 "parse_tree.prog_io.c"
  {
#line 4218 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 4221 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 4223 "parse_tree.prog_io.c"
  }
#line 199 "prog_io.m"
}

#line 1130 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(
#line 1130 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1130 "prog_io.m"
{
#line 1130 "prog_io.m"
  {
#line 1130 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1130 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1130 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1130 "prog_io.m"
    {
#line 1130 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 1130 "prog_io.m"
      return;
    }
#line 1130 "prog_io.m"
  }
#line 1130 "prog_io.m"
}

#line 1130 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 1130 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1130 "prog_io.m"
{
#line 4269 "parse_tree.prog_io.c"
  {
#line 4271 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 4274 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 4276 "parse_tree.prog_io.c"
  }
#line 1130 "prog_io.m"
}

#line 1134 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1134 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1134 "prog_io.m"
{
#line 1134 "prog_io.m"
  {
#line 1134 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1134 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_36 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1134 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_37 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1134 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_36 == parse_tree__prog_io__CastY_37);
#line 1134 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4305 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1134 "prog_io.m"
    else
#line 1134 "prog_io.m"
#line 1134 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1134 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "prog_io.m"
        case (MR_Integer) 0:
#line 1134 "prog_io.m"
          {
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1134 "prog_io.m"
#line 1134 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1134 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "prog_io.m"
              case (MR_Integer) 0:
#line 1134 "prog_io.m"
                {
#line 1134 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 1134 "prog_io.m"
                  {
#line 1134 "prog_io.m"
                    parse_tree__prog_io____Compare____maybe_lookahead_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_43_43, parse_tree__prog_io__V_5_5);
#line 1134 "prog_io.m"
                    return;
                  }
#line 1134 "prog_io.m"
                }
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
              case (MR_Integer) 1:
#line 4346 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
              case (MR_Integer) 2:
#line 4352 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
            }
#line 1134 "prog_io.m"
          }
#line 1134 "prog_io.m"
          break;
#line 1134 "prog_io.m"
        case (MR_Integer) 1:
#line 1134 "prog_io.m"
          {
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1134 "prog_io.m"
#line 1134 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1134 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "prog_io.m"
              case (MR_Integer) 0:
#line 4378 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
              case (MR_Integer) 1:
#line 1134 "prog_io.m"
                {
#line 1134 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1134 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1134 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_19_19;

#line 1134 "prog_io.m"
                  {
#line 1134 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_19_19, parse_tree__prog_io__V_47_47, parse_tree__prog_io__V_17_17);
                  }
#line 4398 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_19_19 == (MR_Integer) 0);
#line 1134 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1134 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1134 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_19_19;
#line 1134 "prog_io.m"
                  else
#line 1134 "prog_io.m"
                    {
#line 1134 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_46_46, parse_tree__prog_io__V_18_18);
#line 1134 "prog_io.m"
                      return;
                    }
#line 1134 "prog_io.m"
                }
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
              case (MR_Integer) 2:
#line 4421 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
            }
#line 1134 "prog_io.m"
          }
#line 1134 "prog_io.m"
          break;
#line 1134 "prog_io.m"
        case (MR_Integer) 2:
#line 1134 "prog_io.m"
          {
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1134 "prog_io.m"
#line 1134 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1134 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "prog_io.m"
              case (MR_Integer) 0:
#line 4447 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
              case (MR_Integer) 1:
#line 4453 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
              case (MR_Integer) 2:
#line 1134 "prog_io.m"
                {
#line 1134 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1134 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1134 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_35_35;

#line 1134 "prog_io.m"
                  {
#line 1134 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_35_35, parse_tree__prog_io__V_45_45, parse_tree__prog_io__V_33_33);
                  }
#line 4473 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_35_35 == (MR_Integer) 0);
#line 1134 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1134 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1134 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_35_35;
#line 1134 "prog_io.m"
                  else
#line 1134 "prog_io.m"
                    {
#line 1134 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_44_44, parse_tree__prog_io__V_34_34);
#line 1134 "prog_io.m"
                      return;
                    }
#line 1134 "prog_io.m"
                }
#line 1134 "prog_io.m"
                break;
#line 1134 "prog_io.m"
            }
#line 1134 "prog_io.m"
          }
#line 1134 "prog_io.m"
          break;
#line 1134 "prog_io.m"
      }
#line 1134 "prog_io.m"
  }
#line 1134 "prog_io.m"
}

#line 1134 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1134 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1134 "prog_io.m"
{
#line 1134 "prog_io.m"
  {
#line 1134 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1134 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1134 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1134 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1134 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1134 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1134 "prog_io.m"
    else
#line 1134 "prog_io.m"
#line 1134 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1134 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "prog_io.m"
        case (MR_Integer) 0:
#line 1134 "prog_io.m"
          {
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_4_4;

#line 1134 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1134 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1134 "prog_io.m"
              {
#line 1134 "prog_io.m"
                parse_tree__prog_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 4555 "parse_tree.prog_io.c"
                {
#line 4557 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_lookahead_0_0(parse_tree__prog_io__V_3_3, parse_tree__prog_io__V_4_4);
                }
#line 1134 "prog_io.m"
              }
#line 1134 "prog_io.m"
          }
#line 1134 "prog_io.m"
          break;
#line 1134 "prog_io.m"
        case (MR_Integer) 1:
#line 1134 "prog_io.m"
          {
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7;
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 1134 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1134 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1134 "prog_io.m"
              {
#line 1134 "prog_io.m"
                parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1134 "prog_io.m"
                parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 4589 "parse_tree.prog_io.c"
                {
#line 4591 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_7_7);
                }
#line 1134 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 4596 "parse_tree.prog_io.c"
                  {
#line 4598 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_6_6, parse_tree__prog_io__V_8_8);
                  }
#line 1134 "prog_io.m"
              }
#line 1134 "prog_io.m"
          }
#line 1134 "prog_io.m"
          break;
#line 1134 "prog_io.m"
        case (MR_Integer) 2:
#line 1134 "prog_io.m"
          {
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1134 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1134 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1134 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1134 "prog_io.m"
              {
#line 1134 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1134 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 4630 "parse_tree.prog_io.c"
                {
#line 4632 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_9_9, parse_tree__prog_io__V_11_11);
                }
#line 1134 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 4637 "parse_tree.prog_io.c"
                  {
#line 4639 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_10_10, parse_tree__prog_io__V_12_12);
                  }
#line 1134 "prog_io.m"
              }
#line 1134 "prog_io.m"
          }
#line 1134 "prog_io.m"
          break;
#line 1134 "prog_io.m"
      }
#line 1134 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1134 "prog_io.m"
  }
#line 1134 "prog_io.m"
}

#line 1412 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1412 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1412 "prog_io.m"
{
#line 1412 "prog_io.m"
  {
#line 1412 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1412 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1412 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1412 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1412 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4681 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1412 "prog_io.m"
    else
#line 1412 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1412 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1412 "prog_io.m"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1412 "prog_io.m"
      else
#line 4693 "parse_tree.prog_io.c"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1412 "prog_io.m"
    else
#line 1412 "prog_io.m"
      {
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1412 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4706 "parse_tree.prog_io.c"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1412 "prog_io.m"
        else
#line 1412 "prog_io.m"
          {
#line 1412 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1412 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1412 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1412 "prog_io.m"
            {
#line 1412 "prog_io.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], &parse_tree__prog_io__V_12_12, ((MR_Box) (parse_tree__prog_io__V_18_18)), ((MR_Box) (parse_tree__prog_io__V_10_10)));
            }
#line 4724 "parse_tree.prog_io.c"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_12_12 == (MR_Integer) 0);
#line 1412 "prog_io.m"
            parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1412 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1412 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_12_12;
#line 1412 "prog_io.m"
            else
#line 1412 "prog_io.m"
              {
#line 1412 "prog_io.m"
                {
#line 1412 "prog_io.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_17_17)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
#line 1412 "prog_io.m"
                  return;
                }
#line 1412 "prog_io.m"
              }
#line 1412 "prog_io.m"
          }
#line 1412 "prog_io.m"
      }
#line 1412 "prog_io.m"
  }
#line 1412 "prog_io.m"
}

#line 1412 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1412 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1412 "prog_io.m"
{
#line 1412 "prog_io.m"
  {
#line 1412 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1412 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1412 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1412 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 1412 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1412 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1412 "prog_io.m"
    else
#line 1412 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1412 "prog_io.m"
      {
#line 1412 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1412 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1412 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1412 "prog_io.m"
      }
#line 1412 "prog_io.m"
    else
#line 1412 "prog_io.m"
      {
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_11_11;
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_12_12;
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__V_7_7;
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__V_8_8;

#line 1412 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1412 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1412 "prog_io.m"
          {
#line 1412 "prog_io.m"
            parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1412 "prog_io.m"
            parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 4820 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 4822 "parse_tree.prog_io.c"
            {
#line 4824 "parse_tree.prog_io.c"
              parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_11_11, ((MR_Box) (parse_tree__prog_io__V_5_5)), ((MR_Box) (parse_tree__prog_io__V_7_7)));
            }
#line 1412 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1412 "prog_io.m"
              {
#line 4831 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4833 "parse_tree.prog_io.c"
                {
#line 4835 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io__V_6_6)), ((MR_Box) (parse_tree__prog_io__V_8_8)));
                }
#line 1412 "prog_io.m"
              }
#line 1412 "prog_io.m"
          }
#line 1412 "prog_io.m"
      }
#line 1412 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1412 "prog_io.m"
  }
#line 1412 "prog_io.m"
}

#line 280 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 280 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 280 "prog_io.m"
{
#line 280 "prog_io.m"
  {
#line 280 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 280 "prog_io.m"
    {
#line 280 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 280 "prog_io.m"
      return;
    }
#line 280 "prog_io.m"
  }
#line 280 "prog_io.m"
}

#line 280 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 280 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 280 "prog_io.m"
{
#line 280 "prog_io.m"
  {
#line 280 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 280 "prog_io.m"
    {
#line 280 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 280 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 280 "prog_io.m"
  }
#line 280 "prog_io.m"
}

#line 1551 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1551 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1551 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1551 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20)
#line 1551 "prog_io.m"
{
#line 1555 "prog_io.m"
  {
#line 1555 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_11;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__Error_12;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_16;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__V_44_44;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__V_46_46;
#line 1555 "prog_io.m"
    MR_Word parse_tree__prog_io__V_47_47;

#line 1556 "prog_io.m"
    {
#line 1556 "prog_io.m"
      parse_tree__prog_io__Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_8);
    }
#line 1562 "prog_io.m"
#line 1562 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__FileKind_7)) {
#line 1562 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1562 "prog_io.m"
      case (MR_Integer) 0:
#line 1558 "prog_io.m"
        {
#line 1559 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 4;
#line 1560 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[49]);
#line 1558 "prog_io.m"
        }
#line 1562 "prog_io.m"
        break;
#line 1562 "prog_io.m"
      case (MR_Integer) 1:
#line 1563 "prog_io.m"
        {
#line 1564 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1565 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[43]);
#line 1563 "prog_io.m"
        }
#line 1562 "prog_io.m"
        break;
#line 1562 "prog_io.m"
      case (MR_Integer) 2:
#line 1567 "prog_io.m"
        {
#line 1568 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1569 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[45]);
#line 1567 "prog_io.m"
        }
#line 1562 "prog_io.m"
        break;
#line 1562 "prog_io.m"
    }
#line 1572 "prog_io.m"
    {
#line 1572 "prog_io.m"
      parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1572 "prog_io.m"
    }
#line 1572 "prog_io.m"
    {
#line 1572 "prog_io.m"
      parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1572 "prog_io.m"
    }
#line 1572 "prog_io.m"
    {
#line 1572 "prog_io.m"
      parse_tree__prog_io__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Context_11));
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1572 "prog_io.m"
    }
#line 1572 "prog_io.m"
    {
#line 1572 "prog_io.m"
      parse_tree__prog_io__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1572 "prog_io.m"
    }
#line 1571 "prog_io.m"
    {
#line 1571 "prog_io.m"
      parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1571 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1571 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1571 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 1571 "prog_io.m"
    }
#line 1573 "prog_io.m"
    {
#line 1573 "prog_io.m"
      MR_Word base;
#line 1573 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1573 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_16));
#line 1573 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1573 "prog_io.m"
    }
#line 1574 "prog_io.m"
    {
#line 1574 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) (parse_tree__prog_io__Error_12)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_19, parse_tree__prog_io__STATE_VARIABLE_Errors_20);
#line 1574 "prog_io.m"
      return;
    }
#line 1555 "prog_io.m"
  }
#line 1551 "prog_io.m"
}

#line 1525 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1525 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1525 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1525 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1525 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33)
#line 1525 "prog_io.m"
{
#line 1531 "prog_io.m"
  {
#line 1531 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1531 "prog_io.m"
    MR_Word parse_tree__prog_io__IOMResult_20;
#line 1532 "prog_io.m"
    MR_Word parse_tree__prog_io___SeqNumCounter_21;

#line 1532 "prog_io.m"
    {
#line 1532 "prog_io.m"
      parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__FinalLookAhead_14, parse_tree__prog_io__ModuleName_12, parse_tree__prog_io__SourceFileName_15, &parse_tree__prog_io__IOMResult_20, parse_tree__prog_io__SeqNumCounter0_16, &parse_tree__prog_io___SeqNumCounter_21);
    }
#line 1536 "prog_io.m"
#line 1536 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__IOMResult_20)) {
#line 1536 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1536 "prog_io.m"
      case (MR_Integer) 0:
#line 1535 "prog_io.m"
        {
#line 1535 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_30;
#line 1535 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_33 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_32;
#line 1535 "prog_io.m"
        }
#line 1536 "prog_io.m"
        break;
#line 1536 "prog_io.m"
      case (MR_Integer) 1:
#line 1537 "prog_io.m"
        {
#line 1537 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpec_22 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__IOMResult_20), (MR_Integer) 1);

#line 1538 "prog_io.m"
          {
#line 1538 "prog_io.m"
            MR_Word base;
#line 1538 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = base;
#line 1538 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_22));
#line 1538 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_30));
#line 1538 "prog_io.m"
          }
#line 1539 "prog_io.m"
          {
#line 1539 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1539 "prog_io.m"
            return;
          }
#line 1537 "prog_io.m"
        }
#line 1536 "prog_io.m"
        break;
#line 1536 "prog_io.m"
      case (MR_Integer) 2:
#line 1542 "prog_io.m"
        {
#line 1542 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1542 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpecs_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));
#line 1542 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemErrors_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 3)));
#line 1542 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_39_39;
#line 1542 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_40_40;
#line 1541 "prog_io.m"
          MR_Word parse_tree__prog_io___VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));

#line 1543 "prog_io.m"
          {
#line 1543 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_25, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30);
          }
#line 1544 "prog_io.m"
          {
#line 1544 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Errors_40_40 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__ItemErrors_26);
          }
#line 1545 "prog_io.m"
          {
#line 1545 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__Term_24, parse_tree__prog_io__STATE_VARIABLE_Specs_39_39, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_40_40, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1545 "prog_io.m"
            return;
          }
#line 1542 "prog_io.m"
        }
#line 1536 "prog_io.m"
        break;
#line 1536 "prog_io.m"
      case (MR_Integer) 3:
#line 1547 "prog_io.m"
        {
#line 1547 "prog_io.m"
          MR_Word parse_tree__prog_io__IOMTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1547 "prog_io.m"
          MR_Word parse_tree__prog_io___IOMVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));
#line 1547 "prog_io.m"
          MR_Word parse_tree__prog_io___IOM_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));

#line 1548 "prog_io.m"
          {
#line 1548 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__IOMTerm_28, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1548 "prog_io.m"
            return;
          }
#line 1547 "prog_io.m"
        }
#line 1536 "prog_io.m"
        break;
#line 1536 "prog_io.m"
    }
#line 1531 "prog_io.m"
  }
#line 1525 "prog_io.m"
}

#line 1497 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1497 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1497 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1497 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19)
#line 1497 "prog_io.m"
{
#line 1502 "prog_io.m"
  {
#line 1502 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__Msgs_14;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_15;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_22_22;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_28_28;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_30_30;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_38_38;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_41_41;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_42_42;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_49_49;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_53_53;
#line 1502 "prog_io.m"
    MR_Word parse_tree__prog_io__V_54_54;

#line 1505 "prog_io.m"
    {
#line 1505 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io__Expected_9));
#line 1505 "prog_io.m"
    }
#line 1506 "prog_io.m"
    {
#line 1506 "prog_io.m"
      parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1506 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io__Actual_10));
#line 1506 "prog_io.m"
    }
#line 1506 "prog_io.m"
    {
#line 1506 "prog_io.m"
      parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1506 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1506 "prog_io.m"
    }
#line 1506 "prog_io.m"
    {
#line 1506 "prog_io.m"
      parse_tree__prog_io__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[54])));
#line 1506 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1506 "prog_io.m"
    }
#line 1505 "prog_io.m"
    {
#line 1505 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[53])));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1505 "prog_io.m"
    }
#line 1505 "prog_io.m"
    {
#line 1505 "prog_io.m"
      parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1505 "prog_io.m"
    }
#line 1505 "prog_io.m"
    {
#line 1505 "prog_io.m"
      parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[52])));
#line 1505 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1505 "prog_io.m"
    }
#line 1504 "prog_io.m"
    {
#line 1504 "prog_io.m"
      parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1504 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1504 "prog_io.m"
    }
#line 1504 "prog_io.m"
    {
#line 1504 "prog_io.m"
      parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[72])));
#line 1504 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1504 "prog_io.m"
    }
#line 1504 "prog_io.m"
    {
#line 1504 "prog_io.m"
      parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[71])));
#line 1504 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1504 "prog_io.m"
    }
#line 1503 "prog_io.m"
    {
#line 1503 "prog_io.m"
      parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[70])));
#line 1503 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 1) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1503 "prog_io.m"
    }
#line 1507 "prog_io.m"
    {
#line 1507 "prog_io.m"
      parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1507 "prog_io.m"
    }
#line 1507 "prog_io.m"
    {
#line 1507 "prog_io.m"
      parse_tree__prog_io__Msgs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1507 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1507 "prog_io.m"
    }
#line 1509 "prog_io.m"
    {
#line 1509 "prog_io.m"
      parse_tree__prog_io__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_8));
#line 1509 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io__Msgs_14));
#line 1509 "prog_io.m"
    }
#line 1509 "prog_io.m"
    {
#line 1509 "prog_io.m"
      parse_tree__prog_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io__V_54_54));
#line 1509 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1509 "prog_io.m"
    }
#line 1508 "prog_io.m"
    {
#line 1508 "prog_io.m"
      parse_tree__prog_io__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1508 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1508 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_53_53));
#line 1508 "prog_io.m"
    }
#line 1510 "prog_io.m"
    {
#line 1510 "prog_io.m"
      MR_Word base;
#line 1510 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_17 = base;
#line 1510 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_15));
#line 1510 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_16));
#line 1510 "prog_io.m"
    }
#line 1511 "prog_io.m"
    {
#line 1511 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_18, parse_tree__prog_io__STATE_VARIABLE_Errors_19);
#line 1511 "prog_io.m"
      return;
    }
#line 1502 "prog_io.m"
  }
#line 1497 "prog_io.m"
}

#line 1483 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1483 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1483 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1483 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1483 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1483 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15)
#line 1483 "prog_io.m"
{
#line 1487 "prog_io.m"
  {
#line 1487 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1487 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_11;
#line 1487 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1487 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;

#line 1493 "prog_io.m"
    {
#line 1493 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_6));
#line 1493 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[69])));
#line 1493 "prog_io.m"
    }
#line 1493 "prog_io.m"
    {
#line 1493 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1493 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "prog_io.m"
    }
#line 1492 "prog_io.m"
    {
#line 1492 "prog_io.m"
      parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1492 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1492 "prog_io.m"
    }
#line 1494 "prog_io.m"
    {
#line 1494 "prog_io.m"
      MR_Word base;
#line 1494 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_13 = base;
#line 1494 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 1494 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_12));
#line 1494 "prog_io.m"
    }
#line 1495 "prog_io.m"
    {
#line 1495 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_14, parse_tree__prog_io__STATE_VARIABLE_Errors_15);
#line 1495 "prog_io.m"
      return;
    }
#line 1487 "prog_io.m"
  }
#line 1483 "prog_io.m"
}

#line 1442 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1442 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1442 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1442 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1442 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1442 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1442 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11)
#line 1442 "prog_io.m"
{
#line 1450 "prog_io.m"
  {
#line 1450 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1450 "prog_io.m"
#line 1450 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_9)) {
#line 1450 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "prog_io.m"
      case (MR_Integer) 0:
#line 1450 "prog_io.m"
        {
#line 1451 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1450 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1450 "prog_io.m"
        }
#line 1450 "prog_io.m"
        break;
#line 1450 "prog_io.m"
      case (MR_Integer) 1:
#line 1453 "prog_io.m"
        {
#line 1453 "prog_io.m"
          MR_String parse_tree__prog_io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1453 "prog_io.m"
          MR_Integer parse_tree__prog_io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__Context_15;
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_16;
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__V_22_22;
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__V_31_31;
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__V_32_32;
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__V_33_33;
#line 1453 "prog_io.m"
          MR_Word parse_tree__prog_io__V_34_34;

#line 1455 "prog_io.m"
          {
#line 1455 "prog_io.m"
            parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1455 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_12));
#line 1455 "prog_io.m"
          }
#line 1455 "prog_io.m"
          {
#line 1455 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1455 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1455 "prog_io.m"
          }
#line 1456 "prog_io.m"
          {
#line 1456 "prog_io.m"
            parse_tree__prog_io__Context_15 = mercury__term__context_init_2_f_0(parse_tree__prog_io__FileName_8, parse_tree__prog_io__LineNumber_13);
          }
#line 1458 "prog_io.m"
          {
#line 1458 "prog_io.m"
            parse_tree__prog_io__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 1458 "prog_io.m"
          }
#line 1458 "prog_io.m"
          {
#line 1458 "prog_io.m"
            parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1458 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io.m"
          }
#line 1458 "prog_io.m"
          {
#line 1458 "prog_io.m"
            parse_tree__prog_io__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 1458 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1458 "prog_io.m"
          }
#line 1458 "prog_io.m"
          {
#line 1458 "prog_io.m"
            parse_tree__prog_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1458 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io.m"
          }
#line 1457 "prog_io.m"
          {
#line 1457 "prog_io.m"
            parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1457 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1457 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_31_31));
#line 1457 "prog_io.m"
          }
#line 1459 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_16);
#line 1453 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1453 "prog_io.m"
        }
#line 1450 "prog_io.m"
        break;
#line 1450 "prog_io.m"
      case (MR_Integer) 2:
#line 1461 "prog_io.m"
        {
#line 1461 "prog_io.m"
          MR_Word parse_tree__prog_io__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1461 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1461 "prog_io.m"
          MR_Integer parse_tree__prog_io__SeqNum_44;
#line 1461 "prog_io.m"
          MR_Word parse_tree__prog_io__MaybeItemOrMarker_45;

#line 1470 "prog_io.m"
          {
#line 1470 "prog_io.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_44, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20);
          }
#line 1471 "prog_io.m"
          {
#line 1471 "prog_io.m"
            parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_7, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__Term_18, parse_tree__prog_io__SeqNum_44, &parse_tree__prog_io__MaybeItemOrMarker_45);
          }
#line 1475 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_45)) == (MR_mktag((MR_Integer) 0))))
#line 1476 "prog_io.m"
            {
#line 1476 "prog_io.m"
              MR_Word parse_tree__prog_io__Specs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));
#line 1476 "prog_io.m"
              MR_Word parse_tree__prog_io__V_49_49;

#line 1478 "prog_io.m"
              {
#line 1478 "prog_io.m"
                parse_tree__prog_io__V_49_49 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
              }
#line 1477 "prog_io.m"
              {
#line 1477 "prog_io.m"
                MR_Word base;
#line 1477 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1477 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1477 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1477 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_47));
#line 1477 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1477 "prog_io.m"
              }
#line 1476 "prog_io.m"
            }
#line 1475 "prog_io.m"
          else
#line 1473 "prog_io.m"
            {
#line 1473 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemOrMarker_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));

#line 1474 "prog_io.m"
              {
#line 1474 "prog_io.m"
                MR_Word base;
#line 1474 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1474 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1474 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1474 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_46));
#line 1474 "prog_io.m"
              }
#line 1473 "prog_io.m"
            }
#line 1461 "prog_io.m"
        }
#line 1450 "prog_io.m"
        break;
#line 1450 "prog_io.m"
    }
#line 1450 "prog_io.m"
  }
#line 1442 "prog_io.m"
}

#line 1416 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1416 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1416 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1416 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1416 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1416 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1416 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19)
#line 1416 "prog_io.m"
{
#line 1423 "prog_io.m"
  {
#line 1423 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1423 "prog_io.m"
    if ((parse_tree__prog_io__InitLookAhead_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1423 "prog_io.m"
      {
#line 1423 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadTermResult_15;

#line 1424 "prog_io.m"
        {
#line 1424 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__SourceFileName_11, &parse_tree__prog_io__ReadTermResult_15);
        }
#line 1450 "prog_io.m"
#line 1450 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_15)) {
#line 1450 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "prog_io.m"
          case (MR_Integer) 0:
#line 1450 "prog_io.m"
            {
#line 1451 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1450 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1450 "prog_io.m"
            }
#line 1450 "prog_io.m"
            break;
#line 1450 "prog_io.m"
          case (MR_Integer) 1:
#line 1453 "prog_io.m"
            {
#line 1453 "prog_io.m"
              MR_String parse_tree__prog_io__ErrorMsg_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1453 "prog_io.m"
              MR_Integer parse_tree__prog_io__LineNumber_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_50;
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_51;
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_52;
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__V_56_56;
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__V_65_65;
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__V_66_66;
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__V_67_67;
#line 1453 "prog_io.m"
              MR_Word parse_tree__prog_io__V_68_68;

#line 1455 "prog_io.m"
              {
#line 1455 "prog_io.m"
                parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1455 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_48));
#line 1455 "prog_io.m"
              }
#line 1455 "prog_io.m"
              {
#line 1455 "prog_io.m"
                parse_tree__prog_io__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1455 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1455 "prog_io.m"
              }
#line 1456 "prog_io.m"
              {
#line 1456 "prog_io.m"
                parse_tree__prog_io__Context_51 = mercury__term__context_init_2_f_0(parse_tree__prog_io__SourceFileName_11, parse_tree__prog_io__LineNumber_49);
              }
#line 1458 "prog_io.m"
              {
#line 1458 "prog_io.m"
                parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_50));
#line 1458 "prog_io.m"
              }
#line 1458 "prog_io.m"
              {
#line 1458 "prog_io.m"
                parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1458 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io.m"
              }
#line 1458 "prog_io.m"
              {
#line 1458 "prog_io.m"
                parse_tree__prog_io__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io__Context_51));
#line 1458 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1458 "prog_io.m"
              }
#line 1458 "prog_io.m"
              {
#line 1458 "prog_io.m"
                parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io__V_66_66));
#line 1458 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io.m"
              }
#line 1457 "prog_io.m"
              {
#line 1457 "prog_io.m"
                parse_tree__prog_io__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1457 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1457 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 2) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1457 "prog_io.m"
              }
#line 1459 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_52);
#line 1453 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1453 "prog_io.m"
            }
#line 1450 "prog_io.m"
            break;
#line 1450 "prog_io.m"
          case (MR_Integer) 2:
#line 1461 "prog_io.m"
            {
#line 1461 "prog_io.m"
              MR_Word parse_tree__prog_io__VarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1461 "prog_io.m"
              MR_Word parse_tree__prog_io__Term_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1461 "prog_io.m"
              MR_Integer parse_tree__prog_io__SeqNum_78;
#line 1461 "prog_io.m"
              MR_Word parse_tree__prog_io__MaybeItemOrMarker_79;

#line 1470 "prog_io.m"
              {
#line 1470 "prog_io.m"
                mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_78, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
              }
#line 1471 "prog_io.m"
              {
#line 1471 "prog_io.m"
                parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__VarSet_53, parse_tree__prog_io__Term_54, parse_tree__prog_io__SeqNum_78, &parse_tree__prog_io__MaybeItemOrMarker_79);
              }
#line 1475 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_79)) == (MR_mktag((MR_Integer) 0))))
#line 1476 "prog_io.m"
                {
#line 1476 "prog_io.m"
                  MR_Word parse_tree__prog_io__Specs_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));
#line 1476 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_83_83;

#line 1478 "prog_io.m"
                  {
#line 1478 "prog_io.m"
                    parse_tree__prog_io__V_83_83 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
                  }
#line 1477 "prog_io.m"
                  {
#line 1477 "prog_io.m"
                    MR_Word base;
#line 1477 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1477 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1477 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1477 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_81));
#line 1477 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1477 "prog_io.m"
                  }
#line 1476 "prog_io.m"
                }
#line 1475 "prog_io.m"
              else
#line 1473 "prog_io.m"
                {
#line 1473 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemOrMarker_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));

#line 1474 "prog_io.m"
                  {
#line 1474 "prog_io.m"
                    MR_Word base;
#line 1474 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1474 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1474 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1474 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_80));
#line 1474 "prog_io.m"
                  }
#line 1473 "prog_io.m"
                }
#line 1461 "prog_io.m"
            }
#line 1450 "prog_io.m"
            break;
#line 1450 "prog_io.m"
        }
#line 1423 "prog_io.m"
      }
#line 1423 "prog_io.m"
    else
#line 1428 "prog_io.m"
      {
#line 1428 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 0)));
#line 1428 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 1)));
#line 1428 "prog_io.m"
        MR_Integer parse_tree__prog_io__SeqNum_33;
#line 1428 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeItemOrMarker_34;

#line 1470 "prog_io.m"
        {
#line 1470 "prog_io.m"
          mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
        }
#line 1471 "prog_io.m"
        {
#line 1471 "prog_io.m"
          parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__LookAheadVarSet_16, parse_tree__prog_io__LookAheadTerm_17, parse_tree__prog_io__SeqNum_33, &parse_tree__prog_io__MaybeItemOrMarker_34);
        }
#line 1475 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_34)) == (MR_mktag((MR_Integer) 0))))
#line 1476 "prog_io.m"
          {
#line 1476 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));
#line 1476 "prog_io.m"
            MR_Word parse_tree__prog_io__V_38_38;

#line 1478 "prog_io.m"
            {
#line 1478 "prog_io.m"
              parse_tree__prog_io__V_38_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
            }
#line 1477 "prog_io.m"
            {
#line 1477 "prog_io.m"
              MR_Word base;
#line 1477 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1477 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1477 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1477 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_36));
#line 1477 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1477 "prog_io.m"
            }
#line 1476 "prog_io.m"
          }
#line 1475 "prog_io.m"
        else
#line 1473 "prog_io.m"
          {
#line 1473 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemOrMarker_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));

#line 1474 "prog_io.m"
            {
#line 1474 "prog_io.m"
              MR_Word base;
#line 1474 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1474 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1474 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1474 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_35));
#line 1474 "prog_io.m"
            }
#line 1473 "prog_io.m"
          }
#line 1428 "prog_io.m"
      }
#line 1423 "prog_io.m"
  }
#line 1416 "prog_io.m"
}

#line 1367 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1367 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1367 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1367 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1367 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29)
#line 1367 "prog_io.m"
{
#line 1373 "prog_io.m"
  {
#line 1373 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1373 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeWarning_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 0)));
#line 1373 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 1)));
#line 1373 "prog_io.m"
    MR_Integer parse_tree__prog_io__NothingSeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 2)));

#line 1379 "prog_io.m"
    if ((parse_tree__prog_io__MaybeWarning_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1376 "prog_io.m"
      {
#line 1378 "prog_io.m"
        {
#line 1378 "prog_io.m"
          MR_Word base;
#line 1378 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1378 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1378 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__ItemNothingInfo_9));
#line 1378 "prog_io.m"
        }
#line 1376 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1376 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1376 "prog_io.m"
      }
#line 1379 "prog_io.m"
    else
#line 1380 "prog_io.m"
      {
#line 1380 "prog_io.m"
        MR_Word parse_tree__prog_io__Warning_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWarning_13, (MR_Integer) 0)));
#line 1380 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeOption_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 0)));
#line 1380 "prog_io.m"
        MR_String parse_tree__prog_io__Msg_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 1)));
#line 1380 "prog_io.m"
        MR_Word parse_tree__prog_io__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 2)));
#line 1380 "prog_io.m"
        MR_Word parse_tree__prog_io__Warn_21;
#line 1380 "prog_io.m"
        MR_Word parse_tree__prog_io__NoWarnItemNothingInfo_25;

#line 1385 "prog_io.m"
        if ((parse_tree__prog_io__MaybeOption_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1387 "prog_io.m"
          parse_tree__prog_io__Warn_21 = (MR_Integer) 1;
#line 1385 "prog_io.m"
        else
#line 1383 "prog_io.m"
          {
#line 1383 "prog_io.m"
            MR_Word parse_tree__prog_io__Option_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOption_17, (MR_Integer) 0)));

#line 1384 "prog_io.m"
            {
#line 1384 "prog_io.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__Option_20, &parse_tree__prog_io__Warn_21);
            }
#line 1383 "prog_io.m"
          }
#line 1403 "prog_io.m"
#line 1403 "prog_io.m"
        switch (parse_tree__prog_io__Warn_21) {
#line 1403 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1403 "prog_io.m"
          case (MR_Integer) 0:
#line 1404 "prog_io.m"
            {
#line 1404 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1404 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1404 "prog_io.m"
            }
#line 1403 "prog_io.m"
            break;
#line 1403 "prog_io.m"
          case (MR_Integer) 1:
#line 1390 "prog_io.m"
            {
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_22;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_23;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__Halt_24;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__V_32_32;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__V_33_33;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__V_39_39;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__V_40_40;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__V_41_41;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__V_42_42;
#line 1390 "prog_io.m"
              MR_Word parse_tree__prog_io__V_43_43;

#line 1391 "prog_io.m"
              {
#line 1391 "prog_io.m"
                parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1391 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__Msg_18));
#line 1391 "prog_io.m"
              }
#line 1391 "prog_io.m"
              {
#line 1391 "prog_io.m"
                parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1391 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 1391 "prog_io.m"
              }
#line 1391 "prog_io.m"
              {
#line 1391 "prog_io.m"
                parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[68])));
#line 1391 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1391 "prog_io.m"
              }
#line 1393 "prog_io.m"
              {
#line 1393 "prog_io.m"
                parse_tree__prog_io__V_41_41 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_19);
              }
#line 1393 "prog_io.m"
              {
#line 1393 "prog_io.m"
                parse_tree__prog_io__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1393 "prog_io.m"
              }
#line 1393 "prog_io.m"
              {
#line 1393 "prog_io.m"
                parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 1393 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1393 "prog_io.m"
              }
#line 1393 "prog_io.m"
              {
#line 1393 "prog_io.m"
                parse_tree__prog_io__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1393 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1393 "prog_io.m"
              }
#line 1393 "prog_io.m"
              {
#line 1393 "prog_io.m"
                parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 1393 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1393 "prog_io.m"
              }
#line 1392 "prog_io.m"
              {
#line 1392 "prog_io.m"
                parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1392 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1392 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1392 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 1392 "prog_io.m"
              }
#line 1394 "prog_io.m"
              {
#line 1394 "prog_io.m"
                MR_Word base;
#line 1394 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = base;
#line 1394 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1394 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_26));
#line 1394 "prog_io.m"
              }
#line 1396 "prog_io.m"
              {
#line 1396 "prog_io.m"
                libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, (MR_Integer) 2, &parse_tree__prog_io__Halt_24);
              }
#line 1400 "prog_io.m"
#line 1400 "prog_io.m"
              switch (parse_tree__prog_io__Halt_24) {
#line 1400 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1400 "prog_io.m"
                case (MR_Integer) 0:
#line 1401 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1400 "prog_io.m"
                  break;
#line 1400 "prog_io.m"
                case (MR_Integer) 1:
#line 1398 "prog_io.m"
                  {
#line 1399 "prog_io.m"
                    {
#line 1399 "prog_io.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 10)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_28, parse_tree__prog_io__STATE_VARIABLE_Errors_29);
                    }
#line 1398 "prog_io.m"
                  }
#line 1400 "prog_io.m"
                  break;
#line 1400 "prog_io.m"
              }
#line 1390 "prog_io.m"
            }
#line 1403 "prog_io.m"
            break;
#line 1403 "prog_io.m"
        }
#line 1406 "prog_io.m"
        {
#line 1406 "prog_io.m"
          parse_tree__prog_io__NoWarnItemNothingInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1406 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1406 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1406 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 2) = ((MR_Box) (parse_tree__prog_io__NothingSeqNum_15));
#line 1406 "prog_io.m"
        }
#line 1407 "prog_io.m"
        {
#line 1407 "prog_io.m"
          MR_Word base;
#line 1407 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1407 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1407 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__NoWarnItemNothingInfo_25));
#line 1407 "prog_io.m"
        }
#line 1380 "prog_io.m"
      }
#line 1373 "prog_io.m"
  }
#line 1367 "prog_io.m"
}

#line 1291 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_18_p_0(
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_20,
#line 1291 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53,
#line 1291 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_54,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_56,
#line 1291 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57,
#line 1291 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_61,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_62,
#line 1291 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_63,
#line 1291 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_64)
#line 1291 "prog_io.m"
{
#line 1302 "prog_io.m"
  while (MR_TRUE)
#line 1302 "prog_io.m"
    {
#line 1302 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1302 "prog_io.m"
      {
#line 1302 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53 <= (MR_Integer) 0);

#line 1302 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1301 "prog_io.m"
          {
#line 1301 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_23 = parse_tree__prog_io__InitLookAhead_22;
#line 1301 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_64 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_63;
#line 1301 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_62 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_61;
#line 1301 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59;
#line 1301 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57;
#line 1301 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_56 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55;
#line 1301 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_54 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53;
#line 1301 "prog_io.m"
          }
#line 1302 "prog_io.m"
        else
#line 1304 "prog_io.m"
          {
#line 1304 "prog_io.m"
            MR_Word parse_tree__prog_io__ReadIOMResult_30;
#line 1304 "prog_io.m"
            MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;

#line 1303 "prog_io.m"
            {
#line 1303 "prog_io.m"
              parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_22, parse_tree__prog_io__ModuleName_20, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57, &parse_tree__prog_io__ReadIOMResult_30, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68);
            }
#line 1308 "prog_io.m"
#line 1308 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_30)) {
#line 1308 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1308 "prog_io.m"
              case (MR_Integer) 0:
#line 1306 "prog_io.m"
                {
#line 1307 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1306 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_54 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53;
#line 1306 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_56 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55;
#line 1306 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57;
#line 1306 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;
#line 1306 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_62 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_61;
#line 1306 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_64 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_63;
#line 1306 "prog_io.m"
                }
#line 1308 "prog_io.m"
                break;
#line 1308 "prog_io.m"
              case (MR_Integer) 1:
#line 1316 "prog_io.m"
                {
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpec_31 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_30), (MR_Integer) 1);
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_115;
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_116;
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_90_117;
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_91_118;

#line 1311 "prog_io.m"
                  {
#line 1311 "prog_io.m"
                    parse_tree__prog_io__ItemSpecs_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_115, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_31));
#line 1311 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "prog_io.m"
                  }
#line 1312 "prog_io.m"
                  {
#line 1312 "prog_io.m"
                    parse_tree__prog_io__ItemErrors_116 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)));
                  }
#line 1317 "prog_io.m"
                  {
#line 1317 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_90_117 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_115, parse_tree__prog_io__STATE_VARIABLE_Specs_0_61);
                  }
#line 1318 "prog_io.m"
                  {
#line 1318 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_91_118 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_63, parse_tree__prog_io__ItemErrors_116);
                  }
#line 1319 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1319 "prog_io.m"
                  {
#line 1319 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;
#line 1319 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_90_117;
#line 1319 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_91_118;

#line 1319 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63;
#line 1319 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61;
#line 1319 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 1319 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1319 "prog_io.m"
                  }
#line 1319 "prog_io.m"
                  continue;
#line 1316 "prog_io.m"
                }
#line 1308 "prog_io.m"
                break;
#line 1308 "prog_io.m"
              case (MR_Integer) 2:
#line 1316 "prog_io.m"
                {
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_30, (MR_Integer) 2)));
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_30, (MR_Integer) 3)));
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_90_90;
#line 1316 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_91_91;
#line 1314 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_30, (MR_Integer) 0)));
#line 1314 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_30, (MR_Integer) 1)));

#line 1317 "prog_io.m"
                  {
#line 1317 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_90_90 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_32, parse_tree__prog_io__STATE_VARIABLE_Specs_0_61);
                  }
#line 1318 "prog_io.m"
                  {
#line 1318 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_91_91 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_63, parse_tree__prog_io__ItemErrors_33);
                  }
#line 1319 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1319 "prog_io.m"
                  {
#line 1319 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;
#line 1319 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_90_90;
#line 1319 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_91_91;

#line 1319 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63;
#line 1319 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61;
#line 1319 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 1319 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1319 "prog_io.m"
                  }
#line 1319 "prog_io.m"
                  continue;
#line 1316 "prog_io.m"
                }
#line 1308 "prog_io.m"
                break;
#line 1308 "prog_io.m"
              case (MR_Integer) 3:
#line 1323 "prog_io.m"
                {
#line 1323 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMVarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_30, (MR_Integer) 0)));
#line 1323 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_30, (MR_Integer) 1)));
#line 1323 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOM_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_30, (MR_Integer) 2)));
#line 1323 "prog_io.m"
                  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_70_70 = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53 - (MR_Integer) 1);

#line 1331 "prog_io.m"
#line 1331 "prog_io.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_38)) {
#line 1331 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1331 "prog_io.m"
                    case (MR_Integer) 0:
#line 1349 "prog_io.m"
                      {
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__IOM_38, (MR_Integer) 0)));
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item_50;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_76_76;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_77_77;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_78_78;
#line 1339 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemNothingInfo_49;

#line 1336 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Item0_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_48, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 1336 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1336 "prog_io.m"
                          {
#line 1336 "prog_io.m"
                            parse_tree__prog_io__ItemNothingInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_48, (MR_Integer) 1)));
#line 1337 "prog_io.m"
                            {
#line 1337 "prog_io.m"
                              parse_tree__prog_io__process_item_nothing_warning_7_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__ItemNothingInfo_49, &parse_tree__prog_io__Item_50, parse_tree__prog_io__STATE_VARIABLE_Specs_0_61, &parse_tree__prog_io__STATE_VARIABLE_Specs_76_76, parse_tree__prog_io__STATE_VARIABLE_Errors_0_63, &parse_tree__prog_io__STATE_VARIABLE_Errors_77_77);
                            }
#line 1336 "prog_io.m"
                          }
#line 1336 "prog_io.m"
                        else
#line 1340 "prog_io.m"
                          {
#line 1340 "prog_io.m"
                            parse_tree__prog_io__Item_50 = parse_tree__prog_io__Item0_48;
#line 1340 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Errors_77_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_63;
#line 1340 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_76_76 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_61;
#line 1340 "prog_io.m"
                          }
#line 1342 "prog_io.m"
                        {
#line 1342 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_78_78 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55, ((MR_Box) (parse_tree__prog_io__Item_50)));
                        }
#line 1350 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1350 "prog_io.m"
                        {
#line 1350 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_53 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_70_70;
#line 1350 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_55 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_78_78;
#line 1350 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;
#line 1350 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_76_76;
#line 1350 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_77_77;

#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_55;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_53;
#line 1350 "prog_io.m"
                        }
#line 1350 "prog_io.m"
                        continue;
#line 1349 "prog_io.m"
                      }
#line 1331 "prog_io.m"
                      break;
#line 1331 "prog_io.m"
                    case (MR_Integer) 1:
#line 1349 "prog_io.m"
                      {
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_104_104;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__HeadItem_51;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__TailItems_52;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__IOM_38, (MR_Integer) 0)));
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_74_74;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_75_75;
#line 1349 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_78_107;

#line 1344 "prog_io.m"
                        parse_tree__prog_io__HeadItem_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_72_72, (MR_Integer) 0)));
#line 1344 "prog_io.m"
                        parse_tree__prog_io__TailItems_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_72_72, (MR_Integer) 1)));
#line 6783 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1348 "prog_io.m"
                        {
#line 1348 "prog_io.m"
                          parse_tree__prog_io__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io__HeadItem_51));
#line 1348 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io__TailItems_52));
#line 1348 "prog_io.m"
                        }
#line 1348 "prog_io.m"
                        {
#line 1348 "prog_io.m"
                          parse_tree__prog_io__V_74_74 = mercury__cord__from_list_1_f_0(parse_tree__prog_io__TypeCtorInfo_104_104, parse_tree__prog_io__V_75_75);
                        }
#line 1347 "prog_io.m"
                        {
#line 1347 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_78_107 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_104_104, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55, parse_tree__prog_io__V_74_74);
                        }
#line 1350 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1350 "prog_io.m"
                        {
#line 1350 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_53 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_70_70;
#line 1350 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_55 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_78_107;
#line 1350 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;

#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_55;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_53;
#line 1350 "prog_io.m"
                        }
#line 1350 "prog_io.m"
                        continue;
#line 1349 "prog_io.m"
                      }
#line 1331 "prog_io.m"
                      break;
#line 1331 "prog_io.m"
                    case (MR_Integer) 2:
#line 1349 "prog_io.m"
                      {
#line 1349 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79_113 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOM_38, (MR_Integer) 0)));

#line 1350 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1350 "prog_io.m"
                        {
#line 1350 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_53 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_70_70;
#line 1350 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_57 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79_113;
#line 1350 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;

#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_57;
#line 1350 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_53 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_53;
#line 1350 "prog_io.m"
                        }
#line 1350 "prog_io.m"
                        continue;
#line 1349 "prog_io.m"
                      }
#line 1331 "prog_io.m"
                      break;
#line 1331 "prog_io.m"
                    case (MR_Integer) 3:
#line 1329 "prog_io.m"
                      {
#line 1330 "prog_io.m"
                        {
#line 1330 "prog_io.m"
                          MR_Word base;
#line 1330 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "prog_io.m"
                          *parse_tree__prog_io__FinalLookAhead_23 = base;
#line 1330 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_36));
#line 1330 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_37));
#line 1330 "prog_io.m"
                        }
#line 1329 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_54 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_70_70;
#line 1329 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_56 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_55;
#line 1329 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57;
#line 1329 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_68_68;
#line 1329 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_62 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_61;
#line 1329 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Errors_64 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_63;
#line 1329 "prog_io.m"
                      }
#line 1331 "prog_io.m"
                      break;
#line 1331 "prog_io.m"
                  }
#line 1323 "prog_io.m"
                }
#line 1308 "prog_io.m"
                break;
#line 1308 "prog_io.m"
            }
#line 1304 "prog_io.m"
          }
#line 1302 "prog_io.m"
      }
#line 1302 "prog_io.m"
      break;
#line 1302 "prog_io.m"
    }
#line 1291 "prog_io.m"
}

#line 1271 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_16_p_0(
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_18,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_19,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_20,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_29,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_30,
#line 1271 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_31,
#line 1271 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_33,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_35,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_36,
#line 1271 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_37,
#line 1271 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_38)
#line 1271 "prog_io.m"
{
#line 1278 "prog_io.m"
  while (MR_TRUE)
#line 1278 "prog_io.m"
    {
#line 1278 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1278 "prog_io.m"
      {
#line 1278 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1278 "prog_io.m"
        MR_Integer parse_tree__prog_io__NumItemsLeft_27;
#line 1278 "prog_io.m"
        MR_Word parse_tree__prog_io__MidLookAhead_28;
#line 1278 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_42_42;
#line 1278 "prog_io.m"
        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_43;
#line 1278 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_44_44;
#line 1278 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_45_45;
#line 1278 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_46_46;

#line 1279 "prog_io.m"
        {
#line 1279 "prog_io.m"
          parse_tree__prog_io__read_item_sequence_inner_18_p_0(parse_tree__prog_io__Globals_17, parse_tree__prog_io__ModuleName_18, (MR_Integer) 1024, &parse_tree__prog_io__NumItemsLeft_27, parse_tree__prog_io__InitLookAhead_19, &parse_tree__prog_io__MidLookAhead_28, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_29, &parse_tree__prog_io__STATE_VARIABLE_ItemsCord_42_42, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_31, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_43, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_33, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_44_44, parse_tree__prog_io__STATE_VARIABLE_Specs_0_35, &parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, parse_tree__prog_io__STATE_VARIABLE_Errors_0_37, &parse_tree__prog_io__STATE_VARIABLE_Errors_46_46);
        }
#line 1282 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__NumItemsLeft_27 == (MR_Integer) 0);
#line 1285 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1283 "prog_io.m"
          {
#line 1283 "prog_io.m"
            /* direct tailcall eliminated */
#line 1283 "prog_io.m"
            {
#line 1283 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_19 = parse_tree__prog_io__MidLookAhead_28;
#line 1283 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_29 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_42_42;
#line 1283 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_31 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_43;
#line 1283 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_33 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_44_44;
#line 1283 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_35 = parse_tree__prog_io__STATE_VARIABLE_Specs_45_45;
#line 1283 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_37 = parse_tree__prog_io__STATE_VARIABLE_Errors_46_46;

#line 1283 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Errors_0_37 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_37;
#line 1283 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Specs_0_35 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_35;
#line 1283 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_33 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_33;
#line 1283 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_31 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_31;
#line 1283 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_29 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_29;
#line 1283 "prog_io.m"
              parse_tree__prog_io__InitLookAhead_19 = parse_tree__prog_io__InitLookAhead__tmp_copy_19;
#line 1283 "prog_io.m"
            }
#line 1283 "prog_io.m"
            continue;
#line 1283 "prog_io.m"
          }
#line 1285 "prog_io.m"
        else
#line 1286 "prog_io.m"
          {
#line 1286 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_20 = parse_tree__prog_io__MidLookAhead_28;
#line 1286 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_38 = parse_tree__prog_io__STATE_VARIABLE_Errors_46_46;
#line 1286 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_36 = parse_tree__prog_io__STATE_VARIABLE_Specs_45_45;
#line 1286 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_34 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_44_44;
#line 1286 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_43_43;
#line 1286 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_30 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_42_42;
#line 1286 "prog_io.m"
          }
#line 1278 "prog_io.m"
      }
#line 1278 "prog_io.m"
      break;
#line 1278 "prog_io.m"
    }
#line 1271 "prog_io.m"
}

#line 1157 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1157 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49,
#line 1157 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_51,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_53,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_54,
#line 1157 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_55,
#line 1157 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_56)
#line 1157 "prog_io.m"
{
#line 1165 "prog_io.m"
  while (MR_TRUE)
#line 1165 "prog_io.m"
    {
#line 1165 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1165 "prog_io.m"
      {
#line 1165 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1165 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_116_116 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1165 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstReadTerm_22;
#line 1165 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstIOM_23;
#line 1165 "prog_io.m"
        MR_Word parse_tree__prog_io__V_60_60;
#line 1165 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;

#line 1169 "prog_io.m"
        {
#line 1169 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0(parse_tree__prog_io__TypeCtorInfo_116_116, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49, &parse_tree__prog_io__FirstReadTerm_22);
        }
#line 1170 "prog_io.m"
        {
#line 1170 "prog_io.m"
          parse_tree__prog_io__V_60_60 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
        }
#line 1170 "prog_io.m"
        {
#line 1170 "prog_io.m"
          parse_tree__prog_io__read_term_to_iom_result_6_p_0(parse_tree__prog_io__V_60_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49, parse_tree__prog_io__FirstReadTerm_22, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_51, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61, &parse_tree__prog_io__MaybeFirstIOM_23);
        }
#line 1243 "prog_io.m"
#line 1243 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstIOM_23)) {
#line 1243 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1243 "prog_io.m"
          case (MR_Integer) 0:
#line 1252 "prog_io.m"
            {
#line 1252 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_115;

#line 1253 "prog_io.m"
              {
#line 1253 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_115);
              }
#line 1254 "prog_io.m"
              {
#line 1254 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_115, parse_tree__prog_io__STATE_VARIABLE_Specs_0_53, parse_tree__prog_io__STATE_VARIABLE_Specs_54, parse_tree__prog_io__STATE_VARIABLE_Errors_0_55, parse_tree__prog_io__STATE_VARIABLE_Errors_56);
              }
#line 1255 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[3];
#line 1252 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49;
#line 1252 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 1252 "prog_io.m"
            }
#line 1243 "prog_io.m"
            break;
#line 1243 "prog_io.m"
          case (MR_Integer) 1:
#line 1252 "prog_io.m"
            {
#line 1252 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_115;

#line 1253 "prog_io.m"
              {
#line 1253 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_115);
              }
#line 1254 "prog_io.m"
              {
#line 1254 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_115, parse_tree__prog_io__STATE_VARIABLE_Specs_0_53, parse_tree__prog_io__STATE_VARIABLE_Specs_54, parse_tree__prog_io__STATE_VARIABLE_Errors_0_55, parse_tree__prog_io__STATE_VARIABLE_Errors_56);
              }
#line 1255 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[3];
#line 1252 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49;
#line 1252 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 1252 "prog_io.m"
            }
#line 1243 "prog_io.m"
            break;
#line 1243 "prog_io.m"
          case (MR_Integer) 2:
#line 1244 "prog_io.m"
            {
#line 1244 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAhead_47;
#line 1244 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1244 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_113 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1244 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_114;
#line 1244 "prog_io.m"
              MR_Word parse_tree__prog_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));
#line 1244 "prog_io.m"
              MR_Word parse_tree__prog_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 3)));

#line 1245 "prog_io.m"
              {
#line 1245 "prog_io.m"
                parse_tree__prog_io__FirstContext_114 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_116_116, parse_tree__prog_io__FirstTerm_113);
              }
#line 1246 "prog_io.m"
              {
#line 1246 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_114, parse_tree__prog_io__STATE_VARIABLE_Specs_0_53, parse_tree__prog_io__STATE_VARIABLE_Specs_54, parse_tree__prog_io__STATE_VARIABLE_Errors_0_55, parse_tree__prog_io__STATE_VARIABLE_Errors_56);
              }
#line 1247 "prog_io.m"
              {
#line 1247 "prog_io.m"
                parse_tree__prog_io__LookAhead_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_47, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_112));
#line 1247 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_47, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_113));
#line 1247 "prog_io.m"
              }
#line 1248 "prog_io.m"
              {
#line 1248 "prog_io.m"
                MR_Word base;
#line 1248 "prog_io.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "prog_io.m"
                *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1248 "prog_io.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAhead_47));
#line 1248 "prog_io.m"
              }
#line 1244 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49;
#line 1244 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 1244 "prog_io.m"
            }
#line 1243 "prog_io.m"
            break;
#line 1243 "prog_io.m"
          case (MR_Integer) 3:
#line 1173 "prog_io.m"
            {
#line 1173 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1173 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1173 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstIOM_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));

#line 1181 "prog_io.m"
#line 1181 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__FirstIOM_26)) {
#line 1181 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1181 "prog_io.m"
                case (MR_Integer) 0:
#line 1181 "prog_io.m"
                case (MR_Integer) 1:
#line 1237 "prog_io.m"
                  {
#line 1237 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstContext_43;
#line 1237 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstLookAhead_44;

#line 1238 "prog_io.m"
                    {
#line 1238 "prog_io.m"
                      parse_tree__prog_io__FirstContext_43 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_116_116, parse_tree__prog_io__FirstTerm_25);
                    }
#line 1239 "prog_io.m"
                    {
#line 1239 "prog_io.m"
                      parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_43, parse_tree__prog_io__STATE_VARIABLE_Specs_0_53, parse_tree__prog_io__STATE_VARIABLE_Specs_54, parse_tree__prog_io__STATE_VARIABLE_Errors_0_55, parse_tree__prog_io__STATE_VARIABLE_Errors_56);
                    }
#line 1240 "prog_io.m"
                    {
#line 1240 "prog_io.m"
                      parse_tree__prog_io__FirstLookAhead_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_44, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1240 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_44, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1240 "prog_io.m"
                    }
#line 1241 "prog_io.m"
                    {
#line 1241 "prog_io.m"
                      MR_Word base;
#line 1241 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "prog_io.m"
                      *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1241 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_44));
#line 1241 "prog_io.m"
                    }
#line 1237 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49;
#line 1237 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 1237 "prog_io.m"
                  }
#line 1181 "prog_io.m"
                  break;
#line 1181 "prog_io.m"
                case (MR_Integer) 2:
#line 1175 "prog_io.m"
                  {
#line 1175 "prog_io.m"
                    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_103_103 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 0)));

#line 1178 "prog_io.m"
                    /* direct tailcall eliminated */
#line 1178 "prog_io.m"
                    {
#line 1178 "prog_io.m"
                      MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_103_103;
#line 1178 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;

#line 1178 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_51;
#line 1178 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_49;
#line 1178 "prog_io.m"
                    }
#line 1178 "prog_io.m"
                    continue;
#line 1175 "prog_io.m"
                  }
#line 1181 "prog_io.m"
                  break;
#line 1181 "prog_io.m"
                case (MR_Integer) 3:
#line 1181 "prog_io.m"
#line 1181 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 0)))) {
#line 1181 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1181 "prog_io.m"
                    case (MR_Integer) 0:
#line 1183 "prog_io.m"
                      {
#line 1183 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 1)));
#line 1183 "prog_io.m"
                        MR_Word parse_tree__prog_io__ModuleNameContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 2)));
#line 1182 "prog_io.m"
                        MR_Integer parse_tree__prog_io___ModuleNameSeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 3)));

#line 1188 "prog_io.m"
                        {
#line 1188 "prog_io.m"
                          parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__StartModuleName_27);
                        }
#line 1194 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1191 "prog_io.m"
                          {
#line 1192 "prog_io.m"
                            {
#line 1192 "prog_io.m"
                              MR_Word base;
#line 1192 "prog_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "prog_io.m"
                              *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1192 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1192 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1192 "prog_io.m"
                            }
#line 1191 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Errors_56 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_55;
#line 1191 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Specs_54 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_53;
#line 1191 "prog_io.m"
                          }
#line 1194 "prog_io.m"
                        else
#line 1202 "prog_io.m"
                          {
#line 1195 "prog_io.m"
                            {
#line 1195 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__StartModuleName_27, parse_tree__prog_io__DefaultModuleName_15);
                            }
#line 1202 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1199 "prog_io.m"
                              {
#line 1200 "prog_io.m"
                                {
#line 1200 "prog_io.m"
                                  MR_Word base;
#line 1200 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1200 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15));
#line 1200 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1200 "prog_io.m"
                                }
#line 1199 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Errors_56 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_55;
#line 1199 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Specs_54 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_53;
#line 1199 "prog_io.m"
                              }
#line 1202 "prog_io.m"
                            else
#line 1205 "prog_io.m"
                              {
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_31;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__Severity_32;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__Msg_33;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_34;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_72_72;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_73_73;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_74_74;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_77_77;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_78_78;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_95_95;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_96_96;
#line 1205 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_97_97;

#line 1203 "prog_io.m"
                                {
#line 1203 "prog_io.m"
                                  parse_tree__prog_io__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1203 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49));
#line 1203 "prog_io.m"
                                }
#line 1204 "prog_io.m"
                                {
#line 1204 "prog_io.m"
                                  parse_tree__prog_io__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1204 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_78_78, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1204 "prog_io.m"
                                }
#line 1204 "prog_io.m"
                                {
#line 1204 "prog_io.m"
                                  parse_tree__prog_io__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io__V_78_78));
#line 1204 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1204 "prog_io.m"
                                }
#line 1204 "prog_io.m"
                                {
#line 1204 "prog_io.m"
                                  parse_tree__prog_io__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[67])));
#line 1204 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io__V_77_77));
#line 1204 "prog_io.m"
                                }
#line 1203 "prog_io.m"
                                {
#line 1203 "prog_io.m"
                                  parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io__V_73_73));
#line 1203 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_72_72, 1) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 1203 "prog_io.m"
                                }
#line 1203 "prog_io.m"
                                {
#line 1203 "prog_io.m"
                                  parse_tree__prog_io__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[66])));
#line 1203 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 1) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 1203 "prog_io.m"
                                }
#line 1215 "prog_io.m"
#line 1215 "prog_io.m"
                                switch (parse_tree__prog_io__RequireModuleDecl_14) {
#line 1215 "prog_io.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 1215 "prog_io.m"
                                  case (MR_Integer) 0:
#line 1207 "prog_io.m"
                                    {
#line 1207 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_91_91;
#line 1207 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_92_92;

#line 1211 "prog_io.m"
                                      parse_tree__prog_io__Severity_32 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_2[0]);
#line 1214 "prog_io.m"
                                      {
#line 1214 "prog_io.m"
                                        parse_tree__prog_io__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "prog_io.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 1214 "prog_io.m"
                                      }
#line 1214 "prog_io.m"
                                      {
#line 1214 "prog_io.m"
                                        parse_tree__prog_io__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io__V_92_92));
#line 1214 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "prog_io.m"
                                      }
#line 1213 "prog_io.m"
                                      {
#line 1213 "prog_io.m"
                                        parse_tree__prog_io__Msg_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_33, 0) = ((MR_Box) (((MR_Integer) 22 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 1213 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_33, 1) = ((MR_Box) (parse_tree__prog_io__V_91_91));
#line 1213 "prog_io.m"
                                      }
#line 1207 "prog_io.m"
                                    }
#line 1215 "prog_io.m"
                                    break;
#line 1215 "prog_io.m"
                                  case (MR_Integer) 1:
#line 1216 "prog_io.m"
                                    {
#line 1217 "prog_io.m"
                                      parse_tree__prog_io__Severity_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1218 "prog_io.m"
                                      {
#line 1218 "prog_io.m"
                                        parse_tree__prog_io__Msg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "prog_io.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_33, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 1218 "prog_io.m"
                                      }
#line 1216 "prog_io.m"
                                    }
#line 1215 "prog_io.m"
                                    break;
#line 1215 "prog_io.m"
                                }
#line 1221 "prog_io.m"
                                {
#line 1221 "prog_io.m"
                                  parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__Msg_33));
#line 1221 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "prog_io.m"
                                }
#line 1221 "prog_io.m"
                                {
#line 1221 "prog_io.m"
                                  parse_tree__prog_io__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1221 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 1) = ((MR_Box) (parse_tree__prog_io__V_97_97));
#line 1221 "prog_io.m"
                                }
#line 1221 "prog_io.m"
                                {
#line 1221 "prog_io.m"
                                  parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_96_96));
#line 1221 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "prog_io.m"
                                }
#line 1220 "prog_io.m"
                                {
#line 1220 "prog_io.m"
                                  parse_tree__prog_io__Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 0) = ((MR_Box) (parse_tree__prog_io__Severity_32));
#line 1220 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1220 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 2) = ((MR_Box) (parse_tree__prog_io__V_95_95));
#line 1220 "prog_io.m"
                                }
#line 1222 "prog_io.m"
                                {
#line 1222 "prog_io.m"
                                  MR_Word base;
#line 1222 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_io.m"
                                  *parse_tree__prog_io__STATE_VARIABLE_Specs_54 = base;
#line 1222 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_34));
#line 1222 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_53));
#line 1222 "prog_io.m"
                                }
#line 1223 "prog_io.m"
                                {
#line 1223 "prog_io.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 1)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_55, parse_tree__prog_io__STATE_VARIABLE_Errors_56);
                                }
#line 1229 "prog_io.m"
                                {
#line 1229 "prog_io.m"
                                  MR_Word base;
#line 1229 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1229 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1229 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1229 "prog_io.m"
                                }
#line 1205 "prog_io.m"
                              }
#line 1202 "prog_io.m"
                          }
#line 1183 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49;
#line 1183 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 1183 "prog_io.m"
                      }
#line 1181 "prog_io.m"
                      break;
#line 1181 "prog_io.m"
                    case (MR_Integer) 1:
#line 1181 "prog_io.m"
                    case (MR_Integer) 2:
#line 1237 "prog_io.m"
                      {
#line 1237 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstContext_43;
#line 1237 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstLookAhead_44;

#line 1238 "prog_io.m"
                        {
#line 1238 "prog_io.m"
                          parse_tree__prog_io__FirstContext_43 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_116_116, parse_tree__prog_io__FirstTerm_25);
                        }
#line 1239 "prog_io.m"
                        {
#line 1239 "prog_io.m"
                          parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_43, parse_tree__prog_io__STATE_VARIABLE_Specs_0_53, parse_tree__prog_io__STATE_VARIABLE_Specs_54, parse_tree__prog_io__STATE_VARIABLE_Errors_0_55, parse_tree__prog_io__STATE_VARIABLE_Errors_56);
                        }
#line 1240 "prog_io.m"
                        {
#line 1240 "prog_io.m"
                          parse_tree__prog_io__FirstLookAhead_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_44, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1240 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_44, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1240 "prog_io.m"
                        }
#line 1241 "prog_io.m"
                        {
#line 1241 "prog_io.m"
                          MR_Word base;
#line 1241 "prog_io.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "prog_io.m"
                          *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1241 "prog_io.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_44));
#line 1241 "prog_io.m"
                        }
#line 1237 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_49;
#line 1237 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 1237 "prog_io.m"
                      }
#line 1181 "prog_io.m"
                      break;
#line 1181 "prog_io.m"
                  }
#line 1181 "prog_io.m"
                  break;
#line 1181 "prog_io.m"
              }
#line 1173 "prog_io.m"
            }
#line 1243 "prog_io.m"
            break;
#line 1243 "prog_io.m"
        }
#line 1165 "prog_io.m"
      }
#line 1165 "prog_io.m"
      break;
#line 1165 "prog_io.m"
    }
#line 1157 "prog_io.m"
}

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1098 "prog_io.m"
{
#line 1098 "prog_io.m"
  {
#line 1098 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1098 "prog_io.m"
    MR_builtin_longjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0, 1);
#line 1098 "prog_io.m"
  }
#line 1098 "prog_io.m"
}

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1098 "prog_io.m"
{
#line 1098 "prog_io.m"
  {
#line 1098 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1098 "prog_io.m"
    (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90 = ((MR_Word) (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90);
#line 1098 "prog_io.m"
    {
#line 1098 "prog_io.m"
      parse_tree__prog_io__handle_module_end_marker_11_p_0_2(parse_tree__prog_io__env_ptr);
#line 1098 "prog_io.m"
      return;
    }
#line 1098 "prog_io.m"
  }
#line 1098 "prog_io.m"
}

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1098 "prog_io.m"
{
#line 1098 "prog_io.m"
  {
#line 1098 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1099 "prog_io.m"
    {
#line 1099 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90);
    }
#line 1099 "prog_io.m"
    if ((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1099 "prog_io.m"
      {
#line 1099 "prog_io.m"
        parse_tree__prog_io__handle_module_end_marker_11_p_0_1(parse_tree__prog_io__env_ptr);
#line 1099 "prog_io.m"
        return;
      }
#line 1098 "prog_io.m"
  }
#line 1098 "prog_io.m"
}

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1098 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1098 "prog_io.m"
{
#line 1098 "prog_io.m"
  {
#line 1098 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1098 "prog_io.m"
    if (MR_builtin_setjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0) == 0)
#line 1098 "prog_io.m"
      {
#line 1098 "prog_io.m"
        {
#line 1098 "prog_io.m"
          {
#line 1098 "prog_io.m"
            mercury__list__member_2_p_1((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &(parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13, parse_tree__prog_io__handle_module_end_marker_11_p_0_3, parse_tree__prog_io__env_ptr);
          }
#line 1098 "prog_io.m"
        }
#line 1098 "prog_io.m"
        (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_FALSE;
#line 1098 "prog_io.m"
      }
#line 1098 "prog_io.m"
    else
#line 1098 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_TRUE;
#line 1098 "prog_io.m"
  }
#line 1098 "prog_io.m"
}

#line 1078 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1078 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1078 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1078 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1078 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27)
#line 1078 "prog_io.m"
{
#line 1078 "prog_io.m"
  {
#line 1078 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s parse_tree__prog_io__env;

#line 1078 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13 = parse_tree__prog_io__ContainingModules_13;
#line 1078 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16 = parse_tree__prog_io__EndedModuleName_16;
#line 1086 "prog_io.m"
    {
#line 1086 "prog_io.m"
      (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__CurModuleName_12, (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16);
    }
#line 1089 "prog_io.m"
    if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1088 "prog_io.m"
      {
#line 1088 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1088 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1088 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1088 "prog_io.m"
      }
#line 1089 "prog_io.m"
    else
#line 1095 "prog_io.m"
      {
#line 1090 "prog_io.m"
        {
#line 1090 "prog_io.m"
          (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, parse_tree__prog_io__CurModuleName_12);
        }
#line 1095 "prog_io.m"
        if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1094 "prog_io.m"
          {
#line 1094 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1094 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1094 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1094 "prog_io.m"
          }
#line 1095 "prog_io.m"
        else
#line 1111 "prog_io.m"
          {
#line 1098 "prog_io.m"
            {
#line 1098 "prog_io.m"
              parse_tree__prog_io__handle_module_end_marker_11_p_0_4(&parse_tree__prog_io__env);
            }
#line 1111 "prog_io.m"
            if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1105 "prog_io.m"
              {
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_22;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_23;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_30_30;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_33_33;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_36_36;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_37_37;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_46_46;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_47_47;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_48_48;
#line 1105 "prog_io.m"
                MR_Word parse_tree__prog_io__V_49_49;

#line 1104 "prog_io.m"
                {
#line 1104 "prog_io.m"
                  parse_tree__prog_io__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1104 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1104 "prog_io.m"
                }
#line 1104 "prog_io.m"
                {
#line 1104 "prog_io.m"
                  parse_tree__prog_io__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io__V_37_37));
#line 1104 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1104 "prog_io.m"
                }
#line 1104 "prog_io.m"
                {
#line 1104 "prog_io.m"
                  parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[62])));
#line 1104 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_36_36));
#line 1104 "prog_io.m"
                }
#line 1103 "prog_io.m"
                {
#line 1103 "prog_io.m"
                  parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[61])));
#line 1103 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1103 "prog_io.m"
                }
#line 1103 "prog_io.m"
                {
#line 1103 "prog_io.m"
                  parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[60])));
#line 1103 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1103 "prog_io.m"
                }
#line 1107 "prog_io.m"
                {
#line 1107 "prog_io.m"
                  parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1107 "prog_io.m"
                }
#line 1107 "prog_io.m"
                {
#line 1107 "prog_io.m"
                  parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1107 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "prog_io.m"
                }
#line 1107 "prog_io.m"
                {
#line 1107 "prog_io.m"
                  parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1107 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 1107 "prog_io.m"
                }
#line 1107 "prog_io.m"
                {
#line 1107 "prog_io.m"
                  parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1107 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "prog_io.m"
                }
#line 1106 "prog_io.m"
                {
#line 1106 "prog_io.m"
                  parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1106 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1106 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1106 "prog_io.m"
                }
#line 1108 "prog_io.m"
                {
#line 1108 "prog_io.m"
                  MR_Word base;
#line 1108 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1108 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1108 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1108 "prog_io.m"
                }
#line 1109 "prog_io.m"
                {
#line 1109 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1110 "prog_io.m"
                {
#line 1110 "prog_io.m"
                  MR_Word base;
#line 1110 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_18 = base;
#line 1110 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_14));
#line 1110 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_15));
#line 1110 "prog_io.m"
                }
#line 1105 "prog_io.m"
              }
#line 1111 "prog_io.m"
            else
#line 1115 "prog_io.m"
              {
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_57_57;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_60_60;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_63_63;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_64_64;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_65_65;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_68_68;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_71_71;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_72_72;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_81_81;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_82_82;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_83_83;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__V_84_84;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_91;
#line 1115 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_92;

#line 1113 "prog_io.m"
                {
#line 1113 "prog_io.m"
                  parse_tree__prog_io__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1113 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16));
#line 1113 "prog_io.m"
                }
#line 1115 "prog_io.m"
                {
#line 1115 "prog_io.m"
                  parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1115 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1115 "prog_io.m"
                }
#line 1115 "prog_io.m"
                {
#line 1115 "prog_io.m"
                  parse_tree__prog_io__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 1115 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1115 "prog_io.m"
                }
#line 1115 "prog_io.m"
                {
#line 1115 "prog_io.m"
                  parse_tree__prog_io__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[65])));
#line 1115 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 1115 "prog_io.m"
                }
#line 1114 "prog_io.m"
                {
#line 1114 "prog_io.m"
                  parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[64])));
#line 1114 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1114 "prog_io.m"
                }
#line 1113 "prog_io.m"
                {
#line 1113 "prog_io.m"
                  parse_tree__prog_io__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__V_64_64));
#line 1113 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1113 "prog_io.m"
                }
#line 1113 "prog_io.m"
                {
#line 1113 "prog_io.m"
                  parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[62])));
#line 1113 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 1113 "prog_io.m"
                }
#line 1112 "prog_io.m"
                {
#line 1112 "prog_io.m"
                  parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[61])));
#line 1112 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 1112 "prog_io.m"
                }
#line 1112 "prog_io.m"
                {
#line 1112 "prog_io.m"
                  parse_tree__prog_io__Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[63])));
#line 1112 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 1) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1112 "prog_io.m"
                }
#line 1117 "prog_io.m"
                {
#line 1117 "prog_io.m"
                  parse_tree__prog_io__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_91));
#line 1117 "prog_io.m"
                }
#line 1117 "prog_io.m"
                {
#line 1117 "prog_io.m"
                  parse_tree__prog_io__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io__V_84_84));
#line 1117 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "prog_io.m"
                }
#line 1117 "prog_io.m"
                {
#line 1117 "prog_io.m"
                  parse_tree__prog_io__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1117 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1117 "prog_io.m"
                }
#line 1117 "prog_io.m"
                {
#line 1117 "prog_io.m"
                  parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__V_82_82));
#line 1117 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "prog_io.m"
                }
#line 1116 "prog_io.m"
                {
#line 1116 "prog_io.m"
                  parse_tree__prog_io__Spec_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1116 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 2) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 1116 "prog_io.m"
                }
#line 1118 "prog_io.m"
                {
#line 1118 "prog_io.m"
                  MR_Word base;
#line 1118 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1118 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_92));
#line 1118 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1118 "prog_io.m"
                }
#line 1119 "prog_io.m"
                {
#line 1119 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1121 "prog_io.m"
                *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1115 "prog_io.m"
              }
#line 1111 "prog_io.m"
          }
#line 1095 "prog_io.m"
      }
#line 1078 "prog_io.m"
  }
#line 1078 "prog_io.m"
}

#line 1032 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1032 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1032 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1032 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1032 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51)
#line 1032 "prog_io.m"
{
#line 1044 "prog_io.m"
  {
#line 1044 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_114_114;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionKind_33;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_34;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedContainingModules_37;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedModuleComponents_39;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__SubModuleParseTreeSrc_40;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__Component_41;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_103_103;
#line 1044 "prog_io.m"
    MR_Word parse_tree__prog_io__V_106_106;

#line 1047 "prog_io.m"
    if ((parse_tree__prog_io__MaybePrevSection_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "prog_io.m"
      {
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionPieces_35;
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionSpec_36;
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__V_56_56;
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__V_95_95;
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__V_96_96;
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__V_97_97;
#line 1048 "prog_io.m"
        MR_Word parse_tree__prog_io__V_98_98;

#line 1050 "prog_io.m"
        {
#line 1050 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1050 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1050 "prog_io.m"
        }
#line 1050 "prog_io.m"
        {
#line 1050 "prog_io.m"
          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1050 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[36])));
#line 1050 "prog_io.m"
        }
#line 1049 "prog_io.m"
        {
#line 1049 "prog_io.m"
          parse_tree__prog_io__NoSectionPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[59])));
#line 1049 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1049 "prog_io.m"
        }
#line 1058 "prog_io.m"
        {
#line 1058 "prog_io.m"
          parse_tree__prog_io__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionPieces_35));
#line 1058 "prog_io.m"
        }
#line 1058 "prog_io.m"
        {
#line 1058 "prog_io.m"
          parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 1058 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "prog_io.m"
        }
#line 1058 "prog_io.m"
        {
#line 1058 "prog_io.m"
          parse_tree__prog_io__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1058 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 1) = ((MR_Box) (parse_tree__prog_io__V_97_97));
#line 1058 "prog_io.m"
        }
#line 1058 "prog_io.m"
        {
#line 1058 "prog_io.m"
          parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_96_96));
#line 1058 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "prog_io.m"
        }
#line 1057 "prog_io.m"
        {
#line 1057 "prog_io.m"
          parse_tree__prog_io__NoSectionSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1057 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 2) = ((MR_Box) (parse_tree__prog_io__V_95_95));
#line 1057 "prog_io.m"
        }
#line 1059 "prog_io.m"
        {
#line 1059 "prog_io.m"
          parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionSpec_36));
#line 1059 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_48));
#line 1059 "prog_io.m"
        }
#line 1061 "prog_io.m"
        {
#line 1061 "prog_io.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_50, &parse_tree__prog_io__STATE_VARIABLE_Errors_103_103);
        }
#line 1062 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = (MR_Integer) 0;
#line 1063 "prog_io.m"
        {
#line 1063 "prog_io.m"
          parse_tree__prog_io__SectionContext_34 = mercury__term__context_init_0_f_0();
        }
#line 1048 "prog_io.m"
      }
#line 1047 "prog_io.m"
    else
#line 1046 "prog_io.m"
      {
#line 1046 "prog_io.m"
        MR_Word parse_tree__prog_io__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_22, (MR_Integer) 0)));

#line 1046 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 0)));
#line 1046 "prog_io.m"
        parse_tree__prog_io__SectionContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 1)));
#line 1046 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_48;
#line 1046 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Errors_103_103 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_50;
#line 1046 "prog_io.m"
      }
#line 1065 "prog_io.m"
    {
#line 1065 "prog_io.m"
      parse_tree__prog_io__NestedContainingModules_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1065 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 1) = ((MR_Box) (parse_tree__prog_io__ContainingModules_21));
#line 1065 "prog_io.m"
    }
#line 8498 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0;
#line 1070 "prog_io.m"
    {
#line 1070 "prog_io.m"
      parse_tree__prog_io__V_106_106 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_114_114);
    }
#line 1067 "prog_io.m"
    {
#line 1067 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__StartModuleName_23, parse_tree__prog_io__NestedContainingModules_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__V_106_106, &parse_tree__prog_io__NestedModuleComponents_39, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47, parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Specs_49, parse_tree__prog_io__STATE_VARIABLE_Errors_103_103, parse_tree__prog_io__STATE_VARIABLE_Errors_51);
    }
#line 1072 "prog_io.m"
    {
#line 1072 "prog_io.m"
      parse_tree__prog_io__SubModuleParseTreeSrc_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1072 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 1) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1072 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 2) = ((MR_Box) (parse_tree__prog_io__NestedModuleComponents_39));
#line 1072 "prog_io.m"
    }
#line 1074 "prog_io.m"
    {
#line 1074 "prog_io.m"
      parse_tree__prog_io__Component_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_33));
#line 1074 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_34));
#line 1074 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 2) = ((MR_Box) (parse_tree__prog_io__SubModuleParseTreeSrc_40));
#line 1074 "prog_io.m"
    }
#line 1076 "prog_io.m"
    {
#line 1076 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43 = mercury__cord__snoc_2_f_0(parse_tree__prog_io__TypeCtorInfo_114_114, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42, ((MR_Box) (parse_tree__prog_io__Component_41)));
    }
#line 1044 "prog_io.m"
  }
#line 1032 "prog_io.m"
}

#line 999 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 999 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 999 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 999 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 999 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 999 "prog_io.m"
{
#line 1009 "prog_io.m"
  {
#line 1009 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1009 "prog_io.m"
#line 1009 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 1009 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1009 "prog_io.m"
      case (MR_Integer) 1:
#line 1027 "prog_io.m"
        {
#line 1027 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 1027 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 1027 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 1027 "prog_io.m"
        }
#line 1009 "prog_io.m"
        break;
#line 1009 "prog_io.m"
      case (MR_Integer) 0:
#line 1009 "prog_io.m"
        {
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionPieces_14;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionSpec_15;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__V_25_25;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__V_28_28;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__V_29_29;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__V_67_67;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__V_68_68;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__V_69_69;
#line 1009 "prog_io.m"
          MR_Word parse_tree__prog_io__V_70_70;

#line 1010 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 1014 "prog_io.m"
          {
#line 1014 "prog_io.m"
            parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1014 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_9));
#line 1014 "prog_io.m"
          }
#line 1014 "prog_io.m"
          {
#line 1014 "prog_io.m"
            parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 1014 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[31])));
#line 1014 "prog_io.m"
          }
#line 1013 "prog_io.m"
          {
#line 1013 "prog_io.m"
            parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[58])));
#line 1013 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1013 "prog_io.m"
          }
#line 1012 "prog_io.m"
          {
#line 1012 "prog_io.m"
            parse_tree__prog_io__MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[2])));
#line 1012 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1012 "prog_io.m"
          }
#line 1023 "prog_io.m"
          {
#line 1023 "prog_io.m"
            parse_tree__prog_io__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionPieces_14));
#line 1023 "prog_io.m"
          }
#line 1023 "prog_io.m"
          {
#line 1023 "prog_io.m"
            parse_tree__prog_io__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 1023 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io.m"
          }
#line 1022 "prog_io.m"
          {
#line 1022 "prog_io.m"
            parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Context_10));
#line 1022 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 1022 "prog_io.m"
          }
#line 1023 "prog_io.m"
          {
#line 1023 "prog_io.m"
            parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1023 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io.m"
          }
#line 1021 "prog_io.m"
          {
#line 1021 "prog_io.m"
            parse_tree__prog_io__MissingSectionSpec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1021 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1021 "prog_io.m"
          }
#line 1024 "prog_io.m"
          {
#line 1024 "prog_io.m"
            MR_Word base;
#line 1024 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = base;
#line 1024 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionSpec_15));
#line 1024 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_18));
#line 1024 "prog_io.m"
          }
#line 1025 "prog_io.m"
          {
#line 1025 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_20, parse_tree__prog_io__STATE_VARIABLE_Errors_21);
#line 1025 "prog_io.m"
            return;
          }
#line 1009 "prog_io.m"
        }
#line 1009 "prog_io.m"
        break;
#line 1009 "prog_io.m"
    }
#line 1009 "prog_io.m"
  }
#line 999 "prog_io.m"
}

#line 986 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_5_p_0(
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_6,
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_7,
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_8,
#line 986 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11,
#line 986 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12)
#line 986 "prog_io.m"
{
#line 994 "prog_io.m"
  {
#line 994 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 992 "prog_io.m"
    {
#line 992 "prog_io.m"
      parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__ItemsCord_8);
    }
#line 994 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 994 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11;
#line 994 "prog_io.m"
    else
#line 995 "prog_io.m"
      {
#line 995 "prog_io.m"
        MR_Word parse_tree__prog_io__Component_10;

#line 995 "prog_io.m"
        {
#line 995 "prog_io.m"
          parse_tree__prog_io__Component_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 995 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_10, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_6));
#line 995 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_10, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_7));
#line 995 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_10, 2) = ((MR_Box) (parse_tree__prog_io__ItemsCord_8));
#line 995 "prog_io.m"
        }
#line 996 "prog_io.m"
        {
#line 996 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11, ((MR_Box) (parse_tree__prog_io__Component_10)));
        }
#line 995 "prog_io.m"
      }
#line 994 "prog_io.m"
  }
#line 986 "prog_io.m"
}

#line 824 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_70,
#line 824 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71,
#line 824 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_72,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_75,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_76,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_77,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_78)
#line 824 "prog_io.m"
{
#line 836 "prog_io.m"
  while (MR_TRUE)
#line 836 "prog_io.m"
    {
#line 836 "prog_io.m"
      /* tailcall optimized into a loop */
#line 836 "prog_io.m"
      {
#line 836 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 836 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_33;
#line 836 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81;

#line 837 "prog_io.m"
        {
#line 837 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71, &parse_tree__prog_io__ReadIOMResult_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81);
        }
#line 843 "prog_io.m"
#line 843 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_33)) {
#line 843 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 843 "prog_io.m"
          case (MR_Integer) 0:
#line 840 "prog_io.m"
            {
#line 842 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_70 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69;
#line 840 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_72 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71;
#line 840 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81;
#line 840 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_76 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_75;
#line 840 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_78 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_77;
#line 840 "prog_io.m"
            }
#line 843 "prog_io.m"
            break;
#line 843 "prog_io.m"
          case (MR_Integer) 1:
#line 844 "prog_io.m"
            {
#line 844 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_34 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_33), (MR_Integer) 1);
#line 844 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_169_169;
#line 844 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_171_171;

#line 847 "prog_io.m"
              {
#line 847 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_169_169, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_34));
#line 847 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_169_169, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_75));
#line 847 "prog_io.m"
              }
#line 848 "prog_io.m"
              {
#line 848 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_77, &parse_tree__prog_io__STATE_VARIABLE_Errors_171_171);
              }
#line 849 "prog_io.m"
              /* direct tailcall eliminated */
#line 849 "prog_io.m"
              {
#line 849 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81;
#line 849 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_169_169;
#line 849 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_171_171;

#line 849 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77;
#line 849 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75;
#line 849 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73;
#line 849 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "prog_io.m"
              }
#line 849 "prog_io.m"
              continue;
#line 844 "prog_io.m"
            }
#line 843 "prog_io.m"
            break;
#line 843 "prog_io.m"
          case (MR_Integer) 2:
#line 855 "prog_io.m"
            {
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_39;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__SectionContext_42;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_43;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemsCord_45;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_151_151;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_152_152;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__V_153_153;
#line 855 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_154_154;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_155_155;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_156_156;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_157_157;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_159_159;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__V_160_160;
#line 855 "prog_io.m"
              MR_Word parse_tree__prog_io__V_168_168;
#line 854 "prog_io.m"
              MR_Word parse_tree__prog_io___Specs_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 854 "prog_io.m"
              MR_Word parse_tree__prog_io___Errors_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 3)));
#line 861 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_40;

#line 860 "prog_io.m"
              {
#line 860 "prog_io.m"
                parse_tree__prog_io__Context_39 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_36);
              }
#line 861 "prog_io.m"
              {
#line 861 "prog_io.m"
                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_39, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68, &parse_tree__prog_io___MissingStartSectionWarning_40, parse_tree__prog_io__STATE_VARIABLE_Specs_0_75, &parse_tree__prog_io__STATE_VARIABLE_Specs_151_151, parse_tree__prog_io__STATE_VARIABLE_Errors_0_77, &parse_tree__prog_io__STATE_VARIABLE_Errors_152_152);
              }
#line 865 "prog_io.m"
              {
#line 865 "prog_io.m"
                parse_tree__prog_io__SectionContext_42 = mercury__term__context_init_0_f_0();
              }
#line 866 "prog_io.m"
              {
#line 866 "prog_io.m"
                parse_tree__prog_io__ItemSeqInitLookAhead_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_35));
#line 866 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_36));
#line 866 "prog_io.m"
              }
#line 869 "prog_io.m"
              {
#line 869 "prog_io.m"
                parse_tree__prog_io__V_153_153 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
              }
#line 867 "prog_io.m"
              {
#line 867 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_16_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_43, &parse_tree__prog_io__ItemSeqFinalLookAhead_44, parse_tree__prog_io__V_153_153, &parse_tree__prog_io__ItemsCord_45, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_154_154, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_155_155, parse_tree__prog_io__STATE_VARIABLE_Specs_151_151, &parse_tree__prog_io__STATE_VARIABLE_Specs_156_156, parse_tree__prog_io__STATE_VARIABLE_Errors_152_152, &parse_tree__prog_io__STATE_VARIABLE_Errors_157_157);
              }
#line 871 "prog_io.m"
              {
#line 871 "prog_io.m"
                parse_tree__prog_io__add_section_component_5_p_0((MR_Integer) 1, parse_tree__prog_io__SectionContext_42, parse_tree__prog_io__ItemsCord_45, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_159_159);
              }
#line 876 "prog_io.m"
              {
#line 876 "prog_io.m"
                parse_tree__prog_io__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_168_168, 0) = ((MR_Box) ((MR_Integer) 1));
#line 876 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_168_168, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_42));
#line 876 "prog_io.m"
              }
#line 876 "prog_io.m"
              {
#line 876 "prog_io.m"
                parse_tree__prog_io__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 876 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io__V_168_168));
#line 876 "prog_io.m"
              }
#line 875 "prog_io.m"
              /* direct tailcall eliminated */
#line 875 "prog_io.m"
              {
#line 875 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_160_160;
#line 875 "prog_io.m"
                MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 875 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_159_159;
#line 875 "prog_io.m"
                MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_154_154;
#line 875 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_155_155;
#line 875 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_156_156;
#line 875 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_157_157;

#line 875 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77;
#line 875 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75;
#line 875 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73;
#line 875 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71;
#line 875 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69;
#line 875 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 875 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68 = (MR_Integer) 0;
#line 875 "prog_io.m"
                parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 875 "prog_io.m"
              }
#line 875 "prog_io.m"
              continue;
#line 855 "prog_io.m"
            }
#line 843 "prog_io.m"
            break;
#line 843 "prog_io.m"
          case (MR_Integer) 3:
#line 881 "prog_io.m"
            {
#line 881 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 881 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 881 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));

#line 889 "prog_io.m"
#line 889 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_46)) {
#line 889 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 889 "prog_io.m"
                case (MR_Integer) 0:
#line 889 "prog_io.m"
                case (MR_Integer) 1:
#line 935 "prog_io.m"
                  {
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_85_85;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_86_86;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_88_88;
#line 935 "prog_io.m"
                    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_89_89;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_90_90;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_91_91;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_92_92;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_94_94;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_95_95;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_103_103;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionKind_191;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionContext_192;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_193;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_194;
#line 935 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemsCord_195;

#line 940 "prog_io.m"
#line 940 "prog_io.m"
                    switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_46)) {
#line 940 "prog_io.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 940 "prog_io.m"
                      case (MR_Integer) 0:
#line 940 "prog_io.m"
                      case (MR_Integer) 1:
#line 943 "prog_io.m"
                        {
#line 949 "prog_io.m"
                          if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "prog_io.m"
                            {
#line 950 "prog_io.m"
                              MR_Word parse_tree__prog_io__Context_181;
#line 952 "prog_io.m"
                              MR_Word parse_tree__prog_io___MissingStartSectionWarning_180;

#line 951 "prog_io.m"
                              {
#line 951 "prog_io.m"
                                parse_tree__prog_io__Context_181 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_204);
                              }
#line 952 "prog_io.m"
                              {
#line 952 "prog_io.m"
                                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_181, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68, &parse_tree__prog_io___MissingStartSectionWarning_180, parse_tree__prog_io__STATE_VARIABLE_Specs_0_75, &parse_tree__prog_io__STATE_VARIABLE_Specs_85_85, parse_tree__prog_io__STATE_VARIABLE_Errors_0_77, &parse_tree__prog_io__STATE_VARIABLE_Errors_86_86);
                              }
#line 957 "prog_io.m"
                              parse_tree__prog_io__SectionKind_191 = (MR_Integer) 1;
#line 958 "prog_io.m"
                              {
#line 958 "prog_io.m"
                                parse_tree__prog_io__SectionContext_192 = mercury__term__context_init_0_f_0();
                              }
#line 950 "prog_io.m"
                            }
#line 949 "prog_io.m"
                          else
#line 945 "prog_io.m"
                            {
#line 945 "prog_io.m"
                              MR_Word parse_tree__prog_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 945 "prog_io.m"
                              parse_tree__prog_io__SectionKind_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, (MR_Integer) 0)));
#line 945 "prog_io.m"
                              parse_tree__prog_io__SectionContext_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, (MR_Integer) 1)));
#line 945 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_85_85 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_75;
#line 945 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_86_86 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_77;
#line 945 "prog_io.m"
                            }
#line 960 "prog_io.m"
                          {
#line 960 "prog_io.m"
                            parse_tree__prog_io__ItemSeqInitLookAhead_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_193, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_203));
#line 960 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_193, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_204));
#line 960 "prog_io.m"
                          }
#line 943 "prog_io.m"
                        }
#line 940 "prog_io.m"
                        break;
#line 940 "prog_io.m"
                      case (MR_Integer) 3:
#line 938 "prog_io.m"
                        {
#line 937 "prog_io.m"
                          MR_Integer parse_tree__prog_io___SectionSeqNum_62;

#line 937 "prog_io.m"
                          parse_tree__prog_io__SectionKind_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 1)));
#line 937 "prog_io.m"
                          parse_tree__prog_io__SectionContext_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 2)));
#line 937 "prog_io.m"
                          parse_tree__prog_io___SectionSeqNum_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 3)));
#line 939 "prog_io.m"
                          parse_tree__prog_io__ItemSeqInitLookAhead_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 938 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_85_85 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_75;
#line 938 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_86_86 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_77;
#line 938 "prog_io.m"
                        }
#line 940 "prog_io.m"
                        break;
#line 940 "prog_io.m"
                    }
#line 966 "prog_io.m"
                    {
#line 966 "prog_io.m"
                      parse_tree__prog_io__V_88_88 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                    }
#line 964 "prog_io.m"
                    {
#line 964 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_16_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_193, &parse_tree__prog_io__ItemSeqFinalLookAhead_194, parse_tree__prog_io__V_88_88, &parse_tree__prog_io__ItemsCord_195, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_89_89, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_90_90, parse_tree__prog_io__STATE_VARIABLE_Specs_85_85, &parse_tree__prog_io__STATE_VARIABLE_Specs_91_91, parse_tree__prog_io__STATE_VARIABLE_Errors_86_86, &parse_tree__prog_io__STATE_VARIABLE_Errors_92_92);
                    }
#line 968 "prog_io.m"
                    {
#line 968 "prog_io.m"
                      parse_tree__prog_io__add_section_component_5_p_0(parse_tree__prog_io__SectionKind_191, parse_tree__prog_io__SectionContext_192, parse_tree__prog_io__ItemsCord_195, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_94_94);
                    }
#line 973 "prog_io.m"
                    {
#line 973 "prog_io.m"
                      parse_tree__prog_io__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_191));
#line 973 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_103_103, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_192));
#line 973 "prog_io.m"
                    }
#line 973 "prog_io.m"
                    {
#line 973 "prog_io.m"
                      parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 973 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_103_103));
#line 973 "prog_io.m"
                    }
#line 972 "prog_io.m"
                    /* direct tailcall eliminated */
#line 972 "prog_io.m"
                    {
#line 972 "prog_io.m"
                      MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_95_95;
#line 972 "prog_io.m"
                      MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_194;
#line 972 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_94_94;
#line 972 "prog_io.m"
                      MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_89_89;
#line 972 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_90_90;
#line 972 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_91_91;
#line 972 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_92_92;

#line 972 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Errors_0_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77;
#line 972 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Specs_0_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75;
#line 972 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73;
#line 972 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71;
#line 972 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69;
#line 972 "prog_io.m"
                      parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 972 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68 = (MR_Integer) 0;
#line 972 "prog_io.m"
                      parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 972 "prog_io.m"
                    }
#line 972 "prog_io.m"
                    continue;
#line 935 "prog_io.m"
                  }
#line 889 "prog_io.m"
                  break;
#line 889 "prog_io.m"
                case (MR_Integer) 2:
#line 883 "prog_io.m"
                  {
#line 883 "prog_io.m"
                    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_143_143 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOM_46, (MR_Integer) 0)));

#line 884 "prog_io.m"
                    /* direct tailcall eliminated */
#line 884 "prog_io.m"
                    {
#line 884 "prog_io.m"
                      MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_143_143;
#line 884 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81;

#line 884 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73;
#line 884 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71;
#line 884 "prog_io.m"
                      parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 884 "prog_io.m"
                    }
#line 884 "prog_io.m"
                    continue;
#line 883 "prog_io.m"
                  }
#line 889 "prog_io.m"
                  break;
#line 889 "prog_io.m"
                case (MR_Integer) 3:
#line 889 "prog_io.m"
#line 889 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 0)))) {
#line 889 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 889 "prog_io.m"
                    case (MR_Integer) 0:
#line 891 "prog_io.m"
                      {
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawStartModuleName_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 1)));
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartContext_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 2)));
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_51;
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__SubModuleFinalLookAhead_56;
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_129_129;
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_131_131;
#line 891 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_132_132;
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_133_133;
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_134_134;
#line 891 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_135_135;
#line 890 "prog_io.m"
                        MR_Integer parse_tree__prog_io___StartSeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 3)));

#line 895 "prog_io.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io__RawStartModuleName_47)) == (MR_mktag((MR_Integer) 1))))
#line 896 "prog_io.m"
                          {
#line 896 "prog_io.m"
                            MR_Word parse_tree__prog_io__RawModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_47, (MR_Integer) 0)));
#line 896 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_179 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_47, (MR_Integer) 1)));

#line 898 "prog_io.m"
                            {
#line 898 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__RawModuleName_52, parse_tree__prog_io__CurModuleName_21);
                            }
#line 901 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 900 "prog_io.m"
                              {
#line 900 "prog_io.m"
                                {
#line 900 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_51, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 900 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_51, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_179));
#line 900 "prog_io.m"
                                }
#line 900 "prog_io.m"
                                parse_tree__prog_io__STATE_VARIABLE_Specs_129_129 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_75;
#line 900 "prog_io.m"
                              }
#line 901 "prog_io.m"
                            else
#line 906 "prog_io.m"
                              {
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_53;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__Msg_54;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_55;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_106_106;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_109_109;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_110_110;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_111_111;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_114_114;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_115_115;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_124_124;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_125_125;
#line 906 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_126_126;

#line 904 "prog_io.m"
                                {
#line 904 "prog_io.m"
                                  parse_tree__prog_io__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 904 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_110_110, 1) = ((MR_Box) (parse_tree__prog_io__RawStartModuleName_47));
#line 904 "prog_io.m"
                                }
#line 906 "prog_io.m"
                                {
#line 906 "prog_io.m"
                                  parse_tree__prog_io__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 906 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_115_115, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 906 "prog_io.m"
                                }
#line 906 "prog_io.m"
                                {
#line 906 "prog_io.m"
                                  parse_tree__prog_io__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io__V_115_115));
#line 906 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 906 "prog_io.m"
                                }
#line 905 "prog_io.m"
                                {
#line 905 "prog_io.m"
                                  parse_tree__prog_io__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_111_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[57])));
#line 905 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_111_111, 1) = ((MR_Box) (parse_tree__prog_io__V_114_114));
#line 905 "prog_io.m"
                                }
#line 904 "prog_io.m"
                                {
#line 904 "prog_io.m"
                                  parse_tree__prog_io__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io__V_110_110));
#line 904 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io__V_111_111));
#line 904 "prog_io.m"
                                }
#line 903 "prog_io.m"
                                {
#line 903 "prog_io.m"
                                  parse_tree__prog_io__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[56])));
#line 903 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io__V_109_109));
#line 903 "prog_io.m"
                                }
#line 902 "prog_io.m"
                                {
#line 902 "prog_io.m"
                                  parse_tree__prog_io__Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[55])));
#line 902 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_53, 1) = ((MR_Box) (parse_tree__prog_io__V_106_106));
#line 902 "prog_io.m"
                                }
#line 907 "prog_io.m"
                                {
#line 907 "prog_io.m"
                                  parse_tree__prog_io__Msg_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 907 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_54, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_53));
#line 907 "prog_io.m"
                                }
#line 909 "prog_io.m"
                                {
#line 909 "prog_io.m"
                                  parse_tree__prog_io__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io__Msg_54));
#line 909 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io.m"
                                }
#line 909 "prog_io.m"
                                {
#line 909 "prog_io.m"
                                  parse_tree__prog_io__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 909 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_48));
#line 909 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io__V_126_126));
#line 909 "prog_io.m"
                                }
#line 909 "prog_io.m"
                                {
#line 909 "prog_io.m"
                                  parse_tree__prog_io__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io__V_125_125));
#line 909 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io.m"
                                }
#line 908 "prog_io.m"
                                {
#line 908 "prog_io.m"
                                  parse_tree__prog_io__Spec_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 908 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 908 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_55, 2) = ((MR_Box) (parse_tree__prog_io__V_124_124));
#line 908 "prog_io.m"
                                }
#line 910 "prog_io.m"
                                {
#line 910 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_129_129, 0) = ((MR_Box) (parse_tree__prog_io__Spec_55));
#line 910 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_129_129, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_75));
#line 910 "prog_io.m"
                                }
#line 917 "prog_io.m"
                                {
#line 917 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_51, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 917 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_51, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_179));
#line 917 "prog_io.m"
                                }
#line 906 "prog_io.m"
                              }
#line 896 "prog_io.m"
                          }
#line 895 "prog_io.m"
                        else
#line 893 "prog_io.m"
                          {
#line 893 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawStartModuleName_47, (MR_Integer) 0)));

#line 894 "prog_io.m"
                            {
#line 894 "prog_io.m"
                              parse_tree__prog_io__StartModuleName_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_51, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 894 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_51, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_50));
#line 894 "prog_io.m"
                            }
#line 893 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_129_129 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_75;
#line 893 "prog_io.m"
                          }
#line 920 "prog_io.m"
                        {
#line 920 "prog_io.m"
                          parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__MaybePrevSection_23, parse_tree__prog_io__StartModuleName_51, parse_tree__prog_io__StartContext_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__SubModuleFinalLookAhead_56, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_131_131, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_132_132, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_133_133, parse_tree__prog_io__STATE_VARIABLE_Specs_129_129, &parse_tree__prog_io__STATE_VARIABLE_Specs_134_134, parse_tree__prog_io__STATE_VARIABLE_Errors_0_77, &parse_tree__prog_io__STATE_VARIABLE_Errors_135_135);
                        }
#line 925 "prog_io.m"
                        /* direct tailcall eliminated */
#line 925 "prog_io.m"
                        {
#line 925 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__SubModuleFinalLookAhead_56;
#line 925 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_131_131;
#line 925 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_132_132;
#line 925 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_133_133;
#line 925 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_134_134;
#line 925 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_135_135;

#line 925 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77;
#line 925 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75;
#line 925 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73;
#line 925 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71;
#line 925 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69;
#line 925 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 925 "prog_io.m"
                        }
#line 925 "prog_io.m"
                        continue;
#line 891 "prog_io.m"
                      }
#line 889 "prog_io.m"
                      break;
#line 889 "prog_io.m"
                    case (MR_Integer) 1:
#line 979 "prog_io.m"
                      {
#line 979 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndedModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 1)));
#line 979 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndContext_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 2)));
#line 978 "prog_io.m"
                        MR_Integer parse_tree__prog_io___EndSeqNum_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 3)));

#line 980 "prog_io.m"
                        {
#line 980 "prog_io.m"
                          parse_tree__prog_io__handle_module_end_marker_11_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__IOMVarSet_203, parse_tree__prog_io__IOMTerm_204, parse_tree__prog_io__EndedModuleName_65, parse_tree__prog_io__EndContext_66, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_75, parse_tree__prog_io__STATE_VARIABLE_Specs_76, parse_tree__prog_io__STATE_VARIABLE_Errors_0_77, parse_tree__prog_io__STATE_VARIABLE_Errors_78);
                        }
#line 979 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_70 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69;
#line 979 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_72 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71;
#line 979 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81;
#line 979 "prog_io.m"
                      }
#line 889 "prog_io.m"
                      break;
#line 889 "prog_io.m"
                    case (MR_Integer) 2:
#line 935 "prog_io.m"
                      {
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_85_85;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_86_86;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_88_88;
#line 935 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_89_89;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_90_90;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_91_91;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_92_92;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_94_94;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_95_95;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_103_103;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_191;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_192;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_193;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_194;
#line 935 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_195;

#line 940 "prog_io.m"
#line 940 "prog_io.m"
                        switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_46)) {
#line 940 "prog_io.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 940 "prog_io.m"
                          case (MR_Integer) 0:
#line 940 "prog_io.m"
                          case (MR_Integer) 1:
#line 943 "prog_io.m"
                            {
#line 949 "prog_io.m"
                              if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "prog_io.m"
                                {
#line 950 "prog_io.m"
                                  MR_Word parse_tree__prog_io__Context_181;
#line 952 "prog_io.m"
                                  MR_Word parse_tree__prog_io___MissingStartSectionWarning_180;

#line 951 "prog_io.m"
                                  {
#line 951 "prog_io.m"
                                    parse_tree__prog_io__Context_181 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_204);
                                  }
#line 952 "prog_io.m"
                                  {
#line 952 "prog_io.m"
                                    parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_181, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68, &parse_tree__prog_io___MissingStartSectionWarning_180, parse_tree__prog_io__STATE_VARIABLE_Specs_0_75, &parse_tree__prog_io__STATE_VARIABLE_Specs_85_85, parse_tree__prog_io__STATE_VARIABLE_Errors_0_77, &parse_tree__prog_io__STATE_VARIABLE_Errors_86_86);
                                  }
#line 957 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_191 = (MR_Integer) 1;
#line 958 "prog_io.m"
                                  {
#line 958 "prog_io.m"
                                    parse_tree__prog_io__SectionContext_192 = mercury__term__context_init_0_f_0();
                                  }
#line 950 "prog_io.m"
                                }
#line 949 "prog_io.m"
                              else
#line 945 "prog_io.m"
                                {
#line 945 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 945 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, (MR_Integer) 0)));
#line 945 "prog_io.m"
                                  parse_tree__prog_io__SectionContext_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, (MR_Integer) 1)));
#line 945 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_85_85 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_75;
#line 945 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Errors_86_86 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_77;
#line 945 "prog_io.m"
                                }
#line 960 "prog_io.m"
                              {
#line 960 "prog_io.m"
                                parse_tree__prog_io__ItemSeqInitLookAhead_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_193, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_203));
#line 960 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_193, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_204));
#line 960 "prog_io.m"
                              }
#line 943 "prog_io.m"
                            }
#line 940 "prog_io.m"
                            break;
#line 940 "prog_io.m"
                          case (MR_Integer) 3:
#line 938 "prog_io.m"
                            {
#line 937 "prog_io.m"
                              MR_Integer parse_tree__prog_io___SectionSeqNum_62;

#line 937 "prog_io.m"
                              parse_tree__prog_io__SectionKind_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 1)));
#line 937 "prog_io.m"
                              parse_tree__prog_io__SectionContext_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 2)));
#line 937 "prog_io.m"
                              parse_tree__prog_io___SectionSeqNum_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_46, (MR_Integer) 3)));
#line 939 "prog_io.m"
                              parse_tree__prog_io__ItemSeqInitLookAhead_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 938 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_85_85 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_75;
#line 938 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_86_86 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_77;
#line 938 "prog_io.m"
                            }
#line 940 "prog_io.m"
                            break;
#line 940 "prog_io.m"
                        }
#line 966 "prog_io.m"
                        {
#line 966 "prog_io.m"
                          parse_tree__prog_io__V_88_88 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                        }
#line 964 "prog_io.m"
                        {
#line 964 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_16_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_193, &parse_tree__prog_io__ItemSeqFinalLookAhead_194, parse_tree__prog_io__V_88_88, &parse_tree__prog_io__ItemsCord_195, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_89_89, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81_81, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_90_90, parse_tree__prog_io__STATE_VARIABLE_Specs_85_85, &parse_tree__prog_io__STATE_VARIABLE_Specs_91_91, parse_tree__prog_io__STATE_VARIABLE_Errors_86_86, &parse_tree__prog_io__STATE_VARIABLE_Errors_92_92);
                        }
#line 968 "prog_io.m"
                        {
#line 968 "prog_io.m"
                          parse_tree__prog_io__add_section_component_5_p_0(parse_tree__prog_io__SectionKind_191, parse_tree__prog_io__SectionContext_192, parse_tree__prog_io__ItemsCord_195, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_94_94);
                        }
#line 973 "prog_io.m"
                        {
#line 973 "prog_io.m"
                          parse_tree__prog_io__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_191));
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_103_103, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_192));
#line 973 "prog_io.m"
                        }
#line 973 "prog_io.m"
                        {
#line 973 "prog_io.m"
                          parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_103_103));
#line 973 "prog_io.m"
                        }
#line 972 "prog_io.m"
                        /* direct tailcall eliminated */
#line 972 "prog_io.m"
                        {
#line 972 "prog_io.m"
                          MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_95_95;
#line 972 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_194;
#line 972 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_94_94;
#line 972 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_89_89;
#line 972 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_90_90;
#line 972 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_91_91;
#line 972 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_92_92;

#line 972 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_77 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_77;
#line 972 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_75 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_75;
#line 972 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_73 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_73;
#line 972 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_71 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_71;
#line 972 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_69 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_69;
#line 972 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 972 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_68 = (MR_Integer) 0;
#line 972 "prog_io.m"
                          parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 972 "prog_io.m"
                        }
#line 972 "prog_io.m"
                        continue;
#line 935 "prog_io.m"
                      }
#line 889 "prog_io.m"
                      break;
#line 889 "prog_io.m"
                  }
#line 889 "prog_io.m"
                  break;
#line 889 "prog_io.m"
              }
#line 881 "prog_io.m"
            }
#line 843 "prog_io.m"
            break;
#line 843 "prog_io.m"
        }
#line 836 "prog_io.m"
      }
#line 836 "prog_io.m"
      break;
#line 836 "prog_io.m"
    }
#line 824 "prog_io.m"
}

#line 757 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 757 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 757 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28)
#line 757 "prog_io.m"
{
#line 764 "prog_io.m"
  {
#line 764 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_17;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__InitLookAhead_18;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_19;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_20;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__FinalLookAhead_25;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleComponents_26;
#line 764 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_35_35;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37;
#line 764 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_41_41;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_42_42;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 764 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_48_48;
#line 764 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_49_49;

#line 764 "prog_io.m"
    {
#line 764 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 765 "prog_io.m"
    {
#line 765 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32);
    }
#line 767 "prog_io.m"
    {
#line 767 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_35_35);
    }
#line 768 "prog_io.m"
    {
#line 768 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37);
    }
#line 772 "prog_io.m"
    {
#line 772 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 0, parse_tree__prog_io__DefaultModuleName_9, &parse_tree__prog_io__ModuleDeclPresent_17, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, parse_tree__prog_io__STATE_VARIABLE_Errors_35_35, &parse_tree__prog_io__STATE_VARIABLE_Errors_42_42);
    }
#line 789 "prog_io.m"
#line 789 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_17)) {
#line 789 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 789 "prog_io.m"
      case (MR_Integer) 0:
#line 776 "prog_io.m"
        {
#line 776 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 780 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = parse_tree__prog_io__DefaultModuleName_9;
#line 784 "prog_io.m"
          if ((parse_tree__prog_io__InitLookAhead_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "prog_io.m"
            {
#line 783 "prog_io.m"
              parse_tree__prog_io__ModuleNameContext_20 = mercury__term__context_init_0_f_0();
            }
#line 784 "prog_io.m"
          else
#line 786 "prog_io.m"
            {
#line 786 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAheadTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 1)));
#line 785 "prog_io.m"
              MR_Word parse_tree__prog_io___InitLookAheadVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 0)));

#line 787 "prog_io.m"
              {
#line 787 "prog_io.m"
                parse_tree__prog_io__ModuleNameContext_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__InitLookAheadTerm_22);
              }
#line 786 "prog_io.m"
            }
#line 776 "prog_io.m"
        }
#line 789 "prog_io.m"
        break;
#line 789 "prog_io.m"
      case (MR_Integer) 1:
#line 793 "prog_io.m"
        {
#line 792 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 792 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 794 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "prog_io.m"
        }
#line 789 "prog_io.m"
        break;
#line 789 "prog_io.m"
      case (MR_Integer) 2:
#line 797 "prog_io.m"
        {
#line 796 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 796 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 798 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 797 "prog_io.m"
        }
#line 789 "prog_io.m"
        break;
#line 789 "prog_io.m"
    }
#line 806 "prog_io.m"
    {
#line 806 "prog_io.m"
      parse_tree__prog_io__V_45_45 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 803 "prog_io.m"
    {
#line 803 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_18, &parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__V_45_45, &parse_tree__prog_io__ModuleComponents_26, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Errors_42_42, &parse_tree__prog_io__STATE_VARIABLE_Errors_49_49);
    }
#line 808 "prog_io.m"
    {
#line 808 "prog_io.m"
      parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_27, parse_tree__prog_io__STATE_VARIABLE_Errors_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_28);
    }
#line 810 "prog_io.m"
    {
#line 810 "prog_io.m"
      MR_Word base;
#line 810 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 810 "prog_io.m"
      *parse_tree__prog_io__ParseTree_10 = base;
#line 810 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_19));
#line 810 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_20));
#line 810 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleComponents_26));
#line 810 "prog_io.m"
    }
#line 764 "prog_io.m"
  }
#line 757 "prog_io.m"
}

#line 712 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_16_p_0(
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_18,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_19,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_20,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_22,
#line 712 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_33,
#line 712 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_34,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_35,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_36,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_37,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_38,
#line 712 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_39,
#line 712 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_40)
#line 712 "prog_io.m"
{
#line 720 "prog_io.m"
  {
#line 720 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 720 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_50_50;
#line 720 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_29;
#line 720 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_30;
#line 720 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemsCord_31;
#line 720 "prog_io.m"
    MR_Word parse_tree__prog_io__RawItemBlock_32;
#line 720 "prog_io.m"
    MR_Word parse_tree__prog_io__V_43_43;
#line 720 "prog_io.m"
    MR_Word parse_tree__prog_io__V_49_49;

#line 722 "prog_io.m"
    {
#line 722 "prog_io.m"
      parse_tree__prog_io__SectionContext_29 = mercury__term__context_init_0_f_0();
    }
#line 723 "prog_io.m"
    {
#line 723 "prog_io.m"
      parse_tree__prog_io__ItemSeqInitLookAhead_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_30, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_19));
#line 723 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_30, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_20));
#line 723 "prog_io.m"
    }
#line 10144 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 725 "prog_io.m"
    {
#line 725 "prog_io.m"
      parse_tree__prog_io__V_43_43 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_50_50);
    }
#line 724 "prog_io.m"
    {
#line 724 "prog_io.m"
      parse_tree__prog_io__read_item_sequence_16_p_0(parse_tree__prog_io__Globals_17, parse_tree__prog_io__CurModuleName_18, parse_tree__prog_io__ItemSeqInitLookAhead_30, parse_tree__prog_io__FinalLookAhead_21, parse_tree__prog_io__V_43_43, &parse_tree__prog_io__ItemsCord_31, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_33, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_34, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_35, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_36, parse_tree__prog_io__STATE_VARIABLE_Specs_0_37, parse_tree__prog_io__STATE_VARIABLE_Specs_38, parse_tree__prog_io__STATE_VARIABLE_Errors_0_39, parse_tree__prog_io__STATE_VARIABLE_Errors_40);
    }
#line 728 "prog_io.m"
    {
#line 728 "prog_io.m"
      parse_tree__prog_io__V_49_49 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_50_50, parse_tree__prog_io__ItemsCord_31);
    }
#line 727 "prog_io.m"
    {
#line 727 "prog_io.m"
      parse_tree__prog_io__RawItemBlock_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 727 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_32, 0) = ((MR_Box) ((MR_Integer) 0));
#line 727 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_32, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_29));
#line 727 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_32, 2) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 727 "prog_io.m"
    }
#line 729 "prog_io.m"
    {
#line 729 "prog_io.m"
      MR_Word base;
#line 729 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 729 "prog_io.m"
      *parse_tree__prog_io__MaybeRawItemBlock_22 = base;
#line 729 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_32));
#line 729 "prog_io.m"
    }
#line 720 "prog_io.m"
  }
#line 712 "prog_io.m"
}

#line 565 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_16_p_0(
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_18,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_50,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_22,
#line 565 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51,
#line 565 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_55,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_56,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_57,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_58)
#line 565 "prog_io.m"
{
#line 575 "prog_io.m"
  while (MR_TRUE)
#line 575 "prog_io.m"
    {
#line 575 "prog_io.m"
      /* tailcall optimized into a loop */
#line 575 "prog_io.m"
      {
#line 575 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 575 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_28;
#line 575 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;

#line 576 "prog_io.m"
        {
#line 576 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_20, parse_tree__prog_io__CurModuleName_18, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, &parse_tree__prog_io__ReadIOMResult_28, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61);
        }
#line 583 "prog_io.m"
#line 583 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_28)) {
#line 583 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 583 "prog_io.m"
          case (MR_Integer) 0:
#line 579 "prog_io.m"
            {
#line 581 "prog_io.m"
              *parse_tree__prog_io__MaybeRawItemBlock_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 579 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 579 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_56 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_55;
#line 579 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_58 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_57;
#line 579 "prog_io.m"
            }
#line 583 "prog_io.m"
            break;
#line 583 "prog_io.m"
          case (MR_Integer) 1:
#line 584 "prog_io.m"
            {
#line 584 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_29 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_28), (MR_Integer) 1);
#line 584 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 584 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_94_94;

#line 587 "prog_io.m"
              {
#line 587 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_29));
#line 587 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_55));
#line 587 "prog_io.m"
              }
#line 588 "prog_io.m"
              {
#line 588 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, &parse_tree__prog_io__STATE_VARIABLE_Errors_94_94);
              }
#line 589 "prog_io.m"
              /* direct tailcall eliminated */
#line 589 "prog_io.m"
              {
#line 589 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 589 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_55 = parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 589 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_57 = parse_tree__prog_io__STATE_VARIABLE_Errors_94_94;

#line 589 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_57 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_57;
#line 589 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_55 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_55;
#line 589 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_53;
#line 589 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "prog_io.m"
              }
#line 589 "prog_io.m"
              continue;
#line 584 "prog_io.m"
            }
#line 583 "prog_io.m"
            break;
#line 583 "prog_io.m"
          case (MR_Integer) 2:
#line 595 "prog_io.m"
            {
#line 595 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_28, (MR_Integer) 0)));
#line 595 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_28, (MR_Integer) 1)));
#line 595 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_85_85;
#line 595 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_86_86;
#line 594 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemSpecs_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_28, (MR_Integer) 2)));
#line 594 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemErrors_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_28, (MR_Integer) 3)));
#line 596 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_34;
#line 601 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_35;

#line 596 "prog_io.m"
              {
#line 596 "prog_io.m"
                parse_tree__prog_io__Context_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_31);
              }
#line 601 "prog_io.m"
              {
#line 601 "prog_io.m"
                parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_50, &parse_tree__prog_io___MissingStartSectionWarning_35, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, &parse_tree__prog_io__STATE_VARIABLE_Specs_85_85, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, &parse_tree__prog_io__STATE_VARIABLE_Errors_86_86);
              }
#line 604 "prog_io.m"
              {
#line 604 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_16_p_0(parse_tree__prog_io__Globals_17, parse_tree__prog_io__CurModuleName_18, parse_tree__prog_io__IOMVarSet_30, parse_tree__prog_io__IOMTerm_31, parse_tree__prog_io__FinalLookAhead_21, parse_tree__prog_io__MaybeRawItemBlock_22, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54, parse_tree__prog_io__STATE_VARIABLE_Specs_85_85, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_86_86, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
#line 604 "prog_io.m"
                return;
              }
#line 595 "prog_io.m"
            }
#line 583 "prog_io.m"
            break;
#line 583 "prog_io.m"
          case (MR_Integer) 3:
#line 609 "prog_io.m"
            {
#line 609 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_28, (MR_Integer) 2)));
#line 609 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_28, (MR_Integer) 0)));
#line 609 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_28, (MR_Integer) 1)));

#line 616 "prog_io.m"
#line 616 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_36)) {
#line 616 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 616 "prog_io.m"
                case (MR_Integer) 0:
#line 616 "prog_io.m"
                case (MR_Integer) 1:
#line 628 "prog_io.m"
                  {
#line 628 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_63_63;
#line 628 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_64_64;
#line 629 "prog_io.m"
                    MR_Word parse_tree__prog_io__Context_102;
#line 633 "prog_io.m"
                    MR_Word parse_tree__prog_io___MissingStartSectionWarning_101;

#line 629 "prog_io.m"
                    {
#line 629 "prog_io.m"
                      parse_tree__prog_io__Context_102 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_107);
                    }
#line 633 "prog_io.m"
                    {
#line 633 "prog_io.m"
                      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_50, &parse_tree__prog_io___MissingStartSectionWarning_101, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, &parse_tree__prog_io__STATE_VARIABLE_Specs_63_63, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, &parse_tree__prog_io__STATE_VARIABLE_Errors_64_64);
                    }
#line 636 "prog_io.m"
                    {
#line 636 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_16_p_0(parse_tree__prog_io__Globals_17, parse_tree__prog_io__CurModuleName_18, parse_tree__prog_io__IOMVarSet_106, parse_tree__prog_io__IOMTerm_107, parse_tree__prog_io__FinalLookAhead_21, parse_tree__prog_io__MaybeRawItemBlock_22, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54, parse_tree__prog_io__STATE_VARIABLE_Specs_63_63, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_64_64, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
#line 636 "prog_io.m"
                      return;
                    }
#line 628 "prog_io.m"
                  }
#line 616 "prog_io.m"
                  break;
#line 616 "prog_io.m"
                case (MR_Integer) 2:
#line 611 "prog_io.m"
                  {
#line 611 "prog_io.m"
                    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78_78 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOM_36, (MR_Integer) 0)));

#line 612 "prog_io.m"
                    /* direct tailcall eliminated */
#line 612 "prog_io.m"
                    {
#line 612 "prog_io.m"
                      MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78_78;
#line 612 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;

#line 612 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_53;
#line 612 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_51;
#line 612 "prog_io.m"
                      parse_tree__prog_io__InitLookAhead_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "prog_io.m"
                    }
#line 612 "prog_io.m"
                    continue;
#line 611 "prog_io.m"
                  }
#line 616 "prog_io.m"
                  break;
#line 616 "prog_io.m"
                case (MR_Integer) 3:
#line 616 "prog_io.m"
#line 616 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_36, (MR_Integer) 0)))) {
#line 616 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 616 "prog_io.m"
                    case (MR_Integer) 0:
#line 616 "prog_io.m"
                    case (MR_Integer) 1:
#line 643 "prog_io.m"
                      {
#line 644 "prog_io.m"
                        {
#line 644 "prog_io.m"
                          MR_Word base;
#line 644 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io.m"
                          *parse_tree__prog_io__FinalLookAhead_21 = base;
#line 644 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_106));
#line 644 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_107));
#line 644 "prog_io.m"
                        }
#line 645 "prog_io.m"
                        *parse_tree__prog_io__MaybeRawItemBlock_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 643 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61;
#line 643 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_56 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_55;
#line 643 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Errors_58 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_57;
#line 643 "prog_io.m"
                      }
#line 616 "prog_io.m"
                      break;
#line 616 "prog_io.m"
                    case (MR_Integer) 2:
#line 618 "prog_io.m"
                      {
#line 618 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 618 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_36, (MR_Integer) 1)));
#line 618 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_36, (MR_Integer) 2)));
#line 618 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_40;
#line 618 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawItemBlock_41;
#line 618 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_71_71;
#line 618 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_77_77;
#line 617 "prog_io.m"
                        MR_Integer parse_tree__prog_io___SectionSeqNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_36, (MR_Integer) 3)));

#line 620 "prog_io.m"
                        {
#line 620 "prog_io.m"
                          parse_tree__prog_io__V_71_71 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_112_112);
                        }
#line 619 "prog_io.m"
                        {
#line 619 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_16_p_0(parse_tree__prog_io__Globals_17, parse_tree__prog_io__CurModuleName_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_21, parse_tree__prog_io__V_71_71, &parse_tree__prog_io__ItemsCord_40, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_61_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
                        }
#line 623 "prog_io.m"
                        {
#line 623 "prog_io.m"
                          parse_tree__prog_io__V_77_77 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_112_112, parse_tree__prog_io__ItemsCord_40);
                        }
#line 622 "prog_io.m"
                        {
#line 622 "prog_io.m"
                          parse_tree__prog_io__RawItemBlock_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 622 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_41, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_37));
#line 622 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_41, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_38));
#line 622 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_41, 2) = ((MR_Box) (parse_tree__prog_io__V_77_77));
#line 622 "prog_io.m"
                        }
#line 624 "prog_io.m"
                        {
#line 624 "prog_io.m"
                          MR_Word base;
#line 624 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_io.m"
                          *parse_tree__prog_io__MaybeRawItemBlock_22 = base;
#line 624 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_41));
#line 624 "prog_io.m"
                        }
#line 618 "prog_io.m"
                      }
#line 616 "prog_io.m"
                      break;
#line 616 "prog_io.m"
                  }
#line 616 "prog_io.m"
                  break;
#line 616 "prog_io.m"
              }
#line 609 "prog_io.m"
            }
#line 583 "prog_io.m"
            break;
#line 583 "prog_io.m"
        }
#line 575 "prog_io.m"
      }
#line 575 "prog_io.m"
      break;
#line 575 "prog_io.m"
    }
#line 565 "prog_io.m"
}

#line 521 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_16_p_0(
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_17,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_18,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_19,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_20,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_21,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeLastSection_22,
#line 521 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_37,
#line 521 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_38,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_39,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_41,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_42,
#line 521 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_43,
#line 521 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_44)
#line 521 "prog_io.m"
{
#line 529 "prog_io.m"
  {
#line 529 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 529 "prog_io.m"
    MR_Word parse_tree__prog_io__MidLookAhead_28;
#line 529 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeFirstRawItemBlock_29;
#line 529 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48;
#line 529 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49_49;
#line 529 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_50_50;
#line 529 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_51_51;

#line 530 "prog_io.m"
    {
#line 530 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_section_16_p_0(parse_tree__prog_io__Globals_17, parse_tree__prog_io__CurModuleName_18, (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_19, &parse_tree__prog_io__MidLookAhead_28, &parse_tree__prog_io__MaybeFirstRawItemBlock_29, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_37, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_39, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_0_41, &parse_tree__prog_io__STATE_VARIABLE_Specs_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_0_43, &parse_tree__prog_io__STATE_VARIABLE_Errors_51_51);
    }
#line 539 "prog_io.m"
    if ((parse_tree__prog_io__MaybeFirstRawItemBlock_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "prog_io.m"
      {
#line 536 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_20 = parse_tree__prog_io__MidLookAhead_28;
#line 537 "prog_io.m"
        *parse_tree__prog_io__RawItemBlocks_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "prog_io.m"
        *parse_tree__prog_io__MaybeLastSection_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 535 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_38 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48;
#line 535 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49_49;
#line 535 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_42 = parse_tree__prog_io__STATE_VARIABLE_Specs_50_50;
#line 535 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_44 = parse_tree__prog_io__STATE_VARIABLE_Errors_51_51;
#line 535 "prog_io.m"
      }
#line 539 "prog_io.m"
    else
#line 540 "prog_io.m"
      {
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstRawItemBlock_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFirstRawItemBlock_29, (MR_Integer) 0)));
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__LaterRawItemBlocks_31;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeLaterLastSection_32;

#line 541 "prog_io.m"
        {
#line 541 "prog_io.m"
          parse_tree__prog_io__read_parse_tree_int_sections_16_p_0(parse_tree__prog_io__Globals_17, parse_tree__prog_io__CurModuleName_18, parse_tree__prog_io__MidLookAhead_28, parse_tree__prog_io__FinalLookAhead_20, &parse_tree__prog_io__LaterRawItemBlocks_31, &parse_tree__prog_io__MaybeLaterLastSection_32, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_38, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49_49, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40, parse_tree__prog_io__STATE_VARIABLE_Specs_50_50, parse_tree__prog_io__STATE_VARIABLE_Specs_42, parse_tree__prog_io__STATE_VARIABLE_Errors_51_51, parse_tree__prog_io__STATE_VARIABLE_Errors_44);
        }
#line 545 "prog_io.m"
        {
#line 545 "prog_io.m"
          MR_Word base;
#line 545 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "prog_io.m"
          *parse_tree__prog_io__RawItemBlocks_21 = base;
#line 545 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstRawItemBlock_30));
#line 545 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__LaterRawItemBlocks_31));
#line 545 "prog_io.m"
        }
#line 549 "prog_io.m"
        if ((parse_tree__prog_io__MaybeLaterLastSection_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "prog_io.m"
          {
#line 550 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstSection_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstRawItemBlock_30, (MR_Integer) 0)));
#line 551 "prog_io.m"
            MR_Word parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstRawItemBlock_30, (MR_Integer) 1)));
#line 551 "prog_io.m"
            MR_Word parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstRawItemBlock_30, (MR_Integer) 2)));

#line 552 "prog_io.m"
            {
#line 552 "prog_io.m"
              MR_Word base;
#line 552 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "prog_io.m"
              *parse_tree__prog_io__MaybeLastSection_22 = base;
#line 552 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstSection_34));
#line 552 "prog_io.m"
            }
#line 550 "prog_io.m"
          }
#line 549 "prog_io.m"
        else
#line 548 "prog_io.m"
          *parse_tree__prog_io__MaybeLastSection_22 = parse_tree__prog_io__MaybeLaterLastSection_32;
#line 540 "prog_io.m"
      }
#line 529 "prog_io.m"
  }
#line 521 "prog_io.m"
}

#line 459 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 459 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 459 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 459 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 459 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 459 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_35,
#line 459 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_36)
#line 459 "prog_io.m"
{
#line 464 "prog_io.m"
  {
#line 464 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 464 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_17;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_19;
#line 464 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName1_20;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter1_21;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_26;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_27;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__IntItems_28;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__ImplItems_29;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_42_42;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_45_45;
#line 464 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_46_46;

#line 465 "prog_io.m"
    {
#line 465 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 466 "prog_io.m"
    {
#line 466 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__SourceFileName0_17);
    }
#line 468 "prog_io.m"
    {
#line 468 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_42_42);
    }
#line 469 "prog_io.m"
    {
#line 469 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 473 "prog_io.m"
    {
#line 473 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, parse_tree__prog_io__STATE_VARIABLE_Errors_42_42, &parse_tree__prog_io__STATE_VARIABLE_Errors_46_46);
    }
#line 490 "prog_io.m"
#line 490 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 490 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 490 "prog_io.m"
      case (MR_Integer) 0:
#line 477 "prog_io.m"
        {
#line 477 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAhead_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 477 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAheadContext_23;

#line 481 "prog_io.m"
          if ((parse_tree__prog_io__LookAhead_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "prog_io.m"
            {
#line 480 "prog_io.m"
              {
#line 480 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName0_17));
#line 480 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 480 "prog_io.m"
              }
#line 479 "prog_io.m"
            }
#line 481 "prog_io.m"
          else
#line 482 "prog_io.m"
            {
#line 482 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAheadTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 1)));
#line 482 "prog_io.m"
              MR_Word parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 0)));

#line 483 "prog_io.m"
              {
#line 483 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__LookAheadTerm_25);
              }
#line 482 "prog_io.m"
            }
#line 485 "prog_io.m"
          {
#line 485 "prog_io.m"
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, parse_tree__prog_io__STATE_VARIABLE_Specs_35, parse_tree__prog_io__STATE_VARIABLE_Errors_46_46, parse_tree__prog_io__STATE_VARIABLE_Errors_36);
          }
#line 486 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 487 "prog_io.m"
          {
#line 487 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 488 "prog_io.m"
          parse_tree__prog_io__IntItems_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "prog_io.m"
          parse_tree__prog_io__ImplItems_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "prog_io.m"
        }
#line 490 "prog_io.m"
        break;
#line 490 "prog_io.m"
      case (MR_Integer) 1:
#line 492 "prog_io.m"
        {
#line 491 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 491 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 493 "prog_io.m"
          {
#line 493 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, parse_tree__prog_io__STATE_VARIABLE_Specs_35, parse_tree__prog_io__STATE_VARIABLE_Errors_46_46, parse_tree__prog_io__STATE_VARIABLE_Errors_36);
          }
#line 495 "prog_io.m"
          parse_tree__prog_io__IntItems_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "prog_io.m"
          parse_tree__prog_io__ImplItems_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "prog_io.m"
        }
#line 490 "prog_io.m"
        break;
#line 490 "prog_io.m"
      case (MR_Integer) 2:
#line 499 "prog_io.m"
        {
#line 499 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_30;
#line 499 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemBlocks_31;
#line 499 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_33;
#line 499 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_34;
#line 499 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 499 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;
#line 499 "prog_io.m"
          MR_Word parse_tree__prog_io__V_52_52;
#line 500 "prog_io.m"
          MR_Word parse_tree__prog_io___MaybeLastSection_32;

#line 498 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 498 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 500 "prog_io.m"
          {
#line 500 "prog_io.m"
            parse_tree__prog_io__read_parse_tree_int_sections_16_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_30, &parse_tree__prog_io__ItemBlocks_31, &parse_tree__prog_io___MaybeLastSection_32, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_33, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_34, parse_tree__prog_io__STATE_VARIABLE_Specs_45_45, &parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_46_46, &parse_tree__prog_io__STATE_VARIABLE_Errors_50_50);
          }
#line 504 "prog_io.m"
          {
#line 504 "prog_io.m"
            parse_tree__prog_io__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 504 "prog_io.m"
          }
#line 504 "prog_io.m"
          {
#line 504 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_52_52, parse_tree__prog_io__FinalLookAhead_30, parse_tree__prog_io__SourceFileName_33, parse_tree__prog_io__SeqNumCounter_34, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_35, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_36);
          }
#line 507 "prog_io.m"
          {
#line 507 "prog_io.m"
            parse_tree__prog_item__separate_int_impl_items_5_p_0(parse_tree__prog_io__ItemBlocks_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__IntItems_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__ImplItems_29);
          }
#line 499 "prog_io.m"
        }
#line 490 "prog_io.m"
        break;
#line 490 "prog_io.m"
    }
#line 509 "prog_io.m"
    {
#line 509 "prog_io.m"
      MR_Word base;
#line 509 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 509 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 509 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 509 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 509 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 509 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__IntItems_28));
#line 509 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_io__ImplItems_29));
#line 509 "prog_io.m"
    }
#line 464 "prog_io.m"
  }
#line 459 "prog_io.m"
}

#line 392 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0(
#line 392 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_9,
#line 392 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 392 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_33,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_34)
#line 392 "prog_io.m"
{
#line 397 "prog_io.m"
  {
#line 397 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 397 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_17;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_19;
#line 397 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName1_20;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter1_21;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_26;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_27;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__Items_28;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_40_40;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_43_43;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_44_44;

#line 398 "prog_io.m"
    {
#line 398 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 399 "prog_io.m"
    {
#line 399 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__SourceFileName0_17);
    }
#line 401 "prog_io.m"
    {
#line 401 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_40_40);
    }
#line 402 "prog_io.m"
    {
#line 402 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 406 "prog_io.m"
    {
#line 406 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_43_43, parse_tree__prog_io__STATE_VARIABLE_Errors_40_40, &parse_tree__prog_io__STATE_VARIABLE_Errors_44_44);
    }
#line 422 "prog_io.m"
#line 422 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 422 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 422 "prog_io.m"
      case (MR_Integer) 0:
#line 410 "prog_io.m"
        {
#line 410 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAhead_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 410 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAheadContext_23;

#line 414 "prog_io.m"
          if ((parse_tree__prog_io__LookAhead_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "prog_io.m"
            {
#line 413 "prog_io.m"
              {
#line 413 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName0_17));
#line 413 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 413 "prog_io.m"
              }
#line 412 "prog_io.m"
            }
#line 414 "prog_io.m"
          else
#line 415 "prog_io.m"
            {
#line 415 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAheadTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 1)));
#line 415 "prog_io.m"
              MR_Word parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 0)));

#line 416 "prog_io.m"
              {
#line 416 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__LookAheadTerm_25);
              }
#line 415 "prog_io.m"
            }
#line 418 "prog_io.m"
          {
#line 418 "prog_io.m"
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_43_43, parse_tree__prog_io__STATE_VARIABLE_Specs_33, parse_tree__prog_io__STATE_VARIABLE_Errors_44_44, parse_tree__prog_io__STATE_VARIABLE_Errors_34);
          }
#line 419 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 420 "prog_io.m"
          {
#line 420 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 421 "prog_io.m"
          parse_tree__prog_io__Items_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "prog_io.m"
        }
#line 422 "prog_io.m"
        break;
#line 422 "prog_io.m"
      case (MR_Integer) 1:
#line 424 "prog_io.m"
        {
#line 423 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 423 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 425 "prog_io.m"
          {
#line 425 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_43_43, parse_tree__prog_io__STATE_VARIABLE_Specs_33, parse_tree__prog_io__STATE_VARIABLE_Errors_44_44, parse_tree__prog_io__STATE_VARIABLE_Errors_34);
          }
#line 427 "prog_io.m"
          parse_tree__prog_io__Items_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "prog_io.m"
        }
#line 422 "prog_io.m"
        break;
#line 422 "prog_io.m"
      case (MR_Integer) 2:
#line 430 "prog_io.m"
        {
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_62_62;
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_29;
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemsCord_30;
#line 430 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_31;
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_32;
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__V_47_47;
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_48_48;
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_49_49;
#line 430 "prog_io.m"
          MR_Word parse_tree__prog_io__V_51_51;

#line 429 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 429 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 11132 "parse_tree.prog_io.c"
          parse_tree__prog_io__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 432 "prog_io.m"
          {
#line 432 "prog_io.m"
            parse_tree__prog_io__V_47_47 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_62_62);
          }
#line 431 "prog_io.m"
          {
#line 431 "prog_io.m"
            parse_tree__prog_io__read_item_sequence_16_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_29, parse_tree__prog_io__V_47_47, &parse_tree__prog_io__ItemsCord_30, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_31, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_32, parse_tree__prog_io__STATE_VARIABLE_Specs_43_43, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Errors_44_44, &parse_tree__prog_io__STATE_VARIABLE_Errors_49_49);
          }
#line 434 "prog_io.m"
          {
#line 434 "prog_io.m"
            parse_tree__prog_io__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "prog_io.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 434 "prog_io.m"
          }
#line 434 "prog_io.m"
          {
#line 434 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_51_51, parse_tree__prog_io__FinalLookAhead_29, parse_tree__prog_io__SourceFileName_31, parse_tree__prog_io__SeqNumCounter_32, parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_33, parse_tree__prog_io__STATE_VARIABLE_Errors_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_34);
          }
#line 437 "prog_io.m"
          {
#line 437 "prog_io.m"
            parse_tree__prog_io__Items_28 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_62_62, parse_tree__prog_io__ItemsCord_30);
          }
#line 430 "prog_io.m"
        }
#line 422 "prog_io.m"
        break;
#line 422 "prog_io.m"
    }
#line 439 "prog_io.m"
    {
#line 439 "prog_io.m"
      MR_Word base;
#line 439 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 439 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 439 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 439 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 439 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 439 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__Items_28));
#line 439 "prog_io.m"
    }
#line 397 "prog_io.m"
  }
#line 392 "prog_io.m"
}

#line 297 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 297 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 297 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 297 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 297 "prog_io.m"
{
#line 300 "prog_io.m"
  {
#line 300 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 300 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 301 "prog_io.m"
    {
#line 301 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 301 "prog_io.m"
    {
#line 301 "prog_io.m"
      MR_Word base;
#line 301 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 301 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 301 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_4));
#line 301 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 301 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "prog_io.m"
    }
#line 300 "prog_io.m"
  }
#line 297 "prog_io.m"
}

#line 290 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 290 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 290 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 290 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 290 "prog_io.m"
{
#line 293 "prog_io.m"
  {
#line 293 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 293 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 294 "prog_io.m"
    {
#line 294 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 294 "prog_io.m"
    {
#line 294 "prog_io.m"
      MR_Word base;
#line 294 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 294 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 294 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_4));
#line 294 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 294 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "prog_io.m"
    }
#line 293 "prog_io.m"
  }
#line 290 "prog_io.m"
}

#line 285 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 285 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 285 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4)
#line 285 "prog_io.m"
{
#line 287 "prog_io.m"
  {
#line 287 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 287 "prog_io.m"
    MR_Word parse_tree__prog_io__V_5_5;
#line 287 "prog_io.m"
    MR_Word parse_tree__prog_io__V_6_6;

#line 288 "prog_io.m"
    {
#line 288 "prog_io.m"
      parse_tree__prog_io__V_5_5 = mercury__term__context_init_0_f_0();
    }
#line 288 "prog_io.m"
    {
#line 288 "prog_io.m"
      parse_tree__prog_io__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 288 "prog_io.m"
    {
#line 288 "prog_io.m"
      MR_Word base;
#line 288 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 288 "prog_io.m"
      *parse_tree__prog_io__ParseTree_4 = base;
#line 288 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_3));
#line 288 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__V_5_5));
#line 288 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_6_6));
#line 288 "prog_io.m"
    }
#line 287 "prog_io.m"
  }
#line 285 "prog_io.m"
}

#line 170 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__check_module_has_expected_name_4_p_0(
#line 170 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_5,
#line 170 "prog_io.m"
  MR_Word parse_tree__prog_io__ExpectedName_6,
#line 170 "prog_io.m"
  MR_Word parse_tree__prog_io__ActualName_7,
#line 170 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_8)
#line 170 "prog_io.m"
{
#line 264 "prog_io.m"
  {
#line 264 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 262 "prog_io.m"
    {
#line 262 "prog_io.m"
      parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__ActualName_7, parse_tree__prog_io__ExpectedName_6);
    }
#line 264 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 263 "prog_io.m"
      *parse_tree__prog_io__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 264 "prog_io.m"
    else
#line 268 "prog_io.m"
      {
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_9;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__Msg_10;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_11;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_15_15;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_16_16;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_43_43;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_44_44;
#line 268 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;

#line 265 "prog_io.m"
        {
#line 265 "prog_io.m"
          parse_tree__prog_io__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io__FileName_5));
#line 265 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__ExpectedName_6));
#line 267 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__ActualName_7));
#line 268 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 268 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[54])));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 268 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[53])));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 267 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 267 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[52])));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io__V_24_24));
#line 267 "prog_io.m"
        }
#line 266 "prog_io.m"
        {
#line 266 "prog_io.m"
          parse_tree__prog_io__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io__V_21_21));
#line 266 "prog_io.m"
        }
#line 266 "prog_io.m"
        {
#line 266 "prog_io.m"
          parse_tree__prog_io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[51])));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io__V_19_19));
#line 266 "prog_io.m"
        }
#line 265 "prog_io.m"
        {
#line 265 "prog_io.m"
          parse_tree__prog_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io__V_15_15));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io__V_16_16));
#line 265 "prog_io.m"
        }
#line 265 "prog_io.m"
        {
#line 265 "prog_io.m"
          parse_tree__prog_io__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[50])));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io__V_14_14));
#line 265 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_9));
#line 269 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__Msg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 2) = ((MR_Box) ((MR_Integer) 0));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 3) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 269 "prog_io.m"
        }
#line 270 "prog_io.m"
        {
#line 270 "prog_io.m"
          parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__Msg_10));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io.m"
        }
#line 270 "prog_io.m"
        {
#line 270 "prog_io.m"
          parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 270 "prog_io.m"
        }
#line 271 "prog_io.m"
        {
#line 271 "prog_io.m"
          MR_Word base;
#line 271 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io.m"
          *parse_tree__prog_io__Specs_8 = base;
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io.m"
        }
#line 268 "prog_io.m"
      }
#line 264 "prog_io.m"
  }
#line 170 "prog_io.m"
}

#line 252 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 252 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 252 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 252 "prog_io.m"
{
#line 252 "prog_io.m"
  {
#line 252 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__conv4_ParseTree_12;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_33;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_34;

#line 252 "prog_io.m"
    {
#line 252 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_opt_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv4_ParseTree_12, &parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_33, &parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_34);
    }
#line 252 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv4_ParseTree_12));
#line 252 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_33));
#line 252 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_34));
#line 252 "prog_io.m"
  }
#line 252 "prog_io.m"
}

#line 251 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 251 "prog_io.m"
{
#line 251 "prog_io.m"
  {
#line 251 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 251 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_ParseTree_6;

#line 251 "prog_io.m"
    {
#line 251 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_ParseTree_6);
    }
#line 251 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_ParseTree_6));
#line 251 "prog_io.m"
  }
#line 251 "prog_io.m"
}

#line 248 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 248 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 248 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 248 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 248 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3)
#line 248 "prog_io.m"
{
#line 248 "prog_io.m"
  {
#line 248 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__4_4;

#line 248 "prog_io.m"
    {
#line 248 "prog_io.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 5))), &parse_tree__prog_io__conv0_HeadVar__4_4);
    }
#line 248 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__4_4));
#line 248 "prog_io.m"
  }
#line 248 "prog_io.m"
}

#line 150 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0(
#line 150 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_10,
#line 150 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_11,
#line 150 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_12,
#line 150 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 150 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_14,
#line 150 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_15,
#line 150 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_16)
#line 150 "prog_io.m"
{
#line 246 "prog_io.m"
  {
#line 246 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__Dirs_18;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenFile_19;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSpecs_22;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_23;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__NameSpecs_27;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 249 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;
#line 249 "prog_io.m"
    MR_Word parse_tree__prog_io__V_21_21;
#line 249 "prog_io.m"
    MR_Box parse_tree__prog_io__conv5_ParseTree_14;
#line 254 "prog_io.m"
    MR_Word parse_tree__prog_io__V_24_24;
#line 254 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 254 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;

#line 247 "prog_io.m"
    {
#line 247 "prog_io.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__prog_io__Globals_11, (MR_Integer) 650, &parse_tree__prog_io__Dirs_18);
    }
#line 248 "prog_io.m"
    {
#line 248 "prog_io.m"
      parse_tree__prog_io__OpenFile_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 248 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_9[0]));
#line 248 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_1));
#line 248 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 248 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 3) = ((MR_Box) ((MR_Integer) 0));
#line 248 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 4) = ((MR_Box) (parse_tree__prog_io__Dirs_18));
#line 248 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 5) = ((MR_Box) (parse_tree__prog_io__FileName_12));
#line 248 "prog_io.m"
    }
#line 251 "prog_io.m"
    {
#line 251 "prog_io.m"
      parse_tree__prog_io__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[1]));
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_2));
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 251 "prog_io.m"
    }
#line 252 "prog_io.m"
    {
#line 252 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 252 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[1]));
#line 252 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_3));
#line 252 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 252 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 252 "prog_io.m"
    }
#line 249 "prog_io.m"
    {
#line 249 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_11, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__OpenFile_19, &parse_tree__prog_io__V_20_20, (MR_Word) &parse_tree__prog_io_scalar_common_3[1], &parse_tree__prog_io__V_21_21, parse_tree__prog_io__V_33_33, parse_tree__prog_io__V_34_34, &parse_tree__prog_io__conv5_ParseTree_14, &parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__Errors_16);
    }
#line 249 "prog_io.m"
    *parse_tree__prog_io__ParseTree_14 = ((MR_Word) parse_tree__prog_io__conv5_ParseTree_14);
#line 254 "prog_io.m"
    parse_tree__prog_io__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTree_14, (MR_Integer) 0)));
#line 254 "prog_io.m"
    parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTree_14, (MR_Integer) 1)));
#line 254 "prog_io.m"
    parse_tree__prog_io__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTree_14, (MR_Integer) 2)));
#line 254 "prog_io.m"
    parse_tree__prog_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTree_14, (MR_Integer) 3)));
#line 255 "prog_io.m"
    {
#line 255 "prog_io.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(parse_tree__prog_io__FileName_12, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__ModuleName_23, &parse_tree__prog_io__NameSpecs_27);
    }
#line 257 "prog_io.m"
    {
#line 257 "prog_io.m"
      *parse_tree__prog_io__Specs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__NameSpecs_27);
    }
#line 246 "prog_io.m"
  }
#line 150 "prog_io.m"
}

#line 240 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 240 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 240 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 240 "prog_io.m"
{
#line 240 "prog_io.m"
  {
#line 240 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 240 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_ParseTree_12;
#line 240 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_35;
#line 240 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_36;

#line 240 "prog_io.m"
    {
#line 240 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv3_ParseTree_12, &parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_35, &parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_36);
    }
#line 240 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv3_ParseTree_12));
#line 240 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_35));
#line 240 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_36));
#line 240 "prog_io.m"
  }
#line 240 "prog_io.m"
}

#line 239 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 239 "prog_io.m"
{
#line 239 "prog_io.m"
  {
#line 239 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 239 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_ParseTree_6;

#line 239 "prog_io.m"
    {
#line 239 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_ParseTree_6);
    }
#line 239 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_ParseTree_6));
#line 239 "prog_io.m"
  }
#line 239 "prog_io.m"
}

#line 134 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0(
#line 134 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_29,
#line 134 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_13,
#line 134 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 134 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 134 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 134 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 134 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 134 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 134 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_20,
#line 134 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_21,
#line 134 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_22)
#line 134 "prog_io.m"
{
#line 236 "prog_io.m"
  {
#line 236 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 236 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;
#line 236 "prog_io.m"
    MR_Word parse_tree__prog_io__V_27_27;
#line 237 "prog_io.m"
    MR_Box parse_tree__prog_io__conv4_ParseTree_20;

#line 239 "prog_io.m"
    {
#line 239 "prog_io.m"
      parse_tree__prog_io__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[0]));
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_1));
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 239 "prog_io.m"
    }
#line 240 "prog_io.m"
    {
#line 240 "prog_io.m"
      parse_tree__prog_io__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 240 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[0]));
#line 240 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_2));
#line 240 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 240 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 240 "prog_io.m"
    }
#line 237 "prog_io.m"
    {
#line 237 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__OpenFile_16, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ReadModuleAndTimestamps_18, parse_tree__prog_io__MaybeModuleTimestampRes_19, parse_tree__prog_io__V_26_26, parse_tree__prog_io__V_27_27, &parse_tree__prog_io__conv4_ParseTree_20, parse_tree__prog_io__Specs_21, parse_tree__prog_io__Errors_22);
    }
#line 237 "prog_io.m"
    *parse_tree__prog_io__ParseTree_20 = ((MR_Word) parse_tree__prog_io__conv4_ParseTree_20);
#line 236 "prog_io.m"
  }
#line 134 "prog_io.m"
}

#line 228 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_2(
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 228 "prog_io.m"
{
#line 228 "prog_io.m"
  {
#line 228 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 228 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_ParseTree_10;
#line 228 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27;
#line 228 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28;

#line 228 "prog_io.m"
    {
#line 228 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_7_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv3_ParseTree_10, &parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27, &parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28);
    }
#line 228 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv3_ParseTree_10));
#line 228 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27));
#line 228 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28));
#line 228 "prog_io.m"
  }
#line 228 "prog_io.m"
}

#line 228 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_1(
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 228 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 228 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 228 "prog_io.m"
{
#line 228 "prog_io.m"
  {
#line 228 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 228 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_ParseTree_4;

#line 228 "prog_io.m"
    {
#line 228 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_ParseTree_4);
    }
#line 228 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_ParseTree_4));
#line 228 "prog_io.m"
  }
#line 228 "prog_io.m"
}

#line 121 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0(
#line 121 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_27,
#line 121 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_12,
#line 121 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 121 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 121 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_15,
#line 121 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_16,
#line 121 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_17,
#line 121 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_18,
#line 121 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_19,
#line 121 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_20)
#line 121 "prog_io.m"
{
#line 225 "prog_io.m"
  {
#line 225 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 226 "prog_io.m"
    MR_Box parse_tree__prog_io__conv4_ParseTree_18;

#line 226 "prog_io.m"
    {
#line 226 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_12, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__FileData_15, parse_tree__prog_io__ReadModuleAndTimestamps_16, parse_tree__prog_io__MaybeModuleTimestampRes_17, (MR_Word) &parse_tree__prog_io_scalar_common_5[0], (MR_Word) &parse_tree__prog_io_scalar_common_5[1], &parse_tree__prog_io__conv4_ParseTree_18, parse_tree__prog_io__Specs_19, parse_tree__prog_io__Errors_20);
    }
#line 226 "prog_io.m"
    *parse_tree__prog_io__ParseTree_18 = ((MR_Word) parse_tree__prog_io__conv4_ParseTree_18);
#line 225 "prog_io.m"
  }
#line 121 "prog_io.m"
}

#line 105 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__peek_at_file_6_p_0(
#line 105 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_7,
#line 105 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName0_8,
#line 105 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_9,
#line 105 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_10)
#line 105 "prog_io.m"
{
#line 205 "prog_io.m"
  {
#line 205 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 205 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_12;
#line 205 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_13;
#line 205 "prog_io.m"
    MR_Word parse_tree__prog_io__V_24_24;
#line 207 "prog_io.m"
    MR_String parse_tree__prog_io___SourceFileName_14;
#line 207 "prog_io.m"
    MR_Word parse_tree__prog_io___SeqNumCounter_15;
#line 207 "prog_io.m"
    MR_Word parse_tree__prog_io___Errors_16;

#line 206 "prog_io.m"
    {
#line 206 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_12);
    }
#line 209 "prog_io.m"
    {
#line 209 "prog_io.m"
      parse_tree__prog_io__V_24_24 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 207 "prog_io.m"
    {
#line 207 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 0, parse_tree__prog_io__DefaultModuleName_7, &parse_tree__prog_io__ModuleDeclPresent_13, parse_tree__prog_io__SourceFileName0_8, &parse_tree__prog_io___SourceFileName_14, parse_tree__prog_io__SeqNumCounter0_12, &parse_tree__prog_io___SeqNumCounter_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__Specs_10, parse_tree__prog_io__V_24_24, &parse_tree__prog_io___Errors_16);
    }
#line 213 "prog_io.m"
#line 213 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_13)) {
#line 213 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 213 "prog_io.m"
      case (MR_Integer) 0:
#line 212 "prog_io.m"
        *parse_tree__prog_io__ModuleName_9 = parse_tree__prog_io__DefaultModuleName_7;
#line 213 "prog_io.m"
        break;
#line 213 "prog_io.m"
      case (MR_Integer) 1:
#line 214 "prog_io.m"
        {
#line 214 "prog_io.m"
          MR_Word parse_tree__prog_io___ModuleNameContext_18;

#line 214 "prog_io.m"
          *parse_tree__prog_io__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 0)));
#line 214 "prog_io.m"
          parse_tree__prog_io___ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 1)));
#line 214 "prog_io.m"
        }
#line 213 "prog_io.m"
        break;
#line 213 "prog_io.m"
      case (MR_Integer) 2:
#line 217 "prog_io.m"
        {
#line 217 "prog_io.m"
          MR_Word parse_tree__prog_io___ModuleNameContext_26;

#line 217 "prog_io.m"
          *parse_tree__prog_io__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 0)));
#line 217 "prog_io.m"
          parse_tree__prog_io___ModuleNameContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 1)));
#line 217 "prog_io.m"
        }
#line 213 "prog_io.m"
        break;
#line 213 "prog_io.m"
    }
#line 205 "prog_io.m"
  }
#line 105 "prog_io.m"
}

void mercury__parse_tree__prog_io__init(void)
{
}

void mercury__parse_tree__prog_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_make_dummy_parse_tree_1);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_lookahead_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_module_decl_present_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_require_module_decl_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_missing_section_start_warning_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_iom_result_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_parse_tree_1);
}

void mercury__parse_tree__prog_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io. */
