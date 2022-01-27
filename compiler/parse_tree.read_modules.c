/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module parse_tree.read_modules. */
/* :- implementation. */

/*
INIT mercury__parse_tree__read_modules__init
ENDINIT
*/

#include "parse_tree.read_modules.mih"


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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_find.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 102 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 105 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 108 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 111 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 114 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5];

#line 117 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0;

#line 120 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1];

#line 123 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1];

#line 126 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1];

#line 129 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1];

#line 132 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0;

#line 135 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

#line 138 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

#line 141 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2];

#line 144 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0;

#line 147 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1];

#line 150 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1];

#line 153 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1];

#line 156 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1];

#line 159 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1;

#line 162 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

#line 165 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

#line 168 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0;

#line 171 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

#line 174 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

#line 177 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0;

#line 180 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

#line 183 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

#line 186 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3];

#line 189 "parse_tree.read_modules.c"
static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3];

#line 192 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0;

#line 195 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1];

#line 198 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1];

#line 201 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1];

#line 204 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1];

#line 207 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0;

#line 210 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1;

#line 213 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2];

#line 216 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2];

#line 219 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2];

#line 222 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
#line 225 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 227 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 229 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 232 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
#line 235 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 237 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 239 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 241 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4);

#line 244 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
#line 247 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 249 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 252 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
#line 255 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 257 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 259 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 262 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
#line 265 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 267 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 269 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 272 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
#line 275 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 277 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 279 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 281 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4);

#line 284 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
#line 287 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 289 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 291 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 293 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4);

#line 296 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
#line 299 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 301 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 303 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
#line 305 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4,
#line 307 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_5);

#line 310 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
#line 313 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 315 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 318 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
#line 321 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 323 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 325 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 328 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
#line 331 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 333 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 336 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
#line 339 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 341 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 343 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 346 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
#line 349 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 351 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 354 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
#line 357 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 359 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 361 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 364 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 367 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 369 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 372 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 375 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 377 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 379 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 471 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 471 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 471 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 471 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 471 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10);

#line 396 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 396 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15);

#line 353 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_17_p_0(
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_18,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_19,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_20,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_21,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_22,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleNameContext_23,
#line 353 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_24,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_25,
#line 353 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_26,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_27,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_28,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_29,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_30,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_31,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_32);

#line 311 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0_1(
#line 311 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 311 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 311 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 311 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3);

#line 262 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0_1(
#line 262 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 262 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 262 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 262 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3);

#line 244 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0_1(
#line 244 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 244 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 244 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 244 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[8][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[1][10];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][9];




static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[6])),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[7]))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0)),
    ((MR_Box) (&parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 595 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 603 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 612 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 620 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 628 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 637 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 = {
  (MR_String) "have_read_module",
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0,
  NULL,
  NULL,
  NULL
};

#line 652 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 657 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0
  }
};

#line 666 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 671 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1] = {
  (MR_Integer) 0
};

#line 676 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1
};

#line 693 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
  }
};

#line 701 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 709 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 718 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 735 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 741 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0 = {
  (MR_String) "have_read_module_key",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0,
  NULL,
  NULL,
  NULL
};

#line 756 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 761 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0
  }
};

#line 770 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 775 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1] = {
  (MR_Integer) 0
};

#line 780 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_key_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_key_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_key",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1
};

#line 797 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 805 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 813 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2
  }
};

#line 822 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_map_2_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_map_2_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 839 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0
  }
};

#line 847 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 855 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 864 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
  }
};

#line 872 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 880 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 889 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
};

#line 896 "parse_tree.read_modules.c"
static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3] = {
  (MR_String) "hrmm_src",
  (MR_String) "hrmm_int",
  (MR_String) "hrmm_opt"
};

#line 903 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0 = {
  (MR_String) "have_read_module_maps",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0,
  parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0,
  NULL,
  NULL
};

#line 918 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 923 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0
  }
};

#line 932 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 937 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1] = {
  (MR_Integer) 0
};

#line 942 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_maps",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0
};

#line 959 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_opt_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_opt_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 976 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_src_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 993 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  (MR_Integer) 0
};

#line 999 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  (MR_Integer) 1
};

#line 1005 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

#line 1011 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

#line 1017 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1023 "parse_tree.read_modules.c"
const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "maybe_ignore_errors",
  {     parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0
};

