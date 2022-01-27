/*
** Automatically generated from `prog_io.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_item.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1109 "prog_io.m"
struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s {
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13;
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16;
#line 1120 "prog_io.m"
  MR_bool parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded;
#line 1129 "prog_io.m"
  jmp_buf parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0;
#line 1129 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90;
#line 1129 "prog_io.m"
  MR_Box parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90;
#line 1109 "prog_io.m"
};


#line 124 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 127 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 130 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 133 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 136 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 139 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0;

#line 142 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 145 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0;

#line 148 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1[2];

#line 151 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1;

#line 154 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0[1];

#line 157 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1[1];

#line 160 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_lookahead_0[2];

#line 163 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0[2];

#line 166 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0[2];

#line 169 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0[1];

#line 172 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0;

#line 175 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1[2];

#line 178 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1;

#line 181 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2[2];

#line 184 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2;

#line 187 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0[1];

#line 190 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1[1];

#line 193 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2[1];

#line 196 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_module_decl_present_0[3];

#line 199 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0[3];

#line 202 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0[3];

#line 205 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0;

#line 208 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1;

#line 211 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0[2];

#line 214 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0[2];

#line 217 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0[2];

#line 220 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0;

#line 223 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1;

#line 226 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0[2];

#line 229 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0[2];

#line 232 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0[2];

#line 235 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0;

#line 238 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1[1];

#line 241 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1;

#line 244 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 247 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 250 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2[4];

#line 253 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2;

#line 256 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3[3];

#line 259 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3;

#line 262 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0[1];

#line 265 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1[1];

#line 268 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2[1];

#line 271 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3[1];

#line 274 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_iom_result_0[4];

#line 277 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0[4];

#line 280 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0[4];

#line 283 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct7 parse_tree__prog_io____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 286 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0;

#line 289 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1;

#line 292 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_version_number_info_0_2[1];

#line 295 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2;

#line 298 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_0[2];

#line 301 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_1[1];

#line 304 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_version_number_info_0[2];

#line 307 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_version_number_info_0[3];

#line 310 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_version_number_info_0[3];

#line 313 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001(
#line 316 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 318 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 320 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 323 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001(
#line 326 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 328 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 330 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 332 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 335 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001(
#line 338 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 340 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 343 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001(
#line 346 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 348 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 350 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 353 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001(
#line 356 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 358 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 361 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001(
#line 364 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 366 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 368 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 371 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001(
#line 374 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 376 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 379 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001(
#line 382 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 384 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 386 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 389 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001(
#line 392 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 394 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 397 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001(
#line 400 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 402 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 404 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 407 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0_10001(
#line 410 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 412 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 415 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0_10001(
#line 418 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 420 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 422 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 425 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0_10001(
#line 428 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 430 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 432 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 435 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0_10001(
#line 438 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 440 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 442 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 444 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 447 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0_10001(
#line 450 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 452 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 455 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0_10001(
#line 458 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 460 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 462 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 278 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 278 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 278 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 282 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 282 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 282 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 666 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(
#line 666 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 666 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 666 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 666 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 666 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 666 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21);

#line 313 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_17,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__MakeDummyParseTree_20,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadParseTree_21,
#line 313 "prog_io.m"
  MR_Box * parse_tree__prog_io__ParseTree_22,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_23,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_24);

#line 1293 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0(
#line 1293 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1293 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0(
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 278 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 278 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 278 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1513 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1513 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1513 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 201 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0(
#line 201 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 201 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0(
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1161 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(
#line 1161 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1161 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1165 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1165 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1165 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1490 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1490 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1490 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 282 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 282 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 282 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1629 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1629 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1629 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20);

#line 1603 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1603 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1603 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1603 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33);

#line 1575 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1575 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1575 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19);

#line 1561 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1561 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1561 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15);

#line 1520 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1520 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1520 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1520 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1520 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1520 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1520 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11);

#line 1494 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1494 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1494 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1494 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1494 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1494 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1494 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);

#line 1445 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1445 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1445 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1445 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29);

#line 1405 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__record_version_numbers_6_p_0(
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__MVN_7,
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_8,
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15,
#line 1405 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_16,
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1405 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18);

#line 1332 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_20_p_0(
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_21,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_22,
#line 1332 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57,
#line 1332 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_58,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_24,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_25,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_59,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_60,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_62,
#line 1332 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_63,
#line 1332 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_64,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_66,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_67,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_68,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_69,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_70);

#line 1308 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_18_p_0(
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_20,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_21,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_22,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_32,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_33,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_34,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_35,
#line 1308 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_36,
#line 1308 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_37,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_38,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_39,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_40,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_41,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_42,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_43);

#line 1188 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1188 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50,
#line 1188 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_52,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_54,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_55,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_56,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_57);

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1109 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1109 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1109 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1109 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27);

#line 1063 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1063 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1063 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51);

#line 1030 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 1030 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 1030 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 1030 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21);

#line 1017 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_5_p_0(
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_6,
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_7,
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_8,
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11,
#line 1017 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12);

#line 843 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_73,
#line 843 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74,
#line 843 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_75,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_77,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_78,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_79,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_80,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_81);

#line 776 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28);

#line 729 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_21,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_22,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_36,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_37,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 729 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_38,
#line 729 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_40,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_42,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_43,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_44,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_45);

#line 574 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_18_p_0(
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_54,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_56,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 574 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57,
#line 574 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_61,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_62,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_63,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_64);

#line 539 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_18,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_19,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_34,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_23,
#line 539 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35,
#line 539 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_39,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_40,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_41,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42);

#line 462 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 462 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 462 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 462 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 462 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 462 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_37,
#line 462 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_38);

#line 394 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0(
#line 394 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_9,
#line 394 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 394 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 394 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 394 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_34,
#line 394 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_35);

#line 299 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 299 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 299 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 299 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 292 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 292 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 292 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 292 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 287 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 287 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 287 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4);

#line 254 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 253 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 253 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 253 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 253 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 250 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 250 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 250 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3);

#line 242 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 241 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 241 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 241 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 241 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 230 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_2(
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 230 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_1(
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[97][2];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[8][1];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[2][3];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_7[2][6];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_8[2][11];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_9[1][9];




static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[97][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected version_numbers record"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[18])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "generated this file."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the Mercury compiler that"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "record. This indicates an internal error"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: duplicate version_numbers"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "interface files."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "except in automatically generated"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not appear anywhere"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[8])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: source file"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains module named"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 92 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 96 */
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

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[8][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[22])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[48])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[56])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[61])))
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
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
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
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
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
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)),
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



#line 2050 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2058 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 2066 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2074 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2083 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2093 "parse_tree.prog_io.c"
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

#line 2110 "parse_tree.prog_io.c"
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

#line 2125 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2133 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2141 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0
};

#line 2147 "parse_tree.prog_io.c"
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

#line 2162 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0
};

#line 2167 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1
};

#line 2172 "parse_tree.prog_io.c"
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

#line 2186 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0
};

#line 2192 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2198 "parse_tree.prog_io.c"
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

#line 2215 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_lookahead_0
};

#line 2220 "parse_tree.prog_io.c"
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

#line 2235 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2241 "parse_tree.prog_io.c"
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

#line 2256 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2262 "parse_tree.prog_io.c"
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

#line 2277 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0
};

#line 2282 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1
};

#line 2287 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2
};

#line 2292 "parse_tree.prog_io.c"
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

#line 2311 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1
};

#line 2318 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2325 "parse_tree.prog_io.c"
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

#line 2342 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0 = {
  (MR_String) "dont_require_module_decl",
  (MR_Integer) 0
};

#line 2348 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1 = {
  (MR_String) "require_module_decl",
  (MR_Integer) 1
};

#line 2354 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1
};

#line 2360 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1
};

#line 2366 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2372 "parse_tree.prog_io.c"
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

#line 2389 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0 = {
  (MR_String) "have_not_given_missing_section_start_warning",
  (MR_Integer) 0
};

#line 2395 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1 = {
  (MR_String) "have_given_missing_section_start_warning",
  (MR_Integer) 1
};

#line 2401 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1
};

#line 2407 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0
};

#line 2413 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2419 "parse_tree.prog_io.c"
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

#line 2436 "parse_tree.prog_io.c"
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

#line 2451 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2456 "parse_tree.prog_io.c"
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

#line 2471 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2479 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 2487 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 2495 "parse_tree.prog_io.c"
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

#line 2510 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_item_or_marker_0
};

#line 2517 "parse_tree.prog_io.c"
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

#line 2532 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0
};

#line 2537 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1
};

#line 2542 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2
};

#line 2547 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3
};

#line 2552 "parse_tree.prog_io.c"
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

#line 2576 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0[4] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1
};

#line 2584 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2592 "parse_tree.prog_io.c"
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

#line 2609 "parse_tree.prog_io.c"
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

#line 2624 "parse_tree.prog_io.c"
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

#line 2641 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0 = {
  (MR_String) "dont_allow_version_numbers",
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

#line 2656 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1 = {
  (MR_String) "allow_version_numbers_not_seen",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2671 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_version_number_info_0_2[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
};

#line 2676 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2 = {
  (MR_String) "allow_version_numbers_seen",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io__parse_tree__prog_io__field_types_version_number_info_0_2,
  NULL,
  NULL,
  NULL
};

#line 2691 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1
};

#line 2697 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2
};

#line 2702 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_version_number_info_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_1
  }
};

#line 2716 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_version_number_info_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0
};

#line 2723 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_version_number_info_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2730 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_version_number_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io____Unify____version_number_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____version_number_info_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "version_number_info",
  {     parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_version_number_info_0 },
  {     parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_version_number_info_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_version_number_info_0
};

#line 2747 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001(
#line 2750 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2752 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2754 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2756 "parse_tree.prog_io.c"
{
#line 2758 "parse_tree.prog_io.c"
  {
#line 2760 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2763 "parse_tree.prog_io.c"
    {
#line 2765 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2768 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2770 "parse_tree.prog_io.c"
  }
#line 2772 "parse_tree.prog_io.c"
}

#line 2775 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001(
#line 2778 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2780 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 2782 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 2784 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4)
#line 2786 "parse_tree.prog_io.c"
{
#line 2788 "parse_tree.prog_io.c"
  {
#line 2790 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2793 "parse_tree.prog_io.c"
    {
#line 2795 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_3), ((MR_Word) parse_tree__prog_io__wrapper_arg_4));
    }
#line 2798 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2800 "parse_tree.prog_io.c"
  }
#line 2802 "parse_tree.prog_io.c"
}

#line 2805 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001(
#line 2808 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2810 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2812 "parse_tree.prog_io.c"
{
#line 2814 "parse_tree.prog_io.c"
  {
#line 2816 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2819 "parse_tree.prog_io.c"
    {
#line 2821 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_lookahead_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2824 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2826 "parse_tree.prog_io.c"
  }
#line 2828 "parse_tree.prog_io.c"
}

#line 2831 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001(
#line 2834 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2836 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2838 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2840 "parse_tree.prog_io.c"
{
#line 2842 "parse_tree.prog_io.c"
  {
#line 2844 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2847 "parse_tree.prog_io.c"
    {
#line 2849 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_lookahead_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2852 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2854 "parse_tree.prog_io.c"
  }
#line 2856 "parse_tree.prog_io.c"
}

#line 2859 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001(
#line 2862 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2864 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2866 "parse_tree.prog_io.c"
{
#line 2868 "parse_tree.prog_io.c"
  {
#line 2870 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2873 "parse_tree.prog_io.c"
    {
#line 2875 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2878 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2880 "parse_tree.prog_io.c"
  }
#line 2882 "parse_tree.prog_io.c"
}

#line 2885 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001(
#line 2888 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2890 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2892 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2894 "parse_tree.prog_io.c"
{
#line 2896 "parse_tree.prog_io.c"
  {
#line 2898 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2901 "parse_tree.prog_io.c"
    {
#line 2903 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2906 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2908 "parse_tree.prog_io.c"
  }
#line 2910 "parse_tree.prog_io.c"
}

#line 2913 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001(
#line 2916 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2918 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2920 "parse_tree.prog_io.c"
{
#line 2922 "parse_tree.prog_io.c"
  {
#line 2924 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2927 "parse_tree.prog_io.c"
    {
#line 2929 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2932 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2934 "parse_tree.prog_io.c"
  }
#line 2936 "parse_tree.prog_io.c"
}

#line 2939 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001(
#line 2942 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2944 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2946 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2948 "parse_tree.prog_io.c"
{
#line 2950 "parse_tree.prog_io.c"
  {
#line 2952 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2955 "parse_tree.prog_io.c"
    {
#line 2957 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2960 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2962 "parse_tree.prog_io.c"
  }
#line 2964 "parse_tree.prog_io.c"
}

#line 2967 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001(
#line 2970 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2972 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2974 "parse_tree.prog_io.c"
{
#line 2976 "parse_tree.prog_io.c"
  {
#line 2978 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2981 "parse_tree.prog_io.c"
    {
#line 2983 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____missing_section_start_warning_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2986 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2988 "parse_tree.prog_io.c"
  }
#line 2990 "parse_tree.prog_io.c"
}

#line 2993 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001(
#line 2996 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2998 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3000 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3002 "parse_tree.prog_io.c"
{
#line 3004 "parse_tree.prog_io.c"
  {
#line 3006 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3009 "parse_tree.prog_io.c"
    {
#line 3011 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____missing_section_start_warning_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3014 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3016 "parse_tree.prog_io.c"
  }
#line 3018 "parse_tree.prog_io.c"
}

#line 3021 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0_10001(
#line 3024 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3026 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3028 "parse_tree.prog_io.c"
{
#line 3030 "parse_tree.prog_io.c"
  {
#line 3032 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3035 "parse_tree.prog_io.c"
    {
#line 3037 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_iom_result_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3040 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3042 "parse_tree.prog_io.c"
  }
#line 3044 "parse_tree.prog_io.c"
}

#line 3047 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0_10001(
#line 3050 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3052 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3054 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3056 "parse_tree.prog_io.c"
{
#line 3058 "parse_tree.prog_io.c"
  {
#line 3060 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3063 "parse_tree.prog_io.c"
    {
#line 3065 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_iom_result_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3068 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3070 "parse_tree.prog_io.c"
  }
#line 3072 "parse_tree.prog_io.c"
}

#line 3075 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0_10001(
#line 3078 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3080 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3082 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3084 "parse_tree.prog_io.c"
{
#line 3086 "parse_tree.prog_io.c"
  {
#line 3088 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3091 "parse_tree.prog_io.c"
    {
#line 3093 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3096 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3098 "parse_tree.prog_io.c"
  }
#line 3100 "parse_tree.prog_io.c"
}

#line 3103 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0_10001(
#line 3106 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3108 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 3110 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 3112 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4)
#line 3114 "parse_tree.prog_io.c"
{
#line 3116 "parse_tree.prog_io.c"
  {
#line 3118 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3121 "parse_tree.prog_io.c"
    {
#line 3123 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_3), ((MR_Word) parse_tree__prog_io__wrapper_arg_4));
    }
#line 3126 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3128 "parse_tree.prog_io.c"
  }
#line 3130 "parse_tree.prog_io.c"
}

#line 3133 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0_10001(
#line 3136 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3138 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3140 "parse_tree.prog_io.c"
{
#line 3142 "parse_tree.prog_io.c"
  {
#line 3144 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3147 "parse_tree.prog_io.c"
    {
#line 3149 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____version_number_info_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3152 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3154 "parse_tree.prog_io.c"
  }
#line 3156 "parse_tree.prog_io.c"
}

#line 3159 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0_10001(
#line 3162 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3164 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3166 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3168 "parse_tree.prog_io.c"
{
#line 3170 "parse_tree.prog_io.c"
  {
#line 3172 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3175 "parse_tree.prog_io.c"
    {
#line 3177 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____version_number_info_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3180 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3182 "parse_tree.prog_io.c"
  }
#line 3184 "parse_tree.prog_io.c"
}

#line 278 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 278 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 278 "prog_io.m"
{
#line 278 "prog_io.m"
  {
#line 278 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 278 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 278 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 278 "prog_io.m"
    {
#line 278 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 278 "prog_io.m"
      return;
    }
#line 278 "prog_io.m"
  }
#line 278 "prog_io.m"
}

#line 278 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 278 "prog_io.m"
{
#line 278 "prog_io.m"
  {
#line 278 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 278 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 278 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 278 "prog_io.m"
    {
#line 278 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 278 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 278 "prog_io.m"
  }
#line 278 "prog_io.m"
}

#line 282 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 282 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 282 "prog_io.m"
{
#line 282 "prog_io.m"
  {
#line 282 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 282 "prog_io.m"
    {
#line 282 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 282 "prog_io.m"
      return;
    }
#line 282 "prog_io.m"
  }
#line 282 "prog_io.m"
}

#line 282 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 282 "prog_io.m"
{
#line 282 "prog_io.m"
  {
#line 282 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 282 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 282 "prog_io.m"
    {
#line 282 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 282 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 282 "prog_io.m"
  }
#line 282 "prog_io.m"
}

#line 666 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(
#line 666 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 666 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 666 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 666 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 666 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 666 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 666 "prog_io.m"
{
#line 673 "prog_io.m"
  {
#line 673 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 723 "prog_io.m"
#line 723 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 723 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 723 "prog_io.m"
      case (MR_Integer) 1:
#line 724 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 723 "prog_io.m"
        break;
#line 723 "prog_io.m"
      case (MR_Integer) 0:
#line 677 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 723 "prog_io.m"
        break;
#line 723 "prog_io.m"
    }
#line 673 "prog_io.m"
    *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 673 "prog_io.m"
    *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 673 "prog_io.m"
  }
#line 666 "prog_io.m"
}

#line 313 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_17,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__MakeDummyParseTree_20,
#line 313 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadParseTree_21,
#line 313 "prog_io.m"
  MR_Box * parse_tree__prog_io__ParseTree_22,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_23,
#line 313 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_24)
#line 313 "prog_io.m"
{
#line 323 "prog_io.m"
  {
#line 323 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 323 "prog_io.m"
    MR_Word parse_tree__prog_io__OldInputStream_26;
#line 323 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenResult_27;
#line 325 "prog_io.m"
    void MR_CALL (* parse_tree__prog_io__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 325 "prog_io.m"
    MR_Box parse_tree__prog_io__conv2_OpenResult_27;
#line 325 "prog_io.m"
    MR_Box parse_tree__prog_io__conv1_STATE_VARIABLE_IO_43_43;

#line 324 "prog_io.m"
    {
#line 324 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__OldInputStream_26);
    }
#line 325 "prog_io.m"
    parse_tree__prog_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_16, (MR_Integer) 1)));
#line 325 "prog_io.m"
    {
#line 325 "prog_io.m"
      parse_tree__prog_io__func_0(((MR_Box) parse_tree__prog_io__OpenFile_16), &parse_tree__prog_io__conv2_OpenResult_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 325 "prog_io.m"
    parse_tree__prog_io__OpenResult_27 = ((MR_Word) parse_tree__prog_io__conv2_OpenResult_27);
#line 366 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__OpenResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 367 "prog_io.m"
      {
#line 367 "prog_io.m"
        MR_String parse_tree__prog_io__ErrorMsg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0)));
#line 367 "prog_io.m"
        MR_String parse_tree__prog_io__Progname_37;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_38;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_39;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_47_47;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_50_50;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_51_51;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_58_58;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;
#line 367 "prog_io.m"
        MR_Word parse_tree__prog_io__V_63_63;
#line 369 "prog_io.m"
        void MR_CALL (* parse_tree__prog_io__func_3)(MR_Box, MR_Box, MR_Box *);

#line 368 "prog_io.m"
        *parse_tree__prog_io__MaybeFileData_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "prog_io.m"
        parse_tree__prog_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MakeDummyParseTree_20, (MR_Integer) 1)));
#line 369 "prog_io.m"
        {
#line 369 "prog_io.m"
          parse_tree__prog_io__func_3(((MR_Box) parse_tree__prog_io__MakeDummyParseTree_20), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22);
        }
#line 370 "prog_io.m"
        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "prog_io.m"
        {
#line 372 "prog_io.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io__Progname_37);
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__Progname_37));
#line 373 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_36));
#line 373 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io__V_51_51));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 373 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[96])));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 373 "prog_io.m"
        }
#line 373 "prog_io.m"
        {
#line 373 "prog_io.m"
          parse_tree__prog_io__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_38, 0) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 373 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_38, 1) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 373 "prog_io.m"
        }
#line 375 "prog_io.m"
        {
#line 375 "prog_io.m"
          parse_tree__prog_io__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_38));
#line 375 "prog_io.m"
        }
#line 375 "prog_io.m"
        {
#line 375 "prog_io.m"
          parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "prog_io.m"
        }
#line 375 "prog_io.m"
        {
#line 375 "prog_io.m"
          parse_tree__prog_io__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 375 "prog_io.m"
        }
#line 375 "prog_io.m"
        {
#line 375 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io__V_58_58));
#line 375 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "prog_io.m"
        }
#line 374 "prog_io.m"
        {
#line 374 "prog_io.m"
          parse_tree__prog_io__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 374 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 2) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 374 "prog_io.m"
        }
#line 376 "prog_io.m"
        {
#line 376 "prog_io.m"
          MR_Word base;
#line 376 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "prog_io.m"
          *parse_tree__prog_io__Specs_23 = base;
#line 376 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_39));
#line 376 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "prog_io.m"
        }
#line 377 "prog_io.m"
        {
#line 377 "prog_io.m"
          *parse_tree__prog_io__Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 367 "prog_io.m"
      }
#line 366 "prog_io.m"
    else
#line 327 "prog_io.m"
      {
#line 327 "prog_io.m"
        MR_Box parse_tree__prog_io__FileData_28 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0));
#line 327 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleInputStream_35;
#line 349 "prog_io.m"
        MR_Word parse_tree__prog_io__OldTimestamp_34;
#line 349 "prog_io.m"
        MR_Word parse_tree__prog_io__V_75_75;
#line 349 "prog_io.m"
        MR_Word parse_tree__prog_io__V_83_83;

#line 328 "prog_io.m"
        {
#line 328 "prog_io.m"
          MR_Word base;
#line 328 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io.m"
          *parse_tree__prog_io__MaybeFileData_17 = base;
#line 328 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io__FileData_28;
#line 328 "prog_io.m"
        }
#line 343 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__ReadModuleAndTimestamps_18)) == (MR_mktag((MR_Integer) 0))))
#line 343 "prog_io.m"
          {
#line 343 "prog_io.m"
            MR_Word parse_tree__prog_io__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReadModuleAndTimestamps_18, (MR_Integer) 0)));

#line 343 "prog_io.m"
#line 343 "prog_io.m"
            switch (parse_tree__prog_io__V_102_102) {
#line 343 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 343 "prog_io.m"
              case (MR_Integer) 0:
#line 332 "prog_io.m"
                {
#line 332 "prog_io.m"
                  MR_String parse_tree__prog_io__InputStreamName_30;
#line 332 "prog_io.m"
                  MR_Word parse_tree__prog_io__TimestampResult_31;

#line 333 "prog_io.m"
                  {
#line 333 "prog_io.m"
                    mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_30);
                  }
#line 334 "prog_io.m"
                  {
#line 334 "prog_io.m"
                    mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_30, &parse_tree__prog_io__TimestampResult_31);
                  }
#line 339 "prog_io.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_31)) == (MR_mktag((MR_Integer) 1))))
#line 340 "prog_io.m"
                    {
#line 340 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_72_72 = (MR_Word) parse_tree__prog_io__TimestampResult_31;

#line 341 "prog_io.m"
                      {
#line 341 "prog_io.m"
                        MR_Word base;
#line 341 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_io.m"
                        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 341 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 341 "prog_io.m"
                      }
#line 340 "prog_io.m"
                    }
#line 339 "prog_io.m"
                  else
#line 336 "prog_io.m"
                    {
#line 336 "prog_io.m"
                      MR_Word parse_tree__prog_io__Timestamp_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_31, (MR_Integer) 0)));
#line 336 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_73_73;
#line 336 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_74_74;

#line 338 "prog_io.m"
                      {
#line 338 "prog_io.m"
                        parse_tree__prog_io__V_74_74 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_32);
                      }
#line 338 "prog_io.m"
                      {
#line 338 "prog_io.m"
                        parse_tree__prog_io__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 338 "prog_io.m"
                      }
#line 338 "prog_io.m"
                      {
#line 338 "prog_io.m"
                        MR_Word base;
#line 338 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io.m"
                        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 338 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_73_73));
#line 338 "prog_io.m"
                      }
#line 336 "prog_io.m"
                    }
#line 332 "prog_io.m"
                }
#line 343 "prog_io.m"
                break;
#line 343 "prog_io.m"
              case (MR_Integer) 1:
#line 346 "prog_io.m"
                *parse_tree__prog_io__MaybeModuleTimestampRes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "prog_io.m"
                break;
#line 343 "prog_io.m"
            }
#line 343 "prog_io.m"
          }
#line 343 "prog_io.m"
        else
#line 332 "prog_io.m"
          {
#line 332 "prog_io.m"
            MR_String parse_tree__prog_io__InputStreamName_94;
#line 332 "prog_io.m"
            MR_Word parse_tree__prog_io__TimestampResult_95;

#line 333 "prog_io.m"
            {
#line 333 "prog_io.m"
              mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_94);
            }
#line 334 "prog_io.m"
            {
#line 334 "prog_io.m"
              mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_94, &parse_tree__prog_io__TimestampResult_95);
            }
#line 339 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_95)) == (MR_mktag((MR_Integer) 1))))
#line 340 "prog_io.m"
              {
#line 340 "prog_io.m"
                MR_Word parse_tree__prog_io__V_85_85 = (MR_Word) parse_tree__prog_io__TimestampResult_95;

#line 341 "prog_io.m"
                {
#line 341 "prog_io.m"
                  MR_Word base;
#line 341 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 341 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_85_85));
#line 341 "prog_io.m"
                }
#line 340 "prog_io.m"
              }
#line 339 "prog_io.m"
            else
#line 336 "prog_io.m"
              {
#line 336 "prog_io.m"
                MR_Word parse_tree__prog_io__Timestamp_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_95, (MR_Integer) 0)));
#line 336 "prog_io.m"
                MR_Word parse_tree__prog_io__V_87_87;
#line 336 "prog_io.m"
                MR_Word parse_tree__prog_io__V_88_88;

#line 338 "prog_io.m"
                {
#line 338 "prog_io.m"
                  parse_tree__prog_io__V_88_88 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_86);
                }
#line 338 "prog_io.m"
                {
#line 338 "prog_io.m"
                  parse_tree__prog_io__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io__V_88_88));
#line 338 "prog_io.m"
                }
