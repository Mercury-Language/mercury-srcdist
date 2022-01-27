/*
** Automatically generated from `prog_io.m'
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



#line 1166 "prog_io.m"
struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s {
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13;
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16;
#line 1177 "prog_io.m"
  MR_bool parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded;
#line 1186 "prog_io.m"
  jmp_buf parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0;
#line 1186 "prog_io.m"
  MR_Word parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90;
#line 1186 "prog_io.m"
  MR_Box parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90;
#line 1166 "prog_io.m"
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
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_include_0;

#line 139 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_avail_import_info_0;

#line 142 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 145 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_0;

#line 148 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 151 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_term_1term__type_ctor_info_generic_0;

#line 154 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_lookahead_0_1[2];

#line 157 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_lookahead_0_1;

#line 160 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_0[1];

#line 163 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_lookahead_0_1[1];

#line 166 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_lookahead_0[2];

#line 169 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_lookahead_0[2];

#line 172 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_lookahead_0[2];

#line 175 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_0[1];

#line 178 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_0;

#line 181 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_1[2];

#line 184 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_1;

#line 187 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_maybe_module_decl_present_0_2[2];

#line 190 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_maybe_module_decl_present_0_2;

#line 193 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_0[1];

#line 196 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_1[1];

#line 199 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_maybe_module_decl_present_0_2[1];

#line 202 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_maybe_module_decl_present_0[3];

#line 205 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_maybe_module_decl_present_0[3];

#line 208 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_module_decl_present_0[3];

#line 211 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_0;

#line 214 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_require_module_decl_0_1;

#line 217 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_require_module_decl_0[2];

#line 220 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_require_module_decl_0[2];

#line 223 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_require_module_decl_0[2];

#line 226 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_0;

#line 229 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_missing_section_start_warning_0_1;

#line 232 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_missing_section_start_warning_0[2];

#line 235 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_missing_section_start_warning_0[2];

#line 238 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_missing_section_start_warning_0[2];

#line 241 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_0;

#line 244 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_1[1];

#line 247 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_1;

#line 250 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 253 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 256 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_2[4];

#line 259 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_2;

#line 262 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_iom_result_0_3[3];

#line 265 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_iom_result_0_3;

#line 268 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_0[1];

#line 271 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_1[1];

#line 274 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_2[1];

#line 277 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_iom_result_0_3[1];

#line 280 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_iom_result_0[4];

#line 283 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_iom_result_0[4];

#line 286 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_iom_result_0[4];

#line 289 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct7 parse_tree__prog_io____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 292 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_0;

#line 295 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_1;

#line 298 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_version_number_info_0_2[1];

#line 301 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_version_number_info_0_2;

#line 304 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_0[2];

#line 307 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_version_number_info_0_1[1];

#line 310 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_version_number_info_0[2];

#line 313 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_version_number_info_0[3];

#line 316 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_version_number_info_0[3];

#line 319 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0_10001(
#line 322 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 324 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 326 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 329 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0_10001(
#line 332 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 334 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 336 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 338 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 341 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0_10001(
#line 344 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 346 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 349 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0_10001(
#line 352 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 354 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 356 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 359 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0_10001(
#line 362 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 364 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 367 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0_10001(
#line 370 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 372 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 374 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 377 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0_10001(
#line 380 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 382 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 385 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0_10001(
#line 388 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 390 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 392 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 395 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____missing_section_start_warning_0_0_10001(
#line 398 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 400 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 403 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____missing_section_start_warning_0_0_10001(
#line 406 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 408 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 410 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 413 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0_10001(
#line 416 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 418 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 421 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0_10001(
#line 424 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 426 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 428 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 431 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0_10001(
#line 434 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 436 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 438 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 441 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0_10001(
#line 444 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 446 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_2,
#line 448 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 450 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 453 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0_10001(
#line 456 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 458 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 461 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0_10001(
#line 464 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 466 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 468 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 275 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 275 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 279 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 279 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 279 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 713 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(
#line 713 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 713 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 713 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 713 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 713 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 713 "prog_io.m"
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

#line 444 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__444__1_2_p_0(
#line 444 "prog_io.m"
  MR_Word parse_tree__prog_io__Imports_38,
#line 444 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_72);

#line 441 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__441__1_1_p_0(
#line 441 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_32);

#line 1351 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0(
#line 1351 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1351 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0(
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 275 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 275 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1584 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1584 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1584 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1584 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1584 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1584 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1584 "prog_io.m"
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

#line 1218 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(
#line 1218 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1218 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1222 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1222 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1222 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1561 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1561 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 1561 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 279 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 279 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 279 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 1700 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1700 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1700 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20);

#line 1674 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1674 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1674 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1674 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33);

#line 1646 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1646 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1646 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19);

#line 1632 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1632 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1632 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1632 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1632 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1632 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15);

#line 1591 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1591 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1591 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1591 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1591 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1591 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1591 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11);

#line 1565 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1565 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1565 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1565 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1565 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);

#line 1516 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1516 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1516 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1516 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29);

#line 1476 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__record_version_numbers_6_p_0(
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__MVN_7,
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_8,
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15,
#line 1476 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_16,
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1476 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18);

#line 1393 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_24_p_0(
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_25,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_26,
#line 1393 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67,
#line 1393 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_28,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_29,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_70,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_72,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76,
#line 1393 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77,
#line 1393 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_81,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_82,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_83,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_84);

#line 1366 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_22_p_0(
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_23,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_24,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_41,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_43,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_45,
#line 1366 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46,
#line 1366 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_50,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_51,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_52,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_53);

#line 1245 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1245 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51,
#line 1245 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_55,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_56,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_57,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_58);

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg);

#line 1166 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1166 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1166 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1166 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27);

#line 1120 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1120 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1120 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51);

#line 1087 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 1087 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 1087 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 1087 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21);

#line 1069 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_7_p_0(
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_8,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_9,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_10,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__AvailsCord_11,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_12,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15,
#line 1069 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16);

#line 891 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77,
#line 891 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78,
#line 891 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_82,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_83,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_84,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_85);

#line 824 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28);

#line 776 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_21,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_22,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 776 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_40,
#line 776 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_41,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_42,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_43,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_44,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_45,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_46,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_47);

#line 618 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_18_p_0(
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_59,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 618 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60,
#line 618 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_64,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_65,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_66,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_67);

#line 583 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_18,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_19,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_34,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_23,
#line 583 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35,
#line 583 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_39,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_40,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_41,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42);

#line 545 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__separate_int_imp_items_7_p_0(
#line 545 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_2,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__4_4,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__5_5,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__6_6,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__7_7);

#line 467 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_41,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42);

#line 444 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_2(
#line 444 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg);

#line 441 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_1(
#line 441 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg);

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
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_39,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_40);

#line 296 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 296 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 296 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 296 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 289 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 289 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 289 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 289 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6);

#line 284 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 284 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 284 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4);

#line 251 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 250 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 250 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 247 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 247 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 247 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 247 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 247 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3);

#line 239 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7);

#line 238 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 238 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 238 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 238 "prog_io.m"
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


static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[98][2];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[2][4];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[8][1];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[2][3];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_7[2][6];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_8[2][11];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_9[1][9];




static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[98][2] = {
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
    ((MR_Box) ((MR_String) "in source file."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected version_numbers record"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or an"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "either an"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should start with"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[19])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be preceded by"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "generated this file."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the Mercury compiler that"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "record. This indicates an internal error"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: duplicate version_numbers"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "interface files."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "except in automatically generated"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not appear anywhere"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: version number records"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in interface file"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected item in optimization file"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[9])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: item(s) after the"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module qualification of"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "nested submodule"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match the then-current module,"))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: nested submodule"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not for the module at whose end it appears,"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: source file"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains module named"))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module starts with the wrong"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 97 */
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[23])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[49])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[57])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[62])))
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

#line 275 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 275 "prog_io.m"
{
#line 275 "prog_io.m"
  {
#line 275 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 275 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 275 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 275 "prog_io.m"
    {
#line 275 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 275 "prog_io.m"
      return;
    }
#line 275 "prog_io.m"
  }
#line 275 "prog_io.m"
}

#line 275 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 275 "prog_io.m"
{
#line 275 "prog_io.m"
  {
#line 275 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 275 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 275 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 275 "prog_io.m"
    {
#line 275 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 275 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 275 "prog_io.m"
  }
#line 275 "prog_io.m"
}

#line 279 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 279 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 279 "prog_io.m"
{
#line 279 "prog_io.m"
  {
#line 279 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 279 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 279 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 279 "prog_io.m"
    {
#line 279 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 279 "prog_io.m"
      return;
    }
#line 279 "prog_io.m"
  }
#line 279 "prog_io.m"
}

#line 279 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 279 "prog_io.m"
{
#line 279 "prog_io.m"
  {
#line 279 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 279 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 279 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 279 "prog_io.m"
    {
#line 279 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 279 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 279 "prog_io.m"
  }
#line 279 "prog_io.m"
}

#line 713 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(
#line 713 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 713 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 713 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 713 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 713 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 713 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 713 "prog_io.m"
{
#line 720 "prog_io.m"
  {
#line 720 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 770 "prog_io.m"
#line 770 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 770 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 770 "prog_io.m"
      case (MR_Integer) 1:
#line 771 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 770 "prog_io.m"
        break;
#line 770 "prog_io.m"
      case (MR_Integer) 0:
#line 724 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 770 "prog_io.m"
        break;
#line 770 "prog_io.m"
    }
#line 720 "prog_io.m"
    *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 720 "prog_io.m"
    *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 720 "prog_io.m"
  }
#line 713 "prog_io.m"
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
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])));
#line 371 "prog_io.m"
        }
#line 371 "prog_io.m"
        {
#line 371 "prog_io.m"
          parse_tree__prog_io__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[97])));
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

#line 444 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__444__1_2_p_0(
#line 444 "prog_io.m"
  MR_Word parse_tree__prog_io__Imports_38,
#line 444 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_72)
#line 444 "prog_io.m"
{
#line 444 "prog_io.m"
  {
#line 444 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 444 "prog_io.m"
    {
#line 444 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], ((MR_Box) (parse_tree__prog_io__Imports_38)), ((MR_Box) (parse_tree__prog_io__HeadVar__2_72)));
    }
#line 444 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 444 "prog_io.m"
  }
#line 444 "prog_io.m"
}

#line 441 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__441__1_1_p_0(
#line 441 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_32)
#line 441 "prog_io.m"
{
#line 441 "prog_io.m"
  {
#line 441 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 441 "prog_io.m"
    {
#line 441 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__InclsCord_32);
    }
#line 441 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 441 "prog_io.m"
  }
#line 441 "prog_io.m"
}

#line 1351 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____version_number_info_0_0(
#line 1351 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1351 "prog_io.m"
{
#line 1351 "prog_io.m"
  {
#line 1351 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1351 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1351 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_11 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1351 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_10 == parse_tree__prog_io__CastY_11);
#line 1351 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4075 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1351 "prog_io.m"
    else
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1351 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
        case (MR_Integer) 0:
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
          switch (MR_unmkbody(parse_tree__prog_io__HeadVar__2_2)) {
#line 1351 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
            case (MR_Integer) 0:
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1351 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
                case (MR_Integer) 0:
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
                  switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1351 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
                    case (MR_Integer) 0:
#line 1351 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1351 "prog_io.m"
                      break;
#line 1351 "prog_io.m"
                    case (MR_Integer) 1:
#line 1351 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1351 "prog_io.m"
                      break;
#line 1351 "prog_io.m"
                  }
#line 1351 "prog_io.m"
                  break;
#line 1351 "prog_io.m"
                case (MR_Integer) 1:
#line 4123 "parse_tree.prog_io.c"
                  *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1351 "prog_io.m"
                  break;
#line 1351 "prog_io.m"
              }
#line 1351 "prog_io.m"
              break;
#line 1351 "prog_io.m"
            case (MR_Integer) 1:
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1351 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
                case (MR_Integer) 0:
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
                  switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1351 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
                    case (MR_Integer) 0:
#line 1351 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1351 "prog_io.m"
                      break;
#line 1351 "prog_io.m"
                    case (MR_Integer) 1:
#line 1351 "prog_io.m"
                      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1351 "prog_io.m"
                      break;
#line 1351 "prog_io.m"
                  }
#line 1351 "prog_io.m"
                  break;
#line 1351 "prog_io.m"
                case (MR_Integer) 1:
#line 4163 "parse_tree.prog_io.c"
                  *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1351 "prog_io.m"
                  break;
#line 1351 "prog_io.m"
              }
#line 1351 "prog_io.m"
              break;
#line 1351 "prog_io.m"
          }
#line 1351 "prog_io.m"
          break;
#line 1351 "prog_io.m"
        case (MR_Integer) 1:
#line 1351 "prog_io.m"
          {
#line 1351 "prog_io.m"
            MR_Word parse_tree__prog_io__V_13_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);

#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1351 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
              case (MR_Integer) 0:
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
                switch (MR_unmkbody(parse_tree__prog_io__HeadVar__3_3)) {
#line 1351 "prog_io.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
                  case (MR_Integer) 0:
#line 4196 "parse_tree.prog_io.c"
                    *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1351 "prog_io.m"
                    break;
#line 1351 "prog_io.m"
                  case (MR_Integer) 1:
#line 4202 "parse_tree.prog_io.c"
                    *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1351 "prog_io.m"
                    break;
#line 1351 "prog_io.m"
                }
#line 1351 "prog_io.m"
                break;
#line 1351 "prog_io.m"
              case (MR_Integer) 1:
#line 1351 "prog_io.m"
                {
#line 1351 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_9_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__3_3), (MR_Integer) 1);

#line 1351 "prog_io.m"
                  {
#line 1351 "prog_io.m"
                    recompilation____Compare____version_numbers_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_13_13, parse_tree__prog_io__V_9_9);
#line 1351 "prog_io.m"
                    return;
                  }
#line 1351 "prog_io.m"
                }
#line 1351 "prog_io.m"
                break;
#line 1351 "prog_io.m"
            }
#line 1351 "prog_io.m"
          }
#line 1351 "prog_io.m"
          break;
#line 1351 "prog_io.m"
      }
#line 1351 "prog_io.m"
  }
#line 1351 "prog_io.m"
}

#line 1351 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____version_number_info_0_0(
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1351 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1351 "prog_io.m"
{
#line 1351 "prog_io.m"
  {
#line 1351 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1351 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1351 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1351 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 1351 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1351 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1351 "prog_io.m"
    else
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1351 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
        case (MR_Integer) 0:
#line 1351 "prog_io.m"
#line 1351 "prog_io.m"
          switch (MR_unmkbody(parse_tree__prog_io__HeadVar__1_1)) {
#line 1351 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1351 "prog_io.m"
            case (MR_Integer) 0:
#line 1351 "prog_io.m"
              {
#line 1351 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1351 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1351 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1351 "prog_io.m"
              }
#line 1351 "prog_io.m"
              break;
#line 1351 "prog_io.m"
            case (MR_Integer) 1:
#line 1351 "prog_io.m"
              {
#line 1351 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastX_5 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1351 "prog_io.m"
                MR_Integer parse_tree__prog_io__CastY_6 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1351 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_6 == parse_tree__prog_io__CastX_5);
#line 1351 "prog_io.m"
              }
#line 1351 "prog_io.m"
              break;
#line 1351 "prog_io.m"
          }
#line 1351 "prog_io.m"
          break;
#line 1351 "prog_io.m"
        case (MR_Integer) 1:
#line 1351 "prog_io.m"
          {
#line 1351 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__1_1), (MR_Integer) 1);
#line 1351 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 1351 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1351 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1351 "prog_io.m"
              {
#line 1351 "prog_io.m"
                parse_tree__prog_io__V_8_8 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);
#line 4330 "parse_tree.prog_io.c"
                {
#line 4332 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = recompilation____Unify____version_numbers_0_0(parse_tree__prog_io__V_7_7, parse_tree__prog_io__V_8_8);
                }
#line 1351 "prog_io.m"
              }
#line 1351 "prog_io.m"
          }
#line 1351 "prog_io.m"
          break;
#line 1351 "prog_io.m"
      }
#line 1351 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1351 "prog_io.m"
  }
#line 1351 "prog_io.m"
}

#line 275 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_parse_tree_1_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 275 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 275 "prog_io.m"
{
#line 275 "prog_io.m"
  {
#line 275 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 275 "prog_io.m"
    {
#line 275 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 275 "prog_io.m"
      return;
    }
#line 275 "prog_io.m"
  }
#line 275 "prog_io.m"
}

#line 275 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_parse_tree_1_0(
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 275 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 275 "prog_io.m"
{
#line 275 "prog_io.m"
  {
#line 275 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 275 "prog_io.m"
    {
#line 275 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_114_101_97_100_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 275 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 275 "prog_io.m"
  }
#line 275 "prog_io.m"
}

#line 1584 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_iom_result_0_0(
#line 1584 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1584 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1584 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1584 "prog_io.m"
{
#line 1584 "prog_io.m"
  {
#line 1584 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1584 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_73 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1584 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_74 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1584 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_73 == parse_tree__prog_io__CastY_74);
#line 1584 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4432 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1584 "prog_io.m"
    else
#line 1584 "prog_io.m"
#line 1584 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1584 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "prog_io.m"
        case (MR_Integer) 0:
#line 1584 "prog_io.m"
#line 1584 "prog_io.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1584 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "prog_io.m"
            case (MR_Integer) 0:
#line 1584 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1584 "prog_io.m"
              break;
#line 1584 "prog_io.m"
            case (MR_Integer) 1:
#line 4456 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1584 "prog_io.m"
              break;
#line 1584 "prog_io.m"
            case (MR_Integer) 2:
#line 4462 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1584 "prog_io.m"
              break;
#line 1584 "prog_io.m"
            case (MR_Integer) 3:
#line 4468 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1584 "prog_io.m"
              break;
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
        case (MR_Integer) 1:
#line 1584 "prog_io.m"
          {
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_90_90 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);

#line 1584 "prog_io.m"
#line 1584 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1584 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "prog_io.m"
              case (MR_Integer) 0:
#line 4490 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 1:
#line 1584 "prog_io.m"
                {
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_14_14 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__3_3), (MR_Integer) 1);

#line 1584 "prog_io.m"
                  {
#line 1584 "prog_io.m"
                    parse_tree__error_util____Compare____error_spec_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_90_90, parse_tree__prog_io__V_14_14);
#line 1584 "prog_io.m"
                    return;
                  }
#line 1584 "prog_io.m"
                }
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 2:
#line 4514 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 3:
#line 4520 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
            }
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
        case (MR_Integer) 2:
#line 1584 "prog_io.m"
          {
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1584 "prog_io.m"
#line 1584 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1584 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "prog_io.m"
              case (MR_Integer) 0:
#line 4550 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 1:
#line 4556 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 2:
#line 1584 "prog_io.m"
                {
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 3)));
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_41_41;

#line 1584 "prog_io.m"
                  {
#line 1584 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_41_41, ((MR_Box) (parse_tree__prog_io__V_89_89)), ((MR_Box) (parse_tree__prog_io__V_37_37)));
                  }
#line 4580 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_41_41 == (MR_Integer) 0);
#line 1584 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1584 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_41_41;
#line 1584 "prog_io.m"
                  else
#line 1584 "prog_io.m"
                    {
#line 1584 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_42_42;

#line 1584 "prog_io.m"
                      {
#line 1584 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], &parse_tree__prog_io__V_42_42, ((MR_Box) (parse_tree__prog_io__V_88_88)), ((MR_Box) (parse_tree__prog_io__V_38_38)));
                      }
#line 4600 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_42_42 == (MR_Integer) 0);
#line 1584 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1584 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_42_42;
#line 1584 "prog_io.m"
                      else
#line 1584 "prog_io.m"
                        {
#line 1584 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_43_43;

#line 1584 "prog_io.m"
                          {
#line 1584 "prog_io.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[3], &parse_tree__prog_io__V_43_43, ((MR_Box) (parse_tree__prog_io__V_87_87)), ((MR_Box) (parse_tree__prog_io__V_39_39)));
                          }
#line 4620 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_43_43 == (MR_Integer) 0);
#line 1584 "prog_io.m"
                          parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1584 "prog_io.m"
                          if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                            *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_43_43;
#line 1584 "prog_io.m"
                          else
#line 1584 "prog_io.m"
                            {
#line 1584 "prog_io.m"
                              {
#line 1584 "prog_io.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[4], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_86_86)), ((MR_Box) (parse_tree__prog_io__V_40_40)));
#line 1584 "prog_io.m"
                                return;
                              }
#line 1584 "prog_io.m"
                            }
#line 1584 "prog_io.m"
                        }
#line 1584 "prog_io.m"
                    }
#line 1584 "prog_io.m"
                }
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 3:
#line 4651 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
            }
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
        case (MR_Integer) 3:
#line 1584 "prog_io.m"
          {
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1584 "prog_io.m"
#line 1584 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1584 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "prog_io.m"
              case (MR_Integer) 0:
#line 4679 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 1:
#line 4685 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 2:
#line 4691 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
              case (MR_Integer) 3:
#line 1584 "prog_io.m"
                {
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 2)));
#line 1584 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_71_71;

#line 1584 "prog_io.m"
                  {
#line 1584 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_71_71, ((MR_Box) (parse_tree__prog_io__V_85_85)), ((MR_Box) (parse_tree__prog_io__V_68_68)));
                  }
#line 4713 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_71_71 == (MR_Integer) 0);
#line 1584 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1584 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_71_71;
#line 1584 "prog_io.m"
                  else
#line 1584 "prog_io.m"
                    {
#line 1584 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_72_72;

#line 1584 "prog_io.m"
                      {
#line 1584 "prog_io.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], &parse_tree__prog_io__V_72_72, ((MR_Box) (parse_tree__prog_io__V_84_84)), ((MR_Box) (parse_tree__prog_io__V_69_69)));
                      }
#line 4733 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_72_72 == (MR_Integer) 0);
#line 1584 "prog_io.m"
                      parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1584 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                        *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_72_72;
#line 1584 "prog_io.m"
                      else
#line 1584 "prog_io.m"
                        {
#line 1584 "prog_io.m"
                          parse_tree__prog_io_item____Compare____item_or_marker_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_83_83, parse_tree__prog_io__V_70_70);
#line 1584 "prog_io.m"
                          return;
                        }
#line 1584 "prog_io.m"
                    }
#line 1584 "prog_io.m"
                }
#line 1584 "prog_io.m"
                break;
#line 1584 "prog_io.m"
            }
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
      }
#line 1584 "prog_io.m"
  }
#line 1584 "prog_io.m"
}

#line 1584 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_iom_result_0_0(
#line 1584 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1584 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1584 "prog_io.m"
{
#line 1584 "prog_io.m"
  {
#line 1584 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1584 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_21 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1584 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_22 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1584 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_21 == parse_tree__prog_io__CastY_22);
#line 1584 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1584 "prog_io.m"
    else
#line 1584 "prog_io.m"
#line 1584 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1584 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1584 "prog_io.m"
        case (MR_Integer) 0:
#line 1584 "prog_io.m"
          {
#line 1584 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1584 "prog_io.m"
            MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1584 "prog_io.m"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
        case (MR_Integer) 1:
#line 1584 "prog_io.m"
          {
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__1_1), (MR_Integer) 1);
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6;

#line 1584 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1584 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
              {
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__HeadVar__2_2), (MR_Integer) 1);
#line 4832 "parse_tree.prog_io.c"
                {
#line 4834 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__error_util____Unify____error_spec_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_6_6);
                }
#line 1584 "prog_io.m"
              }
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
        case (MR_Integer) 2:
#line 1584 "prog_io.m"
          {
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_26_26;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_27_27;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_28_28;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_29_29;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 3)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_13_13;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_14_14;

#line 1584 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1584 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
              {
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 3)));
#line 4886 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4888 "parse_tree.prog_io.c"
                {
#line 4890 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_io__V_7_7)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
                }
#line 1584 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                  {
#line 4897 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 4899 "parse_tree.prog_io.c"
                    {
#line 4901 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_io__V_8_8)), ((MR_Box) (parse_tree__prog_io__V_12_12)));
                    }
#line 1584 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                      {
#line 4908 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_io_scalar_common_1[3];
#line 4910 "parse_tree.prog_io.c"
                        {
#line 4912 "parse_tree.prog_io.c"
                          parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_io__V_9_9)), ((MR_Box) (parse_tree__prog_io__V_13_13)));
                        }
#line 1584 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                          {
#line 4919 "parse_tree.prog_io.c"
                            parse_tree__prog_io__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_io_scalar_common_1[4];
#line 4921 "parse_tree.prog_io.c"
                            {
#line 4923 "parse_tree.prog_io.c"
                              return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_io__V_10_10)), ((MR_Box) (parse_tree__prog_io__V_14_14)));
                            }
#line 1584 "prog_io.m"
                          }
#line 1584 "prog_io.m"
                      }
#line 1584 "prog_io.m"
                  }
#line 1584 "prog_io.m"
              }
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
        case (MR_Integer) 3:
#line 1584 "prog_io.m"
          {
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_23_23;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_24_24;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 2)));
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_18_18;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_19_19;
#line 1584 "prog_io.m"
            MR_Word parse_tree__prog_io__V_20_20;

#line 1584 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1584 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
              {
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1584 "prog_io.m"
                parse_tree__prog_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 2)));
#line 4971 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_23_23 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 4973 "parse_tree.prog_io.c"
                {
#line 4975 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_23_23, ((MR_Box) (parse_tree__prog_io__V_15_15)), ((MR_Box) (parse_tree__prog_io__V_18_18)));
                }
#line 1584 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1584 "prog_io.m"
                  {
#line 4982 "parse_tree.prog_io.c"
                    parse_tree__prog_io__TypeInfo_24_24 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 4984 "parse_tree.prog_io.c"
                    {
#line 4986 "parse_tree.prog_io.c"
                      parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_24_24, ((MR_Box) (parse_tree__prog_io__V_16_16)), ((MR_Box) (parse_tree__prog_io__V_19_19)));
                    }
#line 1584 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 4991 "parse_tree.prog_io.c"
                      {
#line 4993 "parse_tree.prog_io.c"
                        return parse_tree__prog_io__succeeded = parse_tree__prog_io_item____Unify____item_or_marker_0_0(parse_tree__prog_io__V_17_17, parse_tree__prog_io__V_20_20);
                      }
#line 1584 "prog_io.m"
                  }
#line 1584 "prog_io.m"
              }
#line 1584 "prog_io.m"
          }
#line 1584 "prog_io.m"
          break;
#line 1584 "prog_io.m"
      }
#line 1584 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1584 "prog_io.m"
  }
#line 1584 "prog_io.m"
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
#line 5054 "parse_tree.prog_io.c"
  {
#line 5056 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 5059 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 5061 "parse_tree.prog_io.c"
  }
#line 199 "prog_io.m"
}