#line 1040 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
#line 1043 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1045 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1047 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1049 "parse_tree.read_modules.c"
{
#line 1051 "parse_tree.read_modules.c"
  {
#line 1053 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1056 "parse_tree.read_modules.c"
    {
#line 1058 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1061 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1063 "parse_tree.read_modules.c"
  }
#line 1065 "parse_tree.read_modules.c"
}

#line 1068 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
#line 1071 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1073 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1075 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1077 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1079 "parse_tree.read_modules.c"
{
#line 1081 "parse_tree.read_modules.c"
  {
#line 1083 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1086 "parse_tree.read_modules.c"
    {
#line 1088 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1091 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1093 "parse_tree.read_modules.c"
  }
#line 1095 "parse_tree.read_modules.c"
}

#line 1098 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
#line 1101 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1103 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1105 "parse_tree.read_modules.c"
{
#line 1107 "parse_tree.read_modules.c"
  {
#line 1109 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1112 "parse_tree.read_modules.c"
    {
#line 1114 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_int_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1117 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1119 "parse_tree.read_modules.c"
  }
#line 1121 "parse_tree.read_modules.c"
}

#line 1124 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
#line 1127 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1129 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1131 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1133 "parse_tree.read_modules.c"
{
#line 1135 "parse_tree.read_modules.c"
  {
#line 1137 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1140 "parse_tree.read_modules.c"
    {
#line 1142 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_int_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1145 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1147 "parse_tree.read_modules.c"
  }
#line 1149 "parse_tree.read_modules.c"
}

#line 1152 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
#line 1155 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1157 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1159 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1161 "parse_tree.read_modules.c"
{
#line 1163 "parse_tree.read_modules.c"
  {
#line 1165 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1168 "parse_tree.read_modules.c"
    {
#line 1170 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1173 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1175 "parse_tree.read_modules.c"
  }
#line 1177 "parse_tree.read_modules.c"
}

#line 1180 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
#line 1183 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1185 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1187 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1189 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1191 "parse_tree.read_modules.c"
{
#line 1193 "parse_tree.read_modules.c"
  {
#line 1195 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1198 "parse_tree.read_modules.c"
    {
#line 1200 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1203 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1205 "parse_tree.read_modules.c"
  }
#line 1207 "parse_tree.read_modules.c"
}

#line 1210 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
#line 1213 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1215 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1217 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1219 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1221 "parse_tree.read_modules.c"
{
#line 1223 "parse_tree.read_modules.c"
  {
#line 1225 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1228 "parse_tree.read_modules.c"
    {
#line 1230 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1233 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1235 "parse_tree.read_modules.c"
  }
#line 1237 "parse_tree.read_modules.c"
}

#line 1240 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
#line 1243 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1245 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1247 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
#line 1249 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4,
#line 1251 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_5)
#line 1253 "parse_tree.read_modules.c"
{
#line 1255 "parse_tree.read_modules.c"
  {
#line 1257 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1260 "parse_tree.read_modules.c"
    {
#line 1262 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_4), ((MR_Word) parse_tree__read_modules__wrapper_arg_5));
    }
#line 1265 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_3 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1267 "parse_tree.read_modules.c"
  }
#line 1269 "parse_tree.read_modules.c"
}

#line 1272 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
#line 1275 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1277 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1279 "parse_tree.read_modules.c"
{
#line 1281 "parse_tree.read_modules.c"
  {
#line 1283 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1286 "parse_tree.read_modules.c"
    {
#line 1288 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1291 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1293 "parse_tree.read_modules.c"
  }
#line 1295 "parse_tree.read_modules.c"
}

#line 1298 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
#line 1301 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1303 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1305 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1307 "parse_tree.read_modules.c"
{
#line 1309 "parse_tree.read_modules.c"
  {
#line 1311 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1314 "parse_tree.read_modules.c"
    {
#line 1316 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_maps_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1319 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1321 "parse_tree.read_modules.c"
  }
#line 1323 "parse_tree.read_modules.c"
}

#line 1326 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
#line 1329 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1331 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1333 "parse_tree.read_modules.c"
{
#line 1335 "parse_tree.read_modules.c"
  {
#line 1337 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1340 "parse_tree.read_modules.c"
    {
#line 1342 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1345 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1347 "parse_tree.read_modules.c"
  }
#line 1349 "parse_tree.read_modules.c"
}

#line 1352 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
#line 1355 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1357 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1359 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1361 "parse_tree.read_modules.c"
{
#line 1363 "parse_tree.read_modules.c"
  {
#line 1365 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1368 "parse_tree.read_modules.c"
    {
#line 1370 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1373 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1375 "parse_tree.read_modules.c"
  }
#line 1377 "parse_tree.read_modules.c"
}

#line 1380 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
#line 1383 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1385 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1387 "parse_tree.read_modules.c"
{
#line 1389 "parse_tree.read_modules.c"
  {
#line 1391 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1394 "parse_tree.read_modules.c"
    {
#line 1396 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1399 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1401 "parse_tree.read_modules.c"
  }
#line 1403 "parse_tree.read_modules.c"
}

#line 1406 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
#line 1409 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1411 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1413 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1415 "parse_tree.read_modules.c"
{
#line 1417 "parse_tree.read_modules.c"
  {
#line 1419 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1422 "parse_tree.read_modules.c"
    {
#line 1424 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1427 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1429 "parse_tree.read_modules.c"
  }
#line 1431 "parse_tree.read_modules.c"
}

#line 1434 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 1437 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1439 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1441 "parse_tree.read_modules.c"
{
#line 1443 "parse_tree.read_modules.c"
  {
#line 1445 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1448 "parse_tree.read_modules.c"
    {
#line 1450 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1453 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1455 "parse_tree.read_modules.c"
  }
#line 1457 "parse_tree.read_modules.c"
}

#line 1460 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 1463 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1465 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1467 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1469 "parse_tree.read_modules.c"
{
#line 1471 "parse_tree.read_modules.c"
  {
#line 1473 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1476 "parse_tree.read_modules.c"
    {
#line 1478 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1481 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1483 "parse_tree.read_modules.c"
  }
#line 1485 "parse_tree.read_modules.c"
}

#line 83 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
#line 83 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 83 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 83 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 83 "read_modules.m"
{
#line 83 "read_modules.m"
  {
#line 83 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 83 "read_modules.m"
    MR_Integer parse_tree__read_modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 83 "read_modules.m"
    MR_Integer parse_tree__read_modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 83 "read_modules.m"
    {
#line 83 "read_modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__Cast_HeadVar1_4, parse_tree__read_modules__Cast_HeadVar2_5);
#line 83 "read_modules.m"
      return;
    }
#line 83 "read_modules.m"
  }
#line 83 "read_modules.m"
}

#line 83 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
#line 83 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_1,
#line 83 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 83 "read_modules.m"
{
#line 1529 "parse_tree.read_modules.c"
  {
#line 1531 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded = (parse_tree__read_modules__HeadVar__2_1 == parse_tree__read_modules__HeadVar__2_2);

#line 1534 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1536 "parse_tree.read_modules.c"
  }
#line 83 "read_modules.m"
}

#line 59 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0(
#line 59 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 59 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 59 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 59 "read_modules.m"
{
#line 59 "read_modules.m"
  {
#line 59 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 59 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 59 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 59 "read_modules.m"
    {
#line 59 "read_modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
#line 59 "read_modules.m"
      return;
    }
#line 59 "read_modules.m"
  }
#line 59 "read_modules.m"
}

#line 59 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0(
#line 59 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 59 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 59 "read_modules.m"
{
#line 59 "read_modules.m"
  {
#line 59 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 59 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 59 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 59 "read_modules.m"
    {
#line 59 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
#line 59 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 59 "read_modules.m"
  }
#line 59 "read_modules.m"
}

#line 63 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(
#line 63 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 63 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 63 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 63 "read_modules.m"
{
#line 63 "read_modules.m"
  {
#line 63 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 63 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 63 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 63 "read_modules.m"
    {
#line 63 "read_modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
#line 63 "read_modules.m"
      return;
    }
#line 63 "read_modules.m"
  }
#line 63 "read_modules.m"
}

#line 63 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(
#line 63 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 63 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 63 "read_modules.m"
{
#line 63 "read_modules.m"
  {
#line 63 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 63 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 63 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 63 "read_modules.m"
    {
#line 63 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
#line 63 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 63 "read_modules.m"
  }
#line 63 "read_modules.m"
}

#line 52 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0(
#line 52 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 52 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 52 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 52 "read_modules.m"
{
#line 52 "read_modules.m"
  {
#line 52 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 52 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_12 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 52 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_13 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 52 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_12 == parse_tree__read_modules__CastY_13);
#line 52 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 1689 "parse_tree.read_modules.c"
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
#line 52 "read_modules.m"
    else
#line 52 "read_modules.m"
      {
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 2)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_10_10;

#line 52 "read_modules.m"
        {
#line 52 "read_modules.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], &parse_tree__read_modules__V_10_10, ((MR_Box) (parse_tree__read_modules__V_4_4)), ((MR_Box) (parse_tree__read_modules__V_7_7)));
        }
#line 1715 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_10_10 == (MR_Integer) 0);
#line 52 "read_modules.m"
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 52 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_10_10;
#line 52 "read_modules.m"
        else
#line 52 "read_modules.m"
          {
#line 52 "read_modules.m"
            MR_Word parse_tree__read_modules__V_11_11;

#line 52 "read_modules.m"
            {
#line 52 "read_modules.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], &parse_tree__read_modules__V_11_11, ((MR_Box) (parse_tree__read_modules__V_5_5)), ((MR_Box) (parse_tree__read_modules__V_8_8)));
            }
#line 1735 "parse_tree.read_modules.c"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_11_11 == (MR_Integer) 0);
#line 52 "read_modules.m"
            parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 52 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
              *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_11_11;
#line 52 "read_modules.m"
            else
#line 52 "read_modules.m"
              {
#line 52 "read_modules.m"
                {
#line 52 "read_modules.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__V_6_6)), ((MR_Box) (parse_tree__read_modules__V_9_9)));
#line 52 "read_modules.m"
                  return;
                }
#line 52 "read_modules.m"
              }
#line 52 "read_modules.m"
          }
#line 52 "read_modules.m"
      }
#line 52 "read_modules.m"
  }
#line 52 "read_modules.m"
}

#line 52 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0(
#line 52 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 52 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 52 "read_modules.m"
{
#line 52 "read_modules.m"
  {
#line 52 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 52 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_9 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
#line 52 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_10 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

#line 52 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_9 == parse_tree__read_modules__CastY_10);
#line 52 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
      parse_tree__read_modules__succeeded = MR_TRUE;
#line 52 "read_modules.m"
    else
#line 52 "read_modules.m"
      {
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_12_12;
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_13_13;
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 2)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));

#line 1810 "parse_tree.read_modules.c"
        {
#line 1812 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__V_3_3)), ((MR_Box) (parse_tree__read_modules__V_6_6)));
        }
#line 52 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
          {
#line 1819 "parse_tree.read_modules.c"
            parse_tree__read_modules__TypeInfo_12_12 = (MR_Word) &parse_tree__read_modules_scalar_common_2[0];
#line 1821 "parse_tree.read_modules.c"
            {
#line 1823 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_12_12, ((MR_Box) (parse_tree__read_modules__V_4_4)), ((MR_Box) (parse_tree__read_modules__V_7_7)));
            }
#line 52 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
              {
#line 1830 "parse_tree.read_modules.c"
                parse_tree__read_modules__TypeInfo_13_13 = (MR_Word) &parse_tree__read_modules_scalar_common_2[2];
#line 1832 "parse_tree.read_modules.c"
                {
#line 1834 "parse_tree.read_modules.c"
                  return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_13_13, ((MR_Box) (parse_tree__read_modules__V_5_5)), ((MR_Box) (parse_tree__read_modules__V_8_8)));
                }
#line 52 "read_modules.m"
              }
#line 52 "read_modules.m"
          }
#line 52 "read_modules.m"
      }
#line 52 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 52 "read_modules.m"
  }
#line 52 "read_modules.m"
}

#line 66 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0(
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_6,
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_7,
#line 66 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 66 "read_modules.m"
{
#line 66 "read_modules.m"
  {
#line 66 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_9_9;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_11_11;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 1878 "parse_tree.read_modules.c"
    {
#line 1880 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1882 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1884 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_6));
#line 1886 "parse_tree.read_modules.c"
    }
#line 1888 "parse_tree.read_modules.c"
    {
#line 1890 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1892 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1894 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_7));
#line 1896 "parse_tree.read_modules.c"
    }
#line 66 "read_modules.m"
    {
#line 66 "read_modules.m"
      mercury__tree234____Compare____tree234_2_0(parse_tree__read_modules__TypeInfo_9_9, parse_tree__read_modules__TypeInfo_11_11, parse_tree__read_modules__HeadVar__1_1, (MR_Word) parse_tree__read_modules__Cast_HeadVar1_4, (MR_Word) parse_tree__read_modules__Cast_HeadVar2_5);
#line 66 "read_modules.m"
      return;
    }
#line 66 "read_modules.m"
  }
#line 66 "read_modules.m"
}

#line 66 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0(
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_5,
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_6,
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 66 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 66 "read_modules.m"
{
#line 66 "read_modules.m"
  {
#line 66 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_8_8;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_10_10;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 66 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 1936 "parse_tree.read_modules.c"
    {
#line 1938 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1940 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1942 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_5));
#line 1944 "parse_tree.read_modules.c"
    }
#line 1946 "parse_tree.read_modules.c"
    {
#line 1948 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1950 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1952 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_6));
#line 1954 "parse_tree.read_modules.c"
    }
#line 66 "read_modules.m"
    {
#line 66 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__tree234____Unify____tree234_2_0(parse_tree__read_modules__TypeInfo_8_8, parse_tree__read_modules__TypeInfo_10_10, (MR_Word) parse_tree__read_modules__Cast_HeadVar1_3, (MR_Word) parse_tree__read_modules__Cast_HeadVar2_4);
    }
#line 66 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 66 "read_modules.m"
  }
#line 66 "read_modules.m"
}

#line 69 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0(
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_11,
#line 69 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 69 "read_modules.m"
{
#line 69 "read_modules.m"
  {
#line 69 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 69 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_9 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 69 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_10 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 69 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_9 == parse_tree__read_modules__CastY_10);
#line 69 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 1994 "parse_tree.read_modules.c"
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "read_modules.m"
    else
#line 69 "read_modules.m"
      {
#line 69 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "read_modules.m"
        MR_Box parse_tree__read_modules__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1));
#line 69 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "read_modules.m"
        MR_Box parse_tree__read_modules__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1));
#line 69 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8;

#line 69 "read_modules.m"
        {
#line 69 "read_modules.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__read_modules__V_8_8, parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_6_6);
        }
#line 2016 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_8_8 == (MR_Integer) 0);
#line 69 "read_modules.m"
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 69 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 69 "read_modules.m"
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_8_8;
#line 69 "read_modules.m"
        else
#line 69 "read_modules.m"
          {
#line 69 "read_modules.m"
            mercury__builtin__compare_3_p_0(parse_tree__read_modules__TypeInfo_for_FK_11, parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_7_7);
#line 69 "read_modules.m"
            return;
          }
#line 69 "read_modules.m"
      }
#line 69 "read_modules.m"
  }
#line 69 "read_modules.m"
}

#line 69 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0(
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_9,
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 69 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 69 "read_modules.m"
{
#line 69 "read_modules.m"
  {
#line 69 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 69 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_7 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
#line 69 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_8 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

#line 69 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_7 == parse_tree__read_modules__CastY_8);
#line 69 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 69 "read_modules.m"
      parse_tree__read_modules__succeeded = MR_TRUE;
#line 69 "read_modules.m"
    else
#line 69 "read_modules.m"
      {
#line 69 "read_modules.m"
        MR_Word parse_tree__read_modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "read_modules.m"
        MR_Box parse_tree__read_modules__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1));
#line 69 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "read_modules.m"
        MR_Box parse_tree__read_modules__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1));

#line 2079 "parse_tree.read_modules.c"
        {
#line 2081 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_5_5);
        }
#line 69 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 2086 "parse_tree.read_modules.c"
          {
#line 2088 "parse_tree.read_modules.c"
            return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_FK_9, parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_6_6);
          }
#line 69 "read_modules.m"
      }
#line 69 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 69 "read_modules.m"
  }
#line 69 "read_modules.m"
}

#line 61 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0(
#line 61 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 61 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 61 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 61 "read_modules.m"
{
#line 61 "read_modules.m"
  {
#line 61 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 61 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 61 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 61 "read_modules.m"
    {
#line 61 "read_modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
#line 61 "read_modules.m"
      return;
    }
#line 61 "read_modules.m"
  }
#line 61 "read_modules.m"
}

#line 61 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0(
#line 61 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 61 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 61 "read_modules.m"
{
#line 61 "read_modules.m"
  {
#line 61 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 61 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 61 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 61 "read_modules.m"
    {
#line 61 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
#line 61 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 61 "read_modules.m"
  }
#line 61 "read_modules.m"
}

#line 72 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0(
#line 72 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_20,
#line 72 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 72 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 72 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 72 "read_modules.m"
{
#line 72 "read_modules.m"
  {
#line 72 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 72 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_18 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 72 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_19 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 72 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_18 == parse_tree__read_modules__CastY_19);
#line 72 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 2188 "parse_tree.read_modules.c"
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "read_modules.m"
    else
#line 72 "read_modules.m"
      {
#line 72 "read_modules.m"
        MR_String parse_tree__read_modules__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "read_modules.m"
        MR_Box parse_tree__read_modules__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));
#line 72 "read_modules.m"
        MR_String parse_tree__read_modules__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "read_modules.m"
        MR_Box parse_tree__read_modules__V_11_11 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 2));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 3)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 4)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_14_14;

#line 72 "read_modules.m"
        {
#line 72 "read_modules.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__read_modules__V_14_14, parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_9_9);
        }
#line 2222 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_14_14 == (MR_Integer) 0);
#line 72 "read_modules.m"
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 72 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_14_14;
#line 72 "read_modules.m"
        else
#line 72 "read_modules.m"
          {
#line 72 "read_modules.m"
            MR_Word parse_tree__read_modules__V_15_15;

#line 72 "read_modules.m"
            {
#line 72 "read_modules.m"
              parse_tree__module_imports____Compare____module_timestamp_0_0(&parse_tree__read_modules__V_15_15, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_10_10);
            }
#line 2242 "parse_tree.read_modules.c"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_15_15 == (MR_Integer) 0);
#line 72 "read_modules.m"
            parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 72 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
              *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_15_15;
#line 72 "read_modules.m"
            else
#line 72 "read_modules.m"
              {
#line 72 "read_modules.m"
                MR_Word parse_tree__read_modules__V_16_16;

#line 72 "read_modules.m"
                {
#line 72 "read_modules.m"
                  mercury__builtin__compare_3_p_0(parse_tree__read_modules__TypeInfo_for_PT_20, &parse_tree__read_modules__V_16_16, parse_tree__read_modules__V_6_6, parse_tree__read_modules__V_11_11);
                }
#line 2262 "parse_tree.read_modules.c"
                parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_16_16 == (MR_Integer) 0);
#line 72 "read_modules.m"
                parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 72 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                  *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_16_16;
#line 72 "read_modules.m"
                else
#line 72 "read_modules.m"
                  {
#line 72 "read_modules.m"
                    MR_Word parse_tree__read_modules__V_17_17;

#line 72 "read_modules.m"
                    {
#line 72 "read_modules.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[4], &parse_tree__read_modules__V_17_17, ((MR_Box) (parse_tree__read_modules__V_7_7)), ((MR_Box) (parse_tree__read_modules__V_12_12)));
                    }
#line 2282 "parse_tree.read_modules.c"
                    parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_17_17 == (MR_Integer) 0);
#line 72 "read_modules.m"
                    parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 72 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                      *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_17_17;
#line 72 "read_modules.m"
                    else
#line 72 "read_modules.m"
                      {
#line 72 "read_modules.m"
                        {
#line 72 "read_modules.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[5], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__V_8_8)), ((MR_Box) (parse_tree__read_modules__V_13_13)));
#line 72 "read_modules.m"
                          return;
                        }
#line 72 "read_modules.m"
                      }
#line 72 "read_modules.m"
                  }
#line 72 "read_modules.m"
              }