#line 338 "prog_io.m"
                {
#line 338 "prog_io.m"
                  MR_Word base;
#line 338 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 338 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_87_87));
#line 338 "prog_io.m"
                }
#line 336 "prog_io.m"
              }
#line 332 "prog_io.m"
          }
#line 349 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ReadModuleAndTimestamps_18)) == (MR_mktag((MR_Integer) 1)));
#line 349 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 349 "prog_io.m"
          {
#line 349 "prog_io.m"
            parse_tree__prog_io__OldTimestamp_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadModuleAndTimestamps_18, (MR_Integer) 0)));
#line 350 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_io__MaybeModuleTimestampRes_19)) == (MR_mktag((MR_Integer) 1)));
#line 350 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 350 "prog_io.m"
              {
#line 350 "prog_io.m"
                parse_tree__prog_io__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io__MaybeModuleTimestampRes_19, (MR_Integer) 0)));
#line 350 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_75_75)) == (MR_mktag((MR_Integer) 0)));
#line 350 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 350 "prog_io.m"
                  {
#line 350 "prog_io.m"
                    parse_tree__prog_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, (MR_Integer) 0)));
#line 350 "prog_io.m"
                    {
#line 350 "prog_io.m"
                      parse_tree__prog_io__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__prog_io__OldTimestamp_34, parse_tree__prog_io__V_83_83);
                    }
#line 350 "prog_io.m"
                  }
#line 350 "prog_io.m"
              }
#line 349 "prog_io.m"
          }
#line 360 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 357 "prog_io.m"
          {
#line 357 "prog_io.m"
            void MR_CALL (* parse_tree__prog_io__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MakeDummyParseTree_20, (MR_Integer) 1)));

#line 357 "prog_io.m"
            {
#line 357 "prog_io.m"
              parse_tree__prog_io__func_4(((MR_Box) parse_tree__prog_io__MakeDummyParseTree_20), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22);
            }
#line 358 "prog_io.m"
            *parse_tree__prog_io__Specs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "prog_io.m"
            {
#line 359 "prog_io.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__Errors_24);
            }
#line 357 "prog_io.m"
          }
#line 360 "prog_io.m"
        else
#line 361 "prog_io.m"
          {
#line 361 "prog_io.m"
            void MR_CALL (* parse_tree__prog_io__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReadParseTree_21, (MR_Integer) 1)));
#line 361 "prog_io.m"
            MR_Box parse_tree__prog_io__conv8_Specs_23;
#line 361 "prog_io.m"
            MR_Box parse_tree__prog_io__conv7_Errors_24;
#line 361 "prog_io.m"
            MR_Box parse_tree__prog_io__conv6_STATE_VARIABLE_IO_76_76;

#line 361 "prog_io.m"
            {
#line 361 "prog_io.m"
              parse_tree__prog_io__func_5(((MR_Box) parse_tree__prog_io__ReadParseTree_21), ((MR_Box) (parse_tree__prog_io__Globals_14)), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22, &parse_tree__prog_io__conv8_Specs_23, &parse_tree__prog_io__conv7_Errors_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv6_STATE_VARIABLE_IO_76_76);
            }
#line 361 "prog_io.m"
            *parse_tree__prog_io__Specs_23 = ((MR_Word) parse_tree__prog_io__conv8_Specs_23);
#line 361 "prog_io.m"
            *parse_tree__prog_io__Errors_24 = ((MR_Word) parse_tree__prog_io__conv7_Errors_24);
#line 361 "prog_io.m"
          }
#line 364 "prog_io.m"
        {
#line 364 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__OldInputStream_26, &parse_tree__prog_io__ModuleInputStream_35);
        }
#line 365 "prog_io.m"
        {
#line 365 "prog_io.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io__ModuleInputStream_35);
#line 365 "prog_io.m"
          return;
        }
#line 327 "prog_io.m"
      }
#line 323 "prog_io.m"
  }
#line 313 "prog_io.m"
}

#line 1293 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0(
#line 1293 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1293 "prog_io.m"
{
#line 1293 "prog_io.m"
  {
#line 1293 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1293 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1293 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_11 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1293 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_10 == parse_tree__prog_io__CastY_11);
#line 1293 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 3921 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1293 "prog_io.m"
    else
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1293 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
        case (MR_Integer) 0:
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
          switch (MR_unmkbody(parse_tree__prog_io__HeadVar__2_2)) {
#line 1293 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
            case (MR_Integer) 0:
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1293 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
                case (MR_Integer) 0:
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
                  switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1293 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
                    case (MR_Integer) 0:
#line 1293 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1293 "prog_io.m"
                      break;
#line 1293 "prog_io.m"
                    case (MR_Integer) 1:
#line 1293 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1293 "prog_io.m"
                      break;
#line 1293 "prog_io.m"
                  }
#line 1293 "prog_io.m"
                  break;
#line 1293 "prog_io.m"
                case (MR_Integer) 1:
#line 3969 "parse_tree.prog_io.c"
                  *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1293 "prog_io.m"
                  break;
#line 1293 "prog_io.m"
              }
#line 1293 "prog_io.m"
              break;
#line 1293 "prog_io.m"
            case (MR_Integer) 1:
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1293 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
                case (MR_Integer) 0:
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
                  switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1293 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
                    case (MR_Integer) 0:
#line 1293 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1293 "prog_io.m"
                      break;
#line 1293 "prog_io.m"
                    case (MR_Integer) 1:
#line 1293 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1293 "prog_io.m"
                      break;
#line 1293 "prog_io.m"
                  }
#line 1293 "prog_io.m"
                  break;
#line 1293 "prog_io.m"
                case (MR_Integer) 1:
#line 4009 "parse_tree.prog_io.c"
                  *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1293 "prog_io.m"
                  break;
#line 1293 "prog_io.m"
              }
#line 1293 "prog_io.m"
              break;
#line 1293 "prog_io.m"
          }
#line 1293 "prog_io.m"
          break;
#line 1293 "prog_io.m"
        case (MR_Integer) 1:
#line 1293 "prog_io.m"
          {
#line 1293 "prog_io.m"
            MR_Word parse_tree__prog_io__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);

#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1293 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
              case (MR_Integer) 0:
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
                switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1293 "prog_io.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
                  case (MR_Integer) 0:
#line 4042 "parse_tree.prog_io.c"
                    *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1293 "prog_io.m"
                    break;
#line 1293 "prog_io.m"
                  case (MR_Integer) 1:
#line 4048 "parse_tree.prog_io.c"
                    *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1293 "prog_io.m"
                    break;
#line 1293 "prog_io.m"
                }
#line 1293 "prog_io.m"
                break;
#line 1293 "prog_io.m"
              case (MR_Integer) 1:
#line 1293 "prog_io.m"
                {
#line 1293 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_9_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__3_3), (MR_Integer) 1);

#line 1293 "prog_io.m"
                  {
#line 1293 "prog_io.m"
                    recompilation____Compare____version_numbers_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_13_13, parse_tree__prog_io__V_9_9);
#line 1293 "prog_io.m"
                    return;
                  }
#line 1293 "prog_io.m"
                }
#line 1293 "prog_io.m"
                break;
#line 1293 "prog_io.m"
            }
#line 1293 "prog_io.m"
          }
#line 1293 "prog_io.m"
          break;
#line 1293 "prog_io.m"
      }
#line 1293 "prog_io.m"
  }
#line 1293 "prog_io.m"
}

#line 1293 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0(
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1293 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1293 "prog_io.m"
{
#line 1293 "prog_io.m"
  {
#line 1293 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1293 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1293 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1293 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 1293 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1293 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1293 "prog_io.m"
    else
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1293 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
        case (MR_Integer) 0:
#line 1293 "prog_io.m"
#line 1293 "prog_io.m"
          switch (MR_unmkbody(parse_tree__prog_io__HeadVar__1_1)) {
#line 1293 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "prog_io.m"
            case (MR_Integer) 0:
#line 1293 "prog_io.m"
              {
#line 1293 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1293 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1293 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1293 "prog_io.m"
              }
#line 1293 "prog_io.m"
              break;
#line 1293 "prog_io.m"
            case (MR_Integer) 1:
#line 1293 "prog_io.m"
              {
#line 1293 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastX_5 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1293 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastY_6 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1293 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_6 == parse_tree__prog_io__CastX_5);
#line 1293 "prog_io.m"
              }
#line 1293 "prog_io.m"
              break;
#line 1293 "prog_io.m"
          }
#line 1293 "prog_io.m"
          break;
#line 1293 "prog_io.m"
        case (MR_Integer) 1:
#line 1293 "prog_io.m"
          {
#line 1293 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__1_1), (MR_Integer) 1);
#line 1293 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 1293 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1293 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1293 "prog_io.m"
              {
#line 1293 "prog_io.m"
                parse_tree__prog_io__V_8_8 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);
#line 4176 "parse_tree.prog_io.c"
                {
#line 4178 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = recompilation____Unify____version_numbers_0_0(parse_tree__prog_io__V_7_7, parse_tree__prog_io__V_8_8);
                }
#line 1293 "prog_io.m"
              }
#line 1293 "prog_io.m"
          }
#line 1293 "prog_io.m"
          break;
#line 1293 "prog_io.m"
      }
#line 1293 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1293 "prog_io.m"
  }
#line 1293 "prog_io.m"
}

#line 278 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 278 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 278 "prog_io.m"
{
#line 278 "prog_io.m"
  {
#line 278 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 278 "prog_io.m"
    {
#line 278 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 278 "prog_io.m"
      return;
    }
#line 278 "prog_io.m"
  }
#line 278 "prog_io.m"
}

#line 278 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 278 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 278 "prog_io.m"
{
#line 278 "prog_io.m"
  {
#line 278 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 278 "prog_io.m"
    {
#line 278 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 278 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 278 "prog_io.m"
  }
#line 278 "prog_io.m"
}

#line 1513 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1513 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1513 "prog_io.m"
{
#line 1513 "prog_io.m"
  {
#line 1513 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1513 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_73 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1513 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_74 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1513 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_73 == parse_tree__prog_io__CastY_74);
#line 1513 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4278 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1513 "prog_io.m"
    else
#line 1513 "prog_io.m"
#line 1513 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1513 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "prog_io.m"
        case (MR_Integer) 0:
#line 1513 "prog_io.m"
#line 1513 "prog_io.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1513 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "prog_io.m"
            case (MR_Integer) 0:
#line 1513 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1513 "prog_io.m"
              break;
#line 1513 "prog_io.m"
            case (MR_Integer) 1:
#line 4302 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1513 "prog_io.m"
              break;
#line 1513 "prog_io.m"
            case (MR_Integer) 2:
#line 4308 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1513 "prog_io.m"
              break;
#line 1513 "prog_io.m"
            case (MR_Integer) 3:
#line 4314 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1513 "prog_io.m"
              break;
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
        case (MR_Integer) 1:
#line 1513 "prog_io.m"
          {
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_90_90 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);

#line 1513 "prog_io.m"
#line 1513 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1513 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "prog_io.m"
              case (MR_Integer) 0:
#line 4336 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 1:
#line 1513 "prog_io.m"
                {
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_14_14 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__3_3), (MR_Integer) 1);

#line 1513 "prog_io.m"
                  {
#line 1513 "prog_io.m"
                    parse_tree__error_util____Compare____error_spec_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_90_90, parse_tree__prog_io__V_14_14);
#line 1513 "prog_io.m"
                    return;
                  }
#line 1513 "prog_io.m"
                }
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 2:
#line 4360 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 3:
#line 4366 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
            }
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
        case (MR_Integer) 2:
#line 1513 "prog_io.m"
          {
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1513 "prog_io.m"
#line 1513 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1513 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "prog_io.m"
              case (MR_Integer) 0:
#line 4396 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 1:
#line 4402 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 2:
#line 1513 "prog_io.m"
                {
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 3)));
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_41_41;

#line 1513 "prog_io.m"
                  {
#line 1513 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], &parse_tree__prog_io__V_41_41, ((MR_Box) (parse_tree__prog_io__V_89_89)), ((MR_Box) (parse_tree__prog_io__V_37_37)));
                  }
#line 4426 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_41_41 == (MR_Integer) 0);
#line 1513 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1513 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_41_41;
#line 1513 "prog_io.m"
                  else
#line 1513 "prog_io.m"
                    {
#line 1513 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_42_42;

#line 1513 "prog_io.m"
                      {
#line 1513 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_42_42, ((MR_Box) (parse_tree__prog_io__V_88_88)), ((MR_Box) (parse_tree__prog_io__V_38_38)));
                      }
#line 4446 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_42_42 == (MR_Integer) 0);
#line 1513 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1513 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_42_42;
#line 1513 "prog_io.m"
                      else
#line 1513 "prog_io.m"
                        {
#line 1513 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_43_43;

#line 1513 "prog_io.m"
                          {
#line 1513 "prog_io.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], &parse_tree__prog_io__V_43_43, ((MR_Box) (parse_tree__prog_io__V_87_87)), ((MR_Box) (parse_tree__prog_io__V_39_39)));
                          }
#line 4466 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_43_43 == (MR_Integer) 0);
#line 1513 "prog_io.m"
                          parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1513 "prog_io.m"
                          if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                            *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_43_43;
#line 1513 "prog_io.m"
                          else
#line 1513 "prog_io.m"
                            {
#line 1513 "prog_io.m"
                              {
#line 1513 "prog_io.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[3], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_86_86)), ((MR_Box) (parse_tree__prog_io__V_40_40)));
#line 1513 "prog_io.m"
                                return;
                              }
#line 1513 "prog_io.m"
                            }
#line 1513 "prog_io.m"
                        }
#line 1513 "prog_io.m"
                    }
#line 1513 "prog_io.m"
                }
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 3:
#line 4497 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
            }
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
        case (MR_Integer) 3:
#line 1513 "prog_io.m"
          {
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1513 "prog_io.m"
#line 1513 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1513 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "prog_io.m"
              case (MR_Integer) 0:
#line 4525 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 1:
#line 4531 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 2:
#line 4537 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
              case (MR_Integer) 3:
#line 1513 "prog_io.m"
                {
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1513 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_71_71;

#line 1513 "prog_io.m"
                  {
#line 1513 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], &parse_tree__prog_io__V_71_71, ((MR_Box) (parse_tree__prog_io__V_85_85)), ((MR_Box) (parse_tree__prog_io__V_68_68)));
                  }
#line 4559 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_71_71 == (MR_Integer) 0);
#line 1513 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1513 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_71_71;
#line 1513 "prog_io.m"
                  else
#line 1513 "prog_io.m"
                    {
#line 1513 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_72_72;

#line 1513 "prog_io.m"
                      {
#line 1513 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_72_72, ((MR_Box) (parse_tree__prog_io__V_84_84)), ((MR_Box) (parse_tree__prog_io__V_69_69)));
                      }
#line 4579 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_72_72 == (MR_Integer) 0);
#line 1513 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1513 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_72_72;
#line 1513 "prog_io.m"
                      else
#line 1513 "prog_io.m"
                        {
#line 1513 "prog_io.m"
                          parse_tree__prog_io_item____Compare____item_or_marker_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_83_83, parse_tree__prog_io__V_70_70);
#line 1513 "prog_io.m"
                          return;
                        }
#line 1513 "prog_io.m"
                    }
#line 1513 "prog_io.m"
                }
#line 1513 "prog_io.m"
                break;
#line 1513 "prog_io.m"
            }
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
      }
#line 1513 "prog_io.m"
  }
#line 1513 "prog_io.m"
}

#line 1513 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1513 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1513 "prog_io.m"
{
#line 1513 "prog_io.m"
  {
#line 1513 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1513 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_21 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1513 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_22 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1513 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_21 == parse_tree__prog_io__CastY_22);
#line 1513 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1513 "prog_io.m"
    else
#line 1513 "prog_io.m"
#line 1513 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1513 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1513 "prog_io.m"
        case (MR_Integer) 0:
#line 1513 "prog_io.m"
          {
#line 1513 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1513 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1513 "prog_io.m"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
        case (MR_Integer) 1:
#line 1513 "prog_io.m"
          {
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__1_1), (MR_Integer) 1);
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6;

#line 1513 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1513 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
              {
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);
#line 4678 "parse_tree.prog_io.c"
                {
#line 4680 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__error_util____Unify____error_spec_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_6_6);
                }
#line 1513 "prog_io.m"
              }
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
        case (MR_Integer) 2:
#line 1513 "prog_io.m"
          {
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_26_26;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_27_27;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_28_28;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_29_29;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 3)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_13_13;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_14_14;

#line 1513 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1513 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
              {
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 4732 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 4734 "parse_tree.prog_io.c"
                {
#line 4736 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_io__V_7_7)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
                }
#line 1513 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                  {
#line 4743 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4745 "parse_tree.prog_io.c"
                    {
#line 4747 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_io__V_8_8)), ((MR_Box) (parse_tree__prog_io__V_12_12)));
                    }
#line 1513 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                      {
#line 4754 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 4756 "parse_tree.prog_io.c"
                        {
#line 4758 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_io__V_9_9)), ((MR_Box) (parse_tree__prog_io__V_13_13)));
                        }
#line 1513 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                          {
#line 4765 "parse_tree.prog_io.c"
                            parse_tree__prog_io__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_io_scalar_common_1[3];
#line 4767 "parse_tree.prog_io.c"
                            {
#line 4769 "parse_tree.prog_io.c"
                              return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_io__V_10_10)), ((MR_Box) (parse_tree__prog_io__V_14_14)));
                            }
#line 1513 "prog_io.m"
                          }
#line 1513 "prog_io.m"
                      }
#line 1513 "prog_io.m"
                  }
#line 1513 "prog_io.m"
              }
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
        case (MR_Integer) 3:
#line 1513 "prog_io.m"
          {
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_23_23;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_24_24;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_18_18;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_19_19;
#line 1513 "prog_io.m"
            MR_Word parse_tree__prog_io__V_20_20;

#line 1513 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1513 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
              {
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1513 "prog_io.m"
                parse_tree__prog_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 4817 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 4819 "parse_tree.prog_io.c"
                {
#line 4821 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_23_23, ((MR_Box) (parse_tree__prog_io__V_15_15)), ((MR_Box) (parse_tree__prog_io__V_18_18)));
                }
#line 1513 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1513 "prog_io.m"
                  {
#line 4828 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_24_24 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4830 "parse_tree.prog_io.c"
                    {
#line 4832 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_24_24, ((MR_Box) (parse_tree__prog_io__V_16_16)), ((MR_Box) (parse_tree__prog_io__V_19_19)));
                    }
#line 1513 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 4837 "parse_tree.prog_io.c"
                      {
#line 4839 "parse_tree.prog_io.c"
                        return parse_tree__prog_io__succeeded = parse_tree__prog_io_item____Unify____item_or_marker_0_0(parse_tree__prog_io__V_17_17, parse_tree__prog_io__V_20_20);
                      }
#line 1513 "prog_io.m"
                  }
#line 1513 "prog_io.m"
              }
#line 1513 "prog_io.m"
          }
#line 1513 "prog_io.m"
          break;
#line 1513 "prog_io.m"
      }
#line 1513 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1513 "prog_io.m"
  }
#line 1513 "prog_io.m"
}

#line 201 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0(
#line 201 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 201 "prog_io.m"
{
#line 201 "prog_io.m"
  {
#line 201 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 201 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 201 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 201 "prog_io.m"
    {
#line 201 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 201 "prog_io.m"
      return;
    }
#line 201 "prog_io.m"
  }
#line 201 "prog_io.m"
}

#line 201 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0(
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 201 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 201 "prog_io.m"
{
#line 4900 "parse_tree.prog_io.c"
  {
#line 4902 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 4905 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 4907 "parse_tree.prog_io.c"
  }
#line 201 "prog_io.m"
}

#line 1161 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(
#line 1161 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1161 "prog_io.m"
{
#line 1161 "prog_io.m"
  {
#line 1161 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1161 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1161 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1161 "prog_io.m"
    {
#line 1161 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 1161 "prog_io.m"
      return;
    }
#line 1161 "prog_io.m"
  }
#line 1161 "prog_io.m"
}

#line 1161 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 1161 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1161 "prog_io.m"
{
#line 4953 "parse_tree.prog_io.c"
  {
#line 4955 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 4958 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 4960 "parse_tree.prog_io.c"
  }
#line 1161 "prog_io.m"
}

#line 1165 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1165 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1165 "prog_io.m"
{
#line 1165 "prog_io.m"
  {
#line 1165 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1165 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_36 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1165 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_37 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1165 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_36 == parse_tree__prog_io__CastY_37);
#line 1165 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4989 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1165 "prog_io.m"
    else
#line 1165 "prog_io.m"
#line 1165 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1165 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "prog_io.m"
        case (MR_Integer) 0:
#line 1165 "prog_io.m"
          {
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1165 "prog_io.m"
#line 1165 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1165 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "prog_io.m"
              case (MR_Integer) 0:
#line 1165 "prog_io.m"
                {
#line 1165 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 1165 "prog_io.m"
                  {
#line 1165 "prog_io.m"
                    parse_tree__prog_io____Compare____maybe_lookahead_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_43_43, parse_tree__prog_io__V_5_5);
#line 1165 "prog_io.m"
                    return;
                  }
#line 1165 "prog_io.m"
                }
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
              case (MR_Integer) 1:
#line 5030 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
              case (MR_Integer) 2:
#line 5036 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
            }
#line 1165 "prog_io.m"
          }
#line 1165 "prog_io.m"
          break;
#line 1165 "prog_io.m"
        case (MR_Integer) 1:
#line 1165 "prog_io.m"
          {
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1165 "prog_io.m"
#line 1165 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1165 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "prog_io.m"
              case (MR_Integer) 0:
#line 5062 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
              case (MR_Integer) 1:
#line 1165 "prog_io.m"
                {
#line 1165 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1165 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1165 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_19_19;

#line 1165 "prog_io.m"
                  {
#line 1165 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_19_19, parse_tree__prog_io__V_47_47, parse_tree__prog_io__V_17_17);
                  }
#line 5082 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_19_19 == (MR_Integer) 0);
#line 1165 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1165 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1165 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_19_19;
#line 1165 "prog_io.m"
                  else
#line 1165 "prog_io.m"
                    {
#line 1165 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_46_46, parse_tree__prog_io__V_18_18);
#line 1165 "prog_io.m"
                      return;
                    }
#line 1165 "prog_io.m"
                }
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
              case (MR_Integer) 2:
#line 5105 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
            }
#line 1165 "prog_io.m"
          }
#line 1165 "prog_io.m"
          break;
#line 1165 "prog_io.m"
        case (MR_Integer) 2:
#line 1165 "prog_io.m"
          {
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1165 "prog_io.m"
#line 1165 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1165 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "prog_io.m"
              case (MR_Integer) 0:
#line 5131 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
              case (MR_Integer) 1:
#line 5137 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
              case (MR_Integer) 2:
#line 1165 "prog_io.m"
                {
#line 1165 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1165 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1165 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_35_35;

#line 1165 "prog_io.m"
                  {
#line 1165 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_35_35, parse_tree__prog_io__V_45_45, parse_tree__prog_io__V_33_33);
                  }
#line 5157 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_35_35 == (MR_Integer) 0);
#line 1165 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1165 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1165 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_35_35;
#line 1165 "prog_io.m"
                  else
#line 1165 "prog_io.m"
                    {
#line 1165 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_44_44, parse_tree__prog_io__V_34_34);
#line 1165 "prog_io.m"
                      return;
                    }
#line 1165 "prog_io.m"
                }
#line 1165 "prog_io.m"
                break;
#line 1165 "prog_io.m"
            }
#line 1165 "prog_io.m"
          }
#line 1165 "prog_io.m"
          break;
#line 1165 "prog_io.m"
      }
#line 1165 "prog_io.m"
  }
#line 1165 "prog_io.m"
}

#line 1165 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1165 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1165 "prog_io.m"
{
#line 1165 "prog_io.m"
  {
#line 1165 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1165 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1165 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1165 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1165 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1165 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1165 "prog_io.m"
    else
#line 1165 "prog_io.m"
#line 1165 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1165 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "prog_io.m"
        case (MR_Integer) 0:
#line 1165 "prog_io.m"
          {
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_4_4;

#line 1165 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1165 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1165 "prog_io.m"
              {
#line 1165 "prog_io.m"
                parse_tree__prog_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 5239 "parse_tree.prog_io.c"
                {
#line 5241 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_lookahead_0_0(parse_tree__prog_io__V_3_3, parse_tree__prog_io__V_4_4);
                }
#line 1165 "prog_io.m"
              }
#line 1165 "prog_io.m"
          }
#line 1165 "prog_io.m"
          break;
#line 1165 "prog_io.m"
        case (MR_Integer) 1:
#line 1165 "prog_io.m"
          {
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7;
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 1165 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1165 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1165 "prog_io.m"
              {
#line 1165 "prog_io.m"
                parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1165 "prog_io.m"
                parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5273 "parse_tree.prog_io.c"
                {
#line 5275 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_7_7);
                }
#line 1165 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 5280 "parse_tree.prog_io.c"
                  {
#line 5282 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_6_6, parse_tree__prog_io__V_8_8);
                  }
#line 1165 "prog_io.m"
              }
#line 1165 "prog_io.m"
          }
#line 1165 "prog_io.m"
          break;
#line 1165 "prog_io.m"
        case (MR_Integer) 2:
#line 1165 "prog_io.m"
          {
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1165 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1165 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1165 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1165 "prog_io.m"
              {
#line 1165 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1165 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5314 "parse_tree.prog_io.c"
                {
#line 5316 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_9_9, parse_tree__prog_io__V_11_11);
                }
#line 1165 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 5321 "parse_tree.prog_io.c"
                  {
#line 5323 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_10_10, parse_tree__prog_io__V_12_12);
                  }
#line 1165 "prog_io.m"
              }
#line 1165 "prog_io.m"
          }
#line 1165 "prog_io.m"
          break;
#line 1165 "prog_io.m"
      }
#line 1165 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1165 "prog_io.m"
  }
#line 1165 "prog_io.m"
}