#line 1218 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_require_module_decl_0_0(
#line 1218 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1218 "prog_io.m"
{
#line 1218 "prog_io.m"
  {
#line 1218 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1218 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1218 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1218 "prog_io.m"
    {
#line 1218 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 1218 "prog_io.m"
      return;
    }
#line 1218 "prog_io.m"
  }
#line 1218 "prog_io.m"
}

#line 1218 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_require_module_decl_0_0(
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 1218 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1218 "prog_io.m"
{
#line 5107 "parse_tree.prog_io.c"
  {
#line 5109 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 5112 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 5114 "parse_tree.prog_io.c"
  }
#line 1218 "prog_io.m"
}

#line 1222 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_module_decl_present_0_0(
#line 1222 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1222 "prog_io.m"
{
#line 1222 "prog_io.m"
  {
#line 1222 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1222 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_36 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1222 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_37 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1222 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_36 == parse_tree__prog_io__CastY_37);
#line 1222 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 5143 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1222 "prog_io.m"
    else
#line 1222 "prog_io.m"
#line 1222 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) {
#line 1222 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1222 "prog_io.m"
        case (MR_Integer) 0:
#line 1222 "prog_io.m"
          {
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1222 "prog_io.m"
#line 1222 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1222 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1222 "prog_io.m"
              case (MR_Integer) 0:
#line 1222 "prog_io.m"
                {
#line 1222 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 1222 "prog_io.m"
                  {
#line 1222 "prog_io.m"
                    parse_tree__prog_io____Compare____maybe_lookahead_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_43_43, parse_tree__prog_io__V_5_5);
#line 1222 "prog_io.m"
                    return;
                  }
#line 1222 "prog_io.m"
                }
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
              case (MR_Integer) 1:
#line 5184 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
              case (MR_Integer) 2:
#line 5190 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
            }
#line 1222 "prog_io.m"
          }
#line 1222 "prog_io.m"
          break;
#line 1222 "prog_io.m"
        case (MR_Integer) 1:
#line 1222 "prog_io.m"
          {
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1222 "prog_io.m"
#line 1222 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1222 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1222 "prog_io.m"
              case (MR_Integer) 0:
#line 5216 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
              case (MR_Integer) 1:
#line 1222 "prog_io.m"
                {
#line 1222 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1222 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1222 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_19_19;

#line 1222 "prog_io.m"
                  {
#line 1222 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_19_19, parse_tree__prog_io__V_47_47, parse_tree__prog_io__V_17_17);
                  }
#line 5236 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_19_19 == (MR_Integer) 0);
#line 1222 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1222 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1222 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_19_19;
#line 1222 "prog_io.m"
                  else
#line 1222 "prog_io.m"
                    {
#line 1222 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_46_46, parse_tree__prog_io__V_18_18);
#line 1222 "prog_io.m"
                      return;
                    }
#line 1222 "prog_io.m"
                }
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
              case (MR_Integer) 2:
#line 5259 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
            }
#line 1222 "prog_io.m"
          }
#line 1222 "prog_io.m"
          break;
#line 1222 "prog_io.m"
        case (MR_Integer) 2:
#line 1222 "prog_io.m"
          {
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1222 "prog_io.m"
#line 1222 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) {
#line 1222 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1222 "prog_io.m"
              case (MR_Integer) 0:
#line 5285 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
              case (MR_Integer) 1:
#line 5291 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
              case (MR_Integer) 2:
#line 1222 "prog_io.m"
                {
#line 1222 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1222 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1222 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_35_35;

#line 1222 "prog_io.m"
                  {
#line 1222 "prog_io.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io__V_35_35, parse_tree__prog_io__V_45_45, parse_tree__prog_io__V_33_33);
                  }
#line 5311 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_35_35 == (MR_Integer) 0);
#line 1222 "prog_io.m"
                  parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1222 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1222 "prog_io.m"
                    *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_35_35;
#line 1222 "prog_io.m"
                  else
#line 1222 "prog_io.m"
                    {
#line 1222 "prog_io.m"
                      mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_44_44, parse_tree__prog_io__V_34_34);
#line 1222 "prog_io.m"
                      return;
                    }
#line 1222 "prog_io.m"
                }
#line 1222 "prog_io.m"
                break;
#line 1222 "prog_io.m"
            }
#line 1222 "prog_io.m"
          }
#line 1222 "prog_io.m"
          break;
#line 1222 "prog_io.m"
      }
#line 1222 "prog_io.m"
  }
#line 1222 "prog_io.m"
}

#line 1222 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_module_decl_present_0_0(
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1222 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1222 "prog_io.m"
{
#line 1222 "prog_io.m"
  {
#line 1222 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1222 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1222 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1222 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1222 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1222 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1222 "prog_io.m"
    else
#line 1222 "prog_io.m"
#line 1222 "prog_io.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) {
#line 1222 "prog_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1222 "prog_io.m"
        case (MR_Integer) 0:
#line 1222 "prog_io.m"
          {
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_4_4;

#line 1222 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1222 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1222 "prog_io.m"
              {
#line 1222 "prog_io.m"
                parse_tree__prog_io__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 5393 "parse_tree.prog_io.c"
                {
#line 5395 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_lookahead_0_0(parse_tree__prog_io__V_3_3, parse_tree__prog_io__V_4_4);
                }
#line 1222 "prog_io.m"
              }
#line 1222 "prog_io.m"
          }
#line 1222 "prog_io.m"
          break;
#line 1222 "prog_io.m"
        case (MR_Integer) 1:
#line 1222 "prog_io.m"
          {
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7;
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 1222 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1222 "prog_io.m"
              {
#line 1222 "prog_io.m"
                parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1222 "prog_io.m"
                parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5427 "parse_tree.prog_io.c"
                {
#line 5429 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_7_7);
                }
#line 1222 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 5434 "parse_tree.prog_io.c"
                  {
#line 5436 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_6_6, parse_tree__prog_io__V_8_8);
                  }
#line 1222 "prog_io.m"
              }
#line 1222 "prog_io.m"
          }
#line 1222 "prog_io.m"
          break;
#line 1222 "prog_io.m"
        case (MR_Integer) 2:
#line 1222 "prog_io.m"
          {
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11;
#line 1222 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1222 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1222 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1222 "prog_io.m"
              {
#line 1222 "prog_io.m"
                parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1222 "prog_io.m"
                parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5468 "parse_tree.prog_io.c"
                {
#line 5470 "parse_tree.prog_io.c"
                  parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__V_9_9, parse_tree__prog_io__V_11_11);
                }
#line 1222 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 5475 "parse_tree.prog_io.c"
                  {
#line 5477 "parse_tree.prog_io.c"
                    return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_10_10, parse_tree__prog_io__V_12_12);
                  }
#line 1222 "prog_io.m"
              }
#line 1222 "prog_io.m"
          }
#line 1222 "prog_io.m"
          break;
#line 1222 "prog_io.m"
      }
#line 1222 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1222 "prog_io.m"
  }
#line 1222 "prog_io.m"
}

#line 1561 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_lookahead_0_0(
#line 1561 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 1561 "prog_io.m"
{
#line 1561 "prog_io.m"
  {
#line 1561 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1561 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 1561 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 1561 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 1561 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 5519 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1561 "prog_io.m"
    else
#line 1561 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1561 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1561 "prog_io.m"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 1561 "prog_io.m"
      else
#line 5531 "parse_tree.prog_io.c"
        *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 1561 "prog_io.m"
    else
#line 1561 "prog_io.m"
      {
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 1561 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5544 "parse_tree.prog_io.c"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 1561 "prog_io.m"
        else
#line 1561 "prog_io.m"
          {
#line 1561 "prog_io.m"
            MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 1561 "prog_io.m"
            MR_Word parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 1561 "prog_io.m"
            MR_Word parse_tree__prog_io__V_12_12;

#line 1561 "prog_io.m"
            {
#line 1561 "prog_io.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[1], &parse_tree__prog_io__V_12_12, ((MR_Box) (parse_tree__prog_io__V_18_18)), ((MR_Box) (parse_tree__prog_io__V_10_10)));
            }
#line 5562 "parse_tree.prog_io.c"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_12_12 == (MR_Integer) 0);
#line 1561 "prog_io.m"
            parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 1561 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1561 "prog_io.m"
              *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_12_12;
#line 1561 "prog_io.m"
            else
#line 1561 "prog_io.m"
              {
#line 1561 "prog_io.m"
                {
#line 1561 "prog_io.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_17_17)), ((MR_Box) (parse_tree__prog_io__V_11_11)));
#line 1561 "prog_io.m"
                  return;
                }
#line 1561 "prog_io.m"
              }
#line 1561 "prog_io.m"
          }
#line 1561 "prog_io.m"
      }
#line 1561 "prog_io.m"
  }
#line 1561 "prog_io.m"
}

#line 1561 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_lookahead_0_0(
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1561 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 1561 "prog_io.m"
{
#line 1561 "prog_io.m"
  {
#line 1561 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1561 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1561 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1561 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 1561 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1561 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1561 "prog_io.m"
    else
#line 1561 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1561 "prog_io.m"
      {
#line 1561 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 1561 "prog_io.m"
        MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 1561 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 1561 "prog_io.m"
      }
#line 1561 "prog_io.m"
    else
#line 1561 "prog_io.m"
      {
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_11_11;
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_12_12;
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__V_7_7;
#line 1561 "prog_io.m"
        MR_Word parse_tree__prog_io__V_8_8;

#line 1561 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1561 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1561 "prog_io.m"
          {
#line 1561 "prog_io.m"
            parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1561 "prog_io.m"
            parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5658 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_io_scalar_common_1[1];
#line 5660 "parse_tree.prog_io.c"
            {
#line 5662 "parse_tree.prog_io.c"
              parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_11_11, ((MR_Box) (parse_tree__prog_io__V_5_5)), ((MR_Box) (parse_tree__prog_io__V_7_7)));
            }
#line 1561 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1561 "prog_io.m"
              {
#line 5669 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_12_12 = (MR_Word) &parse_tree__prog_io_scalar_common_1[2];
#line 5671 "parse_tree.prog_io.c"
                {
#line 5673 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_12_12, ((MR_Box) (parse_tree__prog_io__V_6_6)), ((MR_Box) (parse_tree__prog_io__V_8_8)));
                }
#line 1561 "prog_io.m"
              }
#line 1561 "prog_io.m"
          }
#line 1561 "prog_io.m"
      }
#line 1561 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1561 "prog_io.m"
  }
#line 1561 "prog_io.m"
}

#line 279 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____make_dummy_parse_tree_1_0(
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_6,
#line 279 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 279 "prog_io.m"
{
#line 279 "prog_io.m"
  {
#line 279 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 279 "prog_io.m"
    {
#line 279 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 279 "prog_io.m"
      return;
    }
#line 279 "prog_io.m"
  }
#line 279 "prog_io.m"
}

#line 279 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____make_dummy_parse_tree_1_0(
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_PT_5,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 279 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 279 "prog_io.m"
{
#line 279 "prog_io.m"
  {
#line 279 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 279 "prog_io.m"
    {
#line 279 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_95_100_117_109_109_121_95_112_97_114_115_101_95_116_114_101_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 279 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 279 "prog_io.m"
  }
#line 279 "prog_io.m"
}

#line 1700 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_7,
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1700 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18,
#line 1700 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_19,
#line 1700 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_20)
#line 1700 "prog_io.m"
{
#line 1704 "prog_io.m"
  {
#line 1704 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_11;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__Error_12;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_16;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__V_44_44;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__V_46_46;
#line 1704 "prog_io.m"
    MR_Word parse_tree__prog_io__V_47_47;

#line 1705 "prog_io.m"
    {
#line 1705 "prog_io.m"
      parse_tree__prog_io__Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_8);
    }
#line 1711 "prog_io.m"
#line 1711 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__FileKind_7)) {
#line 1711 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1711 "prog_io.m"
      case (MR_Integer) 0:
#line 1707 "prog_io.m"
        {
#line 1708 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 4;
#line 1709 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[70]);
#line 1707 "prog_io.m"
        }
#line 1711 "prog_io.m"
        break;
#line 1711 "prog_io.m"
      case (MR_Integer) 1:
#line 1712 "prog_io.m"
        {
#line 1713 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1714 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[64]);
#line 1712 "prog_io.m"
        }
#line 1711 "prog_io.m"
        break;
#line 1711 "prog_io.m"
      case (MR_Integer) 2:
#line 1716 "prog_io.m"
        {
#line 1717 "prog_io.m"
          parse_tree__prog_io__Error_12 = (MR_Integer) 5;
#line 1718 "prog_io.m"
          parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[66]);
#line 1716 "prog_io.m"
        }
#line 1711 "prog_io.m"
        break;
#line 1711 "prog_io.m"
    }
#line 1721 "prog_io.m"
    {
#line 1721 "prog_io.m"
      parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1721 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1721 "prog_io.m"
    }
#line 1721 "prog_io.m"
    {
#line 1721 "prog_io.m"
      parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1721 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1721 "prog_io.m"
    }
#line 1721 "prog_io.m"
    {
#line 1721 "prog_io.m"
      parse_tree__prog_io__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1721 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Context_11));
#line 1721 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1721 "prog_io.m"
    }
#line 1721 "prog_io.m"
    {
#line 1721 "prog_io.m"
      parse_tree__prog_io__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 1721 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1721 "prog_io.m"
    }
#line 1720 "prog_io.m"
    {
#line 1720 "prog_io.m"
      parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1720 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1720 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1720 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 1720 "prog_io.m"
    }
#line 1722 "prog_io.m"
    {
#line 1722 "prog_io.m"
      MR_Word base;
#line 1722 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1722 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_16));
#line 1722 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1722 "prog_io.m"
    }
#line 1723 "prog_io.m"
    {
#line 1723 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) (parse_tree__prog_io__Error_12)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_19, parse_tree__prog_io__STATE_VARIABLE_Errors_20);
#line 1723 "prog_io.m"
      return;
    }
#line 1704 "prog_io.m"
  }
#line 1700 "prog_io.m"
}

#line 1674 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_for_unexpected_item_11_p_0(
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_12,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__FileKind_13,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__FinalLookAhead_14,
#line 1674 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_15,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__SeqNumCounter0_16,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 1674 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 1674 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_32,
#line 1674 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_33)
#line 1674 "prog_io.m"
{
#line 1680 "prog_io.m"
  {
#line 1680 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1680 "prog_io.m"
    MR_Word parse_tree__prog_io__IOMResult_20;
#line 1681 "prog_io.m"
    MR_Word parse_tree__prog_io___SeqNumCounter_21;

#line 1681 "prog_io.m"
    {
#line 1681 "prog_io.m"
      parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__FinalLookAhead_14, parse_tree__prog_io__ModuleName_12, parse_tree__prog_io__SourceFileName_15, &parse_tree__prog_io__IOMResult_20, parse_tree__prog_io__SeqNumCounter0_16, &parse_tree__prog_io___SeqNumCounter_21);
    }
#line 1685 "prog_io.m"
#line 1685 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__IOMResult_20)) {
#line 1685 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1685 "prog_io.m"
      case (MR_Integer) 0:
#line 1684 "prog_io.m"
        {
#line 1684 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_30;
#line 1684 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_33 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_32;
#line 1684 "prog_io.m"
        }
#line 1685 "prog_io.m"
        break;
#line 1685 "prog_io.m"
      case (MR_Integer) 1:
#line 1686 "prog_io.m"
        {
#line 1686 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpec_22 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__IOMResult_20), (MR_Integer) 1);

#line 1687 "prog_io.m"
          {
#line 1687 "prog_io.m"
            MR_Word base;
#line 1687 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1687 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = base;
#line 1687 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_22));
#line 1687 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_30));
#line 1687 "prog_io.m"
          }
#line 1688 "prog_io.m"
          {
#line 1688 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1688 "prog_io.m"
            return;
          }
#line 1686 "prog_io.m"
        }
#line 1685 "prog_io.m"
        break;
#line 1685 "prog_io.m"
      case (MR_Integer) 2:
#line 1691 "prog_io.m"
        {
#line 1691 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1691 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpecs_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));
#line 1691 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemErrors_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 3)));
#line 1691 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_39_39;
#line 1691 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_40_40;
#line 1690 "prog_io.m"
          MR_Word parse_tree__prog_io___VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));

#line 1692 "prog_io.m"
          {
#line 1692 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_25, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30);
          }
#line 1693 "prog_io.m"
          {
#line 1693 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Errors_40_40 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__ItemErrors_26);
          }
#line 1694 "prog_io.m"
          {
#line 1694 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__Term_24, parse_tree__prog_io__STATE_VARIABLE_Specs_39_39, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_40_40, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1694 "prog_io.m"
            return;
          }
#line 1691 "prog_io.m"
        }
#line 1685 "prog_io.m"
        break;
#line 1685 "prog_io.m"
      case (MR_Integer) 3:
#line 1696 "prog_io.m"
        {
#line 1696 "prog_io.m"
          MR_Word parse_tree__prog_io__IOMTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 1)));
#line 1696 "prog_io.m"
          MR_Word parse_tree__prog_io___IOMVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 0)));
#line 1696 "prog_io.m"
          MR_Word parse_tree__prog_io___IOM_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOMResult_20, (MR_Integer) 2)));

#line 1697 "prog_io.m"
          {
#line 1697 "prog_io.m"
            parse_tree__prog_io__report_unexpected_term_at_end_6_p_0(parse_tree__prog_io__FileKind_13, parse_tree__prog_io__IOMTerm_28, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Errors_0_32, parse_tree__prog_io__STATE_VARIABLE_Errors_33);
#line 1697 "prog_io.m"
            return;
          }
#line 1696 "prog_io.m"
        }
#line 1685 "prog_io.m"
        break;
#line 1685 "prog_io.m"
    }
#line 1680 "prog_io.m"
  }
#line 1674 "prog_io.m"
}

#line 1646 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_wrong_module_start_7_p_0(
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_8,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__Expected_9,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__Actual_10,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_16,
#line 1646 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_17,
#line 1646 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_18,
#line 1646 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_19)
#line 1646 "prog_io.m"
{
#line 1651 "prog_io.m"
  {
#line 1651 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__Pieces_13;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__Msgs_14;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_15;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_22_22;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_28_28;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_30_30;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_38_38;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_41_41;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_42_42;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_49_49;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_53_53;
#line 1651 "prog_io.m"
    MR_Word parse_tree__prog_io__V_54_54;

#line 1654 "prog_io.m"
    {
#line 1654 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io__Expected_9));
#line 1654 "prog_io.m"
    }
#line 1655 "prog_io.m"
    {
#line 1655 "prog_io.m"
      parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1655 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1655 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io__Actual_10));
#line 1655 "prog_io.m"
    }
#line 1655 "prog_io.m"
    {
#line 1655 "prog_io.m"
      parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1655 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1655 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1655 "prog_io.m"
    }
#line 1655 "prog_io.m"
    {
#line 1655 "prog_io.m"
      parse_tree__prog_io__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1655 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[75])));
#line 1655 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1655 "prog_io.m"
    }
#line 1654 "prog_io.m"
    {
#line 1654 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[74])));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1654 "prog_io.m"
    }
#line 1654 "prog_io.m"
    {
#line 1654 "prog_io.m"
      parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1654 "prog_io.m"
    }
#line 1654 "prog_io.m"
    {
#line 1654 "prog_io.m"
      parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[73])));
#line 1654 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1654 "prog_io.m"
    }
#line 1653 "prog_io.m"
    {
#line 1653 "prog_io.m"
      parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1653 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1653 "prog_io.m"
    }
#line 1653 "prog_io.m"
    {
#line 1653 "prog_io.m"
      parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[96])));
#line 1653 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1653 "prog_io.m"
    }
#line 1653 "prog_io.m"
    {
#line 1653 "prog_io.m"
      parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[95])));
#line 1653 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1653 "prog_io.m"
    }
#line 1652 "prog_io.m"
    {
#line 1652 "prog_io.m"
      parse_tree__prog_io__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[94])));
#line 1652 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_13, 1) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1652 "prog_io.m"
    }
#line 1656 "prog_io.m"
    {
#line 1656 "prog_io.m"
      parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_13));
#line 1656 "prog_io.m"
    }
#line 1656 "prog_io.m"
    {
#line 1656 "prog_io.m"
      parse_tree__prog_io__Msgs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1656 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1656 "prog_io.m"
    }
#line 1658 "prog_io.m"
    {
#line 1658 "prog_io.m"
      parse_tree__prog_io__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1658 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_8));
#line 1658 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io__Msgs_14));
#line 1658 "prog_io.m"
    }
#line 1658 "prog_io.m"
    {
#line 1658 "prog_io.m"
      parse_tree__prog_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1658 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io__V_54_54));
#line 1658 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1658 "prog_io.m"
    }
#line 1657 "prog_io.m"
    {
#line 1657 "prog_io.m"
      parse_tree__prog_io__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1657 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1657 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1657 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_53_53));
#line 1657 "prog_io.m"
    }
#line 1659 "prog_io.m"
    {
#line 1659 "prog_io.m"
      MR_Word base;
#line 1659 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_17 = base;
#line 1659 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_15));
#line 1659 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_16));
#line 1659 "prog_io.m"
    }
#line 1660 "prog_io.m"
    {
#line 1660 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_18, parse_tree__prog_io__STATE_VARIABLE_Errors_19);
#line 1660 "prog_io.m"
      return;
    }
#line 1651 "prog_io.m"
  }
#line 1646 "prog_io.m"
}

#line 1632 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__report_missing_module_start_5_p_0(
#line 1632 "prog_io.m"
  MR_Word parse_tree__prog_io__FirstContext_6,
#line 1632 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_12,
#line 1632 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_13,
#line 1632 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_14,
#line 1632 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_15)
#line 1632 "prog_io.m"
{
#line 1636 "prog_io.m"
  {
#line 1636 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1636 "prog_io.m"
    MR_Word parse_tree__prog_io__Spec_11;
#line 1636 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1636 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;

#line 1642 "prog_io.m"
    {
#line 1642 "prog_io.m"
      parse_tree__prog_io__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1642 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_6));
#line 1642 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[93])));
#line 1642 "prog_io.m"
    }
#line 1642 "prog_io.m"
    {
#line 1642 "prog_io.m"
      parse_tree__prog_io__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1642 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 1642 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1642 "prog_io.m"
    }
#line 1641 "prog_io.m"
    {
#line 1641 "prog_io.m"
      parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1641 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1641 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1641 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1641 "prog_io.m"
    }
#line 1643 "prog_io.m"
    {
#line 1643 "prog_io.m"
      MR_Word base;
#line 1643 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_Specs_13 = base;
#line 1643 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 1643 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_12));
#line 1643 "prog_io.m"
    }
#line 1644 "prog_io.m"
    {
#line 1644 "prog_io.m"
      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 2)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_14, parse_tree__prog_io__STATE_VARIABLE_Errors_15);
#line 1644 "prog_io.m"
      return;
    }
#line 1636 "prog_io.m"
  }
#line 1632 "prog_io.m"
}

#line 1591 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_iom_result_6_p_0(
#line 1591 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1591 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 1591 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 1591 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19,
#line 1591 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20,
#line 1591 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_11)
#line 1591 "prog_io.m"
{
#line 1599 "prog_io.m"
  {
#line 1599 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1599 "prog_io.m"
#line 1599 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_9)) {
#line 1599 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1599 "prog_io.m"
      case (MR_Integer) 0:
#line 1599 "prog_io.m"
        {
#line 1600 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1599 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1599 "prog_io.m"
        }
#line 1599 "prog_io.m"
        break;
#line 1599 "prog_io.m"
      case (MR_Integer) 1:
#line 1602 "prog_io.m"
        {
#line 1602 "prog_io.m"
          MR_String parse_tree__prog_io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1602 "prog_io.m"
          MR_Integer parse_tree__prog_io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__Context_15;
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_16;
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__V_22_22;
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__V_31_31;
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__V_32_32;
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__V_33_33;
#line 1602 "prog_io.m"
          MR_Word parse_tree__prog_io__V_34_34;

#line 1604 "prog_io.m"
          {
#line 1604 "prog_io.m"
            parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1604 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_12));
#line 1604 "prog_io.m"
          }
#line 1604 "prog_io.m"
          {
#line 1604 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 1604 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1604 "prog_io.m"
          }
#line 1605 "prog_io.m"
          {
#line 1605 "prog_io.m"
            parse_tree__prog_io__Context_15 = mercury__term__context_init_2_f_0(parse_tree__prog_io__FileName_8, parse_tree__prog_io__LineNumber_13);
          }
#line 1607 "prog_io.m"
          {
#line 1607 "prog_io.m"
            parse_tree__prog_io__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 1607 "prog_io.m"
          }
#line 1607 "prog_io.m"
          {
#line 1607 "prog_io.m"
            parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 1607 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1607 "prog_io.m"
          }
#line 1607 "prog_io.m"
          {
#line 1607 "prog_io.m"
            parse_tree__prog_io__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 1607 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1607 "prog_io.m"
          }
#line 1607 "prog_io.m"
          {
#line 1607 "prog_io.m"
            parse_tree__prog_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1607 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1607 "prog_io.m"
          }
#line 1606 "prog_io.m"
          {
#line 1606 "prog_io.m"
            parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1606 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1606 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1606 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_31_31));
#line 1606 "prog_io.m"
          }
#line 1608 "prog_io.m"
          *parse_tree__prog_io__ReadIOMResult_11 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_16);
#line 1602 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19;
#line 1602 "prog_io.m"
        }
#line 1599 "prog_io.m"
        break;
#line 1599 "prog_io.m"
      case (MR_Integer) 2:
#line 1610 "prog_io.m"
        {
#line 1610 "prog_io.m"
          MR_Word parse_tree__prog_io__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 1610 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 1610 "prog_io.m"
          MR_Integer parse_tree__prog_io__SeqNum_44;
#line 1610 "prog_io.m"
          MR_Word parse_tree__prog_io__MaybeItemOrMarker_45;

#line 1619 "prog_io.m"
          {
#line 1619 "prog_io.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_44, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_19, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_20);
          }
#line 1620 "prog_io.m"
          {
#line 1620 "prog_io.m"
            parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_7, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__Term_18, parse_tree__prog_io__SeqNum_44, &parse_tree__prog_io__MaybeItemOrMarker_45);
          }
#line 1624 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_45)) == (MR_mktag((MR_Integer) 0))))
#line 1625 "prog_io.m"
            {
#line 1625 "prog_io.m"
              MR_Word parse_tree__prog_io__Specs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));
#line 1625 "prog_io.m"
              MR_Word parse_tree__prog_io__V_49_49;

#line 1627 "prog_io.m"
              {
#line 1627 "prog_io.m"
                parse_tree__prog_io__V_49_49 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
              }
#line 1626 "prog_io.m"
              {
#line 1626 "prog_io.m"
                MR_Word base;
#line 1626 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1626 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1626 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1626 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_47));
#line 1626 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1626 "prog_io.m"
              }
#line 1625 "prog_io.m"
            }
#line 1624 "prog_io.m"
          else