#line 72 "read_modules.m"
          }
#line 72 "read_modules.m"
      }
#line 72 "read_modules.m"
  }
#line 72 "read_modules.m"
}

#line 72 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0(
#line 72 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_15,
#line 72 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 72 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 72 "read_modules.m"
{
#line 72 "read_modules.m"
  {
#line 72 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 72 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_13 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
#line 72 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_14 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

#line 72 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_13 == parse_tree__read_modules__CastY_14);
#line 72 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
      parse_tree__read_modules__succeeded = MR_TRUE;
#line 72 "read_modules.m"
    else
#line 72 "read_modules.m"
      {
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_17_17;
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_18_18;
#line 72 "read_modules.m"
        MR_String parse_tree__read_modules__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "read_modules.m"
        MR_Box parse_tree__read_modules__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 2));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 3)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 4)));
#line 72 "read_modules.m"
        MR_String parse_tree__read_modules__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "read_modules.m"
        MR_Box parse_tree__read_modules__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
#line 72 "read_modules.m"
        MR_Word parse_tree__read_modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));

#line 2371 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (strcmp(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_8_8) == 0);
#line 72 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
          {
#line 2377 "parse_tree.read_modules.c"
            {
#line 2379 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_9_9);
            }
#line 72 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
              {
#line 2386 "parse_tree.read_modules.c"
                {
#line 2388 "parse_tree.read_modules.c"
                  parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_PT_15, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_10_10);
                }
#line 72 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                  {
#line 2395 "parse_tree.read_modules.c"
                    parse_tree__read_modules__TypeInfo_17_17 = (MR_Word) &parse_tree__read_modules_scalar_common_1[4];
#line 2397 "parse_tree.read_modules.c"
                    {
#line 2399 "parse_tree.read_modules.c"
                      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_17_17, ((MR_Box) (parse_tree__read_modules__V_6_6)), ((MR_Box) (parse_tree__read_modules__V_11_11)));
                    }
