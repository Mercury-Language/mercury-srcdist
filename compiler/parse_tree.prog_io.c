/*
** Automatically generated from `prog_io.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_item.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1177 "prog_io.m"
struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s {
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13;
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16;
#line 1188 "prog_io.m"
  MR_bool parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded;
#line 1197 "prog_io.m"
  jmp_buf parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0;
#line 1197 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90;
#line 1197 "prog_io.m"
  MR_Box parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90;
#line 1177 "prog_io.m"
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
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

#line 138 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0;

#line 141 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 144 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0;

#line 147 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 150 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0;

#line 153 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1[2];

#line 156 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1;

#line 159 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0[1];

#line 162 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1[1];

#line 165 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_lookahead_0[2];

#line 168 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0[2];

#line 171 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0[2];

#line 174 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0[1];

#line 177 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0;

#line 180 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1[2];

#line 183 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1;

#line 186 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2[2];

#line 189 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2;

#line 192 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0[1];

#line 195 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1[1];

#line 198 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2[1];

#line 201 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_module_decl_present_0[3];

#line 204 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0[3];

#line 207 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0[3];

#line 210 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0;

#line 213 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1;

#line 216 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0[2];

#line 219 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0[2];

#line 222 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0[2];

#line 225 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0;

#line 228 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1;

#line 231 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0[2];

#line 234 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0[2];

#line 237 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0[2];

#line 240 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0;

#line 243 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1[1];

#line 246 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1;

#line 249 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 252 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 255 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2[4];

#line 258 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2;

#line 261 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3[3];

#line 264 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3;

#line 267 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0[1];

#line 270 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1[1];

#line 273 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2[1];

#line 276 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3[1];

#line 279 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_iom_result_0[4];

#line 282 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0[4];

#line 285 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0[4];

#line 288 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct7 parse_tree__prog_io____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 291 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0;

#line 294 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1;

#line 297 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_version_number_info_0_2[1];

#line 300 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2;

#line 303 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_0[2];

#line 306 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_1[1];

#line 309 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_version_number_info_0[2];

#line 312 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_version_number_info_0[3];

#line 315 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_version_number_info_0[3];

#line 318 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001(
#line 321 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 323 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 325 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 328 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001(
#line 331 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 333 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 335 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 337 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 340 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001(
#line 343 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 345 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 348 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001(
#line 351 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 353 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 355 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 358 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001(
#line 361 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 363 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 366 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001(
#line 369 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 371 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 373 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 376 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001(
#line 379 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 381 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 384 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001(
#line 387 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 389 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 391 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 394 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001(
#line 397 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 399 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 402 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001(
#line 405 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 407 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 409 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 412 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0_10001(
#line 415 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 417 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 420 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0_10001(
#line 423 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 425 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 427 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 430 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0_10001(
#line 433 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 435 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 437 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 440 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0_10001(
#line 443 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 445 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 447 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 449 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 452 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0_10001(
#line 455 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 457 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 460 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0_10001(
#line 463 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 465 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 467 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 306 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 306 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 306 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 310 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 310 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 310 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 342 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_17,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__MakeDummyParseTree_20,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadParseTree_21,
#line 342 "prog_io.m"
  MR_Box * parse_tree__prog_io__ParseTree_22,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_23,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_24);

#line 475 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__475__1_2_p_0(
#line 475 "prog_io.m"
  MR_Word parse_tree__prog_io__Imports_38,
#line 475 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_72);

#line 472 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__472__1_1_p_0(
#line 472 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_32);

#line 1342 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0(
#line 1342 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1342 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0(
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 306 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 306 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 306 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1575 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1575 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1575 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 206 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0(
#line 206 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 206 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0(
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1229 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1229 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1229 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1552 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1552 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1552 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 310 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 310 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 310 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1691 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1691 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1691 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20);

#line 1665 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1665 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1665 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1665 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33);

#line 1637 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1637 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1637 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19);

#line 1623 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1623 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1623 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1623 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1623 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1623 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15);

#line 1582 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1582 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1582 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1582 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1582 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1582 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1582 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11);

#line 1556 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1556 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1556 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1556 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1556 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1556 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1556 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);

#line 1507 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1507 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1507 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1507 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29);

#line 1467 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__record_version_numbers_6_p_0(
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__MVN_7,
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_8,
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15,
#line 1467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_16,
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18);

#line 1384 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_24_p_0(
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_25,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_26,
#line 1384 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67,
#line 1384 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_28,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_29,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_70,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_72,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76,
#line 1384 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77,
#line 1384 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_81,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_82,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_83,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_84);

#line 1357 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_22_p_0(
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_23,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_24,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_41,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_43,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_45,
#line 1357 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46,
#line 1357 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_50,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_51,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_52,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_53);

#line 1252 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1252 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48,
#line 1252 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_50,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_52,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_53,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_54,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_55);

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1177 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1177 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1177 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1177 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27);

#line 1131 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1131 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1131 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51);

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 1098 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 1098 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 1098 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21);

#line 1080 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_7_p_0(
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_8,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_9,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_10,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__AvailsCord_11,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_12,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15,
#line 1080 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16);

#line 902 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77,
#line 902 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78,
#line 902 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_82,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_83,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_84,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_85);

#line 835 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 835 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 835 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 835 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 835 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 835 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28);

#line 787 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_21,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_22,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 787 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_40,
#line 787 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_41,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_42,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_43,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_44,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_45,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_46,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_47);

#line 744 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_int_8_p_0(
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 744 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 744 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 744 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21);

#line 649 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_18_p_0(
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_59,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 649 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60,
#line 649 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_64,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_65,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_66,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_67);

#line 614 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_18,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_19,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_34,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_23,
#line 614 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35,
#line 614 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_39,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_40,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_41,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42);

#line 576 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__separate_int_imp_items_7_p_0(
#line 576 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_2,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__4_4,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__5_5,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__6_6,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__7_7);

#line 498 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 498 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 498 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 498 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 498 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 498 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_41,
#line 498 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42);

#line 475 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_2(
#line 475 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg);

#line 472 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_1(
#line 472 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg);

#line 423 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0(
#line 423 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_9,
#line 423 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 423 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 423 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 423 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_39,
#line 423 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_40);

#line 327 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 327 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 327 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 327 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 320 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 320 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 320 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 320 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 315 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 315 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 315 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4);

#line 258 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 257 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 257 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 257 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 257 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 254 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3);

#line 246 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 245 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 245 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 245 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 245 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 235 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_2(
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 235 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_1(
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[101][2];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[2][4];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[8][1];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[2][3];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_7[2][6];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_8[2][11];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_9[1][9];




static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[101][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the missing declaration is an"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The following assumes that"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should start with either an"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected version_numbers record"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[19])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "generated this file."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the Mercury compiler that"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "record. This indicates an internal error"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: duplicate version_numbers"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "interface files."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "except in automatically generated"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not appear anywhere"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 96 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_io__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0))
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
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[28])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[54])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[62])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[67])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2138 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2146 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 2154 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2162 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2171 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0
  }
};

#line 2179 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_import_info_0
  }
};

#line 2187 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2197 "parse_tree.prog_io.c"
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

#line 2214 "parse_tree.prog_io.c"
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

#line 2229 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2237 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2245 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0
};

#line 2251 "parse_tree.prog_io.c"
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

#line 2266 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0
};

#line 2271 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1
};

#line 2276 "parse_tree.prog_io.c"
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

#line 2290 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0
};

#line 2296 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2302 "parse_tree.prog_io.c"
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

#line 2319 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_lookahead_0
};

#line 2324 "parse_tree.prog_io.c"
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

#line 2339 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2345 "parse_tree.prog_io.c"
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

#line 2360 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2366 "parse_tree.prog_io.c"
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

#line 2381 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0
};

#line 2386 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1
};

#line 2391 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2
};

#line 2396 "parse_tree.prog_io.c"
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

#line 2415 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1
};

#line 2422 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2429 "parse_tree.prog_io.c"
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

#line 2446 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0 = {
  (MR_String) "dont_require_module_decl",
  (MR_Integer) 0
};

#line 2452 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1 = {
  (MR_String) "require_module_decl",
  (MR_Integer) 1
};

#line 2458 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1
};

#line 2464 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1
};

#line 2470 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2476 "parse_tree.prog_io.c"
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

#line 2493 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0 = {
  (MR_String) "have_not_given_missing_section_start_warning",
  (MR_Integer) 0
};

#line 2499 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1 = {
  (MR_String) "have_given_missing_section_start_warning",
  (MR_Integer) 1
};

#line 2505 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1
};

#line 2511 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0
};

#line 2517 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2523 "parse_tree.prog_io.c"
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

#line 2540 "parse_tree.prog_io.c"
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

#line 2555 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2560 "parse_tree.prog_io.c"
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

#line 2575 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2583 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 2591 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 2599 "parse_tree.prog_io.c"
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

#line 2614 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_item_or_marker_0
};

#line 2621 "parse_tree.prog_io.c"
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

#line 2636 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0
};

#line 2641 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1
};

#line 2646 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2
};

#line 2651 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3
};

#line 2656 "parse_tree.prog_io.c"
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

#line 2680 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0[4] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1
};

#line 2688 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2696 "parse_tree.prog_io.c"
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

#line 2713 "parse_tree.prog_io.c"
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

#line 2728 "parse_tree.prog_io.c"
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

#line 2745 "parse_tree.prog_io.c"
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

#line 2760 "parse_tree.prog_io.c"
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

#line 2775 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_version_number_info_0_2[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
};

#line 2780 "parse_tree.prog_io.c"
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

#line 2795 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1
};

#line 2801 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2
};

#line 2806 "parse_tree.prog_io.c"
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

#line 2820 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_version_number_info_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0
};

#line 2827 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_version_number_info_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2834 "parse_tree.prog_io.c"
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

#line 2851 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001(
#line 2854 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2856 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2858 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2860 "parse_tree.prog_io.c"
{
#line 2862 "parse_tree.prog_io.c"
  {
#line 2864 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2867 "parse_tree.prog_io.c"
    {
#line 2869 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2872 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2874 "parse_tree.prog_io.c"
  }
#line 2876 "parse_tree.prog_io.c"
}

#line 2879 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001(
#line 2882 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2884 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 2886 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 2888 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4)
#line 2890 "parse_tree.prog_io.c"
{
#line 2892 "parse_tree.prog_io.c"
  {
#line 2894 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2897 "parse_tree.prog_io.c"
    {
#line 2899 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_3), ((MR_Word) parse_tree__prog_io__wrapper_arg_4));
    }
#line 2902 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2904 "parse_tree.prog_io.c"
  }
#line 2906 "parse_tree.prog_io.c"
}

#line 2909 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001(
#line 2912 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2914 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2916 "parse_tree.prog_io.c"
{
#line 2918 "parse_tree.prog_io.c"
  {
#line 2920 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2923 "parse_tree.prog_io.c"
    {
#line 2925 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_lookahead_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2928 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2930 "parse_tree.prog_io.c"
  }
#line 2932 "parse_tree.prog_io.c"
}

#line 2935 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001(
#line 2938 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2940 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2942 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2944 "parse_tree.prog_io.c"
{
#line 2946 "parse_tree.prog_io.c"
  {
#line 2948 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2951 "parse_tree.prog_io.c"
    {
#line 2953 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_lookahead_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 2956 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 2958 "parse_tree.prog_io.c"
  }
#line 2960 "parse_tree.prog_io.c"
}

#line 2963 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001(
#line 2966 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2968 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 2970 "parse_tree.prog_io.c"
{
#line 2972 "parse_tree.prog_io.c"
  {
#line 2974 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2977 "parse_tree.prog_io.c"
    {
#line 2979 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 2982 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2984 "parse_tree.prog_io.c"
  }
#line 2986 "parse_tree.prog_io.c"
}

#line 2989 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001(
#line 2992 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 2994 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2996 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 2998 "parse_tree.prog_io.c"
{
#line 3000 "parse_tree.prog_io.c"
  {
#line 3002 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3005 "parse_tree.prog_io.c"
    {
#line 3007 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3010 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3012 "parse_tree.prog_io.c"
  }
#line 3014 "parse_tree.prog_io.c"
}

#line 3017 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001(
#line 3020 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3022 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3024 "parse_tree.prog_io.c"
{
#line 3026 "parse_tree.prog_io.c"
  {
#line 3028 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3031 "parse_tree.prog_io.c"
    {
#line 3033 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3036 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3038 "parse_tree.prog_io.c"
  }
#line 3040 "parse_tree.prog_io.c"
}

#line 3043 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001(
#line 3046 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3048 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3050 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3052 "parse_tree.prog_io.c"
{
#line 3054 "parse_tree.prog_io.c"
  {
#line 3056 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3059 "parse_tree.prog_io.c"
    {
#line 3061 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3064 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3066 "parse_tree.prog_io.c"
  }
#line 3068 "parse_tree.prog_io.c"
}

#line 3071 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001(
#line 3074 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3076 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3078 "parse_tree.prog_io.c"
{
#line 3080 "parse_tree.prog_io.c"
  {
#line 3082 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3085 "parse_tree.prog_io.c"
    {
#line 3087 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____missing_section_start_warning_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3090 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3092 "parse_tree.prog_io.c"
  }
#line 3094 "parse_tree.prog_io.c"
}

#line 3097 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001(
#line 3100 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3102 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3104 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3106 "parse_tree.prog_io.c"
{
#line 3108 "parse_tree.prog_io.c"
  {
#line 3110 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3113 "parse_tree.prog_io.c"
    {
#line 3115 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____missing_section_start_warning_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3118 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3120 "parse_tree.prog_io.c"
  }
#line 3122 "parse_tree.prog_io.c"
}

#line 3125 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0_10001(
#line 3128 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3130 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3132 "parse_tree.prog_io.c"
{
#line 3134 "parse_tree.prog_io.c"
  {
#line 3136 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3139 "parse_tree.prog_io.c"
    {
#line 3141 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_iom_result_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3144 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3146 "parse_tree.prog_io.c"
  }
#line 3148 "parse_tree.prog_io.c"
}

#line 3151 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0_10001(
#line 3154 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3156 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3158 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3160 "parse_tree.prog_io.c"
{
#line 3162 "parse_tree.prog_io.c"
  {
#line 3164 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3167 "parse_tree.prog_io.c"
    {
#line 3169 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_iom_result_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3172 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3174 "parse_tree.prog_io.c"
  }
#line 3176 "parse_tree.prog_io.c"
}

#line 3179 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0_10001(
#line 3182 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3184 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3186 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3188 "parse_tree.prog_io.c"
{
#line 3190 "parse_tree.prog_io.c"
  {
#line 3192 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3195 "parse_tree.prog_io.c"
    {
#line 3197 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3200 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3202 "parse_tree.prog_io.c"
  }
#line 3204 "parse_tree.prog_io.c"
}

#line 3207 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0_10001(
#line 3210 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3212 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 3214 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 3216 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4)
#line 3218 "parse_tree.prog_io.c"
{
#line 3220 "parse_tree.prog_io.c"
  {
#line 3222 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3225 "parse_tree.prog_io.c"
    {
#line 3227 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_parse_tree_1_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_3), ((MR_Word) parse_tree__prog_io__wrapper_arg_4));
    }
#line 3230 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3232 "parse_tree.prog_io.c"
  }
#line 3234 "parse_tree.prog_io.c"
}

#line 3237 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0_10001(
#line 3240 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3242 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3244 "parse_tree.prog_io.c"
{
#line 3246 "parse_tree.prog_io.c"
  {
#line 3248 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3251 "parse_tree.prog_io.c"
    {
#line 3253 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____version_number_info_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3256 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3258 "parse_tree.prog_io.c"
  }
#line 3260 "parse_tree.prog_io.c"
}

#line 3263 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0_10001(
#line 3266 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3268 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3270 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3272 "parse_tree.prog_io.c"
{
#line 3274 "parse_tree.prog_io.c"
  {
#line 3276 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3279 "parse_tree.prog_io.c"
    {
#line 3281 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____version_number_info_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3284 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3286 "parse_tree.prog_io.c"
  }
#line 3288 "parse_tree.prog_io.c"
}

#line 306 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 306 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 306 "prog_io.m"
{
#line 306 "prog_io.m"
  {
#line 306 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 306 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 306 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 306 "prog_io.m"
    {
#line 306 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 306 "prog_io.m"
      return;
    }
#line 306 "prog_io.m"
  }
#line 306 "prog_io.m"
}

#line 306 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 306 "prog_io.m"
{
#line 306 "prog_io.m"
  {
#line 306 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 306 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 306 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 306 "prog_io.m"
    {
#line 306 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 306 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 306 "prog_io.m"
  }
#line 306 "prog_io.m"
}

#line 310 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 310 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 310 "prog_io.m"
{
#line 310 "prog_io.m"
  {
#line 310 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 310 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 310 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 310 "prog_io.m"
    {
#line 310 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 310 "prog_io.m"
      return;
    }
#line 310 "prog_io.m"
  }
#line 310 "prog_io.m"
}

#line 310 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 310 "prog_io.m"
{
#line 310 "prog_io.m"
  {
#line 310 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 310 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 310 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 310 "prog_io.m"
    {
#line 310 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 310 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 310 "prog_io.m"
  }
#line 310 "prog_io.m"
}

#line 342 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_17,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__MakeDummyParseTree_20,
#line 342 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadParseTree_21,
#line 342 "prog_io.m"
  MR_Box * parse_tree__prog_io__ParseTree_22,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_23,
#line 342 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_24)
#line 342 "prog_io.m"
{
#line 352 "prog_io.m"
  {
#line 352 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 352 "prog_io.m"
    MR_Word parse_tree__prog_io__OldInputStream_26;
#line 352 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenResult_27;
#line 354 "prog_io.m"
    void MR_CALL (* parse_tree__prog_io__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 354 "prog_io.m"
    MR_Box parse_tree__prog_io__conv2_OpenResult_27;
#line 354 "prog_io.m"
    MR_Box parse_tree__prog_io__conv1_STATE_VARIABLE_IO_43_43;

#line 353 "prog_io.m"
    {
#line 353 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__OldInputStream_26);
    }
#line 354 "prog_io.m"
    parse_tree__prog_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_16, (MR_Integer) 1)));
#line 354 "prog_io.m"
    {
#line 354 "prog_io.m"
      parse_tree__prog_io__func_0(((MR_Box) parse_tree__prog_io__OpenFile_16), &parse_tree__prog_io__conv2_OpenResult_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 354 "prog_io.m"
    parse_tree__prog_io__OpenResult_27 = ((MR_Word) parse_tree__prog_io__conv2_OpenResult_27);
#line 395 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__OpenResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 396 "prog_io.m"
      {
#line 396 "prog_io.m"
        MR_String parse_tree__prog_io__ErrorMsg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0)));
#line 396 "prog_io.m"
        MR_String parse_tree__prog_io__Progname_37;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_38;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_39;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_47_47;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_50_50;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_51_51;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_58_58;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;
#line 396 "prog_io.m"
        MR_Word parse_tree__prog_io__V_63_63;
#line 398 "prog_io.m"
        void MR_CALL (* parse_tree__prog_io__func_3)(MR_Box, MR_Box, MR_Box *);

#line 397 "prog_io.m"
        *parse_tree__prog_io__MaybeFileData_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "prog_io.m"
        parse_tree__prog_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MakeDummyParseTree_20, (MR_Integer) 1)));
#line 398 "prog_io.m"
        {
#line 398 "prog_io.m"
          parse_tree__prog_io__func_3(((MR_Box) parse_tree__prog_io__MakeDummyParseTree_20), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22);
        }
#line 399 "prog_io.m"
        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "prog_io.m"
        {
#line 401 "prog_io.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io__Progname_37);
        }
#line 402 "prog_io.m"
        {
#line 402 "prog_io.m"
          parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__Progname_37));
#line 402 "prog_io.m"
        }
#line 402 "prog_io.m"
        {
#line 402 "prog_io.m"
          parse_tree__prog_io__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_36));
#line 402 "prog_io.m"
        }
#line 402 "prog_io.m"
        {
#line 402 "prog_io.m"
          parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io__V_51_51));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])));
#line 402 "prog_io.m"
        }
#line 402 "prog_io.m"
        {
#line 402 "prog_io.m"
          parse_tree__prog_io__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[100])));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 402 "prog_io.m"
        }
#line 402 "prog_io.m"
        {
#line 402 "prog_io.m"
          parse_tree__prog_io__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_38, 0) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 402 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_38, 1) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 402 "prog_io.m"
        }
#line 404 "prog_io.m"
        {
#line 404 "prog_io.m"
          parse_tree__prog_io__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_38));
#line 404 "prog_io.m"
        }
#line 404 "prog_io.m"
        {
#line 404 "prog_io.m"
          parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "prog_io.m"
        }
#line 404 "prog_io.m"
        {
#line 404 "prog_io.m"
          parse_tree__prog_io__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 404 "prog_io.m"
        }
#line 404 "prog_io.m"
        {
#line 404 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io__V_58_58));
#line 404 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "prog_io.m"
        }
#line 403 "prog_io.m"
        {
#line 403 "prog_io.m"
          parse_tree__prog_io__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 403 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_39, 2) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 403 "prog_io.m"
        }
#line 405 "prog_io.m"
        {
#line 405 "prog_io.m"
          MR_Word base;
#line 405 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io.m"
          *parse_tree__prog_io__Specs_23 = base;
#line 405 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_39));
#line 405 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "prog_io.m"
        }
#line 406 "prog_io.m"
        {
#line 406 "prog_io.m"
          *parse_tree__prog_io__Errors_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 0)));
        }
#line 396 "prog_io.m"
      }
#line 395 "prog_io.m"
    else
#line 356 "prog_io.m"
      {
#line 356 "prog_io.m"
        MR_Box parse_tree__prog_io__FileData_28 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0));
#line 356 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleInputStream_35;
#line 378 "prog_io.m"
        MR_Word parse_tree__prog_io__OldTimestamp_34;
#line 378 "prog_io.m"
        MR_Word parse_tree__prog_io__V_75_75;
#line 378 "prog_io.m"
        MR_Word parse_tree__prog_io__V_83_83;

#line 357 "prog_io.m"
        {
#line 357 "prog_io.m"
          MR_Word base;
#line 357 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 357 "prog_io.m"
          *parse_tree__prog_io__MaybeFileData_17 = base;
#line 357 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io__FileData_28;
#line 357 "prog_io.m"
        }
#line 372 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__ReadModuleAndTimestamps_18)) == (MR_mktag((MR_Integer) 0))))
#line 372 "prog_io.m"
          {
#line 372 "prog_io.m"
            MR_Word parse_tree__prog_io__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReadModuleAndTimestamps_18, (MR_Integer) 0)));

#line 372 "prog_io.m"
#line 372 "prog_io.m"
            switch (parse_tree__prog_io__V_102_102) {
#line 372 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 372 "prog_io.m"
              case (MR_Integer) 0:
#line 361 "prog_io.m"
                {
#line 361 "prog_io.m"
                  MR_String parse_tree__prog_io__InputStreamName_30;
#line 361 "prog_io.m"
                  MR_Word parse_tree__prog_io__TimestampResult_31;

#line 362 "prog_io.m"
                  {
#line 362 "prog_io.m"
                    mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_30);
                  }
#line 363 "prog_io.m"
                  {
#line 363 "prog_io.m"
                    mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_30, &parse_tree__prog_io__TimestampResult_31);
                  }
#line 368 "prog_io.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_31)) == (MR_mktag((MR_Integer) 1))))
#line 369 "prog_io.m"
                    {
#line 369 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_72_72 = (MR_Word) parse_tree__prog_io__TimestampResult_31;

#line 370 "prog_io.m"
                      {
#line 370 "prog_io.m"
                        MR_Word base;
#line 370 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io.m"
                        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 370 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 370 "prog_io.m"
                      }
#line 369 "prog_io.m"
                    }
#line 368 "prog_io.m"
                  else
#line 365 "prog_io.m"
                    {
#line 365 "prog_io.m"
                      MR_Word parse_tree__prog_io__Timestamp_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_31, (MR_Integer) 0)));
#line 365 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_73_73;
#line 365 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_74_74;

#line 367 "prog_io.m"
                      {
#line 367 "prog_io.m"
                        parse_tree__prog_io__V_74_74 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_32);
                      }
#line 367 "prog_io.m"
                      {
#line 367 "prog_io.m"
                        parse_tree__prog_io__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 367 "prog_io.m"
                      }
#line 367 "prog_io.m"
                      {
#line 367 "prog_io.m"
                        MR_Word base;
#line 367 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "prog_io.m"
                        *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 367 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_73_73));
#line 367 "prog_io.m"
                      }
#line 365 "prog_io.m"
                    }
#line 361 "prog_io.m"
                }
#line 372 "prog_io.m"
                break;
#line 372 "prog_io.m"
              case (MR_Integer) 1:
#line 375 "prog_io.m"
                *parse_tree__prog_io__MaybeModuleTimestampRes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "prog_io.m"
                break;
#line 372 "prog_io.m"
            }
#line 372 "prog_io.m"
          }
#line 372 "prog_io.m"
        else
#line 361 "prog_io.m"
          {
#line 361 "prog_io.m"
            MR_String parse_tree__prog_io__InputStreamName_94;
#line 361 "prog_io.m"
            MR_Word parse_tree__prog_io__TimestampResult_95;

#line 362 "prog_io.m"
            {
#line 362 "prog_io.m"
              mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_94);
            }
#line 363 "prog_io.m"
            {
#line 363 "prog_io.m"
              mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_94, &parse_tree__prog_io__TimestampResult_95);
            }
#line 368 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_95)) == (MR_mktag((MR_Integer) 1))))
#line 369 "prog_io.m"
              {
#line 369 "prog_io.m"
                MR_Word parse_tree__prog_io__V_85_85 = (MR_Word) parse_tree__prog_io__TimestampResult_95;

#line 370 "prog_io.m"
                {
#line 370 "prog_io.m"
                  MR_Word base;
#line 370 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 370 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_85_85));
#line 370 "prog_io.m"
                }
#line 369 "prog_io.m"
              }
#line 368 "prog_io.m"
            else
#line 365 "prog_io.m"
              {
#line 365 "prog_io.m"
                MR_Word parse_tree__prog_io__Timestamp_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_95, (MR_Integer) 0)));
#line 365 "prog_io.m"
                MR_Word parse_tree__prog_io__V_87_87;
#line 365 "prog_io.m"
                MR_Word parse_tree__prog_io__V_88_88;

#line 367 "prog_io.m"
                {
#line 367 "prog_io.m"
                  parse_tree__prog_io__V_88_88 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_86);
                }
#line 367 "prog_io.m"
                {
#line 367 "prog_io.m"
                  parse_tree__prog_io__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io__V_88_88));
#line 367 "prog_io.m"
                }
#line 367 "prog_io.m"
                {
#line 367 "prog_io.m"
                  MR_Word base;
#line 367 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestampRes_19 = base;
#line 367 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_87_87));
#line 367 "prog_io.m"
                }
#line 365 "prog_io.m"
              }
#line 361 "prog_io.m"
          }
#line 378 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ReadModuleAndTimestamps_18)) == (MR_mktag((MR_Integer) 1)));
#line 378 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 378 "prog_io.m"
          {
#line 378 "prog_io.m"
            parse_tree__prog_io__OldTimestamp_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadModuleAndTimestamps_18, (MR_Integer) 0)));
#line 379 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_io__MaybeModuleTimestampRes_19)) == (MR_mktag((MR_Integer) 1)));
#line 379 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 379 "prog_io.m"
              {
#line 379 "prog_io.m"
                parse_tree__prog_io__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io__MaybeModuleTimestampRes_19, (MR_Integer) 0)));
#line 379 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_75_75)) == (MR_mktag((MR_Integer) 0)));
#line 379 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 379 "prog_io.m"
                  {
#line 379 "prog_io.m"
                    parse_tree__prog_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, (MR_Integer) 0)));
#line 379 "prog_io.m"
                    {
#line 379 "prog_io.m"
                      parse_tree__prog_io__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__prog_io__OldTimestamp_34, parse_tree__prog_io__V_83_83);
                    }
#line 379 "prog_io.m"
                  }
#line 379 "prog_io.m"
              }
#line 378 "prog_io.m"
          }
#line 389 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 386 "prog_io.m"
          {
#line 386 "prog_io.m"
            void MR_CALL (* parse_tree__prog_io__func_4)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MakeDummyParseTree_20, (MR_Integer) 1)));

#line 386 "prog_io.m"
            {
#line 386 "prog_io.m"
              parse_tree__prog_io__func_4(((MR_Box) parse_tree__prog_io__MakeDummyParseTree_20), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22);
            }
#line 387 "prog_io.m"
            *parse_tree__prog_io__Specs_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "prog_io.m"
            {
#line 388 "prog_io.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__Errors_24);
            }
#line 386 "prog_io.m"
          }
#line 389 "prog_io.m"
        else
#line 390 "prog_io.m"
          {
#line 390 "prog_io.m"
            void MR_CALL (* parse_tree__prog_io__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReadParseTree_21, (MR_Integer) 1)));
#line 390 "prog_io.m"
            MR_Box parse_tree__prog_io__conv8_Specs_23;
#line 390 "prog_io.m"
            MR_Box parse_tree__prog_io__conv7_Errors_24;
#line 390 "prog_io.m"
            MR_Box parse_tree__prog_io__conv6_STATE_VARIABLE_IO_76_76;

#line 390 "prog_io.m"
            {
#line 390 "prog_io.m"
              parse_tree__prog_io__func_5(((MR_Box) parse_tree__prog_io__ReadParseTree_21), ((MR_Box) (parse_tree__prog_io__Globals_14)), ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15)), parse_tree__prog_io__ParseTree_22, &parse_tree__prog_io__conv8_Specs_23, &parse_tree__prog_io__conv7_Errors_24, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv6_STATE_VARIABLE_IO_76_76);
            }
#line 390 "prog_io.m"
            *parse_tree__prog_io__Specs_23 = ((MR_Word) parse_tree__prog_io__conv8_Specs_23);
#line 390 "prog_io.m"
            *parse_tree__prog_io__Errors_24 = ((MR_Word) parse_tree__prog_io__conv7_Errors_24);
#line 390 "prog_io.m"
          }
#line 393 "prog_io.m"
        {
#line 393 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__OldInputStream_26, &parse_tree__prog_io__ModuleInputStream_35);
        }
#line 394 "prog_io.m"
        {
#line 394 "prog_io.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io__ModuleInputStream_35);
#line 394 "prog_io.m"
          return;
        }
#line 356 "prog_io.m"
      }
#line 352 "prog_io.m"
  }
#line 342 "prog_io.m"
}

#line 475 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__475__1_2_p_0(
#line 475 "prog_io.m"
  MR_Word parse_tree__prog_io__Imports_38,
#line 475 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_72)
#line 475 "prog_io.m"
{
#line 475 "prog_io.m"
  {
#line 475 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 475 "prog_io.m"
    {
#line 475 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], ((MR_Box) (parse_tree__prog_io__Imports_38)), ((MR_Box) (parse_tree__prog_io__HeadVar__2_72)));
    }
#line 475 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 475 "prog_io.m"
  }
#line 475 "prog_io.m"
}

#line 472 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__472__1_1_p_0(
#line 472 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_32)
#line 472 "prog_io.m"
{
#line 472 "prog_io.m"
  {
#line 472 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 472 "prog_io.m"
    {
#line 472 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__InclsCord_32);
    }
#line 472 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 472 "prog_io.m"
  }
#line 472 "prog_io.m"
}

#line 1342 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0(
#line 1342 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1342 "prog_io.m"
{
#line 1342 "prog_io.m"
  {
#line 1342 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1342 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1342 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_11 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1342 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_10 == parse_tree__prog_io__CastY_11);
#line 1342 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4025 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1342 "prog_io.m"
    else
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1342 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
        case (MR_Integer) 0:
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
          switch (MR_unmkbody(parse_tree__prog_io__HeadVar__2_2)) {
#line 1342 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
            case (MR_Integer) 0:
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1342 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
                case (MR_Integer) 0:
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
                  switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1342 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
                    case (MR_Integer) 0:
#line 1342 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1342 "prog_io.m"
                      break;
#line 1342 "prog_io.m"
                    case (MR_Integer) 1:
#line 1342 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1342 "prog_io.m"
                      break;
#line 1342 "prog_io.m"
                  }
#line 1342 "prog_io.m"
                  break;
#line 1342 "prog_io.m"
                case (MR_Integer) 1:
#line 4073 "parse_tree.prog_io.c"
                  *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1342 "prog_io.m"
                  break;
#line 1342 "prog_io.m"
              }
#line 1342 "prog_io.m"
              break;
#line 1342 "prog_io.m"
            case (MR_Integer) 1:
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1342 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
                case (MR_Integer) 0:
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
                  switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1342 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
                    case (MR_Integer) 0:
#line 1342 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1342 "prog_io.m"
                      break;
#line 1342 "prog_io.m"
                    case (MR_Integer) 1:
#line 1342 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1342 "prog_io.m"
                      break;
#line 1342 "prog_io.m"
                  }
#line 1342 "prog_io.m"
                  break;
#line 1342 "prog_io.m"
                case (MR_Integer) 1:
#line 4113 "parse_tree.prog_io.c"
                  *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1342 "prog_io.m"
                  break;
#line 1342 "prog_io.m"
              }
#line 1342 "prog_io.m"
              break;
#line 1342 "prog_io.m"
          }
#line 1342 "prog_io.m"
          break;
#line 1342 "prog_io.m"
        case (MR_Integer) 1:
#line 1342 "prog_io.m"
          {
#line 1342 "prog_io.m"
            MR_Word parse_tree__prog_io__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);

#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1342 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
              case (MR_Integer) 0:
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
                switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1342 "prog_io.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
                  case (MR_Integer) 0:
#line 4146 "parse_tree.prog_io.c"
                    *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1342 "prog_io.m"
                    break;
#line 1342 "prog_io.m"
                  case (MR_Integer) 1:
#line 4152 "parse_tree.prog_io.c"
                    *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1342 "prog_io.m"
                    break;
#line 1342 "prog_io.m"
                }
#line 1342 "prog_io.m"
                break;
#line 1342 "prog_io.m"
              case (MR_Integer) 1:
#line 1342 "prog_io.m"
                {
#line 1342 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_9_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__3_3), (MR_Integer) 1);

#line 1342 "prog_io.m"
                  {
#line 1342 "prog_io.m"
                    recompilation____Compare____version_numbers_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_13_13, parse_tree__prog_io__V_9_9);
#line 1342 "prog_io.m"
                    return;
                  }
#line 1342 "prog_io.m"
                }
#line 1342 "prog_io.m"
                break;
#line 1342 "prog_io.m"
            }
#line 1342 "prog_io.m"
          }
#line 1342 "prog_io.m"
          break;
#line 1342 "prog_io.m"
      }
#line 1342 "prog_io.m"
  }
#line 1342 "prog_io.m"
}

#line 1342 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0(
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1342 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1342 "prog_io.m"
{
#line 1342 "prog_io.m"
  {
#line 1342 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1342 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1342 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1342 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 1342 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1342 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1342 "prog_io.m"
    else
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1342 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
        case (MR_Integer) 0:
#line 1342 "prog_io.m"
#line 1342 "prog_io.m"
          switch (MR_unmkbody(parse_tree__prog_io__HeadVar__1_1)) {
#line 1342 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1342 "prog_io.m"
            case (MR_Integer) 0:
#line 1342 "prog_io.m"
              {
#line 1342 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1342 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1342 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1342 "prog_io.m"
              }
#line 1342 "prog_io.m"
              break;
#line 1342 "prog_io.m"
            case (MR_Integer) 1:
#line 1342 "prog_io.m"
              {
#line 1342 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastX_5 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1342 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastY_6 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1342 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_6 == parse_tree__prog_io__CastX_5);
#line 1342 "prog_io.m"
              }
#line 1342 "prog_io.m"
              break;
#line 1342 "prog_io.m"
          }
#line 1342 "prog_io.m"
          break;
#line 1342 "prog_io.m"
        case (MR_Integer) 1:
#line 1342 "prog_io.m"
          {
#line 1342 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__1_1), (MR_Integer) 1);
#line 1342 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 1342 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1342 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1342 "prog_io.m"
              {
#line 1342 "prog_io.m"
                parse_tree__prog_io__V_8_8 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);
#line 4280 "parse_tree.prog_io.c"
                {
#line 4282 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = recompilation____Unify____version_numbers_0_0(parse_tree__prog_io__V_7_7, parse_tree__prog_io__V_8_8);
                }
#line 1342 "prog_io.m"
              }
#line 1342 "prog_io.m"
          }
#line 1342 "prog_io.m"
          break;
#line 1342 "prog_io.m"
      }
#line 1342 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1342 "prog_io.m"
  }
#line 1342 "prog_io.m"
}

#line 306 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 306 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 306 "prog_io.m"
{
#line 306 "prog_io.m"
  {
#line 306 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 306 "prog_io.m"
    {
#line 306 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 306 "prog_io.m"
      return;
    }
#line 306 "prog_io.m"
  }
#line 306 "prog_io.m"
}

#line 306 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 306 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 306 "prog_io.m"
{
#line 306 "prog_io.m"
  {
#line 306 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 306 "prog_io.m"
    {
#line 306 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 306 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 306 "prog_io.m"
  }
#line 306 "prog_io.m"
}

#line 1575 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1575 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1575 "prog_io.m"
{
#line 1575 "prog_io.m"
  {
#line 1575 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1575 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_73 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1575 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_74 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1575 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_73 == parse_tree__prog_io__CastY_74);
#line 1575 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4382 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1575 "prog_io.m"
    else
#line 1575 "prog_io.m"
#line 1575 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1575 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1575 "prog_io.m"
        case (MR_Integer) 0:
#line 1575 "prog_io.m"
#line 1575 "prog_io.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1575 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1575 "prog_io.m"
            case (MR_Integer) 0:
#line 1575 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1575 "prog_io.m"
              break;
#line 1575 "prog_io.m"
            case (MR_Integer) 1:
#line 4406 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1575 "prog_io.m"
              break;
#line 1575 "prog_io.m"
            case (MR_Integer) 2:
#line 4412 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1575 "prog_io.m"
              break;
#line 1575 "prog_io.m"
            case (MR_Integer) 3:
#line 4418 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1575 "prog_io.m"
              break;
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
        case (MR_Integer) 1:
#line 1575 "prog_io.m"
          {
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_90_90 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);

#line 1575 "prog_io.m"
#line 1575 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1575 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1575 "prog_io.m"
              case (MR_Integer) 0:
#line 4440 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 1:
#line 1575 "prog_io.m"
                {
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_14_14 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__3_3), (MR_Integer) 1);

#line 1575 "prog_io.m"
                  {
#line 1575 "prog_io.m"
                    parse_tree__error_util____Compare____error_spec_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_90_90, parse_tree__prog_io__V_14_14);
#line 1575 "prog_io.m"
                    return;
                  }
#line 1575 "prog_io.m"
                }
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 2:
#line 4464 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 3:
#line 4470 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
            }
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
        case (MR_Integer) 2:
#line 1575 "prog_io.m"
          {
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1575 "prog_io.m"
#line 1575 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1575 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1575 "prog_io.m"
              case (MR_Integer) 0:
#line 4500 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 1:
#line 4506 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 2:
#line 1575 "prog_io.m"
                {
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 3)));
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_41_41;

#line 1575 "prog_io.m"
                  {
#line 1575 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_41_41, ((MR_Box) (parse_tree__prog_io__V_89_89)), ((MR_Box) (parse_tree__prog_io__V_37_37)));
                  }
#line 4530 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_41_41 == (MR_Integer) 0);
#line 1575 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1575 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_41_41;
#line 1575 "prog_io.m"
                  else
#line 1575 "prog_io.m"
                    {
#line 1575 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_42_42;

#line 1575 "prog_io.m"
                      {
#line 1575 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], &parse_tree__prog_io__V_42_42, ((MR_Box) (parse_tree__prog_io__V_88_88)), ((MR_Box) (parse_tree__prog_io__V_38_38)));
                      }
#line 4550 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_42_42 == (MR_Integer) 0);
#line 1575 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1575 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_42_42;
#line 1575 "prog_io.m"
                      else
#line 1575 "prog_io.m"
                        {
#line 1575 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_43_43;

#line 1575 "prog_io.m"
                          {
#line 1575 "prog_io.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[3], &parse_tree__prog_io__V_43_43, ((MR_Box) (parse_tree__prog_io__V_87_87)), ((MR_Box) (parse_tree__prog_io__V_39_39)));
                          }
#line 4570 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_43_43 == (MR_Integer) 0);
#line 1575 "prog_io.m"
                          parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1575 "prog_io.m"
                          if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                            *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_43_43;
#line 1575 "prog_io.m"
                          else
#line 1575 "prog_io.m"
                            {
#line 1575 "prog_io.m"
                              {
#line 1575 "prog_io.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[4], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_86_86)), ((MR_Box) (parse_tree__prog_io__V_40_40)));
#line 1575 "prog_io.m"
                                return;
                              }
#line 1575 "prog_io.m"
                            }
#line 1575 "prog_io.m"
                        }
#line 1575 "prog_io.m"
                    }
#line 1575 "prog_io.m"
                }
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 3:
#line 4601 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
            }
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
        case (MR_Integer) 3:
#line 1575 "prog_io.m"
          {
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1575 "prog_io.m"
#line 1575 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1575 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1575 "prog_io.m"
              case (MR_Integer) 0:
#line 4629 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 1:
#line 4635 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 2:
#line 4641 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
              case (MR_Integer) 3:
#line 1575 "prog_io.m"
                {
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1575 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_71_71;

#line 1575 "prog_io.m"
                  {
#line 1575 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_71_71, ((MR_Box) (parse_tree__prog_io__V_85_85)), ((MR_Box) (parse_tree__prog_io__V_68_68)));
                  }
#line 4663 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_71_71 == (MR_Integer) 0);
#line 1575 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1575 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_71_71;
#line 1575 "prog_io.m"
                  else
#line 1575 "prog_io.m"
                    {
#line 1575 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_72_72;

#line 1575 "prog_io.m"
                      {
#line 1575 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], &parse_tree__prog_io__V_72_72, ((MR_Box) (parse_tree__prog_io__V_84_84)), ((MR_Box) (parse_tree__prog_io__V_69_69)));
                      }
#line 4683 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_72_72 == (MR_Integer) 0);
#line 1575 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1575 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_72_72;
#line 1575 "prog_io.m"
                      else
#line 1575 "prog_io.m"
                        {
#line 1575 "prog_io.m"
                          parse_tree__prog_io_item____Compare____item_or_marker_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_83_83, parse_tree__prog_io__V_70_70);
#line 1575 "prog_io.m"
                          return;
                        }
#line 1575 "prog_io.m"
                    }
#line 1575 "prog_io.m"
                }
#line 1575 "prog_io.m"
                break;
#line 1575 "prog_io.m"
            }
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
      }
#line 1575 "prog_io.m"
  }
#line 1575 "prog_io.m"
}

#line 1575 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1575 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1575 "prog_io.m"
{
#line 1575 "prog_io.m"
  {
#line 1575 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1575 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_21 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1575 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_22 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1575 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_21 == parse_tree__prog_io__CastY_22);
#line 1575 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1575 "prog_io.m"
    else
#line 1575 "prog_io.m"
#line 1575 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1575 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1575 "prog_io.m"
        case (MR_Integer) 0:
#line 1575 "prog_io.m"
          {
#line 1575 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1575 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1575 "prog_io.m"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
        case (MR_Integer) 1:
#line 1575 "prog_io.m"
          {
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__1_1), (MR_Integer) 1);
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6;

#line 1575 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1575 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
              {
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);
#line 4782 "parse_tree.prog_io.c"
                {
#line 4784 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__error_util____Unify____error_spec_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_6_6);
                }
#line 1575 "prog_io.m"
              }
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
        case (MR_Integer) 2:
#line 1575 "prog_io.m"
          {
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_26_26;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_27_27;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_28_28;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_29_29;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 3)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_13_13;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_14_14;

#line 1575 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1575 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
              {
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 4836 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4838 "parse_tree.prog_io.c"
                {
#line 4840 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_io__V_7_7)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
                }
#line 1575 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                  {
#line 4847 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 4849 "parse_tree.prog_io.c"
                    {
#line 4851 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_io__V_8_8)), ((MR_Box) (parse_tree__prog_io__V_12_12)));
                    }
#line 1575 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                      {
#line 4858 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_io_scalar_common_1[3];
#line 4860 "parse_tree.prog_io.c"
                        {
#line 4862 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_io__V_9_9)), ((MR_Box) (parse_tree__prog_io__V_13_13)));
                        }
#line 1575 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                          {
#line 4869 "parse_tree.prog_io.c"
                            parse_tree__prog_io__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_io_scalar_common_1[4];
#line 4871 "parse_tree.prog_io.c"
                            {
#line 4873 "parse_tree.prog_io.c"
                              return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_io__V_10_10)), ((MR_Box) (parse_tree__prog_io__V_14_14)));
                            }
#line 1575 "prog_io.m"
                          }
#line 1575 "prog_io.m"
                      }
#line 1575 "prog_io.m"
                  }
#line 1575 "prog_io.m"
              }
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
        case (MR_Integer) 3:
#line 1575 "prog_io.m"
          {
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_23_23;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_24_24;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_18_18;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_19_19;
#line 1575 "prog_io.m"
            MR_Word parse_tree__prog_io__V_20_20;

#line 1575 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1575 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
              {
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1575 "prog_io.m"
                parse_tree__prog_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 4921 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4923 "parse_tree.prog_io.c"
                {
#line 4925 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_23_23, ((MR_Box) (parse_tree__prog_io__V_15_15)), ((MR_Box) (parse_tree__prog_io__V_18_18)));
                }
#line 1575 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1575 "prog_io.m"
                  {
#line 4932 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_24_24 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 4934 "parse_tree.prog_io.c"
                    {
#line 4936 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_24_24, ((MR_Box) (parse_tree__prog_io__V_16_16)), ((MR_Box) (parse_tree__prog_io__V_19_19)));
                    }
#line 1575 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 4941 "parse_tree.prog_io.c"
                      {
#line 4943 "parse_tree.prog_io.c"
                        return parse_tree__prog_io__succeeded = parse_tree__prog_io_item____Unify____item_or_marker_0_0(parse_tree__prog_io__V_17_17, parse_tree__prog_io__V_20_20);
                      }
#line 1575 "prog_io.m"
                  }
#line 1575 "prog_io.m"
              }
#line 1575 "prog_io.m"
          }
#line 1575 "prog_io.m"
          break;
#line 1575 "prog_io.m"
      }
#line 1575 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1575 "prog_io.m"
  }
#line 1575 "prog_io.m"
}

#line 206 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0(
#line 206 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 206 "prog_io.m"
{
#line 206 "prog_io.m"
  {
#line 206 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 206 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 206 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 206 "prog_io.m"
    {
#line 206 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 206 "prog_io.m"
      return;
    }
#line 206 "prog_io.m"
  }
#line 206 "prog_io.m"
}

#line 206 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0(
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 206 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 206 "prog_io.m"
{
#line 5004 "parse_tree.prog_io.c"
  {
#line 5006 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 5009 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 5011 "parse_tree.prog_io.c"
  }
#line 206 "prog_io.m"
}

#line 156 "prog_io.m"
void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(
#line 156 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 156 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 156 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 156 "prog_io.m"
{
#line 156 "prog_io.m"
  {
#line 156 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 156 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 156 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 156 "prog_io.m"
    {
#line 156 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 156 "prog_io.m"
      return;
    }
#line 156 "prog_io.m"
  }
#line 156 "prog_io.m"
}

#line 156 "prog_io.m"
MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(
#line 156 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 156 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 156 "prog_io.m"
{
#line 5057 "parse_tree.prog_io.c"
  {
#line 5059 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 5062 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 5064 "parse_tree.prog_io.c"
  }
#line 156 "prog_io.m"
}

#line 1229 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1229 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1229 "prog_io.m"
{
#line 1229 "prog_io.m"
  {
#line 1229 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1229 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_36 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1229 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_37 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1229 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_36 == parse_tree__prog_io__CastY_37);
#line 1229 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 5093 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1229 "prog_io.m"
    else
#line 1229 "prog_io.m"
#line 1229 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1229 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1229 "prog_io.m"
        case (MR_Integer) 0:
#line 1229 "prog_io.m"
          {
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1229 "prog_io.m"
#line 1229 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1229 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1229 "prog_io.m"
              case (MR_Integer) 0:
#line 1229 "prog_io.m"
                {
#line 1229 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 1229 "prog_io.m"
                  {
#line 1229 "prog_io.m"
                    parse_tree__prog_io____Compare____maybe_lookahead_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_43_43, parse_tree__prog_io__V_5_5);
#line 1229 "prog_io.m"
                    return;
                  }
#line 1229 "prog_io.m"
                }
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
              case (MR_Integer) 1:
#line 5134 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
              case (MR_Integer) 2:
#line 5140 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
            }
#line 1229 "prog_io.m"
          }
#line 1229 "prog_io.m"
          break;
#line 1229 "prog_io.m"
        case (MR_Integer) 1:
#line 1229 "prog_io.m"
          {
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1229 "prog_io.m"
#line 1229 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1229 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1229 "prog_io.m"
              case (MR_Integer) 0:
#line 5166 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
              case (MR_Integer) 1:
#line 1229 "prog_io.m"
                {
#line 1229 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1229 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1229 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_19_19;

#line 1229 "prog_io.m"
                  {
#line 1229 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_19_19, parse_tree__prog_io__V_47_47, parse_tree__prog_io__V_17_17);
                  }
#line 5186 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_19_19 == (MR_Integer) 0);
#line 1229 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1229 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1229 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_19_19;
#line 1229 "prog_io.m"
                  else
#line 1229 "prog_io.m"
                    {
#line 1229 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_46_46, parse_tree__prog_io__V_18_18);
#line 1229 "prog_io.m"
                      return;
                    }
#line 1229 "prog_io.m"
                }
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
              case (MR_Integer) 2:
#line 5209 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
            }
#line 1229 "prog_io.m"
          }
#line 1229 "prog_io.m"
          break;
#line 1229 "prog_io.m"
        case (MR_Integer) 2:
#line 1229 "prog_io.m"
          {
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1229 "prog_io.m"
#line 1229 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1229 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1229 "prog_io.m"
              case (MR_Integer) 0:
#line 5235 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
              case (MR_Integer) 1:
#line 5241 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
              case (MR_Integer) 2:
#line 1229 "prog_io.m"
                {
#line 1229 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1229 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1229 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_35_35;

#line 1229 "prog_io.m"
                  {
#line 1229 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_35_35, parse_tree__prog_io__V_45_45, parse_tree__prog_io__V_33_33);
                  }
#line 5261 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_35_35 == (MR_Integer) 0);
#line 1229 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1229 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1229 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_35_35;
#line 1229 "prog_io.m"
                  else
#line 1229 "prog_io.m"
                    {
#line 1229 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_44_44, parse_tree__prog_io__V_34_34);
#line 1229 "prog_io.m"
                      return;
                    }
#line 1229 "prog_io.m"
                }
#line 1229 "prog_io.m"
                break;
#line 1229 "prog_io.m"
            }
#line 1229 "prog_io.m"
          }
#line 1229 "prog_io.m"
          break;
#line 1229 "prog_io.m"
      }
#line 1229 "prog_io.m"
  }
#line 1229 "prog_io.m"
}

#line 1229 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1229 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1229 "prog_io.m"
{
#line 1229 "prog_io.m"
  {
#line 1229 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1229 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1229 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1229 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1229 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1229 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1229 "prog_io.m"
    else
#line 1229 "prog_io.m"
#line 1229 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1229 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1229 "prog_io.m"
        case (MR_Integer) 0:
#line 1229 "prog_io.m"
          {
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_4_4;

#line 1229 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1229 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1229 "prog_io.m"
              {
#line 1229 "prog_io.m"
                parse_tree__prog_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 5343 "parse_tree.prog_io.c"
                {
#line 5345 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_lookahead_0_0(parse_tree__prog_io__V_3_3, parse_tree__prog_io__V_4_4);
                }
#line 1229 "prog_io.m"
              }
#line 1229 "prog_io.m"
          }
#line 1229 "prog_io.m"
          break;
#line 1229 "prog_io.m"
        case (MR_Integer) 1:
#line 1229 "prog_io.m"
          {
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7;
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 1229 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1229 "prog_io.m"
              {
#line 1229 "prog_io.m"
                parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1229 "prog_io.m"
                parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5377 "parse_tree.prog_io.c"
                {
#line 5379 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_7_7);
                }
#line 1229 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 5384 "parse_tree.prog_io.c"
                  {
#line 5386 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_6_6, parse_tree__prog_io__V_8_8);
                  }
#line 1229 "prog_io.m"
              }
#line 1229 "prog_io.m"
          }
#line 1229 "prog_io.m"
          break;
#line 1229 "prog_io.m"
        case (MR_Integer) 2:
#line 1229 "prog_io.m"
          {
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1229 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1229 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1229 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1229 "prog_io.m"
              {
#line 1229 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1229 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5418 "parse_tree.prog_io.c"
                {
#line 5420 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_9_9, parse_tree__prog_io__V_11_11);
                }
#line 1229 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 5425 "parse_tree.prog_io.c"
                  {
#line 5427 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_10_10, parse_tree__prog_io__V_12_12);
                  }
#line 1229 "prog_io.m"
              }
#line 1229 "prog_io.m"
          }
#line 1229 "prog_io.m"
          break;
#line 1229 "prog_io.m"
      }
#line 1229 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1229 "prog_io.m"
  }
#line 1229 "prog_io.m"
}

#line 1552 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1552 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1552 "prog_io.m"
{
#line 1552 "prog_io.m"
  {
#line 1552 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1552 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1552 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1552 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1552 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 5469 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1552 "prog_io.m"
    else
#line 1552 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1552 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1552 "prog_io.m"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1552 "prog_io.m"
      else
#line 5481 "parse_tree.prog_io.c"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1552 "prog_io.m"
    else
#line 1552 "prog_io.m"
      {
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1552 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5494 "parse_tree.prog_io.c"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1552 "prog_io.m"
        else
#line 1552 "prog_io.m"
          {
#line 1552 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1552 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1552 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1552 "prog_io.m"
            {
#line 1552 "prog_io.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_12_12, ((MR_Box) (parse_tree__prog_io__V_18_18)), ((MR_Box) (parse_tree__prog_io__V_10_10)));
            }
#line 5512 "parse_tree.prog_io.c"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_12_12 == (MR_Integer) 0);
#line 1552 "prog_io.m"
            parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1552 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1552 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_12_12;
#line 1552 "prog_io.m"
            else
#line 1552 "prog_io.m"
              {
#line 1552 "prog_io.m"
                {
#line 1552 "prog_io.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_17_17)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
#line 1552 "prog_io.m"
                  return;
                }
#line 1552 "prog_io.m"
              }
#line 1552 "prog_io.m"
          }
#line 1552 "prog_io.m"
      }
#line 1552 "prog_io.m"
  }
#line 1552 "prog_io.m"
}

#line 1552 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1552 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1552 "prog_io.m"
{
#line 1552 "prog_io.m"
  {
#line 1552 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1552 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1552 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1552 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 1552 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1552 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1552 "prog_io.m"
    else
#line 1552 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1552 "prog_io.m"
      {
#line 1552 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1552 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1552 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1552 "prog_io.m"
      }
#line 1552 "prog_io.m"
    else
#line 1552 "prog_io.m"
      {
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_11_11;
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_12_12;
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__V_7_7;
#line 1552 "prog_io.m"
        MR_Word parse_tree__prog_io__V_8_8;

#line 1552 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1552 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1552 "prog_io.m"
          {
#line 1552 "prog_io.m"
            parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1552 "prog_io.m"
            parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5608 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 5610 "parse_tree.prog_io.c"
            {
#line 5612 "parse_tree.prog_io.c"
              parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_11_11, ((MR_Box) (parse_tree__prog_io__V_5_5)), ((MR_Box) (parse_tree__prog_io__V_7_7)));
            }
#line 1552 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1552 "prog_io.m"
              {
#line 5619 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 5621 "parse_tree.prog_io.c"
                {
#line 5623 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io__V_6_6)), ((MR_Box) (parse_tree__prog_io__V_8_8)));
                }
#line 1552 "prog_io.m"
              }
#line 1552 "prog_io.m"
          }
#line 1552 "prog_io.m"
      }
#line 1552 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1552 "prog_io.m"
  }
#line 1552 "prog_io.m"
}

#line 310 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 310 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 310 "prog_io.m"
{
#line 310 "prog_io.m"
  {
#line 310 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 310 "prog_io.m"
    {
#line 310 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 310 "prog_io.m"
      return;
    }
#line 310 "prog_io.m"
  }
#line 310 "prog_io.m"
}

#line 310 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 310 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 310 "prog_io.m"
{
#line 310 "prog_io.m"
  {
#line 310 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 310 "prog_io.m"
    {
#line 310 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 310 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 310 "prog_io.m"
  }
#line 310 "prog_io.m"
}

#line 1691 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1691 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1691 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20)
#line 1691 "prog_io.m"
{
#line 1695 "prog_io.m"
  {
#line 1695 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_11;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__Error_12;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_16;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__V_44_44;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__V_46_46;
#line 1695 "prog_io.m"
    MR_Word parse_tree__prog_io__V_47_47;

#line 1696 "prog_io.m"
    {
#line 1696 "prog_io.m"
      parse_tree__prog_io__Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_8);
    }
#line 1702 "prog_io.m"
#line 1702 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__FileKind_7)) {
#line 1702 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1702 "prog_io.m"
      case (MR_Integer) 0:
#line 1698 "prog_io.m"
        {
#line 1699 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 4;
#line 1700 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[75]);
#line 1698 "prog_io.m"
        }
#line 1702 "prog_io.m"
        break;
#line 1702 "prog_io.m"
      case (MR_Integer) 1:
#line 1703 "prog_io.m"
        {
#line 1704 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1705 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[69]);
#line 1703 "prog_io.m"
        }
#line 1702 "prog_io.m"
        break;
#line 1702 "prog_io.m"
      case (MR_Integer) 2:
#line 1707 "prog_io.m"
        {
#line 1708 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1709 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[71]);
#line 1707 "prog_io.m"
        }
#line 1702 "prog_io.m"
        break;
#line 1702 "prog_io.m"
    }
#line 1712 "prog_io.m"
    {
#line 1712 "prog_io.m"
      parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1712 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1712 "prog_io.m"
    }
#line 1712 "prog_io.m"
    {
#line 1712 "prog_io.m"
      parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1712 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1712 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1712 "prog_io.m"
    }
#line 1712 "prog_io.m"
    {
#line 1712 "prog_io.m"
      parse_tree__prog_io__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1712 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Context_11));
#line 1712 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1712 "prog_io.m"
    }
#line 1712 "prog_io.m"
    {
#line 1712 "prog_io.m"
      parse_tree__prog_io__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1712 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 1712 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1712 "prog_io.m"
    }
#line 1711 "prog_io.m"
    {
#line 1711 "prog_io.m"
      parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1711 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1711 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1711 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 1711 "prog_io.m"
    }
#line 1713 "prog_io.m"
    {
#line 1713 "prog_io.m"
      MR_Word base;
#line 1713 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1713 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_16));
#line 1713 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1713 "prog_io.m"
    }
#line 1714 "prog_io.m"
    {
#line 1714 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) (parse_tree__prog_io__Error_12)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_19, parse_tree__prog_io__STATE_VARIABLE_Errors_20);
#line 1714 "prog_io.m"
      return;
    }
#line 1695 "prog_io.m"
  }
#line 1691 "prog_io.m"
}

#line 1665 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1665 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1665 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1665 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1665 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33)
#line 1665 "prog_io.m"
{
#line 1671 "prog_io.m"
  {
#line 1671 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1671 "prog_io.m"
    MR_Word parse_tree__prog_io__IOMResult_20;
#line 1672 "prog_io.m"
    MR_Word parse_tree__prog_io___SeqNumCounter_21;

#line 1672 "prog_io.m"
    {
#line 1672 "prog_io.m"
      parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__FinalLookAhead_14, parse_tree__prog_io__ModuleName_12, parse_tree__prog_io__SourceFileName_15, &parse_tree__prog_io__IOMResult_20, parse_tree__prog_io__SeqNumCounter0_16, &parse_tree__prog_io___SeqNumCounter_21);
    }
#line 1676 "prog_io.m"
#line 1676 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__IOMResult_20)) {
#line 1676 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1676 "prog_io.m"
      case (MR_Integer) 0:
#line 1675 "prog_io.m"
        {
#line 1675 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_30;
#line 1675 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_33 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_32;
#line 1675 "prog_io.m"
        }
#line 1676 "prog_io.m"
        break;
#line 1676 "prog_io.m"
      case (MR_Integer) 1:
#line 1677 "prog_io.m"
        {
#line 1677 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpec_22 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__IOMResult_20), (MR_Integer) 1);

#line 1678 "prog_io.m"
          {
#line 1678 "prog_io.m"
            MR_Word base;
#line 1678 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = base;
#line 1678 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_22));
#line 1678 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_30));
#line 1678 "prog_io.m"
          }
#line 1679 "prog_io.m"
          {
#line 1679 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1679 "prog_io.m"
            return;
          }
#line 1677 "prog_io.m"
        }
#line 1676 "prog_io.m"
        break;
#line 1676 "prog_io.m"
      case (MR_Integer) 2:
#line 1682 "prog_io.m"
        {
#line 1682 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1682 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpecs_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));
#line 1682 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemErrors_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 3)));
#line 1682 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_39_39;
#line 1682 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_40_40;
#line 1681 "prog_io.m"
          MR_Word parse_tree__prog_io___VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));

#line 1683 "prog_io.m"
          {
#line 1683 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_25, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30);
          }
#line 1684 "prog_io.m"
          {
#line 1684 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Errors_40_40 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__ItemErrors_26);
          }
#line 1685 "prog_io.m"
          {
#line 1685 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__Term_24, parse_tree__prog_io__STATE_VARIABLE_Specs_39_39, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_40_40, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1685 "prog_io.m"
            return;
          }
#line 1682 "prog_io.m"
        }
#line 1676 "prog_io.m"
        break;
#line 1676 "prog_io.m"
      case (MR_Integer) 3:
#line 1687 "prog_io.m"
        {
#line 1687 "prog_io.m"
          MR_Word parse_tree__prog_io__IOMTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1687 "prog_io.m"
          MR_Word parse_tree__prog_io___IOMVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));
#line 1687 "prog_io.m"
          MR_Word parse_tree__prog_io___IOM_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));

#line 1688 "prog_io.m"
          {
#line 1688 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__IOMTerm_28, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1688 "prog_io.m"
            return;
          }
#line 1687 "prog_io.m"
        }
#line 1676 "prog_io.m"
        break;
#line 1676 "prog_io.m"
    }
#line 1671 "prog_io.m"
  }
#line 1665 "prog_io.m"
}

#line 1637 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1637 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1637 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1637 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19)
#line 1637 "prog_io.m"
{
#line 1642 "prog_io.m"
  {
#line 1642 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__Msgs_14;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_15;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_22_22;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_28_28;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_30_30;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_38_38;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_41_41;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_42_42;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_49_49;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_53_53;
#line 1642 "prog_io.m"
    MR_Word parse_tree__prog_io__V_54_54;

#line 1645 "prog_io.m"
    {
#line 1645 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io__Expected_9));
#line 1645 "prog_io.m"
    }
#line 1646 "prog_io.m"
    {
#line 1646 "prog_io.m"
      parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1646 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io__Actual_10));
#line 1646 "prog_io.m"
    }
#line 1646 "prog_io.m"
    {
#line 1646 "prog_io.m"
      parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1646 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1646 "prog_io.m"
    }
#line 1646 "prog_io.m"
    {
#line 1646 "prog_io.m"
      parse_tree__prog_io__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[80])));
#line 1646 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1646 "prog_io.m"
    }
#line 1645 "prog_io.m"
    {
#line 1645 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[79])));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1645 "prog_io.m"
    }
#line 1645 "prog_io.m"
    {
#line 1645 "prog_io.m"
      parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1645 "prog_io.m"
    }
#line 1645 "prog_io.m"
    {
#line 1645 "prog_io.m"
      parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[78])));
#line 1645 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1645 "prog_io.m"
    }
#line 1644 "prog_io.m"
    {
#line 1644 "prog_io.m"
      parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1644 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1644 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1644 "prog_io.m"
    }
#line 1644 "prog_io.m"
    {
#line 1644 "prog_io.m"
      parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1644 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[99])));
#line 1644 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1644 "prog_io.m"
    }
#line 1644 "prog_io.m"
    {
#line 1644 "prog_io.m"
      parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1644 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[98])));
#line 1644 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1644 "prog_io.m"
    }
#line 1643 "prog_io.m"
    {
#line 1643 "prog_io.m"
      parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[97])));
#line 1643 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 1) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1643 "prog_io.m"
    }
#line 1647 "prog_io.m"
    {
#line 1647 "prog_io.m"
      parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1647 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1647 "prog_io.m"
    }
#line 1647 "prog_io.m"
    {
#line 1647 "prog_io.m"
      parse_tree__prog_io__Msgs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1647 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1647 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1647 "prog_io.m"
    }
#line 1649 "prog_io.m"
    {
#line 1649 "prog_io.m"
      parse_tree__prog_io__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1649 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_8));
#line 1649 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io__Msgs_14));
#line 1649 "prog_io.m"
    }
#line 1649 "prog_io.m"
    {
#line 1649 "prog_io.m"
      parse_tree__prog_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1649 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io__V_54_54));
#line 1649 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1649 "prog_io.m"
    }
#line 1648 "prog_io.m"
    {
#line 1648 "prog_io.m"
      parse_tree__prog_io__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1648 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1648 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1648 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_53_53));
#line 1648 "prog_io.m"
    }
#line 1650 "prog_io.m"
    {
#line 1650 "prog_io.m"
      MR_Word base;
#line 1650 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_17 = base;
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_15));
#line 1650 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_16));
#line 1650 "prog_io.m"
    }
#line 1651 "prog_io.m"
    {
#line 1651 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_18, parse_tree__prog_io__STATE_VARIABLE_Errors_19);
#line 1651 "prog_io.m"
      return;
    }
#line 1642 "prog_io.m"
  }
#line 1637 "prog_io.m"
}

#line 1623 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1623 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1623 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1623 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1623 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1623 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15)
#line 1623 "prog_io.m"
{
#line 1627 "prog_io.m"
  {
#line 1627 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1627 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_11;
#line 1627 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1627 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;

#line 1633 "prog_io.m"
    {
#line 1633 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1633 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_6));
#line 1633 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[96])));
#line 1633 "prog_io.m"
    }
#line 1633 "prog_io.m"
    {
#line 1633 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1633 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1633 "prog_io.m"
    }
#line 1632 "prog_io.m"
    {
#line 1632 "prog_io.m"
      parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1632 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1632 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1632 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1632 "prog_io.m"
    }
#line 1634 "prog_io.m"
    {
#line 1634 "prog_io.m"
      MR_Word base;
#line 1634 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1634 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_13 = base;
#line 1634 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 1634 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_12));
#line 1634 "prog_io.m"
    }
#line 1635 "prog_io.m"
    {
#line 1635 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_14, parse_tree__prog_io__STATE_VARIABLE_Errors_15);
#line 1635 "prog_io.m"
      return;
    }
#line 1627 "prog_io.m"
  }
#line 1623 "prog_io.m"
}

#line 1582 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1582 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1582 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1582 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1582 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1582 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1582 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11)
#line 1582 "prog_io.m"
{
#line 1590 "prog_io.m"
  {
#line 1590 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1590 "prog_io.m"
#line 1590 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_9)) {
#line 1590 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1590 "prog_io.m"
      case (MR_Integer) 0:
#line 1590 "prog_io.m"
        {
#line 1591 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1590 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1590 "prog_io.m"
        }
#line 1590 "prog_io.m"
        break;
#line 1590 "prog_io.m"
      case (MR_Integer) 1:
#line 1593 "prog_io.m"
        {
#line 1593 "prog_io.m"
          MR_String parse_tree__prog_io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1593 "prog_io.m"
          MR_Integer parse_tree__prog_io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__Context_15;
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_16;
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__V_22_22;
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__V_31_31;
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__V_32_32;
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__V_33_33;
#line 1593 "prog_io.m"
          MR_Word parse_tree__prog_io__V_34_34;

#line 1595 "prog_io.m"
          {
#line 1595 "prog_io.m"
            parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1595 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_12));
#line 1595 "prog_io.m"
          }
#line 1595 "prog_io.m"
          {
#line 1595 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1595 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1595 "prog_io.m"
          }
#line 1596 "prog_io.m"
          {
#line 1596 "prog_io.m"
            parse_tree__prog_io__Context_15 = mercury__term__context_init_2_f_0(parse_tree__prog_io__FileName_8, parse_tree__prog_io__LineNumber_13);
          }
#line 1598 "prog_io.m"
          {
#line 1598 "prog_io.m"
            parse_tree__prog_io__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 1598 "prog_io.m"
          }
#line 1598 "prog_io.m"
          {
#line 1598 "prog_io.m"
            parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1598 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1598 "prog_io.m"
          }
#line 1598 "prog_io.m"
          {
#line 1598 "prog_io.m"
            parse_tree__prog_io__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 1598 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1598 "prog_io.m"
          }
#line 1598 "prog_io.m"
          {
#line 1598 "prog_io.m"
            parse_tree__prog_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1598 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1598 "prog_io.m"
          }
#line 1597 "prog_io.m"
          {
#line 1597 "prog_io.m"
            parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1597 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1597 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1597 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_31_31));
#line 1597 "prog_io.m"
          }
#line 1599 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_16);
#line 1593 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1593 "prog_io.m"
        }
#line 1590 "prog_io.m"
        break;
#line 1590 "prog_io.m"
      case (MR_Integer) 2:
#line 1601 "prog_io.m"
        {
#line 1601 "prog_io.m"
          MR_Word parse_tree__prog_io__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1601 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1601 "prog_io.m"
          MR_Integer parse_tree__prog_io__SeqNum_44;
#line 1601 "prog_io.m"
          MR_Word parse_tree__prog_io__MaybeItemOrMarker_45;

#line 1610 "prog_io.m"
          {
#line 1610 "prog_io.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_44, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20);
          }
#line 1611 "prog_io.m"
          {
#line 1611 "prog_io.m"
            parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_7, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__Term_18, parse_tree__prog_io__SeqNum_44, &parse_tree__prog_io__MaybeItemOrMarker_45);
          }
#line 1615 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_45)) == (MR_mktag((MR_Integer) 0))))
#line 1616 "prog_io.m"
            {
#line 1616 "prog_io.m"
              MR_Word parse_tree__prog_io__Specs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));
#line 1616 "prog_io.m"
              MR_Word parse_tree__prog_io__V_49_49;

#line 1618 "prog_io.m"
              {
#line 1618 "prog_io.m"
                parse_tree__prog_io__V_49_49 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
              }
#line 1617 "prog_io.m"
              {
#line 1617 "prog_io.m"
                MR_Word base;
#line 1617 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1617 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1617 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1617 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1617 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_47));
#line 1617 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1617 "prog_io.m"
              }
#line 1616 "prog_io.m"
            }
#line 1615 "prog_io.m"
          else
#line 1613 "prog_io.m"
            {
#line 1613 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemOrMarker_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));

#line 1614 "prog_io.m"
              {
#line 1614 "prog_io.m"
                MR_Word base;
#line 1614 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1614 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1614 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1614 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1614 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_46));
#line 1614 "prog_io.m"
              }
#line 1613 "prog_io.m"
            }
#line 1601 "prog_io.m"
        }
#line 1590 "prog_io.m"
        break;
#line 1590 "prog_io.m"
    }
#line 1590 "prog_io.m"
  }
#line 1582 "prog_io.m"
}

#line 1556 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1556 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1556 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1556 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1556 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1556 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1556 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19)
#line 1556 "prog_io.m"
{
#line 1563 "prog_io.m"
  {
#line 1563 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1563 "prog_io.m"
    if ((parse_tree__prog_io__InitLookAhead_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1563 "prog_io.m"
      {
#line 1563 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadTermResult_15;

#line 1564 "prog_io.m"
        {
#line 1564 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__SourceFileName_11, &parse_tree__prog_io__ReadTermResult_15);
        }
#line 1590 "prog_io.m"
#line 1590 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_15)) {
#line 1590 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1590 "prog_io.m"
          case (MR_Integer) 0:
#line 1590 "prog_io.m"
            {
#line 1591 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1590 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1590 "prog_io.m"
            }
#line 1590 "prog_io.m"
            break;
#line 1590 "prog_io.m"
          case (MR_Integer) 1:
#line 1593 "prog_io.m"
            {
#line 1593 "prog_io.m"
              MR_String parse_tree__prog_io__ErrorMsg_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1593 "prog_io.m"
              MR_Integer parse_tree__prog_io__LineNumber_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_50;
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_51;
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_52;
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__V_56_56;
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__V_65_65;
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__V_66_66;
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__V_67_67;
#line 1593 "prog_io.m"
              MR_Word parse_tree__prog_io__V_68_68;

#line 1595 "prog_io.m"
              {
#line 1595 "prog_io.m"
                parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1595 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_48));
#line 1595 "prog_io.m"
              }
#line 1595 "prog_io.m"
              {
#line 1595 "prog_io.m"
                parse_tree__prog_io__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1595 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1595 "prog_io.m"
              }
#line 1596 "prog_io.m"
              {
#line 1596 "prog_io.m"
                parse_tree__prog_io__Context_51 = mercury__term__context_init_2_f_0(parse_tree__prog_io__SourceFileName_11, parse_tree__prog_io__LineNumber_49);
              }
#line 1598 "prog_io.m"
              {
#line 1598 "prog_io.m"
                parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_50));
#line 1598 "prog_io.m"
              }
#line 1598 "prog_io.m"
              {
#line 1598 "prog_io.m"
                parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1598 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1598 "prog_io.m"
              }
#line 1598 "prog_io.m"
              {
#line 1598 "prog_io.m"
                parse_tree__prog_io__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io__Context_51));
#line 1598 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1598 "prog_io.m"
              }
#line 1598 "prog_io.m"
              {
#line 1598 "prog_io.m"
                parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io__V_66_66));
#line 1598 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1598 "prog_io.m"
              }
#line 1597 "prog_io.m"
              {
#line 1597 "prog_io.m"
                parse_tree__prog_io__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1597 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1597 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1597 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 2) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1597 "prog_io.m"
              }
#line 1599 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_52);
#line 1593 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1593 "prog_io.m"
            }
#line 1590 "prog_io.m"
            break;
#line 1590 "prog_io.m"
          case (MR_Integer) 2:
#line 1601 "prog_io.m"
            {
#line 1601 "prog_io.m"
              MR_Word parse_tree__prog_io__VarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1601 "prog_io.m"
              MR_Word parse_tree__prog_io__Term_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1601 "prog_io.m"
              MR_Integer parse_tree__prog_io__SeqNum_78;
#line 1601 "prog_io.m"
              MR_Word parse_tree__prog_io__MaybeItemOrMarker_79;

#line 1610 "prog_io.m"
              {
#line 1610 "prog_io.m"
                mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_78, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
              }
#line 1611 "prog_io.m"
              {
#line 1611 "prog_io.m"
                parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__VarSet_53, parse_tree__prog_io__Term_54, parse_tree__prog_io__SeqNum_78, &parse_tree__prog_io__MaybeItemOrMarker_79);
              }
#line 1615 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_79)) == (MR_mktag((MR_Integer) 0))))
#line 1616 "prog_io.m"
                {
#line 1616 "prog_io.m"
                  MR_Word parse_tree__prog_io__Specs_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));
#line 1616 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_83_83;

#line 1618 "prog_io.m"
                  {
#line 1618 "prog_io.m"
                    parse_tree__prog_io__V_83_83 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
                  }
#line 1617 "prog_io.m"
                  {
#line 1617 "prog_io.m"
                    MR_Word base;
#line 1617 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1617 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1617 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1617 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1617 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_81));
#line 1617 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1617 "prog_io.m"
                  }
#line 1616 "prog_io.m"
                }
#line 1615 "prog_io.m"
              else
#line 1613 "prog_io.m"
                {
#line 1613 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemOrMarker_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));

#line 1614 "prog_io.m"
                  {
#line 1614 "prog_io.m"
                    MR_Word base;
#line 1614 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1614 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1614 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1614 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1614 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_80));
#line 1614 "prog_io.m"
                  }
#line 1613 "prog_io.m"
                }
#line 1601 "prog_io.m"
            }
#line 1590 "prog_io.m"
            break;
#line 1590 "prog_io.m"
        }
#line 1563 "prog_io.m"
      }
#line 1563 "prog_io.m"
    else
#line 1568 "prog_io.m"
      {
#line 1568 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 0)));
#line 1568 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 1)));
#line 1568 "prog_io.m"
        MR_Integer parse_tree__prog_io__SeqNum_33;
#line 1568 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeItemOrMarker_34;

#line 1610 "prog_io.m"
        {
#line 1610 "prog_io.m"
          mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
        }
#line 1611 "prog_io.m"
        {
#line 1611 "prog_io.m"
          parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__LookAheadVarSet_16, parse_tree__prog_io__LookAheadTerm_17, parse_tree__prog_io__SeqNum_33, &parse_tree__prog_io__MaybeItemOrMarker_34);
        }
#line 1615 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_34)) == (MR_mktag((MR_Integer) 0))))
#line 1616 "prog_io.m"
          {
#line 1616 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));
#line 1616 "prog_io.m"
            MR_Word parse_tree__prog_io__V_38_38;

#line 1618 "prog_io.m"
            {
#line 1618 "prog_io.m"
              parse_tree__prog_io__V_38_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
            }
#line 1617 "prog_io.m"
            {
#line 1617 "prog_io.m"
              MR_Word base;
#line 1617 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1617 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1617 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1617 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1617 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_36));
#line 1617 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1617 "prog_io.m"
            }
#line 1616 "prog_io.m"
          }
#line 1615 "prog_io.m"
        else
#line 1613 "prog_io.m"
          {
#line 1613 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemOrMarker_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));

#line 1614 "prog_io.m"
            {
#line 1614 "prog_io.m"
              MR_Word base;
#line 1614 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1614 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1614 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1614 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1614 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_35));
#line 1614 "prog_io.m"
            }
#line 1613 "prog_io.m"
          }
#line 1568 "prog_io.m"
      }
#line 1563 "prog_io.m"
  }
#line 1556 "prog_io.m"
}

#line 1507 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1507 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1507 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1507 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1507 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29)
#line 1507 "prog_io.m"
{
#line 1513 "prog_io.m"
  {
#line 1513 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1513 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeWarning_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 0)));
#line 1513 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 1)));
#line 1513 "prog_io.m"
    MR_Integer parse_tree__prog_io__NothingSeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 2)));

#line 1519 "prog_io.m"
    if ((parse_tree__prog_io__MaybeWarning_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1516 "prog_io.m"
      {
#line 1518 "prog_io.m"
        {
#line 1518 "prog_io.m"
          MR_Word base;
#line 1518 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1518 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1518 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__ItemNothingInfo_9));
#line 1518 "prog_io.m"
        }
#line 1516 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1516 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1516 "prog_io.m"
      }
#line 1519 "prog_io.m"
    else
#line 1520 "prog_io.m"
      {
#line 1520 "prog_io.m"
        MR_Word parse_tree__prog_io__Warning_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWarning_13, (MR_Integer) 0)));
#line 1520 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeOption_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 0)));
#line 1520 "prog_io.m"
        MR_String parse_tree__prog_io__Msg_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 1)));
#line 1520 "prog_io.m"
        MR_Word parse_tree__prog_io__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 2)));
#line 1520 "prog_io.m"
        MR_Word parse_tree__prog_io__Warn_21;
#line 1520 "prog_io.m"
        MR_Word parse_tree__prog_io__NoWarnItemNothingInfo_25;

#line 1525 "prog_io.m"
        if ((parse_tree__prog_io__MaybeOption_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1527 "prog_io.m"
          parse_tree__prog_io__Warn_21 = (MR_Integer) 1;
#line 1525 "prog_io.m"
        else
#line 1523 "prog_io.m"
          {
#line 1523 "prog_io.m"
            MR_Word parse_tree__prog_io__Option_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOption_17, (MR_Integer) 0)));

#line 1524 "prog_io.m"
            {
#line 1524 "prog_io.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__Option_20, &parse_tree__prog_io__Warn_21);
            }
#line 1523 "prog_io.m"
          }
#line 1543 "prog_io.m"
#line 1543 "prog_io.m"
        switch (parse_tree__prog_io__Warn_21) {
#line 1543 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1543 "prog_io.m"
          case (MR_Integer) 0:
#line 1544 "prog_io.m"
            {
#line 1544 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1544 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1544 "prog_io.m"
            }
#line 1543 "prog_io.m"
            break;
#line 1543 "prog_io.m"
          case (MR_Integer) 1:
#line 1530 "prog_io.m"
            {
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_22;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_23;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__Halt_24;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__V_32_32;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__V_33_33;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__V_39_39;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__V_40_40;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__V_41_41;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__V_42_42;
#line 1530 "prog_io.m"
              MR_Word parse_tree__prog_io__V_43_43;

#line 1531 "prog_io.m"
              {
#line 1531 "prog_io.m"
                parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1531 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__Msg_18));
#line 1531 "prog_io.m"
              }
#line 1531 "prog_io.m"
              {
#line 1531 "prog_io.m"
                parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1531 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])));
#line 1531 "prog_io.m"
              }
#line 1531 "prog_io.m"
              {
#line 1531 "prog_io.m"
                parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[95])));
#line 1531 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1531 "prog_io.m"
              }
#line 1533 "prog_io.m"
              {
#line 1533 "prog_io.m"
                parse_tree__prog_io__V_41_41 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_19);
              }
#line 1533 "prog_io.m"
              {
#line 1533 "prog_io.m"
                parse_tree__prog_io__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1533 "prog_io.m"
              }
#line 1533 "prog_io.m"
              {
#line 1533 "prog_io.m"
                parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1533 "prog_io.m"
              }
#line 1533 "prog_io.m"
              {
#line 1533 "prog_io.m"
                parse_tree__prog_io__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1533 "prog_io.m"
              }
#line 1533 "prog_io.m"
              {
#line 1533 "prog_io.m"
                parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 1533 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1533 "prog_io.m"
              }
#line 1532 "prog_io.m"
              {
#line 1532 "prog_io.m"
                parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1532 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1532 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1532 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 1532 "prog_io.m"
              }
#line 1534 "prog_io.m"
              {
#line 1534 "prog_io.m"
                MR_Word base;
#line 1534 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = base;
#line 1534 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1534 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_26));
#line 1534 "prog_io.m"
              }
#line 1536 "prog_io.m"
              {
#line 1536 "prog_io.m"
                libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, (MR_Integer) 2, &parse_tree__prog_io__Halt_24);
              }
#line 1540 "prog_io.m"
#line 1540 "prog_io.m"
              switch (parse_tree__prog_io__Halt_24) {
#line 1540 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1540 "prog_io.m"
                case (MR_Integer) 0:
#line 1541 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1540 "prog_io.m"
                  break;
#line 1540 "prog_io.m"
                case (MR_Integer) 1:
#line 1538 "prog_io.m"
                  {
#line 1539 "prog_io.m"
                    {
#line 1539 "prog_io.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 10)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_28, parse_tree__prog_io__STATE_VARIABLE_Errors_29);
                    }
#line 1538 "prog_io.m"
                  }
#line 1540 "prog_io.m"
                  break;
#line 1540 "prog_io.m"
              }
#line 1530 "prog_io.m"
            }
#line 1543 "prog_io.m"
            break;
#line 1543 "prog_io.m"
        }
#line 1546 "prog_io.m"
        {
#line 1546 "prog_io.m"
          parse_tree__prog_io__NoWarnItemNothingInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1546 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1546 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1546 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 2) = ((MR_Box) (parse_tree__prog_io__NothingSeqNum_15));
#line 1546 "prog_io.m"
        }
#line 1547 "prog_io.m"
        {
#line 1547 "prog_io.m"
          MR_Word base;
#line 1547 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1547 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1547 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__NoWarnItemNothingInfo_25));
#line 1547 "prog_io.m"
        }
#line 1520 "prog_io.m"
      }
#line 1513 "prog_io.m"
  }
#line 1507 "prog_io.m"
}

#line 1467 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__record_version_numbers_6_p_0(
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__MVN_7,
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_8,
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15,
#line 1467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_16,
#line 1467 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18)
#line 1467 "prog_io.m"
{
#line 1473 "prog_io.m"
  {
#line 1473 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1473 "prog_io.m"
#line 1473 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15)) {
#line 1473 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1473 "prog_io.m"
      case (MR_Integer) 0:
#line 1473 "prog_io.m"
#line 1473 "prog_io.m"
        switch (MR_unmkbody(parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15)) {
#line 1473 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1473 "prog_io.m"
          case (MR_Integer) 0:
#line 1486 "prog_io.m"
            {
#line 1486 "prog_io.m"
              MR_Word parse_tree__prog_io__V_33_33;
#line 1486 "prog_io.m"
              MR_Word parse_tree__prog_io__V_39_39;
#line 1486 "prog_io.m"
              MR_Word parse_tree__prog_io__Msg_67;
#line 1486 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_68;

#line 1491 "prog_io.m"
              {
#line 1491 "prog_io.m"
                parse_tree__prog_io__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_8);
              }
#line 1491 "prog_io.m"
              {
#line 1491 "prog_io.m"
                parse_tree__prog_io__Msg_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_67, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1491 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[94])));
#line 1491 "prog_io.m"
              }
#line 1493 "prog_io.m"
              {
#line 1493 "prog_io.m"
                parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__Msg_67));
#line 1493 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "prog_io.m"
              }
#line 1493 "prog_io.m"
              {
#line 1493 "prog_io.m"
                parse_tree__prog_io__Spec_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 2) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 1493 "prog_io.m"
              }
#line 1494 "prog_io.m"
              {
#line 1494 "prog_io.m"
                MR_Word base;
#line 1494 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1494 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_68));
#line 1494 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1494 "prog_io.m"
              }
#line 1486 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15;
#line 1486 "prog_io.m"
            }
#line 1473 "prog_io.m"
            break;
#line 1473 "prog_io.m"
          case (MR_Integer) 1:
#line 1473 "prog_io.m"
            {
#line 1474 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__MVN_7);
#line 1473 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_17;
#line 1473 "prog_io.m"
            }
#line 1473 "prog_io.m"
            break;
#line 1473 "prog_io.m"
        }
#line 1473 "prog_io.m"
        break;
#line 1473 "prog_io.m"
      case (MR_Integer) 1:
#line 1476 "prog_io.m"
        {
#line 1476 "prog_io.m"
          MR_Word parse_tree__prog_io__Msg_13;
#line 1476 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_14;
#line 1476 "prog_io.m"
          MR_Word parse_tree__prog_io__V_56_56;
#line 1476 "prog_io.m"
          MR_Word parse_tree__prog_io__V_62_62;

#line 1481 "prog_io.m"
          {
#line 1481 "prog_io.m"
            parse_tree__prog_io__V_56_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_8);
          }
#line 1481 "prog_io.m"
          {
#line 1481 "prog_io.m"
            parse_tree__prog_io__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_13, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1481 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[93])));
#line 1481 "prog_io.m"
          }
#line 1483 "prog_io.m"
          {
#line 1483 "prog_io.m"
            parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__Msg_13));
#line 1483 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1483 "prog_io.m"
          }
#line 1483 "prog_io.m"
          {
#line 1483 "prog_io.m"
            parse_tree__prog_io__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1483 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1483 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1483 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 1483 "prog_io.m"
          }
#line 1484 "prog_io.m"
          {
#line 1484 "prog_io.m"
            MR_Word base;
#line 1484 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1484 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_14));
#line 1484 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1484 "prog_io.m"
          }
#line 1476 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15;
#line 1476 "prog_io.m"
        }
#line 1473 "prog_io.m"
        break;
#line 1473 "prog_io.m"
    }
#line 1473 "prog_io.m"
  }
#line 1467 "prog_io.m"
}

#line 1384 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_24_p_0(
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_25,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_26,
#line 1384 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67,
#line 1384 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_28,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_29,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_70,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_72,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76,
#line 1384 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77,
#line 1384 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_81,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_82,
#line 1384 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_83,
#line 1384 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_84)
#line 1384 "prog_io.m"
{
#line 1399 "prog_io.m"
  while (MR_TRUE)
#line 1399 "prog_io.m"
    {
#line 1399 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1399 "prog_io.m"
      {
#line 1399 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 <= (MR_Integer) 0);

#line 1399 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1398 "prog_io.m"
          {
#line 1398 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_29 = parse_tree__prog_io__InitLookAhead_28;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_InclsCord_72 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_70 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69;
#line 1398 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67;
#line 1398 "prog_io.m"
          }
#line 1399 "prog_io.m"
        else
#line 1401 "prog_io.m"
          {
#line 1401 "prog_io.m"
            MR_Word parse_tree__prog_io__ReadIOMResult_39;
#line 1401 "prog_io.m"
            MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1400 "prog_io.m"
            {
#line 1400 "prog_io.m"
              parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_28, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77, &parse_tree__prog_io__ReadIOMResult_39, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88);
            }
#line 1405 "prog_io.m"
#line 1405 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_39)) {
#line 1405 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1405 "prog_io.m"
              case (MR_Integer) 0:
#line 1403 "prog_io.m"
                {
#line 1404 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_VNInfo_70 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_InclsCord_72 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1403 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1403 "prog_io.m"
                }
#line 1405 "prog_io.m"
                break;
#line 1405 "prog_io.m"
              case (MR_Integer) 1:
#line 1413 "prog_io.m"
                {
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpec_40 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_39), (MR_Integer) 1);
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_168;
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_169;
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_128_170;
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_129_171;

#line 1408 "prog_io.m"
                  {
#line 1408 "prog_io.m"
                    parse_tree__prog_io__ItemSpecs_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_168, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_40));
#line 1408 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1408 "prog_io.m"
                  }
#line 1409 "prog_io.m"
                  {
#line 1409 "prog_io.m"
                    parse_tree__prog_io__ItemErrors_169 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)));
                  }
#line 1414 "prog_io.m"
                  {
#line 1414 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_128_170 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_168, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81);
                  }
#line 1415 "prog_io.m"
                  {
#line 1415 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_129_171 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_83, parse_tree__prog_io__ItemErrors_169);
                  }
#line 1416 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1416 "prog_io.m"
                  {
#line 1416 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1416 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_128_170;
#line 1416 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_129_171;

#line 1416 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83;
#line 1416 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1416 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1416 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1416 "prog_io.m"
                  }
#line 1416 "prog_io.m"
                  continue;
#line 1413 "prog_io.m"
                }
#line 1405 "prog_io.m"
                break;
#line 1405 "prog_io.m"
              case (MR_Integer) 2:
#line 1413 "prog_io.m"
                {
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 2)));
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 3)));
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_128_128;
#line 1413 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_129_129;
#line 1411 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 0)));
#line 1411 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 1)));

#line 1414 "prog_io.m"
                  {
#line 1414 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_128_128 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_41, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81);
                  }
#line 1415 "prog_io.m"
                  {
#line 1415 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_129_129 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_83, parse_tree__prog_io__ItemErrors_42);
                  }
#line 1416 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1416 "prog_io.m"
                  {
#line 1416 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1416 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_128_128;
#line 1416 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_129_129;

#line 1416 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83;
#line 1416 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1416 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1416 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1416 "prog_io.m"
                  }
#line 1416 "prog_io.m"
                  continue;
#line 1413 "prog_io.m"
                }
#line 1405 "prog_io.m"
                break;
#line 1405 "prog_io.m"
              case (MR_Integer) 3:
#line 1421 "prog_io.m"
                {
#line 1421 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMVarSet_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 0)));
#line 1421 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMTerm_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 1)));
#line 1421 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOM_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 2)));
#line 1421 "prog_io.m"
                  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90 = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 - (MR_Integer) 1);

#line 1429 "prog_io.m"
#line 1429 "prog_io.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_47)) {
#line 1429 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1429 "prog_io.m"
                    case (MR_Integer) 0:
#line 1458 "prog_io.m"
                      {
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__IOM_47, (MR_Integer) 0)));
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item_66;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_94_94;
#line 1454 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemNothingInfo_65;

#line 1451 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Item0_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_64, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 1451 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1451 "prog_io.m"
                          {
#line 1451 "prog_io.m"
                            parse_tree__prog_io__ItemNothingInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_64, (MR_Integer) 1)));
#line 1452 "prog_io.m"
                            {
#line 1452 "prog_io.m"
                              parse_tree__prog_io__process_item_nothing_warning_7_p_0(parse_tree__prog_io__Globals_25, parse_tree__prog_io__ItemNothingInfo_65, &parse_tree__prog_io__Item_66, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81, &parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, parse_tree__prog_io__STATE_VARIABLE_Errors_0_83, &parse_tree__prog_io__STATE_VARIABLE_Errors_93_93);
                            }
#line 1451 "prog_io.m"
                          }
#line 1451 "prog_io.m"
                        else
#line 1455 "prog_io.m"
                          {
#line 1455 "prog_io.m"
                            parse_tree__prog_io__Item_66 = parse_tree__prog_io__Item0_64;
#line 1455 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1455 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1455 "prog_io.m"
                          }
#line 1457 "prog_io.m"
                        {
#line 1457 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_94_94 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75, ((MR_Box) (parse_tree__prog_io__Item_66)));
                        }
#line 1459 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1459 "prog_io.m"
                        {
#line 1459 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_75 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_94_94;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;

#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_75;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1459 "prog_io.m"
                        }
#line 1459 "prog_io.m"
                        continue;
#line 1458 "prog_io.m"
                      }
#line 1429 "prog_io.m"
                      break;
#line 1429 "prog_io.m"
                    case (MR_Integer) 1:
#line 1458 "prog_io.m"
                      {
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_144_144 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__Incls_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__IOM_47, (MR_Integer) 0)));
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__HeadIncl_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Incls_58, (MR_Integer) 0)));
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__TailIncls_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Incls_58, (MR_Integer) 1)));
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_99_99;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_100_100;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_98_158;

#line 1443 "prog_io.m"
                        {
#line 1443 "prog_io.m"
                          parse_tree__prog_io__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io__HeadIncl_59));
#line 1443 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io__TailIncls_60));
#line 1443 "prog_io.m"
                        }
#line 1443 "prog_io.m"
                        {
#line 1443 "prog_io.m"
                          parse_tree__prog_io__V_99_99 = mercury__cord__from_list_1_f_0(parse_tree__prog_io__TypeCtorInfo_144_144, parse_tree__prog_io__V_100_100);
                        }
#line 1442 "prog_io.m"
                        {
#line 1442 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_InclsCord_98_158 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_144_144, parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71, parse_tree__prog_io__V_99_99);
                        }
#line 1459 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1459 "prog_io.m"
                        {
#line 1459 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_71 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_98_158;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_71;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1459 "prog_io.m"
                        }
#line 1459 "prog_io.m"
                        continue;
#line 1458 "prog_io.m"
                      }
#line 1429 "prog_io.m"
                      break;
#line 1429 "prog_io.m"
                    case (MR_Integer) 2:
#line 1458 "prog_io.m"
                      {
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_145_145 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__Avails_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOM_47, (MR_Integer) 0)));
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__HeadAvail_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Avails_61, (MR_Integer) 0)));
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__TailAvails_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Avails_61, (MR_Integer) 1)));
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_96_96;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_97_97;
#line 1458 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_95_150;

#line 1448 "prog_io.m"
                        {
#line 1448 "prog_io.m"
                          parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__HeadAvail_62));
#line 1448 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (parse_tree__prog_io__TailAvails_63));
#line 1448 "prog_io.m"
                        }
#line 1448 "prog_io.m"
                        {
#line 1448 "prog_io.m"
                          parse_tree__prog_io__V_96_96 = mercury__cord__from_list_1_f_0(parse_tree__prog_io__TypeCtorInfo_145_145, parse_tree__prog_io__V_97_97);
                        }
#line 1447 "prog_io.m"
                        {
#line 1447 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_AvailsCord_95_150 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_145_145, parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73, parse_tree__prog_io__V_96_96);
                        }
#line 1459 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1459 "prog_io.m"
                        {
#line 1459 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_95_150;
#line 1459 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_73;
#line 1459 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1459 "prog_io.m"
                        }
#line 1459 "prog_io.m"
                        continue;
#line 1458 "prog_io.m"
                      }
#line 1429 "prog_io.m"
                      break;
#line 1429 "prog_io.m"
                    case (MR_Integer) 3:
#line 1429 "prog_io.m"
#line 1429 "prog_io.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 0)))) {
#line 1429 "prog_io.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1429 "prog_io.m"
                        case (MR_Integer) 0:
#line 1430 "prog_io.m"
                          {
#line 1430 "prog_io.m"
                            MR_Word parse_tree__prog_io__MVN_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));
#line 1430 "prog_io.m"
                            MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_113_113;
#line 1430 "prog_io.m"
                            MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_114_114;

#line 1431 "prog_io.m"
                            {
#line 1431 "prog_io.m"
                              parse_tree__prog_io__record_version_numbers_6_p_0(parse_tree__prog_io__MVN_57, parse_tree__prog_io__IOMTerm_46, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_113_113, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81, &parse_tree__prog_io__STATE_VARIABLE_Specs_114_114);
                            }
#line 1432 "prog_io.m"
                            /* direct tailcall eliminated */