#line 1622 "prog_io.m"
            {
#line 1622 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemOrMarker_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_45, (MR_Integer) 0)));

#line 1623 "prog_io.m"
              {
#line 1623 "prog_io.m"
                MR_Word base;
#line 1623 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "prog_io.m"
                *parse_tree__prog_io__ReadIOMResult_11 = base;
#line 1623 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_17));
#line 1623 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_18));
#line 1623 "prog_io.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_46));
#line 1623 "prog_io.m"
              }
#line 1622 "prog_io.m"
            }
#line 1610 "prog_io.m"
        }
#line 1599 "prog_io.m"
        break;
#line 1599 "prog_io.m"
    }
#line 1599 "prog_io.m"
  }
#line 1591 "prog_io.m"
}

#line 1565 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_next_item_or_marker_8_p_0(
#line 1565 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_9,
#line 1565 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1565 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_11,
#line 1565 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadIOMResult_12,
#line 1565 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18,
#line 1565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19)
#line 1565 "prog_io.m"
{
#line 1572 "prog_io.m"
  {
#line 1572 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1572 "prog_io.m"
    if ((parse_tree__prog_io__InitLookAhead_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1572 "prog_io.m"
      {
#line 1572 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadTermResult_15;

#line 1573 "prog_io.m"
        {
#line 1573 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__SourceFileName_11, &parse_tree__prog_io__ReadTermResult_15);
        }
#line 1599 "prog_io.m"
#line 1599 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_15)) {
#line 1599 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1599 "prog_io.m"
          case (MR_Integer) 0:
#line 1599 "prog_io.m"
            {
#line 1600 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1599 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1599 "prog_io.m"
            }
#line 1599 "prog_io.m"
            break;
#line 1599 "prog_io.m"
          case (MR_Integer) 1:
#line 1602 "prog_io.m"
            {
#line 1602 "prog_io.m"
              MR_String parse_tree__prog_io__ErrorMsg_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1602 "prog_io.m"
              MR_Integer parse_tree__prog_io__LineNumber_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_50;
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_51;
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_52;
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__V_56_56;
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__V_65_65;
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__V_66_66;
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__V_67_67;
#line 1602 "prog_io.m"
              MR_Word parse_tree__prog_io__V_68_68;

#line 1604 "prog_io.m"
              {
#line 1604 "prog_io.m"
                parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1604 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_48));
#line 1604 "prog_io.m"
              }
#line 1604 "prog_io.m"
              {
#line 1604 "prog_io.m"
                parse_tree__prog_io__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1604 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1604 "prog_io.m"
              }
#line 1605 "prog_io.m"
              {
#line 1605 "prog_io.m"
                parse_tree__prog_io__Context_51 = mercury__term__context_init_2_f_0(parse_tree__prog_io__SourceFileName_11, parse_tree__prog_io__LineNumber_49);
              }
#line 1607 "prog_io.m"
              {
#line 1607 "prog_io.m"
                parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_50));
#line 1607 "prog_io.m"
              }
#line 1607 "prog_io.m"
              {
#line 1607 "prog_io.m"
                parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1607 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1607 "prog_io.m"
              }
#line 1607 "prog_io.m"
              {
#line 1607 "prog_io.m"
                parse_tree__prog_io__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io__Context_51));
#line 1607 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1607 "prog_io.m"
              }
#line 1607 "prog_io.m"
              {
#line 1607 "prog_io.m"
                parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io__V_66_66));
#line 1607 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1607 "prog_io.m"
              }
#line 1606 "prog_io.m"
              {
#line 1606 "prog_io.m"
                parse_tree__prog_io__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1606 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1606 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1606 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_52, 2) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1606 "prog_io.m"
              }
#line 1608 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__Spec_52);
#line 1602 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18;
#line 1602 "prog_io.m"
            }
#line 1599 "prog_io.m"
            break;
#line 1599 "prog_io.m"
          case (MR_Integer) 2:
#line 1610 "prog_io.m"
            {
#line 1610 "prog_io.m"
              MR_Word parse_tree__prog_io__VarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 0)));
#line 1610 "prog_io.m"
              MR_Word parse_tree__prog_io__Term_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_15, (MR_Integer) 1)));
#line 1610 "prog_io.m"
              MR_Integer parse_tree__prog_io__SeqNum_78;
#line 1610 "prog_io.m"
              MR_Word parse_tree__prog_io__MaybeItemOrMarker_79;

#line 1619 "prog_io.m"
              {
#line 1619 "prog_io.m"
                mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_78, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
              }
#line 1620 "prog_io.m"
              {
#line 1620 "prog_io.m"
                parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__VarSet_53, parse_tree__prog_io__Term_54, parse_tree__prog_io__SeqNum_78, &parse_tree__prog_io__MaybeItemOrMarker_79);
              }
#line 1624 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_79)) == (MR_mktag((MR_Integer) 0))))
#line 1625 "prog_io.m"
                {
#line 1625 "prog_io.m"
                  MR_Word parse_tree__prog_io__Specs_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));
#line 1625 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_83_83;

#line 1627 "prog_io.m"
                  {
#line 1627 "prog_io.m"
                    parse_tree__prog_io__V_83_83 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
                  }
#line 1626 "prog_io.m"
                  {
#line 1626 "prog_io.m"
                    MR_Word base;
#line 1626 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1626 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1626 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1626 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_81));
#line 1626 "prog_io.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1626 "prog_io.m"
                  }
#line 1625 "prog_io.m"
                }
#line 1624 "prog_io.m"
              else
#line 1622 "prog_io.m"
                {
#line 1622 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemOrMarker_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_79, (MR_Integer) 0)));

#line 1623 "prog_io.m"
                  {
#line 1623 "prog_io.m"
                    MR_Word base;
#line 1623 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "prog_io.m"
                    *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1623 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__VarSet_53));
#line 1623 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__Term_54));
#line 1623 "prog_io.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_80));
#line 1623 "prog_io.m"
                  }
#line 1622 "prog_io.m"
                }
#line 1610 "prog_io.m"
            }
#line 1599 "prog_io.m"
            break;
#line 1599 "prog_io.m"
        }
#line 1572 "prog_io.m"
      }
#line 1572 "prog_io.m"
    else
#line 1577 "prog_io.m"
      {
#line 1577 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 0)));
#line 1577 "prog_io.m"
        MR_Word parse_tree__prog_io__LookAheadTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_9, (MR_Integer) 1)));
#line 1577 "prog_io.m"
        MR_Integer parse_tree__prog_io__SeqNum_33;
#line 1577 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeItemOrMarker_34;

#line 1619 "prog_io.m"
        {
#line 1619 "prog_io.m"
          mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_18, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_19);
        }
#line 1620 "prog_io.m"
        {
#line 1620 "prog_io.m"
          parse_tree__prog_io_item__parse_item_or_marker_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__LookAheadVarSet_16, parse_tree__prog_io__LookAheadTerm_17, parse_tree__prog_io__SeqNum_33, &parse_tree__prog_io__MaybeItemOrMarker_34);
        }
#line 1624 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrMarker_34)) == (MR_mktag((MR_Integer) 0))))
#line 1625 "prog_io.m"
          {
#line 1625 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));
#line 1625 "prog_io.m"
            MR_Word parse_tree__prog_io__V_38_38;

#line 1627 "prog_io.m"
            {
#line 1627 "prog_io.m"
              parse_tree__prog_io__V_38_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 7)));
            }
#line 1626 "prog_io.m"
            {
#line 1626 "prog_io.m"
              MR_Word base;
#line 1626 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1626 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1626 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1626 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io__Specs_36));
#line 1626 "prog_io.m"
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 1626 "prog_io.m"
            }
#line 1625 "prog_io.m"
          }
#line 1624 "prog_io.m"
        else
#line 1622 "prog_io.m"
          {
#line 1622 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemOrMarker_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrMarker_34, (MR_Integer) 0)));

#line 1623 "prog_io.m"
            {
#line 1623 "prog_io.m"
              MR_Word base;
#line 1623 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "prog_io.m"
              *parse_tree__prog_io__ReadIOMResult_12 = base;
#line 1623 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAheadVarSet_16));
#line 1623 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__LookAheadTerm_17));
#line 1623 "prog_io.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io__ItemOrMarker_35));
#line 1623 "prog_io.m"
            }
#line 1622 "prog_io.m"
          }
#line 1577 "prog_io.m"
      }
#line 1572 "prog_io.m"
  }
#line 1565 "prog_io.m"
}

#line 1516 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__process_item_nothing_warning_7_p_0(
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemNothingInfo_9,
#line 1516 "prog_io.m"
  MR_Word * parse_tree__prog_io__NoWarnItem_10,
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_26,
#line 1516 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 1516 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_28,
#line 1516 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_29)
#line 1516 "prog_io.m"
{
#line 1522 "prog_io.m"
  {
#line 1522 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1522 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeWarning_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 0)));
#line 1522 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 1)));
#line 1522 "prog_io.m"
    MR_Integer parse_tree__prog_io__NothingSeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothingInfo_9, (MR_Integer) 2)));

#line 1528 "prog_io.m"
    if ((parse_tree__prog_io__MaybeWarning_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1525 "prog_io.m"
      {
#line 1527 "prog_io.m"
        {
#line 1527 "prog_io.m"
          MR_Word base;
#line 1527 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1527 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1527 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__ItemNothingInfo_9));
#line 1527 "prog_io.m"
        }
#line 1525 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1525 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1525 "prog_io.m"
      }
#line 1528 "prog_io.m"
    else
#line 1529 "prog_io.m"
      {
#line 1529 "prog_io.m"
        MR_Word parse_tree__prog_io__Warning_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWarning_13, (MR_Integer) 0)));
#line 1529 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeOption_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 0)));
#line 1529 "prog_io.m"
        MR_String parse_tree__prog_io__Msg_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 1)));
#line 1529 "prog_io.m"
        MR_Word parse_tree__prog_io__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_16, (MR_Integer) 2)));
#line 1529 "prog_io.m"
        MR_Word parse_tree__prog_io__Warn_21;
#line 1529 "prog_io.m"
        MR_Word parse_tree__prog_io__NoWarnItemNothingInfo_25;

#line 1534 "prog_io.m"
        if ((parse_tree__prog_io__MaybeOption_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1536 "prog_io.m"
          parse_tree__prog_io__Warn_21 = (MR_Integer) 1;
#line 1534 "prog_io.m"
        else
#line 1532 "prog_io.m"
          {
#line 1532 "prog_io.m"
            MR_Word parse_tree__prog_io__Option_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOption_17, (MR_Integer) 0)));

#line 1533 "prog_io.m"
            {
#line 1533 "prog_io.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__Option_20, &parse_tree__prog_io__Warn_21);
            }
#line 1532 "prog_io.m"
          }
#line 1552 "prog_io.m"
#line 1552 "prog_io.m"
        switch (parse_tree__prog_io__Warn_21) {
#line 1552 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1552 "prog_io.m"
          case (MR_Integer) 0:
#line 1553 "prog_io.m"
            {
#line 1553 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_26;
#line 1553 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1553 "prog_io.m"
            }
#line 1552 "prog_io.m"
            break;
#line 1552 "prog_io.m"
          case (MR_Integer) 1:
#line 1539 "prog_io.m"
            {
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__Pieces_22;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_23;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__Halt_24;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__V_32_32;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__V_33_33;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__V_39_39;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__V_40_40;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__V_41_41;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__V_42_42;
#line 1539 "prog_io.m"
              MR_Word parse_tree__prog_io__V_43_43;

#line 1540 "prog_io.m"
              {
#line 1540 "prog_io.m"
                parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1540 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__Msg_18));
#line 1540 "prog_io.m"
              }
#line 1540 "prog_io.m"
              {
#line 1540 "prog_io.m"
                parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1540 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[5])));
#line 1540 "prog_io.m"
              }
#line 1540 "prog_io.m"
              {
#line 1540 "prog_io.m"
                parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[92])));
#line 1540 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1540 "prog_io.m"
              }
#line 1542 "prog_io.m"
              {
#line 1542 "prog_io.m"
                parse_tree__prog_io__V_41_41 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_19);
              }
#line 1542 "prog_io.m"
              {
#line 1542 "prog_io.m"
                parse_tree__prog_io__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1542 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1542 "prog_io.m"
              }
#line 1542 "prog_io.m"
              {
#line 1542 "prog_io.m"
                parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 1542 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1542 "prog_io.m"
              }
#line 1542 "prog_io.m"
              {
#line 1542 "prog_io.m"
                parse_tree__prog_io__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1542 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1542 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1542 "prog_io.m"
              }
#line 1542 "prog_io.m"
              {
#line 1542 "prog_io.m"
                parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 1542 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1542 "prog_io.m"
              }
#line 1541 "prog_io.m"
              {
#line 1541 "prog_io.m"
                parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1541 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1541 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1541 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 1541 "prog_io.m"
              }
#line 1543 "prog_io.m"
              {
#line 1543 "prog_io.m"
                MR_Word base;
#line 1543 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_27 = base;
#line 1543 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1543 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_26));
#line 1543 "prog_io.m"
              }
#line 1545 "prog_io.m"
              {
#line 1545 "prog_io.m"
                libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_8, (MR_Integer) 2, &parse_tree__prog_io__Halt_24);
              }
#line 1549 "prog_io.m"
#line 1549 "prog_io.m"
              switch (parse_tree__prog_io__Halt_24) {
#line 1549 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1549 "prog_io.m"
                case (MR_Integer) 0:
#line 1550 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_29 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_28;
#line 1549 "prog_io.m"
                  break;
#line 1549 "prog_io.m"
                case (MR_Integer) 1:
#line 1547 "prog_io.m"
                  {
#line 1548 "prog_io.m"
                    {
#line 1548 "prog_io.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 10)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_28, parse_tree__prog_io__STATE_VARIABLE_Errors_29);
                    }
#line 1547 "prog_io.m"
                  }
#line 1549 "prog_io.m"
                  break;
#line 1549 "prog_io.m"
              }
#line 1539 "prog_io.m"
            }
#line 1552 "prog_io.m"
            break;
#line 1552 "prog_io.m"
        }
#line 1555 "prog_io.m"
        {
#line 1555 "prog_io.m"
          parse_tree__prog_io__NoWarnItemNothingInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1555 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1555 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1555 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothingInfo_25, 2) = ((MR_Box) (parse_tree__prog_io__NothingSeqNum_15));
#line 1555 "prog_io.m"
        }
#line 1556 "prog_io.m"
        {
#line 1556 "prog_io.m"
          MR_Word base;
#line 1556 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "prog_io.m"
          *parse_tree__prog_io__NoWarnItem_10 = base;
#line 1556 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1556 "prog_io.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io__NoWarnItemNothingInfo_25));
#line 1556 "prog_io.m"
        }
#line 1529 "prog_io.m"
      }
#line 1522 "prog_io.m"
  }
#line 1516 "prog_io.m"
}

#line 1476 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__record_version_numbers_6_p_0(
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__MVN_7,
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_8,
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15,
#line 1476 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_16,
#line 1476 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_17,
#line 1476 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_18)
#line 1476 "prog_io.m"
{
#line 1482 "prog_io.m"
  {
#line 1482 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1482 "prog_io.m"
#line 1482 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15)) {
#line 1482 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1482 "prog_io.m"
      case (MR_Integer) 0:
#line 1482 "prog_io.m"
#line 1482 "prog_io.m"
        switch (MR_unmkbody(parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15)) {
#line 1482 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1482 "prog_io.m"
          case (MR_Integer) 0:
#line 1495 "prog_io.m"
            {
#line 1495 "prog_io.m"
              MR_Word parse_tree__prog_io__V_33_33;
#line 1495 "prog_io.m"
              MR_Word parse_tree__prog_io__V_39_39;
#line 1495 "prog_io.m"
              MR_Word parse_tree__prog_io__Msg_67;
#line 1495 "prog_io.m"
              MR_Word parse_tree__prog_io__Spec_68;

#line 1500 "prog_io.m"
              {
#line 1500 "prog_io.m"
                parse_tree__prog_io__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_8);
              }
#line 1500 "prog_io.m"
              {
#line 1500 "prog_io.m"
                parse_tree__prog_io__Msg_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_67, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1500 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[91])));
#line 1500 "prog_io.m"
              }
#line 1502 "prog_io.m"
              {
#line 1502 "prog_io.m"
                parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__Msg_67));
#line 1502 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1502 "prog_io.m"
              }
#line 1502 "prog_io.m"
              {
#line 1502 "prog_io.m"
                parse_tree__prog_io__Spec_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1502 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1502 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1502 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_68, 2) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 1502 "prog_io.m"
              }
#line 1503 "prog_io.m"
              {
#line 1503 "prog_io.m"
                MR_Word base;
#line 1503 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1503 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_68));
#line 1503 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1503 "prog_io.m"
              }
#line 1495 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15;
#line 1495 "prog_io.m"
            }
#line 1482 "prog_io.m"
            break;
#line 1482 "prog_io.m"
          case (MR_Integer) 1:
#line 1482 "prog_io.m"
            {
#line 1483 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__MVN_7);
#line 1482 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_17;
#line 1482 "prog_io.m"
            }
#line 1482 "prog_io.m"
            break;
#line 1482 "prog_io.m"
        }
#line 1482 "prog_io.m"
        break;
#line 1482 "prog_io.m"
      case (MR_Integer) 1:
#line 1485 "prog_io.m"
        {
#line 1485 "prog_io.m"
          MR_Word parse_tree__prog_io__Msg_13;
#line 1485 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_14;
#line 1485 "prog_io.m"
          MR_Word parse_tree__prog_io__V_56_56;
#line 1485 "prog_io.m"
          MR_Word parse_tree__prog_io__V_62_62;

#line 1490 "prog_io.m"
          {
#line 1490 "prog_io.m"
            parse_tree__prog_io__V_56_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_8);
          }
#line 1490 "prog_io.m"
          {
#line 1490 "prog_io.m"
            parse_tree__prog_io__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1490 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_13, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1490 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[90])));
#line 1490 "prog_io.m"
          }
#line 1492 "prog_io.m"
          {
#line 1492 "prog_io.m"
            parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__Msg_13));
#line 1492 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "prog_io.m"
          }
#line 1492 "prog_io.m"
          {
#line 1492 "prog_io.m"
            parse_tree__prog_io__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 1492 "prog_io.m"
          }
#line 1493 "prog_io.m"
          {
#line 1493 "prog_io.m"
            MR_Word base;
#line 1493 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_18 = base;
#line 1493 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_14));
#line 1493 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_17));
#line 1493 "prog_io.m"
          }
#line 1485 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_VNInfo_16 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_15;
#line 1485 "prog_io.m"
        }
#line 1482 "prog_io.m"
        break;
#line 1482 "prog_io.m"
    }
#line 1482 "prog_io.m"
  }
#line 1476 "prog_io.m"
}

#line 1393 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_inner_24_p_0(
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_25,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_26,
#line 1393 "prog_io.m"
  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67,
#line 1393 "prog_io.m"
  MR_Integer * parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_28,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_29,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_70,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_72,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76,
#line 1393 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77,
#line 1393 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_81,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_82,
#line 1393 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_83,
#line 1393 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_84)
#line 1393 "prog_io.m"
{
#line 1408 "prog_io.m"
  while (MR_TRUE)
#line 1408 "prog_io.m"
    {
#line 1408 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1408 "prog_io.m"
      {
#line 1408 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 <= (MR_Integer) 0);

#line 1408 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1407 "prog_io.m"
          {
#line 1407 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_29 = parse_tree__prog_io__InitLookAhead_28;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_InclsCord_72 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_70 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69;
#line 1407 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67;
#line 1407 "prog_io.m"
          }
#line 1408 "prog_io.m"
        else
#line 1410 "prog_io.m"
          {
#line 1410 "prog_io.m"
            MR_Word parse_tree__prog_io__ReadIOMResult_39;
#line 1410 "prog_io.m"
            MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1409 "prog_io.m"
            {
#line 1409 "prog_io.m"
              parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_28, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77, &parse_tree__prog_io__ReadIOMResult_39, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88);
            }
#line 1414 "prog_io.m"
#line 1414 "prog_io.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_39)) {
#line 1414 "prog_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1414 "prog_io.m"
              case (MR_Integer) 0:
#line 1412 "prog_io.m"
                {
#line 1413 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_VNInfo_70 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_InclsCord_72 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1412 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Errors_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1412 "prog_io.m"
                }
#line 1414 "prog_io.m"
                break;
#line 1414 "prog_io.m"
              case (MR_Integer) 1:
#line 1422 "prog_io.m"
                {
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpec_40 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_39), (MR_Integer) 1);
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_168;
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_169;
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_128_170;
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_129_171;

#line 1417 "prog_io.m"
                  {
#line 1417 "prog_io.m"
                    parse_tree__prog_io__ItemSpecs_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_168, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_40));
#line 1417 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1417 "prog_io.m"
                  }
#line 1418 "prog_io.m"
                  {
#line 1418 "prog_io.m"
                    parse_tree__prog_io__ItemErrors_169 = mercury__set__make_singleton_set_1_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)));
                  }
#line 1423 "prog_io.m"
                  {
#line 1423 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_128_170 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_168, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81);
                  }
#line 1424 "prog_io.m"
                  {
#line 1424 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_129_171 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_83, parse_tree__prog_io__ItemErrors_169);
                  }
#line 1425 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1425 "prog_io.m"
                  {
#line 1425 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1425 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_128_170;
#line 1425 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_129_171;

#line 1425 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83;
#line 1425 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1425 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1425 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1425 "prog_io.m"
                  }
#line 1425 "prog_io.m"
                  continue;
#line 1422 "prog_io.m"
                }
#line 1414 "prog_io.m"
                break;
#line 1414 "prog_io.m"
              case (MR_Integer) 2:
#line 1422 "prog_io.m"
                {
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemSpecs_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 2)));
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__ItemErrors_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 3)));
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_128_128;
#line 1422 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_129_129;
#line 1420 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 0)));
#line 1420 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 1)));

#line 1423 "prog_io.m"
                  {
#line 1423 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_128_128 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_41, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81);
                  }
#line 1424 "prog_io.m"
                  {
#line 1424 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_129_129 = mercury__set__union_2_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__prog_io__STATE_VARIABLE_Errors_0_83, parse_tree__prog_io__ItemErrors_42);
                  }
#line 1425 "prog_io.m"
                  /* direct tailcall eliminated */
#line 1425 "prog_io.m"
                  {
#line 1425 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1425 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_128_128;
#line 1425 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_129_129;

#line 1425 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Errors_0_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83;
#line 1425 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1425 "prog_io.m"
                    parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1425 "prog_io.m"
                    parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1425 "prog_io.m"
                  }
#line 1425 "prog_io.m"
                  continue;
#line 1422 "prog_io.m"
                }
#line 1414 "prog_io.m"
                break;
#line 1414 "prog_io.m"
              case (MR_Integer) 3:
#line 1430 "prog_io.m"
                {
#line 1430 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMVarSet_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 0)));
#line 1430 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOMTerm_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 1)));
#line 1430 "prog_io.m"
                  MR_Word parse_tree__prog_io__IOM_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_39, (MR_Integer) 2)));
#line 1430 "prog_io.m"
                  MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90 = (parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 - (MR_Integer) 1);

#line 1438 "prog_io.m"
#line 1438 "prog_io.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_47)) {
#line 1438 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1438 "prog_io.m"
                    case (MR_Integer) 0:
#line 1467 "prog_io.m"
                      {
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__IOM_47, (MR_Integer) 0)));
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__Item_66;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_94_94;
#line 1463 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemNothingInfo_65;

#line 1460 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Item0_64)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_64, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 1460 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1460 "prog_io.m"
                          {
#line 1460 "prog_io.m"
                            parse_tree__prog_io__ItemNothingInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item0_64, (MR_Integer) 1)));
#line 1461 "prog_io.m"
                            {
#line 1461 "prog_io.m"
                              parse_tree__prog_io__process_item_nothing_warning_7_p_0(parse_tree__prog_io__Globals_25, parse_tree__prog_io__ItemNothingInfo_65, &parse_tree__prog_io__Item_66, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81, &parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, parse_tree__prog_io__STATE_VARIABLE_Errors_0_83, &parse_tree__prog_io__STATE_VARIABLE_Errors_93_93);
                            }
#line 1460 "prog_io.m"
                          }
#line 1460 "prog_io.m"
                        else
#line 1464 "prog_io.m"
                          {
#line 1464 "prog_io.m"
                            parse_tree__prog_io__Item_66 = parse_tree__prog_io__Item0_64;
#line 1464 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1464 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1464 "prog_io.m"
                          }
#line 1466 "prog_io.m"
                        {
#line 1466 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_94_94 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75, ((MR_Box) (parse_tree__prog_io__Item_66)));
                        }
#line 1468 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1468 "prog_io.m"
                        {
#line 1468 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_75 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_94_94;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;

#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_83 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_83;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_75;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1468 "prog_io.m"
                        }
#line 1468 "prog_io.m"
                        continue;
#line 1467 "prog_io.m"
                      }
#line 1438 "prog_io.m"
                      break;
#line 1438 "prog_io.m"
                    case (MR_Integer) 1:
#line 1467 "prog_io.m"
                      {
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_144_144 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__Incls_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__IOM_47, (MR_Integer) 0)));
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__HeadIncl_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Incls_58, (MR_Integer) 0)));
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__TailIncls_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Incls_58, (MR_Integer) 1)));
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_99_99;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_100_100;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_98_158;

#line 1452 "prog_io.m"
                        {
#line 1452 "prog_io.m"
                          parse_tree__prog_io__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io__HeadIncl_59));
#line 1452 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io__TailIncls_60));
#line 1452 "prog_io.m"
                        }
#line 1452 "prog_io.m"
                        {
#line 1452 "prog_io.m"
                          parse_tree__prog_io__V_99_99 = mercury__cord__from_list_1_f_0(parse_tree__prog_io__TypeCtorInfo_144_144, parse_tree__prog_io__V_100_100);
                        }
#line 1451 "prog_io.m"
                        {
#line 1451 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_InclsCord_98_158 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_144_144, parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71, parse_tree__prog_io__V_99_99);
                        }
#line 1468 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1468 "prog_io.m"
                        {
#line 1468 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_71 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_98_158;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_71;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1468 "prog_io.m"
                        }
#line 1468 "prog_io.m"
                        continue;
#line 1467 "prog_io.m"
                      }
#line 1438 "prog_io.m"
                      break;
#line 1438 "prog_io.m"
                    case (MR_Integer) 2:
#line 1467 "prog_io.m"
                      {
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_145_145 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__Avails_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__IOM_47, (MR_Integer) 0)));
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__HeadAvail_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Avails_61, (MR_Integer) 0)));
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__TailAvails_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Avails_61, (MR_Integer) 1)));
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_96_96;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_97_97;
#line 1467 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_95_150;

#line 1457 "prog_io.m"
                        {
#line 1457 "prog_io.m"
                          parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__HeadAvail_62));
#line 1457 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (parse_tree__prog_io__TailAvails_63));
#line 1457 "prog_io.m"
                        }