#line 1490 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1490 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1490 "prog_io.m"
{
#line 1490 "prog_io.m"
  {
#line 1490 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1490 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1490 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1490 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1490 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 5365 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1490 "prog_io.m"
    else
#line 1490 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "prog_io.m"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1490 "prog_io.m"
      else
#line 5377 "parse_tree.prog_io.c"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1490 "prog_io.m"
    else
#line 1490 "prog_io.m"
      {
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1490 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5390 "parse_tree.prog_io.c"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1490 "prog_io.m"
        else
#line 1490 "prog_io.m"
          {
#line 1490 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1490 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1490 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1490 "prog_io.m"
            {
#line 1490 "prog_io.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], &parse_tree__prog_io__V_12_12, ((MR_Box) (parse_tree__prog_io__V_18_18)), ((MR_Box) (parse_tree__prog_io__V_10_10)));
            }
#line 5408 "parse_tree.prog_io.c"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_12_12 == (MR_Integer) 0);
#line 1490 "prog_io.m"
            parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1490 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1490 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_12_12;
#line 1490 "prog_io.m"
            else
#line 1490 "prog_io.m"
              {
#line 1490 "prog_io.m"
                {
#line 1490 "prog_io.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_17_17)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
#line 1490 "prog_io.m"
                  return;
                }
#line 1490 "prog_io.m"
              }
#line 1490 "prog_io.m"
          }
#line 1490 "prog_io.m"
      }
#line 1490 "prog_io.m"
  }
#line 1490 "prog_io.m"
}

#line 1490 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1490 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1490 "prog_io.m"
{
#line 1490 "prog_io.m"
  {
#line 1490 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1490 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1490 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1490 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 1490 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1490 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1490 "prog_io.m"
    else
#line 1490 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "prog_io.m"
      {
#line 1490 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1490 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1490 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1490 "prog_io.m"
      }
#line 1490 "prog_io.m"
    else
#line 1490 "prog_io.m"
      {
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_11_11;
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_12_12;
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__V_7_7;
#line 1490 "prog_io.m"
        MR_Word parse_tree__prog_io__V_8_8;

#line 1490 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1490 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1490 "prog_io.m"
          {
#line 1490 "prog_io.m"
            parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1490 "prog_io.m"
            parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5504 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 5506 "parse_tree.prog_io.c"
            {
#line 5508 "parse_tree.prog_io.c"
              parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_11_11, ((MR_Box) (parse_tree__prog_io__V_5_5)), ((MR_Box) (parse_tree__prog_io__V_7_7)));
            }
#line 1490 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1490 "prog_io.m"
              {
#line 5515 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 5517 "parse_tree.prog_io.c"
                {
#line 5519 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io__V_6_6)), ((MR_Box) (parse_tree__prog_io__V_8_8)));
                }
#line 1490 "prog_io.m"
              }
#line 1490 "prog_io.m"
          }
#line 1490 "prog_io.m"
      }
#line 1490 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1490 "prog_io.m"
  }
#line 1490 "prog_io.m"
}

#line 282 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 282 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 282 "prog_io.m"
{
#line 282 "prog_io.m"
  {
#line 282 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 282 "prog_io.m"
    {
#line 282 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 282 "prog_io.m"
      return;
    }
#line 282 "prog_io.m"
  }
#line 282 "prog_io.m"
}

#line 282 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 282 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 282 "prog_io.m"
{
#line 282 "prog_io.m"
  {
#line 282 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 282 "prog_io.m"
    {
#line 282 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 282 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 282 "prog_io.m"
  }
#line 282 "prog_io.m"
}

#line 1629 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1629 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1629 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1629 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20)
#line 1629 "prog_io.m"
{
#line 1633 "prog_io.m"
  {
#line 1633 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_11;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__Error_12;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_16;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__V_44_44;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__V_46_46;
#line 1633 "prog_io.m"
    MR_Word parse_tree__prog_io__V_47_47;

#line 1634 "prog_io.m"
    {
#line 1634 "prog_io.m"
      parse_tree__prog_io__Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_8);
    }
#line 1640 "prog_io.m"
#line 1640 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__FileKind_7)) {
#line 1640 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1640 "prog_io.m"
      case (MR_Integer) 0:
#line 1636 "prog_io.m"
        {
#line 1637 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 4;
#line 1638 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[69]);
#line 1636 "prog_io.m"
        }
#line 1640 "prog_io.m"
        break;
#line 1640 "prog_io.m"
      case (MR_Integer) 1:
#line 1641 "prog_io.m"
        {
#line 1642 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1643 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[63]);
#line 1641 "prog_io.m"
        }
#line 1640 "prog_io.m"
        break;
#line 1640 "prog_io.m"
      case (MR_Integer) 2:
#line 1645 "prog_io.m"
        {
#line 1646 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1647 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[65]);
#line 1645 "prog_io.m"
        }
#line 1640 "prog_io.m"
        break;
#line 1640 "prog_io.m"
    }
#line 1650 "prog_io.m"
    {
#line 1650 "prog_io.m"
      parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1650 "prog_io.m"
    }
#line 1650 "prog_io.m"
    {
#line 1650 "prog_io.m"
      parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1650 "prog_io.m"
    }
#line 1650 "prog_io.m"
    {
#line 1650 "prog_io.m"
      parse_tree__prog_io__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Context_11));
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1650 "prog_io.m"
    }
#line 1650 "prog_io.m"
    {
#line 1650 "prog_io.m"
      parse_tree__prog_io__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1650 "prog_io.m"
    }
#line 1649 "prog_io.m"
    {
#line 1649 "prog_io.m"
      parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1649 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1649 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1649 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 1649 "prog_io.m"
    }
#line 1651 "prog_io.m"
    {
#line 1651 "prog_io.m"
      MR_Word base;
#line 1651 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1651 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_16));
#line 1651 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1651 "prog_io.m"
    }
#line 1652 "prog_io.m"
    {
#line 1652 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) (parse_tree__prog_io__Error_12)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_19, parse_tree__prog_io__STATE_VARIABLE_Errors_20);
#line 1652 "prog_io.m"
      return;
    }
#line 1633 "prog_io.m"
  }
#line 1629 "prog_io.m"
}

#line 1603 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1603 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1603 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1603 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1603 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33)
#line 1603 "prog_io.m"
{
#line 1609 "prog_io.m"
  {
#line 1609 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1609 "prog_io.m"
    MR_Word parse_tree__prog_io__IOMResult_20;
#line 1610 "prog_io.m"
    MR_Word parse_tree__prog_io___SeqNumCounter_21;

#line 1610 "prog_io.m"
    {
#line 1610 "prog_io.m"
      parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__FinalLookAhead_14, parse_tree__prog_io__ModuleName_12, parse_tree__prog_io__SourceFileName_15, &parse_tree__prog_io__IOMResult_20, parse_tree__prog_io__SeqNumCounter0_16, &parse_tree__prog_io___SeqNumCounter_21);
    }
#line 1614 "prog_io.m"
#line 1614 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__IOMResult_20)) {
#line 1614 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1614 "prog_io.m"
      case (MR_Integer) 0:
#line 1613 "prog_io.m"
        {
#line 1613 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_30;
#line 1613 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_33 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_32;
#line 1613 "prog_io.m"
        }
#line 1614 "prog_io.m"
        break;
#line 1614 "prog_io.m"
      case (MR_Integer) 1:
#line 1615 "prog_io.m"
        {
#line 1615 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpec_22 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__IOMResult_20), (MR_Integer) 1);

#line 1616 "prog_io.m"
          {
#line 1616 "prog_io.m"
            MR_Word base;
#line 1616 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1616 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = base;
#line 1616 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_22));
#line 1616 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_30));
#line 1616 "prog_io.m"
          }
#line 1617 "prog_io.m"
          {
#line 1617 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1617 "prog_io.m"
            return;
          }
#line 1615 "prog_io.m"
        }
#line 1614 "prog_io.m"
        break;
#line 1614 "prog_io.m"
      case (MR_Integer) 2:
#line 1620 "prog_io.m"
        {
#line 1620 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1620 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpecs_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));
#line 1620 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemErrors_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 3)));
#line 1620 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_39_39;
#line 1620 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_40_40;
#line 1619 "prog_io.m"
          MR_Word parse_tree__prog_io___VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));

#line 1621 "prog_io.m"
          {
#line 1621 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_25, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30);
          }
#line 1622 "prog_io.m"
          {
#line 1622 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Errors_40_40 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__ItemErrors_26);
          }
#line 1623 "prog_io.m"
          {
#line 1623 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__Term_24, parse_tree__prog_io__STATE_VARIABLE_Specs_39_39, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_40_40, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1623 "prog_io.m"
            return;
          }
#line 1620 "prog_io.m"
        }
#line 1614 "prog_io.m"
        break;
#line 1614 "prog_io.m"
      case (MR_Integer) 3:
#line 1625 "prog_io.m"
        {
#line 1625 "prog_io.m"
          MR_Word parse_tree__prog_io__IOMTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1625 "prog_io.m"
          MR_Word parse_tree__prog_io___IOMVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));
#line 1625 "prog_io.m"
          MR_Word parse_tree__prog_io___IOM_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));

#line 1626 "prog_io.m"
          {
#line 1626 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__IOMTerm_28, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1626 "prog_io.m"
            return;
          }
#line 1625 "prog_io.m"
        }
#line 1614 "prog_io.m"
        break;
#line 1614 "prog_io.m"
    }
#line 1609 "prog_io.m"
  }
#line 1603 "prog_io.m"
}

#line 1575 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1575 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1575 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19)
#line 1575 "prog_io.m"
{
#line 1580 "prog_io.m"
  {
#line 1580 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__Msgs_14;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_15;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_22_22;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_28_28;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_30_30;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_38_38;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_41_41;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_42_42;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_49_49;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_53_53;
#line 1580 "prog_io.m"
    MR_Word parse_tree__prog_io__V_54_54;

#line 1583 "prog_io.m"
    {
#line 1583 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io__Expected_9));
#line 1583 "prog_io.m"
    }
#line 1584 "prog_io.m"
    {
#line 1584 "prog_io.m"
      parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1584 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io__Actual_10));
#line 1584 "prog_io.m"
    }
#line 1584 "prog_io.m"
    {
#line 1584 "prog_io.m"
      parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1584 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1584 "prog_io.m"
    }
#line 1584 "prog_io.m"
    {
#line 1584 "prog_io.m"
      parse_tree__prog_io__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[74])));
#line 1584 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1584 "prog_io.m"
    }
#line 1583 "prog_io.m"
    {
#line 1583 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[73])));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1583 "prog_io.m"
    }
#line 1583 "prog_io.m"
    {
#line 1583 "prog_io.m"
      parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1583 "prog_io.m"
    }
#line 1583 "prog_io.m"
    {
#line 1583 "prog_io.m"
      parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[72])));
#line 1583 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1583 "prog_io.m"
    }
#line 1582 "prog_io.m"
    {
#line 1582 "prog_io.m"
      parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1582 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1582 "prog_io.m"
    }
#line 1582 "prog_io.m"
    {
#line 1582 "prog_io.m"
      parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[95])));
#line 1582 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1582 "prog_io.m"
    }
#line 1582 "prog_io.m"
    {
#line 1582 "prog_io.m"
      parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[94])));
#line 1582 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1582 "prog_io.m"
    }
#line 1581 "prog_io.m"
    {
#line 1581 "prog_io.m"
      parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[93])));
#line 1581 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 1) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1581 "prog_io.m"
    }
#line 1585 "prog_io.m"
    {
#line 1585 "prog_io.m"
      parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1585 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1585 "prog_io.m"
    }
#line 1585 "prog_io.m"
    {
#line 1585 "prog_io.m"
      parse_tree__prog_io__Msgs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1585 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1585 "prog_io.m"
    }
#line 1587 "prog_io.m"
    {
#line 1587 "prog_io.m"
      parse_tree__prog_io__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_8));
#line 1587 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io__Msgs_14));
#line 1587 "prog_io.m"
    }
#line 1587 "prog_io.m"
    {
#line 1587 "prog_io.m"
      parse_tree__prog_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io__V_54_54));
#line 1587 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1587 "prog_io.m"
    }
#line 1586 "prog_io.m"
    {
#line 1586 "prog_io.m"
      parse_tree__prog_io__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1586 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1586 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1586 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_53_53));
#line 1586 "prog_io.m"
    }
#line 1588 "prog_io.m"
    {
#line 1588 "prog_io.m"
      MR_Word base;
#line 1588 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1588 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_17 = base;
#line 1588 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_15));
#line 1588 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_16));
#line 1588 "prog_io.m"
    }
#line 1589 "prog_io.m"
    {
#line 1589 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_18, parse_tree__prog_io__STATE_VARIABLE_Errors_19);
#line 1589 "prog_io.m"
      return;
    }
#line 1580 "prog_io.m"
  }
#line 1575 "prog_io.m"
}

#line 1561 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1561 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1561 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15)
#line 1561 "prog_io.m"
{
#line 1565 "prog_io.m"
  {
#line 1565 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1565 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_11;
#line 1565 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1565 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;

#line 1571 "prog_io.m"
    {
#line 1571 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1571 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_6));
#line 1571 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[92])));
#line 1571 "prog_io.m"
    }
#line 1571 "prog_io.m"
    {
#line 1571 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1571 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1571 "prog_io.m"
    }
#line 1570 "prog_io.m"
    {
#line 1570 "prog_io.m"
      parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1570 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1570 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1570 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1570 "prog_io.m"
    }
#line 1572 "prog_io.m"
    {
#line 1572 "prog_io.m"
      MR_Word base;
#line 1572 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_13 = base;
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 1572 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_12));
#line 1572 "prog_io.m"
    }
#line 1573 "prog_io.m"
    {
#line 1573 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_14, parse_tree__prog_io__STATE_VARIABLE_Errors_15);
#line 1573 "prog_io.m"
      return;
    }
#line 1565 "prog_io.m"
  }
#line 1561 "prog_io.m"
}

#line 1520 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1520 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1520 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1520 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1520 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1520 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1520 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11)
#line 1520 "prog_io.m"
{
#line 1528 "prog_io.m"
  {
#line 1528 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1528 "prog_io.m"
#line 1528 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_9)) {
#line 1528 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1528 "prog_io.m"
      case (MR_Integer) 0:
#line 1528 "prog_io.m"
        {
#line 1529 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1528 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1528 "prog_io.m"
        }
#line 1528 "prog_io.m"
        break;
#line 1528 "prog_io.m"
      case (MR_Integer) 1:
#line 1531 "prog_io.m"
        {
#line 1531 "prog_io.m"
          MR_String parse_tree__prog_io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1531 "prog_io.m"
          MR_Integer parse_tree__prog_io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__Context_15;
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_16;
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__V_22_22;
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__V_31_31;
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__V_32_32;
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__V_33_33;
#line 1531 "prog_io.m"
          MR_Word parse_tree__prog_io__V_34_34;

#line 1533 "prog_io.m"
          {
#line 1533 "prog_io.m"
            parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1533 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_12));
#line 1533 "prog_io.m"
          }
#line 1533 "prog_io.m"
          {
#line 1533 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1533 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1533 "prog_io.m"
          }
#line 1534 "prog_io.m"
          {
#line 1534 "prog_io.m"
            parse_tree__prog_io__Context_15 = mercury__term__context_init_2_f_0(parse_tree__prog_io__FileName_8, parse_tree__prog_io__LineNumber_13);
          }
#line 1536 "prog_io.m"
          {
#line 1536 "prog_io.m"
            parse_tree__prog_io__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 1536 "prog_io.m"
          }
#line 1536 "prog_io.m"
          {
#line 1536 "prog_io.m"
            parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1536 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "prog_io.m"
          }
#line 1536 "prog_io.m"
          {
#line 1536 "prog_io.m"
            parse_tree__prog_io__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 1536 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1536 "prog_io.m"
          }
#line 1536 "prog_io.m"
          {
#line 1536 "prog_io.m"
            parse_tree__prog_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1536 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "prog_io.m"
          }
#line 1535 "prog_io.m"
          {
#line 1535 "prog_io.m"
            parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1535 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1535 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1535 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_31_31));
#line 1535 "prog_io.m"
          }
#line 1537 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_16);
#line 1531 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1531 "prog_io.m"
        }
#line 1528 "prog_io.m"
        break;
#line 1528 "prog_io.m"
      case (MR_Integer) 2:
#line 1539 "prog_io.m"
        {
#line 1539 "prog_io.m"
          MR_Word parse_tree__prog_io__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1539 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1539 "prog_io.m"
          MR_Integer parse_tree__prog_io__SeqNum_44;
#line 1539 "prog_io.m"
          MR_Word parse_tree__prog_io__MaybeItemOrMarker_45;

#line 1548 "prog_io.m"
          {
#line 1548 "prog_io.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_44, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20);
          }
#line 1549 "prog_io.m"
          {
#line 1549 "prog_io.m"
            parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_7, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__Term_18, parse_tree__prog_io__SeqNum_44, &parse_tree__prog_io__MaybeItemOrMarker_45);
          }
#line 1553 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_45)) == (MR_mktag((MR_Integer) 0))))
#line 1554 "prog_io.m"
            {
#line 1554 "prog_io.m"
              MR_Word parse_tree__prog_io__Specs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));
#line 1554 "prog_io.m"
              MR_Word parse_tree__prog_io__V_49_49;

#line 1556 "prog_io.m"
              {
#line 1556 "prog_io.m"
                parse_tree__prog_io__V_49_49 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
              }
#line 1555 "prog_io.m"
              {
#line 1555 "prog_io.m"
                MR_Word base;
#line 1555 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1555 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1555 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1555 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_47));
#line 1555 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1555 "prog_io.m"
              }
#line 1554 "prog_io.m"
            }
#line 1553 "prog_io.m"
          else
#line 1551 "prog_io.m"
            {
#line 1551 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemOrMarker_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));

#line 1552 "prog_io.m"
              {
#line 1552 "prog_io.m"
                MR_Word base;
#line 1552 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1552 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1552 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1552 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_46));
#line 1552 "prog_io.m"
              }
#line 1551 "prog_io.m"
            }
#line 1539 "prog_io.m"
        }
#line 1528 "prog_io.m"
        break;
#line 1528 "prog_io.m"
    }
#line 1528 "prog_io.m"
  }
#line 1520 "prog_io.m"
}

#line 1494 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1494 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1494 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1494 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1494 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1494 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1494 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19)
#line 1494 "prog_io.m"
{
#line 1501 "prog_io.m"
  {
#line 1501 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1501 "prog_io.m"
    if ((parse_tree__prog_io__InitLookAhead_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1501 "prog_io.m"
      {
#line 1501 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadTermResult_15;

#line 1502 "prog_io.m"
        {
#line 1502 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__SourceFileName_11, &parse_tree__prog_io__ReadTermResult_15);
        }
#line 1528 "prog_io.m"
#line 1528 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_15)) {
#line 1528 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1528 "prog_io.m"
          case (MR_Integer) 0:
#line 1528 "prog_io.m"
            {
#line 1529 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1528 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1528 "prog_io.m"
            }
#line 1528 "prog_io.m"
            break;
#line 1528 "prog_io.m"
          case (MR_Integer) 1:
#line 1531 "prog_io.m"
            {
#line 1531 "prog_io.m"
              MR_String parse_tree__prog_io__ErrorMsg_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1531 "prog_io.m"
              MR_Integer parse_tree__prog_io__LineNumber_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_50;
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_51;
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_52;
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__V_56_56;
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__V_65_65;
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__V_66_66;
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__V_67_67;
#line 1531 "prog_io.m"
              MR_Word parse_tree__prog_io__V_68_68;

#line 1533 "prog_io.m"
              {
#line 1533 "prog_io.m"
                parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_48));
#line 1533 "prog_io.m"
              }
#line 1533 "prog_io.m"
              {
#line 1533 "prog_io.m"
                parse_tree__prog_io__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1533 "prog_io.m"
              }
#line 1534 "prog_io.m"
              {
#line 1534 "prog_io.m"
                parse_tree__prog_io__Context_51 = mercury__term__context_init_2_f_0(parse_tree__prog_io__SourceFileName_11, parse_tree__prog_io__LineNumber_49);
              }
#line 1536 "prog_io.m"
              {
#line 1536 "prog_io.m"
                parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_50));
#line 1536 "prog_io.m"
              }
#line 1536 "prog_io.m"
              {
#line 1536 "prog_io.m"
                parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1536 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "prog_io.m"
              }
#line 1536 "prog_io.m"
              {
#line 1536 "prog_io.m"
                parse_tree__prog_io__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io__Context_51));
#line 1536 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1536 "prog_io.m"
              }
#line 1536 "prog_io.m"
              {
#line 1536 "prog_io.m"
                parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io__V_66_66));
#line 1536 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "prog_io.m"
              }
#line 1535 "prog_io.m"
              {
#line 1535 "prog_io.m"
                parse_tree__prog_io__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1535 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1535 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1535 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 2) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1535 "prog_io.m"
              }
#line 1537 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_52);
#line 1531 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1531 "prog_io.m"
            }
#line 1528 "prog_io.m"
            break;
#line 1528 "prog_io.m"
          case (MR_Integer) 2:
#line 1539 "prog_io.m"
            {
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__VarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__Term_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1539 "prog_io.m"
              MR_Integer parse_tree__prog_io__SeqNum_78;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__MaybeItemOrMarker_79;

#line 1548 "prog_io.m"
              {
#line 1548 "prog_io.m"
                mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_78, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
              }
#line 1549 "prog_io.m"
              {
#line 1549 "prog_io.m"
                parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__VarSet_53, parse_tree__prog_io__Term_54, parse_tree__prog_io__SeqNum_78, &parse_tree__prog_io__MaybeItemOrMarker_79);
              }
#line 1553 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_79)) == (MR_mktag((MR_Integer) 0))))
#line 1554 "prog_io.m"
                {
#line 1554 "prog_io.m"
                  MR_Word parse_tree__prog_io__Specs_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));
#line 1554 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_83_83;

#line 1556 "prog_io.m"
                  {
#line 1556 "prog_io.m"
                    parse_tree__prog_io__V_83_83 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
                  }
#line 1555 "prog_io.m"
                  {
#line 1555 "prog_io.m"
                    MR_Word base;
#line 1555 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1555 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1555 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1555 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_81));
#line 1555 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1555 "prog_io.m"
                  }
#line 1554 "prog_io.m"
                }
#line 1553 "prog_io.m"
              else
#line 1551 "prog_io.m"
                {
#line 1551 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemOrMarker_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));

#line 1552 "prog_io.m"
                  {
#line 1552 "prog_io.m"
                    MR_Word base;
#line 1552 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1552 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1552 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1552 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_80));
#line 1552 "prog_io.m"
                  }
#line 1551 "prog_io.m"
                }
#line 1539 "prog_io.m"
            }
#line 1528 "prog_io.m"
            break;
#line 1528 "prog_io.m"
        }
#line 1501 "prog_io.m"
      }
#line 1501 "prog_io.m"
    else
#line 1506 "prog_io.m"
      {
#line 1506 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 0)));
#line 1506 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 1)));
#line 1506 "prog_io.m"
        MR_Integer parse_tree__prog_io__SeqNum_33;
#line 1506 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeItemOrMarker_34;

#line 1548 "prog_io.m"
        {
#line 1548 "prog_io.m"
          mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
        }
#line 1549 "prog_io.m"
        {
#line 1549 "prog_io.m"
          parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__LookAheadVarSet_16, parse_tree__prog_io__LookAheadTerm_17, parse_tree__prog_io__SeqNum_33, &parse_tree__prog_io__MaybeItemOrMarker_34);
        }
#line 1553 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_34)) == (MR_mktag((MR_Integer) 0))))
#line 1554 "prog_io.m"
          {
#line 1554 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));
#line 1554 "prog_io.m"
            MR_Word parse_tree__prog_io__V_38_38;

#line 1556 "prog_io.m"
            {
#line 1556 "prog_io.m"
              parse_tree__prog_io__V_38_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
            }
#line 1555 "prog_io.m"
            {
#line 1555 "prog_io.m"
              MR_Word base;
#line 1555 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1555 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1555 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1555 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_36));
#line 1555 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1555 "prog_io.m"
            }
#line 1554 "prog_io.m"
          }
#line 1553 "prog_io.m"
        else
#line 1551 "prog_io.m"
          {
#line 1551 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemOrMarker_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));

#line 1552 "prog_io.m"
            {
#line 1552 "prog_io.m"
              MR_Word base;
#line 1552 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1552 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1552 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1552 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_35));
#line 1552 "prog_io.m"
            }
#line 1551 "prog_io.m"
          }
#line 1506 "prog_io.m"
      }
#line 1501 "prog_io.m"
  }
#line 1494 "prog_io.m"
}

#line 1445 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1445 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1445 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1445 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1445 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29)
#line 1445 "prog_io.m"
{
#line 1451 "prog_io.m"
  {
#line 1451 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1451 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeWarning_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 0)));
#line 1451 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 1)));
#line 1451 "prog_io.m"
    MR_Integer parse_tree__prog_io__NothingSeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 2)));

#line 1457 "prog_io.m"
    if ((parse_tree__prog_io__MaybeWarning_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "prog_io.m"
      {
#line 1456 "prog_io.m"
        {
#line 1456 "prog_io.m"
          MR_Word base;
#line 1456 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1456 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1456 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__ItemNothingInfo_9));
#line 1456 "prog_io.m"
        }
#line 1454 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1454 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1454 "prog_io.m"
      }
#line 1457 "prog_io.m"
    else
#line 1458 "prog_io.m"
      {
#line 1458 "prog_io.m"
        MR_Word parse_tree__prog_io__Warning_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWarning_13, (MR_Integer) 0)));
#line 1458 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeOption_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 0)));
#line 1458 "prog_io.m"
        MR_String parse_tree__prog_io__Msg_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 1)));
#line 1458 "prog_io.m"
        MR_Word parse_tree__prog_io__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 2)));
#line 1458 "prog_io.m"
        MR_Word parse_tree__prog_io__Warn_21;
#line 1458 "prog_io.m"
        MR_Word parse_tree__prog_io__NoWarnItemNothingInfo_25;

#line 1463 "prog_io.m"
        if ((parse_tree__prog_io__MaybeOption_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1465 "prog_io.m"
          parse_tree__prog_io__Warn_21 = (MR_Integer) 1;
#line 1463 "prog_io.m"
        else
#line 1461 "prog_io.m"
          {
#line 1461 "prog_io.m"
            MR_Word parse_tree__prog_io__Option_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOption_17, (MR_Integer) 0)));

#line 1462 "prog_io.m"
            {
#line 1462 "prog_io.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__Option_20, &parse_tree__prog_io__Warn_21);
            }
#line 1461 "prog_io.m"
          }
#line 1481 "prog_io.m"
#line 1481 "prog_io.m"
        switch (parse_tree__prog_io__Warn_21) {
#line 1481 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1481 "prog_io.m"
          case (MR_Integer) 0:
#line 1482 "prog_io.m"
            {
#line 1482 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1482 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1482 "prog_io.m"
            }
#line 1481 "prog_io.m"
            break;
#line 1481 "prog_io.m"
          case (MR_Integer) 1:
#line 1468 "prog_io.m"
            {
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_22;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_23;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__Halt_24;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__V_32_32;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__V_33_33;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__V_39_39;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__V_40_40;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__V_41_41;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__V_42_42;
#line 1468 "prog_io.m"
              MR_Word parse_tree__prog_io__V_43_43;

#line 1469 "prog_io.m"
              {
#line 1469 "prog_io.m"
                parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1469 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__Msg_18));
#line 1469 "prog_io.m"
              }