#line 1432 "prog_io.m"
                            {
#line 1432 "prog_io.m"
                              MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1432 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_113_113;
#line 1432 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1432 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_114_114;

#line 1432 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1432 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1432 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_69;
#line 1432 "prog_io.m"
                              parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1432 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1432 "prog_io.m"
                            }
#line 1432 "prog_io.m"
                            continue;
#line 1430 "prog_io.m"
                          }
#line 1429 "prog_io.m"
                          break;
#line 1429 "prog_io.m"
                        case (MR_Integer) 1:
#line 1458 "prog_io.m"
                          {
#line 1458 "prog_io.m"
                            MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_166 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));

#line 1459 "prog_io.m"
                            /* direct tailcall eliminated */
#line 1459 "prog_io.m"
                            {
#line 1459 "prog_io.m"
                              MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1459 "prog_io.m"
                              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_77 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_166;
#line 1459 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1459 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1459 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_77;
#line 1459 "prog_io.m"
                              parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1459 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1459 "prog_io.m"
                            }
#line 1459 "prog_io.m"
                            continue;
#line 1458 "prog_io.m"
                          }
#line 1429 "prog_io.m"
                          break;
#line 1429 "prog_io.m"
                        case (MR_Integer) 2:
#line 1429 "prog_io.m"
                        case (MR_Integer) 3:
#line 1429 "prog_io.m"
                        case (MR_Integer) 4:
#line 1427 "prog_io.m"
                          {
#line 1428 "prog_io.m"
                            {
#line 1428 "prog_io.m"
                              MR_Word base;
#line 1428 "prog_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "prog_io.m"
                              *parse_tree__prog_io__FinalLookAhead_29 = base;
#line 1428 "prog_io.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_45));
#line 1428 "prog_io.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_46));
#line 1428 "prog_io.m"
                            }
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_70 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_InclsCord_72 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Specs_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1427 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Errors_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1427 "prog_io.m"
                          }
#line 1429 "prog_io.m"
                          break;
#line 1429 "prog_io.m"
                      }
#line 1429 "prog_io.m"
                      break;
#line 1429 "prog_io.m"
                  }
#line 1421 "prog_io.m"
                }
#line 1405 "prog_io.m"
                break;
#line 1405 "prog_io.m"
            }
#line 1401 "prog_io.m"
          }
#line 1399 "prog_io.m"
      }
#line 1399 "prog_io.m"
      break;
#line 1399 "prog_io.m"
    }
#line 1384 "prog_io.m"
}

#line 1357 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_22_p_0(
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_23,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_24,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_41,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_43,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_45,
#line 1357 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46,
#line 1357 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_50,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_51,
#line 1357 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_52,
#line 1357 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_53)
#line 1357 "prog_io.m"
{
#line 1369 "prog_io.m"
  while (MR_TRUE)
#line 1369 "prog_io.m"
    {
#line 1369 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1369 "prog_io.m"
      {
#line 1369 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1369 "prog_io.m"
        MR_Integer parse_tree__prog_io__NumItemsLeft_36;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__MidLookAhead_37;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60;
#line 1369 "prog_io.m"
        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_63_63;
#line 1369 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_64_64;

#line 1370 "prog_io.m"
        {
#line 1370 "prog_io.m"
          parse_tree__prog_io__read_item_sequence_inner_24_p_0(parse_tree__prog_io__Globals_23, parse_tree__prog_io__ModuleName_24, (MR_Integer) 1024, &parse_tree__prog_io__NumItemsLeft_36, parse_tree__prog_io__InitLookAhead_25, &parse_tree__prog_io__MidLookAhead_37, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57, parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40, &parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58, parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42, &parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44, &parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62, parse_tree__prog_io__STATE_VARIABLE_Specs_0_50, &parse_tree__prog_io__STATE_VARIABLE_Specs_63_63, parse_tree__prog_io__STATE_VARIABLE_Errors_0_52, &parse_tree__prog_io__STATE_VARIABLE_Errors_64_64);
        }
#line 1374 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__NumItemsLeft_36 == (MR_Integer) 0);
#line 1378 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1375 "prog_io.m"
          {
#line 1375 "prog_io.m"
            /* direct tailcall eliminated */
#line 1375 "prog_io.m"
            {
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__MidLookAhead_37;
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_38 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57;
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_40 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58;
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_42 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59;
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_44 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60;
#line 1375 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_46 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61;
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_48 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_50 = parse_tree__prog_io__STATE_VARIABLE_Specs_63_63;
#line 1375 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_52 = parse_tree__prog_io__STATE_VARIABLE_Errors_64_64;

#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Errors_0_52 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_52;
#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Specs_0_50 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_50;
#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_48;
#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_46;
#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_44;
#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_42;
#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_40;
#line 1375 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_38;
#line 1375 "prog_io.m"
              parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1375 "prog_io.m"
            }
#line 1375 "prog_io.m"
            continue;
#line 1375 "prog_io.m"
          }
#line 1378 "prog_io.m"
        else
#line 1379 "prog_io.m"
          {
#line 1379 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_26 = parse_tree__prog_io__MidLookAhead_37;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_53 = parse_tree__prog_io__STATE_VARIABLE_Errors_64_64;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_51 = parse_tree__prog_io__STATE_VARIABLE_Specs_63_63;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_45 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_43 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_InclsCord_41 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58;
#line 1379 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_39 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57;
#line 1379 "prog_io.m"
          }
#line 1369 "prog_io.m"
      }
#line 1369 "prog_io.m"
      break;
#line 1369 "prog_io.m"
    }
#line 1357 "prog_io.m"
}