#line 1457 "prog_io.m"
                        {
#line 1457 "prog_io.m"
                          parse_tree__prog_io__V_96_96 = mercury__cord__from_list_1_f_0(parse_tree__prog_io__TypeCtorInfo_145_145, parse_tree__prog_io__V_97_97);
                        }
#line 1456 "prog_io.m"
                        {
#line 1456 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_AvailsCord_95_150 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_145_145, parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73, parse_tree__prog_io__V_96_96);
                        }
#line 1468 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1468 "prog_io.m"
                        {
#line 1468 "prog_io.m"
                          MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_73 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_95_150;
#line 1468 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_73;
#line 1468 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1468 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1468 "prog_io.m"
                        }
#line 1468 "prog_io.m"
                        continue;
#line 1467 "prog_io.m"
                      }
#line 1438 "prog_io.m"
                      break;
#line 1438 "prog_io.m"
                    case (MR_Integer) 3:
#line 1438 "prog_io.m"
#line 1438 "prog_io.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 0)))) {
#line 1438 "prog_io.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1438 "prog_io.m"
                        case (MR_Integer) 0:
#line 1439 "prog_io.m"
                          {
#line 1439 "prog_io.m"
                            MR_Word parse_tree__prog_io__MVN_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));
#line 1439 "prog_io.m"
                            MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_113_113;
#line 1439 "prog_io.m"
                            MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_114_114;

#line 1440 "prog_io.m"
                            {
#line 1440 "prog_io.m"
                              parse_tree__prog_io__record_version_numbers_6_p_0(parse_tree__prog_io__MVN_57, parse_tree__prog_io__IOMTerm_46, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_113_113, parse_tree__prog_io__STATE_VARIABLE_Specs_0_81, &parse_tree__prog_io__STATE_VARIABLE_Specs_114_114);
                            }
#line 1441 "prog_io.m"
                            /* direct tailcall eliminated */
#line 1441 "prog_io.m"
                            {
#line 1441 "prog_io.m"
                              MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1441 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_69 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_113_113;
#line 1441 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1441 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_114_114;

#line 1441 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_0_81 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_81;
#line 1441 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1441 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_69;
#line 1441 "prog_io.m"
                              parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1441 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1441 "prog_io.m"
                            }
#line 1441 "prog_io.m"
                            continue;
#line 1439 "prog_io.m"
                          }
#line 1438 "prog_io.m"
                          break;
#line 1438 "prog_io.m"
                        case (MR_Integer) 1:
#line 1467 "prog_io.m"
                          {
#line 1467 "prog_io.m"
                            MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_166 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_47, (MR_Integer) 1)));

#line 1468 "prog_io.m"
                            /* direct tailcall eliminated */
#line 1468 "prog_io.m"
                            {
#line 1468 "prog_io.m"
                              MR_Integer parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1468 "prog_io.m"
                              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_77 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_166;
#line 1468 "prog_io.m"
                              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 1468 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_79 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_79;
#line 1468 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_77;
#line 1468 "prog_io.m"
                              parse_tree__prog_io__InitLookAhead_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1468 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0_67 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_0__tmp_copy_67;
#line 1468 "prog_io.m"
                            }
#line 1468 "prog_io.m"
                            continue;
#line 1467 "prog_io.m"
                          }
#line 1438 "prog_io.m"
                          break;
#line 1438 "prog_io.m"
                        case (MR_Integer) 2:
#line 1438 "prog_io.m"
                        case (MR_Integer) 3:
#line 1438 "prog_io.m"
                        case (MR_Integer) 4:
#line 1436 "prog_io.m"
                          {
#line 1437 "prog_io.m"
                            {
#line 1437 "prog_io.m"
                              MR_Word base;
#line 1437 "prog_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "prog_io.m"
                              *parse_tree__prog_io__FinalLookAhead_29 = base;
#line 1437 "prog_io.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_45));
#line 1437 "prog_io.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_46));
#line 1437 "prog_io.m"
                            }
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_68 = parse_tree__prog_io__STATE_VARIABLE_NumItemsLeft_90_90;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_70 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_69;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_InclsCord_72 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_71;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_74 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_73;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_76 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_75;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_77;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Specs_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_81;
#line 1436 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Errors_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_83;
#line 1436 "prog_io.m"
                          }
#line 1438 "prog_io.m"
                          break;
#line 1438 "prog_io.m"
                      }
#line 1438 "prog_io.m"
                      break;
#line 1438 "prog_io.m"
                  }
#line 1430 "prog_io.m"
                }
#line 1414 "prog_io.m"
                break;
#line 1414 "prog_io.m"
            }
#line 1410 "prog_io.m"
          }
#line 1408 "prog_io.m"
      }
#line 1408 "prog_io.m"
      break;
#line 1408 "prog_io.m"
    }
#line 1393 "prog_io.m"
}

#line 1366 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_22_p_0(
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_23,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_24,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_InclsCord_41,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_AvailsCord_43,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ItemsCord_45,
#line 1366 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46,
#line 1366 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_50,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_51,
#line 1366 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_52,
#line 1366 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_53)
#line 1366 "prog_io.m"
{
#line 1378 "prog_io.m"
  while (MR_TRUE)
#line 1378 "prog_io.m"
    {
#line 1378 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1378 "prog_io.m"
      {
#line 1378 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1378 "prog_io.m"
        MR_Integer parse_tree__prog_io__NumItemsLeft_36;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__MidLookAhead_37;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60;
#line 1378 "prog_io.m"
        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_63_63;
#line 1378 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_64_64;

#line 1379 "prog_io.m"
        {
#line 1379 "prog_io.m"
          parse_tree__prog_io__read_item_sequence_inner_24_p_0(parse_tree__prog_io__Globals_23, parse_tree__prog_io__ModuleName_24, (MR_Integer) 1024, &parse_tree__prog_io__NumItemsLeft_36, parse_tree__prog_io__InitLookAhead_25, &parse_tree__prog_io__MidLookAhead_37, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57, parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40, &parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58, parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42, &parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59, parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44, &parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62, parse_tree__prog_io__STATE_VARIABLE_Specs_0_50, &parse_tree__prog_io__STATE_VARIABLE_Specs_63_63, parse_tree__prog_io__STATE_VARIABLE_Errors_0_52, &parse_tree__prog_io__STATE_VARIABLE_Errors_64_64);
        }
#line 1383 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__NumItemsLeft_36 == (MR_Integer) 0);
#line 1387 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1384 "prog_io.m"
          {
#line 1384 "prog_io.m"
            /* direct tailcall eliminated */
#line 1384 "prog_io.m"
            {
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__MidLookAhead_37;
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_38 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57;
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_40 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58;
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_42 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59;
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_44 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60;
#line 1384 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_46 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61;
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_48 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_50 = parse_tree__prog_io__STATE_VARIABLE_Specs_63_63;
#line 1384 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_52 = parse_tree__prog_io__STATE_VARIABLE_Errors_64_64;

#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Errors_0_52 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_52;
#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Specs_0_50 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_50;
#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_48 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_48;
#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_46 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_46;
#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0_44 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_0__tmp_copy_44;
#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0_42 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_0__tmp_copy_42;
#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_InclsCord_0_40 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_0__tmp_copy_40;
#line 1384 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_38;
#line 1384 "prog_io.m"
              parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1384 "prog_io.m"
            }
#line 1384 "prog_io.m"
            continue;
#line 1384 "prog_io.m"
          }
#line 1387 "prog_io.m"
        else
#line 1388 "prog_io.m"
          {
#line 1388 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_26 = parse_tree__prog_io__MidLookAhead_37;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_53 = parse_tree__prog_io__STATE_VARIABLE_Errors_64_64;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_51 = parse_tree__prog_io__STATE_VARIABLE_Specs_63_63;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_49 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_62_62;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61_61;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ItemsCord_45 = parse_tree__prog_io__STATE_VARIABLE_ItemsCord_60_60;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_AvailsCord_43 = parse_tree__prog_io__STATE_VARIABLE_AvailsCord_59_59;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_InclsCord_41 = parse_tree__prog_io__STATE_VARIABLE_InclsCord_58_58;
#line 1388 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_VNInfo_39 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_57_57;
#line 1388 "prog_io.m"
          }
#line 1378 "prog_io.m"
      }
#line 1378 "prog_io.m"
      break;
#line 1378 "prog_io.m"
    }
#line 1366 "prog_io.m"
}

#line 1245 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_module_decl_13_p_0(
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__RequireModuleDecl_14,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclPresent_16,
#line 1245 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51,
#line 1245 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_55,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_56,
#line 1245 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_57,
#line 1245 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_58)
#line 1245 "prog_io.m"
{
#line 1253 "prog_io.m"
  while (MR_TRUE)
#line 1253 "prog_io.m"
    {
#line 1253 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1253 "prog_io.m"
      {
#line 1253 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 1253 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_118_118 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1253 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstReadTerm_22;
#line 1253 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstIOM_23;
#line 1253 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;
#line 1253 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;

#line 1257 "prog_io.m"
        {
#line 1257 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0(parse_tree__prog_io__TypeCtorInfo_118_118, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, &parse_tree__prog_io__FirstReadTerm_22);
        }
#line 1258 "prog_io.m"
        {
#line 1258 "prog_io.m"
          parse_tree__prog_io__V_62_62 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
        }
#line 1258 "prog_io.m"
        {
#line 1258 "prog_io.m"
          parse_tree__prog_io__read_term_to_iom_result_6_p_0(parse_tree__prog_io__V_62_62, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, parse_tree__prog_io__FirstReadTerm_22, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63, &parse_tree__prog_io__MaybeFirstIOM_23);
        }
#line 1333 "prog_io.m"
#line 1333 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstIOM_23)) {
#line 1333 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1333 "prog_io.m"
          case (MR_Integer) 0:
#line 1342 "prog_io.m"
            {
#line 1342 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_117;

#line 1343 "prog_io.m"
              {
#line 1343 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_117);
              }
#line 1344 "prog_io.m"
              {
#line 1344 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_117, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
              }
#line 1345 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[4];
#line 1342 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 1342 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;
#line 1342 "prog_io.m"
            }
#line 1333 "prog_io.m"
            break;
#line 1333 "prog_io.m"
          case (MR_Integer) 1:
#line 1342 "prog_io.m"
            {
#line 1342 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_117;

#line 1343 "prog_io.m"
              {
#line 1343 "prog_io.m"
                mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_117);
              }
#line 1344 "prog_io.m"
              {
#line 1344 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_117, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
              }
#line 1345 "prog_io.m"
              *parse_tree__prog_io__ModuleDeclPresent_16 = (MR_Word) &parse_tree__prog_io_scalar_common_3[4];
#line 1342 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 1342 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;
#line 1342 "prog_io.m"
            }
#line 1333 "prog_io.m"
            break;
#line 1333 "prog_io.m"
          case (MR_Integer) 2:
#line 1334 "prog_io.m"
            {
#line 1334 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAhead_49;
#line 1334 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_114 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1334 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1334 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstContext_116;
#line 1334 "prog_io.m"
              MR_Word parse_tree__prog_io__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));
#line 1334 "prog_io.m"
              MR_Word parse_tree__prog_io__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 3)));

#line 1335 "prog_io.m"
              {
#line 1335 "prog_io.m"
                parse_tree__prog_io__FirstContext_116 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_118_118, parse_tree__prog_io__FirstTerm_115);
              }
#line 1336 "prog_io.m"
              {
#line 1336 "prog_io.m"
                parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_116, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
              }
#line 1337 "prog_io.m"
              {
#line 1337 "prog_io.m"
                parse_tree__prog_io__LookAhead_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_49, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_114));
#line 1337 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_49, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_115));
#line 1337 "prog_io.m"
              }
#line 1338 "prog_io.m"
              {
#line 1338 "prog_io.m"
                MR_Word base;
#line 1338 "prog_io.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1338 "prog_io.m"
                *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1338 "prog_io.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__LookAhead_49));
#line 1338 "prog_io.m"
              }
#line 1334 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 1334 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;
#line 1334 "prog_io.m"
            }
#line 1333 "prog_io.m"
            break;
#line 1333 "prog_io.m"
          case (MR_Integer) 3:
#line 1261 "prog_io.m"
            {
#line 1261 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 0)));
#line 1261 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 1)));
#line 1261 "prog_io.m"
              MR_Word parse_tree__prog_io__FirstIOM_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__MaybeFirstIOM_23, (MR_Integer) 2)));

#line 1269 "prog_io.m"
#line 1269 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__FirstIOM_26)) {
#line 1269 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1269 "prog_io.m"
                case (MR_Integer) 0:
#line 1269 "prog_io.m"
                case (MR_Integer) 1:
#line 1269 "prog_io.m"
                case (MR_Integer) 2:
#line 1327 "prog_io.m"
                  {
#line 1327 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstContext_45;
#line 1327 "prog_io.m"
                    MR_Word parse_tree__prog_io__FirstLookAhead_46;

#line 1328 "prog_io.m"
                    {
#line 1328 "prog_io.m"
                      parse_tree__prog_io__FirstContext_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_118_118, parse_tree__prog_io__FirstTerm_25);
                    }
#line 1329 "prog_io.m"
                    {
#line 1329 "prog_io.m"
                      parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_45, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
                    }
#line 1330 "prog_io.m"
                    {
#line 1330 "prog_io.m"
                      parse_tree__prog_io__FirstLookAhead_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_46, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1330 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_46, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1330 "prog_io.m"
                    }
#line 1331 "prog_io.m"
                    {
#line 1331 "prog_io.m"
                      MR_Word base;
#line 1331 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "prog_io.m"
                      *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1331 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_46));
#line 1331 "prog_io.m"
                    }
#line 1327 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 1327 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;
#line 1327 "prog_io.m"
                  }
#line 1269 "prog_io.m"
                  break;
#line 1269 "prog_io.m"
                case (MR_Integer) 3:
#line 1269 "prog_io.m"
#line 1269 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 0)))) {
#line 1269 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1269 "prog_io.m"
                    case (MR_Integer) 0:
#line 1269 "prog_io.m"
                    case (MR_Integer) 3:
#line 1269 "prog_io.m"
                    case (MR_Integer) 4:
#line 1327 "prog_io.m"
                      {
#line 1327 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstContext_45;
#line 1327 "prog_io.m"
                        MR_Word parse_tree__prog_io__FirstLookAhead_46;

#line 1328 "prog_io.m"
                        {
#line 1328 "prog_io.m"
                          parse_tree__prog_io__FirstContext_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_118_118, parse_tree__prog_io__FirstTerm_25);
                        }
#line 1329 "prog_io.m"
                        {
#line 1329 "prog_io.m"
                          parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__FirstContext_45, parse_tree__prog_io__STATE_VARIABLE_Specs_0_55, parse_tree__prog_io__STATE_VARIABLE_Specs_56, parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
                        }
#line 1330 "prog_io.m"
                        {
#line 1330 "prog_io.m"
                          parse_tree__prog_io__FirstLookAhead_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_46, 0) = ((MR_Box) (parse_tree__prog_io__FirstVarSet_24));
#line 1330 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__FirstLookAhead_46, 1) = ((MR_Box) (parse_tree__prog_io__FirstTerm_25));
#line 1330 "prog_io.m"
                        }
#line 1331 "prog_io.m"
                        {
#line 1331 "prog_io.m"
                          MR_Word base;
#line 1331 "prog_io.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "prog_io.m"
                          *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1331 "prog_io.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__FirstLookAhead_46));
#line 1331 "prog_io.m"
                        }
#line 1327 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 1327 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;
#line 1327 "prog_io.m"
                      }
#line 1269 "prog_io.m"
                      break;
#line 1269 "prog_io.m"
                    case (MR_Integer) 1:
#line 1263 "prog_io.m"
                      {
#line 1263 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_105_105 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 1)));

#line 1266 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1266 "prog_io.m"
                        {
#line 1266 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_105_105;
#line 1266 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;

#line 1266 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_53 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_53;
#line 1266 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_51;
#line 1266 "prog_io.m"
                        }
#line 1266 "prog_io.m"
                        continue;
#line 1263 "prog_io.m"
                      }
#line 1269 "prog_io.m"
                      break;
#line 1269 "prog_io.m"
                    case (MR_Integer) 2:
#line 1271 "prog_io.m"
                      {
#line 1271 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 1)));
#line 1271 "prog_io.m"
                        MR_Word parse_tree__prog_io__ModuleNameContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 2)));
#line 1270 "prog_io.m"
                        MR_Integer parse_tree__prog_io___ModuleNameSeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstIOM_26, (MR_Integer) 3)));

#line 1276 "prog_io.m"
                        {
#line 1276 "prog_io.m"
                          parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__StartModuleName_27);
                        }
#line 1282 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1279 "prog_io.m"
                          {
#line 1280 "prog_io.m"
                            {
#line 1280 "prog_io.m"
                              MR_Word base;
#line 1280 "prog_io.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "prog_io.m"
                              *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1280 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1280 "prog_io.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1280 "prog_io.m"
                            }
#line 1279 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Errors_58 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_57;
#line 1279 "prog_io.m"
                            *parse_tree__prog_io__STATE_VARIABLE_Specs_56 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_55;
#line 1279 "prog_io.m"
                          }
#line 1282 "prog_io.m"
                        else
#line 1290 "prog_io.m"
                          {
#line 1283 "prog_io.m"
                            {
#line 1283 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__StartModuleName_27, parse_tree__prog_io__DefaultModuleName_15);
                            }
#line 1290 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1287 "prog_io.m"
                              {
#line 1288 "prog_io.m"
                                {
#line 1288 "prog_io.m"
                                  MR_Word base;
#line 1288 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1288 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__DefaultModuleName_15));
#line 1288 "prog_io.m"
                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1288 "prog_io.m"
                                }
#line 1287 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Errors_58 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_57;
#line 1287 "prog_io.m"
                                *parse_tree__prog_io__STATE_VARIABLE_Specs_56 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_55;
#line 1287 "prog_io.m"
                              }
#line 1290 "prog_io.m"
                            else
#line 1293 "prog_io.m"
                              {
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_31;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__Severity_32;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__Msg_33;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_34;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_74_74;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_75_75;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_76_76;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_79_79;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_80_80;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_97_97;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_98_98;
#line 1293 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_99_99;

#line 1291 "prog_io.m"
                                {
#line 1291 "prog_io.m"
                                  parse_tree__prog_io__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1291 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51));
#line 1291 "prog_io.m"
                                }
#line 1292 "prog_io.m"
                                {
#line 1292 "prog_io.m"
                                  parse_tree__prog_io__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1292 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1292 "prog_io.m"
                                }
#line 1292 "prog_io.m"
                                {
#line 1292 "prog_io.m"
                                  parse_tree__prog_io__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__V_80_80));
#line 1292 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1292 "prog_io.m"
                                }
#line 1292 "prog_io.m"
                                {
#line 1292 "prog_io.m"
                                  parse_tree__prog_io__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[89])));
#line 1292 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 1292 "prog_io.m"
                                }
#line 1291 "prog_io.m"
                                {
#line 1291 "prog_io.m"
                                  parse_tree__prog_io__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io__V_75_75));
#line 1291 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io__V_76_76));
#line 1291 "prog_io.m"
                                }
#line 1291 "prog_io.m"
                                {
#line 1291 "prog_io.m"
                                  parse_tree__prog_io__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[88])));
#line 1291 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_31, 1) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 1291 "prog_io.m"
                                }
#line 1303 "prog_io.m"
#line 1303 "prog_io.m"
                                switch (parse_tree__prog_io__RequireModuleDecl_14) {
#line 1303 "prog_io.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 1303 "prog_io.m"
                                  case (MR_Integer) 0:
#line 1295 "prog_io.m"
                                    {
#line 1295 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_93_93;
#line 1295 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_94_94;

#line 1299 "prog_io.m"
                                      parse_tree__prog_io__Severity_32 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_2[0]);
#line 1302 "prog_io.m"
                                      {
#line 1302 "prog_io.m"
                                        parse_tree__prog_io__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "prog_io.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 1302 "prog_io.m"
                                      }
#line 1302 "prog_io.m"
                                      {
#line 1302 "prog_io.m"
                                        parse_tree__prog_io__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io__V_94_94));
#line 1302 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1302 "prog_io.m"
                                      }
#line 1301 "prog_io.m"
                                      {
#line 1301 "prog_io.m"
                                        parse_tree__prog_io__Msg_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_33, 0) = ((MR_Box) (((MR_Integer) 22 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 1301 "prog_io.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_33, 1) = ((MR_Box) (parse_tree__prog_io__V_93_93));
#line 1301 "prog_io.m"
                                      }
#line 1295 "prog_io.m"
                                    }
#line 1303 "prog_io.m"
                                    break;
#line 1303 "prog_io.m"
                                  case (MR_Integer) 1:
#line 1304 "prog_io.m"
                                    {
#line 1305 "prog_io.m"
                                      parse_tree__prog_io__Severity_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1306 "prog_io.m"
                                      {
#line 1306 "prog_io.m"
                                        parse_tree__prog_io__Msg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "prog_io.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_33, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_31));
#line 1306 "prog_io.m"
                                      }
#line 1304 "prog_io.m"
                                    }
#line 1303 "prog_io.m"
                                    break;
#line 1303 "prog_io.m"
                                }
#line 1309 "prog_io.m"
                                {
#line 1309 "prog_io.m"
                                  parse_tree__prog_io__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io__Msg_33));
#line 1309 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "prog_io.m"
                                }
#line 1309 "prog_io.m"
                                {
#line 1309 "prog_io.m"
                                  parse_tree__prog_io__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1309 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_98_98, 1) = ((MR_Box) (parse_tree__prog_io__V_99_99));
#line 1309 "prog_io.m"
                                }
#line 1309 "prog_io.m"
                                {
#line 1309 "prog_io.m"
                                  parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 1309 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "prog_io.m"
                                }
#line 1308 "prog_io.m"
                                {
#line 1308 "prog_io.m"
                                  parse_tree__prog_io__Spec_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 0) = ((MR_Box) (parse_tree__prog_io__Severity_32));
#line 1308 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1308 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_34, 2) = ((MR_Box) (parse_tree__prog_io__V_97_97));
#line 1308 "prog_io.m"
                                }
#line 1310 "prog_io.m"
                                {
#line 1310 "prog_io.m"
                                  MR_Word base;
#line 1310 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "prog_io.m"
                                  *parse_tree__prog_io__STATE_VARIABLE_Specs_56 = base;
#line 1310 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_34));
#line 1310 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_55));
#line 1310 "prog_io.m"
                                }
#line 1311 "prog_io.m"
                                {
#line 1311 "prog_io.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 1)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_57, parse_tree__prog_io__STATE_VARIABLE_Errors_58);
                                }
#line 1317 "prog_io.m"
                                {
#line 1317 "prog_io.m"
                                  MR_Word base;
#line 1317 "prog_io.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "prog_io.m"
                                  *parse_tree__prog_io__ModuleDeclPresent_16 = base;
#line 1317 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_27));
#line 1317 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_28));
#line 1317 "prog_io.m"
                                }
#line 1293 "prog_io.m"
                              }
#line 1290 "prog_io.m"
                          }
#line 1271 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_52 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_51;
#line 1271 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_54 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63_63;
#line 1271 "prog_io.m"
                      }
#line 1269 "prog_io.m"
                      break;
#line 1269 "prog_io.m"
                  }
#line 1269 "prog_io.m"
                  break;
#line 1269 "prog_io.m"
              }
#line 1261 "prog_io.m"
            }
#line 1333 "prog_io.m"
            break;
#line 1333 "prog_io.m"
        }
#line 1253 "prog_io.m"
      }
#line 1253 "prog_io.m"
      break;
#line 1253 "prog_io.m"
    }