#line 1469 "prog_io.m"
              {
#line 1469 "prog_io.m"
                parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1469 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[4])));
#line 1469 "prog_io.m"
              }
#line 1469 "prog_io.m"
              {
#line 1469 "prog_io.m"
                parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[91])));
#line 1469 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1469 "prog_io.m"
              }
#line 1471 "prog_io.m"
              {
#line 1471 "prog_io.m"
                parse_tree__prog_io__V_41_41 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_19);
              }
#line 1471 "prog_io.m"
              {
#line 1471 "prog_io.m"
                parse_tree__prog_io__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1471 "prog_io.m"
              }
#line 1471 "prog_io.m"
              {
#line 1471 "prog_io.m"
                parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 1471 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "prog_io.m"
              }
#line 1471 "prog_io.m"
              {
#line 1471 "prog_io.m"
                parse_tree__prog_io__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1471 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1471 "prog_io.m"
              }
#line 1471 "prog_io.m"
              {
#line 1471 "prog_io.m"
                parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 1471 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "prog_io.m"
              }
#line 1470 "prog_io.m"
              {
#line 1470 "prog_io.m"
                parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1470 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1470 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 1470 "prog_io.m"
              }
#line 1472 "prog_io.m"
              {
#line 1472 "prog_io.m"
                MR_Word base;
#line 1472 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = base;
#line 1472 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1472 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_26));
#line 1472 "prog_io.m"
              }
#line 1474 "prog_io.m"
              {
#line 1474 "prog_io.m"
                libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, (MR_Integer) 2, &parse_tree__prog_io__Halt_24);
              }
#line 1478 "prog_io.m"
#line 1478 "prog_io.m"
              switch (parse_tree__prog_io__Halt_24) {
#line 1478 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1478 "prog_io.m"
                case (MR_Integer) 0:
#line 1479 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1478 "prog_io.m"
                  break;
#line 1478 "prog_io.m"
                case (MR_Integer) 1:
#line 1476 "prog_io.m"
                  {
#line 1477 "prog_io.m"
                    {
#line 1477 "prog_io.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 10)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_28, parse_tree__prog_io__STATE_VARIABLE_Errors_29);
                    }
#line 1476 "prog_io.m"
                  }
#line 1478 "prog_io.m"
                  break;
#line 1478 "prog_io.m"
              }
#line 1468 "prog_io.m"
            }
#line 1481 "prog_io.m"
            break;
#line 1481 "prog_io.m"
        }
#line 1484 "prog_io.m"
        {
#line 1484 "prog_io.m"
          parse_tree__prog_io__NoWarnItemNothingInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1484 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1484 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 2) = ((MR_Box) (parse_tree__prog_io__NothingSeqNum_15));
#line 1484 "prog_io.m"
        }
#line 1485 "prog_io.m"
        {
#line 1485 "prog_io.m"
          MR_Word base;
#line 1485 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1485 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1485 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__NoWarnItemNothingInfo_25));
#line 1485 "prog_io.m"
        }
#line 1458 "prog_io.m"
      }
#line 1451 "prog_io.m"
  }
#line 1445 "prog_io.m"
}

#line 1405 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__record_version_numbers_6_p_0(
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__MVN_7,
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_8,
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15,
#line 1405 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_16,
#line 1405 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1405 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18)
#line 1405 "prog_io.m"
{
#line 1411 "prog_io.m"
  {
#line 1411 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1411 "prog_io.m"
#line 1411 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15)) {
#line 1411 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1411 "prog_io.m"
      case (MR_Integer) 0:
#line 1411 "prog_io.m"
#line 1411 "prog_io.m"
        switch (MR_unmkbody(parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15)) {
#line 1411 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1411 "prog_io.m"
          case (MR_Integer) 0:
#line 1424 "prog_io.m"
            {
#line 1424 "prog_io.m"
              MR_Word parse_tree__prog_io__V_33_33;
#line 1424 "prog_io.m"
              MR_Word parse_tree__prog_io__V_39_39;
#line 1424 "prog_io.m"
              MR_Word parse_tree__prog_io__Msg_67;
#line 1424 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_68;

#line 1429 "prog_io.m"
              {
#line 1429 "prog_io.m"
                parse_tree__prog_io__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_8);
              }
#line 1429 "prog_io.m"
              {
#line 1429 "prog_io.m"
                parse_tree__prog_io__Msg_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_67, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1429 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[90])));
#line 1429 "prog_io.m"
              }
#line 1431 "prog_io.m"
              {
#line 1431 "prog_io.m"
                parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__Msg_67));
#line 1431 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1431 "prog_io.m"
              }
#line 1431 "prog_io.m"
              {
#line 1431 "prog_io.m"
                parse_tree__prog_io__Spec_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1431 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1431 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 2) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 1431 "prog_io.m"
              }
#line 1432 "prog_io.m"
              {
#line 1432 "prog_io.m"
                MR_Word base;
#line 1432 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1432 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_68));
#line 1432 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1432 "prog_io.m"
              }
#line 1424 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15;
#line 1424 "prog_io.m"
            }
#line 1411 "prog_io.m"
            break;
#line 1411 "prog_io.m"
          case (MR_Integer) 1:
#line 1411 "prog_io.m"
            {
#line 1412 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__MVN_7);
#line 1411 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_17;
#line 1411 "prog_io.m"
            }
#line 1411 "prog_io.m"
            break;
#line 1411 "prog_io.m"
        }
#line 1411 "prog_io.m"
        break;
#line 1411 "prog_io.m"
      case (MR_Integer) 1:
#line 1414 "prog_io.m"
        {
#line 1414 "prog_io.m"
          MR_Word parse_tree__prog_io__Msg_13;
#line 1414 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_14;
#line 1414 "prog_io.m"
          MR_Word parse_tree__prog_io__V_56_56;
#line 1414 "prog_io.m"
          MR_Word parse_tree__prog_io__V_62_62;

#line 1419 "prog_io.m"
          {
#line 1419 "prog_io.m"
            parse_tree__prog_io__V_56_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_8);
          }
#line 1419 "prog_io.m"
          {
#line 1419 "prog_io.m"
            parse_tree__prog_io__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_13, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1419 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[89])));
#line 1419 "prog_io.m"
          }
#line 1421 "prog_io.m"
          {
#line 1421 "prog_io.m"
            parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__Msg_13));
#line 1421 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1421 "prog_io.m"
          }
#line 1421 "prog_io.m"
          {
#line 1421 "prog_io.m"
            parse_tree__prog_io__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1421 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1421 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 1421 "prog_io.m"
          }
#line 1422 "prog_io.m"
          {
#line 1422 "prog_io.m"
            MR_Word base;
#line 1422 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1422 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_14));
#line 1422 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1422 "prog_io.m"
          }
#line 1414 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15;
#line 1414 "prog_io.m"
        }
#line 1411 "prog_io.m"
        break;
#line 1411 "prog_io.m"
    }
#line 1411 "prog_io.m"
  }
#line 1405 "prog_io.m"
}

#line 1332 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_20_p_0(
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_21,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_22,
#line 1332 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57,
#line 1332 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_58,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_24,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_25,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_59,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_60,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_62,
#line 1332 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_63,
#line 1332 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_64,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_66,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_67,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_68,
#line 1332 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_69,
#line 1332 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_70)
#line 1332 "prog_io.m"
{
#line 1344 "prog_io.m"
  while (MR_TRUE)
#line 1344 "prog_io.m"
    {
#line 1344 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1344 "prog_io.m"
      {
#line 1344 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57 <= (MR_Integer) 0);

#line 1344 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1343 "prog_io.m"
          {
#line 1343 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_25 = parse_tree__prog_io__InitLookAhead_24;
#line 1343 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_70 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_69;
#line 1343 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_68 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_67;
#line 1343 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_66 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65;
#line 1343 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_64 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_63;
#line 1343 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_62 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61;
#line 1343 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_60 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_59;
#line 1343 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_58 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57;
#line 1343 "prog_io.m"
          }
#line 1344 "prog_io.m"
        else
#line 1346 "prog_io.m"
          {
#line 1346 "prog_io.m"
            MR_Word parse_tree__prog_io__ReadIOMResult_33;
#line 1346 "prog_io.m"
            MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;

#line 1345 "prog_io.m"
            {
#line 1345 "prog_io.m"
              parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_24, parse_tree__prog_io__ModuleName_22, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_63, &parse_tree__prog_io__ReadIOMResult_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74);
            }
#line 1350 "prog_io.m"
#line 1350 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_33)) {
#line 1350 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1350 "prog_io.m"
              case (MR_Integer) 0:
#line 1348 "prog_io.m"
                {
#line 1349 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_58 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57;
#line 1348 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_VNInfo_60 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_59;
#line 1348 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_62 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61;
#line 1348 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_64 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_63;
#line 1348 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_66 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;
#line 1348 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_68 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_67;
#line 1348 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_70 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_69;
#line 1348 "prog_io.m"
                }
#line 1350 "prog_io.m"
                break;
#line 1350 "prog_io.m"
              case (MR_Integer) 1:
#line 1358 "prog_io.m"
                {
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpec_34 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_33), (MR_Integer) 1);
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_134;
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_135;
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_108_136;
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_109_137;

#line 1353 "prog_io.m"
                  {
#line 1353 "prog_io.m"
                    parse_tree__prog_io__ItemSpecs_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_134, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_34));
#line 1353 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1353 "prog_io.m"
                  }
#line 1354 "prog_io.m"
                  {
#line 1354 "prog_io.m"
                    parse_tree__prog_io__ItemErrors_135 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)));
                  }
#line 1359 "prog_io.m"
                  {
#line 1359 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_108_136 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_134, parse_tree__prog_io__STATE_VARIABLE_Specs_0_67);
                  }
#line 1360 "prog_io.m"
                  {
#line 1360 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_109_137 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_69, parse_tree__prog_io__ItemErrors_135);
                  }
#line 1361 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1361 "prog_io.m"
                  {
#line 1361 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;
#line 1361 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_108_136;
#line 1361 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_Errors_109_137;

#line 1361 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_69 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_69;
#line 1361 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67;
#line 1361 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65;
#line 1361 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1361 "prog_io.m"
                  }
#line 1361 "prog_io.m"
                  continue;
#line 1358 "prog_io.m"
                }
#line 1350 "prog_io.m"
                break;
#line 1350 "prog_io.m"
              case (MR_Integer) 2:
#line 1358 "prog_io.m"
                {
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 3)));
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_108_108;
#line 1358 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_109_109;
#line 1356 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 1356 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));

#line 1359 "prog_io.m"
                  {
#line 1359 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_108_108 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_35, parse_tree__prog_io__STATE_VARIABLE_Specs_0_67);
                  }
#line 1360 "prog_io.m"
                  {
#line 1360 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_109_109 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_69, parse_tree__prog_io__ItemErrors_36);
                  }
#line 1361 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1361 "prog_io.m"
                  {
#line 1361 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;
#line 1361 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_108_108;
#line 1361 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_Errors_109_109;

#line 1361 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_69 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_69;
#line 1361 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67;
#line 1361 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65;
#line 1361 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1361 "prog_io.m"
                  }
#line 1361 "prog_io.m"
                  continue;
#line 1358 "prog_io.m"
                }
#line 1350 "prog_io.m"
                break;
#line 1350 "prog_io.m"
              case (MR_Integer) 3:
#line 1365 "prog_io.m"
                {
#line 1365 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMVarSet_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 1365 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));
#line 1365 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOM_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 1365 "prog_io.m"
                  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_76_76 = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57 - (MR_Integer) 1);

#line 1373 "prog_io.m"
#line 1373 "prog_io.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_41)) {
#line 1373 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1373 "prog_io.m"
                    case (MR_Integer) 0:
#line 1397 "prog_io.m"
                      {
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__IOM_41, (MR_Integer) 0)));
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item_54;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_82_82;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_83_83;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_84_84;
#line 1387 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemNothingInfo_53;

#line 1384 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Item0_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_52, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 1384 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1384 "prog_io.m"
                          {
#line 1384 "prog_io.m"
                            parse_tree__prog_io__ItemNothingInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_52, (MR_Integer) 1)));
#line 1385 "prog_io.m"
                            {
#line 1385 "prog_io.m"
                              parse_tree__prog_io__process_item_nothing_warning_7_p_0(parse_tree__prog_io__Globals_21, parse_tree__prog_io__ItemNothingInfo_53, &parse_tree__prog_io__Item_54, parse_tree__prog_io__STATE_VARIABLE_Specs_0_67, &parse_tree__prog_io__STATE_VARIABLE_Specs_82_82, parse_tree__prog_io__STATE_VARIABLE_Errors_0_69, &parse_tree__prog_io__STATE_VARIABLE_Errors_83_83);
                            }
#line 1384 "prog_io.m"
                          }
#line 1384 "prog_io.m"
                        else
#line 1388 "prog_io.m"
                          {
#line 1388 "prog_io.m"
                            parse_tree__prog_io__Item_54 = parse_tree__prog_io__Item0_52;
#line 1388 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Errors_83_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_69;
#line 1388 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_82_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_67;
#line 1388 "prog_io.m"
                          }
#line 1390 "prog_io.m"
                        {
#line 1390 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_84_84 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61, ((MR_Box) (parse_tree__prog_io__Item_54)));
                        }
#line 1398 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1398 "prog_io.m"
                        {
#line 1398 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_76_76;
#line 1398 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_61 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_84_84;
#line 1398 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;
#line 1398 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_82_82;
#line 1398 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_Errors_83_83;

#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_69 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_69;
#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67;
#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65;
#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_61;
#line 1398 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57;
#line 1398 "prog_io.m"
                        }
#line 1398 "prog_io.m"
                        continue;
#line 1397 "prog_io.m"
                      }
#line 1373 "prog_io.m"
                      break;
#line 1373 "prog_io.m"
                    case (MR_Integer) 1:
#line 1397 "prog_io.m"
                      {
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_123_123;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__HeadItem_55;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__TailItems_56;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__IOM_41, (MR_Integer) 0)));
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_80_80;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_81_81;
#line 1397 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_84_126;

#line 1392 "prog_io.m"
                        parse_tree__prog_io__HeadItem_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_78_78, (MR_Integer) 0)));
#line 1392 "prog_io.m"
                        parse_tree__prog_io__TailItems_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_78_78, (MR_Integer) 1)));
#line 7672 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1396 "prog_io.m"
                        {
#line 1396 "prog_io.m"
                          parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__HeadItem_55));
#line 1396 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io__TailItems_56));
#line 1396 "prog_io.m"
                        }
#line 1396 "prog_io.m"
                        {
#line 1396 "prog_io.m"
                          parse_tree__prog_io__V_80_80 = mercury__cord__from_list_1_f_0(parse_tree__prog_io__TypeCtorInfo_123_123, parse_tree__prog_io__V_81_81);
                        }
#line 1395 "prog_io.m"
                        {
#line 1395 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_84_126 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_123_123, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61, parse_tree__prog_io__V_80_80);
                        }
#line 1398 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1398 "prog_io.m"
                        {
#line 1398 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_76_76;
#line 1398 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_61 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_84_126;
#line 1398 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;

#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65;
#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_61;
#line 1398 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1398 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57;
#line 1398 "prog_io.m"
                        }
#line 1398 "prog_io.m"
                        continue;
#line 1397 "prog_io.m"
                      }
#line 1373 "prog_io.m"
                      break;
#line 1373 "prog_io.m"
                    case (MR_Integer) 2:
#line 1374 "prog_io.m"
                      {
#line 1374 "prog_io.m"
                        MR_Word parse_tree__prog_io__MVN_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOM_41, (MR_Integer) 0)));
#line 1374 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_95_95;
#line 1374 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_96_96;

#line 1375 "prog_io.m"
                        {
#line 1375 "prog_io.m"
                          parse_tree__prog_io__record_version_numbers_6_p_0(parse_tree__prog_io__MVN_51, parse_tree__prog_io__IOMTerm_40, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_59, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_95_95, parse_tree__prog_io__STATE_VARIABLE_Specs_0_67, &parse_tree__prog_io__STATE_VARIABLE_Specs_96_96);
                        }
#line 1376 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1376 "prog_io.m"
                        {
#line 1376 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_76_76;
#line 1376 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_95_95;
#line 1376 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;
#line 1376 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_96_96;

#line 1376 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_67 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_67;
#line 1376 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65;
#line 1376 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_59 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_59;
#line 1376 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57;
#line 1376 "prog_io.m"
                        }
#line 1376 "prog_io.m"
                        continue;
#line 1374 "prog_io.m"
                      }
#line 1373 "prog_io.m"
                      break;
#line 1373 "prog_io.m"
                    case (MR_Integer) 3:
#line 1373 "prog_io.m"
#line 1373 "prog_io.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_41, (MR_Integer) 0)))) {
#line 1373 "prog_io.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1373 "prog_io.m"
                        case (MR_Integer) 0:
#line 1397 "prog_io.m"
                          {
#line 1397 "prog_io.m"
                            MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_85_132 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_41, (MR_Integer) 1)));

#line 1398 "prog_io.m"
                            /* direct tailcall eliminated */
#line 1398 "prog_io.m"
                            {
#line 1398 "prog_io.m"
                              MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_76_76;
#line 1398 "prog_io.m"
                              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_63 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_85_132;
#line 1398 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;

#line 1398 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_65 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_65;
#line 1398 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_63 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_63;
#line 1398 "prog_io.m"
                              parse_tree__prog_io__InitLookAhead_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1398 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_57 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_57;
#line 1398 "prog_io.m"
                            }
#line 1398 "prog_io.m"
                            continue;
#line 1397 "prog_io.m"
                          }
#line 1373 "prog_io.m"
                          break;
#line 1373 "prog_io.m"
                        case (MR_Integer) 1:
#line 1373 "prog_io.m"
                        case (MR_Integer) 2:
#line 1373 "prog_io.m"
                        case (MR_Integer) 3:
#line 1371 "prog_io.m"
                          {
#line 1372 "prog_io.m"
                            {
#line 1372 "prog_io.m"
                              MR_Word base;
#line 1372 "prog_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "prog_io.m"
                              *parse_tree__prog_io__FinalLookAhead_25 = base;
#line 1372 "prog_io.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_39));
#line 1372 "prog_io.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_40));
#line 1372 "prog_io.m"
                            }
#line 1371 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_58 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_76_76;
#line 1371 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_60 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_59;
#line 1371 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_62 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_61;
#line 1371 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_64 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_63;
#line 1371 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_66 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_74_74;
#line 1371 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Specs_68 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_67;
#line 1371 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Errors_70 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_69;
#line 1371 "prog_io.m"
                          }
#line 1373 "prog_io.m"
                          break;
#line 1373 "prog_io.m"
                      }
#line 1373 "prog_io.m"
                      break;
#line 1373 "prog_io.m"
                  }
#line 1365 "prog_io.m"
                }
#line 1350 "prog_io.m"
                break;
#line 1350 "prog_io.m"
            }
#line 1346 "prog_io.m"
          }
#line 1344 "prog_io.m"
      }
#line 1344 "prog_io.m"
      break;
#line 1344 "prog_io.m"
    }
#line 1332 "prog_io.m"
}

#line 1308 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_18_p_0(
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_20,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_21,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_22,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_32,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_33,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_34,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_35,
#line 1308 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_36,
#line 1308 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_37,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_38,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_39,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_40,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_41,
#line 1308 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_42,
#line 1308 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_43)
#line 1308 "prog_io.m"
{
#line 1318 "prog_io.m"
  while (MR_TRUE)
#line 1318 "prog_io.m"
    {
#line 1318 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1318 "prog_io.m"
      {
#line 1318 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1318 "prog_io.m"
        MR_Integer parse_tree__prog_io__NumItemsLeft_30;
#line 1318 "prog_io.m"
        MR_Word parse_tree__prog_io__MidLookAhead_31;
#line 1318 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_47_47;
#line 1318 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_48_48;
#line 1318 "prog_io.m"
        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49_49;
#line 1318 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_50_50;
#line 1318 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_51_51;
#line 1318 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_52_52;

#line 1319 "prog_io.m"
        {
#line 1319 "prog_io.m"
          parse_tree__prog_io__read_item_sequence_inner_20_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__ModuleName_20, (MR_Integer) 1024, &parse_tree__prog_io__NumItemsLeft_30, parse_tree__prog_io__InitLookAhead_21, &parse_tree__prog_io__MidLookAhead_31, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_32, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_47_47, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_34, &parse_tree__prog_io__STATE_VARIABLE_ItemsCord_48_48, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_36, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49_49, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_38, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_50_50, parse_tree__prog_io__STATE_VARIABLE_Specs_0_40, &parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, parse_tree__prog_io__STATE_VARIABLE_Errors_0_42, &parse_tree__prog_io__STATE_VARIABLE_Errors_52_52);
        }
#line 1322 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__NumItemsLeft_30 == (MR_Integer) 0);
#line 1326 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1323 "prog_io.m"
          {
#line 1323 "prog_io.m"
            /* direct tailcall eliminated */
#line 1323 "prog_io.m"
            {
#line 1323 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_21 = parse_tree__prog_io__MidLookAhead_31;
#line 1323 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_32 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_47_47;
#line 1323 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_34 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_48_48;
#line 1323 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_36 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49_49;
#line 1323 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_38 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_50_50;
#line 1323 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_40 = parse_tree__prog_io__STATE_VARIABLE_Specs_51_51;
#line 1323 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_42 = parse_tree__prog_io__STATE_VARIABLE_Errors_52_52;

#line 1323 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Errors_0_42 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_42;
#line 1323 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Specs_0_40 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_40;
#line 1323 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_38 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_38;
#line 1323 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_36 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_36;
#line 1323 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_34 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_34;
#line 1323 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_32 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_32;
#line 1323 "prog_io.m"
              parse_tree__prog_io__InitLookAhead_21 = parse_tree__prog_io__InitLookAhead__tmp_copy_21;
#line 1323 "prog_io.m"
            }
#line 1323 "prog_io.m"
            continue;
#line 1323 "prog_io.m"
          }
#line 1326 "prog_io.m"
        else
#line 1327 "prog_io.m"
          {
#line 1327 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_22 = parse_tree__prog_io__MidLookAhead_31;
#line 1327 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_43 = parse_tree__prog_io__STATE_VARIABLE_Errors_52_52;
#line 1327 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_41 = parse_tree__prog_io__STATE_VARIABLE_Specs_51_51;
#line 1327 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_39 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_50_50;
#line 1327 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_37 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49_49;
#line 1327 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_35 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_48_48;
#line 1327 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_33 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_47_47;
#line 1327 "prog_io.m"
          }
#line 1318 "prog_io.m"
      }
#line 1318 "prog_io.m"
      break;
#line 1318 "prog_io.m"
    }
#line 1308 "prog_io.m"
}

#line 1188 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1188 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50,
#line 1188 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_52,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_54,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_55,
#line 1188 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_56,
#line 1188 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_57)
#line 1188 "prog_io.m"
{
#line 1196 "prog_io.m"
  while (MR_TRUE)
#line 1196 "prog_io.m"
    {
#line 1196 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1196 "prog_io.m"
      {
#line 1196 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1196 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1196 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstReadTerm_22;
#line 1196 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstIOM_23;
#line 1196 "prog_io.m"
        MR_Word parse_tree__prog_io__V_61_61;
#line 1196 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;

#line 1200 "prog_io.m"
        {
#line 1200 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0(parse_tree__prog_io__TypeCtorInfo_117_117, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50, &parse_tree__prog_io__FirstReadTerm_22);
        }
#line 1201 "prog_io.m"
        {
#line 1201 "prog_io.m"
          parse_tree__prog_io__V_61_61 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
        }
#line 1201 "prog_io.m"
        {
#line 1201 "prog_io.m"
          parse_tree__prog_io__read_term_to_iom_result_6_p_0(parse_tree__prog_io__V_61_61, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50, parse_tree__prog_io__FirstReadTerm_22, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_52, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62, &parse_tree__prog_io__MaybeFirstIOM_23);
        }
#line 1275 "prog_io.m"
#line 1275 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstIOM_23)) {
#line 1275 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1275 "prog_io.m"
          case (MR_Integer) 0:
#line 1284 "prog_io.m"
            {
#line 1284 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_116;

#line 1285 "prog_io.m"
              {
#line 1285 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_116);
              }
#line 1286 "prog_io.m"
              {
#line 1286 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_116, parse_tree__prog_io__STATE_VARIABLE_Specs_0_54, parse_tree__prog_io__STATE_VARIABLE_Specs_55, parse_tree__prog_io__STATE_VARIABLE_Errors_0_56, parse_tree__prog_io__STATE_VARIABLE_Errors_57);
              }
#line 1287 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[4];
#line 1284 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50;
#line 1284 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1284 "prog_io.m"
            }
#line 1275 "prog_io.m"
            break;
#line 1275 "prog_io.m"
          case (MR_Integer) 1:
#line 1284 "prog_io.m"
            {
#line 1284 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_116;

#line 1285 "prog_io.m"
              {
#line 1285 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_116);
              }
#line 1286 "prog_io.m"
              {
#line 1286 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_116, parse_tree__prog_io__STATE_VARIABLE_Specs_0_54, parse_tree__prog_io__STATE_VARIABLE_Specs_55, parse_tree__prog_io__STATE_VARIABLE_Errors_0_56, parse_tree__prog_io__STATE_VARIABLE_Errors_57);
              }
#line 1287 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[4];
#line 1284 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50;
#line 1284 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1284 "prog_io.m"
            }
#line 1275 "prog_io.m"
            break;
#line 1275 "prog_io.m"
          case (MR_Integer) 2:
#line 1276 "prog_io.m"
            {
#line 1276 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAhead_48;
#line 1276 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_113 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1276 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_114 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1276 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_115;
#line 1276 "prog_io.m"
              MR_Word parse_tree__prog_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));
#line 1276 "prog_io.m"
              MR_Word parse_tree__prog_io__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 3)));

#line 1277 "prog_io.m"
              {
#line 1277 "prog_io.m"
                parse_tree__prog_io__FirstContext_115 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_117_117, parse_tree__prog_io__FirstTerm_114);
              }
#line 1278 "prog_io.m"
              {
#line 1278 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_115, parse_tree__prog_io__STATE_VARIABLE_Specs_0_54, parse_tree__prog_io__STATE_VARIABLE_Specs_55, parse_tree__prog_io__STATE_VARIABLE_Errors_0_56, parse_tree__prog_io__STATE_VARIABLE_Errors_57);
              }