#line 1252 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1252 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48,
#line 1252 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_50,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_52,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_53,
#line 1252 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_54,
#line 1252 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_55)
#line 1252 "prog_io.m"
{
#line 1260 "prog_io.m"
  while (MR_TRUE)
#line 1260 "prog_io.m"
    {
#line 1260 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1260 "prog_io.m"
      {
#line 1260 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1260 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1260 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstReadTerm_22;
#line 1260 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstIOM_23;
#line 1260 "prog_io.m"
        MR_Word parse_tree__prog_io__V_59_59;
#line 1260 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;

#line 1264 "prog_io.m"
        {
#line 1264 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0(parse_tree__prog_io__TypeCtorInfo_86_86, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48, &parse_tree__prog_io__FirstReadTerm_22);
        }
#line 1265 "prog_io.m"
        {
#line 1265 "prog_io.m"
          parse_tree__prog_io__V_59_59 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
        }
#line 1265 "prog_io.m"
        {
#line 1265 "prog_io.m"
          parse_tree__prog_io__read_term_to_iom_result_6_p_0(parse_tree__prog_io__V_59_59, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48, parse_tree__prog_io__FirstReadTerm_22, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_50, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60, &parse_tree__prog_io__MaybeFirstIOM_23);
        }
#line 1324 "prog_io.m"
#line 1324 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstIOM_23)) {
#line 1324 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1324 "prog_io.m"
          case (MR_Integer) 0:
#line 1333 "prog_io.m"
            {
#line 1333 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_85;

#line 1334 "prog_io.m"
              {
#line 1334 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_85);
              }
#line 1335 "prog_io.m"
              {
#line 1335 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_85, parse_tree__prog_io__STATE_VARIABLE_Specs_0_52, parse_tree__prog_io__STATE_VARIABLE_Specs_53, parse_tree__prog_io__STATE_VARIABLE_Errors_0_54, parse_tree__prog_io__STATE_VARIABLE_Errors_55);
              }
#line 1336 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[4];
#line 1333 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48;
#line 1333 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;
#line 1333 "prog_io.m"
            }
#line 1324 "prog_io.m"
            break;
#line 1324 "prog_io.m"
          case (MR_Integer) 1:
#line 1333 "prog_io.m"
            {
#line 1333 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_85;

#line 1334 "prog_io.m"
              {
#line 1334 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_85);
              }
#line 1335 "prog_io.m"
              {
#line 1335 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_85, parse_tree__prog_io__STATE_VARIABLE_Specs_0_52, parse_tree__prog_io__STATE_VARIABLE_Specs_53, parse_tree__prog_io__STATE_VARIABLE_Errors_0_54, parse_tree__prog_io__STATE_VARIABLE_Errors_55);
              }
#line 1336 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[4];
#line 1333 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48;
#line 1333 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;
#line 1333 "prog_io.m"
            }
#line 1324 "prog_io.m"
            break;
#line 1324 "prog_io.m"
          case (MR_Integer) 2:
#line 1325 "prog_io.m"
            {
#line 1325 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAhead_46;
#line 1325 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1325 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1325 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_84;
#line 1325 "prog_io.m"
              MR_Word parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));
#line 1325 "prog_io.m"
              MR_Word parse_tree__prog_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 3)));

#line 1326 "prog_io.m"
              {
#line 1326 "prog_io.m"
                parse_tree__prog_io__FirstContext_84 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_86_86, parse_tree__prog_io__FirstTerm_83);
              }
#line 1327 "prog_io.m"
              {
#line 1327 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_84, parse_tree__prog_io__STATE_VARIABLE_Specs_0_52, parse_tree__prog_io__STATE_VARIABLE_Specs_53, parse_tree__prog_io__STATE_VARIABLE_Errors_0_54, parse_tree__prog_io__STATE_VARIABLE_Errors_55);
              }
#line 1328 "prog_io.m"
              {
#line 1328 "prog_io.m"
                parse_tree__prog_io__LookAhead_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_46, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_82));
#line 1328 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_46, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_83));
#line 1328 "prog_io.m"
              }
#line 1329 "prog_io.m"
              {
#line 1329 "prog_io.m"
                MR_Word base;
#line 1329 "prog_io.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "prog_io.m"
                *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1329 "prog_io.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAhead_46));
#line 1329 "prog_io.m"
              }
#line 1325 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48;
#line 1325 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;
#line 1325 "prog_io.m"
            }
#line 1324 "prog_io.m"
            break;
#line 1324 "prog_io.m"
          case (MR_Integer) 3:
#line 1268 "prog_io.m"
            {
#line 1268 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1268 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1268 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstIOM_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));

#line 1276 "prog_io.m"
#line 1276 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__FirstIOM_26)) {
#line 1276 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1276 "prog_io.m"
                case (MR_Integer) 0:
#line 1276 "prog_io.m"
                case (MR_Integer) 1:
#line 1276 "prog_io.m"
                case (MR_Integer) 2:
#line 1318 "prog_io.m"
                  {
#line 1318 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstContext_42;
#line 1318 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstLookAhead_43;

#line 1319 "prog_io.m"
                    {
#line 1319 "prog_io.m"
                      parse_tree__prog_io__FirstContext_42 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_86_86, parse_tree__prog_io__FirstTerm_25);
                    }
#line 1320 "prog_io.m"
                    {
#line 1320 "prog_io.m"
                      parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_42, parse_tree__prog_io__STATE_VARIABLE_Specs_0_52, parse_tree__prog_io__STATE_VARIABLE_Specs_53, parse_tree__prog_io__STATE_VARIABLE_Errors_0_54, parse_tree__prog_io__STATE_VARIABLE_Errors_55);
                    }
#line 1321 "prog_io.m"
                    {
#line 1321 "prog_io.m"
                      parse_tree__prog_io__FirstLookAhead_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_43, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1321 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_43, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1321 "prog_io.m"
                    }
#line 1322 "prog_io.m"
                    {
#line 1322 "prog_io.m"
                      MR_Word base;
#line 1322 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "prog_io.m"
                      *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1322 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_43));
#line 1322 "prog_io.m"
                    }
#line 1318 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48;
#line 1318 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;
#line 1318 "prog_io.m"
                  }
#line 1276 "prog_io.m"
                  break;
#line 1276 "prog_io.m"
                case (MR_Integer) 3:
#line 1276 "prog_io.m"
#line 1276 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 0)))) {
#line 1276 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1276 "prog_io.m"
                    case (MR_Integer) 0:
#line 1276 "prog_io.m"
                    case (MR_Integer) 3:
#line 1276 "prog_io.m"
                    case (MR_Integer) 4:
#line 1318 "prog_io.m"
                      {
#line 1318 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstContext_42;
#line 1318 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstLookAhead_43;

#line 1319 "prog_io.m"
                        {
#line 1319 "prog_io.m"
                          parse_tree__prog_io__FirstContext_42 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_86_86, parse_tree__prog_io__FirstTerm_25);
                        }
#line 1320 "prog_io.m"
                        {
#line 1320 "prog_io.m"
                          parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_42, parse_tree__prog_io__STATE_VARIABLE_Specs_0_52, parse_tree__prog_io__STATE_VARIABLE_Specs_53, parse_tree__prog_io__STATE_VARIABLE_Errors_0_54, parse_tree__prog_io__STATE_VARIABLE_Errors_55);
                        }
#line 1321 "prog_io.m"
                        {
#line 1321 "prog_io.m"
                          parse_tree__prog_io__FirstLookAhead_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_43, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1321 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_43, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1321 "prog_io.m"
                        }
#line 1322 "prog_io.m"
                        {
#line 1322 "prog_io.m"
                          MR_Word base;
#line 1322 "prog_io.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "prog_io.m"
                          *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1322 "prog_io.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_43));
#line 1322 "prog_io.m"
                        }
#line 1318 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48;
#line 1318 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;
#line 1318 "prog_io.m"
                      }
#line 1276 "prog_io.m"
                      break;
#line 1276 "prog_io.m"
                    case (MR_Integer) 1:
#line 1270 "prog_io.m"
                      {
#line 1270 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_73_73 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 1)));

#line 1273 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1273 "prog_io.m"
                        {
#line 1273 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_48 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_73_73;
#line 1273 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_50 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;

#line 1273 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_50 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_50;
#line 1273 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_48;
#line 1273 "prog_io.m"
                        }
#line 1273 "prog_io.m"
                        continue;
#line 1270 "prog_io.m"
                      }
#line 1276 "prog_io.m"
                      break;
#line 1276 "prog_io.m"
                    case (MR_Integer) 2:
#line 1278 "prog_io.m"
                      {
#line 1278 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 1)));
#line 1278 "prog_io.m"
                        MR_Word parse_tree__prog_io__ModuleNameContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 2)));
#line 1277 "prog_io.m"
                        MR_Integer parse_tree__prog_io___ModuleNameSeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 3)));

#line 1283 "prog_io.m"
                        {
#line 1283 "prog_io.m"
                          parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__StartModuleName_27);
                        }
#line 1289 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1286 "prog_io.m"
                          {
#line 1287 "prog_io.m"
                            {
#line 1287 "prog_io.m"
                              MR_Word base;
#line 1287 "prog_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "prog_io.m"
                              *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1287 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1287 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1287 "prog_io.m"
                            }
#line 1286 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Errors_55 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_54;
#line 1286 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Specs_53 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_52;
#line 1286 "prog_io.m"
                          }
#line 1289 "prog_io.m"
                        else