#line 1245 "prog_io.m"
}

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_1(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1186 "prog_io.m"
{
#line 1186 "prog_io.m"
  {
#line 1186 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1186 "prog_io.m"
    MR_builtin_longjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0, 1);
#line 1186 "prog_io.m"
  }
#line 1186 "prog_io.m"
}

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_3(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1186 "prog_io.m"
{
#line 1186 "prog_io.m"
  {
#line 1186 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1186 "prog_io.m"
    (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90 = ((MR_Word) (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90);
#line 1186 "prog_io.m"
    {
#line 1186 "prog_io.m"
      parse_tree__prog_io__handle_module_end_marker_11_p_0_2(parse_tree__prog_io__env_ptr);
#line 1186 "prog_io.m"
      return;
    }
#line 1186 "prog_io.m"
  }
#line 1186 "prog_io.m"
}

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_2(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1186 "prog_io.m"
{
#line 1186 "prog_io.m"
  {
#line 1186 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1187 "prog_io.m"
    {
#line 1187 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModule_90);
    }
#line 1187 "prog_io.m"
    if ((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1187 "prog_io.m"
      {
#line 1187 "prog_io.m"
        parse_tree__prog_io__handle_module_end_marker_11_p_0_1(parse_tree__prog_io__env_ptr);
#line 1187 "prog_io.m"
        return;
      }
#line 1186 "prog_io.m"
  }
#line 1186 "prog_io.m"
}

#line 1186 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0_4(
#line 1186 "prog_io.m"
  void * parse_tree__prog_io__env_ptr_arg)
#line 1186 "prog_io.m"
{
#line 1186 "prog_io.m"
  {
#line 1186 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s * parse_tree__prog_io__env_ptr = (struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s *) parse_tree__prog_io__env_ptr_arg;

#line 1186 "prog_io.m"
    if (MR_builtin_setjmp((parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__commit_0) == 0)
#line 1186 "prog_io.m"
      {
#line 1186 "prog_io.m"
        {
#line 1186 "prog_io.m"
          {
#line 1186 "prog_io.m"
            mercury__list__member_2_p_1((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &(parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__conv0_ContainingModule_90, (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13, parse_tree__prog_io__handle_module_end_marker_11_p_0_3, parse_tree__prog_io__env_ptr);
          }
#line 1186 "prog_io.m"
        }
#line 1186 "prog_io.m"
        (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_FALSE;
#line 1186 "prog_io.m"
      }
#line 1186 "prog_io.m"
    else
#line 1186 "prog_io.m"
      (parse_tree__prog_io__env_ptr)->parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = MR_TRUE;
#line 1186 "prog_io.m"
  }
#line 1186 "prog_io.m"
}

#line 1166 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__handle_module_end_marker_11_p_0(
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_12,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_13,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_14,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_15,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__EndedModuleName_16,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__EndContext_17,
#line 1166 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_18,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_24,
#line 1166 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_25,
#line 1166 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_26,
#line 1166 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_27)
#line 1166 "prog_io.m"
{
#line 1166 "prog_io.m"
  {
#line 1166 "prog_io.m"
    struct parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0_s parse_tree__prog_io__env;

#line 1166 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__ContainingModules_13 = parse_tree__prog_io__ContainingModules_13;
#line 1166 "prog_io.m"
    (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16 = parse_tree__prog_io__EndedModuleName_16;
#line 1174 "prog_io.m"
    {
#line 1174 "prog_io.m"
      (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__CurModuleName_12, (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16);
    }
#line 1177 "prog_io.m"
    if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1176 "prog_io.m"
      {
#line 1176 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1176 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1176 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1176 "prog_io.m"
      }
#line 1177 "prog_io.m"
    else
#line 1183 "prog_io.m"
      {
#line 1178 "prog_io.m"
        {
#line 1178 "prog_io.m"
          (parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16, parse_tree__prog_io__CurModuleName_12);
        }
#line 1183 "prog_io.m"
        if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1182 "prog_io.m"
          {
#line 1182 "prog_io.m"
            *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Errors_27 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_26;
#line 1182 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_24;
#line 1182 "prog_io.m"
          }
#line 1183 "prog_io.m"
        else
#line 1199 "prog_io.m"
          {
#line 1186 "prog_io.m"
            {
#line 1186 "prog_io.m"
              parse_tree__prog_io__handle_module_end_marker_11_p_0_4(&parse_tree__prog_io__env);
            }
#line 1199 "prog_io.m"
            if ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__succeeded)
#line 1193 "prog_io.m"
              {
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_22;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_23;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_30_30;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_33_33;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_36_36;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_37_37;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_46_46;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_47_47;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_48_48;
#line 1193 "prog_io.m"
                MR_Word parse_tree__prog_io__V_49_49;

#line 1192 "prog_io.m"
                {
#line 1192 "prog_io.m"
                  parse_tree__prog_io__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1192 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1192 "prog_io.m"
                }
#line 1192 "prog_io.m"
                {
#line 1192 "prog_io.m"
                  parse_tree__prog_io__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io__V_37_37));
#line 1192 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1192 "prog_io.m"
                }
#line 1192 "prog_io.m"
                {
#line 1192 "prog_io.m"
                  parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[84])));
#line 1192 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__V_36_36));
#line 1192 "prog_io.m"
                }
#line 1191 "prog_io.m"
                {
#line 1191 "prog_io.m"
                  parse_tree__prog_io__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[83])));
#line 1191 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 1191 "prog_io.m"
                }
#line 1191 "prog_io.m"
                {
#line 1191 "prog_io.m"
                  parse_tree__prog_io__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[82])));
#line 1191 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 1191 "prog_io.m"
                }
#line 1195 "prog_io.m"
                {
#line 1195 "prog_io.m"
                  parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_22));
#line 1195 "prog_io.m"
                }
#line 1195 "prog_io.m"
                {
#line 1195 "prog_io.m"
                  parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1195 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1195 "prog_io.m"
                }
#line 1195 "prog_io.m"
                {
#line 1195 "prog_io.m"
                  parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1195 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 1195 "prog_io.m"
                }
#line 1195 "prog_io.m"
                {
#line 1195 "prog_io.m"
                  parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1195 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1195 "prog_io.m"
                }
#line 1194 "prog_io.m"
                {
#line 1194 "prog_io.m"
                  parse_tree__prog_io__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1194 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 1194 "prog_io.m"
                }
#line 1196 "prog_io.m"
                {
#line 1196 "prog_io.m"
                  MR_Word base;
#line 1196 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1196 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_23));
#line 1196 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1196 "prog_io.m"
                }
#line 1197 "prog_io.m"
                {
#line 1197 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1198 "prog_io.m"
                {
#line 1198 "prog_io.m"
                  MR_Word base;
#line 1198 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "prog_io.m"
                  *parse_tree__prog_io__FinalLookAhead_18 = base;
#line 1198 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_14));
#line 1198 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_15));
#line 1198 "prog_io.m"
                }
#line 1193 "prog_io.m"
              }
#line 1199 "prog_io.m"
            else
#line 1203 "prog_io.m"
              {
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_57_57;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_60_60;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_63_63;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_64_64;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_65_65;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_68_68;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_71_71;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_72_72;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_81_81;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_82_82;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_83_83;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__V_84_84;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_91;
#line 1203 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_92;

#line 1201 "prog_io.m"
                {
#line 1201 "prog_io.m"
                  parse_tree__prog_io__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1201 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) ((parse_tree__prog_io__env).parse_tree__prog_io__handle_module_end_marker_11_p_0_env_0__EndedModuleName_16));
#line 1201 "prog_io.m"
                }
#line 1203 "prog_io.m"
                {
#line 1203 "prog_io.m"
                  parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_12));
#line 1203 "prog_io.m"
                }
#line 1203 "prog_io.m"
                {
#line 1203 "prog_io.m"
                  parse_tree__prog_io__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 1203 "prog_io.m"
                }
#line 1203 "prog_io.m"
                {
#line 1203 "prog_io.m"
                  parse_tree__prog_io__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[87])));
#line 1203 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 1203 "prog_io.m"
                }
#line 1202 "prog_io.m"
                {
#line 1202 "prog_io.m"
                  parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[86])));
#line 1202 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1202 "prog_io.m"
                }
#line 1201 "prog_io.m"
                {
#line 1201 "prog_io.m"
                  parse_tree__prog_io__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__V_64_64));
#line 1201 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1201 "prog_io.m"
                }
#line 1201 "prog_io.m"
                {
#line 1201 "prog_io.m"
                  parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[84])));
#line 1201 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 1201 "prog_io.m"
                }
#line 1200 "prog_io.m"
                {
#line 1200 "prog_io.m"
                  parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[83])));
#line 1200 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 1200 "prog_io.m"
                }
#line 1200 "prog_io.m"
                {
#line 1200 "prog_io.m"
                  parse_tree__prog_io__Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[85])));
#line 1200 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_91, 1) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1200 "prog_io.m"
                }
#line 1205 "prog_io.m"
                {
#line 1205 "prog_io.m"
                  parse_tree__prog_io__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_91));
#line 1205 "prog_io.m"
                }
#line 1205 "prog_io.m"
                {
#line 1205 "prog_io.m"
                  parse_tree__prog_io__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io__V_84_84));
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1205 "prog_io.m"
                }
#line 1205 "prog_io.m"
                {
#line 1205 "prog_io.m"
                  parse_tree__prog_io__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io__EndContext_17));
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 1205 "prog_io.m"
                }
#line 1205 "prog_io.m"
                {
#line 1205 "prog_io.m"
                  parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__V_82_82));
#line 1205 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1205 "prog_io.m"
                }
#line 1204 "prog_io.m"
                {
#line 1204 "prog_io.m"
                  parse_tree__prog_io__Spec_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1204 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_92, 2) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 1204 "prog_io.m"
                }
#line 1206 "prog_io.m"
                {
#line 1206 "prog_io.m"
                  MR_Word base;
#line 1206 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_25 = base;
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_92));
#line 1206 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_24));
#line 1206 "prog_io.m"
                }
#line 1207 "prog_io.m"
                {
#line 1207 "prog_io.m"
                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 9)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_26, parse_tree__prog_io__STATE_VARIABLE_Errors_27);
                }
#line 1209 "prog_io.m"
                *parse_tree__prog_io__FinalLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1203 "prog_io.m"
              }
#line 1199 "prog_io.m"
          }
#line 1183 "prog_io.m"
      }
#line 1166 "prog_io.m"
  }
#line 1166 "prog_io.m"
}

#line 1120 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_21,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_22,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__StartModuleName_23,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__StartContext_24,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43,
#line 1120 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44,
#line 1120 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_48,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_49,
#line 1120 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_50,
#line 1120 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_51)
#line 1120 "prog_io.m"
{
#line 1132 "prog_io.m"
  {
#line 1132 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_114_114;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionKind_33;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_34;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedContainingModules_37;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__NestedModuleComponents_39;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__SubModuleParseTreeSrc_40;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__Component_41;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_103_103;
#line 1132 "prog_io.m"
    MR_Word parse_tree__prog_io__V_106_106;

#line 1135 "prog_io.m"
    if ((parse_tree__prog_io__MaybePrevSection_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "prog_io.m"
      {
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionPieces_35;
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__NoSectionSpec_36;
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__V_56_56;
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__V_95_95;
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__V_96_96;
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__V_97_97;
#line 1136 "prog_io.m"
        MR_Word parse_tree__prog_io__V_98_98;

#line 1138 "prog_io.m"
        {
#line 1138 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1138 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1138 "prog_io.m"
        }
#line 1138 "prog_io.m"
        {
#line 1138 "prog_io.m"
          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1138 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[41])));
#line 1138 "prog_io.m"
        }
#line 1137 "prog_io.m"
        {
#line 1137 "prog_io.m"
          parse_tree__prog_io__NoSectionPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[81])));
#line 1137 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__NoSectionPieces_35, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1137 "prog_io.m"
        }
#line 1146 "prog_io.m"
        {
#line 1146 "prog_io.m"
          parse_tree__prog_io__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionPieces_35));
#line 1146 "prog_io.m"
        }
#line 1146 "prog_io.m"
        {
#line 1146 "prog_io.m"
          parse_tree__prog_io__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 1146 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "prog_io.m"
        }
#line 1146 "prog_io.m"
        {
#line 1146 "prog_io.m"
          parse_tree__prog_io__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1146 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 1) = ((MR_Box) (parse_tree__prog_io__V_97_97));
#line 1146 "prog_io.m"
        }
#line 1146 "prog_io.m"
        {
#line 1146 "prog_io.m"
          parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_96_96));
#line 1146 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "prog_io.m"
        }
#line 1145 "prog_io.m"
        {
#line 1145 "prog_io.m"
          parse_tree__prog_io__NoSectionSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1145 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoSectionSpec_36, 2) = ((MR_Box) (parse_tree__prog_io__V_95_95));
#line 1145 "prog_io.m"
        }
#line 1147 "prog_io.m"
        {
#line 1147 "prog_io.m"
          parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (parse_tree__prog_io__NoSectionSpec_36));
#line 1147 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_48));
#line 1147 "prog_io.m"
        }
#line 1149 "prog_io.m"
        {
#line 1149 "prog_io.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_50, &parse_tree__prog_io__STATE_VARIABLE_Errors_103_103);
        }
#line 1150 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = (MR_Integer) 0;
#line 1151 "prog_io.m"
        {
#line 1151 "prog_io.m"
          parse_tree__prog_io__SectionContext_34 = mercury__term__context_init_0_f_0();
        }
#line 1136 "prog_io.m"
      }
#line 1135 "prog_io.m"
    else
#line 1134 "prog_io.m"
      {
#line 1134 "prog_io.m"
        MR_Word parse_tree__prog_io__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_22, (MR_Integer) 0)));

#line 1134 "prog_io.m"
        parse_tree__prog_io__SectionKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 0)));
#line 1134 "prog_io.m"
        parse_tree__prog_io__SectionContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, (MR_Integer) 1)));
#line 1134 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Specs_101_101 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_48;
#line 1134 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Errors_103_103 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_50;
#line 1134 "prog_io.m"
      }
#line 1153 "prog_io.m"
    {
#line 1153 "prog_io.m"
      parse_tree__prog_io__NestedContainingModules_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1153 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__NestedContainingModules_37, 1) = ((MR_Box) (parse_tree__prog_io__ContainingModules_21));
#line 1153 "prog_io.m"
    }
#line 9725 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0;
#line 1158 "prog_io.m"
    {
#line 1158 "prog_io.m"
      parse_tree__prog_io__V_106_106 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_114_114);
    }
#line 1155 "prog_io.m"
    {
#line 1155 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__StartModuleName_23, parse_tree__prog_io__NestedContainingModules_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__V_106_106, &parse_tree__prog_io__NestedModuleComponents_39, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_44, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_45, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47, parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Specs_49, parse_tree__prog_io__STATE_VARIABLE_Errors_103_103, parse_tree__prog_io__STATE_VARIABLE_Errors_51);
    }
#line 1160 "prog_io.m"
    {
#line 1160 "prog_io.m"
      parse_tree__prog_io__SubModuleParseTreeSrc_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 0) = ((MR_Box) (parse_tree__prog_io__StartModuleName_23));
#line 1160 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 1) = ((MR_Box) (parse_tree__prog_io__StartContext_24));
#line 1160 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubModuleParseTreeSrc_40, 2) = ((MR_Box) (parse_tree__prog_io__NestedModuleComponents_39));
#line 1160 "prog_io.m"
    }
#line 1162 "prog_io.m"
    {
#line 1162 "prog_io.m"
      parse_tree__prog_io__Component_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_33));
#line 1162 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_34));
#line 1162 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Component_41, 2) = ((MR_Box) (parse_tree__prog_io__SubModuleParseTreeSrc_40));
#line 1162 "prog_io.m"
    }
#line 1164 "prog_io.m"
    {
#line 1164 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_43 = mercury__cord__snoc_2_f_0(parse_tree__prog_io__TypeCtorInfo_114_114, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_42, ((MR_Box) (parse_tree__prog_io__Component_41)));
    }
#line 1132 "prog_io.m"
  }
#line 1120 "prog_io.m"
}

#line 1087 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_9,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_10,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16,
#line 1087 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_18,
#line 1087 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_19,
#line 1087 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_20,
#line 1087 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_21)
#line 1087 "prog_io.m"
{
#line 1097 "prog_io.m"
  {
#line 1097 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1097 "prog_io.m"
#line 1097 "prog_io.m"
    switch (parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16) {
#line 1097 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1097 "prog_io.m"
      case (MR_Integer) 1:
#line 1115 "prog_io.m"
        {
#line 1115 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_16;
#line 1115 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_18;
#line 1115 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Errors_21 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_20;
#line 1115 "prog_io.m"
        }
#line 1097 "prog_io.m"
        break;
#line 1097 "prog_io.m"
      case (MR_Integer) 0:
#line 1097 "prog_io.m"
        {
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionPieces_14;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__MissingSectionSpec_15;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__V_25_25;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__V_28_28;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__V_29_29;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__V_67_67;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__V_68_68;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__V_69_69;
#line 1097 "prog_io.m"
          MR_Word parse_tree__prog_io__V_70_70;

#line 1098 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_17 = (MR_Integer) 1;
#line 1102 "prog_io.m"
          {
#line 1102 "prog_io.m"
            parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1102 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_9));
#line 1102 "prog_io.m"
          }
#line 1102 "prog_io.m"
          {
#line 1102 "prog_io.m"
            parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 1102 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[36])));
#line 1102 "prog_io.m"
          }
#line 1101 "prog_io.m"
          {
#line 1101 "prog_io.m"
            parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[80])));
#line 1101 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 1101 "prog_io.m"
          }
#line 1100 "prog_io.m"
          {
#line 1100 "prog_io.m"
            parse_tree__prog_io__MissingSectionPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[3])));
#line 1100 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__MissingSectionPieces_14, 1) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1100 "prog_io.m"
          }
#line 1111 "prog_io.m"
          {
#line 1111 "prog_io.m"
            parse_tree__prog_io__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionPieces_14));
#line 1111 "prog_io.m"
          }
#line 1111 "prog_io.m"
          {
#line 1111 "prog_io.m"
            parse_tree__prog_io__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 1111 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "prog_io.m"
          }
#line 1110 "prog_io.m"
          {
#line 1110 "prog_io.m"
            parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__Context_10));
#line 1110 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 1110 "prog_io.m"
          }
#line 1111 "prog_io.m"
          {
#line 1111 "prog_io.m"
            parse_tree__prog_io__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1111 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "prog_io.m"
          }
#line 1109 "prog_io.m"
          {
#line 1109 "prog_io.m"
            parse_tree__prog_io__MissingSectionSpec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1109 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__MissingSectionSpec_15, 2) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1109 "prog_io.m"
          }
#line 1112 "prog_io.m"
          {
#line 1112 "prog_io.m"
            MR_Word base;
#line 1112 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_19 = base;
#line 1112 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__MissingSectionSpec_15));
#line 1112 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_18));
#line 1112 "prog_io.m"
          }
#line 1113 "prog_io.m"
          {
#line 1113 "prog_io.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 3)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_20, parse_tree__prog_io__STATE_VARIABLE_Errors_21);
#line 1113 "prog_io.m"
            return;
          }
#line 1097 "prog_io.m"
        }
#line 1097 "prog_io.m"
        break;
#line 1097 "prog_io.m"
    }
#line 1097 "prog_io.m"
  }
#line 1087 "prog_io.m"
}

#line 1069 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__add_section_component_7_p_0(
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionKind_8,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__SectionContext_9,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__InclsCord_10,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__AvailsCord_11,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__ItemsCord_12,
#line 1069 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15,
#line 1069 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16)
#line 1069 "prog_io.m"
{
#line 1081 "prog_io.m"
  {
#line 1081 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1076 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_19_19;
#line 1076 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_20_20;

#line 1076 "prog_io.m"
    {
#line 1076 "prog_io.m"
      parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__InclsCord_10);
    }
#line 1076 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1076 "prog_io.m"
      {
#line 10000 "parse_tree.prog_io.c"
        parse_tree__prog_io__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 1077 "prog_io.m"
        {
#line 1077 "prog_io.m"
          parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0(parse_tree__prog_io__TypeCtorInfo_19_19, parse_tree__prog_io__AvailsCord_11);
        }
#line 1076 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1076 "prog_io.m"
          {
#line 10011 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1078 "prog_io.m"
            {
#line 1078 "prog_io.m"
              parse_tree__prog_io__succeeded = mercury__cord__is_empty_1_p_0(parse_tree__prog_io__TypeCtorInfo_20_20, parse_tree__prog_io__ItemsCord_12);
            }
#line 1076 "prog_io.m"
          }
#line 1076 "prog_io.m"
      }
#line 1081 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1081 "prog_io.m"
      *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15;
#line 1081 "prog_io.m"
    else
#line 1083 "prog_io.m"
      {
#line 1083 "prog_io.m"
        MR_Word parse_tree__prog_io__Component_14;

#line 1082 "prog_io.m"
        {
#line 1082 "prog_io.m"
          parse_tree__prog_io__Component_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_8));
#line 1082 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_9));
#line 1082 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 2) = ((MR_Box) (parse_tree__prog_io__InclsCord_10));
#line 1082 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 3) = ((MR_Box) (parse_tree__prog_io__AvailsCord_11));
#line 1082 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Component_14, 4) = ((MR_Box) (parse_tree__prog_io__ItemsCord_12));
#line 1082 "prog_io.m"
        }
#line 1084 "prog_io.m"
        {
#line 1084 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_16 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_15, ((MR_Box) (parse_tree__prog_io__Component_14)));
        }
#line 1083 "prog_io.m"
      }
#line 1081 "prog_io.m"
  }
#line 1069 "prog_io.m"
}

#line 891 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_components_19_p_0(
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_20,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_21,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__ContainingModules_22,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybePrevSection_23,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_25,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_26,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77,
#line 891 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78,
#line 891 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_82,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_83,
#line 891 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_84,
#line 891 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_85)
#line 891 "prog_io.m"
{
#line 903 "prog_io.m"
  while (MR_TRUE)
#line 903 "prog_io.m"
    {
#line 903 "prog_io.m"
      /* tailcall optimized into a loop */
#line 903 "prog_io.m"
      {
#line 903 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 903 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_33;
#line 903 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 904 "prog_io.m"
        {
#line 904 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_25, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__ReadIOMResult_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88);
        }
#line 910 "prog_io.m"
#line 910 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_33)) {
#line 910 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 910 "prog_io.m"
          case (MR_Integer) 0:
#line 907 "prog_io.m"
            {
#line 909 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 907 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76;
#line 907 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78;
#line 907 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 907 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_83 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 907 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_85 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 907 "prog_io.m"
            }
#line 910 "prog_io.m"
            break;
#line 910 "prog_io.m"
          case (MR_Integer) 1:
#line 911 "prog_io.m"
            {
#line 911 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_34 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_33), (MR_Integer) 1);
#line 911 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_206_206;
#line 911 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_208_208;

#line 914 "prog_io.m"
              {
#line 914 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_206_206, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_34));
#line 914 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_206_206, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_82));
#line 914 "prog_io.m"
              }
#line 915 "prog_io.m"
              {
#line 915 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_208_208);
              }
#line 916 "prog_io.m"
              /* direct tailcall eliminated */
#line 916 "prog_io.m"
              {
#line 916 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 916 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_206_206;
#line 916 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_208_208;

#line 916 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 916 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 916 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 916 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 916 "prog_io.m"
              }
#line 916 "prog_io.m"
              continue;
#line 911 "prog_io.m"
            }
#line 910 "prog_io.m"
            break;
#line 910 "prog_io.m"
          case (MR_Integer) 2:
#line 922 "prog_io.m"
            {
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_39;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__SectionContext_42;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_43;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__InclsCord_46;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__AvailsCord_47;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemsCord_48;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_185_185;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_186_186;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__V_188_188;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__V_189_189;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__V_190_190;
#line 922 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_191_191;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_192_192;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_193_193;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_194_194;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_196_196;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__V_197_197;
#line 922 "prog_io.m"
              MR_Word parse_tree__prog_io__V_205_205;
#line 921 "prog_io.m"
              MR_Word parse_tree__prog_io___Specs_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 921 "prog_io.m"
              MR_Word parse_tree__prog_io___Errors_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 3)));
#line 928 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_40;
#line 934 "prog_io.m"
              MR_Word parse_tree__prog_io__V_45_45;

#line 927 "prog_io.m"
              {
#line 927 "prog_io.m"
                parse_tree__prog_io__Context_39 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_36);
              }
#line 928 "prog_io.m"
              {
#line 928 "prog_io.m"
                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_39, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75, &parse_tree__prog_io___MissingStartSectionWarning_40, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, &parse_tree__prog_io__STATE_VARIABLE_Specs_185_185, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_186_186);
              }
#line 932 "prog_io.m"
              {
#line 932 "prog_io.m"
                parse_tree__prog_io__SectionContext_42 = mercury__term__context_init_0_f_0();
              }
#line 933 "prog_io.m"
              {
#line 933 "prog_io.m"
                parse_tree__prog_io__ItemSeqInitLookAhead_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_35));
#line 933 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_43, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_36));
#line 933 "prog_io.m"
              }
#line 936 "prog_io.m"
              {
#line 936 "prog_io.m"
                parse_tree__prog_io__V_188_188 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
              }
#line 937 "prog_io.m"
              {
#line 937 "prog_io.m"
                parse_tree__prog_io__V_189_189 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
              }
#line 937 "prog_io.m"
              {
#line 937 "prog_io.m"
                parse_tree__prog_io__V_190_190 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
              }
#line 934 "prog_io.m"
              {
#line 934 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_43, &parse_tree__prog_io__ItemSeqFinalLookAhead_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_45_45, parse_tree__prog_io__V_188_188, &parse_tree__prog_io__InclsCord_46, parse_tree__prog_io__V_189_189, &parse_tree__prog_io__AvailsCord_47, parse_tree__prog_io__V_190_190, &parse_tree__prog_io__ItemsCord_48, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_191_191, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_192_192, parse_tree__prog_io__STATE_VARIABLE_Specs_185_185, &parse_tree__prog_io__STATE_VARIABLE_Specs_193_193, parse_tree__prog_io__STATE_VARIABLE_Errors_186_186, &parse_tree__prog_io__STATE_VARIABLE_Errors_194_194);
              }
#line 939 "prog_io.m"
              {
#line 939 "prog_io.m"
                parse_tree__prog_io__add_section_component_7_p_0((MR_Integer) 1, parse_tree__prog_io__SectionContext_42, parse_tree__prog_io__InclsCord_46, parse_tree__prog_io__AvailsCord_47, parse_tree__prog_io__ItemsCord_48, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_196_196);
              }
#line 944 "prog_io.m"
              {
#line 944 "prog_io.m"
                parse_tree__prog_io__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_205_205, 0) = ((MR_Box) ((MR_Integer) 1));
#line 944 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_205_205, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_42));
#line 944 "prog_io.m"
              }
#line 944 "prog_io.m"
              {
#line 944 "prog_io.m"
                parse_tree__prog_io__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_197_197, 0) = ((MR_Box) (parse_tree__prog_io__V_205_205));
#line 944 "prog_io.m"
              }
#line 943 "prog_io.m"
              /* direct tailcall eliminated */
#line 943 "prog_io.m"
              {
#line 943 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_197_197;
#line 943 "prog_io.m"
                MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_44;
#line 943 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_196_196;
#line 943 "prog_io.m"
                MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_191_191;
#line 943 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_192_192;
#line 943 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_193_193;
#line 943 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_194_194;

#line 943 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 943 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 943 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 943 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 943 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 943 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 943 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75 = (MR_Integer) 0;
#line 943 "prog_io.m"
                parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 943 "prog_io.m"
              }
#line 943 "prog_io.m"
              continue;
#line 922 "prog_io.m"
            }
#line 910 "prog_io.m"
            break;
#line 910 "prog_io.m"
          case (MR_Integer) 3:
#line 949 "prog_io.m"
            {
#line 949 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 2)));
#line 949 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 0)));
#line 949 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_33, (MR_Integer) 1)));

#line 957 "prog_io.m"
#line 957 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_49)) {
#line 957 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 957 "prog_io.m"
                case (MR_Integer) 0:
#line 957 "prog_io.m"
                case (MR_Integer) 1:
#line 957 "prog_io.m"
                case (MR_Integer) 2:
#line 1016 "prog_io.m"
                  {
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_96_96;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_97_97;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_98_98;
#line 1016 "prog_io.m"
                    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_105_105;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_113_113;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionKind_243;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__SectionContext_244;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_245;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__InclsCord_247;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__AvailsCord_248;
#line 1016 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemsCord_249;
#line 1046 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_71_71;

#line 1021 "prog_io.m"
#line 1021 "prog_io.m"
                    switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_49)) {
#line 1021 "prog_io.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1021 "prog_io.m"
                      case (MR_Integer) 0:
#line 1021 "prog_io.m"
                      case (MR_Integer) 1:
#line 1021 "prog_io.m"
                      case (MR_Integer) 2:
#line 1025 "prog_io.m"
                        {
#line 1031 "prog_io.m"
                          if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "prog_io.m"
                            {
#line 1032 "prog_io.m"
                              MR_Word parse_tree__prog_io__Context_233;
#line 1034 "prog_io.m"
                              MR_Word parse_tree__prog_io___MissingStartSectionWarning_232;

#line 1033 "prog_io.m"
                              {
#line 1033 "prog_io.m"
                                parse_tree__prog_io__Context_233 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_260);
                              }
#line 1034 "prog_io.m"
                              {
#line 1034 "prog_io.m"
                                parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_233, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75, &parse_tree__prog_io___MissingStartSectionWarning_232, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, &parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_93_93);
                              }
#line 1039 "prog_io.m"
                              parse_tree__prog_io__SectionKind_243 = (MR_Integer) 1;
#line 1040 "prog_io.m"
                              {
#line 1040 "prog_io.m"
                                parse_tree__prog_io__SectionContext_244 = mercury__term__context_init_0_f_0();
                              }
#line 1032 "prog_io.m"
                            }
#line 1031 "prog_io.m"
                          else
#line 1027 "prog_io.m"
                            {
#line 1027 "prog_io.m"
                              MR_Word parse_tree__prog_io__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 1027 "prog_io.m"
                              parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 0)));
#line 1027 "prog_io.m"
                              parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 1)));
#line 1027 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1027 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1027 "prog_io.m"
                            }