#line 1279 "prog_io.m"
              {
#line 1279 "prog_io.m"
                parse_tree__prog_io__LookAhead_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_48, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_113));
#line 1279 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_48, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_114));
#line 1279 "prog_io.m"
              }
#line 1280 "prog_io.m"
              {
#line 1280 "prog_io.m"
                MR_Word base;
#line 1280 "prog_io.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "prog_io.m"
                *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1280 "prog_io.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAhead_48));
#line 1280 "prog_io.m"
              }
#line 1276 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50;
#line 1276 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1276 "prog_io.m"
            }
#line 1275 "prog_io.m"
            break;
#line 1275 "prog_io.m"
          case (MR_Integer) 3:
#line 1204 "prog_io.m"
            {
#line 1204 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1204 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1204 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstIOM_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));

#line 1212 "prog_io.m"
#line 1212 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__FirstIOM_26)) {
#line 1212 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1212 "prog_io.m"
                case (MR_Integer) 0:
#line 1212 "prog_io.m"
                case (MR_Integer) 1:
#line 1212 "prog_io.m"
                case (MR_Integer) 2:
#line 1269 "prog_io.m"
                  {
#line 1269 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstContext_44;
#line 1269 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstLookAhead_45;

#line 1270 "prog_io.m"
                    {
#line 1270 "prog_io.m"
                      parse_tree__prog_io__FirstContext_44 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_117_117, parse_tree__prog_io__FirstTerm_25);
                    }
#line 1271 "prog_io.m"
                    {
#line 1271 "prog_io.m"
                      parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_44, parse_tree__prog_io__STATE_VARIABLE_Specs_0_54, parse_tree__prog_io__STATE_VARIABLE_Specs_55, parse_tree__prog_io__STATE_VARIABLE_Errors_0_56, parse_tree__prog_io__STATE_VARIABLE_Errors_57);
                    }
#line 1272 "prog_io.m"
                    {
#line 1272 "prog_io.m"
                      parse_tree__prog_io__FirstLookAhead_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_45, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1272 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_45, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1272 "prog_io.m"
                    }
#line 1273 "prog_io.m"
                    {
#line 1273 "prog_io.m"
                      MR_Word base;
#line 1273 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "prog_io.m"
                      *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1273 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_45));
#line 1273 "prog_io.m"
                    }
#line 1269 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50;
#line 1269 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1269 "prog_io.m"
                  }
#line 1212 "prog_io.m"
                  break;
#line 1212 "prog_io.m"
                case (MR_Integer) 3:
#line 1212 "prog_io.m"
#line 1212 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 0)))) {
#line 1212 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1212 "prog_io.m"
                    case (MR_Integer) 0:
#line 1206 "prog_io.m"
                      {
#line 1206 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 1)));

#line 1209 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1209 "prog_io.m"
                        {
#line 1209 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_104_104;
#line 1209 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;

#line 1209 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_52 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_52;
#line 1209 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_50;
#line 1209 "prog_io.m"
                        }
#line 1209 "prog_io.m"
                        continue;
#line 1206 "prog_io.m"
                      }
#line 1212 "prog_io.m"
                      break;
#line 1212 "prog_io.m"
                    case (MR_Integer) 1:
#line 1214 "prog_io.m"
                      {
#line 1214 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 1)));
#line 1214 "prog_io.m"
                        MR_Word parse_tree__prog_io__ModuleNameContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 2)));
#line 1213 "prog_io.m"
                        MR_Integer parse_tree__prog_io___ModuleNameSeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 3)));

#line 1219 "prog_io.m"
                        {
#line 1219 "prog_io.m"
                          parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__StartModuleName_27);
                        }
#line 1225 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1222 "prog_io.m"
                          {
#line 1223 "prog_io.m"
                            {
#line 1223 "prog_io.m"
                              MR_Word base;
#line 1223 "prog_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "prog_io.m"
                              *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1223 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1223 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1223 "prog_io.m"
                            }
#line 1222 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Errors_57 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_56;
#line 1222 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Specs_55 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_54;
#line 1222 "prog_io.m"
                          }
#line 1225 "prog_io.m"
                        else
#line 1233 "prog_io.m"
                          {
#line 1226 "prog_io.m"
                            {
#line 1226 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__StartModuleName_27, parse_tree__prog_io__DefaultModuleName_15);
                            }
#line 1233 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1230 "prog_io.m"
                              {
#line 1231 "prog_io.m"
                                {
#line 1231 "prog_io.m"
                                  MR_Word base;
#line 1231 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1231 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15));
#line 1231 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1231 "prog_io.m"
                                }
#line 1230 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Errors_57 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_56;
#line 1230 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Specs_55 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_54;
#line 1230 "prog_io.m"
                              }
#line 1233 "prog_io.m"
                            else
#line 1236 "prog_io.m"
                              {
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_31;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__Severity_32;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__Msg_33;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_34;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_73_73;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_74_74;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_75_75;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_78_78;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_79_79;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_96_96;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_97_97;
#line 1236 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_98_98;

#line 1234 "prog_io.m"
                                {
#line 1234 "prog_io.m"
                                  parse_tree__prog_io__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1234 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50));
#line 1234 "prog_io.m"
                                }
#line 1235 "prog_io.m"
                                {
#line 1235 "prog_io.m"
                                  parse_tree__prog_io__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1235 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1235 "prog_io.m"
                                }
#line 1235 "prog_io.m"
                                {
#line 1235 "prog_io.m"
                                  parse_tree__prog_io__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 1235 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1235 "prog_io.m"
                                }
#line 1235 "prog_io.m"
                                {
#line 1235 "prog_io.m"
                                  parse_tree__prog_io__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[88])));
#line 1235 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io__V_78_78));
#line 1235 "prog_io.m"
                                }
#line 1234 "prog_io.m"
                                {
#line 1234 "prog_io.m"
                                  parse_tree__prog_io__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 1234 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io__V_75_75));
#line 1234 "prog_io.m"
                                }
#line 1234 "prog_io.m"
                                {
#line 1234 "prog_io.m"
                                  parse_tree__prog_io__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[87])));
#line 1234 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 1) = ((MR_Box) (parse_tree__prog_io__V_73_73));
#line 1234 "prog_io.m"
                                }
#line 1246 "prog_io.m"
#line 1246 "prog_io.m"
                                switch (parse_tree__prog_io__RequireModuleDecl_14) {
#line 1246 "prog_io.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 1246 "prog_io.m"
                                  case (MR_Integer) 0:
#line 1238 "prog_io.m"
                                    {
#line 1238 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_92_92;
#line 1238 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_93_93;

#line 1242 "prog_io.m"
                                      parse_tree__prog_io__Severity_32 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_2[0]);
#line 1245 "prog_io.m"
                                      {
#line 1245 "prog_io.m"
                                        parse_tree__prog_io__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "prog_io.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 1245 "prog_io.m"
                                      }
#line 1245 "prog_io.m"
                                      {
#line 1245 "prog_io.m"
                                        parse_tree__prog_io__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io__V_93_93));
#line 1245 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1245 "prog_io.m"
                                      }
#line 1244 "prog_io.m"
                                      {
#line 1244 "prog_io.m"
                                        parse_tree__prog_io__Msg_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_33, 0) = ((MR_Box) (((MR_Integer) 22 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 1244 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_33, 1) = ((MR_Box) (parse_tree__prog_io__V_92_92));
#line 1244 "prog_io.m"
                                      }
#line 1238 "prog_io.m"
                                    }
#line 1246 "prog_io.m"
                                    break;
#line 1246 "prog_io.m"
                                  case (MR_Integer) 1:
#line 1247 "prog_io.m"
                                    {
#line 1248 "prog_io.m"
                                      parse_tree__prog_io__Severity_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1249 "prog_io.m"
                                      {
#line 1249 "prog_io.m"
                                        parse_tree__prog_io__Msg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1249 "prog_io.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_33, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 1249 "prog_io.m"
                                      }
#line 1247 "prog_io.m"
                                    }
#line 1246 "prog_io.m"
                                    break;
#line 1246 "prog_io.m"
                                }
#line 1252 "prog_io.m"
                                {
#line 1252 "prog_io.m"
                                  parse_tree__prog_io__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__Msg_33));
#line 1252 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1252 "prog_io.m"
                                }
#line 1252 "prog_io.m"
                                {
#line 1252 "prog_io.m"
                                  parse_tree__prog_io__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1252 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 1252 "prog_io.m"
                                }
#line 1252 "prog_io.m"
                                {
#line 1252 "prog_io.m"
                                  parse_tree__prog_io__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io__V_97_97));
#line 1252 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1252 "prog_io.m"
                                }
#line 1251 "prog_io.m"
                                {
#line 1251 "prog_io.m"
                                  parse_tree__prog_io__Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 0) = ((MR_Box) (parse_tree__prog_io__Severity_32));
#line 1251 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1251 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 2) = ((MR_Box) (parse_tree__prog_io__V_96_96));
#line 1251 "prog_io.m"
                                }
#line 1253 "prog_io.m"
                                {
#line 1253 "prog_io.m"
                                  MR_Word base;
#line 1253 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "prog_io.m"
                                  *parse_tree__prog_io__STATE_VARIABLE_Specs_55 = base;
#line 1253 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_34));
#line 1253 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_54));
#line 1253 "prog_io.m"
                                }
#line 1254 "prog_io.m"
                                {
#line 1254 "prog_io.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 1)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_56, parse_tree__prog_io__STATE_VARIABLE_Errors_57);
                                }
#line 1260 "prog_io.m"
                                {
#line 1260 "prog_io.m"
                                  MR_Word base;
#line 1260 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1260 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1260 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1260 "prog_io.m"
                                }
#line 1236 "prog_io.m"
                              }
#line 1233 "prog_io.m"
                          }
#line 1214 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50;
#line 1214 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1214 "prog_io.m"
                      }
#line 1212 "prog_io.m"
                      break;
#line 1212 "prog_io.m"
                    case (MR_Integer) 2:
#line 1212 "prog_io.m"
                    case (MR_Integer) 3:
#line 1269 "prog_io.m"
                      {
#line 1269 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstContext_44;
#line 1269 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstLookAhead_45;

#line 1270 "prog_io.m"
                        {
#line 1270 "prog_io.m"
                          parse_tree__prog_io__FirstContext_44 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_117_117, parse_tree__prog_io__FirstTerm_25);
                        }
#line 1271 "prog_io.m"
                        {
#line 1271 "prog_io.m"
                          parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_44, parse_tree__prog_io__STATE_VARIABLE_Specs_0_54, parse_tree__prog_io__STATE_VARIABLE_Specs_55, parse_tree__prog_io__STATE_VARIABLE_Errors_0_56, parse_tree__prog_io__STATE_VARIABLE_Errors_57);
                        }
#line 1272 "prog_io.m"
                        {
#line 1272 "prog_io.m"
                          parse_tree__prog_io__FirstLookAhead_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_45, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1272 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_45, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1272 "prog_io.m"
                        }
#line 1273 "prog_io.m"
                        {
#line 1273 "prog_io.m"
                          MR_Word base;
#line 1273 "prog_io.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "prog_io.m"
                          *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1273 "prog_io.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_45));
#line 1273 "prog_io.m"
                        }
#line 1269 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_50;
#line 1269 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1269 "prog_io.m"
                      }
#line 1212 "prog_io.m"
                      break;
#line 1212 "prog_io.m"
                  }
#line 1212 "prog_io.m"
                  break;
#line 1212 "prog_io.m"
              }
#line 1204 "prog_io.m"
            }
#line 1275 "prog_io.m"
            break;
#line 1275 "prog_io.m"
        }
#line 1196 "prog_io.m"
      }
#line 1196 "prog_io.m"
      break;
#line 1196 "prog_io.m"
    }
#line 1188 "prog_io.m"
}

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1129 "prog_io.m"
{
#line 1129 "prog_io.m"
  {
#line 1129 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1129 "prog_io.m"
    MR_builtin_longjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0, 1);
#line 1129 "prog_io.m"
  }
#line 1129 "prog_io.m"
}

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1129 "prog_io.m"
{
#line 1129 "prog_io.m"
  {
#line 1129 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1129 "prog_io.m"
    (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90 = ((MR_Word) (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90);
#line 1129 "prog_io.m"
    {
#line 1129 "prog_io.m"
      parse_tree__prog_io__handle_module_end_marker_11_p_0_2(parse_tree__prog_io__env_ptr);
#line 1129 "prog_io.m"
      return;
    }
#line 1129 "prog_io.m"
  }
#line 1129 "prog_io.m"
}

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1129 "prog_io.m"
{
#line 1129 "prog_io.m"
  {
#line 1129 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1130 "prog_io.m"
    {
#line 1130 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90);
    }
#line 1130 "prog_io.m"
    if ((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1130 "prog_io.m"
      {
#line 1130 "prog_io.m"
        parse_tree__prog_io__handle_module_end_marker_11_p_0_1(parse_tree__prog_io__env_ptr);
#line 1130 "prog_io.m"
        return;
      }
#line 1129 "prog_io.m"
  }
#line 1129 "prog_io.m"
}

#line 1129 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1129 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1129 "prog_io.m"
{
#line 1129 "prog_io.m"
  {
#line 1129 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1129 "prog_io.m"
    if (MR_builtin_setjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0) == 0)
#line 1129 "prog_io.m"
      {
#line 1129 "prog_io.m"
        {
#line 1129 "prog_io.m"
          {
#line 1129 "prog_io.m"
            mercury__list__member_2_p_1((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &(parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13, parse_tree__prog_io__handle_module_end_marker_11_p_0_3, parse_tree__prog_io__env_ptr);
          }
#line 1129 "prog_io.m"
        }
#line 1129 "prog_io.m"
        (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_FALSE;
#line 1129 "prog_io.m"
      }
#line 1129 "prog_io.m"
    else
#line 1129 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_TRUE;
#line 1129 "prog_io.m"
  }
#line 1129 "prog_io.m"
}

#line 1109 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1109 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1109 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1109 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1109 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27)
#line 1109 "prog_io.m"
{
#line 1109 "prog_io.m"
  {
#line 1109 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s parse_tree__prog_io__env;

#line 1109 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13 = parse_tree__prog_io__ContainingModules_13;
#line 1109 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16 = parse_tree__prog_io__EndedModuleName_16;
#line 1117 "prog_io.m"
    {
#line 1117 "prog_io.m"
      (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__CurModuleName_12, (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16);
    }
#line 1120 "prog_io.m"
    if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1119 "prog_io.m"
      {
#line 1119 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1119 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1119 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1119 "prog_io.m"
      }
#line 1120 "prog_io.m"
    else
#line 1126 "prog_io.m"
      {
#line 1121 "prog_io.m"
        {
#line 1121 "prog_io.m"
          (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, parse_tree__prog_io__CurModuleName_12);
        }
#line 1126 "prog_io.m"
        if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1125 "prog_io.m"
          {
#line 1125 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1125 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1125 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1125 "prog_io.m"
          }
#line 1126 "prog_io.m"
        else
#line 1142 "prog_io.m"
          {
#line 1129 "prog_io.m"
            {
#line 1129 "prog_io.m"
              parse_tree__prog_io__handle_module_end_marker_11_p_0_4(&parse_tree__prog_io__env);
            }
#line 1142 "prog_io.m"
            if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1136 "prog_io.m"
              {
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_22;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_23;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_30_30;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_33_33;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_36_36;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_37_37;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_46_46;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_47_47;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_48_48;
#line 1136 "prog_io.m"
                MR_Word parse_tree__prog_io__V_49_49;

#line 1135 "prog_io.m"
                {
#line 1135 "prog_io.m"
                  parse_tree__prog_io__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1135 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1135 "prog_io.m"
                }
#line 1135 "prog_io.m"
                {
#line 1135 "prog_io.m"
                  parse_tree__prog_io__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io__V_37_37));
#line 1135 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1135 "prog_io.m"
                }
#line 1135 "prog_io.m"
                {
#line 1135 "prog_io.m"
                  parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[83])));
#line 1135 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_36_36));
#line 1135 "prog_io.m"
                }
#line 1134 "prog_io.m"
                {
#line 1134 "prog_io.m"
                  parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[82])));
#line 1134 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1134 "prog_io.m"
                }
#line 1134 "prog_io.m"
                {
#line 1134 "prog_io.m"
                  parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[81])));
#line 1134 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1134 "prog_io.m"
                }
#line 1138 "prog_io.m"
                {
#line 1138 "prog_io.m"
                  parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1138 "prog_io.m"
                }
#line 1138 "prog_io.m"
                {
#line 1138 "prog_io.m"
                  parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1138 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "prog_io.m"
                }
#line 1138 "prog_io.m"
                {
#line 1138 "prog_io.m"
                  parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1138 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 1138 "prog_io.m"
                }
#line 1138 "prog_io.m"
                {
#line 1138 "prog_io.m"
                  parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1138 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "prog_io.m"
                }
#line 1137 "prog_io.m"
                {
#line 1137 "prog_io.m"
                  parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1137 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1137 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1137 "prog_io.m"
                }
#line 1139 "prog_io.m"
                {
#line 1139 "prog_io.m"
                  MR_Word base;
#line 1139 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1139 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1139 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1139 "prog_io.m"
                }
#line 1140 "prog_io.m"
                {
#line 1140 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1141 "prog_io.m"
                {
#line 1141 "prog_io.m"
                  MR_Word base;
#line 1141 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_18 = base;
#line 1141 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_14));
#line 1141 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_15));
#line 1141 "prog_io.m"
                }
#line 1136 "prog_io.m"
              }
#line 1142 "prog_io.m"
            else
#line 1146 "prog_io.m"
              {
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_57_57;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_60_60;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_63_63;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_64_64;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_65_65;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_68_68;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_71_71;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_72_72;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_81_81;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_82_82;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_83_83;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__V_84_84;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_91;
#line 1146 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_92;

#line 1144 "prog_io.m"
                {
#line 1144 "prog_io.m"
                  parse_tree__prog_io__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1144 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16));
#line 1144 "prog_io.m"
                }
#line 1146 "prog_io.m"
                {
#line 1146 "prog_io.m"
                  parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1146 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1146 "prog_io.m"
                }
#line 1146 "prog_io.m"
                {
#line 1146 "prog_io.m"
                  parse_tree__prog_io__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 1146 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 1146 "prog_io.m"
                }
#line 1146 "prog_io.m"
                {
#line 1146 "prog_io.m"
                  parse_tree__prog_io__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[86])));
#line 1146 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 1146 "prog_io.m"
                }
#line 1145 "prog_io.m"
                {
#line 1145 "prog_io.m"
                  parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[85])));
#line 1145 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1145 "prog_io.m"
                }
#line 1144 "prog_io.m"
                {
#line 1144 "prog_io.m"
                  parse_tree__prog_io__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__V_64_64));
#line 1144 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1144 "prog_io.m"
                }
#line 1144 "prog_io.m"
                {
#line 1144 "prog_io.m"
                  parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[83])));
#line 1144 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 1144 "prog_io.m"
                }
#line 1143 "prog_io.m"
                {
#line 1143 "prog_io.m"
                  parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[82])));
#line 1143 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 1143 "prog_io.m"
                }
#line 1143 "prog_io.m"
                {
#line 1143 "prog_io.m"
                  parse_tree__prog_io__Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[84])));
#line 1143 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 1) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1143 "prog_io.m"
                }
#line 1148 "prog_io.m"
                {
#line 1148 "prog_io.m"
                  parse_tree__prog_io__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_91));
#line 1148 "prog_io.m"
                }
#line 1148 "prog_io.m"
                {
#line 1148 "prog_io.m"
                  parse_tree__prog_io__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io__V_84_84));
#line 1148 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "prog_io.m"
                }
#line 1148 "prog_io.m"
                {
#line 1148 "prog_io.m"
                  parse_tree__prog_io__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1148 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1148 "prog_io.m"
                }
#line 1148 "prog_io.m"
                {
#line 1148 "prog_io.m"
                  parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__V_82_82));
#line 1148 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "prog_io.m"
                }
#line 1147 "prog_io.m"
                {
#line 1147 "prog_io.m"
                  parse_tree__prog_io__Spec_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1147 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 2) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 1147 "prog_io.m"
                }
#line 1149 "prog_io.m"
                {
#line 1149 "prog_io.m"
                  MR_Word base;
#line 1149 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1149 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_92));
#line 1149 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1149 "prog_io.m"
                }
#line 1150 "prog_io.m"
                {
#line 1150 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1152 "prog_io.m"
                *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "prog_io.m"
              }
#line 1142 "prog_io.m"
          }
#line 1126 "prog_io.m"
      }
#line 1109 "prog_io.m"
  }
#line 1109 "prog_io.m"
}

#line 1063 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1063 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1063 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1063 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1063 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51)
#line 1063 "prog_io.m"
{
#line 1075 "prog_io.m"
  {
#line 1075 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_114_114;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionKind_33;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_34;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedContainingModules_37;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedModuleComponents_39;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__SubModuleParseTreeSrc_40;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__Component_41;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_103_103;
#line 1075 "prog_io.m"
    MR_Word parse_tree__prog_io__V_106_106;

#line 1078 "prog_io.m"
    if ((parse_tree__prog_io__MaybePrevSection_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "prog_io.m"
      {
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionPieces_35;
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionSpec_36;
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__V_56_56;
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__V_95_95;
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__V_96_96;
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__V_97_97;
#line 1079 "prog_io.m"
        MR_Word parse_tree__prog_io__V_98_98;

#line 1081 "prog_io.m"
        {
#line 1081 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1081 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1081 "prog_io.m"
        }
#line 1081 "prog_io.m"
        {
#line 1081 "prog_io.m"
          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1081 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[40])));
#line 1081 "prog_io.m"
        }
#line 1080 "prog_io.m"
        {
#line 1080 "prog_io.m"
          parse_tree__prog_io__NoSectionPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[80])));
#line 1080 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1080 "prog_io.m"
        }
#line 1089 "prog_io.m"
        {
#line 1089 "prog_io.m"
          parse_tree__prog_io__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionPieces_35));
#line 1089 "prog_io.m"
        }
#line 1089 "prog_io.m"
        {
#line 1089 "prog_io.m"
          parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 1089 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "prog_io.m"
        }
#line 1089 "prog_io.m"
        {
#line 1089 "prog_io.m"
          parse_tree__prog_io__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1089 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 1) = ((MR_Box) (parse_tree__prog_io__V_97_97));
#line 1089 "prog_io.m"
        }
#line 1089 "prog_io.m"
        {
#line 1089 "prog_io.m"
          parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_96_96));
#line 1089 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "prog_io.m"
        }
#line 1088 "prog_io.m"
        {
#line 1088 "prog_io.m"
          parse_tree__prog_io__NoSectionSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1088 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1088 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 2) = ((MR_Box) (parse_tree__prog_io__V_95_95));
#line 1088 "prog_io.m"
        }
#line 1090 "prog_io.m"
        {
#line 1090 "prog_io.m"
          parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionSpec_36));
#line 1090 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_48));
#line 1090 "prog_io.m"
        }
#line 1092 "prog_io.m"
        {
#line 1092 "prog_io.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_50, &parse_tree__prog_io__STATE_VARIABLE_Errors_103_103);
        }
#line 1093 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = (MR_Integer) 0;
#line 1094 "prog_io.m"
        {
#line 1094 "prog_io.m"
          parse_tree__prog_io__SectionContext_34 = mercury__term__context_init_0_f_0();
        }
#line 1079 "prog_io.m"
      }
#line 1078 "prog_io.m"
    else
#line 1077 "prog_io.m"
      {
#line 1077 "prog_io.m"
        MR_Word parse_tree__prog_io__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_22, (MR_Integer) 0)));

#line 1077 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 0)));
#line 1077 "prog_io.m"
        parse_tree__prog_io__SectionContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 1)));
#line 1077 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_48;
#line 1077 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Errors_103_103 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_50;
#line 1077 "prog_io.m"
      }
#line 1096 "prog_io.m"
    {
#line 1096 "prog_io.m"
      parse_tree__prog_io__NestedContainingModules_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1096 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 1) = ((MR_Box) (parse_tree__prog_io__ContainingModules_21));
#line 1096 "prog_io.m"
    }
#line 9465 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0;
#line 1101 "prog_io.m"
    {
#line 1101 "prog_io.m"
      parse_tree__prog_io__V_106_106 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_114_114);
    }
#line 1098 "prog_io.m"
    {
#line 1098 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__StartModuleName_23, parse_tree__prog_io__NestedContainingModules_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__V_106_106, &parse_tree__prog_io__NestedModuleComponents_39, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47, parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Specs_49, parse_tree__prog_io__STATE_VARIABLE_Errors_103_103, parse_tree__prog_io__STATE_VARIABLE_Errors_51);
    }
#line 1103 "prog_io.m"
    {
#line 1103 "prog_io.m"
      parse_tree__prog_io__SubModuleParseTreeSrc_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1103 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 1) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1103 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 2) = ((MR_Box) (parse_tree__prog_io__NestedModuleComponents_39));
#line 1103 "prog_io.m"
    }
#line 1105 "prog_io.m"
    {
#line 1105 "prog_io.m"
      parse_tree__prog_io__Component_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_33));
#line 1105 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_34));
#line 1105 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 2) = ((MR_Box) (parse_tree__prog_io__SubModuleParseTreeSrc_40));
#line 1105 "prog_io.m"
    }
#line 1107 "prog_io.m"
    {
#line 1107 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43 = mercury__cord__snoc_2_f_0(parse_tree__prog_io__TypeCtorInfo_114_114, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42, ((MR_Box) (parse_tree__prog_io__Component_41)));
    }
#line 1075 "prog_io.m"
  }
#line 1063 "prog_io.m"
}

#line 1030 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 1030 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 1030 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 1030 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 1030 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 1030 "prog_io.m"
{
#line 1040 "prog_io.m"
  {
#line 1040 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1040 "prog_io.m"
#line 1040 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 1040 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1040 "prog_io.m"
      case (MR_Integer) 1:
#line 1058 "prog_io.m"
        {
#line 1058 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 1058 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 1058 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 1058 "prog_io.m"
        }
#line 1040 "prog_io.m"
        break;
#line 1040 "prog_io.m"
      case (MR_Integer) 0:
#line 1040 "prog_io.m"
        {
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionPieces_14;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionSpec_15;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__V_25_25;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__V_28_28;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__V_29_29;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__V_67_67;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__V_68_68;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__V_69_69;
#line 1040 "prog_io.m"
          MR_Word parse_tree__prog_io__V_70_70;

#line 1041 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 1045 "prog_io.m"
          {
#line 1045 "prog_io.m"
            parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1045 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_9));
#line 1045 "prog_io.m"
          }
#line 1045 "prog_io.m"
          {
#line 1045 "prog_io.m"
            parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 1045 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[35])));