#line 72 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                      {
#line 2406 "parse_tree.read_modules.c"
                        parse_tree__read_modules__TypeInfo_18_18 = (MR_Word) &parse_tree__read_modules_scalar_common_1[5];
#line 2408 "parse_tree.read_modules.c"
                        {
#line 2410 "parse_tree.read_modules.c"
                          return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_18_18, ((MR_Box) (parse_tree__read_modules__V_7_7)), ((MR_Box) (parse_tree__read_modules__V_12_12)));
                        }
#line 72 "read_modules.m"
                      }
#line 72 "read_modules.m"
                  }
#line 72 "read_modules.m"
              }
#line 72 "read_modules.m"
          }
#line 72 "read_modules.m"
      }
#line 72 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 72 "read_modules.m"
  }
#line 72 "read_modules.m"
}

#line 471 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 471 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 471 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 471 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 471 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10)
#line 471 "read_modules.m"
{
#line 477 "read_modules.m"
  {
#line 477 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 477 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "read_modules.m"
    else
#line 477 "read_modules.m"
      {
#line 477 "read_modules.m"
        MR_Word parse_tree__read_modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_9, (MR_Integer) 0)));

#line 477 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 480 "read_modules.m"
          {
#line 480 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));
#line 480 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_14;

#line 481 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "read_modules.m"
            {
#line 482 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_14);
            }
#line 489 "read_modules.m"
#line 489 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_14) {
#line 489 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 489 "read_modules.m"
              case (MR_Integer) 0:
#line 490 "read_modules.m"
                {
#line 490 "read_modules.m"
                }
#line 489 "read_modules.m"
                break;
#line 489 "read_modules.m"
              case (MR_Integer) 1:
#line 500 "read_modules.m"
                {
#line 500 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_28;

#line 501 "read_modules.m"
                  {
#line 501 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 502 "read_modules.m"
                  {
#line 502 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 503 "read_modules.m"
                  {
#line 503 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 23, &parse_tree__read_modules__Warn_28);
                  }
#line 521 "read_modules.m"
#line 521 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_28) {
#line 521 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 521 "read_modules.m"
                    case (MR_Integer) 0:
#line 522 "read_modules.m"
                      {
#line 522 "read_modules.m"
                      }
#line 521 "read_modules.m"
                      break;
#line 521 "read_modules.m"
                    case (MR_Integer) 1:
#line 505 "read_modules.m"
                      {
#line 505 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_29;
#line 505 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_30;

#line 506 "read_modules.m"
                        {
#line 506 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 507 "read_modules.m"
                        {
#line 507 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName_8);
                        }
#line 508 "read_modules.m"
                        {
#line 508 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 509 "read_modules.m"
                        {
#line 509 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_13, &parse_tree__read_modules__Msg_29);
                        }
#line 510 "read_modules.m"
                        {
#line 510 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 511 "read_modules.m"
                        {
#line 511 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_29);
                        }
#line 512 "read_modules.m"
                        {
#line 512 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 513 "read_modules.m"
                        {
#line 513 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 514 "read_modules.m"
                        {
#line 514 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_30);
                        }
#line 518 "read_modules.m"
#line 518 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_30) {
#line 518 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 518 "read_modules.m"
                          case (MR_Integer) 0:
#line 519 "read_modules.m"
                            {
#line 519 "read_modules.m"
                            }
#line 518 "read_modules.m"
                            break;
#line 518 "read_modules.m"
                          case (MR_Integer) 1:
#line 516 "read_modules.m"
                            {
#line 517 "read_modules.m"
                              {
#line 517 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 517 "read_modules.m"
                                return;
                              }
#line 516 "read_modules.m"
                            }
#line 518 "read_modules.m"
                            break;
#line 518 "read_modules.m"
                        }
#line 505 "read_modules.m"
                      }
#line 521 "read_modules.m"
                      break;
#line 521 "read_modules.m"
                  }
#line 500 "read_modules.m"
                }
#line 489 "read_modules.m"
                break;
#line 489 "read_modules.m"
            }
#line 480 "read_modules.m"
          }
#line 477 "read_modules.m"
        else
#line 477 "read_modules.m"
          {
#line 477 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));

#line 478 "read_modules.m"
            {
#line 478 "read_modules.m"
              MR_Word base;
#line 478 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_10 = base;
#line 478 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_12));
#line 478 "read_modules.m"
            }
#line 477 "read_modules.m"
          }
#line 477 "read_modules.m"
      }
#line 477 "read_modules.m"
  }
#line 471 "read_modules.m"
}

#line 396 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 396 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 396 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15)
#line 396 "read_modules.m"
{
#line 403 "read_modules.m"
  {
#line 403 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 401 "read_modules.m"
    {
#line 401 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_10);
    }
#line 403 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 402 "read_modules.m"
      {
#line 402 "read_modules.m"
        {
#line 402 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "successful parse.\n");
        }
#line 402 "read_modules.m"
        *parse_tree__read_modules__STATE_VARIABLE_Specs_15 = parse_tree__read_modules__STATE_VARIABLE_Specs_0_14;
#line 402 "read_modules.m"
      }
#line 403 "read_modules.m"
    else
#line 404 "read_modules.m"
      {
#line 404 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_30;
#line 404 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_13;
#line 404 "read_modules.m"
        MR_Word parse_tree__read_modules__V_20_20;

#line 404 "read_modules.m"
        {
#line 404 "read_modules.m"
          parse_tree__read_modules__V_20_20 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 2703 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 404 "read_modules.m"
        {
#line 404 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__Errors_10, parse_tree__read_modules__V_20_20, &parse_tree__read_modules__FatalErrors_13);
        }
#line 405 "read_modules.m"
        {
#line 405 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__FatalErrors_13);
        }
#line 407 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 406 "read_modules.m"
          {
#line 406 "read_modules.m"
            {
#line 406 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "parse error(s).\n");
            }
#line 406 "read_modules.m"
          }
#line 407 "read_modules.m"
        else
#line 408 "read_modules.m"
          {
#line 408 "read_modules.m"
            {
#line 408 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "fatal error(s).\n");
            }
#line 408 "read_modules.m"
          }
#line 410 "read_modules.m"
        {
#line 410 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_9, parse_tree__read_modules__Globals_8, parse_tree__read_modules__STATE_VARIABLE_Specs_0_14, parse_tree__read_modules__STATE_VARIABLE_Specs_15);
        }
#line 411 "read_modules.m"
        {
#line 411 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 411 "read_modules.m"
          return;
        }
#line 404 "read_modules.m"
      }
#line 403 "read_modules.m"
  }
#line 396 "read_modules.m"
}

#line 353 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_17_p_0(
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_18,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_19,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_20,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_21,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_22,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleNameContext_23,
#line 353 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_24,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_25,
#line 353 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_26,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_27,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_28,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_29,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_30,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_31,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_32)
#line 353 "read_modules.m"
{
#line 363 "read_modules.m"
  {
#line 363 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 363 "read_modules.m"
    MR_Word parse_tree__read_modules__NameSpecs_34;
#line 363 "read_modules.m"
    MR_Word parse_tree__read_modules__V_39_39;

#line 366 "read_modules.m"
    if ((parse_tree__read_modules__MaybeFileName_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "read_modules.m"
      *parse_tree__read_modules__FileName_26 = parse_tree__read_modules__FileName0_24;
#line 366 "read_modules.m"
    else
#line 365 "read_modules.m"
      *parse_tree__read_modules__FileName_26 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeFileName_25, (MR_Integer) 0)));
#line 371 "read_modules.m"
    {
#line 371 "read_modules.m"
      parse_tree__read_modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "read_modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_39_39, 0) = ((MR_Box) (parse_tree__read_modules__ActualModuleNameContext_23));
#line 371 "read_modules.m"
    }
#line 370 "read_modules.m"
    {
#line 370 "read_modules.m"
      parse_tree__prog_io__check_module_has_expected_name_6_p_0((MR_Integer) 1, *parse_tree__read_modules__FileName_26, parse_tree__read_modules__ModuleName_21, parse_tree__read_modules__ActualModuleName_22, parse_tree__read_modules__V_39_39, &parse_tree__read_modules__NameSpecs_34);
    }
#line 477 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "read_modules.m"
    else
#line 477 "read_modules.m"
      {
#line 477 "read_modules.m"
        MR_Word parse_tree__read_modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_27, (MR_Integer) 0)));

#line 477 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_64_64)) == (MR_mktag((MR_Integer) 1))))
#line 480 "read_modules.m"
          {
#line 480 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_64_64, (MR_Integer) 0)));
#line 480 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_59;

#line 481 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "read_modules.m"
            {
#line 482 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_18, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_59);
            }
#line 489 "read_modules.m"
#line 489 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_59) {
#line 489 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 489 "read_modules.m"
              case (MR_Integer) 0:
#line 490 "read_modules.m"
                {
#line 490 "read_modules.m"
                }
#line 489 "read_modules.m"
                break;
#line 489 "read_modules.m"
              case (MR_Integer) 1:
#line 500 "read_modules.m"
                {
#line 500 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_71;

#line 501 "read_modules.m"
                  {
#line 501 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 502 "read_modules.m"
                  {
#line 502 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 503 "read_modules.m"
                  {
#line 503 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_18, (MR_Integer) 23, &parse_tree__read_modules__Warn_71);
                  }
#line 521 "read_modules.m"
#line 521 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_71) {
#line 521 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 521 "read_modules.m"
                    case (MR_Integer) 0:
#line 522 "read_modules.m"
                      {
#line 522 "read_modules.m"
                      }
#line 521 "read_modules.m"
                      break;
#line 521 "read_modules.m"
                    case (MR_Integer) 1:
#line 505 "read_modules.m"
                      {
#line 505 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_72;
#line 505 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_73;

#line 506 "read_modules.m"
                        {
#line 506 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 507 "read_modules.m"
                        {
#line 507 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName0_24);
                        }
#line 508 "read_modules.m"
                        {
#line 508 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 509 "read_modules.m"
                        {
#line 509 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_58, &parse_tree__read_modules__Msg_72);
                        }
#line 510 "read_modules.m"
                        {
#line 510 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 511 "read_modules.m"
                        {
#line 511 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_72);
                        }
#line 512 "read_modules.m"
                        {
#line 512 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 513 "read_modules.m"
                        {
#line 513 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 514 "read_modules.m"
                        {
#line 514 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_18, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_73);
                        }
#line 518 "read_modules.m"
#line 518 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_73) {
#line 518 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 518 "read_modules.m"
                          case (MR_Integer) 0:
#line 519 "read_modules.m"
                            {
#line 519 "read_modules.m"
                            }
#line 518 "read_modules.m"
                            break;
#line 518 "read_modules.m"
                          case (MR_Integer) 1:
#line 516 "read_modules.m"
                            {
#line 517 "read_modules.m"
                              {
#line 517 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                              }
#line 516 "read_modules.m"
                            }
#line 518 "read_modules.m"
                            break;
#line 518 "read_modules.m"
                        }
#line 505 "read_modules.m"
                      }
#line 521 "read_modules.m"
                      break;
#line 521 "read_modules.m"
                  }
#line 500 "read_modules.m"
                }
#line 489 "read_modules.m"
                break;
#line 489 "read_modules.m"
            }
#line 480 "read_modules.m"
          }
#line 477 "read_modules.m"
        else
#line 477 "read_modules.m"
          {
#line 477 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_64_64, (MR_Integer) 0)));

#line 478 "read_modules.m"
            {
#line 478 "read_modules.m"
              MR_Word base;
#line 478 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_28 = base;
#line 478 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_57));
#line 478 "read_modules.m"
            }
#line 477 "read_modules.m"
          }
#line 477 "read_modules.m"
      }
#line 389 "read_modules.m"
#line 389 "read_modules.m"
    switch (parse_tree__read_modules__IgnoreErrors_19) {
#line 389 "read_modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "read_modules.m"
      case (MR_Integer) 1:
#line 390 "read_modules.m"
        {
#line 390 "read_modules.m"
          MR_Word parse_tree__read_modules__ModuleNameSpecs_35;

#line 391 "read_modules.m"
          {
#line 391 "read_modules.m"
            parse_tree__read_modules__ModuleNameSpecs_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__read_modules__NameSpecs_34, parse_tree__read_modules__ModuleSpecs_30);
          }
#line 392 "read_modules.m"
          {
#line 392 "read_modules.m"
            parse_tree__read_modules__handle_any_read_module_errors_7_p_0(parse_tree__read_modules__Globals_18, parse_tree__read_modules__VeryVerbose_20, parse_tree__read_modules__Errors_32, parse_tree__read_modules__ModuleNameSpecs_35, parse_tree__read_modules__Specs_31);
#line 392 "read_modules.m"
            return;
          }
#line 390 "read_modules.m"
        }
#line 389 "read_modules.m"
        break;
#line 389 "read_modules.m"
      case (MR_Integer) 0:
#line 385 "read_modules.m"
        {
#line 377 "read_modules.m"
          {
#line 377 "read_modules.m"
            parse_tree__read_modules__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_32, ((MR_Box) ((MR_Integer) 0)));
          }
#line 377 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 381 "read_modules.m"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__IsEmpty_29 == (MR_Integer) 1);
#line 385 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 383 "read_modules.m"
            {
#line 383 "read_modules.m"
              {
#line 383 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_20, (MR_String) "not found.\n");
              }
#line 384 "read_modules.m"
              *parse_tree__read_modules__Specs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 383 "read_modules.m"
            }
#line 385 "read_modules.m"
          else
#line 386 "read_modules.m"
            {
#line 386 "read_modules.m"
              {
#line 386 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_20, (MR_String) "done.\n");
              }
#line 387 "read_modules.m"
              {
#line 387 "read_modules.m"
                *parse_tree__read_modules__Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__read_modules__NameSpecs_34, parse_tree__read_modules__ModuleSpecs_30);
              }
#line 386 "read_modules.m"
            }
#line 385 "read_modules.m"
        }
#line 389 "read_modules.m"
        break;
#line 389 "read_modules.m"
    }
#line 363 "read_modules.m"
  }
#line 353 "read_modules.m"
}