#line 1297 "prog_io.m"
                          {
#line 1290 "prog_io.m"
                            {
#line 1290 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__StartModuleName_27, parse_tree__prog_io__DefaultModuleName_15);
                            }
#line 1297 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1294 "prog_io.m"
                              {
#line 1295 "prog_io.m"
                                {
#line 1295 "prog_io.m"
                                  MR_Word base;
#line 1295 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1295 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15));
#line 1295 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1295 "prog_io.m"
                                }
#line 1294 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Errors_55 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_54;
#line 1294 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Specs_53 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_52;
#line 1294 "prog_io.m"
                              }
#line 1297 "prog_io.m"
                            else
#line 1300 "prog_io.m"
                              {
#line 1300 "prog_io.m"
                                MR_Word parse_tree__prog_io__NameSpecs_31;
#line 1300 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_69_69;

#line 1300 "prog_io.m"
                                {
#line 1300 "prog_io.m"
                                  parse_tree__prog_io__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1300 "prog_io.m"
                                }
#line 1298 "prog_io.m"
                                {
#line 1298 "prog_io.m"
                                  parse_tree__prog_io__check_module_has_expected_name_6_p_0(parse_tree__prog_io__RequireModuleDecl_14, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__StartModuleName_27, parse_tree__prog_io__V_69_69, &parse_tree__prog_io__NameSpecs_31);
                                }
#line 1301 "prog_io.m"
                                {
#line 1301 "prog_io.m"
                                  *parse_tree__prog_io__STATE_VARIABLE_Specs_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__NameSpecs_31, parse_tree__prog_io__STATE_VARIABLE_Specs_0_52);
                                }
#line 1302 "prog_io.m"
                                {
#line 1302 "prog_io.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 1)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_54, parse_tree__prog_io__STATE_VARIABLE_Errors_55);
                                }
#line 1308 "prog_io.m"
                                {
#line 1308 "prog_io.m"
                                  MR_Word base;
#line 1308 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1308 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1308 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1308 "prog_io.m"
                                }
#line 1300 "prog_io.m"
                              }
#line 1297 "prog_io.m"
                          }
#line 1278 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_49 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_48;
#line 1278 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_51 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_60_60;
#line 1278 "prog_io.m"
                      }
#line 1276 "prog_io.m"
                      break;
#line 1276 "prog_io.m"
                  }
#line 1276 "prog_io.m"
                  break;
#line 1276 "prog_io.m"
              }
#line 1268 "prog_io.m"
            }
#line 1324 "prog_io.m"
            break;
#line 1324 "prog_io.m"
        }
#line 1260 "prog_io.m"
      }
#line 1260 "prog_io.m"
      break;
#line 1260 "prog_io.m"
    }
#line 1252 "prog_io.m"
}

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1197 "prog_io.m"
{
#line 1197 "prog_io.m"
  {
#line 1197 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1197 "prog_io.m"
    MR_builtin_longjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0, 1);
#line 1197 "prog_io.m"
  }
#line 1197 "prog_io.m"
}

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1197 "prog_io.m"
{
#line 1197 "prog_io.m"
  {
#line 1197 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1197 "prog_io.m"
    (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90 = ((MR_Word) (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90);
#line 1197 "prog_io.m"
    {
#line 1197 "prog_io.m"
      parse_tree__prog_io__handle_module_end_marker_11_p_0_2(parse_tree__prog_io__env_ptr);
#line 1197 "prog_io.m"
      return;
    }
#line 1197 "prog_io.m"
  }
#line 1197 "prog_io.m"
}

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1197 "prog_io.m"
{
#line 1197 "prog_io.m"
  {
#line 1197 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1198 "prog_io.m"
    {
#line 1198 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90);
    }
#line 1198 "prog_io.m"
    if ((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1198 "prog_io.m"
      {
#line 1198 "prog_io.m"
        parse_tree__prog_io__handle_module_end_marker_11_p_0_1(parse_tree__prog_io__env_ptr);
#line 1198 "prog_io.m"
        return;
      }
#line 1197 "prog_io.m"
  }
#line 1197 "prog_io.m"
}

#line 1197 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1197 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1197 "prog_io.m"
{
#line 1197 "prog_io.m"
  {
#line 1197 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1197 "prog_io.m"
    if (MR_builtin_setjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0) == 0)
#line 1197 "prog_io.m"
      {
#line 1197 "prog_io.m"
        {
#line 1197 "prog_io.m"
          {
#line 1197 "prog_io.m"
            mercury__list__member_2_p_1((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &(parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13, parse_tree__prog_io__handle_module_end_marker_11_p_0_3, parse_tree__prog_io__env_ptr);
          }
#line 1197 "prog_io.m"
        }
#line 1197 "prog_io.m"
        (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_FALSE;
#line 1197 "prog_io.m"
      }
#line 1197 "prog_io.m"
    else
#line 1197 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_TRUE;
#line 1197 "prog_io.m"
  }
#line 1197 "prog_io.m"
}

#line 1177 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1177 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1177 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1177 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1177 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27)
#line 1177 "prog_io.m"
{
#line 1177 "prog_io.m"
  {
#line 1177 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s parse_tree__prog_io__env;

#line 1177 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13 = parse_tree__prog_io__ContainingModules_13;
#line 1177 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16 = parse_tree__prog_io__EndedModuleName_16;
#line 1185 "prog_io.m"
    {
#line 1185 "prog_io.m"
      (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__CurModuleName_12, (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16);
    }
#line 1188 "prog_io.m"
    if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1187 "prog_io.m"
      {
#line 1187 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1187 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1187 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1187 "prog_io.m"
      }
#line 1188 "prog_io.m"
    else
#line 1194 "prog_io.m"
      {
#line 1189 "prog_io.m"
        {
#line 1189 "prog_io.m"
          (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, parse_tree__prog_io__CurModuleName_12);
        }
#line 1194 "prog_io.m"
        if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1193 "prog_io.m"
          {
#line 1193 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1193 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1193 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1193 "prog_io.m"
          }
#line 1194 "prog_io.m"
        else
#line 1210 "prog_io.m"
          {
#line 1197 "prog_io.m"
            {
#line 1197 "prog_io.m"
              parse_tree__prog_io__handle_module_end_marker_11_p_0_4(&parse_tree__prog_io__env);
            }
#line 1210 "prog_io.m"
            if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1204 "prog_io.m"
              {
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_22;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_23;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_30_30;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_33_33;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_36_36;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_37_37;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_46_46;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_47_47;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_48_48;
#line 1204 "prog_io.m"
                MR_Word parse_tree__prog_io__V_49_49;

#line 1203 "prog_io.m"
                {
#line 1203 "prog_io.m"
                  parse_tree__prog_io__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1203 "prog_io.m"
                }
#line 1203 "prog_io.m"
                {
#line 1203 "prog_io.m"
                  parse_tree__prog_io__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io__V_37_37));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1203 "prog_io.m"
                }
#line 1203 "prog_io.m"
                {
#line 1203 "prog_io.m"
                  parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[89])));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_36_36));
#line 1203 "prog_io.m"
                }
#line 1202 "prog_io.m"
                {
#line 1202 "prog_io.m"
                  parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[88])));
#line 1202 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1202 "prog_io.m"
                }
#line 1202 "prog_io.m"
                {
#line 1202 "prog_io.m"
                  parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[87])));
#line 1202 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1202 "prog_io.m"
                }
#line 1206 "prog_io.m"
                {
#line 1206 "prog_io.m"
                  parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1206 "prog_io.m"
                }
#line 1206 "prog_io.m"
                {
#line 1206 "prog_io.m"
                  parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1206 "prog_io.m"
                }
#line 1206 "prog_io.m"
                {
#line 1206 "prog_io.m"
                  parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 1206 "prog_io.m"
                }
#line 1206 "prog_io.m"
                {
#line 1206 "prog_io.m"
                  parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1206 "prog_io.m"
                }
#line 1205 "prog_io.m"
                {
#line 1205 "prog_io.m"
                  parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1205 "prog_io.m"
                }
#line 1207 "prog_io.m"
                {
#line 1207 "prog_io.m"
                  MR_Word base;
#line 1207 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1207 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1207 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1207 "prog_io.m"
                }
#line 1208 "prog_io.m"
                {
#line 1208 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1209 "prog_io.m"
                {
#line 1209 "prog_io.m"
                  MR_Word base;
#line 1209 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_18 = base;
#line 1209 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_14));
#line 1209 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_15));
#line 1209 "prog_io.m"
                }
#line 1204 "prog_io.m"
              }
#line 1210 "prog_io.m"
            else
#line 1214 "prog_io.m"
              {
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_57_57;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_60_60;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_63_63;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_64_64;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_65_65;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_68_68;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_71_71;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_72_72;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_81_81;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_82_82;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_83_83;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__V_84_84;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_91;
#line 1214 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_92;

#line 1212 "prog_io.m"
                {
#line 1212 "prog_io.m"
                  parse_tree__prog_io__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1212 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16));
#line 1212 "prog_io.m"
                }
#line 1214 "prog_io.m"
                {
#line 1214 "prog_io.m"
                  parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1214 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1214 "prog_io.m"
                }
#line 1214 "prog_io.m"
                {
#line 1214 "prog_io.m"
                  parse_tree__prog_io__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 1214 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1214 "prog_io.m"
                }
#line 1214 "prog_io.m"
                {
#line 1214 "prog_io.m"
                  parse_tree__prog_io__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[92])));
#line 1214 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 1214 "prog_io.m"
                }
#line 1213 "prog_io.m"
                {
#line 1213 "prog_io.m"
                  parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[91])));
#line 1213 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1213 "prog_io.m"
                }
#line 1212 "prog_io.m"
                {
#line 1212 "prog_io.m"
                  parse_tree__prog_io__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__V_64_64));
#line 1212 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1212 "prog_io.m"
                }
#line 1212 "prog_io.m"
                {
#line 1212 "prog_io.m"
                  parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[89])));
#line 1212 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 1212 "prog_io.m"
                }
#line 1211 "prog_io.m"
                {
#line 1211 "prog_io.m"
                  parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[88])));
#line 1211 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 1211 "prog_io.m"
                }
#line 1211 "prog_io.m"
                {
#line 1211 "prog_io.m"
                  parse_tree__prog_io__Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[90])));
#line 1211 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 1) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1211 "prog_io.m"
                }
#line 1216 "prog_io.m"
                {
#line 1216 "prog_io.m"
                  parse_tree__prog_io__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_91));
#line 1216 "prog_io.m"
                }
#line 1216 "prog_io.m"
                {
#line 1216 "prog_io.m"
                  parse_tree__prog_io__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io__V_84_84));
#line 1216 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "prog_io.m"
                }
#line 1216 "prog_io.m"
                {
#line 1216 "prog_io.m"
                  parse_tree__prog_io__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1216 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1216 "prog_io.m"
                }
#line 1216 "prog_io.m"
                {
#line 1216 "prog_io.m"
                  parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__V_82_82));
#line 1216 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "prog_io.m"
                }
#line 1215 "prog_io.m"
                {
#line 1215 "prog_io.m"
                  parse_tree__prog_io__Spec_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1215 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 2) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 1215 "prog_io.m"
                }
#line 1217 "prog_io.m"
                {
#line 1217 "prog_io.m"
                  MR_Word base;
#line 1217 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1217 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_92));
#line 1217 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1217 "prog_io.m"
                }
#line 1218 "prog_io.m"
                {
#line 1218 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1220 "prog_io.m"
                *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1214 "prog_io.m"
              }
#line 1210 "prog_io.m"
          }
#line 1194 "prog_io.m"
      }
#line 1177 "prog_io.m"
  }
#line 1177 "prog_io.m"
}

#line 1131 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1131 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1131 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1131 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1131 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51)
#line 1131 "prog_io.m"
{
#line 1143 "prog_io.m"
  {
#line 1143 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_114_114;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionKind_33;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_34;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedContainingModules_37;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedModuleComponents_39;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__SubModuleParseTreeSrc_40;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__Component_41;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_103_103;
#line 1143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_106_106;

#line 1146 "prog_io.m"
    if ((parse_tree__prog_io__MaybePrevSection_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "prog_io.m"
      {
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionPieces_35;
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionSpec_36;
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__V_56_56;
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__V_95_95;
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__V_96_96;
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__V_97_97;
#line 1147 "prog_io.m"
        MR_Word parse_tree__prog_io__V_98_98;

#line 1149 "prog_io.m"
        {
#line 1149 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1149 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1149 "prog_io.m"
        }
#line 1149 "prog_io.m"
        {
#line 1149 "prog_io.m"
          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1149 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[46])));
#line 1149 "prog_io.m"
        }
#line 1148 "prog_io.m"
        {
#line 1148 "prog_io.m"
          parse_tree__prog_io__NoSectionPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[86])));
#line 1148 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1148 "prog_io.m"
        }
#line 1157 "prog_io.m"
        {
#line 1157 "prog_io.m"
          parse_tree__prog_io__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionPieces_35));
#line 1157 "prog_io.m"
        }
#line 1157 "prog_io.m"
        {
#line 1157 "prog_io.m"
          parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 1157 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1157 "prog_io.m"
        }
#line 1157 "prog_io.m"
        {
#line 1157 "prog_io.m"
          parse_tree__prog_io__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1157 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 1) = ((MR_Box) (parse_tree__prog_io__V_97_97));
#line 1157 "prog_io.m"
        }
#line 1157 "prog_io.m"
        {
#line 1157 "prog_io.m"
          parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_96_96));
#line 1157 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1157 "prog_io.m"
        }
#line 1156 "prog_io.m"
        {
#line 1156 "prog_io.m"
          parse_tree__prog_io__NoSectionSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1156 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 2) = ((MR_Box) (parse_tree__prog_io__V_95_95));
#line 1156 "prog_io.m"
        }
#line 1158 "prog_io.m"
        {
#line 1158 "prog_io.m"
          parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionSpec_36));
#line 1158 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_48));
#line 1158 "prog_io.m"
        }
#line 1160 "prog_io.m"
        {
#line 1160 "prog_io.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_50, &parse_tree__prog_io__STATE_VARIABLE_Errors_103_103);
        }
#line 1161 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = (MR_Integer) 0;
#line 1162 "prog_io.m"
        {
#line 1162 "prog_io.m"
          parse_tree__prog_io__SectionContext_34 = mercury__term__context_init_0_f_0();
        }
#line 1147 "prog_io.m"
      }
#line 1146 "prog_io.m"
    else
#line 1145 "prog_io.m"
      {
#line 1145 "prog_io.m"
        MR_Word parse_tree__prog_io__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_22, (MR_Integer) 0)));

#line 1145 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 0)));
#line 1145 "prog_io.m"
        parse_tree__prog_io__SectionContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 1)));
#line 1145 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_48;
#line 1145 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Errors_103_103 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_50;
#line 1145 "prog_io.m"
      }
#line 1164 "prog_io.m"
    {
#line 1164 "prog_io.m"
      parse_tree__prog_io__NestedContainingModules_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1164 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 1) = ((MR_Box) (parse_tree__prog_io__ContainingModules_21));
#line 1164 "prog_io.m"
    }
#line 9489 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0;
#line 1169 "prog_io.m"
    {
#line 1169 "prog_io.m"
      parse_tree__prog_io__V_106_106 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_114_114);
    }
#line 1166 "prog_io.m"
    {
#line 1166 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__StartModuleName_23, parse_tree__prog_io__NestedContainingModules_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__V_106_106, &parse_tree__prog_io__NestedModuleComponents_39, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47, parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Specs_49, parse_tree__prog_io__STATE_VARIABLE_Errors_103_103, parse_tree__prog_io__STATE_VARIABLE_Errors_51);
    }
#line 1171 "prog_io.m"
    {
#line 1171 "prog_io.m"
      parse_tree__prog_io__SubModuleParseTreeSrc_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1171 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 1) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1171 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 2) = ((MR_Box) (parse_tree__prog_io__NestedModuleComponents_39));
#line 1171 "prog_io.m"
    }
#line 1173 "prog_io.m"
    {
#line 1173 "prog_io.m"
      parse_tree__prog_io__Component_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_33));
#line 1173 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_34));
#line 1173 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 2) = ((MR_Box) (parse_tree__prog_io__SubModuleParseTreeSrc_40));
#line 1173 "prog_io.m"
    }
#line 1175 "prog_io.m"
    {
#line 1175 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43 = mercury__cord__snoc_2_f_0(parse_tree__prog_io__TypeCtorInfo_114_114, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42, ((MR_Box) (parse_tree__prog_io__Component_41)));
    }
#line 1143 "prog_io.m"
  }
#line 1131 "prog_io.m"
}

#line 1098 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 1098 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 1098 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 1098 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 1098 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 1098 "prog_io.m"
{
#line 1108 "prog_io.m"
  {
#line 1108 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1108 "prog_io.m"
#line 1108 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 1108 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "prog_io.m"
      case (MR_Integer) 1:
#line 1126 "prog_io.m"
        {
#line 1126 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 1126 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 1126 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 1126 "prog_io.m"
        }
#line 1108 "prog_io.m"
        break;
#line 1108 "prog_io.m"
      case (MR_Integer) 0:
#line 1108 "prog_io.m"
        {
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionPieces_14;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionSpec_15;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__V_25_25;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__V_28_28;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__V_29_29;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__V_67_67;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__V_68_68;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__V_69_69;
#line 1108 "prog_io.m"
          MR_Word parse_tree__prog_io__V_70_70;

#line 1109 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 1113 "prog_io.m"
          {
#line 1113 "prog_io.m"
            parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1113 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_9));
#line 1113 "prog_io.m"
          }
#line 1113 "prog_io.m"
          {
#line 1113 "prog_io.m"
            parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 1113 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[41])));
#line 1113 "prog_io.m"
          }
#line 1112 "prog_io.m"
          {
#line 1112 "prog_io.m"
            parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[81])));
#line 1112 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1112 "prog_io.m"
          }
#line 1111 "prog_io.m"
          {
#line 1111 "prog_io.m"
            parse_tree__prog_io__MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[2])));
#line 1111 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1111 "prog_io.m"
          }
#line 1122 "prog_io.m"
          {
#line 1122 "prog_io.m"
            parse_tree__prog_io__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionPieces_14));
#line 1122 "prog_io.m"
          }
#line 1122 "prog_io.m"
          {
#line 1122 "prog_io.m"
            parse_tree__prog_io__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 1122 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "prog_io.m"
          }
#line 1121 "prog_io.m"
          {
#line 1121 "prog_io.m"
            parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Context_10));
#line 1121 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 1121 "prog_io.m"
          }
#line 1122 "prog_io.m"
          {
#line 1122 "prog_io.m"
            parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1122 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "prog_io.m"
          }
#line 1120 "prog_io.m"
          {
#line 1120 "prog_io.m"
            parse_tree__prog_io__MissingSectionSpec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1120 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1120 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1120 "prog_io.m"
          }
#line 1123 "prog_io.m"
          {
#line 1123 "prog_io.m"
            MR_Word base;
#line 1123 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = base;
#line 1123 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionSpec_15));
#line 1123 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_18));
#line 1123 "prog_io.m"
          }
#line 1124 "prog_io.m"
          {
#line 1124 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_20, parse_tree__prog_io__STATE_VARIABLE_Errors_21);
#line 1124 "prog_io.m"
            return;
          }
#line 1108 "prog_io.m"
        }
#line 1108 "prog_io.m"
        break;
#line 1108 "prog_io.m"
    }
#line 1108 "prog_io.m"
  }
#line 1098 "prog_io.m"
}

#line 1080 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_7_p_0(
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_8,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_9,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_10,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__AvailsCord_11,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_12,
#line 1080 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15,
#line 1080 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16)
#line 1080 "prog_io.m"
{
#line 1092 "prog_io.m"
  {
#line 1092 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1087 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_19_19;
#line 1087 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_20_20;

#line 1087 "prog_io.m"
    {
#line 1087 "prog_io.m"
      parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__InclsCord_10);
    }
#line 1087 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1087 "prog_io.m"
      {
#line 9764 "parse_tree.prog_io.c"
        parse_tree__prog_io__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 1088 "prog_io.m"
        {
#line 1088 "prog_io.m"
          parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0(parse_tree__prog_io__TypeCtorInfo_19_19, parse_tree__prog_io__AvailsCord_11);
        }
#line 1087 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1087 "prog_io.m"
          {
#line 9775 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1089 "prog_io.m"
            {
#line 1089 "prog_io.m"
              parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0(parse_tree__prog_io__TypeCtorInfo_20_20, parse_tree__prog_io__ItemsCord_12);
            }
#line 1087 "prog_io.m"
          }
#line 1087 "prog_io.m"
      }
#line 1092 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1092 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15;
#line 1092 "prog_io.m"
    else
#line 1094 "prog_io.m"
      {
#line 1094 "prog_io.m"
        MR_Word parse_tree__prog_io__Component_14;

#line 1093 "prog_io.m"
        {
#line 1093 "prog_io.m"
          parse_tree__prog_io__Component_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_8));
#line 1093 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_9));
#line 1093 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 2) = ((MR_Box) (parse_tree__prog_io__InclsCord_10));
#line 1093 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 3) = ((MR_Box) (parse_tree__prog_io__AvailsCord_11));
#line 1093 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 4) = ((MR_Box) (parse_tree__prog_io__ItemsCord_12));
#line 1093 "prog_io.m"
        }
#line 1095 "prog_io.m"
        {
#line 1095 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15, ((MR_Box) (parse_tree__prog_io__Component_14)));
        }
#line 1094 "prog_io.m"
      }
#line 1092 "prog_io.m"
  }
#line 1080 "prog_io.m"
}

#line 902 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77,
#line 902 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78,
#line 902 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_82,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_83,
#line 902 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_84,
#line 902 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_85)
#line 902 "prog_io.m"
{
#line 914 "prog_io.m"
  while (MR_TRUE)
#line 914 "prog_io.m"
    {
#line 914 "prog_io.m"
      /* tailcall optimized into a loop */
#line 914 "prog_io.m"
      {
#line 914 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 914 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_33;
#line 914 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 915 "prog_io.m"
        {
#line 915 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__ReadIOMResult_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88);
        }
#line 921 "prog_io.m"
#line 921 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_33)) {
#line 921 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 921 "prog_io.m"
          case (MR_Integer) 0:
#line 918 "prog_io.m"
            {
#line 920 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 918 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76;
#line 918 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78;
#line 918 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 918 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_83 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 918 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_85 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 918 "prog_io.m"
            }
#line 921 "prog_io.m"
            break;
#line 921 "prog_io.m"
          case (MR_Integer) 1:
#line 922 "prog_io.m"
            {
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_34 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_33), (MR_Integer) 1);
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_206_206;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_208_208;

#line 925 "prog_io.m"
              {
#line 925 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_206_206, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_34));
#line 925 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_206_206, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_82));
#line 925 "prog_io.m"
              }
#line 926 "prog_io.m"
              {
#line 926 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_208_208);
              }
#line 927 "prog_io.m"
              /* direct tailcall eliminated */
#line 927 "prog_io.m"
              {
#line 927 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 927 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_206_206;
#line 927 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_208_208;

#line 927 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 927 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 927 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 927 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "prog_io.m"
              }
#line 927 "prog_io.m"
              continue;
#line 922 "prog_io.m"
            }
#line 921 "prog_io.m"
            break;
#line 921 "prog_io.m"
          case (MR_Integer) 2:
#line 933 "prog_io.m"
            {
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_39;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__SectionContext_42;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_43;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__InclsCord_46;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__AvailsCord_47;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemsCord_48;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_185_185;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_186_186;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__V_188_188;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__V_189_189;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__V_190_190;
#line 933 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_191_191;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_192_192;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_193_193;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_194_194;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_196_196;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__V_197_197;
#line 933 "prog_io.m"
              MR_Word parse_tree__prog_io__V_205_205;
#line 932 "prog_io.m"
              MR_Word parse_tree__prog_io___Specs_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 932 "prog_io.m"
              MR_Word parse_tree__prog_io___Errors_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 3)));
#line 939 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_40;
#line 945 "prog_io.m"
              MR_Word parse_tree__prog_io__V_45_45;

#line 938 "prog_io.m"
              {
#line 938 "prog_io.m"
                parse_tree__prog_io__Context_39 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_36);
              }
#line 939 "prog_io.m"
              {
#line 939 "prog_io.m"
                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_39, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75, &parse_tree__prog_io___MissingStartSectionWarning_40, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, &parse_tree__prog_io__STATE_VARIABLE_Specs_185_185, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_186_186);
              }
#line 943 "prog_io.m"
              {
#line 943 "prog_io.m"
                parse_tree__prog_io__SectionContext_42 = mercury__term__context_init_0_f_0();
              }
#line 944 "prog_io.m"
              {
#line 944 "prog_io.m"
                parse_tree__prog_io__ItemSeqInitLookAhead_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_35));
#line 944 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_36));
#line 944 "prog_io.m"
              }
#line 947 "prog_io.m"
              {
#line 947 "prog_io.m"
                parse_tree__prog_io__V_188_188 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
              }
#line 948 "prog_io.m"
              {
#line 948 "prog_io.m"
                parse_tree__prog_io__V_189_189 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
              }
#line 948 "prog_io.m"
              {
#line 948 "prog_io.m"
                parse_tree__prog_io__V_190_190 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
              }
#line 945 "prog_io.m"
              {
#line 945 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_43, &parse_tree__prog_io__ItemSeqFinalLookAhead_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_45_45, parse_tree__prog_io__V_188_188, &parse_tree__prog_io__InclsCord_46, parse_tree__prog_io__V_189_189, &parse_tree__prog_io__AvailsCord_47, parse_tree__prog_io__V_190_190, &parse_tree__prog_io__ItemsCord_48, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_191_191, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_192_192, parse_tree__prog_io__STATE_VARIABLE_Specs_185_185, &parse_tree__prog_io__STATE_VARIABLE_Specs_193_193, parse_tree__prog_io__STATE_VARIABLE_Errors_186_186, &parse_tree__prog_io__STATE_VARIABLE_Errors_194_194);
              }
#line 950 "prog_io.m"
              {
#line 950 "prog_io.m"
                parse_tree__prog_io__add_section_component_7_p_0((MR_Integer) 1, parse_tree__prog_io__SectionContext_42, parse_tree__prog_io__InclsCord_46, parse_tree__prog_io__AvailsCord_47, parse_tree__prog_io__ItemsCord_48, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_196_196);
              }
#line 955 "prog_io.m"
              {
#line 955 "prog_io.m"
                parse_tree__prog_io__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 955 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_205_205, 0) = ((MR_Box) ((MR_Integer) 1));
#line 955 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_205_205, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_42));
#line 955 "prog_io.m"
              }
#line 955 "prog_io.m"
              {
#line 955 "prog_io.m"
                parse_tree__prog_io__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_197_197, 0) = ((MR_Box) (parse_tree__prog_io__V_205_205));
#line 955 "prog_io.m"
              }
#line 954 "prog_io.m"
              /* direct tailcall eliminated */
#line 954 "prog_io.m"
              {
#line 954 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_197_197;
#line 954 "prog_io.m"
                MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 954 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_196_196;
#line 954 "prog_io.m"
                MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_191_191;
#line 954 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_192_192;
#line 954 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_193_193;
#line 954 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_194_194;

#line 954 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 954 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 954 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 954 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 954 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 954 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 954 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75 = (MR_Integer) 0;
#line 954 "prog_io.m"
                parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 954 "prog_io.m"
              }
#line 954 "prog_io.m"
              continue;
#line 933 "prog_io.m"
            }
#line 921 "prog_io.m"
            break;
#line 921 "prog_io.m"
          case (MR_Integer) 3:
#line 960 "prog_io.m"
            {
#line 960 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 960 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 960 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));

#line 968 "prog_io.m"
#line 968 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_49)) {
#line 968 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 968 "prog_io.m"
                case (MR_Integer) 0:
#line 968 "prog_io.m"
                case (MR_Integer) 1:
#line 968 "prog_io.m"
                case (MR_Integer) 2:
#line 1027 "prog_io.m"
                  {
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_96_96;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_97_97;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_98_98;
#line 1027 "prog_io.m"
                    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_105_105;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_113_113;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionKind_243;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionContext_244;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_245;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__InclsCord_247;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__AvailsCord_248;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemsCord_249;
#line 1057 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_71_71;

#line 1032 "prog_io.m"
#line 1032 "prog_io.m"
                    switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_49)) {
#line 1032 "prog_io.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1032 "prog_io.m"
                      case (MR_Integer) 0:
#line 1032 "prog_io.m"
                      case (MR_Integer) 1:
#line 1032 "prog_io.m"
                      case (MR_Integer) 2:
#line 1036 "prog_io.m"
                        {
#line 1042 "prog_io.m"
                          if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1043 "prog_io.m"
                            {
#line 1043 "prog_io.m"
                              MR_Word parse_tree__prog_io__Context_233;
#line 1045 "prog_io.m"
                              MR_Word parse_tree__prog_io___MissingStartSectionWarning_232;

#line 1044 "prog_io.m"
                              {
#line 1044 "prog_io.m"
                                parse_tree__prog_io__Context_233 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_260);
                              }
#line 1045 "prog_io.m"
                              {
#line 1045 "prog_io.m"
                                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_233, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75, &parse_tree__prog_io___MissingStartSectionWarning_232, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, &parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_93_93);
                              }
#line 1050 "prog_io.m"
                              parse_tree__prog_io__SectionKind_243 = (MR_Integer) 1;
#line 1051 "prog_io.m"
                              {
#line 1051 "prog_io.m"
                                parse_tree__prog_io__SectionContext_244 = mercury__term__context_init_0_f_0();
                              }
#line 1043 "prog_io.m"
                            }
#line 1042 "prog_io.m"
                          else
#line 1038 "prog_io.m"
                            {
#line 1038 "prog_io.m"
                              MR_Word parse_tree__prog_io__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 1038 "prog_io.m"
                              parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 0)));
#line 1038 "prog_io.m"
                              parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 1)));
#line 1038 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1038 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1038 "prog_io.m"
                            }
#line 1053 "prog_io.m"
                          {
#line 1053 "prog_io.m"
                            parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_259));
#line 1053 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_260));
#line 1053 "prog_io.m"
                          }
#line 1036 "prog_io.m"
                        }
#line 1032 "prog_io.m"
                        break;
#line 1032 "prog_io.m"
                      case (MR_Integer) 3:
#line 1030 "prog_io.m"
                        {
#line 1029 "prog_io.m"
                          MR_Integer parse_tree__prog_io___SectionSeqNum_67;

#line 1029 "prog_io.m"
                          parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 1029 "prog_io.m"
                          parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 1029 "prog_io.m"
                          parse_tree__prog_io___SectionSeqNum_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));
#line 1031 "prog_io.m"
                          parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1030 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1030 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1030 "prog_io.m"
                        }
#line 1032 "prog_io.m"
                        break;
#line 1032 "prog_io.m"
                    }
#line 1059 "prog_io.m"
                    {
#line 1059 "prog_io.m"
                      parse_tree__prog_io__V_96_96 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
                    }
#line 1060 "prog_io.m"
                    {
#line 1060 "prog_io.m"
                      parse_tree__prog_io__V_97_97 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
                    }
#line 1060 "prog_io.m"
                    {
#line 1060 "prog_io.m"
                      parse_tree__prog_io__V_98_98 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                    }
#line 1057 "prog_io.m"
                    {
#line 1057 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_245, &parse_tree__prog_io__ItemSeqFinalLookAhead_246, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_71_71, parse_tree__prog_io__V_96_96, &parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__V_97_97, &parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__V_98_98, &parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100, parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, &parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Errors_93_93, &parse_tree__prog_io__STATE_VARIABLE_Errors_102_102);
                    }
#line 1062 "prog_io.m"
                    {
#line 1062 "prog_io.m"
                      parse_tree__prog_io__add_section_component_7_p_0(parse_tree__prog_io__SectionKind_243, parse_tree__prog_io__SectionContext_244, parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104);
                    }
#line 1067 "prog_io.m"
                    {
#line 1067 "prog_io.m"
                      parse_tree__prog_io__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_243));
#line 1067 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_244));
#line 1067 "prog_io.m"
                    }
#line 1067 "prog_io.m"
                    {
#line 1067 "prog_io.m"
                      parse_tree__prog_io__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io__V_113_113));
#line 1067 "prog_io.m"
                    }
#line 1066 "prog_io.m"
                    /* direct tailcall eliminated */
#line 1066 "prog_io.m"
                    {
#line 1066 "prog_io.m"
                      MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_105_105;
#line 1066 "prog_io.m"
                      MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1066 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1066 "prog_io.m"
                      MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1066 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1066 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1066 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;

#line 1066 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 1066 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 1066 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 1066 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 1066 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 1066 "prog_io.m"
                      parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1066 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75 = (MR_Integer) 0;
#line 1066 "prog_io.m"
                      parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 1066 "prog_io.m"
                    }
#line 1066 "prog_io.m"
                    continue;
#line 1027 "prog_io.m"
                  }
#line 968 "prog_io.m"
                  break;
#line 968 "prog_io.m"
                case (MR_Integer) 3:
#line 968 "prog_io.m"
#line 968 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 0)))) {
#line 968 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 968 "prog_io.m"
                    case (MR_Integer) 0:
#line 969 "prog_io.m"
                      {
#line 969 "prog_io.m"
                        MR_Word parse_tree__prog_io__Msg_52;
#line 969 "prog_io.m"
                        MR_Word parse_tree__prog_io__Spec_53;
#line 969 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_161_161;
#line 969 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_167_167;
#line 969 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_169_169;

#line 972 "prog_io.m"
                        {
#line 972 "prog_io.m"
                          parse_tree__prog_io__V_161_161 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_260);
                        }
#line 972 "prog_io.m"
                        {
#line 972 "prog_io.m"
                          parse_tree__prog_io__Msg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 972 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_52, 0) = ((MR_Box) (parse_tree__prog_io__V_161_161));
#line 972 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[85])));
#line 972 "prog_io.m"
                        }
#line 973 "prog_io.m"
                        {
#line 973 "prog_io.m"
                          parse_tree__prog_io__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io__Msg_52));
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_io.m"
                        }
#line 973 "prog_io.m"
                        {
#line 973 "prog_io.m"
                          parse_tree__prog_io__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io__V_167_167));
#line 973 "prog_io.m"
                        }
#line 974 "prog_io.m"
                        {
#line 974 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_169_169, 0) = ((MR_Box) (parse_tree__prog_io__Spec_53));
#line 974 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_169_169, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_82));
#line 974 "prog_io.m"
                        }
#line 975 "prog_io.m"
                        /* direct tailcall eliminated */
#line 975 "prog_io.m"
                        {
#line 975 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 975 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_169_169;

#line 975 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 975 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 975 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 975 "prog_io.m"
                        }
#line 975 "prog_io.m"
                        continue;
#line 969 "prog_io.m"
                      }
#line 968 "prog_io.m"
                      break;
#line 968 "prog_io.m"
                    case (MR_Integer) 1:
#line 962 "prog_io.m"
                      {
#line 962 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_177_177 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));

#line 963 "prog_io.m"
                        /* direct tailcall eliminated */
#line 963 "prog_io.m"
                        {
#line 963 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_177_177;
#line 963 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 963 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 963 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 963 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "prog_io.m"
                        }
#line 963 "prog_io.m"
                        continue;
#line 962 "prog_io.m"
                      }
#line 968 "prog_io.m"
                      break;
#line 968 "prog_io.m"
                    case (MR_Integer) 2:
#line 982 "prog_io.m"
                      {
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawStartModuleName_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_58;
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__SubModuleFinalLookAhead_60;
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_139_139;
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_141_141;
#line 982 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_142_142;
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_143_143;
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_144_144;
#line 982 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_145_145;
#line 981 "prog_io.m"
                        MR_Integer parse_tree__prog_io___StartSeqNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));

#line 986 "prog_io.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io__RawStartModuleName_54)) == (MR_mktag((MR_Integer) 1))))
#line 987 "prog_io.m"
                          {
#line 987 "prog_io.m"
                            MR_Word parse_tree__prog_io__RawModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_54, (MR_Integer) 0)));
#line 987 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_225 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_54, (MR_Integer) 1)));

#line 989 "prog_io.m"
                            {
#line 989 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__RawModuleName_59, parse_tree__prog_io__CurModuleName_21);
                            }
#line 992 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 991 "prog_io.m"
                              {
#line 991 "prog_io.m"
                                {
#line 991 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 991 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_225));
#line 991 "prog_io.m"
                                }
#line 991 "prog_io.m"
                                parse_tree__prog_io__STATE_VARIABLE_Specs_139_139 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 991 "prog_io.m"
                              }
#line 992 "prog_io.m"
                            else
#line 997 "prog_io.m"
                              {
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_116_116;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_119_119;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_120_120;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_121_121;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_124_124;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_125_125;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_134_134;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_135_135;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_136_136;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_216;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__Msg_217;
#line 997 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_218;

#line 995 "prog_io.m"
                                {
#line 995 "prog_io.m"
                                  parse_tree__prog_io__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 995 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_120_120, 1) = ((MR_Box) (parse_tree__prog_io__RawStartModuleName_54));
#line 995 "prog_io.m"
                                }
#line 997 "prog_io.m"
                                {
#line 997 "prog_io.m"
                                  parse_tree__prog_io__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 997 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 997 "prog_io.m"
                                }
#line 997 "prog_io.m"
                                {
#line 997 "prog_io.m"
                                  parse_tree__prog_io__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io__V_125_125));
#line 997 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 997 "prog_io.m"
                                }
#line 996 "prog_io.m"
                                {
#line 996 "prog_io.m"
                                  parse_tree__prog_io__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_121_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[84])));
#line 996 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_121_121, 1) = ((MR_Box) (parse_tree__prog_io__V_124_124));
#line 996 "prog_io.m"
                                }
#line 995 "prog_io.m"
                                {
#line 995 "prog_io.m"
                                  parse_tree__prog_io__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io__V_120_120));
#line 995 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io__V_121_121));
#line 995 "prog_io.m"
                                }
#line 994 "prog_io.m"
                                {
#line 994 "prog_io.m"
                                  parse_tree__prog_io__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[83])));
#line 994 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io__V_119_119));
#line 994 "prog_io.m"
                                }
#line 993 "prog_io.m"
                                {
#line 993 "prog_io.m"
                                  parse_tree__prog_io__Pieces_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[82])));
#line 993 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_216, 1) = ((MR_Box) (parse_tree__prog_io__V_116_116));
#line 993 "prog_io.m"
                                }
#line 998 "prog_io.m"
                                {
#line 998 "prog_io.m"
                                  parse_tree__prog_io__Msg_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 998 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_217, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_216));
#line 998 "prog_io.m"
                                }
#line 1000 "prog_io.m"
                                {
#line 1000 "prog_io.m"
                                  parse_tree__prog_io__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_136_136, 0) = ((MR_Box) (parse_tree__prog_io__Msg_217));
#line 1000 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "prog_io.m"
                                }
#line 1000 "prog_io.m"
                                {
#line 1000 "prog_io.m"
                                  parse_tree__prog_io__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_55));
#line 1000 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io__V_136_136));
#line 1000 "prog_io.m"
                                }
#line 1000 "prog_io.m"
                                {
#line 1000 "prog_io.m"
                                  parse_tree__prog_io__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io__V_135_135));
#line 1000 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "prog_io.m"
                                }
#line 999 "prog_io.m"
                                {
#line 999 "prog_io.m"
                                  parse_tree__prog_io__Spec_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 999 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_218, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 999 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_218, 2) = ((MR_Box) (parse_tree__prog_io__V_134_134));
#line 999 "prog_io.m"
                                }
#line 1001 "prog_io.m"
                                {
#line 1001 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_139_139, 0) = ((MR_Box) (parse_tree__prog_io__Spec_218));
#line 1001 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_139_139, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_82));
#line 1001 "prog_io.m"
                                }
#line 1008 "prog_io.m"
                                {
#line 1008 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 1008 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_225));
#line 1008 "prog_io.m"
                                }
#line 997 "prog_io.m"
                              }
#line 987 "prog_io.m"
                          }
#line 986 "prog_io.m"
                        else
#line 984 "prog_io.m"
                          {
#line 984 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawStartModuleName_54, (MR_Integer) 0)));

#line 985 "prog_io.m"
                            {
#line 985 "prog_io.m"
                              parse_tree__prog_io__StartModuleName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 985 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_57));
#line 985 "prog_io.m"
                            }
#line 984 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_139_139 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 984 "prog_io.m"
                          }
#line 1011 "prog_io.m"
                        {
#line 1011 "prog_io.m"
                          parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__MaybePrevSection_23, parse_tree__prog_io__StartModuleName_58, parse_tree__prog_io__StartContext_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__SubModuleFinalLookAhead_60, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_141_141, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_142_142, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_143_143, parse_tree__prog_io__STATE_VARIABLE_Specs_139_139, &parse_tree__prog_io__STATE_VARIABLE_Specs_144_144, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_145_145);
                        }
#line 1016 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1016 "prog_io.m"
                        {
#line 1016 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__SubModuleFinalLookAhead_60;
#line 1016 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_141_141;
#line 1016 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_142_142;
#line 1016 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_143_143;
#line 1016 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_144_144;
#line 1016 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_145_145;

#line 1016 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 1016 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 1016 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 1016 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 1016 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 1016 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1016 "prog_io.m"
                        }
#line 1016 "prog_io.m"
                        continue;
#line 982 "prog_io.m"
                      }
#line 968 "prog_io.m"
                      break;
#line 968 "prog_io.m"
                    case (MR_Integer) 3:
#line 1073 "prog_io.m"
                      {
#line 1073 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndedModuleName_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 1073 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndContext_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 1072 "prog_io.m"
                        MR_Integer parse_tree__prog_io___EndSeqNum_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));

#line 1074 "prog_io.m"
                        {
#line 1074 "prog_io.m"
                          parse_tree__prog_io__handle_module_end_marker_11_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__IOMVarSet_259, parse_tree__prog_io__IOMTerm_260, parse_tree__prog_io__EndedModuleName_72, parse_tree__prog_io__EndContext_73, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, parse_tree__prog_io__STATE_VARIABLE_Specs_83, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, parse_tree__prog_io__STATE_VARIABLE_Errors_85);
                        }
#line 1073 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76;
#line 1073 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78;
#line 1073 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1073 "prog_io.m"
                      }
#line 968 "prog_io.m"
                      break;
#line 968 "prog_io.m"
                    case (MR_Integer) 4:
#line 1027 "prog_io.m"
                      {
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_96_96;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_97_97;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_98_98;
#line 1027 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_105_105;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_113_113;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_243;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_244;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_245;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__InclsCord_247;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__AvailsCord_248;
#line 1027 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_249;
#line 1057 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_71_71;

#line 1032 "prog_io.m"
#line 1032 "prog_io.m"
                        switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_49)) {
#line 1032 "prog_io.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1032 "prog_io.m"
                          case (MR_Integer) 0:
#line 1032 "prog_io.m"
                          case (MR_Integer) 1:
#line 1032 "prog_io.m"
                          case (MR_Integer) 2:
#line 1036 "prog_io.m"
                            {
#line 1042 "prog_io.m"
                              if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1043 "prog_io.m"
                                {
#line 1043 "prog_io.m"
                                  MR_Word parse_tree__prog_io__Context_233;
#line 1045 "prog_io.m"
                                  MR_Word parse_tree__prog_io___MissingStartSectionWarning_232;

#line 1044 "prog_io.m"
                                  {
#line 1044 "prog_io.m"
                                    parse_tree__prog_io__Context_233 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_260);
                                  }
#line 1045 "prog_io.m"
                                  {
#line 1045 "prog_io.m"
                                    parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_233, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75, &parse_tree__prog_io___MissingStartSectionWarning_232, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, &parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_93_93);
                                  }
#line 1050 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_243 = (MR_Integer) 1;
#line 1051 "prog_io.m"
                                  {
#line 1051 "prog_io.m"
                                    parse_tree__prog_io__SectionContext_244 = mercury__term__context_init_0_f_0();
                                  }
#line 1043 "prog_io.m"
                                }
#line 1042 "prog_io.m"
                              else
#line 1038 "prog_io.m"
                                {
#line 1038 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 1038 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 0)));
#line 1038 "prog_io.m"
                                  parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 1)));
#line 1038 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1038 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1038 "prog_io.m"
                                }
#line 1053 "prog_io.m"
                              {
#line 1053 "prog_io.m"
                                parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_259));
#line 1053 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_260));
#line 1053 "prog_io.m"
                              }
#line 1036 "prog_io.m"
                            }
#line 1032 "prog_io.m"
                            break;
#line 1032 "prog_io.m"
                          case (MR_Integer) 3:
#line 1030 "prog_io.m"
                            {
#line 1029 "prog_io.m"
                              MR_Integer parse_tree__prog_io___SectionSeqNum_67;

#line 1029 "prog_io.m"
                              parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 1029 "prog_io.m"
                              parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 1029 "prog_io.m"
                              parse_tree__prog_io___SectionSeqNum_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));
#line 1031 "prog_io.m"
                              parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1030 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1030 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1030 "prog_io.m"
                            }
#line 1032 "prog_io.m"
                            break;
#line 1032 "prog_io.m"
                        }
#line 1059 "prog_io.m"
                        {
#line 1059 "prog_io.m"
                          parse_tree__prog_io__V_96_96 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
                        }
#line 1060 "prog_io.m"
                        {
#line 1060 "prog_io.m"
                          parse_tree__prog_io__V_97_97 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
                        }
#line 1060 "prog_io.m"
                        {
#line 1060 "prog_io.m"
                          parse_tree__prog_io__V_98_98 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                        }
#line 1057 "prog_io.m"
                        {
#line 1057 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_245, &parse_tree__prog_io__ItemSeqFinalLookAhead_246, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_71_71, parse_tree__prog_io__V_96_96, &parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__V_97_97, &parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__V_98_98, &parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100, parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, &parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Errors_93_93, &parse_tree__prog_io__STATE_VARIABLE_Errors_102_102);
                        }
#line 1062 "prog_io.m"
                        {
#line 1062 "prog_io.m"
                          parse_tree__prog_io__add_section_component_7_p_0(parse_tree__prog_io__SectionKind_243, parse_tree__prog_io__SectionContext_244, parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104);
                        }
#line 1067 "prog_io.m"
                        {
#line 1067 "prog_io.m"
                          parse_tree__prog_io__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_243));
#line 1067 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_244));
#line 1067 "prog_io.m"
                        }
#line 1067 "prog_io.m"
                        {
#line 1067 "prog_io.m"
                          parse_tree__prog_io__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io__V_113_113));
#line 1067 "prog_io.m"
                        }
#line 1066 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1066 "prog_io.m"
                        {
#line 1066 "prog_io.m"
                          MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_105_105;
#line 1066 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1066 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1066 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1066 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1066 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1066 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;

#line 1066 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 1066 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 1066 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 1066 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 1066 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 1066 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1066 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75 = (MR_Integer) 0;
#line 1066 "prog_io.m"
                          parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 1066 "prog_io.m"
                        }
#line 1066 "prog_io.m"
                        continue;
#line 1027 "prog_io.m"
                      }
#line 968 "prog_io.m"
                      break;
#line 968 "prog_io.m"
                  }
#line 968 "prog_io.m"
                  break;
#line 968 "prog_io.m"
              }
#line 960 "prog_io.m"
            }
#line 921 "prog_io.m"
            break;
#line 921 "prog_io.m"
        }
#line 914 "prog_io.m"
      }
#line 914 "prog_io.m"
      break;
#line 914 "prog_io.m"
    }
#line 902 "prog_io.m"
}

#line 835 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 835 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 835 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 835 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 835 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 835 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28)
#line 835 "prog_io.m"
{
#line 842 "prog_io.m"
  {
#line 842 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_17;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__InitLookAhead_18;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_19;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_20;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__FinalLookAhead_25;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleComponents_26;
#line 842 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_35_35;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37;
#line 842 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_41_41;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_42_42;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 842 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_48_48;
#line 842 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_49_49;

#line 842 "prog_io.m"
    {
#line 842 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 843 "prog_io.m"
    {
#line 843 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32);
    }
#line 845 "prog_io.m"
    {
#line 845 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_35_35);
    }
#line 846 "prog_io.m"
    {
#line 846 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37);
    }
#line 850 "prog_io.m"
    {
#line 850 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 0, parse_tree__prog_io__DefaultModuleName_9, &parse_tree__prog_io__ModuleDeclPresent_17, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, parse_tree__prog_io__STATE_VARIABLE_Errors_35_35, &parse_tree__prog_io__STATE_VARIABLE_Errors_42_42);
    }
#line 867 "prog_io.m"
#line 867 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_17)) {
#line 867 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "prog_io.m"
      case (MR_Integer) 0:
#line 854 "prog_io.m"
        {
#line 854 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 858 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = parse_tree__prog_io__DefaultModuleName_9;
#line 862 "prog_io.m"
          if ((parse_tree__prog_io__InitLookAhead_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 861 "prog_io.m"
            {
#line 861 "prog_io.m"
              parse_tree__prog_io__ModuleNameContext_20 = mercury__term__context_init_0_f_0();
            }
#line 862 "prog_io.m"
          else
#line 864 "prog_io.m"
            {
#line 864 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAheadTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 1)));
#line 863 "prog_io.m"
              MR_Word parse_tree__prog_io___InitLookAheadVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 0)));

#line 865 "prog_io.m"
              {
#line 865 "prog_io.m"
                parse_tree__prog_io__ModuleNameContext_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__InitLookAheadTerm_22);
              }
#line 864 "prog_io.m"
            }
#line 854 "prog_io.m"
        }
#line 867 "prog_io.m"
        break;
#line 867 "prog_io.m"
      case (MR_Integer) 1:
#line 871 "prog_io.m"
        {
#line 870 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 870 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 872 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "prog_io.m"
        }
#line 867 "prog_io.m"
        break;
#line 867 "prog_io.m"
      case (MR_Integer) 2:
#line 875 "prog_io.m"
        {
#line 874 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 874 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 876 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "prog_io.m"
        }
#line 867 "prog_io.m"
        break;
#line 867 "prog_io.m"
    }
#line 884 "prog_io.m"
    {
#line 884 "prog_io.m"
      parse_tree__prog_io__V_45_45 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 881 "prog_io.m"
    {
#line 881 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_18, &parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__V_45_45, &parse_tree__prog_io__ModuleComponents_26, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Errors_42_42, &parse_tree__prog_io__STATE_VARIABLE_Errors_49_49);
    }
#line 886 "prog_io.m"
    {
#line 886 "prog_io.m"
      parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_27, parse_tree__prog_io__STATE_VARIABLE_Errors_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_28);
    }
#line 888 "prog_io.m"
    {
#line 888 "prog_io.m"
      MR_Word base;
#line 888 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 888 "prog_io.m"
      *parse_tree__prog_io__ParseTree_10 = base;
#line 888 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_19));
#line 888 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_20));
#line 888 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleComponents_26));
#line 888 "prog_io.m"
    }
#line 842 "prog_io.m"
  }
#line 835 "prog_io.m"
}

#line 787 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_21,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_22,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 787 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_40,
#line 787 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_41,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_42,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_43,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_44,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_45,
#line 787 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_46,
#line 787 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_47)
#line 787 "prog_io.m"
{
#line 797 "prog_io.m"
  {
#line 797 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_62_62;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_63_63;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_64_64;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_32;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_33;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__InclsCord_34;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__AvailsCord_35;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemsCord_36;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__RawItemBlock_37;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__V_51_51;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__V_52_52;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__V_53_53;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__V_59_59;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__V_60_60;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__V_61_61;

#line 799 "prog_io.m"
    {
#line 799 "prog_io.m"
      parse_tree__prog_io__SectionContext_32 = mercury__term__context_init_0_f_0();
    }
#line 800 "prog_io.m"
    {
#line 800 "prog_io.m"
      parse_tree__prog_io__ItemSeqInitLookAhead_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_33, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_21));
#line 800 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_33, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_22));
#line 800 "prog_io.m"
    }
#line 11344 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 803 "prog_io.m"
    {
#line 803 "prog_io.m"
      parse_tree__prog_io__V_51_51 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_62_62);
    }
#line 11351 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 803 "prog_io.m"
    {
#line 803 "prog_io.m"
      parse_tree__prog_io__V_52_52 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_63_63);
    }
#line 11358 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 803 "prog_io.m"
    {
#line 803 "prog_io.m"
      parse_tree__prog_io__V_53_53 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_64_64);
    }
#line 801 "prog_io.m"
    {
#line 801 "prog_io.m"
      parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__ItemSeqInitLookAhead_33, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38, parse_tree__prog_io__STATE_VARIABLE_VNInfo_39, parse_tree__prog_io__V_51_51, &parse_tree__prog_io__InclsCord_34, parse_tree__prog_io__V_52_52, &parse_tree__prog_io__AvailsCord_35, parse_tree__prog_io__V_53_53, &parse_tree__prog_io__ItemsCord_36, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_40, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_41, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_42, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_43, parse_tree__prog_io__STATE_VARIABLE_Specs_0_44, parse_tree__prog_io__STATE_VARIABLE_Specs_45, parse_tree__prog_io__STATE_VARIABLE_Errors_0_46, parse_tree__prog_io__STATE_VARIABLE_Errors_47);
    }
#line 806 "prog_io.m"
    {
#line 806 "prog_io.m"
      parse_tree__prog_io__V_59_59 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_62_62, parse_tree__prog_io__InclsCord_34);
    }
#line 806 "prog_io.m"
    {
#line 806 "prog_io.m"
      parse_tree__prog_io__V_60_60 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_63_63, parse_tree__prog_io__AvailsCord_35);
    }
#line 806 "prog_io.m"
    {
#line 806 "prog_io.m"
      parse_tree__prog_io__V_61_61 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_64_64, parse_tree__prog_io__ItemsCord_36);
    }
#line 805 "prog_io.m"
    {
#line 805 "prog_io.m"
      parse_tree__prog_io__RawItemBlock_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 805 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 0) = ((MR_Box) ((MR_Integer) 0));
#line 805 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_32));
#line 805 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 2) = ((MR_Box) (parse_tree__prog_io__V_59_59));
#line 805 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 3) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 805 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 4) = ((MR_Box) (parse_tree__prog_io__V_61_61));
#line 805 "prog_io.m"
    }
#line 807 "prog_io.m"
    {
#line 807 "prog_io.m"
      MR_Word base;
#line 807 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 807 "prog_io.m"
      *parse_tree__prog_io__MaybeRawItemBlock_25 = base;
#line 807 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_37));
#line 807 "prog_io.m"
    }
#line 797 "prog_io.m"
  }
#line 787 "prog_io.m"
}

#line 744 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_int_8_p_0(
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 744 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 744 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 744 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 744 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 744 "prog_io.m"
{
#line 754 "prog_io.m"
  {
#line 754 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 754 "prog_io.m"
#line 754 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 754 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 754 "prog_io.m"
      case (MR_Integer) 1:
#line 782 "prog_io.m"
        {
#line 782 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 782 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 782 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 782 "prog_io.m"
        }
#line 754 "prog_io.m"
        break;
#line 754 "prog_io.m"
      case (MR_Integer) 0:
#line 754 "prog_io.m"
        {
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_15;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__V_25_25;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__V_28_28;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__V_29_29;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__V_64_64;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__V_65_65;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__V_66_66;
#line 754 "prog_io.m"
          MR_Word parse_tree__prog_io__V_67_67;

#line 755 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 770 "prog_io.m"
          {
#line 770 "prog_io.m"
            parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 770 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_9));
#line 770 "prog_io.m"
          }
#line 770 "prog_io.m"
          {
#line 770 "prog_io.m"
            parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 770 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[24])));
#line 770 "prog_io.m"
          }
#line 770 "prog_io.m"
          {
#line 770 "prog_io.m"
            parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[81])));
#line 770 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 770 "prog_io.m"
          }
#line 769 "prog_io.m"
          {
#line 769 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[2])));
#line 769 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 769 "prog_io.m"
          }
#line 778 "prog_io.m"
          {
#line 778 "prog_io.m"
            parse_tree__prog_io__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 778 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 778 "prog_io.m"
          }
#line 778 "prog_io.m"
          {
#line 778 "prog_io.m"
            parse_tree__prog_io__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 778 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "prog_io.m"
          }
#line 778 "prog_io.m"
          {
#line 778 "prog_io.m"
            parse_tree__prog_io__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io__Context_10));
#line 778 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io__V_66_66));
#line 778 "prog_io.m"
          }