#line 1045 "prog_io.m"
          }
#line 1044 "prog_io.m"
          {
#line 1044 "prog_io.m"
            parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[79])));
#line 1044 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1044 "prog_io.m"
          }
#line 1043 "prog_io.m"
          {
#line 1043 "prog_io.m"
            parse_tree__prog_io__MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[3])));
#line 1043 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1043 "prog_io.m"
          }
#line 1054 "prog_io.m"
          {
#line 1054 "prog_io.m"
            parse_tree__prog_io__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1054 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionPieces_14));
#line 1054 "prog_io.m"
          }
#line 1054 "prog_io.m"
          {
#line 1054 "prog_io.m"
            parse_tree__prog_io__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 1054 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1054 "prog_io.m"
          }
#line 1053 "prog_io.m"
          {
#line 1053 "prog_io.m"
            parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Context_10));
#line 1053 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 1053 "prog_io.m"
          }
#line 1054 "prog_io.m"
          {
#line 1054 "prog_io.m"
            parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1054 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1054 "prog_io.m"
          }
#line 1052 "prog_io.m"
          {
#line 1052 "prog_io.m"
            parse_tree__prog_io__MissingSectionSpec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1052 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1052 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1052 "prog_io.m"
          }
#line 1055 "prog_io.m"
          {
#line 1055 "prog_io.m"
            MR_Word base;
#line 1055 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = base;
#line 1055 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionSpec_15));
#line 1055 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_18));
#line 1055 "prog_io.m"
          }
#line 1056 "prog_io.m"
          {
#line 1056 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_20, parse_tree__prog_io__STATE_VARIABLE_Errors_21);
#line 1056 "prog_io.m"
            return;
          }
#line 1040 "prog_io.m"
        }
#line 1040 "prog_io.m"
        break;
#line 1040 "prog_io.m"
    }
#line 1040 "prog_io.m"
  }
#line 1030 "prog_io.m"
}

#line 1017 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_5_p_0(
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_6,
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_7,
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_8,
#line 1017 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11,
#line 1017 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12)
#line 1017 "prog_io.m"
{
#line 1025 "prog_io.m"
  {
#line 1025 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1023 "prog_io.m"
    {
#line 1023 "prog_io.m"
      parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__ItemsCord_8);
    }
#line 1025 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1025 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11;
#line 1025 "prog_io.m"
    else
#line 1026 "prog_io.m"
      {
#line 1026 "prog_io.m"
        MR_Word parse_tree__prog_io__Component_10;

#line 1026 "prog_io.m"
        {
#line 1026 "prog_io.m"
          parse_tree__prog_io__Component_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_10, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_6));
#line 1026 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_10, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_7));
#line 1026 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_10, 2) = ((MR_Box) (parse_tree__prog_io__ItemsCord_8));
#line 1026 "prog_io.m"
        }
#line 1027 "prog_io.m"
        {
#line 1027 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_12 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_11, ((MR_Box) (parse_tree__prog_io__Component_10)));
        }
#line 1026 "prog_io.m"
      }
#line 1025 "prog_io.m"
  }
#line 1017 "prog_io.m"
}

#line 843 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_73,
#line 843 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74,
#line 843 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_75,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_77,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_78,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_79,
#line 843 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_80,
#line 843 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_81)
#line 843 "prog_io.m"
{
#line 855 "prog_io.m"
  while (MR_TRUE)
#line 855 "prog_io.m"
    {
#line 855 "prog_io.m"
      /* tailcall optimized into a loop */
#line 855 "prog_io.m"
      {
#line 855 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 855 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_33;
#line 855 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84;

#line 856 "prog_io.m"
        {
#line 856 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74, &parse_tree__prog_io__ReadIOMResult_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84);
        }
#line 862 "prog_io.m"
#line 862 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_33)) {
#line 862 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 862 "prog_io.m"
          case (MR_Integer) 0:
#line 859 "prog_io.m"
            {
#line 861 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 859 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_73 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72;
#line 859 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_75 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74;
#line 859 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_77 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84;
#line 859 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_79 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_78;
#line 859 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_81 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_80;
#line 859 "prog_io.m"
            }
#line 862 "prog_io.m"
            break;
#line 862 "prog_io.m"
          case (MR_Integer) 1:
#line 863 "prog_io.m"
            {
#line 863 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_34 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_33), (MR_Integer) 1);
#line 863 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_198_198;
#line 863 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_200_200;

#line 866 "prog_io.m"
              {
#line 866 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_198_198, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_34));
#line 866 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_198_198, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_78));
#line 866 "prog_io.m"
              }
#line 867 "prog_io.m"
              {
#line 867 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_80, &parse_tree__prog_io__STATE_VARIABLE_Errors_200_200);
              }
#line 868 "prog_io.m"
              /* direct tailcall eliminated */
#line 868 "prog_io.m"
              {
#line 868 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84;
#line 868 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_198_198;
#line 868 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_200_200;

#line 868 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80;
#line 868 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78;
#line 868 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76;
#line 868 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "prog_io.m"
              }
#line 868 "prog_io.m"
              continue;
#line 863 "prog_io.m"
            }
#line 862 "prog_io.m"
            break;
#line 862 "prog_io.m"
          case (MR_Integer) 2:
#line 874 "prog_io.m"
            {
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_39;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__SectionContext_42;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_43;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemsCord_46;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_179_179;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_180_180;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__V_182_182;
#line 874 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_183_183;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_184_184;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_185_185;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_186_186;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_188_188;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__V_189_189;
#line 874 "prog_io.m"
              MR_Word parse_tree__prog_io__V_197_197;
#line 873 "prog_io.m"
              MR_Word parse_tree__prog_io___Specs_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 873 "prog_io.m"
              MR_Word parse_tree__prog_io___Errors_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 3)));
#line 880 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_40;
#line 886 "prog_io.m"
              MR_Word parse_tree__prog_io__V_45_45;

#line 879 "prog_io.m"
              {
#line 879 "prog_io.m"
                parse_tree__prog_io__Context_39 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_36);
              }
#line 880 "prog_io.m"
              {
#line 880 "prog_io.m"
                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_39, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71, &parse_tree__prog_io___MissingStartSectionWarning_40, parse_tree__prog_io__STATE_VARIABLE_Specs_0_78, &parse_tree__prog_io__STATE_VARIABLE_Specs_179_179, parse_tree__prog_io__STATE_VARIABLE_Errors_0_80, &parse_tree__prog_io__STATE_VARIABLE_Errors_180_180);
              }
#line 884 "prog_io.m"
              {
#line 884 "prog_io.m"
                parse_tree__prog_io__SectionContext_42 = mercury__term__context_init_0_f_0();
              }
#line 885 "prog_io.m"
              {
#line 885 "prog_io.m"
                parse_tree__prog_io__ItemSeqInitLookAhead_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_35));
#line 885 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_36));
#line 885 "prog_io.m"
              }
#line 888 "prog_io.m"
              {
#line 888 "prog_io.m"
                parse_tree__prog_io__V_182_182 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
              }
#line 886 "prog_io.m"
              {
#line 886 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_18_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_43, &parse_tree__prog_io__ItemSeqFinalLookAhead_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_45_45, parse_tree__prog_io__V_182_182, &parse_tree__prog_io__ItemsCord_46, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_183_183, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_184_184, parse_tree__prog_io__STATE_VARIABLE_Specs_179_179, &parse_tree__prog_io__STATE_VARIABLE_Specs_185_185, parse_tree__prog_io__STATE_VARIABLE_Errors_180_180, &parse_tree__prog_io__STATE_VARIABLE_Errors_186_186);
              }
#line 890 "prog_io.m"
              {
#line 890 "prog_io.m"
                parse_tree__prog_io__add_section_component_5_p_0((MR_Integer) 1, parse_tree__prog_io__SectionContext_42, parse_tree__prog_io__ItemsCord_46, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_188_188);
              }
#line 895 "prog_io.m"
              {
#line 895 "prog_io.m"
                parse_tree__prog_io__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_197_197, 0) = ((MR_Box) ((MR_Integer) 1));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_197_197, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_42));
#line 895 "prog_io.m"
              }
#line 895 "prog_io.m"
              {
#line 895 "prog_io.m"
                parse_tree__prog_io__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_189_189, 0) = ((MR_Box) (parse_tree__prog_io__V_197_197));
#line 895 "prog_io.m"
              }
#line 894 "prog_io.m"
              /* direct tailcall eliminated */
#line 894 "prog_io.m"
              {
#line 894 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_189_189;
#line 894 "prog_io.m"
                MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 894 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_188_188;
#line 894 "prog_io.m"
                MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_183_183;
#line 894 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_184_184;
#line 894 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_185_185;
#line 894 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_186_186;

#line 894 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80;
#line 894 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78;
#line 894 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76;
#line 894 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74;
#line 894 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72;
#line 894 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 894 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71 = (MR_Integer) 0;
#line 894 "prog_io.m"
                parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 894 "prog_io.m"
              }
#line 894 "prog_io.m"
              continue;
#line 874 "prog_io.m"
            }
#line 862 "prog_io.m"
            break;
#line 862 "prog_io.m"
          case (MR_Integer) 3:
#line 900 "prog_io.m"
            {
#line 900 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 900 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 900 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_248 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));

#line 908 "prog_io.m"
#line 908 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_47)) {
#line 908 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 908 "prog_io.m"
                case (MR_Integer) 0:
#line 908 "prog_io.m"
                case (MR_Integer) 1:
#line 966 "prog_io.m"
                  {
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_88_88;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_89_89;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_92_92;
#line 966 "prog_io.m"
                    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_93_93;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_94_94;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_95_95;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_96_96;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_98_98;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_99_99;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_107_107;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionKind_235;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionContext_236;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_237;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_238;
#line 966 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemsCord_239;
#line 995 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_67_67;

#line 971 "prog_io.m"
#line 971 "prog_io.m"
                    switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_47)) {
#line 971 "prog_io.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 971 "prog_io.m"
                      case (MR_Integer) 0:
#line 971 "prog_io.m"
                      case (MR_Integer) 1:
#line 974 "prog_io.m"
                        {
#line 980 "prog_io.m"
                          if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "prog_io.m"
                            {
#line 981 "prog_io.m"
                              MR_Word parse_tree__prog_io__Context_225;
#line 983 "prog_io.m"
                              MR_Word parse_tree__prog_io___MissingStartSectionWarning_224;

#line 982 "prog_io.m"
                              {
#line 982 "prog_io.m"
                                parse_tree__prog_io__Context_225 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_248);
                              }
#line 983 "prog_io.m"
                              {
#line 983 "prog_io.m"
                                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_225, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71, &parse_tree__prog_io___MissingStartSectionWarning_224, parse_tree__prog_io__STATE_VARIABLE_Specs_0_78, &parse_tree__prog_io__STATE_VARIABLE_Specs_88_88, parse_tree__prog_io__STATE_VARIABLE_Errors_0_80, &parse_tree__prog_io__STATE_VARIABLE_Errors_89_89);
                              }
#line 988 "prog_io.m"
                              parse_tree__prog_io__SectionKind_235 = (MR_Integer) 1;
#line 989 "prog_io.m"
                              {
#line 989 "prog_io.m"
                                parse_tree__prog_io__SectionContext_236 = mercury__term__context_init_0_f_0();
                              }
#line 981 "prog_io.m"
                            }
#line 980 "prog_io.m"
                          else
#line 976 "prog_io.m"
                            {
#line 976 "prog_io.m"
                              MR_Word parse_tree__prog_io__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 976 "prog_io.m"
                              parse_tree__prog_io__SectionKind_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_90_90, (MR_Integer) 0)));
#line 976 "prog_io.m"
                              parse_tree__prog_io__SectionContext_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_90_90, (MR_Integer) 1)));
#line 976 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_88_88 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_78;
#line 976 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_89_89 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_80;
#line 976 "prog_io.m"
                            }
#line 991 "prog_io.m"
                          {
#line 991 "prog_io.m"
                            parse_tree__prog_io__ItemSeqInitLookAhead_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_237, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_247));
#line 991 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_237, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_248));
#line 991 "prog_io.m"
                          }
#line 974 "prog_io.m"
                        }
#line 971 "prog_io.m"
                        break;
#line 971 "prog_io.m"
                      case (MR_Integer) 3:
#line 969 "prog_io.m"
                        {
#line 968 "prog_io.m"
                          MR_Integer parse_tree__prog_io___SectionSeqNum_64;

#line 968 "prog_io.m"
                          parse_tree__prog_io__SectionKind_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));
#line 968 "prog_io.m"
                          parse_tree__prog_io__SectionContext_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 2)));
#line 968 "prog_io.m"
                          parse_tree__prog_io___SectionSeqNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 3)));
#line 970 "prog_io.m"
                          parse_tree__prog_io__ItemSeqInitLookAhead_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_88_88 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_78;
#line 969 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_89_89 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_80;
#line 969 "prog_io.m"
                        }
#line 971 "prog_io.m"
                        break;
#line 971 "prog_io.m"
                    }
#line 997 "prog_io.m"
                    {
#line 997 "prog_io.m"
                      parse_tree__prog_io__V_92_92 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                    }
#line 995 "prog_io.m"
                    {
#line 995 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_18_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_237, &parse_tree__prog_io__ItemSeqFinalLookAhead_238, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_67_67, parse_tree__prog_io__V_92_92, &parse_tree__prog_io__ItemsCord_239, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_93_93, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_94_94, parse_tree__prog_io__STATE_VARIABLE_Specs_88_88, &parse_tree__prog_io__STATE_VARIABLE_Specs_95_95, parse_tree__prog_io__STATE_VARIABLE_Errors_89_89, &parse_tree__prog_io__STATE_VARIABLE_Errors_96_96);
                    }
#line 999 "prog_io.m"
                    {
#line 999 "prog_io.m"
                      parse_tree__prog_io__add_section_component_5_p_0(parse_tree__prog_io__SectionKind_235, parse_tree__prog_io__SectionContext_236, parse_tree__prog_io__ItemsCord_239, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_98_98);
                    }
#line 1004 "prog_io.m"
                    {
#line 1004 "prog_io.m"
                      parse_tree__prog_io__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_235));
#line 1004 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_107_107, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_236));
#line 1004 "prog_io.m"
                    }
#line 1004 "prog_io.m"
                    {
#line 1004 "prog_io.m"
                      parse_tree__prog_io__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io__V_107_107));
#line 1004 "prog_io.m"
                    }
#line 1003 "prog_io.m"
                    /* direct tailcall eliminated */
#line 1003 "prog_io.m"
                    {
#line 1003 "prog_io.m"
                      MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_99_99;
#line 1003 "prog_io.m"
                      MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_238;
#line 1003 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_98_98;
#line 1003 "prog_io.m"
                      MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_93_93;
#line 1003 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_94_94;
#line 1003 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_95_95;
#line 1003 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_96_96;

#line 1003 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Errors_0_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80;
#line 1003 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Specs_0_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78;
#line 1003 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76;
#line 1003 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74;
#line 1003 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72;
#line 1003 "prog_io.m"
                      parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1003 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71 = (MR_Integer) 0;
#line 1003 "prog_io.m"
                      parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 1003 "prog_io.m"
                    }
#line 1003 "prog_io.m"
                    continue;
#line 966 "prog_io.m"
                  }
#line 908 "prog_io.m"
                  break;
#line 908 "prog_io.m"
                case (MR_Integer) 2:
#line 909 "prog_io.m"
                  {
#line 909 "prog_io.m"
                    MR_Word parse_tree__prog_io__Msg_50;
#line 909 "prog_io.m"
                    MR_Word parse_tree__prog_io__Spec_51;
#line 909 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_155_155;
#line 909 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_161_161;
#line 909 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_163_163;

#line 912 "prog_io.m"
                    {
#line 912 "prog_io.m"
                      parse_tree__prog_io__V_155_155 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_248);
                    }
#line 912 "prog_io.m"
                    {
#line 912 "prog_io.m"
                      parse_tree__prog_io__Msg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 912 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_50, 0) = ((MR_Box) (parse_tree__prog_io__V_155_155));
#line 912 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[78])));
#line 912 "prog_io.m"
                    }
#line 913 "prog_io.m"
                    {
#line 913 "prog_io.m"
                      parse_tree__prog_io__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_161_161, 0) = ((MR_Box) (parse_tree__prog_io__Msg_50));
#line 913 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "prog_io.m"
                    }
#line 913 "prog_io.m"
                    {
#line 913 "prog_io.m"
                      parse_tree__prog_io__Spec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_51, 2) = ((MR_Box) (parse_tree__prog_io__V_161_161));
#line 913 "prog_io.m"
                    }
#line 914 "prog_io.m"
                    {
#line 914 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Specs_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_163_163, 0) = ((MR_Box) (parse_tree__prog_io__Spec_51));
#line 914 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_163_163, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_78));
#line 914 "prog_io.m"
                    }
#line 915 "prog_io.m"
                    /* direct tailcall eliminated */
#line 915 "prog_io.m"
                    {
#line 915 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84;
#line 915 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_163_163;

#line 915 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Specs_0_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78;
#line 915 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76;
#line 915 "prog_io.m"
                      parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 915 "prog_io.m"
                    }
#line 915 "prog_io.m"
                    continue;
#line 909 "prog_io.m"
                  }
#line 908 "prog_io.m"
                  break;
#line 908 "prog_io.m"
                case (MR_Integer) 3:
#line 908 "prog_io.m"
#line 908 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 0)))) {
#line 908 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 908 "prog_io.m"
                    case (MR_Integer) 0:
#line 902 "prog_io.m"
                      {
#line 902 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_171_171 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));

#line 903 "prog_io.m"
                        /* direct tailcall eliminated */
#line 903 "prog_io.m"
                        {
#line 903 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_171_171;
#line 903 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84;

#line 903 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76;
#line 903 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74;
#line 903 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "prog_io.m"
                        }
#line 903 "prog_io.m"
                        continue;
#line 902 "prog_io.m"
                      }
#line 908 "prog_io.m"
                      break;
#line 908 "prog_io.m"
                    case (MR_Integer) 1:
#line 922 "prog_io.m"
                      {
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawStartModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 2)));
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_56;
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__SubModuleFinalLookAhead_58;
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_133_133;
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_135_135;
#line 922 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_136_136;
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_137_137;
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_138_138;
#line 922 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_139_139;
#line 921 "prog_io.m"
                        MR_Integer parse_tree__prog_io___StartSeqNum_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 3)));

#line 926 "prog_io.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io__RawStartModuleName_52)) == (MR_mktag((MR_Integer) 1))))
#line 927 "prog_io.m"
                          {
#line 927 "prog_io.m"
                            MR_Word parse_tree__prog_io__RawModuleName_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_52, (MR_Integer) 0)));
#line 927 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_217 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_52, (MR_Integer) 1)));

#line 929 "prog_io.m"
                            {
#line 929 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__RawModuleName_57, parse_tree__prog_io__CurModuleName_21);
                            }
#line 932 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 931 "prog_io.m"
                              {
#line 931 "prog_io.m"
                                {
#line 931 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_56, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 931 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_56, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_217));
#line 931 "prog_io.m"
                                }
#line 931 "prog_io.m"
                                parse_tree__prog_io__STATE_VARIABLE_Specs_133_133 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_78;
#line 931 "prog_io.m"
                              }
#line 932 "prog_io.m"
                            else
#line 937 "prog_io.m"
                              {
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_110_110;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_113_113;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_114_114;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_115_115;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_118_118;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_119_119;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_128_128;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_129_129;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_130_130;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_208;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__Msg_209;
#line 937 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_210;

#line 935 "prog_io.m"
                                {
#line 935 "prog_io.m"
                                  parse_tree__prog_io__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 935 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_114_114, 1) = ((MR_Box) (parse_tree__prog_io__RawStartModuleName_52));
#line 935 "prog_io.m"
                                }
#line 937 "prog_io.m"
                                {
#line 937 "prog_io.m"
                                  parse_tree__prog_io__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 937 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 937 "prog_io.m"
                                }
#line 937 "prog_io.m"
                                {
#line 937 "prog_io.m"
                                  parse_tree__prog_io__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io__V_119_119));
#line 937 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 937 "prog_io.m"
                                }
#line 936 "prog_io.m"
                                {
#line 936 "prog_io.m"
                                  parse_tree__prog_io__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[77])));
#line 936 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_115_115, 1) = ((MR_Box) (parse_tree__prog_io__V_118_118));
#line 936 "prog_io.m"
                                }
#line 935 "prog_io.m"
                                {
#line 935 "prog_io.m"
                                  parse_tree__prog_io__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io__V_114_114));
#line 935 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io__V_115_115));
#line 935 "prog_io.m"
                                }
#line 934 "prog_io.m"
                                {
#line 934 "prog_io.m"
                                  parse_tree__prog_io__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[76])));
#line 934 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_110_110, 1) = ((MR_Box) (parse_tree__prog_io__V_113_113));
#line 934 "prog_io.m"
                                }
#line 933 "prog_io.m"
                                {
#line 933 "prog_io.m"
                                  parse_tree__prog_io__Pieces_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_208, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[75])));
#line 933 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_208, 1) = ((MR_Box) (parse_tree__prog_io__V_110_110));
#line 933 "prog_io.m"
                                }
#line 938 "prog_io.m"
                                {
#line 938 "prog_io.m"
                                  parse_tree__prog_io__Msg_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 938 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_209, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_208));
#line 938 "prog_io.m"
                                }
#line 940 "prog_io.m"
                                {
#line 940 "prog_io.m"
                                  parse_tree__prog_io__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_130_130, 0) = ((MR_Box) (parse_tree__prog_io__Msg_209));
#line 940 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "prog_io.m"
                                }
#line 940 "prog_io.m"
                                {
#line 940 "prog_io.m"
                                  parse_tree__prog_io__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 940 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_53));
#line 940 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_129_129, 1) = ((MR_Box) (parse_tree__prog_io__V_130_130));
#line 940 "prog_io.m"
                                }
#line 940 "prog_io.m"
                                {
#line 940 "prog_io.m"
                                  parse_tree__prog_io__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io__V_129_129));
#line 940 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "prog_io.m"
                                }
#line 939 "prog_io.m"
                                {
#line 939 "prog_io.m"
                                  parse_tree__prog_io__Spec_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 939 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 939 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_210, 2) = ((MR_Box) (parse_tree__prog_io__V_128_128));
#line 939 "prog_io.m"
                                }
#line 941 "prog_io.m"
                                {
#line 941 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_133_133, 0) = ((MR_Box) (parse_tree__prog_io__Spec_210));
#line 941 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_133_133, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_78));
#line 941 "prog_io.m"
                                }
#line 948 "prog_io.m"
                                {
#line 948 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_56, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 948 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_56, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_217));
#line 948 "prog_io.m"
                                }
#line 937 "prog_io.m"
                              }
#line 927 "prog_io.m"
                          }
#line 926 "prog_io.m"
                        else
#line 924 "prog_io.m"
                          {
#line 924 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawStartModuleName_52, (MR_Integer) 0)));

#line 925 "prog_io.m"
                            {
#line 925 "prog_io.m"
                              parse_tree__prog_io__StartModuleName_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_56, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 925 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_56, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_55));
#line 925 "prog_io.m"
                            }
#line 924 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_133_133 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_78;
#line 924 "prog_io.m"
                          }
#line 951 "prog_io.m"
                        {
#line 951 "prog_io.m"
                          parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__MaybePrevSection_23, parse_tree__prog_io__StartModuleName_56, parse_tree__prog_io__StartContext_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__SubModuleFinalLookAhead_58, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_135_135, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_136_136, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_137_137, parse_tree__prog_io__STATE_VARIABLE_Specs_133_133, &parse_tree__prog_io__STATE_VARIABLE_Specs_138_138, parse_tree__prog_io__STATE_VARIABLE_Errors_0_80, &parse_tree__prog_io__STATE_VARIABLE_Errors_139_139);
                        }
#line 956 "prog_io.m"
                        /* direct tailcall eliminated */
#line 956 "prog_io.m"
                        {
#line 956 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__SubModuleFinalLookAhead_58;
#line 956 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_135_135;
#line 956 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_136_136;
#line 956 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_137_137;
#line 956 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_138_138;
#line 956 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_139_139;

#line 956 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80;
#line 956 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78;
#line 956 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76;
#line 956 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74;
#line 956 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72;
#line 956 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 956 "prog_io.m"
                        }
#line 956 "prog_io.m"
                        continue;
#line 922 "prog_io.m"
                      }
#line 908 "prog_io.m"
                      break;
#line 908 "prog_io.m"
                    case (MR_Integer) 2:
#line 1010 "prog_io.m"
                      {
#line 1010 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndedModuleName_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));
#line 1010 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndContext_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 2)));
#line 1009 "prog_io.m"
                        MR_Integer parse_tree__prog_io___EndSeqNum_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 3)));

#line 1011 "prog_io.m"
                        {
#line 1011 "prog_io.m"
                          parse_tree__prog_io__handle_module_end_marker_11_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__IOMVarSet_247, parse_tree__prog_io__IOMTerm_248, parse_tree__prog_io__EndedModuleName_68, parse_tree__prog_io__EndContext_69, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_78, parse_tree__prog_io__STATE_VARIABLE_Specs_79, parse_tree__prog_io__STATE_VARIABLE_Errors_0_80, parse_tree__prog_io__STATE_VARIABLE_Errors_81);
                        }
#line 1010 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_73 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72;
#line 1010 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_75 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74;
#line 1010 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_77 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84;
#line 1010 "prog_io.m"
                      }
#line 908 "prog_io.m"
                      break;
#line 908 "prog_io.m"
                    case (MR_Integer) 3:
#line 966 "prog_io.m"
                      {
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_88_88;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_89_89;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_92_92;
#line 966 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_93_93;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_94_94;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_95_95;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_96_96;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_98_98;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_99_99;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_107_107;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_235;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_236;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_237;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_238;
#line 966 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_239;
#line 995 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_67_67;

#line 971 "prog_io.m"
#line 971 "prog_io.m"
                        switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_47)) {
#line 971 "prog_io.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 971 "prog_io.m"
                          case (MR_Integer) 0:
#line 971 "prog_io.m"
                          case (MR_Integer) 1:
#line 974 "prog_io.m"
                            {
#line 980 "prog_io.m"
                              if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "prog_io.m"
                                {
#line 981 "prog_io.m"
                                  MR_Word parse_tree__prog_io__Context_225;
#line 983 "prog_io.m"
                                  MR_Word parse_tree__prog_io___MissingStartSectionWarning_224;

#line 982 "prog_io.m"
                                  {
#line 982 "prog_io.m"
                                    parse_tree__prog_io__Context_225 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_248);
                                  }
#line 983 "prog_io.m"
                                  {
#line 983 "prog_io.m"
                                    parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_225, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71, &parse_tree__prog_io___MissingStartSectionWarning_224, parse_tree__prog_io__STATE_VARIABLE_Specs_0_78, &parse_tree__prog_io__STATE_VARIABLE_Specs_88_88, parse_tree__prog_io__STATE_VARIABLE_Errors_0_80, &parse_tree__prog_io__STATE_VARIABLE_Errors_89_89);
                                  }
#line 988 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_235 = (MR_Integer) 1;
#line 989 "prog_io.m"
                                  {
#line 989 "prog_io.m"
                                    parse_tree__prog_io__SectionContext_236 = mercury__term__context_init_0_f_0();
                                  }
#line 981 "prog_io.m"
                                }
