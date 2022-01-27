/*
** Automatically generated from `read_modules.m'
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
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 103 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 106 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 109 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 112 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 115 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5];

#line 118 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0;

#line 121 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1];

#line 124 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1];

#line 127 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1];

#line 130 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1];

#line 133 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0;

#line 136 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

#line 139 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

#line 142 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2];

#line 145 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0;

#line 148 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1];

#line 151 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1];

#line 154 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1];

#line 157 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1];

#line 160 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1;

#line 163 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

#line 166 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

#line 169 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0;

#line 172 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

#line 175 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

#line 178 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0;

#line 181 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

#line 184 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

#line 187 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3];

#line 190 "parse_tree.read_modules.c"
static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3];

#line 193 "parse_tree.read_modules.c"
static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0;

#line 196 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1];

#line 199 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1];

#line 202 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1];

#line 205 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1];

#line 208 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0;

#line 211 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1;

#line 214 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2];

#line 217 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2];

#line 220 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2];

#line 223 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
#line 226 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 228 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 230 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 233 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
#line 236 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 238 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 240 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 242 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4);

#line 245 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
#line 248 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 250 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 253 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
#line 256 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 258 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 260 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 263 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
#line 266 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 268 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 270 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 273 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
#line 276 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 278 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 280 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 282 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4);

#line 285 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
#line 288 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 290 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 292 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 294 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4);

#line 297 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
#line 300 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 302 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 304 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
#line 306 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4,
#line 308 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_5);

#line 311 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
#line 314 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 316 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 319 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
#line 322 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 324 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 326 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 329 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
#line 332 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 334 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 337 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
#line 340 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 342 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 344 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 347 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
#line 350 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 352 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 355 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
#line 358 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 360 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 362 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 365 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 368 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 370 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2);

#line 373 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 376 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 378 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 380 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3);

#line 458 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 458 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 458 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 458 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 458 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10);

#line 383 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 383 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15);

#line 341 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_16_p_0(
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_17,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_18,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_19,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_20,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_21,
#line 341 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_22,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_23,
#line 341 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_24,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_25,
#line 341 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_26,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_27,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_28,
#line 341 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_29,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_30);

#line 299 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0_1(
#line 299 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 299 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 299 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 299 "read_modules.m"
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

#line 245 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0_1(
#line 245 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 245 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 245 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 245 "read_modules.m"
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 597 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 605 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 614 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 622 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 630 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 639 "parse_tree.read_modules.c"
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

#line 654 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 659 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0
  }
};

#line 668 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 673 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1] = {
  (MR_Integer) 0
};

#line 678 "parse_tree.read_modules.c"
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

#line 695 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
  }
};

#line 703 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 711 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 720 "parse_tree.read_modules.c"
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

#line 737 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 743 "parse_tree.read_modules.c"
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

#line 758 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 763 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0
  }
};

#line 772 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 777 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1] = {
  (MR_Integer) 0
};

#line 782 "parse_tree.read_modules.c"
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

#line 799 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 807 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 815 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2
  }
};

#line 824 "parse_tree.read_modules.c"
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

#line 841 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0
  }
};

#line 849 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 857 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 866 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
  }
};

#line 874 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 882 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 891 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
};

#line 898 "parse_tree.read_modules.c"
static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3] = {
  (MR_String) "hrmm_src",
  (MR_String) "hrmm_int",
  (MR_String) "hrmm_opt"
};

#line 905 "parse_tree.read_modules.c"
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

#line 920 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 925 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0
  }
};

#line 934 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 939 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1] = {
  (MR_Integer) 0
};

#line 944 "parse_tree.read_modules.c"
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

#line 961 "parse_tree.read_modules.c"
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

#line 978 "parse_tree.read_modules.c"
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

#line 995 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  (MR_Integer) 0
};

#line 1001 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  (MR_Integer) 1
};

#line 1007 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

#line 1013 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

#line 1019 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1025 "parse_tree.read_modules.c"
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

#line 1042 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
#line 1045 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1047 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1049 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1051 "parse_tree.read_modules.c"
{
#line 1053 "parse_tree.read_modules.c"
  {
#line 1055 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1058 "parse_tree.read_modules.c"
    {
#line 1060 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1063 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1065 "parse_tree.read_modules.c"
  }
#line 1067 "parse_tree.read_modules.c"
}

#line 1070 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
#line 1073 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1075 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1077 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1079 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1081 "parse_tree.read_modules.c"
{
#line 1083 "parse_tree.read_modules.c"
  {
#line 1085 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1088 "parse_tree.read_modules.c"
    {
#line 1090 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1093 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1095 "parse_tree.read_modules.c"
  }
#line 1097 "parse_tree.read_modules.c"
}

#line 1100 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
#line 1103 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1105 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1107 "parse_tree.read_modules.c"
{
#line 1109 "parse_tree.read_modules.c"
  {
#line 1111 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1114 "parse_tree.read_modules.c"
    {
#line 1116 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_int_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1119 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1121 "parse_tree.read_modules.c"
  }
#line 1123 "parse_tree.read_modules.c"
}

#line 1126 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
#line 1129 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1131 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1133 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1135 "parse_tree.read_modules.c"
{
#line 1137 "parse_tree.read_modules.c"
  {
#line 1139 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1142 "parse_tree.read_modules.c"
    {
#line 1144 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_int_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1147 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1149 "parse_tree.read_modules.c"
  }
#line 1151 "parse_tree.read_modules.c"
}

#line 1154 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
#line 1157 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1159 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1161 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1163 "parse_tree.read_modules.c"
{
#line 1165 "parse_tree.read_modules.c"
  {
#line 1167 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1170 "parse_tree.read_modules.c"
    {
#line 1172 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1175 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1177 "parse_tree.read_modules.c"
  }
#line 1179 "parse_tree.read_modules.c"
}

#line 1182 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
#line 1185 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1187 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1189 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1191 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1193 "parse_tree.read_modules.c"
{
#line 1195 "parse_tree.read_modules.c"
  {
#line 1197 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1200 "parse_tree.read_modules.c"
    {
#line 1202 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1205 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1207 "parse_tree.read_modules.c"
  }
#line 1209 "parse_tree.read_modules.c"
}

#line 1212 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
#line 1215 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1217 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1219 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1221 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1223 "parse_tree.read_modules.c"
{
#line 1225 "parse_tree.read_modules.c"
  {
#line 1227 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1230 "parse_tree.read_modules.c"
    {
#line 1232 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1235 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1237 "parse_tree.read_modules.c"
  }
#line 1239 "parse_tree.read_modules.c"
}

#line 1242 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
#line 1245 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1247 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1249 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
#line 1251 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4,
#line 1253 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_5)
#line 1255 "parse_tree.read_modules.c"
{
#line 1257 "parse_tree.read_modules.c"
  {
#line 1259 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1262 "parse_tree.read_modules.c"
    {
#line 1264 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_4), ((MR_Word) parse_tree__read_modules__wrapper_arg_5));
    }
#line 1267 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_3 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1269 "parse_tree.read_modules.c"
  }
#line 1271 "parse_tree.read_modules.c"
}

#line 1274 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
#line 1277 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1279 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1281 "parse_tree.read_modules.c"
{
#line 1283 "parse_tree.read_modules.c"
  {
#line 1285 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1288 "parse_tree.read_modules.c"
    {
#line 1290 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1293 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1295 "parse_tree.read_modules.c"
  }
#line 1297 "parse_tree.read_modules.c"
}

#line 1300 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
#line 1303 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1305 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1307 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1309 "parse_tree.read_modules.c"
{
#line 1311 "parse_tree.read_modules.c"
  {
#line 1313 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1316 "parse_tree.read_modules.c"
    {
#line 1318 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_maps_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1321 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1323 "parse_tree.read_modules.c"
  }
#line 1325 "parse_tree.read_modules.c"
}

#line 1328 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
#line 1331 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1333 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1335 "parse_tree.read_modules.c"
{
#line 1337 "parse_tree.read_modules.c"
  {
#line 1339 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1342 "parse_tree.read_modules.c"
    {
#line 1344 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1347 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1349 "parse_tree.read_modules.c"
  }
#line 1351 "parse_tree.read_modules.c"
}

#line 1354 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
#line 1357 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1359 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1361 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1363 "parse_tree.read_modules.c"
{
#line 1365 "parse_tree.read_modules.c"
  {
#line 1367 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1370 "parse_tree.read_modules.c"
    {
#line 1372 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1375 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1377 "parse_tree.read_modules.c"
  }
#line 1379 "parse_tree.read_modules.c"
}

#line 1382 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
#line 1385 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1387 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1389 "parse_tree.read_modules.c"
{
#line 1391 "parse_tree.read_modules.c"
  {
#line 1393 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1396 "parse_tree.read_modules.c"
    {
#line 1398 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1401 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1403 "parse_tree.read_modules.c"
  }
#line 1405 "parse_tree.read_modules.c"
}

#line 1408 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
#line 1411 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1413 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1415 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1417 "parse_tree.read_modules.c"
{
#line 1419 "parse_tree.read_modules.c"
  {
#line 1421 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1424 "parse_tree.read_modules.c"
    {
#line 1426 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1429 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1431 "parse_tree.read_modules.c"
  }
#line 1433 "parse_tree.read_modules.c"
}

#line 1436 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 1439 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1441 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1443 "parse_tree.read_modules.c"
{
#line 1445 "parse_tree.read_modules.c"
  {
#line 1447 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1450 "parse_tree.read_modules.c"
    {
#line 1452 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1455 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1457 "parse_tree.read_modules.c"
  }
#line 1459 "parse_tree.read_modules.c"
}

#line 1462 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 1465 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1467 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1469 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1471 "parse_tree.read_modules.c"
{
#line 1473 "parse_tree.read_modules.c"
  {
#line 1475 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1478 "parse_tree.read_modules.c"
    {
#line 1480 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1483 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1485 "parse_tree.read_modules.c"
  }
#line 1487 "parse_tree.read_modules.c"
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
#line 1531 "parse_tree.read_modules.c"
  {
#line 1533 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded = (parse_tree__read_modules__HeadVar__2_1 == parse_tree__read_modules__HeadVar__2_2);

#line 1536 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1538 "parse_tree.read_modules.c"
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
#line 1691 "parse_tree.read_modules.c"
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
#line 1717 "parse_tree.read_modules.c"
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
#line 1737 "parse_tree.read_modules.c"
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

#line 1812 "parse_tree.read_modules.c"
        {
#line 1814 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__V_3_3)), ((MR_Box) (parse_tree__read_modules__V_6_6)));
        }
#line 52 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
          {
#line 1821 "parse_tree.read_modules.c"
            parse_tree__read_modules__TypeInfo_12_12 = (MR_Word) &parse_tree__read_modules_scalar_common_2[0];
#line 1823 "parse_tree.read_modules.c"
            {
#line 1825 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_12_12, ((MR_Box) (parse_tree__read_modules__V_4_4)), ((MR_Box) (parse_tree__read_modules__V_7_7)));
            }
#line 52 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
              {
#line 1832 "parse_tree.read_modules.c"
                parse_tree__read_modules__TypeInfo_13_13 = (MR_Word) &parse_tree__read_modules_scalar_common_2[2];
#line 1834 "parse_tree.read_modules.c"
                {
#line 1836 "parse_tree.read_modules.c"
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

#line 1880 "parse_tree.read_modules.c"
    {
#line 1882 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1884 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1886 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_6));
#line 1888 "parse_tree.read_modules.c"
    }
#line 1890 "parse_tree.read_modules.c"
    {
#line 1892 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1894 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1896 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_7));
#line 1898 "parse_tree.read_modules.c"
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

#line 1938 "parse_tree.read_modules.c"
    {
#line 1940 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1944 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_5));
#line 1946 "parse_tree.read_modules.c"
    }
#line 1948 "parse_tree.read_modules.c"
    {
#line 1950 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1952 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1954 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_6));
#line 1956 "parse_tree.read_modules.c"
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
#line 1996 "parse_tree.read_modules.c"
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
#line 2018 "parse_tree.read_modules.c"
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

#line 2081 "parse_tree.read_modules.c"
        {
#line 2083 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_5_5);
        }
#line 69 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 2088 "parse_tree.read_modules.c"
          {
#line 2090 "parse_tree.read_modules.c"
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
#line 2190 "parse_tree.read_modules.c"
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
#line 2224 "parse_tree.read_modules.c"
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
#line 2244 "parse_tree.read_modules.c"
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
#line 2264 "parse_tree.read_modules.c"
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
#line 2284 "parse_tree.read_modules.c"
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

#line 2373 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (strcmp(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_8_8) == 0);
#line 72 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
          {
#line 2379 "parse_tree.read_modules.c"
            {
#line 2381 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_9_9);
            }
#line 72 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
              {
#line 2388 "parse_tree.read_modules.c"
                {
#line 2390 "parse_tree.read_modules.c"
                  parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_PT_15, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_10_10);
                }
#line 72 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                  {
#line 2397 "parse_tree.read_modules.c"
                    parse_tree__read_modules__TypeInfo_17_17 = (MR_Word) &parse_tree__read_modules_scalar_common_1[4];
#line 2399 "parse_tree.read_modules.c"
                    {
#line 2401 "parse_tree.read_modules.c"
                      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_17_17, ((MR_Box) (parse_tree__read_modules__V_6_6)), ((MR_Box) (parse_tree__read_modules__V_11_11)));
                    }
#line 72 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                      {
#line 2408 "parse_tree.read_modules.c"
                        parse_tree__read_modules__TypeInfo_18_18 = (MR_Word) &parse_tree__read_modules_scalar_common_1[5];
#line 2410 "parse_tree.read_modules.c"
                        {
#line 2412 "parse_tree.read_modules.c"
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

#line 458 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 458 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 458 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 458 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 458 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10)
#line 458 "read_modules.m"
{
#line 464 "read_modules.m"
  {
#line 464 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 464 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "read_modules.m"
    else
#line 464 "read_modules.m"
      {
#line 464 "read_modules.m"
        MR_Word parse_tree__read_modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_9, (MR_Integer) 0)));

#line 464 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 467 "read_modules.m"
          {
#line 467 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));
#line 467 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_14;

#line 468 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "read_modules.m"
            {
#line 469 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_14);
            }
#line 476 "read_modules.m"
#line 476 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_14) {
#line 476 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 476 "read_modules.m"
              case (MR_Integer) 0:
#line 477 "read_modules.m"
                {
#line 477 "read_modules.m"
                }
#line 476 "read_modules.m"
                break;
#line 476 "read_modules.m"
              case (MR_Integer) 1:
#line 487 "read_modules.m"
                {
#line 487 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_28;

#line 488 "read_modules.m"
                  {
#line 488 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 489 "read_modules.m"
                  {
#line 489 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 490 "read_modules.m"
                  {
#line 490 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 23, &parse_tree__read_modules__Warn_28);
                  }
#line 508 "read_modules.m"
#line 508 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_28) {
#line 508 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 508 "read_modules.m"
                    case (MR_Integer) 0:
#line 509 "read_modules.m"
                      {
#line 509 "read_modules.m"
                      }
#line 508 "read_modules.m"
                      break;
#line 508 "read_modules.m"
                    case (MR_Integer) 1:
#line 492 "read_modules.m"
                      {
#line 492 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_29;
#line 492 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_30;

#line 493 "read_modules.m"
                        {
#line 493 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 494 "read_modules.m"
                        {
#line 494 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName_8);
                        }
#line 495 "read_modules.m"
                        {
#line 495 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 496 "read_modules.m"
                        {
#line 496 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_13, &parse_tree__read_modules__Msg_29);
                        }
#line 497 "read_modules.m"
                        {
#line 497 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 498 "read_modules.m"
                        {
#line 498 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_29);
                        }
#line 499 "read_modules.m"
                        {
#line 499 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 500 "read_modules.m"
                        {
#line 500 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 501 "read_modules.m"
                        {
#line 501 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_30);
                        }
#line 505 "read_modules.m"
#line 505 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_30) {
#line 505 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 505 "read_modules.m"
                          case (MR_Integer) 0:
#line 506 "read_modules.m"
                            {
#line 506 "read_modules.m"
                            }
#line 505 "read_modules.m"
                            break;
#line 505 "read_modules.m"
                          case (MR_Integer) 1:
#line 503 "read_modules.m"
                            {
#line 504 "read_modules.m"
                              {
#line 504 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 504 "read_modules.m"
                                return;
                              }
#line 503 "read_modules.m"
                            }
#line 505 "read_modules.m"
                            break;
#line 505 "read_modules.m"
                        }
#line 492 "read_modules.m"
                      }
#line 508 "read_modules.m"
                      break;
#line 508 "read_modules.m"
                  }
#line 487 "read_modules.m"
                }
#line 476 "read_modules.m"
                break;
#line 476 "read_modules.m"
            }
#line 467 "read_modules.m"
          }
#line 464 "read_modules.m"
        else
#line 464 "read_modules.m"
          {
#line 464 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));

#line 465 "read_modules.m"
            {
#line 465 "read_modules.m"
              MR_Word base;
#line 465 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_10 = base;
#line 465 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_12));
#line 465 "read_modules.m"
            }
#line 464 "read_modules.m"
          }
#line 464 "read_modules.m"
      }
#line 464 "read_modules.m"
  }
#line 458 "read_modules.m"
}

#line 383 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 383 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 383 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15)
#line 383 "read_modules.m"
{
#line 390 "read_modules.m"
  {
#line 390 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 388 "read_modules.m"
    {
#line 388 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_10);
    }
#line 390 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 389 "read_modules.m"
      {
#line 389 "read_modules.m"
        {
#line 389 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "successful parse.\n");
        }
#line 389 "read_modules.m"
        *parse_tree__read_modules__STATE_VARIABLE_Specs_15 = parse_tree__read_modules__STATE_VARIABLE_Specs_0_14;
#line 389 "read_modules.m"
      }
#line 390 "read_modules.m"
    else
#line 391 "read_modules.m"
      {
#line 391 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_30;
#line 391 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_13;
#line 391 "read_modules.m"
        MR_Word parse_tree__read_modules__V_20_20;

#line 391 "read_modules.m"
        {
#line 391 "read_modules.m"
          parse_tree__read_modules__V_20_20 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 2705 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 391 "read_modules.m"
        {
#line 391 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__Errors_10, parse_tree__read_modules__V_20_20, &parse_tree__read_modules__FatalErrors_13);
        }
#line 392 "read_modules.m"
        {
#line 392 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__FatalErrors_13);
        }
#line 394 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 393 "read_modules.m"
          {
#line 393 "read_modules.m"
            {
#line 393 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "parse error(s).\n");
            }
#line 393 "read_modules.m"
          }
#line 394 "read_modules.m"
        else
#line 395 "read_modules.m"
          {
#line 395 "read_modules.m"
            {
#line 395 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "fatal error(s).\n");
            }
#line 395 "read_modules.m"
          }
#line 397 "read_modules.m"
        {
#line 397 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_9, parse_tree__read_modules__Globals_8, parse_tree__read_modules__STATE_VARIABLE_Specs_0_14, parse_tree__read_modules__STATE_VARIABLE_Specs_15);
        }
#line 398 "read_modules.m"
        {
#line 398 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 398 "read_modules.m"
          return;
        }
#line 391 "read_modules.m"
      }
#line 390 "read_modules.m"
  }
#line 383 "read_modules.m"
}

#line 341 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_16_p_0(
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_17,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_18,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_19,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_20,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_21,
#line 341 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_22,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_23,
#line 341 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_24,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_25,
#line 341 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_26,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_27,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_28,
#line 341 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_29,
#line 341 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_30)
#line 341 "read_modules.m"
{
#line 351 "read_modules.m"
  {
#line 351 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 351 "read_modules.m"
    MR_Word parse_tree__read_modules__NameSpecs_32;

#line 354 "read_modules.m"
    if ((parse_tree__read_modules__MaybeFileName_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "read_modules.m"
      *parse_tree__read_modules__FileName_24 = parse_tree__read_modules__FileName0_22;
#line 354 "read_modules.m"
    else
#line 353 "read_modules.m"
      *parse_tree__read_modules__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeFileName_23, (MR_Integer) 0)));
#line 358 "read_modules.m"
    {
#line 358 "read_modules.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(*parse_tree__read_modules__FileName_24, parse_tree__read_modules__ModuleName_20, parse_tree__read_modules__ActualModuleName_21, &parse_tree__read_modules__NameSpecs_32);
    }
#line 464 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "read_modules.m"
    else
#line 464 "read_modules.m"
      {
#line 464 "read_modules.m"
        MR_Word parse_tree__read_modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_25, (MR_Integer) 0)));

#line 464 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_59_59)) == (MR_mktag((MR_Integer) 1))))
#line 467 "read_modules.m"
          {
#line 467 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_59_59, (MR_Integer) 0)));
#line 467 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_54;

#line 468 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "read_modules.m"
            {
#line 469 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_54);
            }
#line 476 "read_modules.m"
#line 476 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_54) {
#line 476 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 476 "read_modules.m"
              case (MR_Integer) 0:
#line 477 "read_modules.m"
                {
#line 477 "read_modules.m"
                }
#line 476 "read_modules.m"
                break;
#line 476 "read_modules.m"
              case (MR_Integer) 1:
#line 487 "read_modules.m"
                {
#line 487 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_66;

#line 488 "read_modules.m"
                  {
#line 488 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 489 "read_modules.m"
                  {
#line 489 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 490 "read_modules.m"
                  {
#line 490 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 23, &parse_tree__read_modules__Warn_66);
                  }
#line 508 "read_modules.m"
#line 508 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_66) {
#line 508 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 508 "read_modules.m"
                    case (MR_Integer) 0:
#line 509 "read_modules.m"
                      {
#line 509 "read_modules.m"
                      }
#line 508 "read_modules.m"
                      break;
#line 508 "read_modules.m"
                    case (MR_Integer) 1:
#line 492 "read_modules.m"
                      {
#line 492 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_67;
#line 492 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_68;

#line 493 "read_modules.m"
                        {
#line 493 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 494 "read_modules.m"
                        {
#line 494 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName0_22);
                        }
#line 495 "read_modules.m"
                        {
#line 495 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 496 "read_modules.m"
                        {
#line 496 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_53, &parse_tree__read_modules__Msg_67);
                        }
#line 497 "read_modules.m"
                        {
#line 497 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 498 "read_modules.m"
                        {
#line 498 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_67);
                        }
#line 499 "read_modules.m"
                        {
#line 499 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 500 "read_modules.m"
                        {
#line 500 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 501 "read_modules.m"
                        {
#line 501 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_68);
                        }
#line 505 "read_modules.m"
#line 505 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_68) {
#line 505 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 505 "read_modules.m"
                          case (MR_Integer) 0:
#line 506 "read_modules.m"
                            {
#line 506 "read_modules.m"
                            }
#line 505 "read_modules.m"
                            break;
#line 505 "read_modules.m"
                          case (MR_Integer) 1:
#line 503 "read_modules.m"
                            {
#line 504 "read_modules.m"
                              {
#line 504 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                              }
#line 503 "read_modules.m"
                            }
#line 505 "read_modules.m"
                            break;
#line 505 "read_modules.m"
                        }
#line 492 "read_modules.m"
                      }
#line 508 "read_modules.m"
                      break;
#line 508 "read_modules.m"
                  }
#line 487 "read_modules.m"
                }
#line 476 "read_modules.m"
                break;
#line 476 "read_modules.m"
            }
#line 467 "read_modules.m"
          }
#line 464 "read_modules.m"
        else
#line 464 "read_modules.m"
          {
#line 464 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_59_59, (MR_Integer) 0)));

#line 465 "read_modules.m"
            {
#line 465 "read_modules.m"
              MR_Word base;
#line 465 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_26 = base;
#line 465 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_52));
#line 465 "read_modules.m"
            }
#line 464 "read_modules.m"
          }
#line 464 "read_modules.m"
      }
#line 376 "read_modules.m"
#line 376 "read_modules.m"
    switch (parse_tree__read_modules__IgnoreErrors_18) {
#line 376 "read_modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 376 "read_modules.m"
      case (MR_Integer) 1:
#line 377 "read_modules.m"
        {
#line 377 "read_modules.m"
          MR_Word parse_tree__read_modules__ModuleNameSpecs_33;

#line 378 "read_modules.m"
          {
#line 378 "read_modules.m"
            parse_tree__read_modules__ModuleNameSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__read_modules__NameSpecs_32, parse_tree__read_modules__ModuleSpecs_28);
          }
#line 379 "read_modules.m"
          {
#line 379 "read_modules.m"
            parse_tree__read_modules__handle_any_read_module_errors_7_p_0(parse_tree__read_modules__Globals_17, parse_tree__read_modules__VeryVerbose_19, parse_tree__read_modules__Errors_30, parse_tree__read_modules__ModuleNameSpecs_33, parse_tree__read_modules__Specs_29);
#line 379 "read_modules.m"
            return;
          }
#line 377 "read_modules.m"
        }
#line 376 "read_modules.m"
        break;
#line 376 "read_modules.m"
      case (MR_Integer) 0:
#line 363 "read_modules.m"
        {
#line 364 "read_modules.m"
          *parse_tree__read_modules__Specs_29 = parse_tree__read_modules__NameSpecs_32;
#line 366 "read_modules.m"
          {
#line 366 "read_modules.m"
            parse_tree__read_modules__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_30, ((MR_Box) ((MR_Integer) 0)));
          }
#line 366 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 370 "read_modules.m"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__IsEmpty_27 == (MR_Integer) 1);
#line 373 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 372 "read_modules.m"
            {
#line 372 "read_modules.m"
              {
#line 372 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_19, (MR_String) "not found.\n");
#line 372 "read_modules.m"
                return;
              }
#line 372 "read_modules.m"
            }
#line 373 "read_modules.m"
          else
#line 374 "read_modules.m"
            {
#line 374 "read_modules.m"
              {
#line 374 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_19, (MR_String) "done.\n");
#line 374 "read_modules.m"
                return;
              }
#line 374 "read_modules.m"
            }
#line 363 "read_modules.m"
        }
#line 376 "read_modules.m"
        break;
#line 376 "read_modules.m"
    }
#line 351 "read_modules.m"
  }
#line 341 "read_modules.m"
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
#line 442 "read_modules.m"
  {
#line 442 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 442 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_19;
#line 442 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_20;
#line 442 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_21;
#line 444 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_20;

#line 443 "read_modules.m"
    {
#line 443 "read_modules.m"
      parse_tree__read_modules__Key_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_11));
#line 443 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 1) = ((MR_Box) (parse_tree__read_modules__IntFileKind_12));
#line 443 "read_modules.m"
    }
#line 444 "read_modules.m"
    {
#line 444 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[2], (MR_Word) &parse_tree__read_modules_scalar_common_1[3], parse_tree__read_modules__HaveReadModuleMap_10, ((MR_Box) (parse_tree__read_modules__Key_19)), &parse_tree__read_modules__conv0_HaveReadModule_20);
    }
#line 444 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 444 "read_modules.m"
      {
#line 444 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_20 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_20);
#line 444 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 444 "read_modules.m"
      }
#line 442 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 442 "read_modules.m"
      {
#line 445 "read_modules.m"
        *parse_tree__read_modules__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 0)));
#line 445 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 1)));
#line 445 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 2)));
#line 445 "read_modules.m"
        *parse_tree__read_modules__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 3)));
#line 445 "read_modules.m"
        *parse_tree__read_modules__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 4)));
#line 451 "read_modules.m"
#line 451 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_13) {
#line 451 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 451 "read_modules.m"
          case (MR_Integer) 0:
#line 448 "read_modules.m"
            {
#line 448 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 1)));
#line 449 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 0)));
#line 449 "read_modules.m"
              MR_Word parse_tree__read_modules__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 2)));

#line 450 "read_modules.m"
              {
#line 450 "read_modules.m"
                MR_Word base;
#line 450 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_15 = base;
#line 450 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_23));
#line 450 "read_modules.m"
              }
#line 448 "read_modules.m"
            }
#line 451 "read_modules.m"
            break;
#line 451 "read_modules.m"
          case (MR_Integer) 1:
#line 453 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 451 "read_modules.m"
            break;
#line 451 "read_modules.m"
        }
#line 451 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 442 "read_modules.m"
      }
#line 442 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 442 "read_modules.m"
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
#line 426 "read_modules.m"
  {
#line 426 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 426 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_17;
#line 426 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_18;
#line 426 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_19;
#line 428 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_18;

#line 427 "read_modules.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 427 "read_modules.m"
    {
#line 427 "read_modules.m"
      parse_tree__read_modules__Key_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 427 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_10));
#line 427 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 1) = NULL;
#line 427 "read_modules.m"
    }
#line 428 "read_modules.m"
    {
#line 428 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[0], (MR_Word) &parse_tree__read_modules_scalar_common_1[1], parse_tree__read_modules__HaveReadModuleMap_9, ((MR_Box) (parse_tree__read_modules__Key_17)), &parse_tree__read_modules__conv0_HaveReadModule_18);
    }
#line 428 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 428 "read_modules.m"
      {
#line 428 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_18 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_18);
#line 428 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 428 "read_modules.m"
      }
#line 426 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 426 "read_modules.m"
      {
#line 429 "read_modules.m"
        *parse_tree__read_modules__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 0)));
#line 429 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 1)));
#line 429 "read_modules.m"
        *parse_tree__read_modules__ParseTreeSrc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 2)));
#line 429 "read_modules.m"
        *parse_tree__read_modules__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 3)));
#line 429 "read_modules.m"
        *parse_tree__read_modules__Errors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 4)));
#line 435 "read_modules.m"
#line 435 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_11) {
#line 435 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 435 "read_modules.m"
          case (MR_Integer) 0:
#line 432 "read_modules.m"
            {
#line 432 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 1)));
#line 433 "read_modules.m"
              MR_Word parse_tree__read_modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 0)));
#line 433 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 2)));

#line 434 "read_modules.m"
              {
#line 434 "read_modules.m"
                MR_Word base;
#line 434 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 434 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_13 = base;
#line 434 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_21));
#line 434 "read_modules.m"
              }
#line 432 "read_modules.m"
            }
#line 435 "read_modules.m"
            break;
#line 435 "read_modules.m"
          case (MR_Integer) 1:
#line 437 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "read_modules.m"
            break;
#line 435 "read_modules.m"
        }
#line 435 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 426 "read_modules.m"
      }
#line 426 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 426 "read_modules.m"
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
#line 416 "read_modules.m"
  {
#line 416 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 416 "read_modules.m"
    MR_String parse_tree__read_modules__FileNamePrime_28;
#line 416 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampPrime_29;
#line 416 "read_modules.m"
    MR_Word parse_tree__read_modules__ParseTreeIntPrime_30;
#line 416 "read_modules.m"
    MR_Word parse_tree__read_modules__SpecsPrime_31;
#line 416 "read_modules.m"
    MR_Word parse_tree__read_modules__ErrorsPrime_32;

#line 407 "read_modules.m"
    {
#line 407 "read_modules.m"
      parse_tree__read_modules__succeeded = parse_tree__read_modules__find_read_module_int_9_p_0(parse_tree__read_modules__HaveReadModuleMap_16, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__ReturnTimestamp_22, &parse_tree__read_modules__FileNamePrime_28, &parse_tree__read_modules__MaybeTimestampPrime_29, &parse_tree__read_modules__ParseTreeIntPrime_30, &parse_tree__read_modules__SpecsPrime_31, &parse_tree__read_modules__ErrorsPrime_32);
    }
#line 416 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 411 "read_modules.m"
      {
#line 411 "read_modules.m"
        *parse_tree__read_modules__FileName_21 = parse_tree__read_modules__FileNamePrime_28;
#line 412 "read_modules.m"
        *parse_tree__read_modules__MaybeTimestamp_23 = parse_tree__read_modules__MaybeTimestampPrime_29;
#line 413 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_24 = parse_tree__read_modules__ParseTreeIntPrime_30;
#line 414 "read_modules.m"
        *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__SpecsPrime_31;
#line 415 "read_modules.m"
        *parse_tree__read_modules__Errors_26 = parse_tree__read_modules__ErrorsPrime_32;
#line 411 "read_modules.m"
      }
#line 416 "read_modules.m"
    else
#line 417 "read_modules.m"
      {
#line 417 "read_modules.m"
        MR_Word parse_tree__read_modules__V_36_36;

#line 419 "read_modules.m"
        {
#line 419 "read_modules.m"
          parse_tree__read_modules__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 419 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_36_36, 0) = ((MR_Box) (parse_tree__read_modules__ReturnTimestamp_22));
#line 419 "read_modules.m"
        }
#line 417 "read_modules.m"
        {
#line 417 "read_modules.m"
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__Descr_17, (MR_Integer) 1, parse_tree__read_modules__Search_18, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__FileName_21, parse_tree__read_modules__V_36_36, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__ParseTreeInt_24, parse_tree__read_modules__Specs_25, parse_tree__read_modules__Errors_26);
#line 417 "read_modules.m"
          return;
        }
#line 417 "read_modules.m"
      }
#line 416 "read_modules.m"
  }
#line 190 "read_modules.m"
}

#line 299 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0_1(
#line 299 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 299 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 299 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 299 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 299 "read_modules.m"
{
#line 299 "read_modules.m"
  {
#line 299 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 299 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__4_4;

#line 299 "read_modules.m"
    {
#line 299 "read_modules.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), &parse_tree__read_modules__conv0_HeadVar__4_4);
    }
#line 299 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__4_4));
#line 299 "read_modules.m"
  }
#line 299 "read_modules.m"
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
#line 276 "read_modules.m"
  {
#line 276 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 276 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_22;
#line 276 "read_modules.m"
    MR_String parse_tree__read_modules__FullFileName_23;
#line 276 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileName_25;
#line 276 "read_modules.m"
    MR_Word parse_tree__read_modules__DefaultModuleName_26;
#line 276 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_27;
#line 276 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_28;
#line 276 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampRes_30;
#line 276 "read_modules.m"
    MR_Word parse_tree__read_modules__Specs0_31;
#line 287 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileNamePrime_24;
#line 300 "read_modules.m"
    MR_Word parse_tree__read_modules__V_29_29;

#line 277 "read_modules.m"
    {
#line 277 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_22);
    }
#line 278 "read_modules.m"
    {
#line 278 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "% ");
    }
#line 279 "read_modules.m"
    {
#line 279 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Descr_14);
    }
#line 280 "read_modules.m"
    {
#line 280 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) " \140");
    }
#line 281 "read_modules.m"
    {
#line 281 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__FileName_13);
    }
#line 282 "read_modules.m"
    {
#line 282 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "\'... ");
    }
#line 283 "read_modules.m"
    {
#line 283 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_22);
    }
#line 284 "read_modules.m"
    {
#line 284 "read_modules.m"
      parse_tree__read_modules__FullFileName_23 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName_13, (MR_String) ".m");
    }
#line 285 "read_modules.m"
    {
#line 285 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__dir__basename_2_p_0(parse_tree__read_modules__FileName_13, &parse_tree__read_modules__BaseFileNamePrime_24);
    }
#line 287 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 286 "read_modules.m"
      parse_tree__read_modules__BaseFileName_25 = parse_tree__read_modules__BaseFileNamePrime_24;
#line 287 "read_modules.m"
    else
#line 288 "read_modules.m"
      parse_tree__read_modules__BaseFileName_25 = (MR_String) "";
#line 290 "read_modules.m"
    {
#line 290 "read_modules.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__read_modules__BaseFileName_25, &parse_tree__read_modules__DefaultModuleName_26);
    }
#line 295 "read_modules.m"
#line 295 "read_modules.m"
    switch (parse_tree__read_modules__Search_15) {
#line 295 "read_modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 295 "read_modules.m"
      case (MR_Integer) 1:
#line 296 "read_modules.m"
        {
#line 296 "read_modules.m"
          MR_String parse_tree__read_modules__V_45_45;

#line 297 "read_modules.m"
          {
#line 297 "read_modules.m"
            parse_tree__read_modules__V_45_45 = mercury__dir__this_directory_0_f_0();
          }
#line 297 "read_modules.m"
          {
#line 297 "read_modules.m"
            parse_tree__read_modules__SearchDirs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 0) = ((MR_Box) (parse_tree__read_modules__V_45_45));
#line 297 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "read_modules.m"
          }
#line 296 "read_modules.m"
        }
#line 295 "read_modules.m"
        break;
#line 295 "read_modules.m"
      case (MR_Integer) 0:
#line 292 "read_modules.m"
        {
#line 293 "read_modules.m"
          {
#line 293 "read_modules.m"
            libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 649, &parse_tree__read_modules__SearchDirs_27);
          }
#line 292 "read_modules.m"
        }
#line 295 "read_modules.m"
        break;
#line 295 "read_modules.m"
    }
#line 299 "read_modules.m"
    {
#line 299 "read_modules.m"
      parse_tree__read_modules__OpenFile_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 299 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
#line 299 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 1) = ((MR_Box) (parse_tree__read_modules__read_module_src_from_file_11_p_0_1));
#line 299 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 299 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 3) = ((MR_Box) ((MR_Integer) 0));
#line 299 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_27));
#line 299 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 5) = ((MR_Box) (parse_tree__read_modules__FullFileName_23));
#line 299 "read_modules.m"
    }
#line 300 "read_modules.m"
    {
#line 300 "read_modules.m"
      parse_tree__prog_io__actually_read_module_src_11_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_12, parse_tree__read_modules__DefaultModuleName_26, parse_tree__read_modules__OpenFile_28, &parse_tree__read_modules__V_29_29, parse_tree__read_modules__ReadModuleAndTimestamps_16, &parse_tree__read_modules__MaybeTimestampRes_30, parse_tree__read_modules__ParseTreeSrc_18, &parse_tree__read_modules__Specs0_31, parse_tree__read_modules__Errors_20);
    }
#line 303 "read_modules.m"
    {
#line 303 "read_modules.m"
      parse_tree__read_modules__check_timestamp_6_p_0(parse_tree__read_modules__Globals_12, parse_tree__read_modules__FullFileName_23, parse_tree__read_modules__MaybeTimestampRes_30, parse_tree__read_modules__MaybeTimestamp_17);
    }
#line 388 "read_modules.m"
    {
#line 388 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, *parse_tree__read_modules__Errors_20);
    }
#line 390 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 389 "read_modules.m"
      {
#line 389 "read_modules.m"
        {
#line 389 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "successful parse.\n");
        }
#line 389 "read_modules.m"
        *parse_tree__read_modules__Specs_19 = parse_tree__read_modules__Specs0_31;
#line 389 "read_modules.m"
      }
#line 390 "read_modules.m"
    else
#line 391 "read_modules.m"
      {
#line 391 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_78;
#line 391 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_65;
#line 391 "read_modules.m"
        MR_Word parse_tree__read_modules__V_68_68;

#line 391 "read_modules.m"
        {
#line 391 "read_modules.m"
          parse_tree__read_modules__V_68_68 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3677 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_78 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 391 "read_modules.m"
        {
#line 391 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, *parse_tree__read_modules__Errors_20, parse_tree__read_modules__V_68_68, &parse_tree__read_modules__FatalErrors_65);
        }
#line 392 "read_modules.m"
        {
#line 392 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, parse_tree__read_modules__FatalErrors_65);
        }
#line 394 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 393 "read_modules.m"
          {
#line 393 "read_modules.m"
            {
#line 393 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "parse error(s).\n");
            }
#line 393 "read_modules.m"
          }
#line 394 "read_modules.m"
        else
#line 395 "read_modules.m"
          {
#line 395 "read_modules.m"
            {
#line 395 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "fatal error(s).\n");
            }
#line 395 "read_modules.m"
          }
#line 397 "read_modules.m"
        {
#line 397 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Globals_12, parse_tree__read_modules__Specs0_31, parse_tree__read_modules__Specs_19);
        }
#line 398 "read_modules.m"
        {
#line 398 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 398 "read_modules.m"
          return;
        }
#line 391 "read_modules.m"
      }
#line 276 "read_modules.m"
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
    MR_Word parse_tree__read_modules__IntItems_40;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__ImplItems_41;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__IsEmpty_42;
#line 259 "read_modules.m"
    MR_Word parse_tree__read_modules__V_45_45;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__Extension_66;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__Msg_67;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__V_73_73;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__V_74_74;
#line 259 "read_modules.m"
    MR_String parse_tree__read_modules__V_76_76;
#line 266 "read_modules.m"
    MR_Word parse_tree__read_modules___IntFileKind_37;
#line 266 "read_modules.m"
    MR_Word parse_tree__read_modules___Context_38;
#line 266 "read_modules.m"
    MR_Word parse_tree__read_modules___MaybeVersionNumbers_39;

#line 260 "read_modules.m"
    {
#line 260 "read_modules.m"
      parse_tree__read_modules__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "read_modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_45_45, 0) = ((MR_Box) (parse_tree__read_modules__IntFileKind_20));
#line 260 "read_modules.m"
    }
#line 316 "read_modules.m"
    {
#line 316 "read_modules.m"
      parse_tree__read_modules__Extension_66 = parse_tree__file_kind__file_kind_to_extension_1_f_0(parse_tree__read_modules__V_45_45);
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_29);
    }
#line 331 "read_modules.m"
    {
#line 331 "read_modules.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 649, &parse_tree__read_modules___InterfaceSearchDirs_30);
    }
#line 3861 "parse_tree.read_modules.c"
#line 3862 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_18) {
#line 3864 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3866 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 3868 "parse_tree.read_modules.c"
        {
#line 3870 "parse_tree.read_modules.c"
          MR_String parse_tree__read_modules__V_81_81;

#line 323 "read_modules.m"
          {
#line 323 "read_modules.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_66, (MR_Integer) 1, &parse_tree__read_modules__FileName0_28);
          }
#line 338 "read_modules.m"
          {
#line 338 "read_modules.m"
            parse_tree__read_modules__V_81_81 = mercury__dir__this_directory_0_f_0();
          }
#line 338 "read_modules.m"
          {
#line 338 "read_modules.m"
            parse_tree__read_modules__SearchDirs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 0) = ((MR_Box) (parse_tree__read_modules__V_81_81));
#line 338 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "read_modules.m"
          }
#line 3893 "parse_tree.read_modules.c"
        }
#line 3895 "parse_tree.read_modules.c"
        break;
#line 3897 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 3899 "parse_tree.read_modules.c"
        {
#line 319 "read_modules.m"
          {
#line 319 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_66, &parse_tree__read_modules__FileName0_28);
          }
#line 335 "read_modules.m"
          parse_tree__read_modules__SearchDirs_31 = parse_tree__read_modules___InterfaceSearchDirs_30;
#line 3908 "parse_tree.read_modules.c"
        }
#line 3910 "parse_tree.read_modules.c"
        break;
#line 3912 "parse_tree.read_modules.c"
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__V_76_76 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_28, (MR_String) "\'... ");
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__V_76_76);
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__V_73_73 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_16, parse_tree__read_modules__V_74_74);
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__Msg_67 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__V_73_73);
    }
#line 328 "read_modules.m"
    {
#line 328 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__Msg_67);
    }
#line 329 "read_modules.m"
    {
#line 329 "read_modules.m"
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
    parse_tree__read_modules___Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 2)));
#line 266 "read_modules.m"
    parse_tree__read_modules___MaybeVersionNumbers_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 3)));
#line 266 "read_modules.m"
    parse_tree__read_modules__IntItems_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 4)));
#line 266 "read_modules.m"
    parse_tree__read_modules__ImplItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 5)));
#line 268 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntItems_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 268 "read_modules.m"
      parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImplItems_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 268 "read_modules.m"
      parse_tree__read_modules__IsEmpty_42 = (MR_Integer) 1;
#line 268 "read_modules.m"
    else
#line 268 "read_modules.m"
      parse_tree__read_modules__IsEmpty_42 = (MR_Integer) 0;
#line 269 "read_modules.m"
    {
#line 269 "read_modules.m"
      parse_tree__read_modules__read_module_end_16_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__IgnoreErrors_17, parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__ActualModuleName_36, parse_tree__read_modules__FileName0_28, parse_tree__read_modules__MaybeFileName_33, parse_tree__read_modules__FileName_21, parse_tree__read_modules__MaybeTimestampRes_34, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__IsEmpty_42, parse_tree__read_modules__ModuleSpecs_35, parse_tree__read_modules__Specs_25, *parse_tree__read_modules__Errors_26);
#line 269 "read_modules.m"
      return;
    }
#line 259 "read_modules.m"
  }
#line 151 "read_modules.m"
}

#line 245 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0_1(
#line 245 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 245 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 245 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 245 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 245 "read_modules.m"
{
#line 245 "read_modules.m"
  {
#line 245 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 245 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__5_5;

#line 245 "read_modules.m"
    {
#line 245 "read_modules.m"
      parse_tree__prog_io_find__search_for_module_source_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 6))), &parse_tree__read_modules__conv0_HeadVar__5_5);
    }
#line 245 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__5_5));
#line 245 "read_modules.m"
  }
#line 245 "read_modules.m"
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
#line 238 "read_modules.m"
  {
#line 238 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 238 "read_modules.m"
    MR_String parse_tree__read_modules__FileName0_26;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_27;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__InterfaceSearchDirs_28;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_29;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_30;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeFileName_31;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampRes_32;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleSpecs_33;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__ActualModuleName_34;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__ComponentsCord_36;
#line 238 "read_modules.m"
    MR_Word parse_tree__read_modules__IsEmpty_37;
#line 238 "read_modules.m"
    MR_String parse_tree__read_modules__Extension_61;
#line 238 "read_modules.m"
    MR_String parse_tree__read_modules__Msg_62;
#line 238 "read_modules.m"
    MR_String parse_tree__read_modules__V_68_68;
#line 238 "read_modules.m"
    MR_String parse_tree__read_modules__V_69_69;
#line 238 "read_modules.m"
    MR_String parse_tree__read_modules__V_71_71;
#line 250 "read_modules.m"
    MR_Word parse_tree__read_modules___Context_35;

#line 316 "read_modules.m"
    {
#line 316 "read_modules.m"
      parse_tree__read_modules__Extension_61 = parse_tree__file_kind__file_kind_to_extension_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_27);
    }
#line 331 "read_modules.m"
    {
#line 331 "read_modules.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 649, &parse_tree__read_modules__InterfaceSearchDirs_28);
    }
#line 4118 "parse_tree.read_modules.c"
#line 4119 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_17) {
#line 4121 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4123 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 4125 "parse_tree.read_modules.c"
        {
#line 4127 "parse_tree.read_modules.c"
          MR_String parse_tree__read_modules__V_76_76;

#line 323 "read_modules.m"
          {
#line 323 "read_modules.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_61, (MR_Integer) 1, &parse_tree__read_modules__FileName0_26);
          }
#line 338 "read_modules.m"
          {
#line 338 "read_modules.m"
            parse_tree__read_modules__V_76_76 = mercury__dir__this_directory_0_f_0();
          }
#line 338 "read_modules.m"
          {
#line 338 "read_modules.m"
            parse_tree__read_modules__SearchDirs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 0) = ((MR_Box) (parse_tree__read_modules__V_76_76));
#line 338 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "read_modules.m"
          }
#line 4150 "parse_tree.read_modules.c"
        }
#line 4152 "parse_tree.read_modules.c"
        break;
#line 4154 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 4156 "parse_tree.read_modules.c"
        {
#line 319 "read_modules.m"
          {
#line 319 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_61, &parse_tree__read_modules__FileName0_26);
          }
#line 335 "read_modules.m"
          parse_tree__read_modules__SearchDirs_29 = parse_tree__read_modules__InterfaceSearchDirs_28;
#line 4165 "parse_tree.read_modules.c"
        }
#line 4167 "parse_tree.read_modules.c"
        break;
#line 4169 "parse_tree.read_modules.c"
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_26, (MR_String) "\'... ");
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__V_71_71);
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__V_68_68 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_15, parse_tree__read_modules__V_69_69);
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      parse_tree__read_modules__Msg_62 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__V_68_68);
    }
#line 328 "read_modules.m"
    {
#line 328 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__Msg_62);
    }
#line 329 "read_modules.m"
    {
#line 329 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_27);
    }
#line 245 "read_modules.m"
    {
#line 245 "read_modules.m"
      parse_tree__read_modules__OpenFile_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 245 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_3[0]));
#line 245 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 1) = ((MR_Box) (parse_tree__read_modules__read_module_src_13_p_0_1));
#line 245 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 245 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 3) = ((MR_Box) (parse_tree__read_modules__Globals_14));
#line 245 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_29));
#line 245 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 5) = ((MR_Box) (parse_tree__read_modules__InterfaceSearchDirs_28));
#line 245 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_30, 6) = ((MR_Box) (parse_tree__read_modules__ModuleName_18));
#line 245 "read_modules.m"
    }
#line 247 "read_modules.m"
    {
#line 247 "read_modules.m"
      parse_tree__prog_io__actually_read_module_src_11_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__OpenFile_30, &parse_tree__read_modules__MaybeFileName_31, parse_tree__read_modules__ReadModuleAndTimestamps_20, &parse_tree__read_modules__MaybeTimestampRes_32, parse_tree__read_modules__ParseTreeSrc_22, &parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Errors_24);
    }
#line 250 "read_modules.m"
    parse_tree__read_modules__ActualModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeSrc_22, (MR_Integer) 0)));
#line 250 "read_modules.m"
    parse_tree__read_modules___Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeSrc_22, (MR_Integer) 1)));
#line 250 "read_modules.m"
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
      parse_tree__read_modules__read_module_end_16_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__IgnoreErrors_16, parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__ActualModuleName_34, parse_tree__read_modules__FileName0_26, parse_tree__read_modules__MaybeFileName_31, parse_tree__read_modules__FileName_19, parse_tree__read_modules__MaybeTimestampRes_32, parse_tree__read_modules__MaybeTimestamp_21, parse_tree__read_modules__IsEmpty_37, parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Specs_23, *parse_tree__read_modules__Errors_24);
#line 252 "read_modules.m"
      return;
    }
#line 238 "read_modules.m"
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