#line 211 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int_9_p_0(
#line 211 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_10,
#line 211 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_11,
#line 211 "read_modules.m"
  MR_Word parse_tree__read_modules__IntFileKind_12,
#line 211 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_13,
#line 211 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_14,
#line 211 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_15,
#line 211 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeInt_16,
#line 211 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_17,
#line 211 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_18)
#line 211 "read_modules.m"
{
#line 455 "read_modules.m"
  {
#line 455 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 455 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_19;
#line 455 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_20;
#line 455 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_21;
#line 457 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_20;

#line 456 "read_modules.m"
    {
#line 456 "read_modules.m"
      parse_tree__read_modules__Key_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 456 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_11));
#line 456 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 1) = ((MR_Box) (parse_tree__read_modules__IntFileKind_12));
#line 456 "read_modules.m"
    }
#line 457 "read_modules.m"
    {
#line 457 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[2], (MR_Word) &parse_tree__read_modules_scalar_common_1[3], parse_tree__read_modules__HaveReadModuleMap_10, ((MR_Box) (parse_tree__read_modules__Key_19)), &parse_tree__read_modules__conv0_HaveReadModule_20);
    }
#line 457 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 457 "read_modules.m"
      {
#line 457 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_20 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_20);
#line 457 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 457 "read_modules.m"
      }
#line 455 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 455 "read_modules.m"
      {
#line 458 "read_modules.m"
        *parse_tree__read_modules__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 0)));
#line 458 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 1)));
#line 458 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 2)));
#line 458 "read_modules.m"
        *parse_tree__read_modules__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 3)));
#line 458 "read_modules.m"
        *parse_tree__read_modules__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 4)));
#line 464 "read_modules.m"
#line 464 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_13) {
#line 464 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 464 "read_modules.m"
          case (MR_Integer) 0:
#line 461 "read_modules.m"
            {
#line 461 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 1)));
#line 462 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 0)));
#line 462 "read_modules.m"
              MR_Word parse_tree__read_modules__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 2)));

#line 463 "read_modules.m"
              {
#line 463 "read_modules.m"
                MR_Word base;
#line 463 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_15 = base;
#line 463 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_23));
#line 463 "read_modules.m"
              }
#line 461 "read_modules.m"
            }
#line 464 "read_modules.m"
            break;
#line 464 "read_modules.m"
          case (MR_Integer) 1:
#line 466 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "read_modules.m"
            break;
#line 464 "read_modules.m"
        }
#line 464 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 455 "read_modules.m"
      }
#line 455 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 455 "read_modules.m"
  }
#line 211 "read_modules.m"
}

#line 207 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_src_8_p_0(
#line 207 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_9,
#line 207 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_10,
#line 207 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_11,
#line 207 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_12,
#line 207 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_13,
#line 207 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeSrc_14,
#line 207 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_15,
#line 207 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_16)
#line 207 "read_modules.m"
{
#line 439 "read_modules.m"
  {
#line 439 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 439 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_17;
#line 439 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_18;
#line 439 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_19;
#line 441 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_18;

#line 440 "read_modules.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 440 "read_modules.m"
    {
#line 440 "read_modules.m"
      parse_tree__read_modules__Key_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_10));
#line 440 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 1) = NULL;
#line 440 "read_modules.m"
    }
#line 441 "read_modules.m"
    {
#line 441 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[0], (MR_Word) &parse_tree__read_modules_scalar_common_1[1], parse_tree__read_modules__HaveReadModuleMap_9, ((MR_Box) (parse_tree__read_modules__Key_17)), &parse_tree__read_modules__conv0_HaveReadModule_18);
    }
#line 441 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 441 "read_modules.m"
      {
#line 441 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_18 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_18);
#line 441 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 441 "read_modules.m"
      }