#line 980 "prog_io.m"
                              else
#line 976 "prog_io.m"
                                {
#line 976 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 976 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_90_90, (MR_Integer) 0)));
#line 976 "prog_io.m"
                                  parse_tree__prog_io__SectionContext_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_90_90, (MR_Integer) 1)));
#line 976 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_88_88 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_78;
#line 976 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Errors_89_89 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_80;
#line 976 "prog_io.m"
                                }
#line 991 "prog_io.m"
                              {
#line 991 "prog_io.m"
                                parse_tree__prog_io__ItemSeqInitLookAhead_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_237, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_247));
#line 991 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_237, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_248));
#line 991 "prog_io.m"
                              }
#line 974 "prog_io.m"
                            }
#line 971 "prog_io.m"
                            break;
#line 971 "prog_io.m"
                          case (MR_Integer) 3:
#line 969 "prog_io.m"
                            {
#line 968 "prog_io.m"
                              MR_Integer parse_tree__prog_io___SectionSeqNum_64;

#line 968 "prog_io.m"
                              parse_tree__prog_io__SectionKind_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));
#line 968 "prog_io.m"
                              parse_tree__prog_io__SectionContext_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 2)));
#line 968 "prog_io.m"
                              parse_tree__prog_io___SectionSeqNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 3)));
#line 970 "prog_io.m"
                              parse_tree__prog_io__ItemSeqInitLookAhead_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_88_88 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_78;
#line 969 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_89_89 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_80;
#line 969 "prog_io.m"
                            }
#line 971 "prog_io.m"
                            break;
#line 971 "prog_io.m"
                        }
#line 997 "prog_io.m"
                        {
#line 997 "prog_io.m"
                          parse_tree__prog_io__V_92_92 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                        }
#line 995 "prog_io.m"
                        {
#line 995 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_18_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_237, &parse_tree__prog_io__ItemSeqFinalLookAhead_238, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_67_67, parse_tree__prog_io__V_92_92, &parse_tree__prog_io__ItemsCord_239, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_93_93, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_84_84, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_94_94, parse_tree__prog_io__STATE_VARIABLE_Specs_88_88, &parse_tree__prog_io__STATE_VARIABLE_Specs_95_95, parse_tree__prog_io__STATE_VARIABLE_Errors_89_89, &parse_tree__prog_io__STATE_VARIABLE_Errors_96_96);
                        }
#line 999 "prog_io.m"
                        {
#line 999 "prog_io.m"
                          parse_tree__prog_io__add_section_component_5_p_0(parse_tree__prog_io__SectionKind_235, parse_tree__prog_io__SectionContext_236, parse_tree__prog_io__ItemsCord_239, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_98_98);
                        }
#line 1004 "prog_io.m"
                        {
#line 1004 "prog_io.m"
                          parse_tree__prog_io__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_235));
#line 1004 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_107_107, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_236));
#line 1004 "prog_io.m"
                        }
#line 1004 "prog_io.m"
                        {
#line 1004 "prog_io.m"
                          parse_tree__prog_io__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io__V_107_107));
#line 1004 "prog_io.m"
                        }
#line 1003 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1003 "prog_io.m"
                        {
#line 1003 "prog_io.m"
                          MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_99_99;
#line 1003 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_238;
#line 1003 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_98_98;
#line 1003 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_93_93;
#line 1003 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_94_94;
#line 1003 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_95_95;
#line 1003 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_96_96;

#line 1003 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_80 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_80;
#line 1003 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_78;
#line 1003 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_76 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_76;
#line 1003 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_74;
#line 1003 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_72;
#line 1003 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1003 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_71 = (MR_Integer) 0;
#line 1003 "prog_io.m"
                          parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 1003 "prog_io.m"
                        }
#line 1003 "prog_io.m"
                        continue;
#line 966 "prog_io.m"
                      }
#line 908 "prog_io.m"
                      break;
#line 908 "prog_io.m"
                  }
#line 908 "prog_io.m"
                  break;
#line 908 "prog_io.m"
              }
#line 900 "prog_io.m"
            }
#line 862 "prog_io.m"
            break;
#line 862 "prog_io.m"
        }
#line 855 "prog_io.m"
      }
#line 855 "prog_io.m"
      break;
#line 855 "prog_io.m"
    }
#line 843 "prog_io.m"
}

#line 776 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28)
#line 776 "prog_io.m"
{
#line 783 "prog_io.m"
  {
#line 783 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_17;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__InitLookAhead_18;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_19;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_20;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__FinalLookAhead_25;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleComponents_26;
#line 783 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_35_35;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37;
#line 783 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_41_41;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_42_42;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 783 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_48_48;
#line 783 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_49_49;

#line 783 "prog_io.m"
    {
#line 783 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 784 "prog_io.m"
    {
#line 784 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32);
    }
#line 786 "prog_io.m"
    {
#line 786 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_35_35);
    }
#line 787 "prog_io.m"
    {
#line 787 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37);
    }
#line 791 "prog_io.m"
    {
#line 791 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 0, parse_tree__prog_io__DefaultModuleName_9, &parse_tree__prog_io__ModuleDeclPresent_17, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, parse_tree__prog_io__STATE_VARIABLE_Errors_35_35, &parse_tree__prog_io__STATE_VARIABLE_Errors_42_42);
    }
#line 808 "prog_io.m"
#line 808 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_17)) {
#line 808 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 808 "prog_io.m"
      case (MR_Integer) 0:
#line 795 "prog_io.m"
        {
#line 795 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 799 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = parse_tree__prog_io__DefaultModuleName_9;
#line 803 "prog_io.m"
          if ((parse_tree__prog_io__InitLookAhead_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "prog_io.m"
            {
#line 802 "prog_io.m"
              parse_tree__prog_io__ModuleNameContext_20 = mercury__term__context_init_0_f_0();
            }
#line 803 "prog_io.m"
          else
#line 805 "prog_io.m"
            {
#line 805 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAheadTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 1)));
#line 804 "prog_io.m"
              MR_Word parse_tree__prog_io___InitLookAheadVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 0)));

#line 806 "prog_io.m"
              {
#line 806 "prog_io.m"
                parse_tree__prog_io__ModuleNameContext_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__InitLookAheadTerm_22);
              }
#line 805 "prog_io.m"
            }
#line 795 "prog_io.m"
        }
#line 808 "prog_io.m"
        break;
#line 808 "prog_io.m"
      case (MR_Integer) 1:
#line 812 "prog_io.m"
        {
#line 811 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 811 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 813 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "prog_io.m"
        }
#line 808 "prog_io.m"
        break;
#line 808 "prog_io.m"
      case (MR_Integer) 2:
#line 816 "prog_io.m"
        {
#line 815 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 815 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 817 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 816 "prog_io.m"
        }
#line 808 "prog_io.m"
        break;
#line 808 "prog_io.m"
    }
#line 825 "prog_io.m"
    {
#line 825 "prog_io.m"
      parse_tree__prog_io__V_45_45 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 822 "prog_io.m"
    {
#line 822 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_18, &parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__V_45_45, &parse_tree__prog_io__ModuleComponents_26, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Errors_42_42, &parse_tree__prog_io__STATE_VARIABLE_Errors_49_49);
    }
#line 827 "prog_io.m"
    {
#line 827 "prog_io.m"
      parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_27, parse_tree__prog_io__STATE_VARIABLE_Errors_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_28);
    }
#line 829 "prog_io.m"
    {
#line 829 "prog_io.m"
      MR_Word base;
#line 829 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 829 "prog_io.m"
      *parse_tree__prog_io__ParseTree_10 = base;
#line 829 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_19));
#line 829 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_20));
#line 829 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleComponents_26));
#line 829 "prog_io.m"
    }
#line 783 "prog_io.m"
  }
#line 776 "prog_io.m"
}

#line 729 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_21,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_22,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_36,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_37,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 729 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_38,
#line 729 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_40,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_42,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_43,
#line 729 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_44,
#line 729 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_45)
#line 729 "prog_io.m"
{
#line 739 "prog_io.m"
  {
#line 739 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 739 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_56_56;
#line 739 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_32;
#line 739 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_33;
#line 739 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemsCord_34;
#line 739 "prog_io.m"
    MR_Word parse_tree__prog_io__RawItemBlock_35;
#line 739 "prog_io.m"
    MR_Word parse_tree__prog_io__V_49_49;
#line 739 "prog_io.m"
    MR_Word parse_tree__prog_io__V_55_55;

#line 741 "prog_io.m"
    {
#line 741 "prog_io.m"
      parse_tree__prog_io__SectionContext_32 = mercury__term__context_init_0_f_0();
    }
#line 742 "prog_io.m"
    {
#line 742 "prog_io.m"
      parse_tree__prog_io__ItemSeqInitLookAhead_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_33, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_21));
#line 742 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_33, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_22));
#line 742 "prog_io.m"
    }
#line 11206 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 744 "prog_io.m"
    {
#line 744 "prog_io.m"
      parse_tree__prog_io__V_49_49 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_56_56);
    }
#line 743 "prog_io.m"
    {
#line 743 "prog_io.m"
      parse_tree__prog_io__read_item_sequence_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__ItemSeqInitLookAhead_33, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_36, parse_tree__prog_io__STATE_VARIABLE_VNInfo_37, parse_tree__prog_io__V_49_49, &parse_tree__prog_io__ItemsCord_34, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_38, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_40, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41, parse_tree__prog_io__STATE_VARIABLE_Specs_0_42, parse_tree__prog_io__STATE_VARIABLE_Specs_43, parse_tree__prog_io__STATE_VARIABLE_Errors_0_44, parse_tree__prog_io__STATE_VARIABLE_Errors_45);
    }
#line 747 "prog_io.m"
    {
#line 747 "prog_io.m"
      parse_tree__prog_io__V_55_55 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_56_56, parse_tree__prog_io__ItemsCord_34);
    }
#line 746 "prog_io.m"
    {
#line 746 "prog_io.m"
      parse_tree__prog_io__RawItemBlock_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 746 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_35, 0) = ((MR_Box) ((MR_Integer) 0));
#line 746 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_35, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_32));
#line 746 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_35, 2) = ((MR_Box) (parse_tree__prog_io__V_55_55));
#line 746 "prog_io.m"
    }
#line 748 "prog_io.m"
    {
#line 748 "prog_io.m"
      MR_Word base;
#line 748 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io.m"
      *parse_tree__prog_io__MaybeRawItemBlock_25 = base;
#line 748 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_35));
#line 748 "prog_io.m"
    }
#line 739 "prog_io.m"
  }
#line 729 "prog_io.m"
}

#line 574 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_18_p_0(
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_54,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_56,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 574 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57,
#line 574 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_61,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_62,
#line 574 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_63,
#line 574 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_64)
#line 574 "prog_io.m"
{
#line 585 "prog_io.m"
  while (MR_TRUE)
#line 585 "prog_io.m"
    {
#line 585 "prog_io.m"
      /* tailcall optimized into a loop */
#line 585 "prog_io.m"
      {
#line 585 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 585 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_31;
#line 585 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67;

#line 586 "prog_io.m"
        {
#line 586 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_22, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57, &parse_tree__prog_io__ReadIOMResult_31, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67);
        }
#line 593 "prog_io.m"
#line 593 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_31)) {
#line 593 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 593 "prog_io.m"
          case (MR_Integer) 0:
#line 589 "prog_io.m"
            {
#line 591 "prog_io.m"
              *parse_tree__prog_io__MaybeRawItemBlock_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_56 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55;
#line 589 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57;
#line 589 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67;
#line 589 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_62 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_61;
#line 589 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_64 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_63;
#line 589 "prog_io.m"
            }
#line 593 "prog_io.m"
            break;
#line 593 "prog_io.m"
          case (MR_Integer) 1:
#line 594 "prog_io.m"
            {
#line 594 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_32 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_31), (MR_Integer) 1);
#line 594 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_110_110;
#line 594 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_112_112;

#line 597 "prog_io.m"
              {
#line 597 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_110_110, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_32));
#line 597 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_110_110, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_61));
#line 597 "prog_io.m"
              }
#line 598 "prog_io.m"
              {
#line 598 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_63, &parse_tree__prog_io__STATE_VARIABLE_Errors_112_112);
              }
#line 599 "prog_io.m"
              /* direct tailcall eliminated */
#line 599 "prog_io.m"
              {
#line 599 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67;
#line 599 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_110_110;
#line 599 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_112_112;

#line 599 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_63 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_63;
#line 599 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61;
#line 599 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 599 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "prog_io.m"
              }
#line 599 "prog_io.m"
              continue;
#line 594 "prog_io.m"
            }
#line 593 "prog_io.m"
            break;
#line 593 "prog_io.m"
          case (MR_Integer) 2:
#line 605 "prog_io.m"
            {
#line 605 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 0)));
#line 605 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 1)));
#line 605 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_102_102;
#line 605 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_103_103;
#line 604 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemSpecs_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 2)));
#line 604 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemErrors_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 3)));
#line 606 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_37;
#line 611 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_38;

#line 606 "prog_io.m"
              {
#line 606 "prog_io.m"
                parse_tree__prog_io__Context_37 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_34);
              }
#line 611 "prog_io.m"
              {
#line 611 "prog_io.m"
                parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_54, &parse_tree__prog_io___MissingStartSectionWarning_38, parse_tree__prog_io__STATE_VARIABLE_Specs_0_61, &parse_tree__prog_io__STATE_VARIABLE_Specs_102_102, parse_tree__prog_io__STATE_VARIABLE_Errors_0_63, &parse_tree__prog_io__STATE_VARIABLE_Errors_103_103);
              }
#line 614 "prog_io.m"
              {
#line 614 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__IOMVarSet_33, parse_tree__prog_io__IOMTerm_34, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55, parse_tree__prog_io__STATE_VARIABLE_VNInfo_56, parse_tree__prog_io__MaybeRawItemBlock_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60, parse_tree__prog_io__STATE_VARIABLE_Specs_102_102, parse_tree__prog_io__STATE_VARIABLE_Specs_62, parse_tree__prog_io__STATE_VARIABLE_Errors_103_103, parse_tree__prog_io__STATE_VARIABLE_Errors_64);
#line 614 "prog_io.m"
                return;
              }
#line 605 "prog_io.m"
            }
#line 593 "prog_io.m"
            break;
#line 593 "prog_io.m"
          case (MR_Integer) 3:
#line 619 "prog_io.m"
            {
#line 619 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 2)));
#line 619 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 0)));
#line 619 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 1)));

#line 626 "prog_io.m"
#line 626 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_39)) {
#line 626 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 626 "prog_io.m"
                case (MR_Integer) 0:
#line 626 "prog_io.m"
                case (MR_Integer) 1:
#line 645 "prog_io.m"
                  {
#line 645 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_69_69;
#line 645 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_70_70;
#line 646 "prog_io.m"
                    MR_Word parse_tree__prog_io__Context_121;
#line 650 "prog_io.m"
                    MR_Word parse_tree__prog_io___MissingStartSectionWarning_120;

#line 646 "prog_io.m"
                    {
#line 646 "prog_io.m"
                      parse_tree__prog_io__Context_121 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_126);
                    }
#line 650 "prog_io.m"
                    {
#line 650 "prog_io.m"
                      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_54, &parse_tree__prog_io___MissingStartSectionWarning_120, parse_tree__prog_io__STATE_VARIABLE_Specs_0_61, &parse_tree__prog_io__STATE_VARIABLE_Specs_69_69, parse_tree__prog_io__STATE_VARIABLE_Errors_0_63, &parse_tree__prog_io__STATE_VARIABLE_Errors_70_70);
                    }
#line 653 "prog_io.m"
                    {
#line 653 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__IOMVarSet_125, parse_tree__prog_io__IOMTerm_126, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55, parse_tree__prog_io__STATE_VARIABLE_VNInfo_56, parse_tree__prog_io__MaybeRawItemBlock_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60, parse_tree__prog_io__STATE_VARIABLE_Specs_69_69, parse_tree__prog_io__STATE_VARIABLE_Specs_62, parse_tree__prog_io__STATE_VARIABLE_Errors_70_70, parse_tree__prog_io__STATE_VARIABLE_Errors_64);
#line 653 "prog_io.m"
                      return;
                    }
#line 645 "prog_io.m"
                  }
#line 626 "prog_io.m"
                  break;
#line 626 "prog_io.m"
                case (MR_Integer) 2:
#line 636 "prog_io.m"
                  {
#line 636 "prog_io.m"
                    MR_Word parse_tree__prog_io__MVN_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOM_39, (MR_Integer) 0)));
#line 636 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_77_77;
#line 636 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_78_78;

#line 637 "prog_io.m"
                    {
#line 637 "prog_io.m"
                      parse_tree__prog_io__record_version_numbers_6_p_0(parse_tree__prog_io__MVN_45, parse_tree__prog_io__IOMTerm_126, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_77_77, parse_tree__prog_io__STATE_VARIABLE_Specs_0_61, &parse_tree__prog_io__STATE_VARIABLE_Specs_78_78);
                    }
#line 638 "prog_io.m"
                    /* direct tailcall eliminated */
#line 638 "prog_io.m"
                    {
#line 638 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_55 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_77_77;
#line 638 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67;
#line 638 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_78_78;

#line 638 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Specs_0_61 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_61;
#line 638 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 638 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_55;
#line 638 "prog_io.m"
                    }
#line 638 "prog_io.m"
                    continue;
#line 636 "prog_io.m"
                  }
#line 626 "prog_io.m"
                  break;
#line 626 "prog_io.m"
                case (MR_Integer) 3:
#line 626 "prog_io.m"
#line 626 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 0)))) {
#line 626 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 626 "prog_io.m"
                    case (MR_Integer) 0:
#line 621 "prog_io.m"
                      {
#line 621 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_94_94 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));

#line 622 "prog_io.m"
                        /* direct tailcall eliminated */
#line 622 "prog_io.m"
                        {
#line 622 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_57 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_94_94;
#line 622 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67;

#line 622 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_59 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_59;
#line 622 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_57;
#line 622 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "prog_io.m"
                        }
#line 622 "prog_io.m"
                        continue;
#line 621 "prog_io.m"
                      }
#line 626 "prog_io.m"
                      break;
#line 626 "prog_io.m"
                    case (MR_Integer) 1:
#line 626 "prog_io.m"
                    case (MR_Integer) 2:
#line 660 "prog_io.m"
                      {
#line 661 "prog_io.m"
                        {
#line 661 "prog_io.m"
                          MR_Word base;
#line 661 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "prog_io.m"
                          *parse_tree__prog_io__FinalLookAhead_23 = base;
#line 661 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_125));
#line 661 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_126));
#line 661 "prog_io.m"
                        }
#line 662 "prog_io.m"
                        *parse_tree__prog_io__MaybeRawItemBlock_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_VNInfo_56 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55;
#line 660 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57;
#line 660 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67;
#line 660 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_62 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_61;
#line 660 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Errors_64 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_63;
#line 660 "prog_io.m"
                      }
#line 626 "prog_io.m"
                      break;
#line 626 "prog_io.m"
                    case (MR_Integer) 3:
#line 628 "prog_io.m"
                      {
#line 628 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 628 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));
#line 628 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 2)));
#line 628 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_43;
#line 628 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawItemBlock_44;
#line 628 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_87_87;
#line 628 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_93_93;
#line 627 "prog_io.m"
                        MR_Integer parse_tree__prog_io___SectionSeqNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 3)));

#line 630 "prog_io.m"
                        {
#line 630 "prog_io.m"
                          parse_tree__prog_io__V_87_87 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_131_131);
                        }
#line 629 "prog_io.m"
                        {
#line 629 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_55, parse_tree__prog_io__STATE_VARIABLE_VNInfo_56, parse_tree__prog_io__V_87_87, &parse_tree__prog_io__ItemsCord_43, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_57, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_58, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_67_67, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60, parse_tree__prog_io__STATE_VARIABLE_Specs_0_61, parse_tree__prog_io__STATE_VARIABLE_Specs_62, parse_tree__prog_io__STATE_VARIABLE_Errors_0_63, parse_tree__prog_io__STATE_VARIABLE_Errors_64);
                        }
#line 633 "prog_io.m"
                        {
#line 633 "prog_io.m"
                          parse_tree__prog_io__V_93_93 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_131_131, parse_tree__prog_io__ItemsCord_43);
                        }
#line 632 "prog_io.m"
                        {
#line 632 "prog_io.m"
                          parse_tree__prog_io__RawItemBlock_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 632 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_44, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_40));
#line 632 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_44, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_41));
#line 632 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_44, 2) = ((MR_Box) (parse_tree__prog_io__V_93_93));
#line 632 "prog_io.m"
                        }
#line 634 "prog_io.m"
                        {
#line 634 "prog_io.m"
                          MR_Word base;
#line 634 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "prog_io.m"
                          *parse_tree__prog_io__MaybeRawItemBlock_25 = base;
#line 634 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_44));
#line 634 "prog_io.m"
                        }
#line 628 "prog_io.m"
                      }
#line 626 "prog_io.m"
                      break;
#line 626 "prog_io.m"
                  }
#line 626 "prog_io.m"
                  break;
#line 626 "prog_io.m"
              }
#line 619 "prog_io.m"
            }
#line 593 "prog_io.m"
            break;
#line 593 "prog_io.m"
        }
#line 585 "prog_io.m"
      }
#line 585 "prog_io.m"
      break;
#line 585 "prog_io.m"
    }
#line 574 "prog_io.m"
}

#line 539 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_18,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_19,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_34,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_23,
#line 539 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35,
#line 539 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_39,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_40,
#line 539 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_41,
#line 539 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42)
#line 539 "prog_io.m"
{
#line 548 "prog_io.m"
  {
#line 548 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 548 "prog_io.m"
    MR_Word parse_tree__prog_io__MidLookAhead_29;
#line 548 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeHeadRawItemBlock_30;
#line 548 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46;
#line 548 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47;
#line 548 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48;
#line 548 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 548 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;

#line 549 "prog_io.m"
    {
#line 549 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_section_18_p_0(parse_tree__prog_io__Globals_18, parse_tree__prog_io__CurModuleName_19, (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_20, &parse_tree__prog_io__MidLookAhead_29, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46, &parse_tree__prog_io__MaybeHeadRawItemBlock_30, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_0_39, &parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_0_41, &parse_tree__prog_io__STATE_VARIABLE_Errors_50_50);
    }
#line 557 "prog_io.m"
    if ((parse_tree__prog_io__MaybeHeadRawItemBlock_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "prog_io.m"
      {
#line 555 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_21 = parse_tree__prog_io__MidLookAhead_29;
#line 556 "prog_io.m"
        *parse_tree__prog_io__RawItemBlocks_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_VNInfo_34 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46;
#line 554 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47;
#line 554 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48;
#line 554 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_40 = parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 554 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_42 = parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;
#line 554 "prog_io.m"
      }
#line 557 "prog_io.m"
    else
#line 558 "prog_io.m"
      {
#line 558 "prog_io.m"
        MR_Word parse_tree__prog_io__HeadRawItemBlock_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeHeadRawItemBlock_30, (MR_Integer) 0)));
#line 558 "prog_io.m"
        MR_Word parse_tree__prog_io__TailRawItemBlocks_32;

#line 559 "prog_io.m"
        {
#line 559 "prog_io.m"
          parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(parse_tree__prog_io__Globals_18, parse_tree__prog_io__CurModuleName_19, parse_tree__prog_io__MidLookAhead_29, parse_tree__prog_io__FinalLookAhead_21, parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46, parse_tree__prog_io__STATE_VARIABLE_VNInfo_34, &parse_tree__prog_io__TailRawItemBlocks_32, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_40, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
        }
#line 562 "prog_io.m"
        {
#line 562 "prog_io.m"
          MR_Word base;
#line 562 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_io.m"
          *parse_tree__prog_io__RawItemBlocks_23 = base;
#line 562 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__HeadRawItemBlock_31));
#line 562 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__TailRawItemBlocks_32));
#line 562 "prog_io.m"
        }
#line 558 "prog_io.m"
      }
#line 548 "prog_io.m"
  }
#line 539 "prog_io.m"
}