#line 778 "prog_io.m"
          {
#line 778 "prog_io.m"
            parse_tree__prog_io__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 778 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "prog_io.m"
          }
#line 777 "prog_io.m"
          {
#line 777 "prog_io.m"
            parse_tree__prog_io__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 777 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 777 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 777 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_64_64));
#line 777 "prog_io.m"
          }
#line 779 "prog_io.m"
          {
#line 779 "prog_io.m"
            MR_Word base;
#line 779 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = base;
#line 779 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_15));
#line 779 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_18));
#line 779 "prog_io.m"
          }
#line 780 "prog_io.m"
          {
#line 780 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_20, parse_tree__prog_io__STATE_VARIABLE_Errors_21);
#line 780 "prog_io.m"
            return;
          }
#line 754 "prog_io.m"
        }
#line 754 "prog_io.m"
        break;
#line 754 "prog_io.m"
    }
#line 754 "prog_io.m"
  }
#line 744 "prog_io.m"
}

#line 649 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_18_p_0(
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_59,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 649 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60,
#line 649 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_64,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_65,
#line 649 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_66,
#line 649 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_67)
#line 649 "prog_io.m"
{
#line 660 "prog_io.m"
  while (MR_TRUE)
#line 660 "prog_io.m"
    {
#line 660 "prog_io.m"
      /* tailcall optimized into a loop */
#line 660 "prog_io.m"
      {
#line 660 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 660 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_31;
#line 660 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;

#line 661 "prog_io.m"
        {
#line 661 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_22, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, &parse_tree__prog_io__ReadIOMResult_31, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70);
        }
#line 668 "prog_io.m"
#line 668 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_31)) {
#line 668 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 668 "prog_io.m"
          case (MR_Integer) 0:
#line 664 "prog_io.m"
            {
#line 666 "prog_io.m"
              *parse_tree__prog_io__MaybeRawItemBlock_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 664 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_59 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58;
#line 664 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60;
#line 664 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 664 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_65 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_64;
#line 664 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_67 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_66;
#line 664 "prog_io.m"
            }
#line 668 "prog_io.m"
            break;
#line 668 "prog_io.m"
          case (MR_Integer) 1:
#line 669 "prog_io.m"
            {
#line 669 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_32 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_31), (MR_Integer) 1);
#line 669 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_117_117;
#line 669 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_119_119;

#line 672 "prog_io.m"
              {
#line 672 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_117_117, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_32));
#line 672 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_117_117, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_64));
#line 672 "prog_io.m"
              }
#line 673 "prog_io.m"
              {
#line 673 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, &parse_tree__prog_io__STATE_VARIABLE_Errors_119_119);
              }
#line 674 "prog_io.m"
              /* direct tailcall eliminated */
#line 674 "prog_io.m"
              {
#line 674 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 674 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_117_117;
#line 674 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_66 = parse_tree__prog_io__STATE_VARIABLE_Errors_119_119;

#line 674 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_66 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_66;
#line 674 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 674 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62;
#line 674 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "prog_io.m"
              }
#line 674 "prog_io.m"
              continue;
#line 669 "prog_io.m"
            }
#line 668 "prog_io.m"
            break;
#line 668 "prog_io.m"
          case (MR_Integer) 2:
#line 680 "prog_io.m"
            {
#line 680 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 0)));
#line 680 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 1)));
#line 680 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_37;
#line 680 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_109_109;
#line 680 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_110_110;
#line 679 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemSpecs_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 2)));
#line 679 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemErrors_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 3)));
#line 686 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_38;

#line 681 "prog_io.m"
              {
#line 681 "prog_io.m"
                parse_tree__prog_io__Context_37 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_34);
              }
#line 686 "prog_io.m"
              {
#line 686 "prog_io.m"
                parse_tree__prog_io__generate_missing_start_section_warning_int_8_p_0(parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__Context_37, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57, &parse_tree__prog_io___MissingStartSectionWarning_38, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, &parse_tree__prog_io__STATE_VARIABLE_Specs_109_109, parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, &parse_tree__prog_io__STATE_VARIABLE_Errors_110_110);
              }
#line 689 "prog_io.m"
              {
#line 689 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__IOMVarSet_33, parse_tree__prog_io__IOMTerm_34, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, parse_tree__prog_io__STATE_VARIABLE_VNInfo_59, parse_tree__prog_io__MaybeRawItemBlock_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63, parse_tree__prog_io__STATE_VARIABLE_Specs_109_109, parse_tree__prog_io__STATE_VARIABLE_Specs_65, parse_tree__prog_io__STATE_VARIABLE_Errors_110_110, parse_tree__prog_io__STATE_VARIABLE_Errors_67);
#line 689 "prog_io.m"
                return;
              }
#line 680 "prog_io.m"
            }
#line 668 "prog_io.m"
            break;
#line 668 "prog_io.m"
          case (MR_Integer) 3:
#line 694 "prog_io.m"
            {
#line 694 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 2)));
#line 694 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 0)));
#line 694 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 1)));

#line 701 "prog_io.m"
#line 701 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_39)) {
#line 701 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 701 "prog_io.m"
                case (MR_Integer) 0:
#line 701 "prog_io.m"
                case (MR_Integer) 1:
#line 701 "prog_io.m"
                case (MR_Integer) 2:
#line 723 "prog_io.m"
                  {
#line 723 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_72_72;
#line 723 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_73_73;
#line 723 "prog_io.m"
                    MR_Word parse_tree__prog_io__Context_128;
#line 728 "prog_io.m"
                    MR_Word parse_tree__prog_io___MissingStartSectionWarning_127;

#line 724 "prog_io.m"
                    {
#line 724 "prog_io.m"
                      parse_tree__prog_io__Context_128 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_133);
                    }
#line 728 "prog_io.m"
                    {
#line 728 "prog_io.m"
                      parse_tree__prog_io__generate_missing_start_section_warning_int_8_p_0(parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__Context_128, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57, &parse_tree__prog_io___MissingStartSectionWarning_127, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, &parse_tree__prog_io__STATE_VARIABLE_Specs_72_72, parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, &parse_tree__prog_io__STATE_VARIABLE_Errors_73_73);
                    }
#line 731 "prog_io.m"
                    {
#line 731 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__IOMVarSet_132, parse_tree__prog_io__IOMTerm_133, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, parse_tree__prog_io__STATE_VARIABLE_VNInfo_59, parse_tree__prog_io__MaybeRawItemBlock_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63, parse_tree__prog_io__STATE_VARIABLE_Specs_72_72, parse_tree__prog_io__STATE_VARIABLE_Specs_65, parse_tree__prog_io__STATE_VARIABLE_Errors_73_73, parse_tree__prog_io__STATE_VARIABLE_Errors_67);
#line 731 "prog_io.m"
                      return;
                    }
#line 723 "prog_io.m"
                  }
#line 701 "prog_io.m"
                  break;
#line 701 "prog_io.m"
                case (MR_Integer) 3:
#line 701 "prog_io.m"
#line 701 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 0)))) {
#line 701 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 701 "prog_io.m"
                    case (MR_Integer) 0:
#line 713 "prog_io.m"
                      {
#line 713 "prog_io.m"
                        MR_Word parse_tree__prog_io__MVN_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));
#line 713 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_80_80;
#line 713 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_81_81;

#line 714 "prog_io.m"
                        {
#line 714 "prog_io.m"
                          parse_tree__prog_io__record_version_numbers_6_p_0(parse_tree__prog_io__MVN_47, parse_tree__prog_io__IOMTerm_133, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_80_80, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, &parse_tree__prog_io__STATE_VARIABLE_Specs_81_81);
                        }
#line 715 "prog_io.m"
                        /* direct tailcall eliminated */
#line 715 "prog_io.m"
                        {
#line 715 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_58 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_80_80;
#line 715 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 715 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_81_81;

#line 715 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 715 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62;
#line 715 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_58;
#line 715 "prog_io.m"
                        }
#line 715 "prog_io.m"
                        continue;
#line 713 "prog_io.m"
                      }
#line 701 "prog_io.m"
                      break;
#line 701 "prog_io.m"
                    case (MR_Integer) 1:
#line 696 "prog_io.m"
                      {
#line 696 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));

#line 697 "prog_io.m"
                        /* direct tailcall eliminated */
#line 697 "prog_io.m"
                        {
#line 697 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_60 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_101;
#line 697 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;

#line 697 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62;
#line 697 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_60;
#line 697 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "prog_io.m"
                        }
#line 697 "prog_io.m"
                        continue;
#line 696 "prog_io.m"
                      }
#line 701 "prog_io.m"
                      break;
#line 701 "prog_io.m"
                    case (MR_Integer) 2:
#line 701 "prog_io.m"
                    case (MR_Integer) 3:
#line 738 "prog_io.m"
                      {
#line 739 "prog_io.m"
                        {
#line 739 "prog_io.m"
                          MR_Word base;
#line 739 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "prog_io.m"
                          *parse_tree__prog_io__FinalLookAhead_23 = base;
#line 739 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_132));
#line 739 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_133));
#line 739 "prog_io.m"
                        }
#line 740 "prog_io.m"
                        *parse_tree__prog_io__MaybeRawItemBlock_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_VNInfo_59 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58;
#line 738 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60;
#line 738 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 738 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_65 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_64;
#line 738 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Errors_67 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_66;
#line 738 "prog_io.m"
                      }
#line 701 "prog_io.m"
                      break;
#line 701 "prog_io.m"
                    case (MR_Integer) 4:
#line 703 "prog_io.m"
                      {
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_139_139;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_140_140;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 2)));
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__InclsCord_43;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__AvailsCord_44;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_45;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawItemBlock_46;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_90_90;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_91_91;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_92_92;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_98_98;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_99_99;
#line 703 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_100_100;
#line 702 "prog_io.m"
                        MR_Integer parse_tree__prog_io___SectionSeqNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 3)));

#line 705 "prog_io.m"
                        {
#line 705 "prog_io.m"
                          parse_tree__prog_io__V_90_90 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_138_138);
                        }
#line 11999 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 706 "prog_io.m"
                        {
#line 706 "prog_io.m"
                          parse_tree__prog_io__V_91_91 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_139_139);
                        }
#line 12006 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 706 "prog_io.m"
                        {
#line 706 "prog_io.m"
                          parse_tree__prog_io__V_92_92 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_140_140);
                        }
#line 704 "prog_io.m"
                        {
#line 704 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, parse_tree__prog_io__STATE_VARIABLE_VNInfo_59, parse_tree__prog_io__V_90_90, &parse_tree__prog_io__InclsCord_43, parse_tree__prog_io__V_91_91, &parse_tree__prog_io__AvailsCord_44, parse_tree__prog_io__V_92_92, &parse_tree__prog_io__ItemsCord_45, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, parse_tree__prog_io__STATE_VARIABLE_Specs_65, parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, parse_tree__prog_io__STATE_VARIABLE_Errors_67);
                        }
#line 709 "prog_io.m"
                        {
#line 709 "prog_io.m"
                          parse_tree__prog_io__V_98_98 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_138_138, parse_tree__prog_io__InclsCord_43);
                        }
#line 709 "prog_io.m"
                        {
#line 709 "prog_io.m"
                          parse_tree__prog_io__V_99_99 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_139_139, parse_tree__prog_io__AvailsCord_44);
                        }
#line 710 "prog_io.m"
                        {
#line 710 "prog_io.m"
                          parse_tree__prog_io__V_100_100 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_140_140, parse_tree__prog_io__ItemsCord_45);
                        }
#line 708 "prog_io.m"
                        {
#line 708 "prog_io.m"
                          parse_tree__prog_io__RawItemBlock_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_40));
#line 708 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_41));
#line 708 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 2) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 708 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 3) = ((MR_Box) (parse_tree__prog_io__V_99_99));
#line 708 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 4) = ((MR_Box) (parse_tree__prog_io__V_100_100));
#line 708 "prog_io.m"
                        }
#line 711 "prog_io.m"
                        {
#line 711 "prog_io.m"
                          MR_Word base;
#line 711 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 711 "prog_io.m"
                          *parse_tree__prog_io__MaybeRawItemBlock_25 = base;
#line 711 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_46));
#line 711 "prog_io.m"
                        }
#line 703 "prog_io.m"
                      }
#line 701 "prog_io.m"
                      break;
#line 701 "prog_io.m"
                  }
#line 701 "prog_io.m"
                  break;
#line 701 "prog_io.m"
              }
#line 694 "prog_io.m"
            }
#line 668 "prog_io.m"
            break;
#line 668 "prog_io.m"
        }
#line 660 "prog_io.m"
      }
#line 660 "prog_io.m"
      break;
#line 660 "prog_io.m"
    }
#line 649 "prog_io.m"
}

#line 614 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_18,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_19,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_34,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_23,
#line 614 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35,
#line 614 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_39,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_40,
#line 614 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_41,
#line 614 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42)
#line 614 "prog_io.m"
{
#line 623 "prog_io.m"
  {
#line 623 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 623 "prog_io.m"
    MR_Word parse_tree__prog_io__MidLookAhead_29;
#line 623 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeHeadRawItemBlock_30;
#line 623 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46;
#line 623 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47;
#line 623 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48;
#line 623 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 623 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;

#line 624 "prog_io.m"
    {
#line 624 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_section_18_p_0(parse_tree__prog_io__Globals_18, parse_tree__prog_io__CurModuleName_19, (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_20, &parse_tree__prog_io__MidLookAhead_29, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46, &parse_tree__prog_io__MaybeHeadRawItemBlock_30, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_0_39, &parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_0_41, &parse_tree__prog_io__STATE_VARIABLE_Errors_50_50);
    }
#line 632 "prog_io.m"
    if ((parse_tree__prog_io__MaybeHeadRawItemBlock_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "prog_io.m"
      {
#line 630 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_21 = parse_tree__prog_io__MidLookAhead_29;
#line 631 "prog_io.m"
        *parse_tree__prog_io__RawItemBlocks_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_VNInfo_34 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46;
#line 629 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47;
#line 629 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48;
#line 629 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_40 = parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 629 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_42 = parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;
#line 629 "prog_io.m"
      }
#line 632 "prog_io.m"
    else
#line 633 "prog_io.m"
      {
#line 633 "prog_io.m"
        MR_Word parse_tree__prog_io__HeadRawItemBlock_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeHeadRawItemBlock_30, (MR_Integer) 0)));
#line 633 "prog_io.m"
        MR_Word parse_tree__prog_io__TailRawItemBlocks_32;

#line 634 "prog_io.m"
        {
#line 634 "prog_io.m"
          parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(parse_tree__prog_io__Globals_18, parse_tree__prog_io__CurModuleName_19, parse_tree__prog_io__MidLookAhead_29, parse_tree__prog_io__FinalLookAhead_21, parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46, parse_tree__prog_io__STATE_VARIABLE_VNInfo_34, &parse_tree__prog_io__TailRawItemBlocks_32, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_40, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
        }
#line 637 "prog_io.m"
        {
#line 637 "prog_io.m"
          MR_Word base;
#line 637 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "prog_io.m"
          *parse_tree__prog_io__RawItemBlocks_23 = base;
#line 637 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__HeadRawItemBlock_31));
#line 637 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__TailRawItemBlocks_32));
#line 637 "prog_io.m"
        }
#line 633 "prog_io.m"
      }
#line 623 "prog_io.m"
  }
#line 614 "prog_io.m"
}

#line 576 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__separate_int_imp_items_7_p_0(
#line 576 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_2,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__4_4,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__5_5,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__6_6,
#line 576 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__7_7)
#line 576 "prog_io.m"
{
#line 581 "prog_io.m"
  {
#line 581 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 581 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "prog_io.m"
      {
#line 581 "prog_io.m"
        *parse_tree__prog_io__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "prog_io.m"
        *parse_tree__prog_io__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "prog_io.m"
        *parse_tree__prog_io__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "prog_io.m"
        *parse_tree__prog_io__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "prog_io.m"
        *parse_tree__prog_io__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "prog_io.m"
        *parse_tree__prog_io__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "prog_io.m"
      }
#line 581 "prog_io.m"
    else
#line 583 "prog_io.m"
      {
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemBlock_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__IntIncls0_16;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__ImpIncls0_17;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__IntAvails0_18;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__ImpAvails0_19;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__IntItems0_20;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__ImpItems0_21;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__Section_22;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__Incls_24;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__Avails_25;
#line 583 "prog_io.m"
        MR_Word parse_tree__prog_io__Items_26;
#line 586 "prog_io.m"
        MR_Word parse_tree__prog_io___Context_23;

#line 584 "prog_io.m"
        {
#line 584 "prog_io.m"
          parse_tree__prog_io__separate_int_imp_items_7_p_0(parse_tree__prog_io__ItemBlocks_9, &parse_tree__prog_io__IntIncls0_16, &parse_tree__prog_io__ImpIncls0_17, &parse_tree__prog_io__IntAvails0_18, &parse_tree__prog_io__ImpAvails0_19, &parse_tree__prog_io__IntItems0_20, &parse_tree__prog_io__ImpItems0_21);
        }
#line 586 "prog_io.m"
        parse_tree__prog_io__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 0)));
#line 586 "prog_io.m"
        parse_tree__prog_io___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 1)));
#line 586 "prog_io.m"
        parse_tree__prog_io__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 2)));
#line 586 "prog_io.m"
        parse_tree__prog_io__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 3)));
#line 586 "prog_io.m"
        parse_tree__prog_io__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 4)));
#line 595 "prog_io.m"
#line 595 "prog_io.m"
        switch (parse_tree__prog_io__Section_22) {
#line 595 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 595 "prog_io.m"
          case (MR_Integer) 1:
#line 596 "prog_io.m"
            {
#line 597 "prog_io.m"
              *parse_tree__prog_io__HeadVar__2_2 = parse_tree__prog_io__IntIncls0_16;
#line 598 "prog_io.m"
              *parse_tree__prog_io__HeadVar__4_4 = parse_tree__prog_io__IntAvails0_18;
#line 599 "prog_io.m"
              *parse_tree__prog_io__HeadVar__6_6 = parse_tree__prog_io__IntItems0_20;
#line 600 "prog_io.m"
              {
#line 600 "prog_io.m"
                *parse_tree__prog_io__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__Incls_24, parse_tree__prog_io__ImpIncls0_17);
              }
#line 601 "prog_io.m"
              {
#line 601 "prog_io.m"
                *parse_tree__prog_io__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io__Avails_25, parse_tree__prog_io__ImpAvails0_19);
              }
#line 602 "prog_io.m"
              {
#line 602 "prog_io.m"
                *parse_tree__prog_io__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__Items_26, parse_tree__prog_io__ImpItems0_21);
              }
#line 596 "prog_io.m"
            }
#line 595 "prog_io.m"
            break;
#line 595 "prog_io.m"
          case (MR_Integer) 0:
#line 588 "prog_io.m"
            {
#line 589 "prog_io.m"
              {
#line 589 "prog_io.m"
                *parse_tree__prog_io__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__Incls_24, parse_tree__prog_io__IntIncls0_16);
              }
#line 590 "prog_io.m"
              {
#line 590 "prog_io.m"
                *parse_tree__prog_io__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io__Avails_25, parse_tree__prog_io__IntAvails0_18);
              }
#line 591 "prog_io.m"
              {
#line 591 "prog_io.m"
                *parse_tree__prog_io__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__Items_26, parse_tree__prog_io__IntItems0_20);
              }
#line 592 "prog_io.m"
              *parse_tree__prog_io__HeadVar__3_3 = parse_tree__prog_io__ImpIncls0_17;
#line 593 "prog_io.m"
              *parse_tree__prog_io__HeadVar__5_5 = parse_tree__prog_io__ImpAvails0_19;
#line 594 "prog_io.m"
              *parse_tree__prog_io__HeadVar__7_7 = parse_tree__prog_io__ImpItems0_21;
#line 588 "prog_io.m"
            }
#line 595 "prog_io.m"
            break;
#line 595 "prog_io.m"
        }
#line 583 "prog_io.m"
      }
#line 581 "prog_io.m"
  }
#line 576 "prog_io.m"
}

#line 498 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 498 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 498 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 498 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 498 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 498 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_41,
#line 498 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42)
#line 498 "prog_io.m"
{
#line 503 "prog_io.m"
  {
#line 503 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 503 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_17;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_19;
#line 503 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName1_20;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter1_21;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_26;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_27;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeVersionNumbers_28;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__IntIncls_29;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__ImpIncls_30;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__IntAvails_31;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__ImpAvails_32;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__IntItems_33;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__ImpItems_34;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_48_48;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_51_51;
#line 503 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_52_52;

#line 504 "prog_io.m"
    {
#line 504 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 505 "prog_io.m"
    {
#line 505 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__SourceFileName0_17);
    }
#line 507 "prog_io.m"
    {
#line 507 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_48_48);
    }
#line 508 "prog_io.m"
    {
#line 508 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 512 "prog_io.m"
    {
#line 512 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, parse_tree__prog_io__STATE_VARIABLE_Errors_48_48, &parse_tree__prog_io__STATE_VARIABLE_Errors_52_52);
    }
#line 534 "prog_io.m"
#line 534 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 534 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 534 "prog_io.m"
      case (MR_Integer) 0:
#line 516 "prog_io.m"
        {
#line 516 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAhead_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 516 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAheadContext_23;

#line 520 "prog_io.m"
          if ((parse_tree__prog_io__LookAhead_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "prog_io.m"
            {
#line 519 "prog_io.m"
              {
#line 519 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName0_17));
#line 519 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 519 "prog_io.m"
              }
#line 518 "prog_io.m"
            }
#line 520 "prog_io.m"
          else
#line 521 "prog_io.m"
            {
#line 521 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAheadTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 1)));
#line 521 "prog_io.m"
              MR_Word parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 0)));

#line 522 "prog_io.m"
              {
#line 522 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__LookAheadTerm_25);
              }
#line 521 "prog_io.m"
            }
#line 524 "prog_io.m"
          {
#line 524 "prog_io.m"
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, parse_tree__prog_io__STATE_VARIABLE_Specs_41, parse_tree__prog_io__STATE_VARIABLE_Errors_52_52, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
          }
#line 525 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 526 "prog_io.m"
          {
#line 526 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 527 "prog_io.m"
          parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "prog_io.m"
          parse_tree__prog_io__IntIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "prog_io.m"
          parse_tree__prog_io__ImpIncls_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "prog_io.m"
          parse_tree__prog_io__IntAvails_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 531 "prog_io.m"
          parse_tree__prog_io__ImpAvails_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "prog_io.m"
          parse_tree__prog_io__IntItems_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "prog_io.m"
          parse_tree__prog_io__ImpItems_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "prog_io.m"
        }
#line 534 "prog_io.m"
        break;
#line 534 "prog_io.m"
      case (MR_Integer) 1:
#line 536 "prog_io.m"
        {
#line 535 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 535 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 537 "prog_io.m"
          {
#line 537 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, parse_tree__prog_io__STATE_VARIABLE_Specs_41, parse_tree__prog_io__STATE_VARIABLE_Errors_52_52, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
          }
#line 539 "prog_io.m"
          parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "prog_io.m"
          parse_tree__prog_io__IntIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "prog_io.m"
          parse_tree__prog_io__ImpIncls_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "prog_io.m"
          parse_tree__prog_io__IntAvails_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 543 "prog_io.m"
          parse_tree__prog_io__ImpAvails_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "prog_io.m"
          parse_tree__prog_io__IntItems_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 545 "prog_io.m"
          parse_tree__prog_io__ImpItems_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "prog_io.m"
        }
#line 534 "prog_io.m"
        break;
#line 534 "prog_io.m"
      case (MR_Integer) 2:
#line 548 "prog_io.m"
        {
#line 548 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_35;
#line 548 "prog_io.m"
          MR_Word parse_tree__prog_io__VNInfo_36;
#line 548 "prog_io.m"
          MR_Word parse_tree__prog_io__RawItemBlocks_37;
#line 548 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_38;
#line 548 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_39;
#line 548 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_56_56;
#line 548 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_57_57;
#line 548 "prog_io.m"
          MR_Word parse_tree__prog_io__V_62_62;

#line 547 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 547 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 549 "prog_io.m"
          {
#line 549 "prog_io.m"
            parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &parse_tree__prog_io__VNInfo_36, &parse_tree__prog_io__RawItemBlocks_37, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_38, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_39, parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, &parse_tree__prog_io__STATE_VARIABLE_Specs_56_56, parse_tree__prog_io__STATE_VARIABLE_Errors_52_52, &parse_tree__prog_io__STATE_VARIABLE_Errors_57_57);
          }
#line 557 "prog_io.m"
#line 557 "prog_io.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io__VNInfo_36)) {
#line 557 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 557 "prog_io.m"
            case (MR_Integer) 0:
#line 557 "prog_io.m"
#line 557 "prog_io.m"
              switch (MR_unmkbody(parse_tree__prog_io__VNInfo_36)) {
#line 557 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 557 "prog_io.m"
                case (MR_Integer) 0:
#line 561 "prog_io.m"
                  {
#line 564 "prog_io.m"
                    {
#line 564 "prog_io.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.read_parse_tree_int\'/8", (MR_String) "dont_allow_version_numbers");
#line 564 "prog_io.m"
                      return;
                    }
#line 561 "prog_io.m"
                  }
#line 557 "prog_io.m"
                  break;
#line 557 "prog_io.m"
                case (MR_Integer) 1:
#line 556 "prog_io.m"
                  parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "prog_io.m"
                  break;
#line 557 "prog_io.m"
              }
#line 557 "prog_io.m"
              break;
#line 557 "prog_io.m"
            case (MR_Integer) 1:
#line 558 "prog_io.m"
              {
#line 558 "prog_io.m"
                MR_Word parse_tree__prog_io__MVN_40 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__VNInfo_36), (MR_Integer) 1);

#line 559 "prog_io.m"
                {
#line 559 "prog_io.m"
                  parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeVersionNumbers_28, 0) = ((MR_Box) (parse_tree__prog_io__MVN_40));
#line 559 "prog_io.m"
                }
#line 558 "prog_io.m"
              }
#line 557 "prog_io.m"
              break;
#line 557 "prog_io.m"
          }
#line 566 "prog_io.m"
          {
#line 566 "prog_io.m"
            parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 566 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 566 "prog_io.m"
          }
#line 566 "prog_io.m"
          {
#line 566 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_62_62, parse_tree__prog_io__FinalLookAhead_35, parse_tree__prog_io__SourceFileName_38, parse_tree__prog_io__SeqNumCounter_39, parse_tree__prog_io__STATE_VARIABLE_Specs_56_56, parse_tree__prog_io__STATE_VARIABLE_Specs_41, parse_tree__prog_io__STATE_VARIABLE_Errors_57_57, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
          }
#line 569 "prog_io.m"
          {
#line 569 "prog_io.m"
            parse_tree__prog_io__separate_int_imp_items_7_p_0(parse_tree__prog_io__RawItemBlocks_37, &parse_tree__prog_io__IntIncls_29, &parse_tree__prog_io__ImpIncls_30, &parse_tree__prog_io__IntAvails_31, &parse_tree__prog_io__ImpAvails_32, &parse_tree__prog_io__IntItems_33, &parse_tree__prog_io__ImpItems_34);
          }
#line 548 "prog_io.m"
        }
#line 534 "prog_io.m"
        break;
#line 534 "prog_io.m"
    }
#line 572 "prog_io.m"
    {
#line 572 "prog_io.m"
      MR_Word base;
#line 572 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 572 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__MaybeVersionNumbers_28));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_io__IntIncls_29));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_io__ImpIncls_30));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_io__IntAvails_31));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_io__ImpAvails_32));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_io__IntItems_33));
#line 572 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_io__ImpItems_34));
#line 572 "prog_io.m"
    }
#line 503 "prog_io.m"
  }
#line 498 "prog_io.m"
}

#line 475 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_2(
#line 475 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg)
#line 475 "prog_io.m"
{
#line 475 "prog_io.m"
  {
#line 475 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 475 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;

#line 475 "prog_io.m"
    {
#line 475 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__475__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))));
    }
#line 475 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 475 "prog_io.m"
  }
#line 475 "prog_io.m"
}

#line 472 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_1(
#line 472 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg)
#line 472 "prog_io.m"
{
#line 472 "prog_io.m"
  {
#line 472 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 472 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;

#line 472 "prog_io.m"
    {
#line 472 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__472__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))));
    }
#line 472 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 472 "prog_io.m"
  }
#line 472 "prog_io.m"
}