#line 439 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 439 "read_modules.m"
      {
#line 442 "read_modules.m"
        *parse_tree__read_modules__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 0)));
#line 442 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 1)));
#line 442 "read_modules.m"
        *parse_tree__read_modules__ParseTreeSrc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 2)));
#line 442 "read_modules.m"
        *parse_tree__read_modules__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 3)));
#line 442 "read_modules.m"
        *parse_tree__read_modules__Errors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 4)));
#line 448 "read_modules.m"
#line 448 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_11) {
#line 448 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 448 "read_modules.m"
          case (MR_Integer) 0:
#line 445 "read_modules.m"
            {
#line 445 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 1)));
#line 446 "read_modules.m"
              MR_Word parse_tree__read_modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 0)));
#line 446 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 2)));

#line 447 "read_modules.m"
              {
#line 447 "read_modules.m"
                MR_Word base;
#line 447 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 447 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_13 = base;
#line 447 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_21));
#line 447 "read_modules.m"
              }
#line 445 "read_modules.m"
            }
#line 448 "read_modules.m"
            break;
#line 448 "read_modules.m"
          case (MR_Integer) 1:
#line 450 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 448 "read_modules.m"
            break;
#line 448 "read_modules.m"
        }
#line 448 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 439 "read_modules.m"
      }
#line 439 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 439 "read_modules.m"
  }
#line 207 "read_modules.m"
}

#line 190 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__maybe_read_module_int_14_p_0(
#line 190 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_15,
#line 190 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_16,
#line 190 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_17,
#line 190 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_18,
#line 190 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_19,
#line 190 "read_modules.m"
  MR_Word parse_tree__read_modules__IntFileKind_20,
#line 190 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_21,
#line 190 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_22,
#line 190 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_23,
#line 190 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeInt_24,
#line 190 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_25,
#line 190 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_26)
#line 190 "read_modules.m"
{
#line 429 "read_modules.m"
  {
#line 429 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 429 "read_modules.m"
    MR_String parse_tree__read_modules__FileNamePrime_28;
#line 429 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampPrime_29;
#line 429 "read_modules.m"
    MR_Word parse_tree__read_modules__ParseTreeIntPrime_30;
#line 429 "read_modules.m"
    MR_Word parse_tree__read_modules__SpecsPrime_31;
#line 429 "read_modules.m"
    MR_Word parse_tree__read_modules__ErrorsPrime_32;

#line 420 "read_modules.m"
    {
#line 420 "read_modules.m"
      parse_tree__read_modules__succeeded = parse_tree__read_modules__find_read_module_int_9_p_0(parse_tree__read_modules__HaveReadModuleMap_16, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__ReturnTimestamp_22, &parse_tree__read_modules__FileNamePrime_28, &parse_tree__read_modules__MaybeTimestampPrime_29, &parse_tree__read_modules__ParseTreeIntPrime_30, &parse_tree__read_modules__SpecsPrime_31, &parse_tree__read_modules__ErrorsPrime_32);
    }
#line 429 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 424 "read_modules.m"
      {
#line 424 "read_modules.m"
        *parse_tree__read_modules__FileName_21 = parse_tree__read_modules__FileNamePrime_28;
#line 425 "read_modules.m"
        *parse_tree__read_modules__MaybeTimestamp_23 = parse_tree__read_modules__MaybeTimestampPrime_29;
#line 426 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_24 = parse_tree__read_modules__ParseTreeIntPrime_30;
#line 427 "read_modules.m"
        *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__SpecsPrime_31;
#line 428 "read_modules.m"
        *parse_tree__read_modules__Errors_26 = parse_tree__read_modules__ErrorsPrime_32;
#line 424 "read_modules.m"
      }
#line 429 "read_modules.m"
    else
#line 430 "read_modules.m"
      {
#line 430 "read_modules.m"
        MR_Word parse_tree__read_modules__V_36_36;

#line 432 "read_modules.m"
        {
#line 432 "read_modules.m"
          parse_tree__read_modules__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 432 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_36_36, 0) = ((MR_Box) (parse_tree__read_modules__ReturnTimestamp_22));
#line 432 "read_modules.m"
        }
#line 430 "read_modules.m"
        {
#line 430 "read_modules.m"
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__Descr_17, (MR_Integer) 1, parse_tree__read_modules__Search_18, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__FileName_21, parse_tree__read_modules__V_36_36, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__ParseTreeInt_24, parse_tree__read_modules__Specs_25, parse_tree__read_modules__Errors_26);
#line 430 "read_modules.m"
          return;
        }
#line 430 "read_modules.m"
      }
#line 429 "read_modules.m"
  }
#line 190 "read_modules.m"
}

#line 311 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0_1(
#line 311 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 311 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 311 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 311 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 311 "read_modules.m"
{
#line 311 "read_modules.m"
  {
#line 311 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 311 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__4_4;

#line 311 "read_modules.m"
    {
#line 311 "read_modules.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), &parse_tree__read_modules__conv0_HeadVar__4_4);
    }
#line 311 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__4_4));
#line 311 "read_modules.m"
  }
#line 311 "read_modules.m"
}

#line 172 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0(
#line 172 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_12,
#line 172 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_13,
#line 172 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_14,
#line 172 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_15,
#line 172 "read_modules.m"
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_16,
#line 172 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_17,
#line 172 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeSrc_18,
#line 172 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_19,
#line 172 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_20)
#line 172 "read_modules.m"
{
#line 288 "read_modules.m"
  {
#line 288 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 288 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_22;
#line 288 "read_modules.m"
    MR_String parse_tree__read_modules__FullFileName_23;
#line 288 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileName_25;
#line 288 "read_modules.m"
    MR_Word parse_tree__read_modules__DefaultModuleName_26;
#line 288 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_27;
#line 288 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_28;
#line 288 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampRes_30;
#line 288 "read_modules.m"
    MR_Word parse_tree__read_modules__Specs0_31;
#line 299 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileNamePrime_24;
#line 312 "read_modules.m"
    MR_Word parse_tree__read_modules__V_29_29;

#line 289 "read_modules.m"
    {
#line 289 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_22);
    }
#line 290 "read_modules.m"
    {
#line 290 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "% ");
    }
#line 291 "read_modules.m"
    {
#line 291 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Descr_14);
    }
#line 292 "read_modules.m"
    {
#line 292 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) " \140");
    }
#line 293 "read_modules.m"
    {
#line 293 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__FileName_13);
    }
#line 294 "read_modules.m"
    {
#line 294 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "\'... ");
    }
#line 295 "read_modules.m"
    {
#line 295 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_22);
    }
#line 296 "read_modules.m"
    {
#line 296 "read_modules.m"
      parse_tree__read_modules__FullFileName_23 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName_13, (MR_String) ".m");
    }
#line 297 "read_modules.m"
    {
#line 297 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__dir__basename_2_p_0(parse_tree__read_modules__FileName_13, &parse_tree__read_modules__BaseFileNamePrime_24);
    }
#line 299 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 298 "read_modules.m"
      parse_tree__read_modules__BaseFileName_25 = parse_tree__read_modules__BaseFileNamePrime_24;
#line 299 "read_modules.m"
    else
#line 300 "read_modules.m"
      parse_tree__read_modules__BaseFileName_25 = (MR_String) "";
#line 302 "read_modules.m"
    {
#line 302 "read_modules.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__read_modules__BaseFileName_25, &parse_tree__read_modules__DefaultModuleName_26);
    }
#line 307 "read_modules.m"
#line 307 "read_modules.m"
    switch (parse_tree__read_modules__Search_15) {
#line 307 "read_modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 307 "read_modules.m"
      case (MR_Integer) 1:
#line 308 "read_modules.m"
        {
#line 308 "read_modules.m"
          MR_String parse_tree__read_modules__V_45_45;

#line 309 "read_modules.m"
          {
#line 309 "read_modules.m"
            parse_tree__read_modules__V_45_45 = mercury__dir__this_directory_0_f_0();
          }
#line 309 "read_modules.m"
          {
#line 309 "read_modules.m"
            parse_tree__read_modules__SearchDirs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 0) = ((MR_Box) (parse_tree__read_modules__V_45_45));
#line 309 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "read_modules.m"
          }
#line 308 "read_modules.m"
        }
#line 307 "read_modules.m"
        break;
#line 307 "read_modules.m"
      case (MR_Integer) 0:
#line 304 "read_modules.m"
        {
#line 305 "read_modules.m"
          {
#line 305 "read_modules.m"
            libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 650, &parse_tree__read_modules__SearchDirs_27);
          }
#line 304 "read_modules.m"
        }
#line 307 "read_modules.m"
        break;
#line 307 "read_modules.m"
    }
#line 311 "read_modules.m"
    {
#line 311 "read_modules.m"
      parse_tree__read_modules__OpenFile_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 311 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
#line 311 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 1) = ((MR_Box) (parse_tree__read_modules__read_module_src_from_file_11_p_0_1));
#line 311 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 311 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 3) = ((MR_Box) ((MR_Integer) 0));
#line 311 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_27));
#line 311 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 5) = ((MR_Box) (parse_tree__read_modules__FullFileName_23));
#line 311 "read_modules.m"
    }