#line 1042 "prog_io.m"
                          {
#line 1042 "prog_io.m"
                            parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_259));
#line 1042 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_260));
#line 1042 "prog_io.m"
                          }
#line 1025 "prog_io.m"
                        }
#line 1021 "prog_io.m"
                        break;
#line 1021 "prog_io.m"
                      case (MR_Integer) 3:
#line 1019 "prog_io.m"
                        {
#line 1018 "prog_io.m"
                          MR_Integer parse_tree__prog_io___SectionSeqNum_67;

#line 1018 "prog_io.m"
                          parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 1018 "prog_io.m"
                          parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 1018 "prog_io.m"
                          parse_tree__prog_io___SectionSeqNum_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));
#line 1020 "prog_io.m"
                          parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1019 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1019 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1019 "prog_io.m"
                        }
#line 1021 "prog_io.m"
                        break;
#line 1021 "prog_io.m"
                    }
#line 1048 "prog_io.m"
                    {
#line 1048 "prog_io.m"
                      parse_tree__prog_io__V_96_96 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
                    }
#line 1049 "prog_io.m"
                    {
#line 1049 "prog_io.m"
                      parse_tree__prog_io__V_97_97 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
                    }
#line 1049 "prog_io.m"
                    {
#line 1049 "prog_io.m"
                      parse_tree__prog_io__V_98_98 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                    }
#line 1046 "prog_io.m"
                    {
#line 1046 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_245, &parse_tree__prog_io__ItemSeqFinalLookAhead_246, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_71_71, parse_tree__prog_io__V_96_96, &parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__V_97_97, &parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__V_98_98, &parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100, parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, &parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Errors_93_93, &parse_tree__prog_io__STATE_VARIABLE_Errors_102_102);
                    }
#line 1051 "prog_io.m"
                    {
#line 1051 "prog_io.m"
                      parse_tree__prog_io__add_section_component_7_p_0(parse_tree__prog_io__SectionKind_243, parse_tree__prog_io__SectionContext_244, parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104);
                    }
#line 1056 "prog_io.m"
                    {
#line 1056 "prog_io.m"
                      parse_tree__prog_io__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_243));
#line 1056 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_244));
#line 1056 "prog_io.m"
                    }
#line 1056 "prog_io.m"
                    {
#line 1056 "prog_io.m"
                      parse_tree__prog_io__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io__V_113_113));
#line 1056 "prog_io.m"
                    }
#line 1055 "prog_io.m"
                    /* direct tailcall eliminated */
#line 1055 "prog_io.m"
                    {
#line 1055 "prog_io.m"
                      MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_105_105;
#line 1055 "prog_io.m"
                      MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1055 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1055 "prog_io.m"
                      MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1055 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1055 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1055 "prog_io.m"
                      MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;

#line 1055 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 1055 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 1055 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 1055 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 1055 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 1055 "prog_io.m"
                      parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1055 "prog_io.m"
                      parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75 = (MR_Integer) 0;
#line 1055 "prog_io.m"
                      parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 1055 "prog_io.m"
                    }
#line 1055 "prog_io.m"
                    continue;
#line 1016 "prog_io.m"
                  }
#line 957 "prog_io.m"
                  break;
#line 957 "prog_io.m"
                case (MR_Integer) 3:
#line 957 "prog_io.m"
#line 957 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 0)))) {
#line 957 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 957 "prog_io.m"
                    case (MR_Integer) 0:
#line 958 "prog_io.m"
                      {
#line 958 "prog_io.m"
                        MR_Word parse_tree__prog_io__Msg_52;
#line 958 "prog_io.m"
                        MR_Word parse_tree__prog_io__Spec_53;
#line 958 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_161_161;
#line 958 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_167_167;
#line 958 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_169_169;

#line 961 "prog_io.m"
                        {
#line 961 "prog_io.m"
                          parse_tree__prog_io__V_161_161 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_260);
                        }
#line 961 "prog_io.m"
                        {
#line 961 "prog_io.m"
                          parse_tree__prog_io__Msg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 961 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_52, 0) = ((MR_Box) (parse_tree__prog_io__V_161_161));
#line 961 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[79])));
#line 961 "prog_io.m"
                        }
#line 962 "prog_io.m"
                        {
#line 962 "prog_io.m"
                          parse_tree__prog_io__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io__Msg_52));
#line 962 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "prog_io.m"
                        }
#line 962 "prog_io.m"
                        {
#line 962 "prog_io.m"
                          parse_tree__prog_io__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 962 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io__V_167_167));
#line 962 "prog_io.m"
                        }
#line 963 "prog_io.m"
                        {
#line 963 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_169_169, 0) = ((MR_Box) (parse_tree__prog_io__Spec_53));
#line 963 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_169_169, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_82));
#line 963 "prog_io.m"
                        }
#line 964 "prog_io.m"
                        /* direct tailcall eliminated */
#line 964 "prog_io.m"
                        {
#line 964 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 964 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_169_169;

#line 964 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 964 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 964 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "prog_io.m"
                        }
#line 964 "prog_io.m"
                        continue;
#line 958 "prog_io.m"
                      }
#line 957 "prog_io.m"
                      break;
#line 957 "prog_io.m"
                    case (MR_Integer) 1:
#line 951 "prog_io.m"
                      {
#line 951 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_177_177 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));

#line 952 "prog_io.m"
                        /* direct tailcall eliminated */
#line 952 "prog_io.m"
                        {
#line 952 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_177_177;
#line 952 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;

#line 952 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 952 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 952 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 952 "prog_io.m"
                        }
#line 952 "prog_io.m"
                        continue;
#line 951 "prog_io.m"
                      }
#line 957 "prog_io.m"
                      break;
#line 957 "prog_io.m"
                    case (MR_Integer) 2:
#line 971 "prog_io.m"
                      {
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawStartModuleName_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__StartModuleName_58;
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__SubModuleFinalLookAhead_60;
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_139_139;
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_141_141;
#line 971 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_142_142;
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_143_143;
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_144_144;
#line 971 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_145_145;
#line 970 "prog_io.m"
                        MR_Integer parse_tree__prog_io___StartSeqNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));

#line 975 "prog_io.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io__RawStartModuleName_54)) == (MR_mktag((MR_Integer) 1))))
#line 976 "prog_io.m"
                          {
#line 976 "prog_io.m"
                            MR_Word parse_tree__prog_io__RawModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_54, (MR_Integer) 0)));
#line 976 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_225 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RawStartModuleName_54, (MR_Integer) 1)));

#line 978 "prog_io.m"
                            {
#line 978 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io__RawModuleName_59, parse_tree__prog_io__CurModuleName_21);
                            }
#line 981 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 980 "prog_io.m"
                              {
#line 980 "prog_io.m"
                                {
#line 980 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 980 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_225));
#line 980 "prog_io.m"
                                }
#line 980 "prog_io.m"
                                parse_tree__prog_io__STATE_VARIABLE_Specs_139_139 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 980 "prog_io.m"
                              }
#line 981 "prog_io.m"
                            else
#line 986 "prog_io.m"
                              {
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_116_116;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_119_119;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_120_120;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_121_121;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_124_124;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_125_125;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_134_134;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_135_135;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_136_136;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_216;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__Msg_217;
#line 986 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_218;

#line 984 "prog_io.m"
                                {
#line 984 "prog_io.m"
                                  parse_tree__prog_io__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 984 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_120_120, 1) = ((MR_Box) (parse_tree__prog_io__RawStartModuleName_54));
#line 984 "prog_io.m"
                                }
#line 986 "prog_io.m"
                                {
#line 986 "prog_io.m"
                                  parse_tree__prog_io__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 986 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 986 "prog_io.m"
                                }
#line 986 "prog_io.m"
                                {
#line 986 "prog_io.m"
                                  parse_tree__prog_io__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io__V_125_125));
#line 986 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 986 "prog_io.m"
                                }
#line 985 "prog_io.m"
                                {
#line 985 "prog_io.m"
                                  parse_tree__prog_io__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_121_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[78])));
#line 985 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_121_121, 1) = ((MR_Box) (parse_tree__prog_io__V_124_124));
#line 985 "prog_io.m"
                                }
#line 984 "prog_io.m"
                                {
#line 984 "prog_io.m"
                                  parse_tree__prog_io__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io__V_120_120));
#line 984 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io__V_121_121));
#line 984 "prog_io.m"
                                }
#line 983 "prog_io.m"
                                {
#line 983 "prog_io.m"
                                  parse_tree__prog_io__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[77])));
#line 983 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io__V_119_119));
#line 983 "prog_io.m"
                                }
#line 982 "prog_io.m"
                                {
#line 982 "prog_io.m"
                                  parse_tree__prog_io__Pieces_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[76])));
#line 982 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_216, 1) = ((MR_Box) (parse_tree__prog_io__V_116_116));
#line 982 "prog_io.m"
                                }
#line 987 "prog_io.m"
                                {
#line 987 "prog_io.m"
                                  parse_tree__prog_io__Msg_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 987 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Msg_217, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_216));
#line 987 "prog_io.m"
                                }
#line 989 "prog_io.m"
                                {
#line 989 "prog_io.m"
                                  parse_tree__prog_io__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_136_136, 0) = ((MR_Box) (parse_tree__prog_io__Msg_217));
#line 989 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "prog_io.m"
                                }
#line 989 "prog_io.m"
                                {
#line 989 "prog_io.m"
                                  parse_tree__prog_io__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 989 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io__StartContext_55));
#line 989 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io__V_136_136));
#line 989 "prog_io.m"
                                }
#line 989 "prog_io.m"
                                {
#line 989 "prog_io.m"
                                  parse_tree__prog_io__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io__V_135_135));
#line 989 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "prog_io.m"
                                }
#line 988 "prog_io.m"
                                {
#line 988 "prog_io.m"
                                  parse_tree__prog_io__Spec_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 988 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_218, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 988 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 988 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_218, 2) = ((MR_Box) (parse_tree__prog_io__V_134_134));
#line 988 "prog_io.m"
                                }
#line 990 "prog_io.m"
                                {
#line 990 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_139_139, 0) = ((MR_Box) (parse_tree__prog_io__Spec_218));
#line 990 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_139_139, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_82));
#line 990 "prog_io.m"
                                }
#line 997 "prog_io.m"
                                {
#line 997 "prog_io.m"
                                  parse_tree__prog_io__StartModuleName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 997 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_225));
#line 997 "prog_io.m"
                                }
#line 986 "prog_io.m"
                              }
#line 976 "prog_io.m"
                          }
#line 975 "prog_io.m"
                        else
#line 973 "prog_io.m"
                          {
#line 973 "prog_io.m"
                            MR_String parse_tree__prog_io__RawBaseName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawStartModuleName_54, (MR_Integer) 0)));

#line 974 "prog_io.m"
                            {
#line 974 "prog_io.m"
                              parse_tree__prog_io__StartModuleName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 0) = ((MR_Box) (parse_tree__prog_io__CurModuleName_21));
#line 974 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__StartModuleName_58, 1) = ((MR_Box) (parse_tree__prog_io__RawBaseName_57));
#line 974 "prog_io.m"
                            }
#line 973 "prog_io.m"
                            parse_tree__prog_io__STATE_VARIABLE_Specs_139_139 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 973 "prog_io.m"
                          }
#line 1000 "prog_io.m"
                        {
#line 1000 "prog_io.m"
                          parse_tree__prog_io__read_parse_tree_src_submodule_19_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__MaybePrevSection_23, parse_tree__prog_io__StartModuleName_58, parse_tree__prog_io__StartContext_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__SubModuleFinalLookAhead_60, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_141_141, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_142_142, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_143_143, parse_tree__prog_io__STATE_VARIABLE_Specs_139_139, &parse_tree__prog_io__STATE_VARIABLE_Specs_144_144, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_145_145);
                        }
#line 1005 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1005 "prog_io.m"
                        {
#line 1005 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__SubModuleFinalLookAhead_60;
#line 1005 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_141_141;
#line 1005 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_142_142;
#line 1005 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_143_143;
#line 1005 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_144_144;
#line 1005 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_145_145;

#line 1005 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 1005 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 1005 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 1005 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 1005 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 1005 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1005 "prog_io.m"
                        }
#line 1005 "prog_io.m"
                        continue;
#line 971 "prog_io.m"
                      }
#line 957 "prog_io.m"
                      break;
#line 957 "prog_io.m"
                    case (MR_Integer) 3:
#line 1062 "prog_io.m"
                      {
#line 1062 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndedModuleName_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 1062 "prog_io.m"
                        MR_Word parse_tree__prog_io__EndContext_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 1061 "prog_io.m"
                        MR_Integer parse_tree__prog_io___EndSeqNum_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));

#line 1063 "prog_io.m"
                        {
#line 1063 "prog_io.m"
                          parse_tree__prog_io__handle_module_end_marker_11_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ContainingModules_22, parse_tree__prog_io__IOMVarSet_259, parse_tree__prog_io__IOMTerm_260, parse_tree__prog_io__EndedModuleName_72, parse_tree__prog_io__EndContext_73, parse_tree__prog_io__FinalLookAhead_26, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, parse_tree__prog_io__STATE_VARIABLE_Specs_83, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, parse_tree__prog_io__STATE_VARIABLE_Errors_85);
                        }
#line 1062 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_77 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76;
#line 1062 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_79 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78;
#line 1062 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_81 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88;
#line 1062 "prog_io.m"
                      }
#line 957 "prog_io.m"
                      break;
#line 957 "prog_io.m"
                    case (MR_Integer) 4:
#line 1016 "prog_io.m"
                      {
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_92_92;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_93_93;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_96_96;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_97_97;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_98_98;
#line 1016 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_105_105;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_113_113;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_243;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_244;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_245;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__InclsCord_247;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__AvailsCord_248;
#line 1016 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_249;
#line 1046 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_71_71;

#line 1021 "prog_io.m"
#line 1021 "prog_io.m"
                        switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_49)) {
#line 1021 "prog_io.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1021 "prog_io.m"
                          case (MR_Integer) 0:
#line 1021 "prog_io.m"
                          case (MR_Integer) 1:
#line 1021 "prog_io.m"
                          case (MR_Integer) 2:
#line 1025 "prog_io.m"
                            {
#line 1031 "prog_io.m"
                              if ((parse_tree__prog_io__MaybePrevSection_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "prog_io.m"
                                {
#line 1032 "prog_io.m"
                                  MR_Word parse_tree__prog_io__Context_233;
#line 1034 "prog_io.m"
                                  MR_Word parse_tree__prog_io___MissingStartSectionWarning_232;

#line 1033 "prog_io.m"
                                  {
#line 1033 "prog_io.m"
                                    parse_tree__prog_io__Context_233 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_260);
                                  }
#line 1034 "prog_io.m"
                                  {
#line 1034 "prog_io.m"
                                    parse_tree__prog_io__generate_missing_start_section_warning_src_8_p_0(parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__Context_233, parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75, &parse_tree__prog_io___MissingStartSectionWarning_232, parse_tree__prog_io__STATE_VARIABLE_Specs_0_82, &parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, parse_tree__prog_io__STATE_VARIABLE_Errors_0_84, &parse_tree__prog_io__STATE_VARIABLE_Errors_93_93);
                                  }
#line 1039 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_243 = (MR_Integer) 1;
#line 1040 "prog_io.m"
                                  {
#line 1040 "prog_io.m"
                                    parse_tree__prog_io__SectionContext_244 = mercury__term__context_init_0_f_0();
                                  }
#line 1032 "prog_io.m"
                                }
#line 1031 "prog_io.m"
                              else
#line 1027 "prog_io.m"
                                {
#line 1027 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePrevSection_23, (MR_Integer) 0)));

#line 1027 "prog_io.m"
                                  parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 0)));
#line 1027 "prog_io.m"
                                  parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, (MR_Integer) 1)));
#line 1027 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1027 "prog_io.m"
                                  parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1027 "prog_io.m"
                                }
#line 1042 "prog_io.m"
                              {
#line 1042 "prog_io.m"
                                parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_259));
#line 1042 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_245, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_260));
#line 1042 "prog_io.m"
                              }
#line 1025 "prog_io.m"
                            }
#line 1021 "prog_io.m"
                            break;
#line 1021 "prog_io.m"
                          case (MR_Integer) 3:
#line 1019 "prog_io.m"
                            {
#line 1018 "prog_io.m"
                              MR_Integer parse_tree__prog_io___SectionSeqNum_67;

#line 1018 "prog_io.m"
                              parse_tree__prog_io__SectionKind_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 1)));
#line 1018 "prog_io.m"
                              parse_tree__prog_io__SectionContext_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 2)));
#line 1018 "prog_io.m"
                              parse_tree__prog_io___SectionSeqNum_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_49, (MR_Integer) 3)));
#line 1020 "prog_io.m"
                              parse_tree__prog_io__ItemSeqInitLookAhead_245 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1019 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Specs_92_92 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_82;
#line 1019 "prog_io.m"
                              parse_tree__prog_io__STATE_VARIABLE_Errors_93_93 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_84;
#line 1019 "prog_io.m"
                            }
#line 1021 "prog_io.m"
                            break;
#line 1021 "prog_io.m"
                        }
#line 1048 "prog_io.m"
                        {
#line 1048 "prog_io.m"
                          parse_tree__prog_io__V_96_96 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
                        }
#line 1049 "prog_io.m"
                        {
#line 1049 "prog_io.m"
                          parse_tree__prog_io__V_97_97 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0);
                        }
#line 1049 "prog_io.m"
                        {
#line 1049 "prog_io.m"
                          parse_tree__prog_io__V_98_98 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
                        }
#line 1046 "prog_io.m"
                        {
#line 1046 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_20, parse_tree__prog_io__CurModuleName_21, parse_tree__prog_io__ItemSeqInitLookAhead_245, &parse_tree__prog_io__ItemSeqFinalLookAhead_246, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_71_71, parse_tree__prog_io__V_96_96, &parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__V_97_97, &parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__V_98_98, &parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_88_88, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100, parse_tree__prog_io__STATE_VARIABLE_Specs_92_92, &parse_tree__prog_io__STATE_VARIABLE_Specs_101_101, parse_tree__prog_io__STATE_VARIABLE_Errors_93_93, &parse_tree__prog_io__STATE_VARIABLE_Errors_102_102);
                        }
#line 1051 "prog_io.m"
                        {
#line 1051 "prog_io.m"
                          parse_tree__prog_io__add_section_component_7_p_0(parse_tree__prog_io__SectionKind_243, parse_tree__prog_io__SectionContext_244, parse_tree__prog_io__InclsCord_247, parse_tree__prog_io__AvailsCord_248, parse_tree__prog_io__ItemsCord_249, parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76, &parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104);
                        }
#line 1056 "prog_io.m"
                        {
#line 1056 "prog_io.m"
                          parse_tree__prog_io__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_243));
#line 1056 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_244));
#line 1056 "prog_io.m"
                        }
#line 1056 "prog_io.m"
                        {
#line 1056 "prog_io.m"
                          parse_tree__prog_io__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io__V_113_113));
#line 1056 "prog_io.m"
                        }
#line 1055 "prog_io.m"
                        /* direct tailcall eliminated */
#line 1055 "prog_io.m"
                        {
#line 1055 "prog_io.m"
                          MR_Word parse_tree__prog_io__MaybePrevSection__tmp_copy_23 = parse_tree__prog_io__V_105_105;
#line 1055 "prog_io.m"
                          MR_Word parse_tree__prog_io__InitLookAhead__tmp_copy_25 = parse_tree__prog_io__ItemSeqFinalLookAhead_246;
#line 1055 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_104_104;
#line 1055 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_99_99;
#line 1055 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_100_100;
#line 1055 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_101_101;
#line 1055 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_102_102;

#line 1055 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Errors_0_84 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_84;
#line 1055 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_82 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_82;
#line 1055 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_80 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_80;
#line 1055 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_78 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_78;
#line 1055 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0_76 = parse_tree__prog_io__STATE_VARIABLE_ModuleComponents_0__tmp_copy_76;
#line 1055 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_25 = parse_tree__prog_io__InitLookAhead__tmp_copy_25;
#line 1055 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_75 = (MR_Integer) 0;
#line 1055 "prog_io.m"
                          parse_tree__prog_io__MaybePrevSection_23 = parse_tree__prog_io__MaybePrevSection__tmp_copy_23;
#line 1055 "prog_io.m"
                        }
#line 1055 "prog_io.m"
                        continue;
#line 1016 "prog_io.m"
                      }
#line 957 "prog_io.m"
                      break;
#line 957 "prog_io.m"
                  }
#line 957 "prog_io.m"
                  break;
#line 957 "prog_io.m"
              }
#line 949 "prog_io.m"
            }
#line 910 "prog_io.m"
            break;
#line 910 "prog_io.m"
        }
#line 903 "prog_io.m"
      }
#line 903 "prog_io.m"
      break;
#line 903 "prog_io.m"
    }
#line 891 "prog_io.m"
}

#line 824 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_src_7_p_0(
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 824 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_9,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_10,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_27,
#line 824 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_28)
#line 824 "prog_io.m"
{
#line 831 "prog_io.m"
  {
#line 831 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_17;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__InitLookAhead_18;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_19;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_20;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__FinalLookAhead_25;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleComponents_26;
#line 831 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_35_35;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37;
#line 831 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_41_41;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_42_42;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__V_45_45;
#line 831 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_48_48;
#line 831 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_49_49;

#line 831 "prog_io.m"
    {
#line 831 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 832 "prog_io.m"
    {
#line 832 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32);
    }
#line 834 "prog_io.m"
    {
#line 834 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_35_35);
    }
#line 835 "prog_io.m"
    {
#line 835 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37);
    }
#line 839 "prog_io.m"
    {
#line 839 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 0, parse_tree__prog_io__DefaultModuleName_9, &parse_tree__prog_io__ModuleDeclPresent_17, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_32_32, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_37_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, parse_tree__prog_io__STATE_VARIABLE_Errors_35_35, &parse_tree__prog_io__STATE_VARIABLE_Errors_42_42);
    }
#line 856 "prog_io.m"
#line 856 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_17)) {
#line 856 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 856 "prog_io.m"
      case (MR_Integer) 0:
#line 843 "prog_io.m"
        {
#line 843 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 847 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = parse_tree__prog_io__DefaultModuleName_9;
#line 851 "prog_io.m"
          if ((parse_tree__prog_io__InitLookAhead_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "prog_io.m"
            {
#line 850 "prog_io.m"
              parse_tree__prog_io__ModuleNameContext_20 = mercury__term__context_init_0_f_0();
            }
#line 851 "prog_io.m"
          else
#line 853 "prog_io.m"
            {
#line 853 "prog_io.m"
              MR_Word parse_tree__prog_io__InitLookAheadTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 1)));
#line 852 "prog_io.m"
              MR_Word parse_tree__prog_io___InitLookAheadVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__InitLookAhead_18, (MR_Integer) 0)));

#line 854 "prog_io.m"
              {
#line 854 "prog_io.m"
                parse_tree__prog_io__ModuleNameContext_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__InitLookAheadTerm_22);
              }
#line 853 "prog_io.m"
            }
#line 843 "prog_io.m"
        }
#line 856 "prog_io.m"
        break;
#line 856 "prog_io.m"
      case (MR_Integer) 1:
#line 860 "prog_io.m"
        {
#line 859 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 859 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 861 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 860 "prog_io.m"
        }
#line 856 "prog_io.m"
        break;
#line 856 "prog_io.m"
      case (MR_Integer) 2:
#line 864 "prog_io.m"
        {
#line 863 "prog_io.m"
          parse_tree__prog_io__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 0)));
#line 863 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_17, (MR_Integer) 1)));
#line 865 "prog_io.m"
          parse_tree__prog_io__InitLookAhead_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "prog_io.m"
        }
#line 856 "prog_io.m"
        break;
#line 856 "prog_io.m"
    }
#line 873 "prog_io.m"
    {
#line 873 "prog_io.m"
      parse_tree__prog_io__V_45_45 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 870 "prog_io.m"
    {
#line 870 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_src_components_19_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_18, &parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__V_45_45, &parse_tree__prog_io__ModuleComponents_26, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_39, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_40_40, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Errors_42_42, &parse_tree__prog_io__STATE_VARIABLE_Errors_49_49);
    }
#line 875 "prog_io.m"
    {
#line 875 "prog_io.m"
      parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_46_46, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_27, parse_tree__prog_io__STATE_VARIABLE_Errors_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_28);
    }
#line 877 "prog_io.m"
    {
#line 877 "prog_io.m"
      MR_Word base;
#line 877 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 877 "prog_io.m"
      *parse_tree__prog_io__ParseTree_10 = base;
#line 877 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_19));
#line 877 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_20));
#line 877 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleComponents_26));
#line 877 "prog_io.m"
    }
#line 831 "prog_io.m"
  }
#line 824 "prog_io.m"
}

#line 776 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMVarSet_21,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__IOMTerm_22,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_39,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 776 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_40,
#line 776 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_41,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_42,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_43,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_44,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_45,
#line 776 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_46,
#line 776 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_47)
#line 776 "prog_io.m"
{
#line 786 "prog_io.m"
  {
#line 786 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_62_62;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_63_63;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_64_64;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__SectionContext_32;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSeqInitLookAhead_33;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__InclsCord_34;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__AvailsCord_35;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemsCord_36;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__RawItemBlock_37;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__V_51_51;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__V_52_52;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__V_53_53;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__V_59_59;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__V_60_60;
#line 786 "prog_io.m"
    MR_Word parse_tree__prog_io__V_61_61;

#line 788 "prog_io.m"
    {
#line 788 "prog_io.m"
      parse_tree__prog_io__SectionContext_32 = mercury__term__context_init_0_f_0();
    }
#line 789 "prog_io.m"
    {
#line 789 "prog_io.m"
      parse_tree__prog_io__ItemSeqInitLookAhead_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_33, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_21));
#line 789 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSeqInitLookAhead_33, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_22));
#line 789 "prog_io.m"
    }
#line 11580 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 792 "prog_io.m"
    {
#line 792 "prog_io.m"
      parse_tree__prog_io__V_51_51 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_62_62);
    }
#line 11587 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 792 "prog_io.m"
    {
#line 792 "prog_io.m"
      parse_tree__prog_io__V_52_52 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_63_63);
    }
#line 11594 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 792 "prog_io.m"
    {
#line 792 "prog_io.m"
      parse_tree__prog_io__V_53_53 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_64_64);
    }
#line 790 "prog_io.m"
    {
#line 790 "prog_io.m"
      parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__ItemSeqInitLookAhead_33, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_38, parse_tree__prog_io__STATE_VARIABLE_VNInfo_39, parse_tree__prog_io__V_51_51, &parse_tree__prog_io__InclsCord_34, parse_tree__prog_io__V_52_52, &parse_tree__prog_io__AvailsCord_35, parse_tree__prog_io__V_53_53, &parse_tree__prog_io__ItemsCord_36, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_40, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_41, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_42, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_43, parse_tree__prog_io__STATE_VARIABLE_Specs_0_44, parse_tree__prog_io__STATE_VARIABLE_Specs_45, parse_tree__prog_io__STATE_VARIABLE_Errors_0_46, parse_tree__prog_io__STATE_VARIABLE_Errors_47);
    }