#line 423 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0(
#line 423 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_9,
#line 423 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 423 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 423 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 423 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_39,
#line 423 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_40)
#line 423 "prog_io.m"
{
#line 428 "prog_io.m"
  {
#line 428 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 428 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_17;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_19;
#line 428 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName1_20;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter1_21;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_26;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_27;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__Uses_28;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__Items_29;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_46_46;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 428 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;

#line 429 "prog_io.m"
    {
#line 429 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 430 "prog_io.m"
    {
#line 430 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__SourceFileName0_17);
    }
#line 432 "prog_io.m"
    {
#line 432 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_46_46);
    }
#line 433 "prog_io.m"
    {
#line 433 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 437 "prog_io.m"
    {
#line 437 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_46_46, &parse_tree__prog_io__STATE_VARIABLE_Errors_50_50);
    }
#line 454 "prog_io.m"
#line 454 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 454 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 454 "prog_io.m"
      case (MR_Integer) 0:
#line 441 "prog_io.m"
        {
#line 441 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAhead_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 441 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAheadContext_23;

#line 445 "prog_io.m"
          if ((parse_tree__prog_io__LookAhead_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "prog_io.m"
            {
#line 444 "prog_io.m"
              {
#line 444 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName0_17));
#line 444 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 444 "prog_io.m"
              }
#line 443 "prog_io.m"
            }
#line 445 "prog_io.m"
          else
#line 446 "prog_io.m"
            {
#line 446 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAheadTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 1)));
#line 446 "prog_io.m"
              MR_Word parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 0)));

#line 447 "prog_io.m"
              {
#line 447 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__LookAheadTerm_25);
              }
#line 446 "prog_io.m"
            }
#line 449 "prog_io.m"
          {
#line 449 "prog_io.m"
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_39, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_40);
          }
#line 450 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 451 "prog_io.m"
          {
#line 451 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 452 "prog_io.m"
          parse_tree__prog_io__Uses_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "prog_io.m"
          parse_tree__prog_io__Items_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "prog_io.m"
        }
#line 454 "prog_io.m"
        break;
#line 454 "prog_io.m"
      case (MR_Integer) 1:
#line 456 "prog_io.m"
        {
#line 455 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 455 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 457 "prog_io.m"
          {
#line 457 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_39, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_40);
          }
#line 459 "prog_io.m"
          parse_tree__prog_io__Uses_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 460 "prog_io.m"
          parse_tree__prog_io__Items_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 456 "prog_io.m"
        }
#line 454 "prog_io.m"
        break;
#line 454 "prog_io.m"
      case (MR_Integer) 2:
#line 463 "prog_io.m"
        {
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_81_81;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_82_82;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_30;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__InclsCord_32;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__AvailsCord_33;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemsCord_34;
#line 463 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_35;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_36;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__Avails_37;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__Imports_38;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__V_54_54;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__V_55_55;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__V_56_56;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_57_57;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_58_58;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__V_60_60;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__V_64_64;
#line 463 "prog_io.m"
          MR_Word parse_tree__prog_io__V_68_68;
#line 464 "prog_io.m"
          MR_Word parse_tree__prog_io__V_31_31;

#line 462 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 462 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 466 "prog_io.m"
          {
#line 466 "prog_io.m"
            parse_tree__prog_io__V_54_54 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
          }
#line 12961 "parse_tree.prog_io.c"
          parse_tree__prog_io__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 466 "prog_io.m"
          {
#line 466 "prog_io.m"
            parse_tree__prog_io__V_55_55 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_81_81);
          }
#line 12968 "parse_tree.prog_io.c"
          parse_tree__prog_io__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 466 "prog_io.m"
          {
#line 466 "prog_io.m"
            parse_tree__prog_io__V_56_56 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_82_82);
          }
#line 464 "prog_io.m"
          {
#line 464 "prog_io.m"
            parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_31_31, parse_tree__prog_io__V_54_54, &parse_tree__prog_io__InclsCord_32, parse_tree__prog_io__V_55_55, &parse_tree__prog_io__AvailsCord_33, parse_tree__prog_io__V_56_56, &parse_tree__prog_io__ItemsCord_34, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_35, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_36, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, &parse_tree__prog_io__STATE_VARIABLE_Specs_57_57, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, &parse_tree__prog_io__STATE_VARIABLE_Errors_58_58);
          }
#line 469 "prog_io.m"
          {
#line 469 "prog_io.m"
            parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_io.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 469 "prog_io.m"
          }
#line 469 "prog_io.m"
          {
#line 469 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_60_60, parse_tree__prog_io__FinalLookAhead_30, parse_tree__prog_io__SourceFileName_35, parse_tree__prog_io__SeqNumCounter_36, parse_tree__prog_io__STATE_VARIABLE_Specs_57_57, parse_tree__prog_io__STATE_VARIABLE_Specs_39, parse_tree__prog_io__STATE_VARIABLE_Errors_58_58, parse_tree__prog_io__STATE_VARIABLE_Errors_40);
          }
#line 472 "prog_io.m"
          {
#line 472 "prog_io.m"
            parse_tree__prog_io__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_2[1]));
#line 472 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io__read_parse_tree_opt_8_p_0_1));
#line 472 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 472 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 3) = ((MR_Box) (parse_tree__prog_io__InclsCord_32));
#line 472 "prog_io.m"
          }
#line 472 "prog_io.m"
          {
#line 472 "prog_io.m"
            mercury__require__expect_4_p_0(parse_tree__prog_io__V_64_64, (MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.read_parse_tree_opt\'/8", (MR_String) "Incls != []");
          }
#line 473 "prog_io.m"
          {
#line 473 "prog_io.m"
            parse_tree__prog_io__Avails_37 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_81_81, parse_tree__prog_io__AvailsCord_33);
          }
#line 474 "prog_io.m"
          {
#line 474 "prog_io.m"
            parse_tree__prog_item__avail_imports_uses_3_p_0(parse_tree__prog_io__Avails_37, &parse_tree__prog_io__Imports_38, &parse_tree__prog_io__Uses_28);
          }
#line 475 "prog_io.m"
          {
#line 475 "prog_io.m"
            parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_4[1]));
#line 475 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__read_parse_tree_opt_8_p_0_2));
#line 475 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 475 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 3) = ((MR_Box) (parse_tree__prog_io__Imports_38));
#line 475 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "prog_io.m"
          }
#line 475 "prog_io.m"
          {
#line 475 "prog_io.m"
            mercury__require__expect_4_p_0(parse_tree__prog_io__V_68_68, (MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.read_parse_tree_opt\'/8", (MR_String) "Imports != []");
          }
#line 476 "prog_io.m"
          {
#line 476 "prog_io.m"
            parse_tree__prog_io__Items_29 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_82_82, parse_tree__prog_io__ItemsCord_34);
          }
#line 463 "prog_io.m"
        }
#line 454 "prog_io.m"
        break;
#line 454 "prog_io.m"
    }
#line 478 "prog_io.m"
    {
#line 478 "prog_io.m"
      MR_Word base;
#line 478 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 478 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 478 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 478 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 478 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 478 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__Uses_28));
#line 478 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_io__Items_29));
#line 478 "prog_io.m"
    }
#line 428 "prog_io.m"
  }
#line 423 "prog_io.m"
}

#line 327 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 327 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 327 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 327 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 327 "prog_io.m"
{
#line 330 "prog_io.m"
  {
#line 330 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 330 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 331 "prog_io.m"
    {
#line 331 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 331 "prog_io.m"
    {
#line 331 "prog_io.m"
      MR_Word base;
#line 331 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 331 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 331 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_4));
#line 331 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 331 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io.m"
    }
#line 330 "prog_io.m"
  }
#line 327 "prog_io.m"
}

#line 320 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 320 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 320 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 320 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 320 "prog_io.m"
{
#line 323 "prog_io.m"
  {
#line 323 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 323 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 324 "prog_io.m"
    {
#line 324 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 324 "prog_io.m"
    {
#line 324 "prog_io.m"
      MR_Word base;
#line 324 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 324 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_4));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io.m"
    }
#line 323 "prog_io.m"
  }
#line 320 "prog_io.m"
}

#line 315 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 315 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 315 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4)
#line 315 "prog_io.m"
{
#line 317 "prog_io.m"
  {
#line 317 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 317 "prog_io.m"
    MR_Word parse_tree__prog_io__V_5_5;
#line 317 "prog_io.m"
    MR_Word parse_tree__prog_io__V_6_6;

#line 318 "prog_io.m"
    {
#line 318 "prog_io.m"
      parse_tree__prog_io__V_5_5 = mercury__term__context_init_0_f_0();
    }
#line 318 "prog_io.m"
    {
#line 318 "prog_io.m"
      parse_tree__prog_io__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 318 "prog_io.m"
    {
#line 318 "prog_io.m"
      MR_Word base;
#line 318 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io.m"
      *parse_tree__prog_io__ParseTree_4 = base;
#line 318 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_3));
#line 318 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__V_5_5));
#line 318 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_6_6));
#line 318 "prog_io.m"
    }
#line 317 "prog_io.m"
  }
#line 315 "prog_io.m"
}

#line 179 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__check_module_has_expected_name_6_p_0(
#line 179 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_7,
#line 179 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 179 "prog_io.m"
  MR_Word parse_tree__prog_io__ExpectedName_9,
#line 179 "prog_io.m"
  MR_Word parse_tree__prog_io__ActualName_10,
#line 179 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeActualContext_11,
#line 179 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_12)
#line 179 "prog_io.m"
{
#line 271 "prog_io.m"
  {
#line 271 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 269 "prog_io.m"
    {
#line 269 "prog_io.m"
      parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__ActualName_10, parse_tree__prog_io__ExpectedName_9);
    }
#line 271 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 270 "prog_io.m"
      *parse_tree__prog_io__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 271 "prog_io.m"
    else
#line 279 "prog_io.m"
      {
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeContext_14;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_15;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__Severity_16;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__Component_17;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__Msg_18;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_19;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_22_22;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_23_23;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_27_27;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_30_30;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_31_31;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_35_35;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_38_38;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_39_39;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 279 "prog_io.m"
        MR_Word parse_tree__prog_io__V_60_60;
#line 273 "prog_io.m"
        MR_Word parse_tree__prog_io__ActualContext_13;
#line 274 "prog_io.m"
        MR_Word parse_tree__prog_io__V_63_63;

#line 273 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeActualContext_11)) == (MR_mktag((MR_Integer) 1)));
#line 273 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 273 "prog_io.m"
          {
#line 273 "prog_io.m"
            parse_tree__prog_io__ActualContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeActualContext_11, (MR_Integer) 0)));
#line 274 "prog_io.m"
            {
#line 274 "prog_io.m"
              parse_tree__prog_io__V_63_63 = mercury__term__context_init_0_f_0();
            }
#line 274 "prog_io.m"
            {
#line 274 "prog_io.m"
              parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__ActualContext_13, parse_tree__prog_io__V_63_63);
            }
#line 274 "prog_io.m"
            parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 273 "prog_io.m"
          }
#line 277 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 276 "prog_io.m"
          parse_tree__prog_io__MaybeContext_14 = parse_tree__prog_io__MaybeActualContext_11;
#line 277 "prog_io.m"
        else
#line 278 "prog_io.m"
          parse_tree__prog_io__MaybeContext_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 280 "prog_io.m"
        {
#line 280 "prog_io.m"
          parse_tree__prog_io__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 280 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io__FileName_8));
#line 280 "prog_io.m"
        }
#line 282 "prog_io.m"
        {
#line 282 "prog_io.m"
          parse_tree__prog_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io__ExpectedName_9));
#line 282 "prog_io.m"
        }
#line 283 "prog_io.m"
        {
#line 283 "prog_io.m"
          parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 283 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io__ActualName_10));
#line 283 "prog_io.m"
        }
#line 283 "prog_io.m"
        {
#line 283 "prog_io.m"
          parse_tree__prog_io__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 283 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 283 "prog_io.m"
        }
#line 283 "prog_io.m"
        {
#line 283 "prog_io.m"
          parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[80])));
#line 283 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 283 "prog_io.m"
        }
#line 282 "prog_io.m"
        {
#line 282 "prog_io.m"
          parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[79])));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 282 "prog_io.m"
        }
#line 282 "prog_io.m"
        {
#line 282 "prog_io.m"
          parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io__V_31_31));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 282 "prog_io.m"
        }
#line 282 "prog_io.m"
        {
#line 282 "prog_io.m"
          parse_tree__prog_io__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[78])));
#line 282 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 282 "prog_io.m"
        }
#line 281 "prog_io.m"
        {
#line 281 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[77])));
#line 281 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io__V_27_27));
#line 281 "prog_io.m"
        }
#line 280 "prog_io.m"
        {
#line 280 "prog_io.m"
          parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io__V_23_23));
#line 280 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__V_24_24));
#line 280 "prog_io.m"
        }
#line 280 "prog_io.m"
        {
#line 280 "prog_io.m"
          parse_tree__prog_io__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[76])));
#line 280 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_15, 1) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 280 "prog_io.m"
        }
#line 288 "prog_io.m"
#line 288 "prog_io.m"
        switch (parse_tree__prog_io__RequireModuleDecl_7) {
#line 288 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 288 "prog_io.m"
          case (MR_Integer) 0:
#line 289 "prog_io.m"
            {
#line 289 "prog_io.m"
              MR_Word parse_tree__prog_io__V_52_52;
#line 289 "prog_io.m"
              MR_Word parse_tree__prog_io__V_53_53;

#line 294 "prog_io.m"
              parse_tree__prog_io__Severity_16 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_2[0]);
#line 297 "prog_io.m"
              {
#line 297 "prog_io.m"
                parse_tree__prog_io__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 297 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_15));
#line 297 "prog_io.m"
              }
#line 297 "prog_io.m"
              {
#line 297 "prog_io.m"
                parse_tree__prog_io__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io__V_53_53));
#line 297 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "prog_io.m"
              }
#line 296 "prog_io.m"
              {
#line 296 "prog_io.m"
                parse_tree__prog_io__Component_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_17, 0) = ((MR_Box) (((MR_Integer) 22 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 296 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_17, 1) = ((MR_Box) (parse_tree__prog_io__V_52_52));
#line 296 "prog_io.m"
              }
#line 289 "prog_io.m"
            }
#line 288 "prog_io.m"
            break;
#line 288 "prog_io.m"
          case (MR_Integer) 1:
#line 285 "prog_io.m"
            {
#line 286 "prog_io.m"
              parse_tree__prog_io__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "prog_io.m"
              {
#line 287 "prog_io.m"
                parse_tree__prog_io__Component_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 287 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_17, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_15));
#line 287 "prog_io.m"
              }
#line 285 "prog_io.m"
            }
#line 288 "prog_io.m"
            break;
#line 288 "prog_io.m"
        }
#line 299 "prog_io.m"
        {
#line 299 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io__Component_17));
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "prog_io.m"
        }
#line 299 "prog_io.m"
        {
#line 299 "prog_io.m"
          parse_tree__prog_io__Msg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_18, 0) = ((MR_Box) (parse_tree__prog_io__MaybeContext_14));
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_18, 2) = ((MR_Box) ((MR_Integer) 0));
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_18, 3) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 299 "prog_io.m"
        }
#line 300 "prog_io.m"
        {
#line 300 "prog_io.m"
          parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io__Msg_18));
#line 300 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_io.m"
        }
#line 300 "prog_io.m"
        {
#line 300 "prog_io.m"
          parse_tree__prog_io__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_19, 0) = ((MR_Box) (parse_tree__prog_io__Severity_16));
#line 300 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 300 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_19, 2) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 300 "prog_io.m"
        }
#line 301 "prog_io.m"
        {
#line 301 "prog_io.m"
          MR_Word base;
#line 301 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_io.m"
          *parse_tree__prog_io__Specs_12 = base;
#line 301 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_19));
#line 301 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "prog_io.m"
        }
#line 279 "prog_io.m"
      }
#line 271 "prog_io.m"
  }
#line 179 "prog_io.m"
}

#line 258 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 258 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 258 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 258 "prog_io.m"
{
#line 258 "prog_io.m"
  {
#line 258 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 258 "prog_io.m"
    MR_Word parse_tree__prog_io__conv4_ParseTree_12;
#line 258 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_39;
#line 258 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_40;

#line 258 "prog_io.m"
    {
#line 258 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_opt_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv4_ParseTree_12, &parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_39, &parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_40);
    }
#line 258 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv4_ParseTree_12));
#line 258 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_39));
#line 258 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_40));
#line 258 "prog_io.m"
  }
#line 258 "prog_io.m"
}

#line 257 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 257 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 257 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 257 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 257 "prog_io.m"
{
#line 257 "prog_io.m"
  {
#line 257 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 257 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_ParseTree_6;

#line 257 "prog_io.m"
    {
#line 257 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_ParseTree_6);
    }
#line 257 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_ParseTree_6));
#line 257 "prog_io.m"
  }
#line 257 "prog_io.m"
}

#line 254 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 254 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 254 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3)
#line 254 "prog_io.m"
{
#line 254 "prog_io.m"
  {
#line 254 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 254 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__4_4;

#line 254 "prog_io.m"
    {
#line 254 "prog_io.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 5))), &parse_tree__prog_io__conv0_HeadVar__4_4);
    }
#line 254 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__4_4));
#line 254 "prog_io.m"
  }
#line 254 "prog_io.m"
}

#line 152 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0(
#line 152 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_10,
#line 152 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_11,
#line 152 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_12,
#line 152 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 152 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTreeOpt_14,
#line 152 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_15,
#line 152 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_16)
#line 152 "prog_io.m"
{
#line 252 "prog_io.m"
  {
#line 252 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__Dirs_18;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenFile_19;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSpecs_22;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_23;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__NameSpecs_24;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__V_30_30;
#line 252 "prog_io.m"
    MR_Word parse_tree__prog_io__V_31_31;
#line 255 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;
#line 255 "prog_io.m"
    MR_Word parse_tree__prog_io__V_21_21;
#line 255 "prog_io.m"
    MR_Box parse_tree__prog_io__conv5_ParseTreeOpt_14;
#line 260 "prog_io.m"
    MR_Word parse_tree__prog_io__V_36_36;
#line 260 "prog_io.m"
    MR_Word parse_tree__prog_io__V_37_37;
#line 260 "prog_io.m"
    MR_Word parse_tree__prog_io__V_38_38;
#line 260 "prog_io.m"
    MR_Word parse_tree__prog_io__V_39_39;

#line 253 "prog_io.m"
    {
#line 253 "prog_io.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__prog_io__Globals_11, (MR_Integer) 636, &parse_tree__prog_io__Dirs_18);
    }
#line 254 "prog_io.m"
    {
#line 254 "prog_io.m"
      parse_tree__prog_io__OpenFile_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_9[0]));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_1));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 3) = ((MR_Box) ((MR_Integer) 0));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 4) = ((MR_Box) (parse_tree__prog_io__Dirs_18));
#line 254 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 5) = ((MR_Box) (parse_tree__prog_io__FileName_12));
#line 254 "prog_io.m"
    }
#line 257 "prog_io.m"
    {
#line 257 "prog_io.m"
      parse_tree__prog_io__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[1]));
#line 257 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_2));
#line 257 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 257 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 257 "prog_io.m"
    }
#line 258 "prog_io.m"
    {
#line 258 "prog_io.m"
      parse_tree__prog_io__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 258 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[1]));
#line 258 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_3));
#line 258 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 258 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 258 "prog_io.m"
    }
#line 255 "prog_io.m"
    {
#line 255 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_11, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__OpenFile_19, &parse_tree__prog_io__V_20_20, (MR_Word) &parse_tree__prog_io_scalar_common_3[1], &parse_tree__prog_io__V_21_21, parse_tree__prog_io__V_30_30, parse_tree__prog_io__V_31_31, &parse_tree__prog_io__conv5_ParseTreeOpt_14, &parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__Errors_16);
    }
#line 255 "prog_io.m"
    *parse_tree__prog_io__ParseTreeOpt_14 = ((MR_Word) parse_tree__prog_io__conv5_ParseTreeOpt_14);
#line 260 "prog_io.m"
    parse_tree__prog_io__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 0)));
#line 260 "prog_io.m"
    parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 1)));
#line 260 "prog_io.m"
    parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 2)));
#line 260 "prog_io.m"
    parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 3)));
#line 260 "prog_io.m"
    parse_tree__prog_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 4)));
#line 261 "prog_io.m"
    {
#line 261 "prog_io.m"
      parse_tree__prog_io__check_module_has_expected_name_6_p_0((MR_Integer) 1, parse_tree__prog_io__FileName_12, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__ModuleName_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__NameSpecs_24);
    }
#line 263 "prog_io.m"
    {
#line 263 "prog_io.m"
      *parse_tree__prog_io__Specs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__NameSpecs_24);
    }
#line 252 "prog_io.m"
  }
#line 152 "prog_io.m"
}

#line 246 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 246 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 246 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 246 "prog_io.m"
{
#line 246 "prog_io.m"
  {
#line 246 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_ParseTree_12;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_41;
#line 246 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_42;

#line 246 "prog_io.m"
    {
#line 246 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv3_ParseTree_12, &parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_41, &parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_42);
    }
#line 246 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv3_ParseTree_12));
#line 246 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_41));
#line 246 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_42));
#line 246 "prog_io.m"
  }
#line 246 "prog_io.m"
}

#line 245 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 245 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 245 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 245 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 245 "prog_io.m"
{
#line 245 "prog_io.m"
  {
#line 245 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_ParseTree_6;

#line 245 "prog_io.m"
    {
#line 245 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_ParseTree_6);
    }
#line 245 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_ParseTree_6));
#line 245 "prog_io.m"
  }
#line 245 "prog_io.m"
}

#line 136 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0(
#line 136 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_29,
#line 136 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_13,
#line 136 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 136 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 136 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_16,
#line 136 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 136 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_18,
#line 136 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_19,
#line 136 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_20,
#line 136 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_21,
#line 136 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_22)
#line 136 "prog_io.m"
{
#line 242 "prog_io.m"
  {
#line 242 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 242 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;
#line 242 "prog_io.m"
    MR_Word parse_tree__prog_io__V_27_27;
#line 243 "prog_io.m"
    MR_Box parse_tree__prog_io__conv4_ParseTree_20;

#line 245 "prog_io.m"
    {
#line 245 "prog_io.m"
      parse_tree__prog_io__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[0]));
#line 245 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_1));
#line 245 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 245 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 245 "prog_io.m"
    }
#line 246 "prog_io.m"
    {
#line 246 "prog_io.m"
      parse_tree__prog_io__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 246 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[0]));
#line 246 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_2));
#line 246 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 246 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 246 "prog_io.m"
    }
#line 243 "prog_io.m"
    {
#line 243 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__OpenFile_16, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ReadModuleAndTimestamps_18, parse_tree__prog_io__MaybeModuleTimestampRes_19, parse_tree__prog_io__V_26_26, parse_tree__prog_io__V_27_27, &parse_tree__prog_io__conv4_ParseTree_20, parse_tree__prog_io__Specs_21, parse_tree__prog_io__Errors_22);
    }
#line 243 "prog_io.m"
    *parse_tree__prog_io__ParseTree_20 = ((MR_Word) parse_tree__prog_io__conv4_ParseTree_20);
#line 242 "prog_io.m"
  }
#line 136 "prog_io.m"
}

#line 235 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_2(
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 235 "prog_io.m"
{
#line 235 "prog_io.m"
  {
#line 235 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 235 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_ParseTree_10;
#line 235 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27;
#line 235 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28;

#line 235 "prog_io.m"
    {
#line 235 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_7_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv3_ParseTree_10, &parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27, &parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28);
    }
#line 235 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv3_ParseTree_10));
#line 235 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_27));
#line 235 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_28));
#line 235 "prog_io.m"
  }
#line 235 "prog_io.m"
}

#line 235 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0_1(
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 235 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 235 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 235 "prog_io.m"
{
#line 235 "prog_io.m"
  {
#line 235 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 235 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_ParseTree_4;

#line 235 "prog_io.m"
    {
#line 235 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_ParseTree_4);
    }
#line 235 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_ParseTree_4));
#line 235 "prog_io.m"
  }
#line 235 "prog_io.m"
}

#line 123 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_src_11_p_0(
#line 123 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_27,
#line 123 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_12,
#line 123 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 123 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 123 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_15,
#line 123 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadModuleAndTimestamps_16,
#line 123 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestampRes_17,
#line 123 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_18,
#line 123 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_19,
#line 123 "prog_io.m"
  MR_Word * parse_tree__prog_io__Errors_20)
#line 123 "prog_io.m"
{
#line 232 "prog_io.m"
  {
#line 232 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 233 "prog_io.m"
    MR_Box parse_tree__prog_io__conv4_ParseTree_18;

#line 233 "prog_io.m"
    {
#line 233 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_12, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__FileData_15, parse_tree__prog_io__ReadModuleAndTimestamps_16, parse_tree__prog_io__MaybeModuleTimestampRes_17, (MR_Word) &parse_tree__prog_io_scalar_common_5[0], (MR_Word) &parse_tree__prog_io_scalar_common_5[1], &parse_tree__prog_io__conv4_ParseTree_18, parse_tree__prog_io__Specs_19, parse_tree__prog_io__Errors_20);
    }
#line 233 "prog_io.m"
    *parse_tree__prog_io__ParseTree_18 = ((MR_Word) parse_tree__prog_io__conv4_ParseTree_18);
#line 232 "prog_io.m"
  }
#line 123 "prog_io.m"
}

#line 107 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__peek_at_file_6_p_0(
#line 107 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_7,
#line 107 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName0_8,
#line 107 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_9,
#line 107 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_10)
#line 107 "prog_io.m"
{
#line 212 "prog_io.m"
  {
#line 212 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 212 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_12;
#line 212 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_13;
#line 212 "prog_io.m"
    MR_Word parse_tree__prog_io__V_24_24;
#line 214 "prog_io.m"
    MR_String parse_tree__prog_io___SourceFileName_14;
#line 214 "prog_io.m"
    MR_Word parse_tree__prog_io___SeqNumCounter_15;
#line 214 "prog_io.m"
    MR_Word parse_tree__prog_io___Errors_16;

#line 213 "prog_io.m"
    {
#line 213 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_12);
    }
#line 216 "prog_io.m"
    {
#line 216 "prog_io.m"
      parse_tree__prog_io__V_24_24 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 214 "prog_io.m"
    {
#line 214 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 0, parse_tree__prog_io__DefaultModuleName_7, &parse_tree__prog_io__ModuleDeclPresent_13, parse_tree__prog_io__SourceFileName0_8, &parse_tree__prog_io___SourceFileName_14, parse_tree__prog_io__SeqNumCounter0_12, &parse_tree__prog_io___SeqNumCounter_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__Specs_10, parse_tree__prog_io__V_24_24, &parse_tree__prog_io___Errors_16);
    }
#line 220 "prog_io.m"
#line 220 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_13)) {
#line 220 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 220 "prog_io.m"
      case (MR_Integer) 0:
#line 219 "prog_io.m"
        *parse_tree__prog_io__ModuleName_9 = parse_tree__prog_io__DefaultModuleName_7;
#line 220 "prog_io.m"
        break;
#line 220 "prog_io.m"
      case (MR_Integer) 1:
#line 221 "prog_io.m"
        {
#line 221 "prog_io.m"
          MR_Word parse_tree__prog_io___ModuleNameContext_18;

#line 221 "prog_io.m"
          *parse_tree__prog_io__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 0)));
#line 221 "prog_io.m"
          parse_tree__prog_io___ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 1)));
#line 221 "prog_io.m"
        }
#line 220 "prog_io.m"
        break;
#line 220 "prog_io.m"
      case (MR_Integer) 2:
#line 224 "prog_io.m"
        {
#line 224 "prog_io.m"
          MR_Word parse_tree__prog_io___ModuleNameContext_26;

#line 224 "prog_io.m"
          *parse_tree__prog_io__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 0)));
#line 224 "prog_io.m"
          parse_tree__prog_io___ModuleNameContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_13, (MR_Integer) 1)));
#line 224 "prog_io.m"
        }
#line 220 "prog_io.m"
        break;
#line 220 "prog_io.m"
    }
#line 212 "prog_io.m"
  }
#line 107 "prog_io.m"
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
