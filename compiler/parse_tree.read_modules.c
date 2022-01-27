/*
** Automatically generated from `read_modules.m'
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
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_int_file_kind_0;

#line 135 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

#line 138 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0;

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
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_src_file_kind_0;

#line 171 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

#line 174 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

#line 177 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_opt_file_kind_0;

#line 180 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

#line 183 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

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

#line 457 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 457 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 457 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 457 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 457 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10);

#line 382 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 382 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15);

#line 340 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_16_p_0(
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_17,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_18,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_19,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_20,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_21,
#line 340 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_22,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_23,
#line 340 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_24,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_25,
#line 340 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_26,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_27,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_28,
#line 340 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_29,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_30);

#line 298 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0_1(
#line 298 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 298 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 298 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 298 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3);

#line 261 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0_1(
#line 261 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 261 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 261 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 261 "read_modules.m"
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_file_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_file_kind_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_file_kind_0))
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



#line 596 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 604 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 613 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 621 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 629 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__prog_io_error__type_ctor_info_read_module_error_0
};

#line 638 "parse_tree.read_modules.c"
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

#line 653 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 658 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0
  }
};

#line 667 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

#line 672 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[1] = {
  (MR_Integer) 0
};

#line 677 "parse_tree.read_modules.c"
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

#line 694 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_int_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_file_kind_0
  }
};

#line 702 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 710 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_int_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0
  }
};

#line 719 "parse_tree.read_modules.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 736 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 742 "parse_tree.read_modules.c"
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

#line 757 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 762 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0
  }
};

#line 771 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

#line 776 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1] = {
  (MR_Integer) 0
};

#line 781 "parse_tree.read_modules.c"
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

#line 798 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 806 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 814 "parse_tree.read_modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_key_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2
  }
};

#line 823 "parse_tree.read_modules.c"
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

#line 840 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_src_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_file_kind_0
  }
};

#line 848 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 856 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_src_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0
  }
};

#line 865 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_opt_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_file_kind_0
  }
};

#line 873 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 881 "parse_tree.read_modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_opt_file_kind_0,
    (MR_TypeInfo) &parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
  }
};

#line 890 "parse_tree.read_modules.c"
static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_int_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int_0,
  (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0
};

#line 897 "parse_tree.read_modules.c"
static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[3] = {
  (MR_String) "hrmm_src",
  (MR_String) "hrmm_int",
  (MR_String) "hrmm_opt"
};

#line 904 "parse_tree.read_modules.c"
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

#line 919 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 924 "parse_tree.read_modules.c"
static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0
  }
};

#line 933 "parse_tree.read_modules.c"
static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

#line 938 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1] = {
  (MR_Integer) 0
};

#line 943 "parse_tree.read_modules.c"
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

#line 960 "parse_tree.read_modules.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 977 "parse_tree.read_modules.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__prog_item__type_ctor_info_src_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 994 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  (MR_Integer) 0
};

#line 1000 "parse_tree.read_modules.c"
static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  (MR_Integer) 1
};

#line 1006 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

#line 1012 "parse_tree.read_modules.c"
static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

#line 1018 "parse_tree.read_modules.c"
static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1024 "parse_tree.read_modules.c"
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

#line 1041 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
#line 1044 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1046 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1048 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1050 "parse_tree.read_modules.c"
{
#line 1052 "parse_tree.read_modules.c"
  {
#line 1054 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1057 "parse_tree.read_modules.c"
    {
#line 1059 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1062 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1064 "parse_tree.read_modules.c"
  }
#line 1066 "parse_tree.read_modules.c"
}

#line 1069 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
#line 1072 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1074 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1076 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1078 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1080 "parse_tree.read_modules.c"
{
#line 1082 "parse_tree.read_modules.c"
  {
#line 1084 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1087 "parse_tree.read_modules.c"
    {
#line 1089 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1092 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1094 "parse_tree.read_modules.c"
  }
#line 1096 "parse_tree.read_modules.c"
}

#line 1099 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0_10001(
#line 1102 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1104 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1106 "parse_tree.read_modules.c"
{
#line 1108 "parse_tree.read_modules.c"
  {
#line 1110 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1113 "parse_tree.read_modules.c"
    {
#line 1115 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_int_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1118 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1120 "parse_tree.read_modules.c"
  }
#line 1122 "parse_tree.read_modules.c"
}

#line 1125 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0_10001(
#line 1128 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1130 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1132 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1134 "parse_tree.read_modules.c"
{
#line 1136 "parse_tree.read_modules.c"
  {
#line 1138 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1141 "parse_tree.read_modules.c"
    {
#line 1143 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_int_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1146 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1148 "parse_tree.read_modules.c"
  }
#line 1150 "parse_tree.read_modules.c"
}

#line 1153 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
#line 1156 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1158 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1160 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1162 "parse_tree.read_modules.c"
{
#line 1164 "parse_tree.read_modules.c"
  {
#line 1166 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1169 "parse_tree.read_modules.c"
    {
#line 1171 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1174 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1176 "parse_tree.read_modules.c"
  }
#line 1178 "parse_tree.read_modules.c"
}

#line 1181 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
#line 1184 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1186 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_2,
#line 1188 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1190 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1192 "parse_tree.read_modules.c"
{
#line 1194 "parse_tree.read_modules.c"
  {
#line 1196 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1199 "parse_tree.read_modules.c"
    {
#line 1201 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1204 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_2 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1206 "parse_tree.read_modules.c"
  }
#line 1208 "parse_tree.read_modules.c"
}

#line 1211 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
#line 1214 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1216 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1218 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3,
#line 1220 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4)
#line 1222 "parse_tree.read_modules.c"
{
#line 1224 "parse_tree.read_modules.c"
  {
#line 1226 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1229 "parse_tree.read_modules.c"
    {
#line 1231 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3), ((MR_Word) parse_tree__read_modules__wrapper_arg_4));
    }
#line 1234 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1236 "parse_tree.read_modules.c"
  }
#line 1238 "parse_tree.read_modules.c"
}

#line 1241 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
#line 1244 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1246 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1248 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_3,
#line 1250 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_4,
#line 1252 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_5)
#line 1254 "parse_tree.read_modules.c"
{
#line 1256 "parse_tree.read_modules.c"
  {
#line 1258 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1261 "parse_tree.read_modules.c"
    {
#line 1263 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2), &parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_4), ((MR_Word) parse_tree__read_modules__wrapper_arg_5));
    }
#line 1266 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_3 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1268 "parse_tree.read_modules.c"
  }
#line 1270 "parse_tree.read_modules.c"
}

#line 1273 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
#line 1276 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1278 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1280 "parse_tree.read_modules.c"
{
#line 1282 "parse_tree.read_modules.c"
  {
#line 1284 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1287 "parse_tree.read_modules.c"
    {
#line 1289 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1292 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1294 "parse_tree.read_modules.c"
  }
#line 1296 "parse_tree.read_modules.c"
}

#line 1299 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
#line 1302 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1304 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1306 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1308 "parse_tree.read_modules.c"
{
#line 1310 "parse_tree.read_modules.c"
  {
#line 1312 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1315 "parse_tree.read_modules.c"
    {
#line 1317 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_maps_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1320 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1322 "parse_tree.read_modules.c"
  }
#line 1324 "parse_tree.read_modules.c"
}

#line 1327 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
#line 1330 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1332 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1334 "parse_tree.read_modules.c"
{
#line 1336 "parse_tree.read_modules.c"
  {
#line 1338 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1341 "parse_tree.read_modules.c"
    {
#line 1343 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1346 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1348 "parse_tree.read_modules.c"
  }
#line 1350 "parse_tree.read_modules.c"
}

#line 1353 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
#line 1356 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1358 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1360 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1362 "parse_tree.read_modules.c"
{
#line 1364 "parse_tree.read_modules.c"
  {
#line 1366 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1369 "parse_tree.read_modules.c"
    {
#line 1371 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1374 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1376 "parse_tree.read_modules.c"
  }
#line 1378 "parse_tree.read_modules.c"
}

#line 1381 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
#line 1384 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1386 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1388 "parse_tree.read_modules.c"
{
#line 1390 "parse_tree.read_modules.c"
  {
#line 1392 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1395 "parse_tree.read_modules.c"
    {
#line 1397 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1400 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1402 "parse_tree.read_modules.c"
  }
#line 1404 "parse_tree.read_modules.c"
}

#line 1407 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
#line 1410 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1412 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1414 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1416 "parse_tree.read_modules.c"
{
#line 1418 "parse_tree.read_modules.c"
  {
#line 1420 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1423 "parse_tree.read_modules.c"
    {
#line 1425 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1428 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1430 "parse_tree.read_modules.c"
  }
#line 1432 "parse_tree.read_modules.c"
}

#line 1435 "parse_tree.read_modules.c"
static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
#line 1438 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_1,
#line 1440 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2)
#line 1442 "parse_tree.read_modules.c"
{
#line 1444 "parse_tree.read_modules.c"
  {
#line 1446 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded;

#line 1449 "parse_tree.read_modules.c"
    {
#line 1451 "parse_tree.read_modules.c"
      parse_tree__read_modules__succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) parse_tree__read_modules__wrapper_arg_1), ((MR_Word) parse_tree__read_modules__wrapper_arg_2));
    }
#line 1454 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1456 "parse_tree.read_modules.c"
  }
#line 1458 "parse_tree.read_modules.c"
}

#line 1461 "parse_tree.read_modules.c"
static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
#line 1464 "parse_tree.read_modules.c"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 1466 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 1468 "parse_tree.read_modules.c"
  MR_Box parse_tree__read_modules__wrapper_arg_3)
#line 1470 "parse_tree.read_modules.c"
{
#line 1472 "parse_tree.read_modules.c"
  {
#line 1474 "parse_tree.read_modules.c"
    MR_Word parse_tree__read_modules__conv0_HeadVar__1_1;

#line 1477 "parse_tree.read_modules.c"
    {
#line 1479 "parse_tree.read_modules.c"
      parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&parse_tree__read_modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__read_modules__wrapper_arg_2), ((MR_Word) parse_tree__read_modules__wrapper_arg_3));
    }
#line 1482 "parse_tree.read_modules.c"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__1_1));
#line 1484 "parse_tree.read_modules.c"
  }
#line 1486 "parse_tree.read_modules.c"
}

#line 82 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
#line 82 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 82 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 82 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 82 "read_modules.m"
{
#line 82 "read_modules.m"
  {
#line 82 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 82 "read_modules.m"
    MR_Integer parse_tree__read_modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 82 "read_modules.m"
    MR_Integer parse_tree__read_modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 82 "read_modules.m"
    {
#line 82 "read_modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__Cast_HeadVar1_4, parse_tree__read_modules__Cast_HeadVar2_5);
#line 82 "read_modules.m"
      return;
    }
#line 82 "read_modules.m"
  }
#line 82 "read_modules.m"
}

#line 82 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
#line 82 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_1,
#line 82 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 82 "read_modules.m"
{
#line 1530 "parse_tree.read_modules.c"
  {
#line 1532 "parse_tree.read_modules.c"
    MR_bool parse_tree__read_modules__succeeded = (parse_tree__read_modules__HeadVar__2_1 == parse_tree__read_modules__HeadVar__2_2);

#line 1535 "parse_tree.read_modules.c"
    return parse_tree__read_modules__succeeded;
#line 1537 "parse_tree.read_modules.c"
  }
#line 82 "read_modules.m"
}

#line 58 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0(
#line 58 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 58 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 58 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 58 "read_modules.m"
{
#line 58 "read_modules.m"
  {
#line 58 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 58 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 58 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 58 "read_modules.m"
    {
#line 58 "read_modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
#line 58 "read_modules.m"
      return;
    }
#line 58 "read_modules.m"
  }
#line 58 "read_modules.m"
}

#line 58 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0(
#line 58 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 58 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 58 "read_modules.m"
{
#line 58 "read_modules.m"
  {
#line 58 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 58 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 58 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 58 "read_modules.m"
    {
#line 58 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
#line 58 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 58 "read_modules.m"
  }
#line 58 "read_modules.m"
}

#line 62 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(
#line 62 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 62 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 62 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 62 "read_modules.m"
{
#line 62 "read_modules.m"
  {
#line 62 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 62 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 62 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 62 "read_modules.m"
    {
#line 62 "read_modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
#line 62 "read_modules.m"
      return;
    }
#line 62 "read_modules.m"
  }
#line 62 "read_modules.m"
}

#line 62 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(
#line 62 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 62 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 62 "read_modules.m"
{
#line 62 "read_modules.m"
  {
#line 62 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 62 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 62 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 62 "read_modules.m"
    {
#line 62 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
#line 62 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 62 "read_modules.m"
  }
#line 62 "read_modules.m"
}

#line 51 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0(
#line 51 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 51 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 51 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 51 "read_modules.m"
{
#line 51 "read_modules.m"
  {
#line 51 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 51 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_12 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 51 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_13 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 51 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_12 == parse_tree__read_modules__CastY_13);
#line 51 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 1690 "parse_tree.read_modules.c"
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "read_modules.m"
    else
#line 51 "read_modules.m"
      {
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_10_10;

#line 51 "read_modules.m"
        {
#line 51 "read_modules.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], &parse_tree__read_modules__V_10_10, ((MR_Box) (parse_tree__read_modules__V_4_4)), ((MR_Box) (parse_tree__read_modules__V_7_7)));
        }
#line 1716 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_10_10 == (MR_Integer) 0);
#line 51 "read_modules.m"
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 51 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 51 "read_modules.m"
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_10_10;
#line 51 "read_modules.m"
        else
#line 51 "read_modules.m"
          {
#line 51 "read_modules.m"
            MR_Word parse_tree__read_modules__V_11_11;

#line 51 "read_modules.m"
            {
#line 51 "read_modules.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], &parse_tree__read_modules__V_11_11, ((MR_Box) (parse_tree__read_modules__V_5_5)), ((MR_Box) (parse_tree__read_modules__V_8_8)));
            }
#line 1736 "parse_tree.read_modules.c"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_11_11 == (MR_Integer) 0);
#line 51 "read_modules.m"
            parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 51 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 51 "read_modules.m"
              *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_11_11;
#line 51 "read_modules.m"
            else
#line 51 "read_modules.m"
              {
#line 51 "read_modules.m"
                {
#line 51 "read_modules.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[2], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__V_6_6)), ((MR_Box) (parse_tree__read_modules__V_9_9)));
#line 51 "read_modules.m"
                  return;
                }
#line 51 "read_modules.m"
              }
#line 51 "read_modules.m"
          }
#line 51 "read_modules.m"
      }
#line 51 "read_modules.m"
  }
#line 51 "read_modules.m"
}

#line 51 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0(
#line 51 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 51 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 51 "read_modules.m"
{
#line 51 "read_modules.m"
  {
#line 51 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 51 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_9 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
#line 51 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_10 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

#line 51 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_9 == parse_tree__read_modules__CastY_10);
#line 51 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 51 "read_modules.m"
      parse_tree__read_modules__succeeded = MR_TRUE;
#line 51 "read_modules.m"
    else
#line 51 "read_modules.m"
      {
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_12_12;
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_13_13;
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2)));

#line 1811 "parse_tree.read_modules.c"
        {
#line 1813 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[1], ((MR_Box) (parse_tree__read_modules__V_3_3)), ((MR_Box) (parse_tree__read_modules__V_6_6)));
        }
#line 51 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 51 "read_modules.m"
          {
#line 1820 "parse_tree.read_modules.c"
            parse_tree__read_modules__TypeInfo_12_12 = (MR_Word) &parse_tree__read_modules_scalar_common_2[0];
#line 1822 "parse_tree.read_modules.c"
            {
#line 1824 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_12_12, ((MR_Box) (parse_tree__read_modules__V_4_4)), ((MR_Box) (parse_tree__read_modules__V_7_7)));
            }
#line 51 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 51 "read_modules.m"
              {
#line 1831 "parse_tree.read_modules.c"
                parse_tree__read_modules__TypeInfo_13_13 = (MR_Word) &parse_tree__read_modules_scalar_common_2[2];
#line 1833 "parse_tree.read_modules.c"
                {
#line 1835 "parse_tree.read_modules.c"
                  return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_13_13, ((MR_Box) (parse_tree__read_modules__V_5_5)), ((MR_Box) (parse_tree__read_modules__V_8_8)));
                }
#line 51 "read_modules.m"
              }
#line 51 "read_modules.m"
          }
#line 51 "read_modules.m"
      }
#line 51 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 51 "read_modules.m"
  }
#line 51 "read_modules.m"
}

#line 65 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0(
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_6,
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_7,
#line 65 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 65 "read_modules.m"
{
#line 65 "read_modules.m"
  {
#line 65 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_9_9;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_11_11;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 1879 "parse_tree.read_modules.c"
    {
#line 1881 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1883 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1885 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_6));
#line 1887 "parse_tree.read_modules.c"
    }
#line 1889 "parse_tree.read_modules.c"
    {
#line 1891 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1893 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1895 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_7));
#line 1897 "parse_tree.read_modules.c"
    }
#line 65 "read_modules.m"
    {
#line 65 "read_modules.m"
      mercury__tree234____Compare____tree234_2_0(parse_tree__read_modules__TypeInfo_9_9, parse_tree__read_modules__TypeInfo_11_11, parse_tree__read_modules__HeadVar__1_1, (MR_Word) parse_tree__read_modules__Cast_HeadVar1_4, (MR_Word) parse_tree__read_modules__Cast_HeadVar2_5);
#line 65 "read_modules.m"
      return;
    }
#line 65 "read_modules.m"
  }
#line 65 "read_modules.m"
}

#line 65 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0(
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_5,
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_6,
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 65 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 65 "read_modules.m"
{
#line 65 "read_modules.m"
  {
#line 65 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_8_8;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__TypeInfo_10_10;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 65 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 1937 "parse_tree.read_modules.c"
    {
#line 1939 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1));
#line 1943 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_FK_5));
#line 1945 "parse_tree.read_modules.c"
    }
#line 1947 "parse_tree.read_modules.c"
    {
#line 1949 "parse_tree.read_modules.c"
      parse_tree__read_modules__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1951 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
#line 1953 "parse_tree.read_modules.c"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__read_modules__TypeInfo_for_PT_6));
#line 1955 "parse_tree.read_modules.c"
    }
#line 65 "read_modules.m"
    {
#line 65 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__tree234____Unify____tree234_2_0(parse_tree__read_modules__TypeInfo_8_8, parse_tree__read_modules__TypeInfo_10_10, (MR_Word) parse_tree__read_modules__Cast_HeadVar1_3, (MR_Word) parse_tree__read_modules__Cast_HeadVar2_4);
    }
#line 65 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 65 "read_modules.m"
  }
#line 65 "read_modules.m"
}

#line 68 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0(
#line 68 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_11,
#line 68 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 68 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 68 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 68 "read_modules.m"
{
#line 68 "read_modules.m"
  {
#line 68 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 68 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_9 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 68 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_10 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 68 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_9 == parse_tree__read_modules__CastY_10);
#line 68 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 1995 "parse_tree.read_modules.c"
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "read_modules.m"
    else
#line 68 "read_modules.m"
      {
#line 68 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "read_modules.m"
        MR_Box parse_tree__read_modules__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1));
#line 68 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "read_modules.m"
        MR_Box parse_tree__read_modules__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1));
#line 68 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8;

#line 68 "read_modules.m"
        {
#line 68 "read_modules.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__read_modules__V_8_8, parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_6_6);
        }
#line 2017 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_8_8 == (MR_Integer) 0);
#line 68 "read_modules.m"
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 68 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 68 "read_modules.m"
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_8_8;
#line 68 "read_modules.m"
        else
#line 68 "read_modules.m"
          {
#line 68 "read_modules.m"
            mercury__builtin__compare_3_p_0(parse_tree__read_modules__TypeInfo_for_FK_11, parse_tree__read_modules__HeadVar__1_1, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_7_7);
#line 68 "read_modules.m"
            return;
          }
#line 68 "read_modules.m"
      }
#line 68 "read_modules.m"
  }
#line 68 "read_modules.m"
}

#line 68 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0(
#line 68 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_FK_9,
#line 68 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 68 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 68 "read_modules.m"
{
#line 68 "read_modules.m"
  {
#line 68 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 68 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_7 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
#line 68 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_8 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

#line 68 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_7 == parse_tree__read_modules__CastY_8);
#line 68 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 68 "read_modules.m"
      parse_tree__read_modules__succeeded = MR_TRUE;
#line 68 "read_modules.m"
    else
#line 68 "read_modules.m"
      {
#line 68 "read_modules.m"
        MR_Word parse_tree__read_modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "read_modules.m"
        MR_Box parse_tree__read_modules__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1));
#line 68 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "read_modules.m"
        MR_Box parse_tree__read_modules__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1));

#line 2080 "parse_tree.read_modules.c"
        {
#line 2082 "parse_tree.read_modules.c"
          parse_tree__read_modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_5_5);
        }
#line 68 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 2087 "parse_tree.read_modules.c"
          {
#line 2089 "parse_tree.read_modules.c"
            return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_FK_9, parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_6_6);
          }
#line 68 "read_modules.m"
      }
#line 68 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 68 "read_modules.m"
  }
#line 68 "read_modules.m"
}

#line 60 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int_map_0_0(
#line 60 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 60 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 60 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 60 "read_modules.m"
{
#line 60 "read_modules.m"
  {
#line 60 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 60 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_4 = parse_tree__read_modules__HeadVar__2_2;
#line 60 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_5 = parse_tree__read_modules__HeadVar__3_3;

#line 60 "read_modules.m"
    {
#line 60 "read_modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_5)));
#line 60 "read_modules.m"
      return;
    }
#line 60 "read_modules.m"
  }
#line 60 "read_modules.m"
}

#line 60 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int_map_0_0(
#line 60 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 60 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 60 "read_modules.m"
{
#line 60 "read_modules.m"
  {
#line 60 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 60 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar1_3 = parse_tree__read_modules__HeadVar__1_1;
#line 60 "read_modules.m"
    MR_Word parse_tree__read_modules__Cast_HeadVar2_4 = parse_tree__read_modules__HeadVar__2_2;

#line 60 "read_modules.m"
    {
#line 60 "read_modules.m"
      return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__read_modules_scalar_common_2[0], ((MR_Box) (parse_tree__read_modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__read_modules__Cast_HeadVar2_4)));
    }
#line 60 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 60 "read_modules.m"
  }
#line 60 "read_modules.m"
}

#line 71 "read_modules.m"
void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0(
#line 71 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_20,
#line 71 "read_modules.m"
  MR_Word * parse_tree__read_modules__HeadVar__1_1,
#line 71 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2,
#line 71 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__3_3)
#line 71 "read_modules.m"
{
#line 71 "read_modules.m"
  {
#line 71 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 71 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_18 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;
#line 71 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_19 = (MR_Integer) parse_tree__read_modules__HeadVar__3_3;

#line 71 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_18 == parse_tree__read_modules__CastY_19);
#line 71 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 2189 "parse_tree.read_modules.c"
      *parse_tree__read_modules__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "read_modules.m"
    else
#line 71 "read_modules.m"
      {
#line 71 "read_modules.m"
        MR_String parse_tree__read_modules__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "read_modules.m"
        MR_Box parse_tree__read_modules__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));
#line 71 "read_modules.m"
        MR_String parse_tree__read_modules__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 0)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 1)));
#line 71 "read_modules.m"
        MR_Box parse_tree__read_modules__V_11_11 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 2));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 3)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__3_3, (MR_Integer) 4)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_14_14;

#line 71 "read_modules.m"
        {
#line 71 "read_modules.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__read_modules__V_14_14, parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_9_9);
        }
#line 2223 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_14_14 == (MR_Integer) 0);
#line 71 "read_modules.m"
        parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 71 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
          *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_14_14;
#line 71 "read_modules.m"
        else
#line 71 "read_modules.m"
          {
#line 71 "read_modules.m"
            MR_Word parse_tree__read_modules__V_15_15;

#line 71 "read_modules.m"
            {
#line 71 "read_modules.m"
              parse_tree__module_imports____Compare____module_timestamp_0_0(&parse_tree__read_modules__V_15_15, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_10_10);
            }
#line 2243 "parse_tree.read_modules.c"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_15_15 == (MR_Integer) 0);
#line 71 "read_modules.m"
            parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 71 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
              *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_15_15;
#line 71 "read_modules.m"
            else
#line 71 "read_modules.m"
              {
#line 71 "read_modules.m"
                MR_Word parse_tree__read_modules__V_16_16;

#line 71 "read_modules.m"
                {
#line 71 "read_modules.m"
                  mercury__builtin__compare_3_p_0(parse_tree__read_modules__TypeInfo_for_PT_20, &parse_tree__read_modules__V_16_16, parse_tree__read_modules__V_6_6, parse_tree__read_modules__V_11_11);
                }
#line 2263 "parse_tree.read_modules.c"
                parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_16_16 == (MR_Integer) 0);
#line 71 "read_modules.m"
                parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 71 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
                  *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_16_16;
#line 71 "read_modules.m"
                else
#line 71 "read_modules.m"
                  {
#line 71 "read_modules.m"
                    MR_Word parse_tree__read_modules__V_17_17;

#line 71 "read_modules.m"
                    {
#line 71 "read_modules.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[4], &parse_tree__read_modules__V_17_17, ((MR_Box) (parse_tree__read_modules__V_7_7)), ((MR_Box) (parse_tree__read_modules__V_12_12)));
                    }
#line 2283 "parse_tree.read_modules.c"
                    parse_tree__read_modules__succeeded = (parse_tree__read_modules__V_17_17 == (MR_Integer) 0);
#line 71 "read_modules.m"
                    parse_tree__read_modules__succeeded = !(parse_tree__read_modules__succeeded);
#line 71 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
                      *parse_tree__read_modules__HeadVar__1_1 = parse_tree__read_modules__V_17_17;
#line 71 "read_modules.m"
                    else
#line 71 "read_modules.m"
                      {
#line 71 "read_modules.m"
                        {
#line 71 "read_modules.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[5], parse_tree__read_modules__HeadVar__1_1, ((MR_Box) (parse_tree__read_modules__V_8_8)), ((MR_Box) (parse_tree__read_modules__V_13_13)));
#line 71 "read_modules.m"
                          return;
                        }
#line 71 "read_modules.m"
                      }
#line 71 "read_modules.m"
                  }
#line 71 "read_modules.m"
              }
#line 71 "read_modules.m"
          }
#line 71 "read_modules.m"
      }
#line 71 "read_modules.m"
  }
#line 71 "read_modules.m"
}

#line 71 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0(
#line 71 "read_modules.m"
  MR_Word parse_tree__read_modules__TypeInfo_for_PT_15,
#line 71 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__1_1,
#line 71 "read_modules.m"
  MR_Word parse_tree__read_modules__HeadVar__2_2)
#line 71 "read_modules.m"
{
#line 71 "read_modules.m"
  {
#line 71 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 71 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastX_13 = (MR_Integer) parse_tree__read_modules__HeadVar__1_1;
#line 71 "read_modules.m"
    MR_Integer parse_tree__read_modules__CastY_14 = (MR_Integer) parse_tree__read_modules__HeadVar__2_2;

#line 71 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__CastX_13 == parse_tree__read_modules__CastY_14);
#line 71 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
      parse_tree__read_modules__succeeded = MR_TRUE;
#line 71 "read_modules.m"
    else
#line 71 "read_modules.m"
      {
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_17_17;
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeInfo_18_18;
#line 71 "read_modules.m"
        MR_String parse_tree__read_modules__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "read_modules.m"
        MR_Box parse_tree__read_modules__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 2));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 3)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__1_1, (MR_Integer) 4)));
#line 71 "read_modules.m"
        MR_String parse_tree__read_modules__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "read_modules.m"
        MR_Box parse_tree__read_modules__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 2));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 3)));
#line 71 "read_modules.m"
        MR_Word parse_tree__read_modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HeadVar__2_2, (MR_Integer) 4)));

#line 2372 "parse_tree.read_modules.c"
        parse_tree__read_modules__succeeded = (strcmp(parse_tree__read_modules__V_3_3, parse_tree__read_modules__V_8_8) == 0);
#line 71 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
          {
#line 2378 "parse_tree.read_modules.c"
            {
#line 2380 "parse_tree.read_modules.c"
              parse_tree__read_modules__succeeded = parse_tree__module_imports____Unify____module_timestamp_0_0(parse_tree__read_modules__V_4_4, parse_tree__read_modules__V_9_9);
            }
#line 71 "read_modules.m"
            if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
              {
#line 2387 "parse_tree.read_modules.c"
                {
#line 2389 "parse_tree.read_modules.c"
                  parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_for_PT_15, parse_tree__read_modules__V_5_5, parse_tree__read_modules__V_10_10);
                }
#line 71 "read_modules.m"
                if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
                  {
#line 2396 "parse_tree.read_modules.c"
                    parse_tree__read_modules__TypeInfo_17_17 = (MR_Word) &parse_tree__read_modules_scalar_common_1[4];
#line 2398 "parse_tree.read_modules.c"
                    {
#line 2400 "parse_tree.read_modules.c"
                      parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_17_17, ((MR_Box) (parse_tree__read_modules__V_6_6)), ((MR_Box) (parse_tree__read_modules__V_11_11)));
                    }
#line 71 "read_modules.m"
                    if (parse_tree__read_modules__succeeded)
#line 71 "read_modules.m"
                      {
#line 2407 "parse_tree.read_modules.c"
                        parse_tree__read_modules__TypeInfo_18_18 = (MR_Word) &parse_tree__read_modules_scalar_common_1[5];
#line 2409 "parse_tree.read_modules.c"
                        {
#line 2411 "parse_tree.read_modules.c"
                          return parse_tree__read_modules__succeeded = mercury__builtin__unify_2_p_0(parse_tree__read_modules__TypeInfo_18_18, ((MR_Box) (parse_tree__read_modules__V_7_7)), ((MR_Box) (parse_tree__read_modules__V_12_12)));
                        }
#line 71 "read_modules.m"
                      }
#line 71 "read_modules.m"
                  }
#line 71 "read_modules.m"
              }
#line 71 "read_modules.m"
          }
#line 71 "read_modules.m"
      }
#line 71 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 71 "read_modules.m"
  }
#line 71 "read_modules.m"
}

#line 457 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__check_timestamp_6_p_0(
#line 457 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_7,
#line 457 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_8,
#line 457 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_9,
#line 457 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_10)
#line 457 "read_modules.m"
{
#line 463 "read_modules.m"
  {
#line 463 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 463 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "read_modules.m"
    else
#line 463 "read_modules.m"
      {
#line 463 "read_modules.m"
        MR_Word parse_tree__read_modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_9, (MR_Integer) 0)));

#line 463 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 466 "read_modules.m"
          {
#line 466 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));
#line 466 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_14;

#line 467 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 468 "read_modules.m"
            {
#line 468 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_14);
            }
#line 475 "read_modules.m"
#line 475 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_14) {
#line 475 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 475 "read_modules.m"
              case (MR_Integer) 0:
#line 476 "read_modules.m"
                {
#line 476 "read_modules.m"
                }
#line 475 "read_modules.m"
                break;
#line 475 "read_modules.m"
              case (MR_Integer) 1:
#line 486 "read_modules.m"
                {
#line 486 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_28;

#line 487 "read_modules.m"
                  {
#line 487 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 488 "read_modules.m"
                  {
#line 488 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 489 "read_modules.m"
                  {
#line 489 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 23, &parse_tree__read_modules__Warn_28);
                  }
#line 507 "read_modules.m"
#line 507 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_28) {
#line 507 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 507 "read_modules.m"
                    case (MR_Integer) 0:
#line 508 "read_modules.m"
                      {
#line 508 "read_modules.m"
                      }
#line 507 "read_modules.m"
                      break;
#line 507 "read_modules.m"
                    case (MR_Integer) 1:
#line 491 "read_modules.m"
                      {
#line 491 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_29;
#line 491 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_30;

#line 492 "read_modules.m"
                        {
#line 492 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 493 "read_modules.m"
                        {
#line 493 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName_8);
                        }
#line 494 "read_modules.m"
                        {
#line 494 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 495 "read_modules.m"
                        {
#line 495 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_13, &parse_tree__read_modules__Msg_29);
                        }
#line 496 "read_modules.m"
                        {
#line 496 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 497 "read_modules.m"
                        {
#line 497 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_29);
                        }
#line 498 "read_modules.m"
                        {
#line 498 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 499 "read_modules.m"
                        {
#line 499 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 500 "read_modules.m"
                        {
#line 500 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_7, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_30);
                        }
#line 504 "read_modules.m"
#line 504 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_30) {
#line 504 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 504 "read_modules.m"
                          case (MR_Integer) 0:
#line 505 "read_modules.m"
                            {
#line 505 "read_modules.m"
                            }
#line 504 "read_modules.m"
                            break;
#line 504 "read_modules.m"
                          case (MR_Integer) 1:
#line 502 "read_modules.m"
                            {
#line 503 "read_modules.m"
                              {
#line 503 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 503 "read_modules.m"
                                return;
                              }
#line 502 "read_modules.m"
                            }
#line 504 "read_modules.m"
                            break;
#line 504 "read_modules.m"
                        }
#line 491 "read_modules.m"
                      }
#line 507 "read_modules.m"
                      break;
#line 507 "read_modules.m"
                  }
#line 486 "read_modules.m"
                }
#line 475 "read_modules.m"
                break;
#line 475 "read_modules.m"
            }
#line 466 "read_modules.m"
          }
#line 463 "read_modules.m"
        else
#line 463 "read_modules.m"
          {
#line 463 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_21_21, (MR_Integer) 0)));

#line 464 "read_modules.m"
            {
#line 464 "read_modules.m"
              MR_Word base;
#line 464 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 464 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_10 = base;
#line 464 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_12));
#line 464 "read_modules.m"
            }
#line 463 "read_modules.m"
          }
#line 463 "read_modules.m"
      }
#line 463 "read_modules.m"
  }
#line 457 "read_modules.m"
}

#line 382 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_8,
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_9,
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_10,
#line 382 "read_modules.m"
  MR_Word parse_tree__read_modules__STATE_VARIABLE_Specs_0_14,
#line 382 "read_modules.m"
  MR_Word * parse_tree__read_modules__STATE_VARIABLE_Specs_15)
#line 382 "read_modules.m"
{
#line 389 "read_modules.m"
  {
#line 389 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;

#line 387 "read_modules.m"
    {
#line 387 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_10);
    }
#line 389 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 388 "read_modules.m"
      {
#line 388 "read_modules.m"
        {
#line 388 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "successful parse.\n");
        }
#line 388 "read_modules.m"
        *parse_tree__read_modules__STATE_VARIABLE_Specs_15 = parse_tree__read_modules__STATE_VARIABLE_Specs_0_14;
#line 388 "read_modules.m"
      }
#line 389 "read_modules.m"
    else
#line 390 "read_modules.m"
      {
#line 390 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_30;
#line 390 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_13;
#line 390 "read_modules.m"
        MR_Word parse_tree__read_modules__V_20_20;

#line 390 "read_modules.m"
        {
#line 390 "read_modules.m"
          parse_tree__read_modules__V_20_20 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 2704 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 390 "read_modules.m"
        {
#line 390 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__Errors_10, parse_tree__read_modules__V_20_20, &parse_tree__read_modules__FatalErrors_13);
        }
#line 391 "read_modules.m"
        {
#line 391 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_30, parse_tree__read_modules__FatalErrors_13);
        }
#line 393 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 392 "read_modules.m"
          {
#line 392 "read_modules.m"
            {
#line 392 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "parse error(s).\n");
            }
#line 392 "read_modules.m"
          }
#line 393 "read_modules.m"
        else
#line 394 "read_modules.m"
          {
#line 394 "read_modules.m"
            {
#line 394 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_9, (MR_String) "fatal error(s).\n");
            }
#line 394 "read_modules.m"
          }
#line 396 "read_modules.m"
        {
#line 396 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_9, parse_tree__read_modules__Globals_8, parse_tree__read_modules__STATE_VARIABLE_Specs_0_14, parse_tree__read_modules__STATE_VARIABLE_Specs_15);
        }
#line 397 "read_modules.m"
        {
#line 397 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 397 "read_modules.m"
          return;
        }
#line 390 "read_modules.m"
      }
#line 389 "read_modules.m"
  }
#line 382 "read_modules.m"
}

#line 340 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_end_16_p_0(
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_17,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_18,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__VeryVerbose_19,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_20,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__ActualModuleName_21,
#line 340 "read_modules.m"
  MR_String parse_tree__read_modules__FileName0_22,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeFileName_23,
#line 340 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_24,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__MaybeTimestampRes_25,
#line 340 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_26,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__IsEmpty_27,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleSpecs_28,
#line 340 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_29,
#line 340 "read_modules.m"
  MR_Word parse_tree__read_modules__Errors_30)
#line 340 "read_modules.m"
{
#line 350 "read_modules.m"
  {
#line 350 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 350 "read_modules.m"
    MR_Word parse_tree__read_modules__NameSpecs_32;

#line 353 "read_modules.m"
    if ((parse_tree__read_modules__MaybeFileName_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 355 "read_modules.m"
      *parse_tree__read_modules__FileName_24 = parse_tree__read_modules__FileName0_22;
#line 353 "read_modules.m"
    else
#line 352 "read_modules.m"
      *parse_tree__read_modules__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeFileName_23, (MR_Integer) 0)));
#line 357 "read_modules.m"
    {
#line 357 "read_modules.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(*parse_tree__read_modules__FileName_24, parse_tree__read_modules__ModuleName_20, parse_tree__read_modules__ActualModuleName_21, &parse_tree__read_modules__NameSpecs_32);
    }
#line 463 "read_modules.m"
    if ((parse_tree__read_modules__MaybeTimestampRes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "read_modules.m"
      *parse_tree__read_modules__MaybeTimestamp_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "read_modules.m"
    else
#line 463 "read_modules.m"
      {
#line 463 "read_modules.m"
        MR_Word parse_tree__read_modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__MaybeTimestampRes_25, (MR_Integer) 0)));

#line 463 "read_modules.m"
        if (((MR_tag((MR_Word) parse_tree__read_modules__V_59_59)) == (MR_mktag((MR_Integer) 1))))
#line 466 "read_modules.m"
          {
#line 466 "read_modules.m"
            MR_Word parse_tree__read_modules__IOError_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_59_59, (MR_Integer) 0)));
#line 466 "read_modules.m"
            MR_Word parse_tree__read_modules__SmartRecompilation_54;

#line 467 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 468 "read_modules.m"
            {
#line 468 "read_modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 116, &parse_tree__read_modules__SmartRecompilation_54);
            }
#line 475 "read_modules.m"
#line 475 "read_modules.m"
            switch (parse_tree__read_modules__SmartRecompilation_54) {
#line 475 "read_modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 475 "read_modules.m"
              case (MR_Integer) 0:
#line 476 "read_modules.m"
                {
#line 476 "read_modules.m"
                }
#line 475 "read_modules.m"
                break;
#line 475 "read_modules.m"
              case (MR_Integer) 1:
#line 486 "read_modules.m"
                {
#line 486 "read_modules.m"
                  MR_Word parse_tree__read_modules__Warn_66;

#line 487 "read_modules.m"
                  {
#line 487 "read_modules.m"
                    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                  }
#line 488 "read_modules.m"
                  {
#line 488 "read_modules.m"
                    libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
                  }
#line 489 "read_modules.m"
                  {
#line 489 "read_modules.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 23, &parse_tree__read_modules__Warn_66);
                  }
#line 507 "read_modules.m"
#line 507 "read_modules.m"
                  switch (parse_tree__read_modules__Warn_66) {
#line 507 "read_modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 507 "read_modules.m"
                    case (MR_Integer) 0:
#line 508 "read_modules.m"
                      {
#line 508 "read_modules.m"
                      }
#line 507 "read_modules.m"
                      break;
#line 507 "read_modules.m"
                    case (MR_Integer) 1:
#line 491 "read_modules.m"
                      {
#line 491 "read_modules.m"
                        MR_String parse_tree__read_modules__Msg_67;
#line 491 "read_modules.m"
                        MR_Word parse_tree__read_modules__HaltAtWarn_68;

#line 492 "read_modules.m"
                        {
#line 492 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                        }
#line 493 "read_modules.m"
                        {
#line 493 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__FileName0_22);
                        }
#line 494 "read_modules.m"
                        {
#line 494 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ":\n");
                        }
#line 495 "read_modules.m"
                        {
#line 495 "read_modules.m"
                          mercury__io__error_message_2_p_0(parse_tree__read_modules__IOError_53, &parse_tree__read_modules__Msg_67);
                        }
#line 496 "read_modules.m"
                        {
#line 496 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  ");
                        }
#line 497 "read_modules.m"
                        {
#line 497 "read_modules.m"
                          mercury__io__write_string_3_p_0(parse_tree__read_modules__Msg_67);
                        }
#line 498 "read_modules.m"
                        {
#line 498 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) ".\n");
                        }
#line 499 "read_modules.m"
                        {
#line 499 "read_modules.m"
                          mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                        }
#line 500 "read_modules.m"
                        {
#line 500 "read_modules.m"
                          libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_17, (MR_Integer) 2, &parse_tree__read_modules__HaltAtWarn_68);
                        }
#line 504 "read_modules.m"
#line 504 "read_modules.m"
                        switch (parse_tree__read_modules__HaltAtWarn_68) {
#line 504 "read_modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 504 "read_modules.m"
                          case (MR_Integer) 0:
#line 505 "read_modules.m"
                            {
#line 505 "read_modules.m"
                            }
#line 504 "read_modules.m"
                            break;
#line 504 "read_modules.m"
                          case (MR_Integer) 1:
#line 502 "read_modules.m"
                            {
#line 503 "read_modules.m"
                              {
#line 503 "read_modules.m"
                                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                              }
#line 502 "read_modules.m"
                            }
#line 504 "read_modules.m"
                            break;
#line 504 "read_modules.m"
                        }
#line 491 "read_modules.m"
                      }
#line 507 "read_modules.m"
                      break;
#line 507 "read_modules.m"
                  }
#line 486 "read_modules.m"
                }
#line 475 "read_modules.m"
                break;
#line 475 "read_modules.m"
            }
#line 466 "read_modules.m"
          }
#line 463 "read_modules.m"
        else
#line 463 "read_modules.m"
          {
#line 463 "read_modules.m"
            MR_Word parse_tree__read_modules__Timestamp_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_59_59, (MR_Integer) 0)));

#line 464 "read_modules.m"
            {
#line 464 "read_modules.m"
              MR_Word base;
#line 464 "read_modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 464 "read_modules.m"
              *parse_tree__read_modules__MaybeTimestamp_26 = base;
#line 464 "read_modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_52));
#line 464 "read_modules.m"
            }
#line 463 "read_modules.m"
          }
#line 463 "read_modules.m"
      }
#line 375 "read_modules.m"
#line 375 "read_modules.m"
    switch (parse_tree__read_modules__IgnoreErrors_18) {
#line 375 "read_modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 375 "read_modules.m"
      case (MR_Integer) 1:
#line 376 "read_modules.m"
        {
#line 376 "read_modules.m"
          MR_Word parse_tree__read_modules__ModuleNameSpecs_33;

#line 377 "read_modules.m"
          {
#line 377 "read_modules.m"
            parse_tree__read_modules__ModuleNameSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__read_modules__NameSpecs_32, parse_tree__read_modules__ModuleSpecs_28);
          }
#line 378 "read_modules.m"
          {
#line 378 "read_modules.m"
            parse_tree__read_modules__handle_any_read_module_errors_7_p_0(parse_tree__read_modules__Globals_17, parse_tree__read_modules__VeryVerbose_19, parse_tree__read_modules__Errors_30, parse_tree__read_modules__ModuleNameSpecs_33, parse_tree__read_modules__Specs_29);
#line 378 "read_modules.m"
            return;
          }
#line 376 "read_modules.m"
        }
#line 375 "read_modules.m"
        break;
#line 375 "read_modules.m"
      case (MR_Integer) 0:
#line 362 "read_modules.m"
        {
#line 363 "read_modules.m"
          *parse_tree__read_modules__Specs_29 = parse_tree__read_modules__NameSpecs_32;
#line 365 "read_modules.m"
          {
#line 365 "read_modules.m"
            parse_tree__read_modules__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__read_modules__Errors_30, ((MR_Box) ((MR_Integer) 0)));
          }
#line 365 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 369 "read_modules.m"
            parse_tree__read_modules__succeeded = (parse_tree__read_modules__IsEmpty_27 == (MR_Integer) 1);
#line 372 "read_modules.m"
          if (parse_tree__read_modules__succeeded)
#line 371 "read_modules.m"
            {
#line 371 "read_modules.m"
              {
#line 371 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_19, (MR_String) "not found.\n");
#line 371 "read_modules.m"
                return;
              }
#line 371 "read_modules.m"
            }
#line 372 "read_modules.m"
          else
#line 373 "read_modules.m"
            {
#line 373 "read_modules.m"
              {
#line 373 "read_modules.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_19, (MR_String) "done.\n");
#line 373 "read_modules.m"
                return;
              }
#line 373 "read_modules.m"
            }
#line 362 "read_modules.m"
        }
#line 375 "read_modules.m"
        break;
#line 375 "read_modules.m"
    }
#line 350 "read_modules.m"
  }
#line 340 "read_modules.m"
}

#line 210 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int_9_p_0(
#line 210 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_10,
#line 210 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_11,
#line 210 "read_modules.m"
  MR_Word parse_tree__read_modules__IntFileKind_12,
#line 210 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_13,
#line 210 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_14,
#line 210 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_15,
#line 210 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeInt_16,
#line 210 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_17,
#line 210 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_18)
#line 210 "read_modules.m"
{
#line 441 "read_modules.m"
  {
#line 441 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 441 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_19;
#line 441 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_20;
#line 441 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_21;
#line 443 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_20;

#line 442 "read_modules.m"
    {
#line 442 "read_modules.m"
      parse_tree__read_modules__Key_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_11));
#line 442 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_19, 1) = ((MR_Box) (parse_tree__read_modules__IntFileKind_12));
#line 442 "read_modules.m"
    }
#line 443 "read_modules.m"
    {
#line 443 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[2], (MR_Word) &parse_tree__read_modules_scalar_common_1[3], parse_tree__read_modules__HaveReadModuleMap_10, ((MR_Box) (parse_tree__read_modules__Key_19)), &parse_tree__read_modules__conv0_HaveReadModule_20);
    }
#line 443 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 443 "read_modules.m"
      {
#line 443 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_20 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_20);
#line 443 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 443 "read_modules.m"
      }
#line 441 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 441 "read_modules.m"
      {
#line 444 "read_modules.m"
        *parse_tree__read_modules__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 0)));
#line 444 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 1)));
#line 444 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 2)));
#line 444 "read_modules.m"
        *parse_tree__read_modules__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 3)));
#line 444 "read_modules.m"
        *parse_tree__read_modules__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_20, (MR_Integer) 4)));
#line 450 "read_modules.m"
#line 450 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_13) {
#line 450 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 450 "read_modules.m"
          case (MR_Integer) 0:
#line 447 "read_modules.m"
            {
#line 447 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 1)));
#line 448 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 0)));
#line 448 "read_modules.m"
              MR_Word parse_tree__read_modules__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_21, (MR_Integer) 2)));

#line 449 "read_modules.m"
              {
#line 449 "read_modules.m"
                MR_Word base;
#line 449 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_15 = base;
#line 449 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_23));
#line 449 "read_modules.m"
              }
#line 447 "read_modules.m"
            }
#line 450 "read_modules.m"
            break;
#line 450 "read_modules.m"
          case (MR_Integer) 1:
#line 452 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 450 "read_modules.m"
            break;
#line 450 "read_modules.m"
        }
#line 450 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 441 "read_modules.m"
      }
#line 441 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 441 "read_modules.m"
  }
#line 210 "read_modules.m"
}

#line 206 "read_modules.m"
MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_src_8_p_0(
#line 206 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_9,
#line 206 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_10,
#line 206 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_11,
#line 206 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_12,
#line 206 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_13,
#line 206 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeSrc_14,
#line 206 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_15,
#line 206 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_16)
#line 206 "read_modules.m"
{
#line 425 "read_modules.m"
  {
#line 425 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 425 "read_modules.m"
    MR_Word parse_tree__read_modules__Key_17;
#line 425 "read_modules.m"
    MR_Word parse_tree__read_modules__HaveReadModule_18;
#line 425 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleTimestamp_19;
#line 427 "read_modules.m"
    MR_Box parse_tree__read_modules__conv0_HaveReadModule_18;

#line 426 "read_modules.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 426 "read_modules.m"
    {
#line 426 "read_modules.m"
      parse_tree__read_modules__Key_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 0) = ((MR_Box) (parse_tree__read_modules__ModuleName_10));
#line 426 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__Key_17, 1) = NULL;
#line 426 "read_modules.m"
    }
#line 427 "read_modules.m"
    {
#line 427 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__read_modules_scalar_common_1[0], (MR_Word) &parse_tree__read_modules_scalar_common_1[1], parse_tree__read_modules__HaveReadModuleMap_9, ((MR_Box) (parse_tree__read_modules__Key_17)), &parse_tree__read_modules__conv0_HaveReadModule_18);
    }
#line 427 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 427 "read_modules.m"
      {
#line 427 "read_modules.m"
        parse_tree__read_modules__HaveReadModule_18 = ((MR_Word) parse_tree__read_modules__conv0_HaveReadModule_18);
#line 427 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 427 "read_modules.m"
      }
#line 425 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 425 "read_modules.m"
      {
#line 428 "read_modules.m"
        *parse_tree__read_modules__FileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 0)));
#line 428 "read_modules.m"
        parse_tree__read_modules__ModuleTimestamp_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 1)));
#line 428 "read_modules.m"
        *parse_tree__read_modules__ParseTreeSrc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 2)));
#line 428 "read_modules.m"
        *parse_tree__read_modules__Specs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 3)));
#line 428 "read_modules.m"
        *parse_tree__read_modules__Errors_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__HaveReadModule_18, (MR_Integer) 4)));
#line 434 "read_modules.m"
#line 434 "read_modules.m"
        switch (parse_tree__read_modules__ReturnTimestamp_11) {
#line 434 "read_modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 434 "read_modules.m"
          case (MR_Integer) 0:
#line 431 "read_modules.m"
            {
#line 431 "read_modules.m"
              MR_Word parse_tree__read_modules__Timestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 1)));
#line 432 "read_modules.m"
              MR_Word parse_tree__read_modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 0)));
#line 432 "read_modules.m"
              MR_Word parse_tree__read_modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__ModuleTimestamp_19, (MR_Integer) 2)));

#line 433 "read_modules.m"
              {
#line 433 "read_modules.m"
                MR_Word base;
#line 433 "read_modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "read_modules.m"
                *parse_tree__read_modules__MaybeTimestamp_13 = base;
#line 433 "read_modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__read_modules__Timestamp_21));
#line 433 "read_modules.m"
              }
#line 431 "read_modules.m"
            }
#line 434 "read_modules.m"
            break;
#line 434 "read_modules.m"
          case (MR_Integer) 1:
#line 436 "read_modules.m"
            *parse_tree__read_modules__MaybeTimestamp_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 434 "read_modules.m"
            break;
#line 434 "read_modules.m"
        }
#line 434 "read_modules.m"
        parse_tree__read_modules__succeeded = MR_TRUE;
#line 425 "read_modules.m"
      }
#line 425 "read_modules.m"
    return parse_tree__read_modules__succeeded;
#line 425 "read_modules.m"
  }
#line 206 "read_modules.m"
}

#line 189 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__maybe_read_module_int_14_p_0(
#line 189 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_15,
#line 189 "read_modules.m"
  MR_Word parse_tree__read_modules__HaveReadModuleMap_16,
#line 189 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_17,
#line 189 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_18,
#line 189 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_19,
#line 189 "read_modules.m"
  MR_Word parse_tree__read_modules__IntFileKind_20,
#line 189 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_21,
#line 189 "read_modules.m"
  MR_Word parse_tree__read_modules__ReturnTimestamp_22,
#line 189 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_23,
#line 189 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTreeInt_24,
#line 189 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_25,
#line 189 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_26)
#line 189 "read_modules.m"
{
#line 415 "read_modules.m"
  {
#line 415 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 415 "read_modules.m"
    MR_String parse_tree__read_modules__FileNamePrime_28;
#line 415 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampPrime_29;
#line 415 "read_modules.m"
    MR_Word parse_tree__read_modules__ParseTreeIntPrime_30;
#line 415 "read_modules.m"
    MR_Word parse_tree__read_modules__SpecsPrime_31;
#line 415 "read_modules.m"
    MR_Word parse_tree__read_modules__ErrorsPrime_32;

#line 406 "read_modules.m"
    {
#line 406 "read_modules.m"
      parse_tree__read_modules__succeeded = parse_tree__read_modules__find_read_module_int_9_p_0(parse_tree__read_modules__HaveReadModuleMap_16, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__ReturnTimestamp_22, &parse_tree__read_modules__FileNamePrime_28, &parse_tree__read_modules__MaybeTimestampPrime_29, &parse_tree__read_modules__ParseTreeIntPrime_30, &parse_tree__read_modules__SpecsPrime_31, &parse_tree__read_modules__ErrorsPrime_32);
    }
#line 415 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 410 "read_modules.m"
      {
#line 410 "read_modules.m"
        *parse_tree__read_modules__FileName_21 = parse_tree__read_modules__FileNamePrime_28;
#line 411 "read_modules.m"
        *parse_tree__read_modules__MaybeTimestamp_23 = parse_tree__read_modules__MaybeTimestampPrime_29;
#line 412 "read_modules.m"
        *parse_tree__read_modules__ParseTreeInt_24 = parse_tree__read_modules__ParseTreeIntPrime_30;
#line 413 "read_modules.m"
        *parse_tree__read_modules__Specs_25 = parse_tree__read_modules__SpecsPrime_31;
#line 414 "read_modules.m"
        *parse_tree__read_modules__Errors_26 = parse_tree__read_modules__ErrorsPrime_32;
#line 410 "read_modules.m"
      }
#line 415 "read_modules.m"
    else
#line 416 "read_modules.m"
      {
#line 416 "read_modules.m"
        MR_Word parse_tree__read_modules__V_36_36;

#line 418 "read_modules.m"
        {
#line 418 "read_modules.m"
          parse_tree__read_modules__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 418 "read_modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__read_modules__V_36_36, 0) = ((MR_Box) (parse_tree__read_modules__ReturnTimestamp_22));
#line 418 "read_modules.m"
        }
#line 416 "read_modules.m"
        {
#line 416 "read_modules.m"
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__Descr_17, (MR_Integer) 1, parse_tree__read_modules__Search_18, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__FileName_21, parse_tree__read_modules__V_36_36, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__ParseTreeInt_24, parse_tree__read_modules__Specs_25, parse_tree__read_modules__Errors_26);
#line 416 "read_modules.m"
          return;
        }
#line 416 "read_modules.m"
      }
#line 415 "read_modules.m"
  }
#line 189 "read_modules.m"
}

#line 298 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0_1(
#line 298 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 298 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 298 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 298 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 298 "read_modules.m"
{
#line 298 "read_modules.m"
  {
#line 298 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 298 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__4_4;

#line 298 "read_modules.m"
    {
#line 298 "read_modules.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), &parse_tree__read_modules__conv0_HeadVar__4_4);
    }
#line 298 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__4_4));
#line 298 "read_modules.m"
  }
#line 298 "read_modules.m"
}

#line 171 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_11_p_0(
#line 171 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_12,
#line 171 "read_modules.m"
  MR_String parse_tree__read_modules__FileName_13,
#line 171 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_14,
#line 171 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_15,
#line 171 "read_modules.m"
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_16,
#line 171 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_17,
#line 171 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTree_18,
#line 171 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_19,
#line 171 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_20)
#line 171 "read_modules.m"
{
#line 275 "read_modules.m"
  {
#line 275 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 275 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_22;
#line 275 "read_modules.m"
    MR_String parse_tree__read_modules__FullFileName_23;
#line 275 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileName_25;
#line 275 "read_modules.m"
    MR_Word parse_tree__read_modules__DefaultModuleName_26;
#line 275 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_27;
#line 275 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_28;
#line 275 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampRes_30;
#line 275 "read_modules.m"
    MR_Word parse_tree__read_modules__Specs0_31;
#line 286 "read_modules.m"
    MR_String parse_tree__read_modules__BaseFileNamePrime_24;
#line 299 "read_modules.m"
    MR_Word parse_tree__read_modules__V_29_29;

#line 276 "read_modules.m"
    {
#line 276 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_22);
    }
#line 277 "read_modules.m"
    {
#line 277 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "% ");
    }
#line 278 "read_modules.m"
    {
#line 278 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Descr_14);
    }
#line 279 "read_modules.m"
    {
#line 279 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) " \140");
    }
#line 280 "read_modules.m"
    {
#line 280 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__FileName_13);
    }
#line 281 "read_modules.m"
    {
#line 281 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "\'... ");
    }
#line 282 "read_modules.m"
    {
#line 282 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_22);
    }
#line 283 "read_modules.m"
    {
#line 283 "read_modules.m"
      parse_tree__read_modules__FullFileName_23 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName_13, (MR_String) ".m");
    }
#line 284 "read_modules.m"
    {
#line 284 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__dir__basename_2_p_0(parse_tree__read_modules__FileName_13, &parse_tree__read_modules__BaseFileNamePrime_24);
    }
#line 286 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 285 "read_modules.m"
      parse_tree__read_modules__BaseFileName_25 = parse_tree__read_modules__BaseFileNamePrime_24;
#line 286 "read_modules.m"
    else
#line 287 "read_modules.m"
      parse_tree__read_modules__BaseFileName_25 = (MR_String) "";
#line 289 "read_modules.m"
    {
#line 289 "read_modules.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__read_modules__BaseFileName_25, &parse_tree__read_modules__DefaultModuleName_26);
    }
#line 294 "read_modules.m"
#line 294 "read_modules.m"
    switch (parse_tree__read_modules__Search_15) {
#line 294 "read_modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 294 "read_modules.m"
      case (MR_Integer) 1:
#line 295 "read_modules.m"
        {
#line 295 "read_modules.m"
          MR_String parse_tree__read_modules__V_45_45;

#line 296 "read_modules.m"
          {
#line 296 "read_modules.m"
            parse_tree__read_modules__V_45_45 = mercury__dir__this_directory_0_f_0();
          }
#line 296 "read_modules.m"
          {
#line 296 "read_modules.m"
            parse_tree__read_modules__SearchDirs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 0) = ((MR_Box) (parse_tree__read_modules__V_45_45));
#line 296 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "read_modules.m"
          }
#line 295 "read_modules.m"
        }
#line 294 "read_modules.m"
        break;
#line 294 "read_modules.m"
      case (MR_Integer) 0:
#line 291 "read_modules.m"
        {
#line 292 "read_modules.m"
          {
#line 292 "read_modules.m"
            libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_12, (MR_Integer) 649, &parse_tree__read_modules__SearchDirs_27);
          }
#line 291 "read_modules.m"
        }
#line 294 "read_modules.m"
        break;
#line 294 "read_modules.m"
    }
#line 298 "read_modules.m"
    {
#line 298 "read_modules.m"
      parse_tree__read_modules__OpenFile_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 298 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
#line 298 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 1) = ((MR_Box) (parse_tree__read_modules__read_module_src_from_file_11_p_0_1));
#line 298 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 298 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 3) = ((MR_Box) ((MR_Integer) 0));
#line 298 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_27));
#line 298 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_28, 5) = ((MR_Box) (parse_tree__read_modules__FullFileName_23));
#line 298 "read_modules.m"
    }
#line 299 "read_modules.m"
    {
#line 299 "read_modules.m"
      parse_tree__prog_io__actually_read_module_src_11_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_12, parse_tree__read_modules__DefaultModuleName_26, parse_tree__read_modules__OpenFile_28, &parse_tree__read_modules__V_29_29, parse_tree__read_modules__ReadModuleAndTimestamps_16, &parse_tree__read_modules__MaybeTimestampRes_30, parse_tree__read_modules__ParseTree_18, &parse_tree__read_modules__Specs0_31, parse_tree__read_modules__Errors_20);
    }
#line 302 "read_modules.m"
    {
#line 302 "read_modules.m"
      parse_tree__read_modules__check_timestamp_6_p_0(parse_tree__read_modules__Globals_12, parse_tree__read_modules__FullFileName_23, parse_tree__read_modules__MaybeTimestampRes_30, parse_tree__read_modules__MaybeTimestamp_17);
    }
#line 387 "read_modules.m"
    {
#line 387 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, *parse_tree__read_modules__Errors_20);
    }
#line 389 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 388 "read_modules.m"
      {
#line 388 "read_modules.m"
        {
#line 388 "read_modules.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "successful parse.\n");
        }
#line 388 "read_modules.m"
        *parse_tree__read_modules__Specs_19 = parse_tree__read_modules__Specs0_31;
#line 388 "read_modules.m"
      }
#line 389 "read_modules.m"
    else
#line 390 "read_modules.m"
      {
#line 390 "read_modules.m"
        MR_Word parse_tree__read_modules__TypeCtorInfo_30_78;
#line 390 "read_modules.m"
        MR_Word parse_tree__read_modules__FatalErrors_65;
#line 390 "read_modules.m"
        MR_Word parse_tree__read_modules__V_68_68;

#line 390 "read_modules.m"
        {
#line 390 "read_modules.m"
          parse_tree__read_modules__V_68_68 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3676 "parse_tree.read_modules.c"
        parse_tree__read_modules__TypeCtorInfo_30_78 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 390 "read_modules.m"
        {
#line 390 "read_modules.m"
          mercury__set__intersect_3_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, *parse_tree__read_modules__Errors_20, parse_tree__read_modules__V_68_68, &parse_tree__read_modules__FatalErrors_65);
        }
#line 391 "read_modules.m"
        {
#line 391 "read_modules.m"
          parse_tree__read_modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__read_modules__TypeCtorInfo_30_78, parse_tree__read_modules__FatalErrors_65);
        }
#line 393 "read_modules.m"
        if (parse_tree__read_modules__succeeded)
#line 392 "read_modules.m"
          {
#line 392 "read_modules.m"
            {
#line 392 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "parse error(s).\n");
            }
#line 392 "read_modules.m"
          }
#line 393 "read_modules.m"
        else
#line 394 "read_modules.m"
          {
#line 394 "read_modules.m"
            {
#line 394 "read_modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_22, (MR_String) "fatal error(s).\n");
            }
#line 394 "read_modules.m"
          }
#line 396 "read_modules.m"
        {
#line 396 "read_modules.m"
          parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__read_modules__VeryVerbose_22, parse_tree__read_modules__Globals_12, parse_tree__read_modules__Specs0_31, parse_tree__read_modules__Specs_19);
        }
#line 397 "read_modules.m"
        {
#line 397 "read_modules.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 397 "read_modules.m"
          return;
        }
#line 390 "read_modules.m"
      }
#line 275 "read_modules.m"
  }
#line 171 "read_modules.m"
}

#line 261 "read_modules.m"
static void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0_1(
#line 261 "read_modules.m"
  MR_Box parse_tree__read_modules__closure_arg,
#line 261 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_1,
#line 261 "read_modules.m"
  MR_Box parse_tree__read_modules__wrapper_arg_2,
#line 261 "read_modules.m"
  MR_Box * parse_tree__read_modules__wrapper_arg_3)
#line 261 "read_modules.m"
{
#line 261 "read_modules.m"
  {
#line 261 "read_modules.m"
    MR_Box parse_tree__read_modules__closure = parse_tree__read_modules__closure_arg;
#line 261 "read_modules.m"
    MR_Word parse_tree__read_modules__conv0_HeadVar__4_4;

#line 261 "read_modules.m"
    {
#line 261 "read_modules.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__read_modules__closure, (MR_Integer) 5))), &parse_tree__read_modules__conv0_HeadVar__4_4);
    }
#line 261 "read_modules.m"
    *parse_tree__read_modules__wrapper_arg_1 = ((MR_Box) (parse_tree__read_modules__conv0_HeadVar__4_4));
#line 261 "read_modules.m"
  }
#line 261 "read_modules.m"
}

#line 150 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0(
#line 150 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_15,
#line 150 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_16,
#line 150 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_17,
#line 150 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_18,
#line 150 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_19,
#line 150 "read_modules.m"
  MR_Word parse_tree__read_modules__IntFileKind_20,
#line 150 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_21,
#line 150 "read_modules.m"
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_22,
#line 150 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_23,
#line 150 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTree_24,
#line 150 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_25,
#line 150 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_26)
#line 150 "read_modules.m"
{
#line 258 "read_modules.m"
  {
#line 258 "read_modules.m"
    MR_bool parse_tree__read_modules__succeeded;
#line 258 "read_modules.m"
    MR_String parse_tree__read_modules__FileName0_28;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__VeryVerbose_29;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules___InterfaceSearchDirs_30;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__SearchDirs_31;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__OpenFile_32;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeFileName_33;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__MaybeTimestampRes_34;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__ModuleSpecs_35;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__ActualModuleName_36;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__IntItems_39;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__ImplItems_40;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__IsEmpty_41;
#line 258 "read_modules.m"
    MR_Word parse_tree__read_modules__V_44_44;
#line 258 "read_modules.m"
    MR_String parse_tree__read_modules__Extension_65;
#line 258 "read_modules.m"
    MR_String parse_tree__read_modules__Msg_66;
#line 258 "read_modules.m"
    MR_String parse_tree__read_modules__V_72_72;
#line 258 "read_modules.m"
    MR_String parse_tree__read_modules__V_73_73;
#line 258 "read_modules.m"
    MR_String parse_tree__read_modules__V_75_75;
#line 265 "read_modules.m"
    MR_Word parse_tree__read_modules___IntFileKind_37;
#line 265 "read_modules.m"
    MR_Word parse_tree__read_modules___Context_38;

#line 259 "read_modules.m"
    {
#line 259 "read_modules.m"
      parse_tree__read_modules__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 259 "read_modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__read_modules__V_44_44, 0) = ((MR_Box) (parse_tree__read_modules__IntFileKind_20));
#line 259 "read_modules.m"
    }
#line 315 "read_modules.m"
    {
#line 315 "read_modules.m"
      parse_tree__read_modules__Extension_65 = parse_tree__prog_item__file_kind_to_extension_1_f_0(parse_tree__read_modules__V_44_44);
    }
#line 325 "read_modules.m"
    {
#line 325 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_29);
    }
#line 330 "read_modules.m"
    {
#line 330 "read_modules.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_15, (MR_Integer) 649, &parse_tree__read_modules___InterfaceSearchDirs_30);
    }
#line 3858 "parse_tree.read_modules.c"
#line 3859 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_18) {
#line 3861 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3863 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 3865 "parse_tree.read_modules.c"
        {
#line 3867 "parse_tree.read_modules.c"
          MR_String parse_tree__read_modules__V_80_80;

#line 322 "read_modules.m"
          {
#line 322 "read_modules.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_65, (MR_Integer) 1, &parse_tree__read_modules__FileName0_28);
          }
#line 337 "read_modules.m"
          {
#line 337 "read_modules.m"
            parse_tree__read_modules__V_80_80 = mercury__dir__this_directory_0_f_0();
          }
#line 337 "read_modules.m"
          {
#line 337 "read_modules.m"
            parse_tree__read_modules__SearchDirs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 0) = ((MR_Box) (parse_tree__read_modules__V_80_80));
#line 337 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "read_modules.m"
          }
#line 3890 "parse_tree.read_modules.c"
        }
#line 3892 "parse_tree.read_modules.c"
        break;
#line 3894 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 3896 "parse_tree.read_modules.c"
        {
#line 318 "read_modules.m"
          {
#line 318 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__Extension_65, &parse_tree__read_modules__FileName0_28);
          }
#line 334 "read_modules.m"
          parse_tree__read_modules__SearchDirs_31 = parse_tree__read_modules___InterfaceSearchDirs_30;
#line 3905 "parse_tree.read_modules.c"
        }
#line 3907 "parse_tree.read_modules.c"
        break;
#line 3909 "parse_tree.read_modules.c"
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_28, (MR_String) "\'... ");
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__V_75_75);
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__V_72_72 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_16, parse_tree__read_modules__V_73_73);
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__Msg_66 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__V_72_72);
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__Msg_66);
    }
#line 328 "read_modules.m"
    {
#line 328 "read_modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__read_modules__VeryVerbose_29);
    }
#line 261 "read_modules.m"
    {
#line 261 "read_modules.m"
      parse_tree__read_modules__OpenFile_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 261 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
#line 261 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 1) = ((MR_Box) (parse_tree__read_modules__read_module_int_14_p_0_1));
#line 261 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 261 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 3) = ((MR_Box) ((MR_Integer) 0));
#line 261 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 4) = ((MR_Box) (parse_tree__read_modules__SearchDirs_31));
#line 261 "read_modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__read_modules__OpenFile_32, 5) = ((MR_Box) (parse_tree__read_modules__FileName0_28));
#line 261 "read_modules.m"
    }
#line 262 "read_modules.m"
    {
#line 262 "read_modules.m"
      parse_tree__prog_io__actually_read_module_int_12_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__IntFileKind_20, parse_tree__read_modules__Globals_15, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__OpenFile_32, &parse_tree__read_modules__MaybeFileName_33, parse_tree__read_modules__ReadModuleAndTimestamps_22, &parse_tree__read_modules__MaybeTimestampRes_34, parse_tree__read_modules__ParseTree_24, &parse_tree__read_modules__ModuleSpecs_35, parse_tree__read_modules__Errors_26);
    }
#line 265 "read_modules.m"
    parse_tree__read_modules__ActualModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_24, (MR_Integer) 0)));
#line 265 "read_modules.m"
    parse_tree__read_modules___IntFileKind_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_24, (MR_Integer) 1)));
#line 265 "read_modules.m"
    parse_tree__read_modules___Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_24, (MR_Integer) 2)));
#line 265 "read_modules.m"
    parse_tree__read_modules__IntItems_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_24, (MR_Integer) 3)));
#line 265 "read_modules.m"
    parse_tree__read_modules__ImplItems_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_24, (MR_Integer) 4)));
#line 267 "read_modules.m"
    parse_tree__read_modules__succeeded = (parse_tree__read_modules__IntItems_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 267 "read_modules.m"
      parse_tree__read_modules__succeeded = (parse_tree__read_modules__ImplItems_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 267 "read_modules.m"
      parse_tree__read_modules__IsEmpty_41 = (MR_Integer) 1;
#line 267 "read_modules.m"
    else
#line 267 "read_modules.m"
      parse_tree__read_modules__IsEmpty_41 = (MR_Integer) 0;
#line 268 "read_modules.m"
    {
#line 268 "read_modules.m"
      parse_tree__read_modules__read_module_end_16_p_0(parse_tree__read_modules__Globals_15, parse_tree__read_modules__IgnoreErrors_17, parse_tree__read_modules__VeryVerbose_29, parse_tree__read_modules__ModuleName_19, parse_tree__read_modules__ActualModuleName_36, parse_tree__read_modules__FileName0_28, parse_tree__read_modules__MaybeFileName_33, parse_tree__read_modules__FileName_21, parse_tree__read_modules__MaybeTimestampRes_34, parse_tree__read_modules__MaybeTimestamp_23, parse_tree__read_modules__IsEmpty_41, parse_tree__read_modules__ModuleSpecs_35, parse_tree__read_modules__Specs_25, *parse_tree__read_modules__Errors_26);
#line 268 "read_modules.m"
      return;
    }
#line 258 "read_modules.m"
  }
#line 150 "read_modules.m"
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

#line 126 "read_modules.m"
void MR_CALL 
parse_tree__read_modules__read_module_src_13_p_0(
#line 126 "read_modules.m"
  MR_Word parse_tree__read_modules__Globals_14,
#line 126 "read_modules.m"
  MR_String parse_tree__read_modules__Descr_15,
#line 126 "read_modules.m"
  MR_Word parse_tree__read_modules__IgnoreErrors_16,
#line 126 "read_modules.m"
  MR_Word parse_tree__read_modules__Search_17,
#line 126 "read_modules.m"
  MR_Word parse_tree__read_modules__ModuleName_18,
#line 126 "read_modules.m"
  MR_String * parse_tree__read_modules__FileName_19,
#line 126 "read_modules.m"
  MR_Word parse_tree__read_modules__ReadModuleAndTimestamps_20,
#line 126 "read_modules.m"
  MR_Word * parse_tree__read_modules__MaybeTimestamp_21,
#line 126 "read_modules.m"
  MR_Word * parse_tree__read_modules__ParseTree_22,
#line 126 "read_modules.m"
  MR_Word * parse_tree__read_modules__Specs_23,
#line 126 "read_modules.m"
  MR_Word * parse_tree__read_modules__Errors_24)
#line 126 "read_modules.m"
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
#line 249 "read_modules.m"
    MR_Word parse_tree__read_modules___Context_35;

#line 315 "read_modules.m"
    {
#line 315 "read_modules.m"
      parse_tree__read_modules__Extension_61 = parse_tree__prog_item__file_kind_to_extension_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 325 "read_modules.m"
    {
#line 325 "read_modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 46, &parse_tree__read_modules__VeryVerbose_27);
    }
#line 330 "read_modules.m"
    {
#line 330 "read_modules.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__read_modules__Globals_14, (MR_Integer) 649, &parse_tree__read_modules__InterfaceSearchDirs_28);
    }
#line 4113 "parse_tree.read_modules.c"
#line 4114 "parse_tree.read_modules.c"
    switch (parse_tree__read_modules__Search_17) {
#line 4116 "parse_tree.read_modules.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4118 "parse_tree.read_modules.c"
      case (MR_Integer) 1:
#line 4120 "parse_tree.read_modules.c"
        {
#line 4122 "parse_tree.read_modules.c"
          MR_String parse_tree__read_modules__V_76_76;

#line 322 "read_modules.m"
          {
#line 322 "read_modules.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_61, (MR_Integer) 1, &parse_tree__read_modules__FileName0_26);
          }
#line 337 "read_modules.m"
          {
#line 337 "read_modules.m"
            parse_tree__read_modules__V_76_76 = mercury__dir__this_directory_0_f_0();
          }
#line 337 "read_modules.m"
          {
#line 337 "read_modules.m"
            parse_tree__read_modules__SearchDirs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 0) = ((MR_Box) (parse_tree__read_modules__V_76_76));
#line 337 "read_modules.m"
            MR_hl_field(MR_mktag(1), parse_tree__read_modules__SearchDirs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "read_modules.m"
          }
#line 4145 "parse_tree.read_modules.c"
        }
#line 4147 "parse_tree.read_modules.c"
        break;
#line 4149 "parse_tree.read_modules.c"
      case (MR_Integer) 0:
#line 4151 "parse_tree.read_modules.c"
        {
#line 318 "read_modules.m"
          {
#line 318 "read_modules.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__Extension_61, &parse_tree__read_modules__FileName0_26);
          }
#line 334 "read_modules.m"
          parse_tree__read_modules__SearchDirs_29 = parse_tree__read_modules__InterfaceSearchDirs_28;
#line 4160 "parse_tree.read_modules.c"
        }
#line 4162 "parse_tree.read_modules.c"
        break;
#line 4164 "parse_tree.read_modules.c"
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__FileName0_26, (MR_String) "\'... ");
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " \140", parse_tree__read_modules__V_71_71);
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__V_68_68 = mercury__string__f_43_43_2_f_0(parse_tree__read_modules__Descr_15, parse_tree__read_modules__V_69_69);
    }
#line 326 "read_modules.m"
    {
#line 326 "read_modules.m"
      parse_tree__read_modules__Msg_62 = mercury__string__f_43_43_2_f_0((MR_String) "% ", parse_tree__read_modules__V_68_68);
    }
#line 327 "read_modules.m"
    {
#line 327 "read_modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__Msg_62);
    }
#line 328 "read_modules.m"
    {
#line 328 "read_modules.m"
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
      parse_tree__prog_io__actually_read_module_src_11_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__read_modules__Globals_14, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__OpenFile_30, &parse_tree__read_modules__MaybeFileName_31, parse_tree__read_modules__ReadModuleAndTimestamps_20, &parse_tree__read_modules__MaybeTimestampRes_32, parse_tree__read_modules__ParseTree_22, &parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Errors_24);
    }
#line 249 "read_modules.m"
    parse_tree__read_modules__ActualModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_22, (MR_Integer) 0)));
#line 249 "read_modules.m"
    parse_tree__read_modules___Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_22, (MR_Integer) 1)));
#line 249 "read_modules.m"
    parse_tree__read_modules__ComponentsCord_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *parse_tree__read_modules__ParseTree_22, (MR_Integer) 2)));
#line 250 "read_modules.m"
    {
#line 250 "read_modules.m"
      parse_tree__read_modules__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_component_0, parse_tree__read_modules__ComponentsCord_36);
    }
#line 250 "read_modules.m"
    if (parse_tree__read_modules__succeeded)
#line 250 "read_modules.m"
      parse_tree__read_modules__IsEmpty_37 = (MR_Integer) 1;
#line 250 "read_modules.m"
    else
#line 250 "read_modules.m"
      parse_tree__read_modules__IsEmpty_37 = (MR_Integer) 0;
#line 251 "read_modules.m"
    {
#line 251 "read_modules.m"
      parse_tree__read_modules__read_module_end_16_p_0(parse_tree__read_modules__Globals_14, parse_tree__read_modules__IgnoreErrors_16, parse_tree__read_modules__VeryVerbose_27, parse_tree__read_modules__ModuleName_18, parse_tree__read_modules__ActualModuleName_34, parse_tree__read_modules__FileName0_26, parse_tree__read_modules__MaybeFileName_31, parse_tree__read_modules__FileName_19, parse_tree__read_modules__MaybeTimestampRes_32, parse_tree__read_modules__MaybeTimestamp_21, parse_tree__read_modules__IsEmpty_37, parse_tree__read_modules__ModuleSpecs_33, parse_tree__read_modules__Specs_23, *parse_tree__read_modules__Errors_24);
#line 251 "read_modules.m"
      return;
    }
#line 237 "read_modules.m"
  }
#line 126 "read_modules.m"
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