#line 795 "prog_io.m"
    {
#line 795 "prog_io.m"
      parse_tree__prog_io__V_59_59 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_62_62, parse_tree__prog_io__InclsCord_34);
    }
#line 795 "prog_io.m"
    {
#line 795 "prog_io.m"
      parse_tree__prog_io__V_60_60 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_63_63, parse_tree__prog_io__AvailsCord_35);
    }
#line 795 "prog_io.m"
    {
#line 795 "prog_io.m"
      parse_tree__prog_io__V_61_61 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_64_64, parse_tree__prog_io__ItemsCord_36);
    }
#line 794 "prog_io.m"
    {
#line 794 "prog_io.m"
      parse_tree__prog_io__RawItemBlock_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 794 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 0) = ((MR_Box) ((MR_Integer) 0));
#line 794 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_32));
#line 794 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 2) = ((MR_Box) (parse_tree__prog_io__V_59_59));
#line 794 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 3) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 794 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_37, 4) = ((MR_Box) (parse_tree__prog_io__V_61_61));
#line 794 "prog_io.m"
    }
#line 796 "prog_io.m"
    {
#line 796 "prog_io.m"
      MR_Word base;
#line 796 "prog_io.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "prog_io.m"
      *parse_tree__prog_io__MaybeRawItemBlock_25 = base;
#line 796 "prog_io.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_37));
#line 796 "prog_io.m"
    }
#line 786 "prog_io.m"
  }
#line 776 "prog_io.m"
}

#line 618 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_section_18_p_0(
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_19,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_20,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_22,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_23,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_59,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeRawItemBlock_25,
#line 618 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60,
#line 618 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_64,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_65,
#line 618 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_66,
#line 618 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_67)
#line 618 "prog_io.m"
{
#line 629 "prog_io.m"
  while (MR_TRUE)
#line 629 "prog_io.m"
    {
#line 629 "prog_io.m"
      /* tailcall optimized into a loop */
#line 629 "prog_io.m"
      {
#line 629 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 629 "prog_io.m"
        MR_Word parse_tree__prog_io__ReadIOMResult_31;
#line 629 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;

#line 630 "prog_io.m"
        {
#line 630 "prog_io.m"
          parse_tree__prog_io__read_next_item_or_marker_8_p_0(parse_tree__prog_io__InitLookAhead_22, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, &parse_tree__prog_io__ReadIOMResult_31, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70);
        }
#line 637 "prog_io.m"
#line 637 "prog_io.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io__ReadIOMResult_31)) {
#line 637 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 637 "prog_io.m"
          case (MR_Integer) 0:
#line 633 "prog_io.m"
            {
#line 635 "prog_io.m"
              *parse_tree__prog_io__MaybeRawItemBlock_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "prog_io.m"
              *parse_tree__prog_io__FinalLookAhead_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 633 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_VNInfo_59 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58;
#line 633 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60;
#line 633 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 633 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_65 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_64;
#line 633 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Errors_67 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_66;
#line 633 "prog_io.m"
            }
#line 637 "prog_io.m"
            break;
#line 637 "prog_io.m"
          case (MR_Integer) 1:
#line 638 "prog_io.m"
            {
#line 638 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemSpec_32 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__ReadIOMResult_31), (MR_Integer) 1);
#line 638 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_117_117;
#line 638 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_119_119;

#line 641 "prog_io.m"
              {
#line 641 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_117_117, 0) = ((MR_Box) (parse_tree__prog_io__ItemSpec_32));
#line 641 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Specs_117_117, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_64));
#line 641 "prog_io.m"
              }
#line 642 "prog_io.m"
              {
#line 642 "prog_io.m"
                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, ((MR_Box) ((MR_Integer) 6)), parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, &parse_tree__prog_io__STATE_VARIABLE_Errors_119_119);
              }
#line 643 "prog_io.m"
              /* direct tailcall eliminated */
#line 643 "prog_io.m"
              {
#line 643 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 643 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_117_117;
#line 643 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_66 = parse_tree__prog_io__STATE_VARIABLE_Errors_119_119;

#line 643 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Errors_0_66 = parse_tree__prog_io__STATE_VARIABLE_Errors_0__tmp_copy_66;
#line 643 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 643 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62;
#line 643 "prog_io.m"
                parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "prog_io.m"
              }
#line 643 "prog_io.m"
              continue;
#line 638 "prog_io.m"
            }
#line 637 "prog_io.m"
            break;
#line 637 "prog_io.m"
          case (MR_Integer) 2:
#line 649 "prog_io.m"
            {
#line 649 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 0)));
#line 649 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 1)));
#line 649 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_109_109;
#line 649 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_110_110;
#line 648 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemSpecs_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 2)));
#line 648 "prog_io.m"
              MR_Word parse_tree__prog_io___ItemErrors_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 3)));
#line 650 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_37;
#line 655 "prog_io.m"
              MR_Word parse_tree__prog_io___MissingStartSectionWarning_38;

#line 650 "prog_io.m"
              {
#line 650 "prog_io.m"
                parse_tree__prog_io__Context_37 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_34);
              }
#line 655 "prog_io.m"
              {
#line 655 "prog_io.m"
                parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57, &parse_tree__prog_io___MissingStartSectionWarning_38, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, &parse_tree__prog_io__STATE_VARIABLE_Specs_109_109, parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, &parse_tree__prog_io__STATE_VARIABLE_Errors_110_110);
              }
#line 658 "prog_io.m"
              {
#line 658 "prog_io.m"
                parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__IOMVarSet_33, parse_tree__prog_io__IOMTerm_34, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, parse_tree__prog_io__STATE_VARIABLE_VNInfo_59, parse_tree__prog_io__MaybeRawItemBlock_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63, parse_tree__prog_io__STATE_VARIABLE_Specs_109_109, parse_tree__prog_io__STATE_VARIABLE_Specs_65, parse_tree__prog_io__STATE_VARIABLE_Errors_110_110, parse_tree__prog_io__STATE_VARIABLE_Errors_67);
#line 658 "prog_io.m"
                return;
              }
#line 649 "prog_io.m"
            }
#line 637 "prog_io.m"
            break;
#line 637 "prog_io.m"
          case (MR_Integer) 3:
#line 663 "prog_io.m"
            {
#line 663 "prog_io.m"
              MR_Word parse_tree__prog_io__IOM_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 2)));
#line 663 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMVarSet_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 0)));
#line 663 "prog_io.m"
              MR_Word parse_tree__prog_io__IOMTerm_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ReadIOMResult_31, (MR_Integer) 1)));

#line 670 "prog_io.m"
#line 670 "prog_io.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io__IOM_39)) {
#line 670 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 670 "prog_io.m"
                case (MR_Integer) 0:
#line 670 "prog_io.m"
                case (MR_Integer) 1:
#line 670 "prog_io.m"
                case (MR_Integer) 2:
#line 692 "prog_io.m"
                  {
#line 692 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_72_72;
#line 692 "prog_io.m"
                    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_73_73;
#line 693 "prog_io.m"
                    MR_Word parse_tree__prog_io__Context_128;
#line 697 "prog_io.m"
                    MR_Word parse_tree__prog_io___MissingStartSectionWarning_127;

#line 693 "prog_io.m"
                    {
#line 693 "prog_io.m"
                      parse_tree__prog_io__Context_128 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__IOMTerm_133);
                    }
#line 697 "prog_io.m"
                    {
#line 697 "prog_io.m"
                      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_105_115_115_105_110_103_95_115_116_97_114_116_95_115_101_99_116_105_111_110_95_119_97_114_110_105_110_103_95_105_110_116_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__prog_io__STATE_VARIABLE_MissingStartSectionWarning_0_57, &parse_tree__prog_io___MissingStartSectionWarning_127, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, &parse_tree__prog_io__STATE_VARIABLE_Specs_72_72, parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, &parse_tree__prog_io__STATE_VARIABLE_Errors_73_73);
                    }
#line 700 "prog_io.m"
                    {
#line 700 "prog_io.m"
                      parse_tree__prog_io__read_item_sequence_in_hdr_file_without_section_marker_18_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, parse_tree__prog_io__IOMVarSet_132, parse_tree__prog_io__IOMTerm_133, parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, parse_tree__prog_io__STATE_VARIABLE_VNInfo_59, parse_tree__prog_io__MaybeRawItemBlock_25, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63, parse_tree__prog_io__STATE_VARIABLE_Specs_72_72, parse_tree__prog_io__STATE_VARIABLE_Specs_65, parse_tree__prog_io__STATE_VARIABLE_Errors_73_73, parse_tree__prog_io__STATE_VARIABLE_Errors_67);
#line 700 "prog_io.m"
                      return;
                    }
#line 692 "prog_io.m"
                  }
#line 670 "prog_io.m"
                  break;
#line 670 "prog_io.m"
                case (MR_Integer) 3:
#line 670 "prog_io.m"
#line 670 "prog_io.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 0)))) {
#line 670 "prog_io.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 670 "prog_io.m"
                    case (MR_Integer) 0:
#line 682 "prog_io.m"
                      {
#line 682 "prog_io.m"
                        MR_Word parse_tree__prog_io__MVN_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));
#line 682 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_80_80;
#line 682 "prog_io.m"
                        MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_81_81;

#line 683 "prog_io.m"
                        {
#line 683 "prog_io.m"
                          parse_tree__prog_io__record_version_numbers_6_p_0(parse_tree__prog_io__MVN_47, parse_tree__prog_io__IOMTerm_133, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_80_80, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, &parse_tree__prog_io__STATE_VARIABLE_Specs_81_81);
                        }
#line 684 "prog_io.m"
                        /* direct tailcall eliminated */
#line 684 "prog_io.m"
                        {
#line 684 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_58 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_80_80;
#line 684 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 684 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_81_81;

#line 684 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_Specs_0_64 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 684 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62;
#line 684 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0__tmp_copy_58;
#line 684 "prog_io.m"
                        }
#line 684 "prog_io.m"
                        continue;
#line 682 "prog_io.m"
                      }
#line 670 "prog_io.m"
                      break;
#line 670 "prog_io.m"
                    case (MR_Integer) 1:
#line 665 "prog_io.m"
                      {
#line 665 "prog_io.m"
                        MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));

#line 666 "prog_io.m"
                        /* direct tailcall eliminated */
#line 666 "prog_io.m"
                        {
#line 666 "prog_io.m"
                          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_60 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_101_101;
#line 666 "prog_io.m"
                          MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;

#line 666 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_62 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_62;
#line 666 "prog_io.m"
                          parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_60;
#line 666 "prog_io.m"
                          parse_tree__prog_io__InitLookAhead_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 666 "prog_io.m"
                        }
#line 666 "prog_io.m"
                        continue;
#line 665 "prog_io.m"
                      }
#line 670 "prog_io.m"
                      break;
#line 670 "prog_io.m"
                    case (MR_Integer) 2:
#line 670 "prog_io.m"
                    case (MR_Integer) 3:
#line 707 "prog_io.m"
                      {
#line 708 "prog_io.m"
                        {
#line 708 "prog_io.m"
                          MR_Word base;
#line 708 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_io.m"
                          *parse_tree__prog_io__FinalLookAhead_23 = base;
#line 708 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__IOMVarSet_132));
#line 708 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__IOMTerm_133));
#line 708 "prog_io.m"
                        }
#line 709 "prog_io.m"
                        *parse_tree__prog_io__MaybeRawItemBlock_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_VNInfo_59 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58;
#line 707 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60;
#line 707 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70;
#line 707 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_65 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_64;
#line 707 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Errors_67 = parse_tree__prog_io__STATE_VARIABLE_Errors_0_66;
#line 707 "prog_io.m"
                      }
#line 670 "prog_io.m"
                      break;
#line 670 "prog_io.m"
                    case (MR_Integer) 4:
#line 672 "prog_io.m"
                      {
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_139_139;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_140_140;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionKind_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 1)));
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 2)));
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__InclsCord_43;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__AvailsCord_44;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__ItemsCord_45;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__RawItemBlock_46;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_90_90;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_91_91;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_92_92;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_98_98;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_99_99;
#line 672 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_100_100;
#line 671 "prog_io.m"
                        MR_Integer parse_tree__prog_io___SectionSeqNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__IOM_39, (MR_Integer) 3)));

#line 674 "prog_io.m"
                        {
#line 674 "prog_io.m"
                          parse_tree__prog_io__V_90_90 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_138_138);
                        }
#line 12043 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 675 "prog_io.m"
                        {
#line 675 "prog_io.m"
                          parse_tree__prog_io__V_91_91 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_139_139);
                        }
#line 12050 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 675 "prog_io.m"
                        {
#line 675 "prog_io.m"
                          parse_tree__prog_io__V_92_92 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_140_140);
                        }
#line 673 "prog_io.m"
                        {
#line 673 "prog_io.m"
                          parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_19, parse_tree__prog_io__CurModuleName_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__FinalLookAhead_23, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_58, parse_tree__prog_io__STATE_VARIABLE_VNInfo_59, parse_tree__prog_io__V_90_90, &parse_tree__prog_io__InclsCord_43, parse_tree__prog_io__V_91_91, &parse_tree__prog_io__AvailsCord_44, parse_tree__prog_io__V_92_92, &parse_tree__prog_io__ItemsCord_45, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_61, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_70_70, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_63, parse_tree__prog_io__STATE_VARIABLE_Specs_0_64, parse_tree__prog_io__STATE_VARIABLE_Specs_65, parse_tree__prog_io__STATE_VARIABLE_Errors_0_66, parse_tree__prog_io__STATE_VARIABLE_Errors_67);
                        }
#line 678 "prog_io.m"
                        {
#line 678 "prog_io.m"
                          parse_tree__prog_io__V_98_98 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_138_138, parse_tree__prog_io__InclsCord_43);
                        }
#line 678 "prog_io.m"
                        {
#line 678 "prog_io.m"
                          parse_tree__prog_io__V_99_99 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_139_139, parse_tree__prog_io__AvailsCord_44);
                        }
#line 679 "prog_io.m"
                        {
#line 679 "prog_io.m"
                          parse_tree__prog_io__V_100_100 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_140_140, parse_tree__prog_io__ItemsCord_45);
                        }
#line 677 "prog_io.m"
                        {
#line 677 "prog_io.m"
                          parse_tree__prog_io__RawItemBlock_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 677 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 0) = ((MR_Box) (parse_tree__prog_io__SectionKind_40));
#line 677 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 1) = ((MR_Box) (parse_tree__prog_io__SectionContext_41));
#line 677 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 2) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 677 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 3) = ((MR_Box) (parse_tree__prog_io__V_99_99));
#line 677 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__RawItemBlock_46, 4) = ((MR_Box) (parse_tree__prog_io__V_100_100));
#line 677 "prog_io.m"
                        }
#line 680 "prog_io.m"
                        {
#line 680 "prog_io.m"
                          MR_Word base;
#line 680 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_io.m"
                          *parse_tree__prog_io__MaybeRawItemBlock_25 = base;
#line 680 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__RawItemBlock_46));
#line 680 "prog_io.m"
                        }
#line 672 "prog_io.m"
                      }
#line 670 "prog_io.m"
                      break;
#line 670 "prog_io.m"
                  }
#line 670 "prog_io.m"
                  break;
#line 670 "prog_io.m"
              }
#line 663 "prog_io.m"
            }
#line 637 "prog_io.m"
            break;
#line 637 "prog_io.m"
        }
#line 629 "prog_io.m"
      }
#line 629 "prog_io.m"
      break;
#line 629 "prog_io.m"
    }
#line 618 "prog_io.m"
}

#line 583 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_18,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__CurModuleName_19,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__InitLookAhead_20,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__FinalLookAhead_21,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_VNInfo_34,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__RawItemBlocks_23,
#line 583 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35,
#line 583 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_39,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_40,
#line 583 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_0_41,
#line 583 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42)
#line 583 "prog_io.m"
{
#line 592 "prog_io.m"
  {
#line 592 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 592 "prog_io.m"
    MR_Word parse_tree__prog_io__MidLookAhead_29;
#line 592 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeHeadRawItemBlock_30;
#line 592 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46;
#line 592 "prog_io.m"
    MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47;
#line 592 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48;
#line 592 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 592 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;

#line 593 "prog_io.m"
    {
#line 593 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_section_18_p_0(parse_tree__prog_io__Globals_18, parse_tree__prog_io__CurModuleName_19, (MR_Integer) 0, parse_tree__prog_io__InitLookAhead_20, &parse_tree__prog_io__MidLookAhead_29, parse_tree__prog_io__STATE_VARIABLE_VNInfo_0_33, &parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46, &parse_tree__prog_io__MaybeHeadRawItemBlock_30, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_35, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_37, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_0_39, &parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_0_41, &parse_tree__prog_io__STATE_VARIABLE_Errors_50_50);
    }
#line 601 "prog_io.m"
    if ((parse_tree__prog_io__MaybeHeadRawItemBlock_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "prog_io.m"
      {
#line 599 "prog_io.m"
        *parse_tree__prog_io__FinalLookAhead_21 = parse_tree__prog_io__MidLookAhead_29;
#line 600 "prog_io.m"
        *parse_tree__prog_io__RawItemBlocks_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_VNInfo_34 = parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46;
#line 598 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47;
#line 598 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48;
#line 598 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_40 = parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 598 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Errors_42 = parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;
#line 598 "prog_io.m"
      }
#line 601 "prog_io.m"
    else
#line 602 "prog_io.m"
      {
#line 602 "prog_io.m"
        MR_Word parse_tree__prog_io__HeadRawItemBlock_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeHeadRawItemBlock_30, (MR_Integer) 0)));
#line 602 "prog_io.m"
        MR_Word parse_tree__prog_io__TailRawItemBlocks_32;

#line 603 "prog_io.m"
        {
#line 603 "prog_io.m"
          parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(parse_tree__prog_io__Globals_18, parse_tree__prog_io__CurModuleName_19, parse_tree__prog_io__MidLookAhead_29, parse_tree__prog_io__FinalLookAhead_21, parse_tree__prog_io__STATE_VARIABLE_VNInfo_46_46, parse_tree__prog_io__STATE_VARIABLE_VNInfo_34, &parse_tree__prog_io__TailRawItemBlocks_32, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_47_47, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_36, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_48_48, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_38, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_40, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
        }
#line 606 "prog_io.m"
        {
#line 606 "prog_io.m"
          MR_Word base;
#line 606 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "prog_io.m"
          *parse_tree__prog_io__RawItemBlocks_23 = base;
#line 606 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__HeadRawItemBlock_31));
#line 606 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__TailRawItemBlocks_32));
#line 606 "prog_io.m"
        }
#line 602 "prog_io.m"
      }
#line 592 "prog_io.m"
  }
#line 583 "prog_io.m"
}

#line 545 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__separate_int_imp_items_7_p_0(
#line 545 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_2,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__4_4,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__5_5,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__6_6,
#line 545 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__7_7)
#line 545 "prog_io.m"
{
#line 550 "prog_io.m"
  {
#line 550 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 550 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "prog_io.m"
      {
#line 550 "prog_io.m"
        *parse_tree__prog_io__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "prog_io.m"
        *parse_tree__prog_io__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "prog_io.m"
        *parse_tree__prog_io__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "prog_io.m"
        *parse_tree__prog_io__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "prog_io.m"
        *parse_tree__prog_io__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "prog_io.m"
        *parse_tree__prog_io__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "prog_io.m"
      }
#line 550 "prog_io.m"
    else
#line 552 "prog_io.m"
      {
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemBlock_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__IntIncls0_16;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__ImpIncls0_17;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__IntAvails0_18;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__ImpAvails0_19;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__IntItems0_20;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__ImpItems0_21;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__Section_22;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__Incls_24;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__Avails_25;
#line 552 "prog_io.m"
        MR_Word parse_tree__prog_io__Items_26;
#line 555 "prog_io.m"
        MR_Word parse_tree__prog_io___Context_23;

#line 553 "prog_io.m"
        {
#line 553 "prog_io.m"
          parse_tree__prog_io__separate_int_imp_items_7_p_0(parse_tree__prog_io__ItemBlocks_9, &parse_tree__prog_io__IntIncls0_16, &parse_tree__prog_io__ImpIncls0_17, &parse_tree__prog_io__IntAvails0_18, &parse_tree__prog_io__ImpAvails0_19, &parse_tree__prog_io__IntItems0_20, &parse_tree__prog_io__ImpItems0_21);
        }
#line 555 "prog_io.m"
        parse_tree__prog_io__Section_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 0)));
#line 555 "prog_io.m"
        parse_tree__prog_io___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 1)));
#line 555 "prog_io.m"
        parse_tree__prog_io__Incls_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 2)));
#line 555 "prog_io.m"
        parse_tree__prog_io__Avails_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 3)));
#line 555 "prog_io.m"
        parse_tree__prog_io__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemBlock_8, (MR_Integer) 4)));
#line 564 "prog_io.m"
#line 564 "prog_io.m"
        switch (parse_tree__prog_io__Section_22) {
#line 564 "prog_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 564 "prog_io.m"
          case (MR_Integer) 1:
#line 565 "prog_io.m"
            {
#line 566 "prog_io.m"
              *parse_tree__prog_io__HeadVar__2_2 = parse_tree__prog_io__IntIncls0_16;
#line 567 "prog_io.m"
              *parse_tree__prog_io__HeadVar__4_4 = parse_tree__prog_io__IntAvails0_18;
#line 568 "prog_io.m"
              *parse_tree__prog_io__HeadVar__6_6 = parse_tree__prog_io__IntItems0_20;
#line 569 "prog_io.m"
              {
#line 569 "prog_io.m"
                *parse_tree__prog_io__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__Incls_24, parse_tree__prog_io__ImpIncls0_17);
              }
#line 570 "prog_io.m"
              {
#line 570 "prog_io.m"
                *parse_tree__prog_io__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io__Avails_25, parse_tree__prog_io__ImpAvails0_19);
              }
#line 571 "prog_io.m"
              {
#line 571 "prog_io.m"
                *parse_tree__prog_io__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__Items_26, parse_tree__prog_io__ImpItems0_21);
              }
#line 565 "prog_io.m"
            }
#line 564 "prog_io.m"
            break;
#line 564 "prog_io.m"
          case (MR_Integer) 0:
#line 557 "prog_io.m"
            {
#line 558 "prog_io.m"
              {
#line 558 "prog_io.m"
                *parse_tree__prog_io__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io__Incls_24, parse_tree__prog_io__IntIncls0_16);
              }
#line 559 "prog_io.m"
              {
#line 559 "prog_io.m"
                *parse_tree__prog_io__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io__Avails_25, parse_tree__prog_io__IntAvails0_18);
              }
#line 560 "prog_io.m"
              {
#line 560 "prog_io.m"
                *parse_tree__prog_io__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__Items_26, parse_tree__prog_io__IntItems0_20);
              }
#line 561 "prog_io.m"
              *parse_tree__prog_io__HeadVar__3_3 = parse_tree__prog_io__ImpIncls0_17;
#line 562 "prog_io.m"
              *parse_tree__prog_io__HeadVar__5_5 = parse_tree__prog_io__ImpAvails0_19;
#line 563 "prog_io.m"
              *parse_tree__prog_io__HeadVar__7_7 = parse_tree__prog_io__ImpItems0_21;
#line 557 "prog_io.m"
            }
#line 564 "prog_io.m"
            break;
#line 564 "prog_io.m"
        }
#line 552 "prog_io.m"
      }
#line 550 "prog_io.m"
  }
#line 545 "prog_io.m"
}

#line 467 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_parse_tree_int_8_p_0(
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_9,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_10,
#line 467 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_12,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_41,
#line 467 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_42)
#line 467 "prog_io.m"
{
#line 472 "prog_io.m"
  {
#line 472 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_16;
#line 472 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_17;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclPresent_19;
#line 472 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName1_20;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__SeqNumCounter1_21;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_26;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameContext_27;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeVersionNumbers_28;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__IntIncls_29;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__ImpIncls_30;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__IntAvails_31;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__ImpAvails_32;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__IntItems_33;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__ImpItems_34;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_48_48;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_51_51;
#line 472 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_52_52;

#line 473 "prog_io.m"
    {
#line 473 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_16);
    }
#line 474 "prog_io.m"
    {
#line 474 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_16, &parse_tree__prog_io__SourceFileName0_17);
    }
#line 476 "prog_io.m"
    {
#line 476 "prog_io.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_48_48);
    }
#line 477 "prog_io.m"
    {
#line 477 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 481 "prog_io.m"
    {
#line 481 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, parse_tree__prog_io__STATE_VARIABLE_Errors_48_48, &parse_tree__prog_io__STATE_VARIABLE_Errors_52_52);
    }
#line 503 "prog_io.m"
#line 503 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 503 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 503 "prog_io.m"
      case (MR_Integer) 0:
#line 485 "prog_io.m"
        {
#line 485 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAhead_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 485 "prog_io.m"
          MR_Word parse_tree__prog_io__LookAheadContext_23;

#line 489 "prog_io.m"
          if ((parse_tree__prog_io__LookAhead_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "prog_io.m"
            {
#line 488 "prog_io.m"
              {
#line 488 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName0_17));
#line 488 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__LookAheadContext_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 488 "prog_io.m"
              }
#line 487 "prog_io.m"
            }
#line 489 "prog_io.m"
          else
#line 490 "prog_io.m"
            {
#line 490 "prog_io.m"
              MR_Word parse_tree__prog_io__LookAheadTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 1)));
#line 490 "prog_io.m"
              MR_Word parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__LookAhead_22, (MR_Integer) 0)));

#line 491 "prog_io.m"
              {
#line 491 "prog_io.m"
                parse_tree__prog_io__LookAheadContext_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__LookAheadTerm_25);
              }
#line 490 "prog_io.m"
            }
#line 493 "prog_io.m"
          {
#line 493 "prog_io.m"
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, parse_tree__prog_io__STATE_VARIABLE_Specs_41, parse_tree__prog_io__STATE_VARIABLE_Errors_52_52, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
          }
#line 494 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 495 "prog_io.m"
          {
#line 495 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 496 "prog_io.m"
          parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "prog_io.m"
          parse_tree__prog_io__IntIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "prog_io.m"
          parse_tree__prog_io__ImpIncls_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 499 "prog_io.m"
          parse_tree__prog_io__IntAvails_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "prog_io.m"
          parse_tree__prog_io__ImpAvails_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "prog_io.m"
          parse_tree__prog_io__IntItems_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "prog_io.m"
          parse_tree__prog_io__ImpItems_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "prog_io.m"
        }
#line 503 "prog_io.m"
        break;
#line 503 "prog_io.m"
      case (MR_Integer) 1:
#line 505 "prog_io.m"
        {
#line 504 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 504 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 506 "prog_io.m"
          {
#line 506 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, parse_tree__prog_io__STATE_VARIABLE_Specs_41, parse_tree__prog_io__STATE_VARIABLE_Errors_52_52, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
          }
#line 508 "prog_io.m"
          parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "prog_io.m"
          parse_tree__prog_io__IntIncls_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "prog_io.m"
          parse_tree__prog_io__ImpIncls_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "prog_io.m"
          parse_tree__prog_io__IntAvails_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "prog_io.m"
          parse_tree__prog_io__ImpAvails_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "prog_io.m"
          parse_tree__prog_io__IntItems_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "prog_io.m"
          parse_tree__prog_io__ImpItems_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "prog_io.m"
        }
#line 503 "prog_io.m"
        break;
#line 503 "prog_io.m"
      case (MR_Integer) 2:
#line 517 "prog_io.m"
        {
#line 517 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_35;
#line 517 "prog_io.m"
          MR_Word parse_tree__prog_io__VNInfo_36;
#line 517 "prog_io.m"
          MR_Word parse_tree__prog_io__RawItemBlocks_37;
#line 517 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_38;
#line 517 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_39;
#line 517 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_56_56;
#line 517 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_57_57;
#line 517 "prog_io.m"
          MR_Word parse_tree__prog_io__V_62_62;

#line 516 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 516 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 518 "prog_io.m"
          {
#line 518 "prog_io.m"
            parse_tree__prog_io__read_parse_tree_int_sections_17_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &parse_tree__prog_io__VNInfo_36, &parse_tree__prog_io__RawItemBlocks_37, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_38, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_39, parse_tree__prog_io__STATE_VARIABLE_Specs_51_51, &parse_tree__prog_io__STATE_VARIABLE_Specs_56_56, parse_tree__prog_io__STATE_VARIABLE_Errors_52_52, &parse_tree__prog_io__STATE_VARIABLE_Errors_57_57);
          }
#line 526 "prog_io.m"
#line 526 "prog_io.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io__VNInfo_36)) {
#line 526 "prog_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 526 "prog_io.m"
            case (MR_Integer) 0:
#line 526 "prog_io.m"
#line 526 "prog_io.m"
              switch (MR_unmkbody(parse_tree__prog_io__VNInfo_36)) {
#line 526 "prog_io.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 526 "prog_io.m"
                case (MR_Integer) 0:
#line 530 "prog_io.m"
                  {
#line 533 "prog_io.m"
                    {
#line 533 "prog_io.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.read_parse_tree_int\'/8", (MR_String) "dont_allow_version_numbers");
#line 533 "prog_io.m"
                      return;
                    }
#line 530 "prog_io.m"
                  }
#line 526 "prog_io.m"
                  break;
#line 526 "prog_io.m"
                case (MR_Integer) 1:
#line 525 "prog_io.m"
                  parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "prog_io.m"
                  break;
#line 526 "prog_io.m"
              }
#line 526 "prog_io.m"
              break;
#line 526 "prog_io.m"
            case (MR_Integer) 1:
#line 527 "prog_io.m"
              {
#line 527 "prog_io.m"
                MR_Word parse_tree__prog_io__MVN_40 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__VNInfo_36), (MR_Integer) 1);

#line 528 "prog_io.m"
                {
#line 528 "prog_io.m"
                  parse_tree__prog_io__MaybeVersionNumbers_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeVersionNumbers_28, 0) = ((MR_Box) (parse_tree__prog_io__MVN_40));
#line 528 "prog_io.m"
                }
#line 527 "prog_io.m"
              }
#line 526 "prog_io.m"
              break;
#line 526 "prog_io.m"
          }
#line 535 "prog_io.m"
          {
#line 535 "prog_io.m"
            parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 535 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 535 "prog_io.m"
          }
#line 535 "prog_io.m"
          {
#line 535 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_62_62, parse_tree__prog_io__FinalLookAhead_35, parse_tree__prog_io__SourceFileName_38, parse_tree__prog_io__SeqNumCounter_39, parse_tree__prog_io__STATE_VARIABLE_Specs_56_56, parse_tree__prog_io__STATE_VARIABLE_Specs_41, parse_tree__prog_io__STATE_VARIABLE_Errors_57_57, parse_tree__prog_io__STATE_VARIABLE_Errors_42);
          }
#line 538 "prog_io.m"
          {
#line 538 "prog_io.m"
            parse_tree__prog_io__separate_int_imp_items_7_p_0(parse_tree__prog_io__RawItemBlocks_37, &parse_tree__prog_io__IntIncls_29, &parse_tree__prog_io__ImpIncls_30, &parse_tree__prog_io__IntAvails_31, &parse_tree__prog_io__ImpAvails_32, &parse_tree__prog_io__IntItems_33, &parse_tree__prog_io__ImpItems_34);
          }
#line 517 "prog_io.m"
        }
#line 503 "prog_io.m"
        break;
#line 503 "prog_io.m"
    }
#line 541 "prog_io.m"
    {
#line 541 "prog_io.m"
      MR_Word base;
#line 541 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_9));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__MaybeVersionNumbers_28));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_io__IntIncls_29));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_io__ImpIncls_30));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_io__IntAvails_31));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_io__ImpAvails_32));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_io__IntItems_33));
#line 541 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_io__ImpItems_34));
#line 541 "prog_io.m"
    }
#line 472 "prog_io.m"
  }
#line 467 "prog_io.m"
}

#line 444 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_2(
#line 444 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg)
#line 444 "prog_io.m"
{
#line 444 "prog_io.m"
  {
#line 444 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 444 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;

#line 444 "prog_io.m"
    {
#line 444 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__444__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))));
    }
#line 444 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 444 "prog_io.m"
  }
#line 444 "prog_io.m"
}

#line 441 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__read_parse_tree_opt_8_p_0_1(
#line 441 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg)
#line 441 "prog_io.m"
{
#line 441 "prog_io.m"
  {
#line 441 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 441 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;

#line 441 "prog_io.m"
    {
#line 441 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__IntroducedFrom__pred__read_parse_tree_opt__441__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))));
    }
#line 441 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 441 "prog_io.m"
  }
#line 441 "prog_io.m"
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
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_39,
#line 392 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Errors_40)
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
    MR_Word parse_tree__prog_io__Uses_28;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__Items_29;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_46_46;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;
#line 397 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_50_50;

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
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__prog_io__STATE_VARIABLE_Errors_46_46);
    }
#line 402 "prog_io.m"
    {
#line 402 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
    }
#line 406 "prog_io.m"
    {
#line 406 "prog_io.m"
      parse_tree__prog_io__read_first_module_decl_13_p_0((MR_Integer) 1, parse_tree__prog_io__DefaultModuleName_11, &parse_tree__prog_io__ModuleDeclPresent_19, parse_tree__prog_io__SourceFileName0_17, &parse_tree__prog_io__SourceFileName1_20, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__SeqNumCounter1_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Errors_46_46, &parse_tree__prog_io__STATE_VARIABLE_Errors_50_50);
    }
#line 423 "prog_io.m"
#line 423 "prog_io.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io__ModuleDeclPresent_19)) {
#line 423 "prog_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 423 "prog_io.m"
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
            parse_tree__prog_io__report_missing_module_start_5_p_0(parse_tree__prog_io__LookAheadContext_23, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_39, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_40);
          }
#line 419 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = parse_tree__prog_io__DefaultModuleName_11;
#line 420 "prog_io.m"
          {
#line 420 "prog_io.m"
            parse_tree__prog_io__ModuleNameContext_27 = mercury__term__context_init_0_f_0();
          }
#line 421 "prog_io.m"
          parse_tree__prog_io__Uses_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "prog_io.m"
          parse_tree__prog_io__Items_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "prog_io.m"
        }
#line 423 "prog_io.m"
        break;
#line 423 "prog_io.m"
      case (MR_Integer) 1:
#line 425 "prog_io.m"
        {
#line 424 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 424 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 426 "prog_io.m"
          {
#line 426 "prog_io.m"
            parse_tree__prog_io__report_wrong_module_start_7_p_0(parse_tree__prog_io__ModuleNameContext_27, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_39, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, parse_tree__prog_io__STATE_VARIABLE_Errors_40);
          }
#line 428 "prog_io.m"
          parse_tree__prog_io__Uses_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "prog_io.m"
          parse_tree__prog_io__Items_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "prog_io.m"
        }
#line 423 "prog_io.m"
        break;
#line 423 "prog_io.m"
      case (MR_Integer) 2:
#line 432 "prog_io.m"
        {
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_81_81;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_82_82;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__FinalLookAhead_30;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__InclsCord_32;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__AvailsCord_33;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemsCord_34;
#line 432 "prog_io.m"
          MR_String parse_tree__prog_io__SourceFileName_35;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__SeqNumCounter_36;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__Avails_37;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__Imports_38;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_54_54;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_55_55;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_56_56;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_57_57;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Errors_58_58;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_60_60;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_64_64;
#line 432 "prog_io.m"
          MR_Word parse_tree__prog_io__V_68_68;
#line 433 "prog_io.m"
          MR_Word parse_tree__prog_io__V_31_31;

#line 431 "prog_io.m"
          parse_tree__prog_io__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 0)));
#line 431 "prog_io.m"
          parse_tree__prog_io__ModuleNameContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ModuleDeclPresent_19, (MR_Integer) 1)));
#line 435 "prog_io.m"
          {
#line 435 "prog_io.m"
            parse_tree__prog_io__V_54_54 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0);
          }
#line 13005 "parse_tree.prog_io.c"
          parse_tree__prog_io__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0;
#line 435 "prog_io.m"
          {
#line 435 "prog_io.m"
            parse_tree__prog_io__V_55_55 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_81_81);
          }
#line 13012 "parse_tree.prog_io.c"
          parse_tree__prog_io__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 435 "prog_io.m"
          {
#line 435 "prog_io.m"
            parse_tree__prog_io__V_56_56 = mercury__cord__init_0_f_0(parse_tree__prog_io__TypeCtorInfo_82_82);
          }
#line 433 "prog_io.m"
          {
#line 433 "prog_io.m"
            parse_tree__prog_io__read_item_sequence_22_p_0(parse_tree__prog_io__Globals_10, parse_tree__prog_io__ModuleName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__FinalLookAhead_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__V_31_31, parse_tree__prog_io__V_54_54, &parse_tree__prog_io__InclsCord_32, parse_tree__prog_io__V_55_55, &parse_tree__prog_io__AvailsCord_33, parse_tree__prog_io__V_56_56, &parse_tree__prog_io__ItemsCord_34, parse_tree__prog_io__SourceFileName1_20, &parse_tree__prog_io__SourceFileName_35, parse_tree__prog_io__SeqNumCounter1_21, &parse_tree__prog_io__SeqNumCounter_36, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, &parse_tree__prog_io__STATE_VARIABLE_Specs_57_57, parse_tree__prog_io__STATE_VARIABLE_Errors_50_50, &parse_tree__prog_io__STATE_VARIABLE_Errors_58_58);
          }
#line 438 "prog_io.m"
          {
#line 438 "prog_io.m"
            parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 438 "prog_io.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 438 "prog_io.m"
          }
#line 438 "prog_io.m"
          {
#line 438 "prog_io.m"
            parse_tree__prog_io__check_for_unexpected_item_11_p_0(parse_tree__prog_io__ModuleName_26, parse_tree__prog_io__V_60_60, parse_tree__prog_io__FinalLookAhead_30, parse_tree__prog_io__SourceFileName_35, parse_tree__prog_io__SeqNumCounter_36, parse_tree__prog_io__STATE_VARIABLE_Specs_57_57, parse_tree__prog_io__STATE_VARIABLE_Specs_39, parse_tree__prog_io__STATE_VARIABLE_Errors_58_58, parse_tree__prog_io__STATE_VARIABLE_Errors_40);
          }
#line 441 "prog_io.m"
          {
#line 441 "prog_io.m"
            parse_tree__prog_io__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_2[1]));
#line 441 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io__read_parse_tree_opt_8_p_0_1));
#line 441 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 441 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, 3) = ((MR_Box) (parse_tree__prog_io__InclsCord_32));
#line 441 "prog_io.m"
          }
#line 441 "prog_io.m"
          {
#line 441 "prog_io.m"
            mercury__require__expect_4_p_0(parse_tree__prog_io__V_64_64, (MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.read_parse_tree_opt\'/8", (MR_String) "Incls != []");
          }
#line 442 "prog_io.m"
          {
#line 442 "prog_io.m"
            parse_tree__prog_io__Avails_37 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_81_81, parse_tree__prog_io__AvailsCord_33);
          }
#line 443 "prog_io.m"
          {
#line 443 "prog_io.m"
            parse_tree__prog_item__avail_imports_uses_3_p_0(parse_tree__prog_io__Avails_37, &parse_tree__prog_io__Imports_38, &parse_tree__prog_io__Uses_28);
          }
#line 444 "prog_io.m"
          {
#line 444 "prog_io.m"
            parse_tree__prog_io__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 444 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_4[1]));
#line 444 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io__read_parse_tree_opt_8_p_0_2));
#line 444 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 444 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 3) = ((MR_Box) (parse_tree__prog_io__Imports_38));
#line 444 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_68_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "prog_io.m"
          }
#line 444 "prog_io.m"
          {
#line 444 "prog_io.m"
            mercury__require__expect_4_p_0(parse_tree__prog_io__V_68_68, (MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.read_parse_tree_opt\'/8", (MR_String) "Imports != []");
          }
#line 445 "prog_io.m"
          {
#line 445 "prog_io.m"
            parse_tree__prog_io__Items_29 = mercury__cord__list_1_f_0(parse_tree__prog_io__TypeCtorInfo_82_82, parse_tree__prog_io__ItemsCord_34);
          }
#line 432 "prog_io.m"
        }
#line 423 "prog_io.m"
        break;
#line 423 "prog_io.m"
    }
#line 447 "prog_io.m"
    {
#line 447 "prog_io.m"
      MR_Word base;
#line 447 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 447 "prog_io.m"
      *parse_tree__prog_io__ParseTree_12 = base;
#line 447 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_26));
#line 447 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_9));
#line 447 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__ModuleNameContext_27));
#line 447 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_io__Uses_28));
#line 447 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_io__Items_29));
#line 447 "prog_io.m"
    }
#line 397 "prog_io.m"
  }
#line 392 "prog_io.m"
}

#line 296 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(
#line 296 "prog_io.m"
  MR_Word parse_tree__prog_io__OptFileKind_4,
#line 296 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 296 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 296 "prog_io.m"
{
#line 299 "prog_io.m"
  {
#line 299 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 299 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 300 "prog_io.m"
    {
#line 300 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 300 "prog_io.m"
    {
#line 300 "prog_io.m"
      MR_Word base;
#line 300 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 300 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 300 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__OptFileKind_4));
#line 300 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 300 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_io.m"
    }
#line 299 "prog_io.m"
  }
#line 296 "prog_io.m"
}

#line 289 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(
#line 289 "prog_io.m"
  MR_Word parse_tree__prog_io__IntFileKind_4,
#line 289 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 289 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_6)
#line 289 "prog_io.m"
{
#line 292 "prog_io.m"
  {
#line 292 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 292 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 293 "prog_io.m"
    {
#line 293 "prog_io.m"
      parse_tree__prog_io__V_7_7 = mercury__term__context_init_0_f_0();
    }
#line 293 "prog_io.m"
    {
#line 293 "prog_io.m"
      MR_Word base;
#line 293 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 293 "prog_io.m"
      *parse_tree__prog_io__ParseTree_6 = base;
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__IntFileKind_4));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_7_7));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io.m"
    }
#line 292 "prog_io.m"
  }
#line 289 "prog_io.m"
}

#line 284 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_dummy_parse_tree_src_2_p_0(
#line 284 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_3,
#line 284 "prog_io.m"
  MR_Word * parse_tree__prog_io__ParseTree_4)
#line 284 "prog_io.m"
{
#line 286 "prog_io.m"
  {
#line 286 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 286 "prog_io.m"
    MR_Word parse_tree__prog_io__V_5_5;
#line 286 "prog_io.m"
    MR_Word parse_tree__prog_io__V_6_6;

#line 287 "prog_io.m"
    {
#line 287 "prog_io.m"
      parse_tree__prog_io__V_5_5 = mercury__term__context_init_0_f_0();
    }
#line 287 "prog_io.m"
    {
#line 287 "prog_io.m"
      parse_tree__prog_io__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0);
    }
#line 287 "prog_io.m"
    {
#line 287 "prog_io.m"
      MR_Word base;
#line 287 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 287 "prog_io.m"
      *parse_tree__prog_io__ParseTree_4 = base;
#line 287 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_3));
#line 287 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io__V_5_5));
#line 287 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__V_6_6));
#line 287 "prog_io.m"
    }
#line 286 "prog_io.m"
  }
#line 284 "prog_io.m"
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
#line 263 "prog_io.m"
  {
#line 263 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 261 "prog_io.m"
    {
#line 261 "prog_io.m"
      parse_tree__prog_io__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io__ActualName_7, parse_tree__prog_io__ExpectedName_6);
    }
#line 263 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 262 "prog_io.m"
      *parse_tree__prog_io__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 263 "prog_io.m"
    else
#line 267 "prog_io.m"
      {
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_9;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__Msg_10;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_11;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_15_15;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_16_16;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_43_43;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_44_44;
#line 267 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;

#line 264 "prog_io.m"
        {
#line 264 "prog_io.m"
          parse_tree__prog_io__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 264 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io__FileName_5));
#line 264 "prog_io.m"
        }
#line 266 "prog_io.m"
        {
#line 266 "prog_io.m"
          parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__ExpectedName_6));
#line 266 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__ActualName_7));
#line 267 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[7])));
#line 267 "prog_io.m"
        }
#line 267 "prog_io.m"
        {
#line 267 "prog_io.m"
          parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[75])));
#line 267 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 267 "prog_io.m"
        }
#line 266 "prog_io.m"
        {
#line 266 "prog_io.m"
          parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[74])));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 266 "prog_io.m"
        }
#line 266 "prog_io.m"
        {
#line 266 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 266 "prog_io.m"
        }
#line 266 "prog_io.m"
        {
#line 266 "prog_io.m"
          parse_tree__prog_io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[73])));
#line 266 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io__V_24_24));
#line 266 "prog_io.m"
        }
#line 265 "prog_io.m"
        {
#line 265 "prog_io.m"
          parse_tree__prog_io__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io__V_21_21));
#line 265 "prog_io.m"
        }
#line 265 "prog_io.m"
        {
#line 265 "prog_io.m"
          parse_tree__prog_io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[72])));
#line 265 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io__V_19_19));
#line 265 "prog_io.m"
        }
#line 264 "prog_io.m"
        {
#line 264 "prog_io.m"
          parse_tree__prog_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io__V_15_15));
#line 264 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io__V_16_16));
#line 264 "prog_io.m"
        }
#line 264 "prog_io.m"
        {
#line 264 "prog_io.m"
          parse_tree__prog_io__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[71])));
#line 264 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io__V_14_14));
#line 264 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_9));
#line 268 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io.m"
        }
#line 268 "prog_io.m"
        {
#line 268 "prog_io.m"
          parse_tree__prog_io__Msg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 2) = ((MR_Box) ((MR_Integer) 0));
#line 268 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 3) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 268 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__Msg_10));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io.m"
        }
#line 269 "prog_io.m"
        {
#line 269 "prog_io.m"
          parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 269 "prog_io.m"
        }
#line 270 "prog_io.m"
        {
#line 270 "prog_io.m"
          MR_Word base;
#line 270 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io.m"
          *parse_tree__prog_io__Specs_8 = base;
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 270 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "prog_io.m"
        }
#line 267 "prog_io.m"
      }
#line 263 "prog_io.m"
  }
#line 171 "prog_io.m"
}

#line 251 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_3(
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 251 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 251 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 251 "prog_io.m"
{
#line 251 "prog_io.m"
  {
#line 251 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 251 "prog_io.m"
    MR_Word parse_tree__prog_io__conv4_ParseTree_12;
#line 251 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_39;
#line 251 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_40;

#line 251 "prog_io.m"
    {
#line 251 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_opt_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv4_ParseTree_12, &parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_39, &parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_40);
    }
#line 251 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv4_ParseTree_12));
#line 251 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv3_STATE_VARIABLE_Specs_39));
#line 251 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Errors_40));
#line 251 "prog_io.m"
  }
#line 251 "prog_io.m"
}

#line 250 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_2(
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 250 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 250 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 250 "prog_io.m"
{
#line 250 "prog_io.m"
  {
#line 250 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 250 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_ParseTree_6;

#line 250 "prog_io.m"
    {
#line 250 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_opt_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_ParseTree_6);
    }
#line 250 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_ParseTree_6));
#line 250 "prog_io.m"
  }
#line 250 "prog_io.m"
}

#line 247 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_opt_9_p_0_1(
#line 247 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 247 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 247 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 247 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3)
#line 247 "prog_io.m"
{
#line 247 "prog_io.m"
  {
#line 247 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 247 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__4_4;

#line 247 "prog_io.m"
    {
#line 247 "prog_io.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 5))), &parse_tree__prog_io__conv0_HeadVar__4_4);
    }
#line 247 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__4_4));
#line 247 "prog_io.m"
  }
#line 247 "prog_io.m"
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
#line 245 "prog_io.m"
  {
#line 245 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__Dirs_18;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenFile_19;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSpecs_22;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_23;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__NameSpecs_24;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__V_30_30;
#line 245 "prog_io.m"
    MR_Word parse_tree__prog_io__V_31_31;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__V_21_21;
#line 248 "prog_io.m"
    MR_Box parse_tree__prog_io__conv5_ParseTreeOpt_14;
#line 253 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 253 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;
#line 253 "prog_io.m"
    MR_Word parse_tree__prog_io__V_36_36;
#line 253 "prog_io.m"
    MR_Word parse_tree__prog_io__V_37_37;

#line 246 "prog_io.m"
    {
#line 246 "prog_io.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__prog_io__Globals_11, (MR_Integer) 650, &parse_tree__prog_io__Dirs_18);
    }
#line 247 "prog_io.m"
    {
#line 247 "prog_io.m"
      parse_tree__prog_io__OpenFile_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 247 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_9[0]));
#line 247 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_1));
#line 247 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 247 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 3) = ((MR_Box) ((MR_Integer) 0));
#line 247 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 4) = ((MR_Box) (parse_tree__prog_io__Dirs_18));
#line 247 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_19, 5) = ((MR_Box) (parse_tree__prog_io__FileName_12));
#line 247 "prog_io.m"
    }
#line 250 "prog_io.m"
    {
#line 250 "prog_io.m"
      parse_tree__prog_io__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[1]));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_2));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 250 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 250 "prog_io.m"
    }
#line 251 "prog_io.m"
    {
#line 251 "prog_io.m"
      parse_tree__prog_io__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[1]));
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_opt_9_p_0_3));
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 251 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, 3) = ((MR_Box) (parse_tree__prog_io__OptFileKind_10));
#line 251 "prog_io.m"
    }
#line 248 "prog_io.m"
    {
#line 248 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_11, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__OpenFile_19, &parse_tree__prog_io__V_20_20, (MR_Word) &parse_tree__prog_io_scalar_common_3[1], &parse_tree__prog_io__V_21_21, parse_tree__prog_io__V_30_30, parse_tree__prog_io__V_31_31, &parse_tree__prog_io__conv5_ParseTreeOpt_14, &parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__Errors_16);
    }
#line 248 "prog_io.m"
    *parse_tree__prog_io__ParseTreeOpt_14 = ((MR_Word) parse_tree__prog_io__conv5_ParseTreeOpt_14);
#line 253 "prog_io.m"
    parse_tree__prog_io__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 0)));
#line 253 "prog_io.m"
    parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 1)));
#line 253 "prog_io.m"
    parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 2)));
#line 253 "prog_io.m"
    parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 3)));
#line 253 "prog_io.m"
    parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__prog_io__ParseTreeOpt_14, (MR_Integer) 4)));
#line 254 "prog_io.m"
    {
#line 254 "prog_io.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(parse_tree__prog_io__FileName_12, parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__ModuleName_23, &parse_tree__prog_io__NameSpecs_24);
    }
#line 256 "prog_io.m"
    {
#line 256 "prog_io.m"
      *parse_tree__prog_io__Specs_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_22, parse_tree__prog_io__NameSpecs_24);
    }
#line 245 "prog_io.m"
  }
#line 151 "prog_io.m"
}

#line 239 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_2(
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_4,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_5,
#line 239 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_6,
#line 239 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_7)
#line 239 "prog_io.m"
{
#line 239 "prog_io.m"
  {
#line 239 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 239 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_ParseTree_12;
#line 239 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_41;
#line 239 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_42;

#line 239 "prog_io.m"
    {
#line 239 "prog_io.m"
      parse_tree__prog_io__read_parse_tree_int_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv3_ParseTree_12, &parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_41, &parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_42);
    }
#line 239 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv3_ParseTree_12));
#line 239 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io__conv2_STATE_VARIABLE_Specs_41));
#line 239 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io__conv1_STATE_VARIABLE_Errors_42));
#line 239 "prog_io.m"
  }
#line 239 "prog_io.m"
}

#line 238 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_module_int_12_p_0_1(
#line 238 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 238 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 238 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 238 "prog_io.m"
{
#line 238 "prog_io.m"
  {
#line 238 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 238 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_ParseTree_6;

#line 238 "prog_io.m"
    {
#line 238 "prog_io.m"
      parse_tree__prog_io__make_dummy_parse_tree_int_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_ParseTree_6);
    }
#line 238 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_ParseTree_6));
#line 238 "prog_io.m"
  }
#line 238 "prog_io.m"
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
#line 235 "prog_io.m"
  {
#line 235 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 235 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;
#line 235 "prog_io.m"
    MR_Word parse_tree__prog_io__V_27_27;
#line 236 "prog_io.m"
    MR_Box parse_tree__prog_io__conv4_ParseTree_20;

#line 238 "prog_io.m"
    {
#line 238 "prog_io.m"
      parse_tree__prog_io__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_7[0]));
#line 238 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_1));
#line 238 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 238 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 238 "prog_io.m"
    }
#line 239 "prog_io.m"
    {
#line 239 "prog_io.m"
      parse_tree__prog_io__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[0]));
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_module_int_12_p_0_2));
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, 3) = ((MR_Box) (parse_tree__prog_io__IntFileKind_13));
#line 239 "prog_io.m"
    }
#line 236 "prog_io.m"
    {
#line 236 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_44_32_50_93_95_48_13_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__OpenFile_16, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ReadModuleAndTimestamps_18, parse_tree__prog_io__MaybeModuleTimestampRes_19, parse_tree__prog_io__V_26_26, parse_tree__prog_io__V_27_27, &parse_tree__prog_io__conv4_ParseTree_20, parse_tree__prog_io__Specs_21, parse_tree__prog_io__Errors_22);
    }
#line 236 "prog_io.m"
    *parse_tree__prog_io__ParseTree_20 = ((MR_Word) parse_tree__prog_io__conv4_ParseTree_20);
#line 235 "prog_io.m"
  }
#line 135 "prog_io.m"
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