#line 462 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 462 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 462 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 462 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 462 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 462 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_37,
#line 462 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_38)
#line 462 "prog_io.m"
{
#line 467 "prog_io.m"
  {
#line 467 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 467 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_17;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_19;
#line 467 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName1_20;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter1_21;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_26;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_27;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeVersionNumbers_28;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__IntItems_29;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__ImplItems_30;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_44_44;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_47_47;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_48_48;

#line 468 "prog_io.m"
    {
#line 468 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 469 "prog_io.m"
    {
#line 469 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__SourceFileName0_17);
    }
#line 471 "prog_io.m"
    {
#line 471 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_44_44);
    }
#line 472 "prog_io.m"
    {
#line 472 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 476 "prog_io.m"
    {
#line 476 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_47_47, parse_tree__prog_io__STATE_VARIABLE_Errors_44_44, &parse_tree__prog_io__STATE_VARIABLE_Errors_48_48);
    }
#line 494 "prog_io.m"
#line 494 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 494 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 494 "prog_io.m"
      case (MR_Integer) 0:
#line 480 "prog_io.m"
        {
#line 480 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAhead_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 480 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAheadContext_23;

#line 484 "prog_io.m"
          if ((parse_tree__prog_io__LookAhead_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "prog_io.m"
            {
#line 483 "prog_io.m"
              {
#line 483 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName0_17));
#line 483 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 483 "prog_io.m"
              }
#line 482 "prog_io.m"
            }
#line 484 "prog_io.m"
          else
#line 485 "prog_io.m"
            {
#line 485 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAheadTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 1)));
#line 485 "prog_io.m"
              MR_Word parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 0)));

#line 486 "prog_io.m"
              {
#line 486 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__LookAheadTerm_25);
              }
#line 485 "prog_io.m"
            }
#line 488 "prog_io.m"
          {
#line 488 "prog_io.m"
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_37, parse_tree__prog_io__STATE_VARIABLE_Errors_48_48, parse_tree__prog_io__STATE_VARIABLE_Errors_38);
          }
#line 489 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 490 "prog_io.m"
          {
#line 490 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 491 "prog_io.m"
          parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "prog_io.m"
          parse_tree__prog_io__IntItems_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "prog_io.m"
          parse_tree__prog_io__ImplItems_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "prog_io.m"
        }
#line 494 "prog_io.m"
        break;
#line 494 "prog_io.m"
      case (MR_Integer) 1:
#line 496 "prog_io.m"
        {
#line 495 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 495 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 497 "prog_io.m"
          {
#line 497 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_37, parse_tree__prog_io__STATE_VARIABLE_Errors_48_48, parse_tree__prog_io__STATE_VARIABLE_Errors_38);
          }
#line 499 "prog_io.m"
          parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "prog_io.m"
          parse_tree__prog_io__IntItems_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "prog_io.m"
          parse_tree__prog_io__ImplItems_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "prog_io.m"
        }
#line 494 "prog_io.m"
        break;
#line 494 "prog_io.m"
      case (MR_Integer) 2:
#line 504 "prog_io.m"
        {
#line 504 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_31;
#line 504 "prog_io.m"
          MR_Word parse_tree__prog_io__VNInfo_32;
#line 504 "prog_io.m"
          MR_Word parse_tree__prog_io__RawItemBlocks_33;
#line 504 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_34;
#line 504 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_35;
#line 504 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_52_52;
#line 504 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_53_53;
#line 504 "prog_io.m"
          MR_Word parse_tree__prog_io__V_58_58;

#line 503 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 503 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 505 "prog_io.m"
          {
#line 505 "prog_io.m"
            parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &parse_tree__prog_io__VNInfo_32, &parse_tree__prog_io__RawItemBlocks_33, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_34, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_35, parse_tree__prog_io__STATE_VARIABLE_Specs_47_47, &parse_tree__prog_io__STATE_VARIABLE_Specs_52_52, parse_tree__prog_io__STATE_VARIABLE_Errors_48_48, &parse_tree__prog_io__STATE_VARIABLE_Errors_53_53);
          }
#line 513 "prog_io.m"
#line 513 "prog_io.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io__VNInfo_32)) {
#line 513 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 513 "prog_io.m"
            case (MR_Integer) 0:
#line 513 "prog_io.m"
#line 513 "prog_io.m"
              switch (MR_unmkbody(parse_tree__prog_io__VNInfo_32)) {
#line 513 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 513 "prog_io.m"
                case (MR_Integer) 0:
#line 517 "prog_io.m"
                  {
#line 520 "prog_io.m"
                    {
#line 520 "prog_io.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.read_parse_tree_int\'/8", (MR_String) "dont_allow_version_numbers");
#line 520 "prog_io.m"
                      return;
                    }
#line 517 "prog_io.m"
                  }
#line 513 "prog_io.m"
                  break;
#line 513 "prog_io.m"
                case (MR_Integer) 1:
#line 512 "prog_io.m"
                  parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "prog_io.m"
                  break;
#line 513 "prog_io.m"
              }
#line 513 "prog_io.m"
              break;
#line 513 "prog_io.m"
            case (MR_Integer) 1:
#line 514 "prog_io.m"
              {
#line 514 "prog_io.m"
                MR_Word parse_tree__prog_io__MVN_36 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__VNInfo_32), (MR_Integer) 1);

#line 515 "prog_io.m"
                {
#line 515 "prog_io.m"
                  parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeVersionNumbers_28, 0) = ((MR_Box) (parse_tree__prog_io__MVN_36));
#line 515 "prog_io.m"
                }
#line 514 "prog_io.m"
              }
#line 513 "prog_io.m"
              break;
#line 513 "prog_io.m"
          }
#line 522 "prog_io.m"
          {
#line 522 "prog_io.m"
            parse_tree__prog_io__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 522 "prog_io.m"
          }
#line 522 "prog_io.m"
          {
#line 522 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_58_58, parse_tree__prog_io__FinalLookAhead_31, parse_tree__prog_io__SourceFileName_34, parse_tree__prog_io__SeqNumCounter_35, parse_tree__prog_io__STATE_VARIABLE_Specs_52_52, parse_tree__prog_io__STATE_VARIABLE_Specs_37, parse_tree__prog_io__STATE_VARIABLE_Errors_53_53, parse_tree__prog_io__STATE_VARIABLE_Errors_38);
          }
#line 525 "prog_io.m"
          {
#line 525 "prog_io.m"
            parse_tree__prog_item__separate_int_impl_items_5_p_0(parse_tree__prog_io__RawItemBlocks_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__IntItems_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__ImplItems_30);
          }
#line 504 "prog_io.m"
        }
#line 494 "prog_io.m"
        break;
#line 494 "prog_io.m"
    }
#line 527 "prog_io.m"
    {
#line 527 "prog_io.m"
      MR_Word base;
#line 527 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 527 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 527 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 527 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 527 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 527 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__MaybeVersionNumbers_28));
#line 527 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_io__IntItems_29));
#line 527 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_io__ImplItems_30));
#line 527 "prog_io.m"
    }
#line 467 "prog_io.m"
  }
#line 462 "prog_io.m"
}

#line 394 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0(
#line 394 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_9,
#line 394 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 394 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 394 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 394 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_34,
#line 394 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_35)
#line 394 "prog_io.m"
{
#line 399 "prog_io.m"
  {
#line 399 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 399 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_17;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_19;
#line 399 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName1_20;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter1_21;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_26;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_27;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__Items_28;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_41_41;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_44_44;
#line 399 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_45_45;

#line 400 "prog_io.m"
    {
#line 400 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 401 "prog_io.m"
    {
#line 401 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__SourceFileName0_17);
    }
#line 403 "prog_io.m"
    {
#line 403 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_41_41);
    }
#line 404 "prog_io.m"
    {
#line 404 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 408 "prog_io.m"
    {
#line 408 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_44_44, parse_tree__prog_io__STATE_VARIABLE_Errors_41_41, &parse_tree__prog_io__STATE_VARIABLE_Errors_45_45);
    }
#line 424 "prog_io.m"
#line 424 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 424 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 424 "prog_io.m"
      case (MR_Integer) 0:
#line 412 "prog_io.m"
        {
#line 412 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAhead_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 412 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAheadContext_23;

#line 416 "prog_io.m"
          if ((parse_tree__prog_io__LookAhead_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "prog_io.m"
            {
#line 415 "prog_io.m"
              {
#line 415 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName0_17));
#line 415 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 415 "prog_io.m"
              }
#line 414 "prog_io.m"
            }
#line 416 "prog_io.m"
          else
#line 417 "prog_io.m"
            {
#line 417 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAheadTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 1)));
#line 417 "prog_io.m"
              MR_Word parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 0)));

#line 418 "prog_io.m"
              {
#line 418 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__LookAheadTerm_25);
              }
#line 417 "prog_io.m"
            }
#line 420 "prog_io.m"
          {
#line 420 "prog_io.m"
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_44_44, parse_tree__prog_io__STATE_VARIABLE_Specs_34, parse_tree__prog_io__STATE_VARIABLE_Errors_45_45, parse_tree__prog_io__STATE_VARIABLE_Errors_35);
          }
#line 421 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 422 "prog_io.m"
          {
#line 422 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 423 "prog_io.m"
          parse_tree__prog_io__Items_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "prog_io.m"
        }
#line 424 "prog_io.m"
        break;
#line 424 "prog_io.m"
      case (MR_Integer) 1:
#line 426 "prog_io.m"
        {
#line 425 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 425 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 427 "prog_io.m"
          {
#line 427 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_44_44, parse_tree__prog_io__STATE_VARIABLE_Specs_34, parse_tree__prog_io__STATE_VARIABLE_Errors_45_45, parse_tree__prog_io__STATE_VARIABLE_Errors_35);
          }
#line 429 "prog_io.m"
          parse_tree__prog_io__Items_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "prog_io.m"
        }
#line 424 "prog_io.m"
        break;
#line 424 "prog_io.m"
      case (MR_Integer) 2:
#line 432 "prog_io.m"
        {
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_64_64;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_29;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemsCord_31;
#line 432 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_32;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_33;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_49_49;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_50_50;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_51_51;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_53_53;
#line 433 "prog_io.m"
          MR_Word parse_tree__prog_io__V_30_30;

#line 431 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 431 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 12284 "parse_tree.prog_io.c"
          parse_tree__prog_io__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 434 "prog_io.m"
          {
#line 434 "prog_io.m"
            parse_tree__prog_io__V_49_49 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_64_64);
          }
#line 433 "prog_io.m"
          {
#line 433 "prog_io.m"
            parse_tree__prog_io__read_item_sequence_18_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_30_30, parse_tree__prog_io__V_49_49, &parse_tree__prog_io__ItemsCord_31, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_32, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_33, parse_tree__prog_io__STATE_VARIABLE_Specs_44_44, &parse_tree__prog_io__STATE_VARIABLE_Specs_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_45_45, &parse_tree__prog_io__STATE_VARIABLE_Errors_51_51);
          }
#line 437 "prog_io.m"
          {
#line 437 "prog_io.m"
            parse_tree__prog_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 437 "prog_io.m"
          }
#line 437 "prog_io.m"
          {
#line 437 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_53_53, parse_tree__prog_io__FinalLookAhead_29, parse_tree__prog_io__SourceFileName_32, parse_tree__prog_io__SeqNumCounter_33, parse_tree__prog_io__STATE_VARIABLE_Specs_50_50, parse_tree__prog_io__STATE_VARIABLE_Specs_34, parse_tree__prog_io__STATE_VARIABLE_Errors_51_51, parse_tree__prog_io__STATE_VARIABLE_Errors_35);
          }
#line 440 "prog_io.m"
          {
#line 440 "prog_io.m"
            parse_tree__prog_io__Items_28 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_64_64, parse_tree__prog_io__ItemsCord_31);
          }
#line 432 "prog_io.m"
        }
#line 424 "prog_io.m"
        break;
#line 424 "prog_io.m"
    }
#line 442 "prog_io.m"
    {
#line 442 "prog_io.m"
      MR_Word base;
#line 442 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 442 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 442 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 442 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 442 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__Items_28));
#line 442 "prog_io.m"
    }
#line 399 "prog_io.m"
  }
#line 394 "prog_io.m"
}

#line 299 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 299 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 299 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 299 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 299 "prog_io.m"
{
#line 302 "prog_io.m"
  {
#line 302 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 302 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 303 "prog_io.m"
    {
#line 303 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 303 "prog_io.m"
    {
#line 303 "prog_io.m"
      MR_Word base;
#line 303 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 303 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 303 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 303 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_4));
#line 303 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 303 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "prog_io.m"
    }
#line 302 "prog_io.m"
  }
#line 299 "prog_io.m"
}

#line 292 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 292 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 292 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 292 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 292 "prog_io.m"
{
#line 295 "prog_io.m"
  {
#line 295 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 295 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 296 "prog_io.m"
    {
#line 296 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 296 "prog_io.m"
    {
#line 296 "prog_io.m"
      MR_Word base;
#line 296 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 296 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 296 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 296 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_4));
#line 296 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 296 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "prog_io.m"
    }
#line 295 "prog_io.m"
  }
#line 292 "prog_io.m"
}

#line 287 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 287 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 287 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4)
#line 287 "prog_io.m"
{
#line 289 "prog_io.m"
  {
#line 289 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 289 "prog_io.m"
    MR_Word parse_tree__prog_io__V_5_5;
#line 289 "prog_io.m"
    MR_Word parse_tree__prog_io__V_6_6;

#line 290 "prog_io.m"
    {
#line 290 "prog_io.m"
      parse_tree__prog_io__V_5_5 = mercury__term__context_init_0_f_0();
    }
#line 290 "prog_io.m"
    {
#line 290 "prog_io.m"
      parse_tree__prog_io__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 290 "prog_io.m"
    {
#line 290 "prog_io.m"
      MR_Word base;
#line 290 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 290 "prog_io.m"
      *parse_tree__prog_io__ParseTree_4 = base;
#line 290 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_3));
#line 290 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__V_5_5));
#line 290 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_6_6));
#line 290 "prog_io.m"
    }
#line 289 "prog_io.m"
  }
#line 287 "prog_io.m"
}

#line 171 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__check_module_has_expected_name_4_p_0(
#line 171 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_5,
#line 171 "prog_io.m"
  MR_Word parse_tree__prog_io__ExpectedName_6,
#line 171 "prog_io.m"
  MR_Word parse_tree__prog_io__ActualName_7,
#line 171 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_8)
#line 171 "prog_io.m"
{
#line 266 "prog_io.m"
  {
#line 266 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 264 "prog_io.m"
    {
#line 264 "prog_io.m"
      parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__ActualName_7, parse_tree__prog_io__ExpectedName_6);
    }
#line 266 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 265 "prog_io.m"
      *parse_tree__prog_io__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "prog_io.m"
    else
#line 270 "prog_io.m"
      {
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_9;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__Msg_10;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_11;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_15_15;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_16_16;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_43_43;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_44_44;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;

#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io__FileName_5));
#line 267 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__ExpectedName_6));
#line 269 "prog_io.m"
        }
#line 270 "prog_io.m"
        {
#line 270 "prog_io.m"
          parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__ActualName_7));
#line 270 "prog_io.m"
        }
#line 270 "prog_io.m"
        {
#line 270 "prog_io.m"
          parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[6])));
#line 270 "prog_io.m"
        }
#line 270 "prog_io.m"
        {
#line 270 "prog_io.m"
          parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[74])));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 270 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[73])));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 269 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 269 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[72])));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io__V_24_24));
#line 269 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io__V_21_21));
#line 268 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[71])));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io__V_19_19));
#line 268 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io__V_15_15));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io__V_16_16));
#line 267 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[70])));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io__V_14_14));
#line 267 "prog_io.m"
        }
#line 271 "prog_io.m"
        {
#line 271 "prog_io.m"
          parse_tree__prog_io__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_9));
#line 271 "prog_io.m"
        }
#line 271 "prog_io.m"
        {
#line 271 "prog_io.m"
          parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io.m"
        }
#line 271 "prog_io.m"
        {
#line 271 "prog_io.m"
          parse_tree__prog_io__Msg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 2) = ((MR_Box) ((MR_Integer) 0));
#line 271 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 3) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 271 "prog_io.m"
        }
#line 272 "prog_io.m"
        {
#line 272 "prog_io.m"
          parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__Msg_10));
#line 272 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "prog_io.m"
        }
#line 272 "prog_io.m"
        {
#line 272 "prog_io.m"
          parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 272 "prog_io.m"
        }
#line 273 "prog_io.m"
        {
#line 273 "prog_io.m"
          MR_Word base;
#line 273 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "prog_io.m"
          *parse_tree__prog_io__Specs_8 = base;
#line 273 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 273 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "prog_io.m"
        }
#line 270 "prog_io.m"
      }
#line 266 "prog_io.m"
  }
#line 171 "prog_io.m"
}

#line 254 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 254 "prog_io.m"
{
#line 254 "prog_io.m"
  {
#line 254 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 254 "prog_io.m"
    MR_Word parse_tree__prog_io__conv4_ParseTree_12;
#line 254 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_34;
#line 254 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_35;

#line 254 "prog_io.m"
    {
#line 254 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_opt_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv4_ParseTree_12, &parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_34, &parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_35);
    }
#line 254 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv4_ParseTree_12));
#line 254 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_34));
#line 254 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_35));
#line 254 "prog_io.m"
  }
#line 254 "prog_io.m"
}

#line 253 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 253 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 253 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 253 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 253 "prog_io.m"
{
#line 253 "prog_io.m"
  {
#line 253 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 253 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_ParseTree_6;

#line 253 "prog_io.m"
    {
#line 253 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_ParseTree_6);
    }
#line 253 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_ParseTree_6));
#line 253 "prog_io.m"
  }
#line 253 "prog_io.m"
}

#line 250 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 250 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 250 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3)
#line 250 "prog_io.m"
{
#line 250 "prog_io.m"
  {
#line 250 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 250 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__4_4;

#line 250 "prog_io.m"
    {
#line 250 "prog_io.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 5))), &parse_tree__prog_io__conv0_HeadVar__4_4);
    }
#line 250 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__4_4));
#line 250 "prog_io.m"
  }
#line 250 "prog_io.m"
}

#line 151 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0(
#line 151 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_10,
#line 151 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_11,
#line 151 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_12,
#line 151 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 151 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTreeOpt_14,
#line 151 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_15,
#line 151 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_16)
#line 151 "prog_io.m"
{
#line 248 "prog_io.m"
  {
#line 248 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__Dirs_18;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenFile_19;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSpecs_22;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_23;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__NameSpecs_27;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 251 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;
#line 251 "prog_io.m"
    MR_Word parse_tree__prog_io__V_21_21;
#line 251 "prog_io.m"
    MR_Box parse_tree__prog_io__conv5_ParseTreeOpt_14;
#line 256 "prog_io.m"
    MR_Word parse_tree__prog_io__V_24_24;
#line 256 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 256 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;

#line 249 "prog_io.m"
    {
#line 249 "prog_io.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__prog_io__Globals_11, (MR_Integer) 650, &parse_tree__prog_io__Dirs_18);
    }
#line 250 "prog_io.m"
    {
#line 250 "prog_io.m"
      parse_tree__prog_io__OpenFile_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_9[0]));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_1));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 3) = ((MR_Box) ((MR_Integer) 0));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 4) = ((MR_Box) (parse_tree__prog_io__Dirs_18));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 5) = ((MR_Box) (parse_tree__prog_io__FileName_12));
#line 250 "prog_io.m"
    }
#line 253 "prog_io.m"
    {
#line 253 "prog_io.m"
      parse_tree__prog_io__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 253 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[1]));
#line 253 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_2));
#line 253 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 253 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 253 "prog_io.m"
    }
#line 254 "prog_io.m"
    {
#line 254 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[1]));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_3));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 254 "prog_io.m"
    }
#line 251 "prog_io.m"
    {
#line 251 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_11, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__OpenFile_19, &parse_tree__prog_io__V_20_20, (MR_Word) &parse_tree__prog_io_scalar_common_3[1], &parse_tree__prog_io__V_21_21, parse_tree__prog_io__V_33_33, parse_tree__prog_io__V_34_34, &parse_tree__prog_io__conv5_ParseTreeOpt_14, &parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__Errors_16);
    }
#line 251 "prog_io.m"
    *parse_tree__prog_io__ParseTreeOpt_14 = ((MR_Word) parse_tree__prog_io__conv5_ParseTreeOpt_14);
#line 256 "prog_io.m"
    parse_tree__prog_io__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 0)));
#line 256 "prog_io.m"
    parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 1)));
#line 256 "prog_io.m"
    parse_tree__prog_io__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 2)));
#line 256 "prog_io.m"
    parse_tree__prog_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 3)));
#line 257 "prog_io.m"
    {
#line 257 "prog_io.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(parse_tree__prog_io__FileName_12, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__ModuleName_23, &parse_tree__prog_io__NameSpecs_27);
    }
#line 259 "prog_io.m"
    {
#line 259 "prog_io.m"
      *parse_tree__prog_io__Specs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__NameSpecs_27);
    }
#line 248 "prog_io.m"
  }
#line 151 "prog_io.m"
}

#line 242 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 242 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 242 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 242 "prog_io.m"
{
#line 242 "prog_io.m"
  {
#line 242 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 242 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_ParseTree_12;
#line 242 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_37;
#line 242 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_38;

#line 242 "prog_io.m"
    {
#line 242 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv3_ParseTree_12, &parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_37, &parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_38);
    }
#line 242 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv3_ParseTree_12));
#line 242 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_37));
#line 242 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_38));
#line 242 "prog_io.m"
  }
#line 242 "prog_io.m"
}

#line 241 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 241 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 241 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 241 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 241 "prog_io.m"
{
#line 241 "prog_io.m"
  {
#line 241 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 241 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_ParseTree_6;

#line 241 "prog_io.m"
    {
#line 241 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_ParseTree_6);
    }
#line 241 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_ParseTree_6));
#line 241 "prog_io.m"
  }
#line 241 "prog_io.m"
}

#line 135 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0(
#line 135 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_29,
#line 135 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_13,
#line 135 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 135 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 135 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 135 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 135 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 135 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 135 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_20,
#line 135 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_21,
#line 135 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_22)
#line 135 "prog_io.m"
{
#line 238 "prog_io.m"
  {
#line 238 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 238 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;
#line 238 "prog_io.m"
    MR_Word parse_tree__prog_io__V_27_27;
#line 239 "prog_io.m"
    MR_Box parse_tree__prog_io__conv4_ParseTree_20;

#line 241 "prog_io.m"
    {
#line 241 "prog_io.m"
      parse_tree__prog_io__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[0]));
#line 241 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_1));
#line 241 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 241 "prog_io.m"
    }
#line 242 "prog_io.m"
    {
#line 242 "prog_io.m"
      parse_tree__prog_io__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 242 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[0]));
#line 242 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_2));
#line 242 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 242 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 242 "prog_io.m"
    }
#line 239 "prog_io.m"
    {
#line 239 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__OpenFile_16, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ReadModuleAndTimestamps_18, parse_tree__prog_io__MaybeModuleTimestampRes_19, parse_tree__prog_io__V_26_26, parse_tree__prog_io__V_27_27, &parse_tree__prog_io__conv4_ParseTree_20, parse_tree__prog_io__Specs_21, parse_tree__prog_io__Errors_22);
    }
#line 239 "prog_io.m"
    *parse_tree__prog_io__ParseTree_20 = ((MR_Word) parse_tree__prog_io__conv4_ParseTree_20);
#line 238 "prog_io.m"
  }
#line 135 "prog_io.m"
}

#line 230 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_2(
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 230 "prog_io.m"
{
#line 230 "prog_io.m"
  {
#line 230 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 230 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_ParseTree_10;
#line 230 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27;
#line 230 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28;

#line 230 "prog_io.m"
    {
#line 230 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_7_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv3_ParseTree_10, &parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27, &parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28);
    }
#line 230 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv3_ParseTree_10));
#line 230 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27));
#line 230 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28));
#line 230 "prog_io.m"
  }
#line 230 "prog_io.m"
}

#line 230 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_1(
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 230 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 230 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 230 "prog_io.m"
{
#line 230 "prog_io.m"
  {
#line 230 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 230 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_ParseTree_4;

#line 230 "prog_io.m"
    {
#line 230 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_ParseTree_4);
    }
#line 230 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_ParseTree_4));
#line 230 "prog_io.m"
  }
#line 230 "prog_io.m"
}

#line 122 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0(
#line 122 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_27,
#line 122 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_12,
#line 122 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 122 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 122 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_15,
#line 122 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_16,
#line 122 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_17,
#line 122 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_18,
#line 122 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_19,
#line 122 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_20)
#line 122 "prog_io.m"
{
#line 227 "prog_io.m"
  {
#line 227 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 228 "prog_io.m"
    MR_Box parse_tree__prog_io__conv4_ParseTree_18;

#line 228 "prog_io.m"
    {
#line 228 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_12, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__FileData_15, parse_tree__prog_io__ReadModuleAndTimestamps_16, parse_tree__prog_io__MaybeModuleTimestampRes_17, (MR_Word) &parse_tree__prog_io_scalar_common_5[0], (MR_Word) &parse_tree__prog_io_scalar_common_5[1], &parse_tree__prog_io__conv4_ParseTree_18, parse_tree__prog_io__Specs_19, parse_tree__prog_io__Errors_20);
    }
#line 228 "prog_io.m"
    *parse_tree__prog_io__ParseTree_18 = ((MR_Word) parse_tree__prog_io__conv4_ParseTree_18);
#line 227 "prog_io.m"
  }
#line 122 "prog_io.m"
}

#line 106 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__peek_at_file_6_p_0(
#line 106 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_7,
#line 106 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName0_8,
#line 106 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_9,
#line 106 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_10)
#line 106 "prog_io.m"
{
#line 207 "prog_io.m"
  {
#line 207 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 207 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_12;
#line 207 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_13;
#line 207 "prog_io.m"
    MR_Word parse_tree__prog_io__V_24_24;
#line 209 "prog_io.m"
    MR_String parse_tree__prog_io___SourceFileName_14;
#line 209 "prog_io.m"
    MR_Word parse_tree__prog_io___SeqNumCounter_15;
#line 209 "prog_io.m"
    MR_Word parse_tree__prog_io___Errors_16;

#line 208 "prog_io.m"
    {
#line 208 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_12);
    }
#line 211 "prog_io.m"
    {
#line 211 "prog_io.m"
      parse_tree__prog_io__V_24_24 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 209 "prog_io.m"
    {
#line 209 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 0, parse_tree__prog_io__DefaultModuleName_7, &parse_tree__prog_io__ModuleDeclPresent_13, parse_tree__prog_io__SourceFileName0_8, &parse_tree__prog_io___SourceFileName_14, parse_tree__prog_io__SeqNumCounter0_12, &parse_tree__prog_io___SeqNumCounter_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__Specs_10, parse_tree__prog_io__V_24_24, &parse_tree__prog_io___Errors_16);
    }
#line 215 "prog_io.m"
#line 215 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_13)) {
#line 215 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 215 "prog_io.m"
      case (MR_Integer) 0:
#line 214 "prog_io.m"
        *parse_tree__prog_io__ModuleName_9 = parse_tree__prog_io__DefaultModuleName_7;
#line 215 "prog_io.m"
        break;
#line 215 "prog_io.m"
      case (MR_Integer) 1:
#line 216 "prog_io.m"
        {
#line 216 "prog_io.m"
          MR_Word parse_tree__prog_io___ModuleNameContext_18;

#line 216 "prog_io.m"
          *parse_tree__prog_io__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 0)));
#line 216 "prog_io.m"
          parse_tree__prog_io___ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 1)));
#line 216 "prog_io.m"
        }
#line 215 "prog_io.m"
        break;
#line 215 "prog_io.m"
      case (MR_Integer) 2:
#line 219 "prog_io.m"
        {
#line 219 "prog_io.m"
          MR_Word parse_tree__prog_io___ModuleNameContext_26;

#line 219 "prog_io.m"
          *parse_tree__prog_io__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 0)));
#line 219 "prog_io.m"
          parse_tree__prog_io___ModuleNameContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 1)));
#line 219 "prog_io.m"
        }
#line 215 "prog_io.m"
        break;
#line 215 "prog_io.m"
    }
#line 207 "prog_io.m"
  }
#line 106 "prog_io.m"
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
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_version_number_info_0);
}

void mercury__parse_tree__prog_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io. */
