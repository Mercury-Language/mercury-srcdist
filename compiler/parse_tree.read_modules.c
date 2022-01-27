/*
** Automatically generated from `read_modules.m'
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

#line 470 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 470 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 470 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 470 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 470 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10);

#line 395 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 395 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15);

#line 353 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_16_p_0(
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_17,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_18,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_19,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_20,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_21,
#line 353 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_22,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_23,
#line 353 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_24,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_25,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_26,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_27,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_28,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_29,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_30);

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
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "mdbcomp.rtti_access.mh"



#line 594 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 602 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 611 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 619 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 627 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 636 "parse_tree.read_modules.c"
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

#line 651 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 656 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0
  }
};

#line 665 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 670 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1] = {
  (MR_Integer) 0
};

#line 675 "parse_tree.read_modules.c"
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

#line 692 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0
  }
};

#line 700 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 708 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 717 "parse_tree.read_modules.c"
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

#line 734 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 740 "parse_tree.read_modules.c"
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

#line 755 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 760 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0
  }
};

#line 769 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 774 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1] = {
  (MR_Integer) 0
};

#line 779 "parse_tree.read_modules.c"
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

#line 796 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 804 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 812 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2
  }
};

#line 821 "parse_tree.read_modules.c"
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

#line 838 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0
  }
};

#line 846 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 854 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 863 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0
  }
};

#line 871 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 879 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 888 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
};

#line 895 "parse_tree.read_modules.c"
static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3] = {
  (MR_String) "hrmm_src",
  (MR_String) "hrmm_int",
  (MR_String) "hrmm_opt"
};

#line 902 "parse_tree.read_modules.c"
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

#line 917 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 922 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0
  }
};

#line 931 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 936 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1] = {
  (MR_Integer) 0
};

#line 941 "parse_tree.read_modules.c"
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

#line 958 "parse_tree.read_modules.c"
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

#line 975 "parse_tree.read_modules.c"
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

#line 992 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  (MR_Integer) 0
};

#line 998 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  (MR_Integer) 1
};

#line 1004 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

#line 1010 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

#line 1016 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1022 "parse_tree.read_modules.c"
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

#line 1039 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
#line 1042 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1044 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1046 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1048 "parse_tree.read_modules.c"
{
#line 1050 "parse_tree.read_modules.c"
  {
#line 1052 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1055 "parse_tree.read_modules.c"
    {
#line 1057 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1060 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1062 "parse_tree.read_modules.c"
  }
#line 1064 "parse_tree.read_modules.c"
}

#line 1067 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
#line 1070 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1072 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1074 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1076 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1078 "parse_tree.read_modules.c"
{
#line 1080 "parse_tree.read_modules.c"
  {
#line 1082 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1085 "parse_tree.read_modules.c"
    {
#line 1087 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1090 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1092 "parse_tree.read_modules.c"
  }
#line 1094 "parse_tree.read_modules.c"
}

#line 1097 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
#line 1100 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1102 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1104 "parse_tree.read_modules.c"
{
#line 1106 "parse_tree.read_modules.c"
  {
#line 1108 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1111 "parse_tree.read_modules.c"
    {
#line 1113 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_int_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1116 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1118 "parse_tree.read_modules.c"
  }
#line 1120 "parse_tree.read_modules.c"
}

#line 1123 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
#line 1126 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1128 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1130 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1132 "parse_tree.read_modules.c"
{
#line 1134 "parse_tree.read_modules.c"
  {
#line 1136 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1139 "parse_tree.read_modules.c"
    {
#line 1141 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_int_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1144 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1146 "parse_tree.read_modules.c"
  }
#line 1148 "parse_tree.read_modules.c"
}

#line 1151 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
#line 1154 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1156 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1158 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1160 "parse_tree.read_modules.c"
{
#line 1162 "parse_tree.read_modules.c"
  {
#line 1164 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1167 "parse_tree.read_modules.c"
    {
#line 1169 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1172 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1174 "parse_tree.read_modules.c"
  }
#line 1176 "parse_tree.read_modules.c"
}

#line 1179 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
#line 1182 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1184 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1186 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1188 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1190 "parse_tree.read_modules.c"
{
#line 1192 "parse_tree.read_modules.c"
  {
#line 1194 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1197 "parse_tree.read_modules.c"
    {
#line 1199 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1202 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1204 "parse_tree.read_modules.c"
  }
#line 1206 "parse_tree.read_modules.c"
}

#line 1209 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
#line 1212 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1214 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1216 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1218 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1220 "parse_tree.read_modules.c"
{
#line 1222 "parse_tree.read_modules.c"
  {
#line 1224 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1227 "parse_tree.read_modules.c"
    {
#line 1229 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1232 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1234 "parse_tree.read_modules.c"
  }
#line 1236 "parse_tree.read_modules.c"
}

#line 1239 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
#line 1242 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1244 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1246 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
#line 1248 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4,
#line 1250 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_5)
#line 1252 "parse_tree.read_modules.c"
{
#line 1254 "parse_tree.read_modules.c"
  {
#line 1256 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1259 "parse_tree.read_modules.c"
    {
#line 1261 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_4), ((MR_Word) parse_tree__read_modules__wrapper_arg_5));
    }
#line 1264 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_3 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1266 "parse_tree.read_modules.c"
  }
#line 1268 "parse_tree.read_modules.c"
}

#line 1271 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
#line 1274 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1276 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1278 "parse_tree.read_modules.c"
{
#line 1280 "parse_tree.read_modules.c"
  {
#line 1282 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1285 "parse_tree.read_modules.c"
    {
#line 1287 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1290 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1292 "parse_tree.read_modules.c"
  }
#line 1294 "parse_tree.read_modules.c"
}

#line 1297 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
#line 1300 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1302 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1304 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1306 "parse_tree.read_modules.c"
{
#line 1308 "parse_tree.read_modules.c"
  {
#line 1310 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1313 "parse_tree.read_modules.c"
    {
#line 1315 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_maps_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1318 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1320 "parse_tree.read_modules.c"
  }
#line 1322 "parse_tree.read_modules.c"
}

#line 1325 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
#line 1328 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1330 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1332 "parse_tree.read_modules.c"
{
#line 1334 "parse_tree.read_modules.c"
  {
#line 1336 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1339 "parse_tree.read_modules.c"
    {
#line 1341 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1344 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1346 "parse_tree.read_modules.c"
  }
#line 1348 "parse_tree.read_modules.c"
}

#line 1351 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
#line 1354 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1356 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1358 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1360 "parse_tree.read_modules.c"
{
#line 1362 "parse_tree.read_modules.c"
  {
#line 1364 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1367 "parse_tree.read_modules.c"
    {
#line 1369 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1372 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1374 "parse_tree.read_modules.c"
  }
#line 1376 "parse_tree.read_modules.c"
}

#line 1379 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
#line 1382 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1384 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1386 "parse_tree.read_modules.c"
{
#line 1388 "parse_tree.read_modules.c"
  {
#line 1390 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1393 "parse_tree.read_modules.c"
    {
#line 1395 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1398 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1400 "parse_tree.read_modules.c"
  }
#line 1402 "parse_tree.read_modules.c"
}

#line 1405 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
#line 1408 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1410 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1412 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1414 "parse_tree.read_modules.c"
{
#line 1416 "parse_tree.read_modules.c"
  {
#line 1418 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1421 "parse_tree.read_modules.c"
    {
#line 1423 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1426 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1428 "parse_tree.read_modules.c"
  }
#line 1430 "parse_tree.read_modules.c"
}

#line 1433 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 1436 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1438 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1440 "parse_tree.read_modules.c"
{
#line 1442 "parse_tree.read_modules.c"
  {
#line 1444 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1447 "parse_tree.read_modules.c"
    {
#line 1449 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1452 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1454 "parse_tree.read_modules.c"
  }
#line 1456 "parse_tree.read_modules.c"
}

#line 1459 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 1462 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1464 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1466 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1468 "parse_tree.read_modules.c"
{
#line 1470 "parse_tree.read_modules.c"
  {
#line 1472 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1475 "parse_tree.read_modules.c"
    {
#line 1477 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1480 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1482 "parse_tree.read_modules.c"
  }
#line 1484 "parse_tree.read_modules.c"
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
#line 1528 "parse_tree.read_modules.c"
  {
#line 1530 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded = (parse_tree__read_modules__HeadVar__2_1 == parse_tree__read_modules__HeadVar__2_2);

#line 1533 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1535 "parse_tree.read_modules.c"
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
#line 1688 "parse_tree.read_modules.c"
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
#line 1714 "parse_tree.read_modules.c"
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
#line 1734 "parse_tree.read_modules.c"
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

#line 1809 "parse_tree.read_modules.c"
        {
#line 1811 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__V_3_3)), ((MR_Box) (parse_tree__read_modules__V_6_6)));
        }
#line 52 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
          {
#line 1818 "parse_tree.read_modules.c"
            parse_tree__read_modules__TypeInfo_12_12 = (MR_Word) &parse_tree__read_modules_scalar_common_2[0];
#line 1820 "parse_tree.read_modules.c"
            {
#line 1822 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_12_12, ((MR_Box) (parse_tree__read_modules__V_4_4)), ((MR_Box) (parse_tree__read_modules__V_7_7)));
            }
#line 52 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 52 "read_modules.m"
              {
#line 1829 "parse_tree.read_modules.c"
                parse_tree__read_modules__TypeInfo_13_13 = (MR_Word) &parse_tree__read_modules_scalar_common_2[2];
#line 1831 "parse_tree.read_modules.c"
                {
#line 1833 "parse_tree.read_modules.c"
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

#line 1877 "parse_tree.read_modules.c"
    {
#line 1879 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1881 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1883 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_6));
#line 1885 "parse_tree.read_modules.c"
    }
#line 1887 "parse_tree.read_modules.c"
    {
#line 1889 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1891 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1893 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_7));
#line 1895 "parse_tree.read_modules.c"
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

#line 1935 "parse_tree.read_modules.c"
    {
#line 1937 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1939 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1941 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_5));
#line 1943 "parse_tree.read_modules.c"
    }
#line 1945 "parse_tree.read_modules.c"
    {
#line 1947 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1949 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1951 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_6));
#line 1953 "parse_tree.read_modules.c"
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
#line 1993 "parse_tree.read_modules.c"
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
#line 2015 "parse_tree.read_modules.c"
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

#line 2078 "parse_tree.read_modules.c"
        {
#line 2080 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_5_5);
        }
#line 69 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 2085 "parse_tree.read_modules.c"
          {
#line 2087 "parse_tree.read_modules.c"
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
#line 2187 "parse_tree.read_modules.c"
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
#line 2221 "parse_tree.read_modules.c"
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
#line 2241 "parse_tree.read_modules.c"
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
#line 2261 "parse_tree.read_modules.c"
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
#line 2281 "parse_tree.read_modules.c"
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

#line 2370 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (strcmp(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_8_8) == 0);
#line 72 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
          {
#line 2376 "parse_tree.read_modules.c"
            {
#line 2378 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_9_9);
            }
#line 72 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
              {
#line 2385 "parse_tree.read_modules.c"
                {
#line 2387 "parse_tree.read_modules.c"
                  parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_PT_15, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_10_10);
                }
#line 72 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                  {
#line 2394 "parse_tree.read_modules.c"
                    parse_tree__read_modules__TypeInfo_17_17 = (MR_Word) &parse_tree__read_modules_scalar_common_1[4];
#line 2396 "parse_tree.read_modules.c"
                    {
#line 2398 "parse_tree.read_modules.c"
                      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_17_17, ((MR_Box) (parse_tree__read_modules__V_6_6)), ((MR_Box) (parse_tree__read_modules__V_11_11)));
                    }
#line 72 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 72 "read_modules.m"
                      {
#line 2405 "parse_tree.read_modules.c"
                        parse_tree__read_modules__TypeInfo_18_18 = (MR_Word) &parse_tree__read_modules_scalar_common_1[5];
#line 2407 "parse_tree.read_modules.c"
                        {
#line 2409 "parse_tree.read_modules.c"
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

#line 470 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 470 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 470 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 470 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 470 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10)
#line 470 "read_modules.m"
{
#line 476 "read_modules.m"
  {
#line 476 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 476 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "read_modules.m"
    else
#line 476 "read_modules.m"
      {
#line 476 "read_modules.m"
        MR_Word parse_tree__read_modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_9, (MR_Integer) 0)));

#line 476 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 479 "read_modules.m"
          {
#line 479 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));
#line 479 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_14;

#line 480 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "read_modules.m"
            {
#line 481 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_14);
            }
#line 488 "read_modules.m"
#line 488 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_14) {
#line 488 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 488 "read_modules.m"
              case (MR_Integer) 0:
#line 489 "read_modules.m"
                {
#line 489 "read_modules.m"
                }
#line 488 "read_modules.m"
                break;
#line 488 "read_modules.m"
              case (MR_Integer) 1:
#line 499 "read_modules.m"
                {
#line 499 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_28;

#line 500 "read_modules.m"
                  {
#line 500 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 501 "read_modules.m"
                  {
#line 501 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 502 "read_modules.m"
                  {
#line 502 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 23, &parse_tree__read_modules__Warn_28);
                  }
#line 520 "read_modules.m"
#line 520 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_28) {
#line 520 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 520 "read_modules.m"
                    case (MR_Integer) 0:
#line 521 "read_modules.m"
                      {
#line 521 "read_modules.m"
                      }
#line 520 "read_modules.m"
                      break;
#line 520 "read_modules.m"
                    case (MR_Integer) 1:
#line 504 "read_modules.m"
                      {
#line 504 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_29;
#line 504 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_30;

#line 505 "read_modules.m"
                        {
#line 505 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 506 "read_modules.m"
                        {
#line 506 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName_8);
                        }
#line 507 "read_modules.m"
                        {
#line 507 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 508 "read_modules.m"
                        {
#line 508 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_13, &parse_tree__read_modules__Msg_29);
                        }
#line 509 "read_modules.m"
                        {
#line 509 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 510 "read_modules.m"
                        {
#line 510 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_29);
                        }
#line 511 "read_modules.m"
                        {
#line 511 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 512 "read_modules.m"
                        {
#line 512 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 513 "read_modules.m"
                        {
#line 513 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_30);
                        }
#line 517 "read_modules.m"
#line 517 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_30) {
#line 517 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 517 "read_modules.m"
                          case (MR_Integer) 0:
#line 518 "read_modules.m"
                            {
#line 518 "read_modules.m"
                            }
#line 517 "read_modules.m"
                            break;
#line 517 "read_modules.m"
                          case (MR_Integer) 1:
#line 515 "read_modules.m"
                            {
#line 516 "read_modules.m"
                              {
#line 516 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 516 "read_modules.m"
                                return;
                              }
#line 515 "read_modules.m"
                            }
#line 517 "read_modules.m"
                            break;
#line 517 "read_modules.m"
                        }
#line 504 "read_modules.m"
                      }
#line 520 "read_modules.m"
                      break;
#line 520 "read_modules.m"
                  }
#line 499 "read_modules.m"
                }
#line 488 "read_modules.m"
                break;
#line 488 "read_modules.m"
            }
#line 479 "read_modules.m"
          }
#line 476 "read_modules.m"
        else
#line 476 "read_modules.m"
          {
#line 476 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));

#line 477 "read_modules.m"
            {
#line 477 "read_modules.m"
              MR_Word base;
#line 477 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 477 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_10 = base;
#line 477 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_12));
#line 477 "read_modules.m"
            }
#line 476 "read_modules.m"
          }
#line 476 "read_modules.m"
      }
#line 476 "read_modules.m"
  }
#line 470 "read_modules.m"
}

#line 395 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 395 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 395 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15)
#line 395 "read_modules.m"
{
#line 402 "read_modules.m"
  {
#line 402 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 400 "read_modules.m"
    {
#line 400 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_10);
    }
#line 402 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 401 "read_modules.m"
      {
#line 401 "read_modules.m"
        {
#line 401 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "successful parse.\n");
        }
#line 401 "read_modules.m"
        *parse_tree__read_modules__STATE_VARIABLE_Specs_15 = parse_tree__read_modules__STATE_VARIABLE_Specs_0_14;
#line 401 "read_modules.m"
      }
#line 402 "read_modules.m"
    else
#line 403 "read_modules.m"
      {
#line 403 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_30;
#line 403 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_13;
#line 403 "read_modules.m"
        MR_Word parse_tree__read_modules__V_20_20;

#line 403 "read_modules.m"
        {
#line 403 "read_modules.m"
          parse_tree__read_modules__V_20_20 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 2702 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 403 "read_modules.m"
        {
#line 403 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__Errors_10, parse_tree__read_modules__V_20_20, &parse_tree__read_modules__FatalErrors_13);
        }
#line 404 "read_modules.m"
        {
#line 404 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__FatalErrors_13);
        }
#line 406 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 405 "read_modules.m"
          {
#line 405 "read_modules.m"
            {
#line 405 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "parse error(s).\n");
            }
#line 405 "read_modules.m"
          }
#line 406 "read_modules.m"
        else
#line 407 "read_modules.m"
          {
#line 407 "read_modules.m"
            {
#line 407 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "fatal error(s).\n");
            }
#line 407 "read_modules.m"
          }
#line 409 "read_modules.m"
        {
#line 409 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_9, parse_tree__read_modules__Globals_8, parse_tree__read_modules__STATE_VARIABLE_Specs_0_14, parse_tree__read_modules__STATE_VARIABLE_Specs_15);
        }
#line 410 "read_modules.m"
        {
#line 410 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 410 "read_modules.m"
          return;
        }
#line 403 "read_modules.m"
      }
#line 402 "read_modules.m"
  }
#line 395 "read_modules.m"
}

#line 353 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_16_p_0(
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_17,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_18,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_19,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_20,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_21,
#line 353 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_22,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_23,
#line 353 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_24,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_25,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_26,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_27,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_28,
#line 353 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_29,
#line 353 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_30)
#line 353 "read_modules.m"
{
#line 363 "read_modules.m"
  {
#line 363 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 363 "read_modules.m"
    MR_Word parse_tree__read_modules__NameSpecs_32;

#line 366 "read_modules.m"
    if ((parse_tree__read_modules__MaybeFileName_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "read_modules.m"
      *parse_tree__read_modules__FileName_24 = parse_tree__read_modules__FileName0_22;
#line 366 "read_modules.m"
    else
#line 365 "read_modules.m"
      *parse_tree__read_modules__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeFileName_23, (MR_Integer) 0)));
#line 370 "read_modules.m"
    {
#line 370 "read_modules.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(*parse_tree__read_modules__FileName_24, parse_tree__read_modules__ModuleName_20, parse_tree__read_modules__ActualModuleName_21, &parse_tree__read_modules__NameSpecs_32);
    }
#line 476 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "read_modules.m"
    else
#line 476 "read_modules.m"
      {
#line 476 "read_modules.m"
        MR_Word parse_tree__read_modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_25, (MR_Integer) 0)));

#line 476 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_59_59)) == (MR_mktag((MR_Integer) 1))))
#line 479 "read_modules.m"
          {
#line 479 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_59_59, (MR_Integer) 0)));
#line 479 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_54;

#line 480 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "read_modules.m"
            {
#line 481 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_54);
            }
#line 488 "read_modules.m"
#line 488 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_54) {
#line 488 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 488 "read_modules.m"
              case (MR_Integer) 0:
#line 489 "read_modules.m"
                {
#line 489 "read_modules.m"
                }
#line 488 "read_modules.m"
                break;
#line 488 "read_modules.m"
              case (MR_Integer) 1:
#line 499 "read_modules.m"
                {
#line 499 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_66;

#line 500 "read_modules.m"
                  {
#line 500 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 501 "read_modules.m"
                  {
#line 501 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 502 "read_modules.m"
                  {
#line 502 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 23, &parse_tree__read_modules__Warn_66);
                  }
#line 520 "read_modules.m"
#line 520 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_66) {
#line 520 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 520 "read_modules.m"
                    case (MR_Integer) 0:
#line 521 "read_modules.m"
                      {
#line 521 "read_modules.m"
                      }
#line 520 "read_modules.m"
                      break;
#line 520 "read_modules.m"
                    case (MR_Integer) 1:
#line 504 "read_modules.m"
                      {
#line 504 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_67;
#line 504 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_68;

#line 505 "read_modules.m"
                        {
#line 505 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 506 "read_modules.m"
                        {
#line 506 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName0_22);
                        }
#line 507 "read_modules.m"
                        {
#line 507 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 508 "read_modules.m"
                        {
#line 508 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_53, &parse_tree__read_modules__Msg_67);
                        }
#line 509 "read_modules.m"
                        {
#line 509 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 510 "read_modules.m"
                        {
#line 510 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_67);
                        }
#line 511 "read_modules.m"
                        {
#line 511 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 512 "read_modules.m"
                        {
#line 512 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 513 "read_modules.m"
                        {
#line 513 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_68);
                        }
#line 517 "read_modules.m"
#line 517 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_68) {
#line 517 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 517 "read_modules.m"
                          case (MR_Integer) 0:
#line 518 "read_modules.m"
                            {
#line 518 "read_modules.m"
                            }
#line 517 "read_modules.m"
                            break;
#line 517 "read_modules.m"
                          case (MR_Integer) 1:
#line 515 "read_modules.m"
                            {
#line 516 "read_modules.m"
                              {
#line 516 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                              }
#line 515 "read_modules.m"
                            }
#line 517 "read_modules.m"
                            break;
#line 517 "read_modules.m"
                        }
#line 504 "read_modules.m"
                      }
#line 520 "read_modules.m"
                      break;
#line 520 "read_modules.m"
                  }
#line 499 "read_modules.m"
                }
#line 488 "read_modules.m"
                break;
#line 488 "read_modules.m"
            }
#line 479 "read_modules.m"
          }
#line 476 "read_modules.m"
        else
#line 476 "read_modules.m"
          {
#line 476 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_59_59, (MR_Integer) 0)));

#line 477 "read_modules.m"
            {
#line 477 "read_modules.m"
              MR_Word base;
#line 477 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 477 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_26 = base;
#line 477 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_52));
#line 477 "read_modules.m"
            }
#line 476 "read_modules.m"
          }
#line 476 "read_modules.m"
      }
#line 388 "read_modules.m"
#line 388 "read_modules.m"
    switch (parse_tree__read_modules__IgnoreErrors_18) {
#line 388 "read_modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 388 "read_modules.m"
      case (MR_Integer) 1:
#line 389 "read_modules.m"
        {
#line 389 "read_modules.m"
          MR_Word parse_tree__read_modules__ModuleNameSpecs_33;

#line 390 "read_modules.m"
          {
#line 390 "read_modules.m"
            parse_tree__read_modules__ModuleNameSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__read_modules__NameSpecs_32, parse_tree__read_modules__ModuleSpecs_28);
          }
#line 391 "read_modules.m"
          {
#line 391 "read_modules.m"
            parse_tree__read_modules__handle_any_read_module_errors_7_p_0(parse_tree__read_modules__Globals_17, parse_tree__read_modules__VeryVerbose_19, parse_tree__read_modules__Errors_30, parse_tree__read_modules__ModuleNameSpecs_33, parse_tree__read_modules__Specs_29);
#line 391 "read_modules.m"
            return;
          }
#line 389 "read_modules.m"
        }
#line 388 "read_modules.m"
        break;
#line 388 "read_modules.m"
      case (MR_Integer) 0:
#line 375 "read_modules.m"
        {
#line 376 "read_modules.m"
          *parse_tree__read_modules__Specs_29 = parse_tree__read_modules__NameSpecs_32;
#line 378 "read_modules.m"
          {
#line 378 "read_modules.m"
            parse_tree__read_modules__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_30, ((MR_Box) ((MR_Integer) 0)));
          }
#line 378 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 382 "read_modules.m"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__IsEmpty_27 == (MR_Integer) 1);
#line 385 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 384 "read_modules.m"
            {
#line 384 "read_modules.m"
              {
#line 384 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_19, (MR_String) "not found.\n");
#line 384 "read_modules.m"
                return;
              }
#line 384 "read_modules.m"
            }
#line 385 "read_modules.m"
          else
#line 386 "read_modules.m"
            {
#line 386 "read_modules.m"
              {
#line 386 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_19, (MR_String) "done.\n");
#line 386 "read_modules.m"
                return;
              }
#line 386 "read_modules.m"
            }
#line 375 "read_modules.m"
        }
#line 388 "read_modules.m"
        break;
#line 388 "read_modules.m"
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
#line 454 "read_modules.m"
  {
#line 454 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 454 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_19;
#line 454 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_20;
#line 454 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_21;
#line 456 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_20;

#line 455 "read_modules.m"
    {
#line 455 "read_modules.m"
      parse_tree__read_modules__Key_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_11));
#line 455 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 1) = ((MR_Box) (parse_tree__read_modules__IntFileKind_12));
#line 455 "read_modules.m"
    }
#line 456 "read_modules.m"
    {
#line 456 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[2], (MR_Word) &parse_tree__read_modules_scalar_common_1[3], parse_tree__read_modules__HaveReadModuleMap_10, ((MR_Box) (parse_tree__read_modules__Key_19)), &parse_tree__read_modules__conv0_HaveReadModule_20);
    }
#line 456 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 456 "read_modules.m"
      {
#line 456 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_20 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_20);
#line 456 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 456 "read_modules.m"
      }
#line 454 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 454 "read_modules.m"
      {
#line 457 "read_modules.m"
        *parse_tree__read_modules__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 0)));
#line 457 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 1)));
#line 457 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 2)));
#line 457 "read_modules.m"
        *parse_tree__read_modules__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 3)));
#line 457 "read_modules.m"
        *parse_tree__read_modules__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 4)));
#line 463 "read_modules.m"
#line 463 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_13) {
#line 463 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 463 "read_modules.m"
          case (MR_Integer) 0:
#line 460 "read_modules.m"
            {
#line 460 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 1)));
#line 461 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 0)));
#line 461 "read_modules.m"
              MR_Word parse_tree__read_modules__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 2)));

#line 462 "read_modules.m"
              {
#line 462 "read_modules.m"
                MR_Word base;
#line 462 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 462 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_15 = base;
#line 462 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_23));
#line 462 "read_modules.m"
              }
#line 460 "read_modules.m"
            }
#line 463 "read_modules.m"
            break;
#line 463 "read_modules.m"
          case (MR_Integer) 1:
#line 465 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "read_modules.m"
            break;
#line 463 "read_modules.m"
        }
#line 463 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 454 "read_modules.m"
      }
#line 454 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 454 "read_modules.m"
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
#line 438 "read_modules.m"
  {
#line 438 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 438 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_17;
#line 438 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_18;
#line 438 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_19;
#line 440 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_18;

#line 439 "read_modules.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 439 "read_modules.m"
    {
#line 439 "read_modules.m"
      parse_tree__read_modules__Key_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_10));
#line 439 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 1) = NULL;
#line 439 "read_modules.m"
    }
#line 440 "read_modules.m"
    {
#line 440 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[0], (MR_Word) &parse_tree__read_modules_scalar_common_1[1], parse_tree__read_modules__HaveReadModuleMap_9, ((MR_Box) (parse_tree__read_modules__Key_17)), &parse_tree__read_modules__conv0_HaveReadModule_18);
    }
#line 440 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 440 "read_modules.m"
      {
#line 440 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_18 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_18);
#line 440 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 440 "read_modules.m"
      }
#line 438 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 438 "read_modules.m"
      {
#line 441 "read_modules.m"
        *parse_tree__read_modules__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 0)));
#line 441 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 1)));
#line 441 "read_modules.m"
        *parse_tree__read_modules__ParseTreeSrc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 2)));
#line 441 "read_modules.m"
        *parse_tree__read_modules__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 3)));
#line 441 "read_modules.m"
        *parse_tree__read_modules__Errors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 4)));
#line 447 "read_modules.m"
#line 447 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_11) {
#line 447 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 447 "read_modules.m"
          case (MR_Integer) 0:
#line 444 "read_modules.m"
            {
#line 444 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 1)));
#line 445 "read_modules.m"
              MR_Word parse_tree__read_modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 0)));
#line 445 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 2)));

#line 446 "read_modules.m"
              {
#line 446 "read_modules.m"
                MR_Word base;
#line 446 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_13 = base;
#line 446 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_21));
#line 446 "read_modules.m"
              }
#line 444 "read_modules.m"
            }
#line 447 "read_modules.m"
            break;
#line 447 "read_modules.m"
          case (MR_Integer) 1:
#line 449 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 447 "read_modules.m"
            break;
#line 447 "read_modules.m"
        }
#line 447 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 438 "read_modules.m"
      }
#line 438 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 438 "read_modules.m"
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
#line 428 "read_modules.m"
  {
#line 428 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 428 "read_modules.m"
    MR_String parse_tree__read_modules__FileNamePrime_28;
#line 428 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampPrime_29;
#line 428 "read_modules.m"
    MR_Word parse_tree__read_modules__ParseTreeIntPrime_30;
#line 428 "read_modules.m"
    MR_Word parse_tree__read_modules__SpecsPrime_31;
#line 428 "read_modules.m"
    MR_Word parse_tree__read_modules__ErrorsPrime_32;

#line 419 "read_modules.m"
    {
#line 419 "read_modules.m"
      parse_tree__read_modules__succeeded = parse_tree__read_modules__find_read_module_int_9_p_0(parse_tree__read_modules__HaveReadModuleMap_16, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__ReturnTimestamp_22, &parse_tree__read_modules__FileNamePrime_28, &parse_tree__read_modules__MaybeTimestampPrime_29, &parse_tree__read_modules__ParseTreeIntPrime_30, &parse_tree__read_modules__SpecsPrime_31, &parse_tree__read_modules__ErrorsPrime_32);
    }
#line 428 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 423 "read_modules.m"
      {
#line 423 "read_modules.m"
        *parse_tree__read_modules__FileName_21 = parse_tree__read_modules__FileNamePrime_28;
#line 424 "read_modules.m"
        *parse_tree__read_modules__MaybeTimestamp_23 = parse_tree__read_modules__MaybeTimestampPrime_29;
#line 425 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_24 = parse_tree__read_modules__ParseTreeIntPrime_30;
#line 426 "read_modules.m"
        *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__SpecsPrime_31;
#line 427 "read_modules.m"
        *parse_tree__read_modules__Errors_26 = parse_tree__read_modules__ErrorsPrime_32;
#line 423 "read_modules.m"
      }
#line 428 "read_modules.m"
    else
#line 429 "read_modules.m"
      {
#line 429 "read_modules.m"
        MR_Word parse_tree__read_modules__V_36_36;

#line 431 "read_modules.m"
        {
#line 431 "read_modules.m"
          parse_tree__read_modules__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 431 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_36_36, 0) = ((MR_Box) (parse_tree__read_modules__ReturnTimestamp_22));
#line 431 "read_modules.m"
        }
#line 429 "read_modules.m"
        {
#line 429 "read_modules.m"
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__Descr_17, (MR_Integer) 1, parse_tree__read_modules__Search_18, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__FileName_21, parse_tree__read_modules__V_36_36, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__ParseTreeInt_24, parse_tree__read_modules__Specs_25, parse_tree__read_modules__Errors_26);
#line 429 "read_modules.m"
          return;
        }
#line 429 "read_modules.m"
      }
#line 428 "read_modules.m"
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
            libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 649, &parse_tree__read_modules__SearchDirs_27);
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
#line 400 "read_modules.m"
    {
#line 400 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, *parse_tree__read_modules__Errors_20);
    }
#line 402 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 401 "read_modules.m"
      {
#line 401 "read_modules.m"
        {
#line 401 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "successful parse.\n");
        }
#line 401 "read_modules.m"
        *parse_tree__read_modules__Specs_19 = parse_tree__read_modules__Specs0_31;
#line 401 "read_modules.m"
      }
#line 402 "read_modules.m"
    else
#line 403 "read_modules.m"
      {
#line 403 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_78;
#line 403 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_65;
#line 403 "read_modules.m"
        MR_Word parse_tree__read_modules__V_68_68;

#line 403 "read_modules.m"
        {
#line 403 "read_modules.m"
          parse_tree__read_modules__V_68_68 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3674 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_78 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 403 "read_modules.m"
        {
#line 403 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, *parse_tree__read_modules__Errors_20, parse_tree__read_modules__V_68_68, &parse_tree__read_modules__FatalErrors_65);
        }
#line 404 "read_modules.m"
        {
#line 404 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, parse_tree__read_modules__FatalErrors_65);
        }
#line 406 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 405 "read_modules.m"
          {
#line 405 "read_modules.m"
            {
#line 405 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "parse error(s).\n");
            }
#line 405 "read_modules.m"
          }
#line 406 "read_modules.m"
        else
#line 407 "read_modules.m"
          {
#line 407 "read_modules.m"
            {
#line 407 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "fatal error(s).\n");
            }
#line 407 "read_modules.m"
          }
#line 409 "read_modules.m"
        {
#line 409 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Globals_12, parse_tree__read_modules__Specs0_31, parse_tree__read_modules__Specs_19);
        }
#line 410 "read_modules.m"
        {
#line 410 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 410 "read_modules.m"
          return;
        }
#line 403 "read_modules.m"
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
    MR_Word parse_tree__read_modules___Context_38;
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
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 649, &parse_tree__read_modules___InterfaceSearchDirs_30);
    }
#line 3866 "parse_tree.read_modules.c"
#line 3867 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_18) {
#line 3869 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3871 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 3873 "parse_tree.read_modules.c"
        {
#line 3875 "parse_tree.read_modules.c"
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
#line 3898 "parse_tree.read_modules.c"
        }
#line 3900 "parse_tree.read_modules.c"
        break;
#line 3902 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 3904 "parse_tree.read_modules.c"
        {
#line 331 "read_modules.m"
          {
#line 331 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_70, &parse_tree__read_modules__FileName0_28);
          }
#line 347 "read_modules.m"
          parse_tree__read_modules__SearchDirs_31 = parse_tree__read_modules___InterfaceSearchDirs_30;
#line 3913 "parse_tree.read_modules.c"
        }
#line 3915 "parse_tree.read_modules.c"
        break;
#line 3917 "parse_tree.read_modules.c"
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
    parse_tree__read_modules___Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTreeInt_24, (MR_Integer) 2)));
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
      parse_tree__read_modules__read_module_end_16_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__IgnoreErrors_17, parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__ActualModuleName_36, parse_tree__read_modules__FileName0_28, parse_tree__read_modules__MaybeFileName_33, parse_tree__read_modules__FileName_21, parse_tree__read_modules__MaybeTimestampRes_34, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__IsEmpty_46, parse_tree__read_modules__ModuleSpecs_35, parse_tree__read_modules__Specs_25, *parse_tree__read_modules__Errors_26);
#line 281 "read_modules.m"
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
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 649, &parse_tree__read_modules__InterfaceSearchDirs_28);
    }
#line 4163 "parse_tree.read_modules.c"
#line 4164 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_17) {
#line 4166 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4168 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 4170 "parse_tree.read_modules.c"
        {
#line 4172 "parse_tree.read_modules.c"
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
#line 4195 "parse_tree.read_modules.c"
        }
#line 4197 "parse_tree.read_modules.c"
        break;
#line 4199 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 4201 "parse_tree.read_modules.c"
        {
#line 331 "read_modules.m"
          {
#line 331 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_61, &parse_tree__read_modules__FileName0_26);
          }
#line 347 "read_modules.m"
          parse_tree__read_modules__SearchDirs_29 = parse_tree__read_modules__InterfaceSearchDirs_28;
#line 4210 "parse_tree.read_modules.c"
        }
#line 4212 "parse_tree.read_modules.c"
        break;
#line 4214 "parse_tree.read_modules.c"
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