#line 312 "read_modules.m"
    {
#line 312 "read_modules.m"
      parse_tree__prog_io__actually_read_module_src_11_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_12, parse_tree__read_modules__DefaultModuleName_26, parse_tree__read_modules__OpenFile_28, &parse_tree__read_modules__V_29_29, parse_tree__read_modules__ReadModuleAndTimestamps_16, &parse_tree__read_modules__MaybeTimestampRes_30, parse_tree__read_modules__ParseTreeSrc_18, &parse_tree__read_modules__Specs0_31, parse_tree__read_modules__Errors_20);
    }
#line 315 "read_modules.m"
    {
#line 315 "read_modules.m"
      parse_tree__read_modules__check_timestamp_6_p_0(parse_tree__read_modules__Globals_12, parse_tree__read_modules__FullFileName_23, parse_tree__read_modules__MaybeTimestampRes_30, parse_tree__read_modules__MaybeTimestamp_17);
    }
#line 401 "read_modules.m"
    {
#line 401 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, *parse_tree__read_modules__Errors_20);
    }
#line 403 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 402 "read_modules.m"
      {
#line 402 "read_modules.m"
        {
#line 402 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "successful parse.\n");
        }
#line 402 "read_modules.m"
        *parse_tree__read_modules__Specs_19 = parse_tree__read_modules__Specs0_31;
#line 402 "read_modules.m"
      }
#line 403 "read_modules.m"
    else
#line 404 "read_modules.m"
      {
#line 404 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_78;
#line 404 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_65;
#line 404 "read_modules.m"
        MR_Word parse_tree__read_modules__V_68_68;

#line 404 "read_modules.m"
        {
#line 404 "read_modules.m"
          parse_tree__read_modules__V_68_68 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3688 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_78 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 404 "read_modules.m"
        {
#line 404 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, *parse_tree__read_modules__Errors_20, parse_tree__read_modules__V_68_68, &parse_tree__read_modules__FatalErrors_65);
        }
#line 405 "read_modules.m"
        {
#line 405 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, parse_tree__read_modules__FatalErrors_65);
        }
#line 407 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 406 "read_modules.m"
          {
#line 406 "read_modules.m"
            {
#line 406 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "parse error(s).\n");
            }
#line 406 "read_modules.m"
          }
#line 407 "read_modules.m"
        else
#line 408 "read_modules.m"
          {
#line 408 "read_modules.m"
            {
#line 408 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "fatal error(s).\n");
            }
#line 408 "read_modules.m"
          }
#line 410 "read_modules.m"
        {
#line 410 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Globals_12, parse_tree__read_modules__Specs0_31, parse_tree__read_modules__Specs_19);
        }
#line 411 "read_modules.m"
        {
#line 411 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 411 "read_modules.m"
          return;
        }
#line 404 "read_modules.m"
      }
#line 288 "read_modules.m"
  }
#line 172 "read_modules.m"
}

#line 262 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0_1(
#line 262 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 262 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 262 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 262 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 262 "read_modules.m"
{
#line 262 "read_modules.m"
  {
#line 262 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 262 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__4_4;

#line 262 "read_modules.m"
    {
#line 262 "read_modules.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), &parse_tree__read_modules__conv0_HeadVar__4_4);
    }
#line 262 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__4_4));
#line 262 "read_modules.m"
  }
#line 262 "read_modules.m"
}

#line 151 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0(
#line 151 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_15,
#line 151 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_16,
#line 151 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_17,
#line 151 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_18,
#line 151 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_19,
#line 151 "read_modules.m"
  MR_Word parse_tree__read_modules__IntFileKind_20,
#line 151 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_21,
#line 151 "read_modules.m"
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_22,
#line 151 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_23,
#line 151 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeInt_24,
#line 151 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_25,
#line 151 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_26)
#line 151 "read_modules.m"
{
#line 259 "read_modules.m"
  {
#line 259 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__FileName0_28;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_29;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules___InterfaceSearchDirs_30;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_31;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_32;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeFileName_33;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampRes_34;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleSpecs_35;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__ActualModuleName_36;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__ActualModuleNameContext_38;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__IntIncls_40;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__ImpIncls_41;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__IntAvails_42;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__ImpAvails_43;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__IntItems_44;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__ImplItems_45;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__IsEmpty_46;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__V_49_49;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__Extension_70;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__Msg_71;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__V_77_77;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__V_78_78;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__V_80_80;
#line 266 "read_modules.m"
    MR_Word parse_tree__read_modules___IntFileKind_37;
#line 266 "read_modules.m"
    MR_Word parse_tree__read_modules___MaybeVersionNumbers_39;

#line 260 "read_modules.m"
    {
#line 260 "read_modules.m"
      parse_tree__read_modules__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "read_modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_49_49, 0) = ((MR_Box) (parse_tree__read_modules__IntFileKind_20));
#line 260 "read_modules.m"
    }
#line 328 "read_modules.m"
    {
#line 328 "read_modules.m"
      parse_tree__read_modules__Extension_70 = parse_tree__file_kind__file_kind_to_extension_1_f_0(parse_tree__read_modules__V_49_49);
    }
#line 338 "read_modules.m"
    {
#line 338 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_29);
    }
#line 343 "read_modules.m"
    {
#line 343 "read_modules.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 650, &parse_tree__read_modules___InterfaceSearchDirs_30);
    }
#line 3880 "parse_tree.read_modules.c"
#line 3881 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_18) {
#line 3883 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3885 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 3887 "parse_tree.read_modules.c"
        {
#line 3889 "parse_tree.read_modules.c"
          MR_String parse_tree__read_modules__V_85_85;

#line 335 "read_modules.m"
          {
#line 335 "read_modules.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_70, (MR_Integer) 1, &parse_tree__read_modules__FileName0_28);
          }
#line 350 "read_modules.m"
          {
#line 350 "read_modules.m"
            parse_tree__read_modules__V_85_85 = mercury__dir__this_directory_0_f_0();
          }
#line 350 "read_modules.m"
          {
#line 350 "read_modules.m"
            parse_tree__read_modules__SearchDirs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 0) = ((MR_Box) (parse_tree__read_modules__V_85_85));
#line 350 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "read_modules.m"
          }
#line 3912 "parse_tree.read_modules.c"
        }
#line 3914 "parse_tree.read_modules.c"
        break;
#line 3916 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 3918 "parse_tree.read_modules.c"
        {
#line 331 "read_modules.m"
          {
#line 331 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_70, &parse_tree__read_modules__FileName0_28);
          }
#line 347 "read_modules.m"
          parse_tree__read_modules__SearchDirs_31 = parse_tree__read_modules___InterfaceSearchDirs_30;
#line 3927 "parse_tree.read_modules.c"
        }
#line 3929 "parse_tree.read_modules.c"
        break;
#line 3931 "parse_tree.read_modules.c"
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__V_80_80 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_28, (MR_String) "\'... ");
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__V_80_80);
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__V_77_77 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_16, parse_tree__read_modules__V_78_78);
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__Msg_71 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__V_77_77);
    }
#line 340 "read_modules.m"
    {
#line 340 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__Msg_71);
    }
#line 341 "read_modules.m"
    {
#line 341 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_29);
    }
#line 262 "read_modules.m"
    {
#line 262 "read_modules.m"
      parse_tree__read_modules__OpenFile_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 262 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
#line 262 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 1) = ((MR_Box) (parse_tree__read_modules__read_module_int_14_p_0_1));
#line 262 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 262 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 3) = ((MR_Box) ((MR_Integer) 0));
#line 262 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_31));
#line 262 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 5) = ((MR_Box) (parse_tree__read_modules__FileName0_28));
#line 262 "read_modules.m"
    }
#line 263 "read_modules.m"
    {
#line 263 "read_modules.m"
      parse_tree__prog_io__actually_read_module_int_12_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__OpenFile_32, &parse_tree__read_modules__MaybeFileName_33, parse_tree__read_modules__ReadModuleAndTimestamps_22, &parse_tree__read_modules__MaybeTimestampRes_34, parse_tree__read_modules__ParseTreeInt_24, &parse_tree__read_modules__ModuleSpecs_35, parse_tree__read_modules__Errors_26);
    }
#line 266 "read_modules.m"
    parse_tree__read_modules__ActualModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 0)));
#line 266 "read_modules.m"
    parse_tree__read_modules___IntFileKind_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 1)));
#line 266 "read_modules.m"
    parse_tree__read_modules__ActualModuleNameContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 2)));
#line 266 "read_modules.m"
    parse_tree__read_modules___MaybeVersionNumbers_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 3)));
#line 266 "read_modules.m"
    parse_tree__read_modules__IntIncls_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 4)));
#line 266 "read_modules.m"
    parse_tree__read_modules__ImpIncls_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 5)));
#line 266 "read_modules.m"
    parse_tree__read_modules__IntAvails_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 6)));
#line 266 "read_modules.m"
    parse_tree__read_modules__ImpAvails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 7)));
#line 266 "read_modules.m"
    parse_tree__read_modules__IntItems_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 8)));
#line 266 "read_modules.m"
    parse_tree__read_modules__ImplItems_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 9)));
#line 270 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntIncls_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 270 "read_modules.m"
      {
#line 271 "read_modules.m"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImpIncls_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 270 "read_modules.m"
          {
#line 272 "read_modules.m"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntAvails_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 270 "read_modules.m"
              {
#line 273 "read_modules.m"
                parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntItems_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 270 "read_modules.m"
                  {
#line 274 "read_modules.m"
                    parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImpAvails_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 275 "read_modules.m"
                      parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImplItems_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "read_modules.m"
                  }
#line 270 "read_modules.m"
              }
#line 270 "read_modules.m"
          }
#line 270 "read_modules.m"
      }
#line 278 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 277 "read_modules.m"
      parse_tree__read_modules__IsEmpty_46 = (MR_Integer) 1;
#line 278 "read_modules.m"
    else
#line 279 "read_modules.m"
      parse_tree__read_modules__IsEmpty_46 = (MR_Integer) 0;
#line 281 "read_modules.m"
    {
#line 281 "read_modules.m"
      parse_tree__read_modules__read_module_end_17_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__IgnoreErrors_17, parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__ActualModuleName_36, parse_tree__read_modules__ActualModuleNameContext_38, parse_tree__read_modules__FileName0_28, parse_tree__read_modules__MaybeFileName_33, parse_tree__read_modules__FileName_21, parse_tree__read_modules__MaybeTimestampRes_34, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__IsEmpty_46, parse_tree__read_modules__ModuleSpecs_35, parse_tree__read_modules__Specs_25, *parse_tree__read_modules__Errors_26);
#line 281 "read_modules.m"
      return;
    }
#line 259 "read_modules.m"
  }
#line 151 "read_modules.m"
}

#line 244 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0_1(
#line 244 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 244 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 244 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 244 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 244 "read_modules.m"
{
#line 244 "read_modules.m"
  {
#line 244 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 244 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__5_5;

#line 244 "read_modules.m"
    {
#line 244 "read_modules.m"
      parse_tree__prog_io_find__search_for_module_source_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 6))), &parse_tree__read_modules__conv0_HeadVar__5_5);
    }
#line 244 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__5_5));
#line 244 "read_modules.m"
  }
#line 244 "read_modules.m"
}

#line 127 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0(
#line 127 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_14,
#line 127 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_15,
#line 127 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_16,
#line 127 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_17,
#line 127 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_18,
#line 127 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_19,
#line 127 "read_modules.m"
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_20,
#line 127 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_21,
#line 127 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeSrc_22,
#line 127 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_23,
#line 127 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_24)
#line 127 "read_modules.m"
{
#line 237 "read_modules.m"
  {
#line 237 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 237 "read_modules.m"
    MR_String parse_tree__read_modules__FileName0_26;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_27;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__InterfaceSearchDirs_28;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_29;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_30;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeFileName_31;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampRes_32;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleSpecs_33;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__ActualModuleName_34;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__ActualModuleNameContext_35;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__ComponentsCord_36;
#line 237 "read_modules.m"
    MR_Word parse_tree__read_modules__IsEmpty_37;
#line 237 "read_modules.m"
    MR_String parse_tree__read_modules__Extension_61;
#line 237 "read_modules.m"
    MR_String parse_tree__read_modules__Msg_62;
#line 237 "read_modules.m"
    MR_String parse_tree__read_modules__V_68_68;
#line 237 "read_modules.m"
    MR_String parse_tree__read_modules__V_69_69;
#line 237 "read_modules.m"
    MR_String parse_tree__read_modules__V_71_71;

#line 328 "read_modules.m"
    {
#line 328 "read_modules.m"
      parse_tree__read_modules__Extension_61 = parse_tree__file_kind__file_kind_to_extension_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 338 "read_modules.m"
    {
#line 338 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_27);
    }
#line 343 "read_modules.m"
    {
#line 343 "read_modules.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 650, &parse_tree__read_modules__InterfaceSearchDirs_28);
    }
#line 4177 "parse_tree.read_modules.c"
#line 4178 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_17) {
#line 4180 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4182 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 4184 "parse_tree.read_modules.c"
        {
#line 4186 "parse_tree.read_modules.c"
          MR_String parse_tree__read_modules__V_76_76;

#line 335 "read_modules.m"
          {
#line 335 "read_modules.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_61, (MR_Integer) 1, &parse_tree__read_modules__FileName0_26);
          }
#line 350 "read_modules.m"
          {
#line 350 "read_modules.m"
            parse_tree__read_modules__V_76_76 = mercury__dir__this_directory_0_f_0();
          }
#line 350 "read_modules.m"
          {
#line 350 "read_modules.m"
            parse_tree__read_modules__SearchDirs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 0) = ((MR_Box) (parse_tree__read_modules__V_76_76));
#line 350 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "read_modules.m"
          }
#line 4209 "parse_tree.read_modules.c"
        }
#line 4211 "parse_tree.read_modules.c"
        break;
#line 4213 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 4215 "parse_tree.read_modules.c"
        {
#line 331 "read_modules.m"
          {
#line 331 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_61, &parse_tree__read_modules__FileName0_26);
          }
#line 347 "read_modules.m"
          parse_tree__read_modules__SearchDirs_29 = parse_tree__read_modules__InterfaceSearchDirs_28;
#line 4224 "parse_tree.read_modules.c"
        }
#line 4226 "parse_tree.read_modules.c"
        break;
#line 4228 "parse_tree.read_modules.c"
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_26, (MR_String) "\'... ");
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__V_71_71);
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__V_68_68 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_15, parse_tree__read_modules__V_69_69);
    }
#line 339 "read_modules.m"
    {
#line 339 "read_modules.m"
      parse_tree__read_modules__Msg_62 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__V_68_68);
    }
#line 340 "read_modules.m"
    {
#line 340 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__Msg_62);
    }
#line 341 "read_modules.m"
    {
#line 341 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_27);
    }
#line 244 "read_modules.m"
    {
#line 244 "read_modules.m"
      parse_tree__read_modules__OpenFile_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 244 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_3[0]));
#line 244 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 1) = ((MR_Box) (parse_tree__read_modules__read_module_src_13_p_0_1));
#line 244 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 244 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 3) = ((MR_Box) (parse_tree__read_modules__Globals_14));
#line 244 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_29));
#line 244 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 5) = ((MR_Box) (parse_tree__read_modules__InterfaceSearchDirs_28));
#line 244 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 6) = ((MR_Box) (parse_tree__read_modules__ModuleName_18));
#line 244 "read_modules.m"
    }
#line 246 "read_modules.m"
    {
#line 246 "read_modules.m"
      parse_tree__prog_io__actually_read_module_src_11_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__OpenFile_30, &parse_tree__read_modules__MaybeFileName_31, parse_tree__read_modules__ReadModuleAndTimestamps_20, &parse_tree__read_modules__MaybeTimestampRes_32, parse_tree__read_modules__ParseTreeSrc_22, &parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Errors_24);
    }
#line 249 "read_modules.m"
    parse_tree__read_modules__ActualModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeSrc_22, (MR_Integer) 0)));
#line 249 "read_modules.m"
    parse_tree__read_modules__ActualModuleNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeSrc_22, (MR_Integer) 1)));
#line 249 "read_modules.m"
    parse_tree__read_modules__ComponentsCord_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeSrc_22, (MR_Integer) 2)));
#line 251 "read_modules.m"
    {
#line 251 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__read_modules__ComponentsCord_36);
    }
#line 251 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 251 "read_modules.m"
      parse_tree__read_modules__IsEmpty_37 = (MR_Integer) 1;
#line 251 "read_modules.m"
    else
#line 251 "read_modules.m"
      parse_tree__read_modules__IsEmpty_37 = (MR_Integer) 0;
#line 252 "read_modules.m"
    {
#line 252 "read_modules.m"
      parse_tree__read_modules__read_module_end_17_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__IgnoreErrors_16, parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__ActualModuleName_34, parse_tree__read_modules__ActualModuleNameContext_35, parse_tree__read_modules__FileName0_26, parse_tree__read_modules__MaybeFileName_31, parse_tree__read_modules__FileName_19, parse_tree__read_modules__MaybeTimestampRes_32, parse_tree__read_modules__MaybeTimestamp_21, parse_tree__read_modules__IsEmpty_37, parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Specs_23, *parse_tree__read_modules__Errors_24);
#line 252 "read_modules.m"
      return;
    }
#line 237 "read_modules.m"
  }
#line 127 "read_modules.m"
}

void mercury__parse_tree__read_modules__init(void)
{
}

void mercury__parse_tree__read_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0);
}

void mercury__parse_tree__read_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.read_modules. */
