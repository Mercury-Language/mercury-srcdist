/*
** Automatically generated from `maybe_error.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module parse_tree.maybe_error. */
/* :- implementation. */

/*
INIT mercury__parse_tree__maybe_error__init
ENDINIT
*/

#include "parse_tree.maybe_error.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 96 "parse_tree.maybe_error.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 99 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0[1];

#line 102 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0;

#line 105 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1[1];

#line 108 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1;

#line 111 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0[1];

#line 114 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1[1];

#line 117 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1[2];

#line 120 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1[2];

#line 123 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1[2];

#line 126 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0[1];

#line 129 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0;

#line 132 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1[2];

#line 135 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1;

#line 138 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0[1];

#line 141 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1[1];

#line 144 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2[2];

#line 147 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2[2];

#line 150 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2[2];

#line 153 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0[1];

#line 156 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0;

#line 159 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1[3];

#line 162 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1;

#line 165 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0[1];

#line 168 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1[1];

#line 171 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3[2];

#line 174 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3[2];

#line 177 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3[2];

#line 180 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0[1];

#line 183 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0;

#line 186 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1[4];

#line 189 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1;

#line 192 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0[1];

#line 195 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1[1];

#line 198 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4[2];

#line 201 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4[2];

#line 204 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4[2];

#line 207 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0;

#line 210 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1;

#line 213 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0[2];

#line 216 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0[2];

#line 219 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0[2];

#line 222 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
#line 225 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 227 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 229 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3);

#line 232 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
#line 235 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 237 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_2,
#line 239 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 241 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4);

#line 244 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
#line 247 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 249 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 251 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 253 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4);

#line 256 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
#line 259 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 261 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 263 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_3,
#line 265 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 267 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5);

#line 270 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
#line 273 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 275 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 277 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 279 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 281 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5);

#line 284 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
#line 287 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 289 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 291 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 293 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_4,
#line 295 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 297 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6);

#line 300 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
#line 303 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 305 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 307 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 309 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 311 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 313 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6);

#line 316 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
#line 319 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 321 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 323 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 325 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 327 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_5,
#line 329 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6,
#line 331 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_7);

#line 334 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
#line 337 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 339 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2);

#line 342 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
#line 345 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_1,
#line 347 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 349 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__maybe_error_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__maybe_error_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 375 "parse_tree.maybe_error.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 383 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 388 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0 = {
  (MR_String) "error1",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0,
  NULL,
  NULL,
  NULL
};

#line 403 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 408 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1 = {
  (MR_String) "ok1",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1,
  NULL,
  NULL,
  NULL
};

#line 423 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0
};

#line 428 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1
};

#line 433 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1
  }
};

#line 447 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1
};

#line 453 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 459 "parse_tree.maybe_error.c"
const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe1_1_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe1_1_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe1",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1
};

#line 476 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 481 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0 = {
  (MR_String) "error2",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0,
  NULL,
  NULL,
  NULL
};

#line 496 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 502 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1 = {
  (MR_String) "ok2",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1,
  NULL,
  NULL,
  NULL
};

#line 517 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0
};

#line 522 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1
};

#line 527 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1
  }
};

#line 541 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1
};

#line 547 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 553 "parse_tree.maybe_error.c"
const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe2_2_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe2_2_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe2",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2
};

#line 570 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 575 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0 = {
  (MR_String) "error3",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0,
  NULL,
  NULL,
  NULL
};

#line 590 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 597 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1 = {
  (MR_String) "ok3",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1,
  NULL,
  NULL,
  NULL
};

#line 612 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0
};

#line 617 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1
};

#line 622 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1
  }
};

#line 636 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1
};

#line 642 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 648 "parse_tree.maybe_error.c"
const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe3_3_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe3_3_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe3",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3
};

#line 665 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 670 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0 = {
  (MR_String) "error4",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0,
  NULL,
  NULL,
  NULL
};

#line 685 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

#line 693 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1 = {
  (MR_String) "ok4",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1,
  NULL,
  NULL,
  NULL
};

#line 708 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0
};

#line 713 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1
};

#line 718 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1
  }
};

#line 732 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1
};

#line 738 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 744 "parse_tree.maybe_error.c"
const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_4 = {
  (MR_Integer) 4,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe4_4_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe4_4_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe4",
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4
};

#line 761 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0 = {
  (MR_String) "safe_to_continue",
  (MR_Integer) 0
};

#line 767 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1 = {
  (MR_String) "unsafe_to_continue",
  (MR_Integer) 1
};

#line 773 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1
};

#line 779 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1
};

#line 785 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 791 "parse_tree.maybe_error.c"
const MR_TypeCtorInfo_Struct parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001)),
  ((MR_Box) (parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001)),
  (MR_String) "parse_tree.maybe_error",
  (MR_String) "maybe_safe_to_continue",
  {     parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0 },
  {     parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0
};

#line 808 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
#line 811 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 813 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 815 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3)
#line 817 "parse_tree.maybe_error.c"
{
#line 819 "parse_tree.maybe_error.c"
  {
#line 821 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 824 "parse_tree.maybe_error.c"
    {
#line 826 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe1_1_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3));
    }
#line 829 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 831 "parse_tree.maybe_error.c"
  }
#line 833 "parse_tree.maybe_error.c"
}

#line 836 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
#line 839 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 841 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_2,
#line 843 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 845 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4)
#line 847 "parse_tree.maybe_error.c"
{
#line 849 "parse_tree.maybe_error.c"
  {
#line 851 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 854 "parse_tree.maybe_error.c"
    {
#line 856 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe1_1_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4));
    }
#line 859 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_2 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 861 "parse_tree.maybe_error.c"
  }
#line 863 "parse_tree.maybe_error.c"
}

#line 866 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
#line 869 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 871 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 873 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 875 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4)
#line 877 "parse_tree.maybe_error.c"
{
#line 879 "parse_tree.maybe_error.c"
  {
#line 881 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 884 "parse_tree.maybe_error.c"
    {
#line 886 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4));
    }
#line 889 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 891 "parse_tree.maybe_error.c"
  }
#line 893 "parse_tree.maybe_error.c"
}

#line 896 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
#line 899 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 901 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 903 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_3,
#line 905 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 907 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5)
#line 909 "parse_tree.maybe_error.c"
{
#line 911 "parse_tree.maybe_error.c"
  {
#line 913 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 916 "parse_tree.maybe_error.c"
    {
#line 918 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe2_2_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5));
    }
#line 921 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_3 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 923 "parse_tree.maybe_error.c"
  }
#line 925 "parse_tree.maybe_error.c"
}

#line 928 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
#line 931 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 933 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 935 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 937 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 939 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5)
#line 941 "parse_tree.maybe_error.c"
{
#line 943 "parse_tree.maybe_error.c"
  {
#line 945 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 948 "parse_tree.maybe_error.c"
    {
#line 950 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe3_3_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5));
    }
#line 953 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 955 "parse_tree.maybe_error.c"
  }
#line 957 "parse_tree.maybe_error.c"
}

#line 960 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
#line 963 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 965 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 967 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 969 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_4,
#line 971 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 973 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6)
#line 975 "parse_tree.maybe_error.c"
{
#line 977 "parse_tree.maybe_error.c"
  {
#line 979 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 982 "parse_tree.maybe_error.c"
    {
#line 984 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe3_3_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_5), ((MR_Word) parse_tree__maybe_error__wrapper_arg_6));
    }
#line 987 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_4 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 989 "parse_tree.maybe_error.c"
  }
#line 991 "parse_tree.maybe_error.c"
}

#line 994 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
#line 997 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 999 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 1001 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 1003 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 1005 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 1007 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6)
#line 1009 "parse_tree.maybe_error.c"
{
#line 1011 "parse_tree.maybe_error.c"
  {
#line 1013 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 1016 "parse_tree.maybe_error.c"
    {
#line 1018 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe4_4_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5), ((MR_Word) parse_tree__maybe_error__wrapper_arg_6));
    }
#line 1021 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 1023 "parse_tree.maybe_error.c"
  }
#line 1025 "parse_tree.maybe_error.c"
}

#line 1028 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
#line 1031 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 1033 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 1035 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 1037 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 1039 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_5,
#line 1041 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6,
#line 1043 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_7)
#line 1045 "parse_tree.maybe_error.c"
{
#line 1047 "parse_tree.maybe_error.c"
  {
#line 1049 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 1052 "parse_tree.maybe_error.c"
    {
#line 1054 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe4_4_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_6), ((MR_Word) parse_tree__maybe_error__wrapper_arg_7));
    }
#line 1057 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_5 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 1059 "parse_tree.maybe_error.c"
  }
#line 1061 "parse_tree.maybe_error.c"
}

#line 1064 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
#line 1067 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 1069 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2)
#line 1071 "parse_tree.maybe_error.c"
{
#line 1073 "parse_tree.maybe_error.c"
  {
#line 1075 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 1078 "parse_tree.maybe_error.c"
    {
#line 1080 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2));
    }
#line 1083 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 1085 "parse_tree.maybe_error.c"
  }
#line 1087 "parse_tree.maybe_error.c"
}

#line 1090 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
#line 1093 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_1,
#line 1095 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 1097 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3)
#line 1099 "parse_tree.maybe_error.c"
{
#line 1101 "parse_tree.maybe_error.c"
  {
#line 1103 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 1106 "parse_tree.maybe_error.c"
    {
#line 1108 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(&parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3));
    }
#line 1111 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_1 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 1113 "parse_tree.maybe_error.c"
  }
#line 1115 "parse_tree.maybe_error.c"
}

#line 18 "maybe_error.m"
void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(
#line 18 "maybe_error.m"
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
#line 18 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
#line 18 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
#line 18 "maybe_error.m"
{
#line 18 "maybe_error.m"
  {
#line 18 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 18 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__Cast_HeadVar1_4 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
#line 18 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__Cast_HeadVar2_5 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

#line 18 "maybe_error.m"
    {
#line 18 "maybe_error.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__Cast_HeadVar1_4, parse_tree__maybe_error__Cast_HeadVar2_5);
#line 18 "maybe_error.m"
      return;
    }
#line 18 "maybe_error.m"
  }
#line 18 "maybe_error.m"
}

#line 18 "maybe_error.m"
MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(
#line 18 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_1,
#line 18 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
#line 18 "maybe_error.m"
{
#line 1159 "parse_tree.maybe_error.c"
  {
#line 1161 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__HeadVar__2_1 == parse_tree__maybe_error__HeadVar__2_2);

#line 1164 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 1166 "parse_tree.maybe_error.c"
  }
#line 18 "maybe_error.m"
}

#line 36 "maybe_error.m"
void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0(
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_29,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_30,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_31,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T4_32,
#line 36 "maybe_error.m"
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
#line 36 "maybe_error.m"
{
#line 36 "maybe_error.m"
  {
#line 36 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 36 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_27 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
#line 36 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_28 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

#line 36 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_27 == parse_tree__maybe_error__CastY_28);
#line 36 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 1203 "parse_tree.maybe_error.c"
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "maybe_error.m"
    else
#line 36 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 36 "maybe_error.m"
      {
#line 36 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 36 "maybe_error.m"
          {
#line 36 "maybe_error.m"
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

#line 36 "maybe_error.m"
            {
#line 36 "maybe_error.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_34_34)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
#line 36 "maybe_error.m"
              return;
            }
#line 36 "maybe_error.m"
          }
#line 36 "maybe_error.m"
        else
#line 1232 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "maybe_error.m"
      }
#line 36 "maybe_error.m"
    else
#line 36 "maybe_error.m"
      {
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_35_35 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 3));
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_36_36 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_37_37 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_38_38 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

#line 36 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1251 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "maybe_error.m"
        else
#line 36 "maybe_error.m"
          {
#line 36 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));
#line 36 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 1));
#line 36 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 2));
#line 36 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_23_23 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 3));
#line 36 "maybe_error.m"
            MR_Word parse_tree__maybe_error__V_24_24;

#line 36 "maybe_error.m"
            {
#line 36 "maybe_error.m"
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_29, &parse_tree__maybe_error__V_24_24, parse_tree__maybe_error__V_38_38, parse_tree__maybe_error__V_20_20);
            }
#line 1273 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_24_24 == (MR_Integer) 0);
#line 36 "maybe_error.m"
            parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
#line 36 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
              *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_24_24;
#line 36 "maybe_error.m"
            else
#line 36 "maybe_error.m"
              {
#line 36 "maybe_error.m"
                MR_Word parse_tree__maybe_error__V_25_25;

#line 36 "maybe_error.m"
                {
#line 36 "maybe_error.m"
                  mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T2_30, &parse_tree__maybe_error__V_25_25, parse_tree__maybe_error__V_37_37, parse_tree__maybe_error__V_21_21);
                }
#line 1293 "parse_tree.maybe_error.c"
                parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_25_25 == (MR_Integer) 0);
#line 36 "maybe_error.m"
                parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
#line 36 "maybe_error.m"
                if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
                  *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_25_25;
#line 36 "maybe_error.m"
                else
#line 36 "maybe_error.m"
                  {
#line 36 "maybe_error.m"
                    MR_Word parse_tree__maybe_error__V_26_26;

#line 36 "maybe_error.m"
                    {
#line 36 "maybe_error.m"
                      mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T3_31, &parse_tree__maybe_error__V_26_26, parse_tree__maybe_error__V_36_36, parse_tree__maybe_error__V_22_22);
                    }
#line 1313 "parse_tree.maybe_error.c"
                    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_26_26 == (MR_Integer) 0);
#line 36 "maybe_error.m"
                    parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
#line 36 "maybe_error.m"
                    if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
                      *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_26_26;
#line 36 "maybe_error.m"
                    else
#line 36 "maybe_error.m"
                      {
#line 36 "maybe_error.m"
                        mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T4_32, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_35_35, parse_tree__maybe_error__V_23_23);
#line 36 "maybe_error.m"
                        return;
                      }
#line 36 "maybe_error.m"
                  }
#line 36 "maybe_error.m"
              }
#line 36 "maybe_error.m"
          }
#line 36 "maybe_error.m"
      }
#line 36 "maybe_error.m"
  }
#line 36 "maybe_error.m"
}

#line 36 "maybe_error.m"
MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0(
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_15,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_16,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_17,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T4_18,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
#line 36 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
#line 36 "maybe_error.m"
{
#line 36 "maybe_error.m"
  {
#line 36 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 36 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_13 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
#line 36 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_14 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

#line 36 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_13 == parse_tree__maybe_error__CastY_14);
#line 36 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
      parse_tree__maybe_error__succeeded = MR_TRUE;
#line 36 "maybe_error.m"
    else
#line 36 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 36 "maybe_error.m"
      {
#line 36 "maybe_error.m"
        MR_Word parse_tree__maybe_error__TypeInfo_19_19;
#line 36 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_4_4;

#line 36 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 36 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
          {
#line 36 "maybe_error.m"
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
#line 1396 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_19_19 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 1398 "parse_tree.maybe_error.c"
            {
#line 1400 "parse_tree.maybe_error.c"
              return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_19_19, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
#line 36 "maybe_error.m"
          }
#line 36 "maybe_error.m"
      }
#line 36 "maybe_error.m"
    else
#line 36 "maybe_error.m"
      {
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 1));
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 2));
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 3));
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_9_9;
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_10_10;
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_11_11;
#line 36 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_12_12;

#line 36 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
          {
#line 36 "maybe_error.m"
            parse_tree__maybe_error__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
#line 36 "maybe_error.m"
            parse_tree__maybe_error__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
#line 36 "maybe_error.m"
            parse_tree__maybe_error__V_11_11 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
#line 36 "maybe_error.m"
            parse_tree__maybe_error__V_12_12 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 3));
#line 1442 "parse_tree.maybe_error.c"
            {
#line 1444 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_15, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_9_9);
            }
#line 36 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
              {
#line 1451 "parse_tree.maybe_error.c"
                {
#line 1453 "parse_tree.maybe_error.c"
                  parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_16, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_10_10);
                }
#line 36 "maybe_error.m"
                if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
                  {
#line 1460 "parse_tree.maybe_error.c"
                    {
#line 1462 "parse_tree.maybe_error.c"
                      parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T3_17, parse_tree__maybe_error__V_7_7, parse_tree__maybe_error__V_11_11);
                    }
#line 36 "maybe_error.m"
                    if (parse_tree__maybe_error__succeeded)
#line 1467 "parse_tree.maybe_error.c"
                      {
#line 1469 "parse_tree.maybe_error.c"
                        return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T4_18, parse_tree__maybe_error__V_8_8, parse_tree__maybe_error__V_12_12);
                      }
#line 36 "maybe_error.m"
                  }
#line 36 "maybe_error.m"
              }
#line 36 "maybe_error.m"
          }
#line 36 "maybe_error.m"
      }
#line 36 "maybe_error.m"
    return parse_tree__maybe_error__succeeded;
#line 36 "maybe_error.m"
  }
#line 36 "maybe_error.m"
}

#line 32 "maybe_error.m"
void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0(
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_24,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_25,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_26,
#line 32 "maybe_error.m"
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
#line 32 "maybe_error.m"
{
#line 32 "maybe_error.m"
  {
#line 32 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 32 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_22 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
#line 32 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_23 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

#line 32 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_22 == parse_tree__maybe_error__CastY_23);
#line 32 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 1517 "parse_tree.maybe_error.c"
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "maybe_error.m"
    else
#line 32 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 32 "maybe_error.m"
      {
#line 32 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 32 "maybe_error.m"
          {
#line 32 "maybe_error.m"
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

#line 32 "maybe_error.m"
            {
#line 32 "maybe_error.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_28_28)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
#line 32 "maybe_error.m"
              return;
            }
#line 32 "maybe_error.m"
          }
#line 32 "maybe_error.m"
        else
#line 1546 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "maybe_error.m"
      }
#line 32 "maybe_error.m"
    else
#line 32 "maybe_error.m"
      {
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_30_30 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_31_31 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

#line 32 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1563 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "maybe_error.m"
        else
#line 32 "maybe_error.m"
          {
#line 32 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_17_17 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));
#line 32 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_18_18 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 1));
#line 32 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_19_19 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 2));
#line 32 "maybe_error.m"
            MR_Word parse_tree__maybe_error__V_20_20;

#line 32 "maybe_error.m"
            {
#line 32 "maybe_error.m"
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_24, &parse_tree__maybe_error__V_20_20, parse_tree__maybe_error__V_31_31, parse_tree__maybe_error__V_17_17);
            }
#line 1583 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_20_20 == (MR_Integer) 0);
#line 32 "maybe_error.m"
            parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
#line 32 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 32 "maybe_error.m"
              *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_20_20;
#line 32 "maybe_error.m"
            else
#line 32 "maybe_error.m"
              {
#line 32 "maybe_error.m"
                MR_Word parse_tree__maybe_error__V_21_21;

#line 32 "maybe_error.m"
                {
#line 32 "maybe_error.m"
                  mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T2_25, &parse_tree__maybe_error__V_21_21, parse_tree__maybe_error__V_30_30, parse_tree__maybe_error__V_18_18);
                }
#line 1603 "parse_tree.maybe_error.c"
                parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_21_21 == (MR_Integer) 0);
#line 32 "maybe_error.m"
                parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
#line 32 "maybe_error.m"
                if (parse_tree__maybe_error__succeeded)
#line 32 "maybe_error.m"
                  *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_21_21;
#line 32 "maybe_error.m"
                else
#line 32 "maybe_error.m"
                  {
#line 32 "maybe_error.m"
                    mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T3_26, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_29_29, parse_tree__maybe_error__V_19_19);
#line 32 "maybe_error.m"
                    return;
                  }
#line 32 "maybe_error.m"
              }
#line 32 "maybe_error.m"
          }
#line 32 "maybe_error.m"
      }
#line 32 "maybe_error.m"
  }
#line 32 "maybe_error.m"
}

#line 32 "maybe_error.m"
MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0(
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_13,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_14,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_15,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
#line 32 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
#line 32 "maybe_error.m"
{
#line 32 "maybe_error.m"
  {
#line 32 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 32 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_11 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
#line 32 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_12 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

#line 32 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_11 == parse_tree__maybe_error__CastY_12);
#line 32 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 32 "maybe_error.m"
      parse_tree__maybe_error__succeeded = MR_TRUE;
#line 32 "maybe_error.m"
    else
#line 32 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 32 "maybe_error.m"
      {
#line 32 "maybe_error.m"
        MR_Word parse_tree__maybe_error__TypeInfo_16_16;
#line 32 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_4_4;

#line 32 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 32 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 32 "maybe_error.m"
          {
#line 32 "maybe_error.m"
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
#line 1682 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_16_16 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 1684 "parse_tree.maybe_error.c"
            {
#line 1686 "parse_tree.maybe_error.c"
              return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_16_16, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
#line 32 "maybe_error.m"
          }
#line 32 "maybe_error.m"
      }
#line 32 "maybe_error.m"
    else
#line 32 "maybe_error.m"
      {
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 1));
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 2));
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_8_8;
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_9_9;
#line 32 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_10_10;

#line 32 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 32 "maybe_error.m"
          {
#line 32 "maybe_error.m"
            parse_tree__maybe_error__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
#line 32 "maybe_error.m"
            parse_tree__maybe_error__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
#line 32 "maybe_error.m"
            parse_tree__maybe_error__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 2));
#line 1722 "parse_tree.maybe_error.c"
            {
#line 1724 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_13, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_8_8);
            }
#line 32 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 32 "maybe_error.m"
              {
#line 1731 "parse_tree.maybe_error.c"
                {
#line 1733 "parse_tree.maybe_error.c"
                  parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_14, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_9_9);
                }
#line 32 "maybe_error.m"
                if (parse_tree__maybe_error__succeeded)
#line 1738 "parse_tree.maybe_error.c"
                  {
#line 1740 "parse_tree.maybe_error.c"
                    return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T3_15, parse_tree__maybe_error__V_7_7, parse_tree__maybe_error__V_10_10);
                  }
#line 32 "maybe_error.m"
              }
#line 32 "maybe_error.m"
          }
#line 32 "maybe_error.m"
      }
#line 32 "maybe_error.m"
    return parse_tree__maybe_error__succeeded;
#line 32 "maybe_error.m"
  }
#line 32 "maybe_error.m"
}

#line 28 "maybe_error.m"
void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0(
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_19,
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_20,
#line 28 "maybe_error.m"
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
#line 28 "maybe_error.m"
{
#line 28 "maybe_error.m"
  {
#line 28 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 28 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_17 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
#line 28 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_18 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

#line 28 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_17 == parse_tree__maybe_error__CastY_18);
#line 28 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 1784 "parse_tree.maybe_error.c"
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
#line 28 "maybe_error.m"
    else
#line 28 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 28 "maybe_error.m"
      {
#line 28 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

#line 28 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 28 "maybe_error.m"
          {
#line 28 "maybe_error.m"
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

#line 28 "maybe_error.m"
            {
#line 28 "maybe_error.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_22_22)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
#line 28 "maybe_error.m"
              return;
            }
#line 28 "maybe_error.m"
          }
#line 28 "maybe_error.m"
        else
#line 1813 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
#line 28 "maybe_error.m"
      }
#line 28 "maybe_error.m"
    else
#line 28 "maybe_error.m"
      {
#line 28 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_23_23 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
#line 28 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_24_24 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

#line 28 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1828 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
#line 28 "maybe_error.m"
        else
#line 28 "maybe_error.m"
          {
#line 28 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));
#line 28 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_15_15 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 1));
#line 28 "maybe_error.m"
            MR_Word parse_tree__maybe_error__V_16_16;

#line 28 "maybe_error.m"
            {
#line 28 "maybe_error.m"
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_19, &parse_tree__maybe_error__V_16_16, parse_tree__maybe_error__V_24_24, parse_tree__maybe_error__V_14_14);
            }
#line 1846 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__V_16_16 == (MR_Integer) 0);
#line 28 "maybe_error.m"
            parse_tree__maybe_error__succeeded = !(parse_tree__maybe_error__succeeded);
#line 28 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 28 "maybe_error.m"
              *parse_tree__maybe_error__HeadVar__1_1 = parse_tree__maybe_error__V_16_16;
#line 28 "maybe_error.m"
            else
#line 28 "maybe_error.m"
              {
#line 28 "maybe_error.m"
                mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T2_20, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_23_23, parse_tree__maybe_error__V_15_15);
#line 28 "maybe_error.m"
                return;
              }
#line 28 "maybe_error.m"
          }
#line 28 "maybe_error.m"
      }
#line 28 "maybe_error.m"
  }
#line 28 "maybe_error.m"
}

#line 28 "maybe_error.m"
MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0(
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_11,
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_12,
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
#line 28 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
#line 28 "maybe_error.m"
{
#line 28 "maybe_error.m"
  {
#line 28 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 28 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_9 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
#line 28 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_10 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

#line 28 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_9 == parse_tree__maybe_error__CastY_10);
#line 28 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 28 "maybe_error.m"
      parse_tree__maybe_error__succeeded = MR_TRUE;
#line 28 "maybe_error.m"
    else
#line 28 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 28 "maybe_error.m"
      {
#line 28 "maybe_error.m"
        MR_Word parse_tree__maybe_error__TypeInfo_13_13;
#line 28 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 28 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_4_4;

#line 28 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 28 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 28 "maybe_error.m"
          {
#line 28 "maybe_error.m"
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
#line 1921 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_13_13 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 1923 "parse_tree.maybe_error.c"
            {
#line 1925 "parse_tree.maybe_error.c"
              return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_13_13, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
#line 28 "maybe_error.m"
          }
#line 28 "maybe_error.m"
      }
#line 28 "maybe_error.m"
    else
#line 28 "maybe_error.m"
      {
#line 28 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
#line 28 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 1));
#line 28 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_7_7;
#line 28 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_8_8;

#line 28 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 28 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 28 "maybe_error.m"
          {
#line 28 "maybe_error.m"
            parse_tree__maybe_error__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
#line 28 "maybe_error.m"
            parse_tree__maybe_error__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 1));
#line 1955 "parse_tree.maybe_error.c"
            {
#line 1957 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_11, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_7_7);
            }
#line 28 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 1962 "parse_tree.maybe_error.c"
              {
#line 1964 "parse_tree.maybe_error.c"
                return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_12, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_8_8);
              }
#line 28 "maybe_error.m"
          }
#line 28 "maybe_error.m"
      }
#line 28 "maybe_error.m"
    return parse_tree__maybe_error__succeeded;
#line 28 "maybe_error.m"
  }
#line 28 "maybe_error.m"
}

#line 24 "maybe_error.m"
void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0(
#line 24 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_14,
#line 24 "maybe_error.m"
  MR_Word * parse_tree__maybe_error__HeadVar__1_1,
#line 24 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2,
#line 24 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__3_3)
#line 24 "maybe_error.m"
{
#line 24 "maybe_error.m"
  {
#line 24 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 24 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_12 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;
#line 24 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_13 = (MR_Integer) parse_tree__maybe_error__HeadVar__3_3;

#line 24 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_12 == parse_tree__maybe_error__CastY_13);
#line 24 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 2004 "parse_tree.maybe_error.c"
      *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 0;
#line 24 "maybe_error.m"
    else
#line 24 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 24 "maybe_error.m"
      {
#line 24 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));

#line 24 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 24 "maybe_error.m"
          {
#line 24 "maybe_error.m"
            MR_Word parse_tree__maybe_error__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0)));

#line 24 "maybe_error.m"
            {
#line 24 "maybe_error.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__maybe_error_scalar_common_1[0], parse_tree__maybe_error__HeadVar__1_1, ((MR_Box) (parse_tree__maybe_error__V_16_16)), ((MR_Box) (parse_tree__maybe_error__V_5_5)));
#line 24 "maybe_error.m"
              return;
            }
#line 24 "maybe_error.m"
          }
#line 24 "maybe_error.m"
        else
#line 2033 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 1;
#line 24 "maybe_error.m"
      }
#line 24 "maybe_error.m"
    else
#line 24 "maybe_error.m"
      {
#line 24 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_17_17 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));

#line 24 "maybe_error.m"
        if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2046 "parse_tree.maybe_error.c"
          *parse_tree__maybe_error__HeadVar__1_1 = (MR_Integer) 2;
#line 24 "maybe_error.m"
        else
#line 24 "maybe_error.m"
          {
#line 24 "maybe_error.m"
            MR_Box parse_tree__maybe_error__V_11_11 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__3_3, (MR_Integer) 0));

#line 24 "maybe_error.m"
            {
#line 24 "maybe_error.m"
              mercury__builtin__compare_3_p_0(parse_tree__maybe_error__TypeInfo_for_T1_14, parse_tree__maybe_error__HeadVar__1_1, parse_tree__maybe_error__V_17_17, parse_tree__maybe_error__V_11_11);
#line 24 "maybe_error.m"
              return;
            }
#line 24 "maybe_error.m"
          }
#line 24 "maybe_error.m"
      }
#line 24 "maybe_error.m"
  }
#line 24 "maybe_error.m"
}

#line 24 "maybe_error.m"
MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0(
#line 24 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_9,
#line 24 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1,
#line 24 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__2_2)
#line 24 "maybe_error.m"
{
#line 24 "maybe_error.m"
  {
#line 24 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 24 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastX_7 = (MR_Integer) parse_tree__maybe_error__HeadVar__1_1;
#line 24 "maybe_error.m"
    MR_Integer parse_tree__maybe_error__CastY_8 = (MR_Integer) parse_tree__maybe_error__HeadVar__2_2;

#line 24 "maybe_error.m"
    parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__CastX_7 == parse_tree__maybe_error__CastY_8);
#line 24 "maybe_error.m"
    if (parse_tree__maybe_error__succeeded)
#line 24 "maybe_error.m"
      parse_tree__maybe_error__succeeded = MR_TRUE;
#line 24 "maybe_error.m"
    else
#line 24 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 24 "maybe_error.m"
      {
#line 24 "maybe_error.m"
        MR_Word parse_tree__maybe_error__TypeInfo_10_10;
#line 24 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 24 "maybe_error.m"
        MR_Word parse_tree__maybe_error__V_4_4;

#line 24 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 24 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 24 "maybe_error.m"
          {
#line 24 "maybe_error.m"
            parse_tree__maybe_error__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0)));
#line 2118 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_10_10 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 2120 "parse_tree.maybe_error.c"
            {
#line 2122 "parse_tree.maybe_error.c"
              return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_10_10, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
            }
#line 24 "maybe_error.m"
          }
#line 24 "maybe_error.m"
      }
#line 24 "maybe_error.m"
    else
#line 24 "maybe_error.m"
      {
#line 24 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0));
#line 24 "maybe_error.m"
        MR_Box parse_tree__maybe_error__V_6_6;

#line 24 "maybe_error.m"
        parse_tree__maybe_error__succeeded = ((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 24 "maybe_error.m"
        if (parse_tree__maybe_error__succeeded)
#line 24 "maybe_error.m"
          {
#line 24 "maybe_error.m"
            parse_tree__maybe_error__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__maybe_error__HeadVar__2_2, (MR_Integer) 0));
#line 2146 "parse_tree.maybe_error.c"
            {
#line 2148 "parse_tree.maybe_error.c"
              return parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_9, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_6_6);
            }
#line 24 "maybe_error.m"
          }
#line 24 "maybe_error.m"
      }
#line 24 "maybe_error.m"
    return parse_tree__maybe_error__succeeded;
#line 24 "maybe_error.m"
  }
#line 24 "maybe_error.m"
}

#line 59 "maybe_error.m"
MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors4_1_f_0(
#line 59 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_8,
#line 59 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_9,
#line 59 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_10,
#line 59 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T4_11,
#line 59 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
#line 59 "maybe_error.m"
{
#line 77 "maybe_error.m"
  {
#line 77 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 77 "maybe_error.m"
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

#line 77 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 78 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "maybe_error.m"
    else
#line 77 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 77 "maybe_error.m"
    return parse_tree__maybe_error__HeadVar__2_2;
#line 77 "maybe_error.m"
  }
#line 59 "maybe_error.m"
}

#line 58 "maybe_error.m"
MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors3_1_f_0(
#line 58 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_7,
#line 58 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_8,
#line 58 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T3_9,
#line 58 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
#line 58 "maybe_error.m"
{
#line 74 "maybe_error.m"
  {
#line 74 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 74 "maybe_error.m"
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

#line 74 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 75 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "maybe_error.m"
    else
#line 74 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 74 "maybe_error.m"
    return parse_tree__maybe_error__HeadVar__2_2;
#line 74 "maybe_error.m"
  }
#line 58 "maybe_error.m"
}

#line 57 "maybe_error.m"
MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors2_1_f_0(
#line 57 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_6,
#line 57 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T2_7,
#line 57 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
#line 57 "maybe_error.m"
{
#line 71 "maybe_error.m"
  {
#line 71 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 71 "maybe_error.m"
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

#line 71 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 72 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "maybe_error.m"
    else
#line 71 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 71 "maybe_error.m"
    return parse_tree__maybe_error__HeadVar__2_2;
#line 71 "maybe_error.m"
  }
#line 57 "maybe_error.m"
}

#line 56 "maybe_error.m"
MR_Word MR_CALL 
parse_tree__maybe_error__get_any_errors1_1_f_0(
#line 56 "maybe_error.m"
  MR_Word parse_tree__maybe_error__TypeInfo_for_T1_5,
#line 56 "maybe_error.m"
  MR_Word parse_tree__maybe_error__HeadVar__1_1)
#line 56 "maybe_error.m"
{
#line 68 "maybe_error.m"
  {
#line 68 "maybe_error.m"
    MR_bool parse_tree__maybe_error__succeeded;
#line 68 "maybe_error.m"
    MR_Word parse_tree__maybe_error__HeadVar__2_2;

#line 68 "maybe_error.m"
    if (((MR_tag((MR_Word) parse_tree__maybe_error__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 69 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__maybe_error__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "maybe_error.m"
    else
#line 68 "maybe_error.m"
      parse_tree__maybe_error__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "maybe_error.m"
    return parse_tree__maybe_error__HeadVar__2_2;
#line 68 "maybe_error.m"
  }
#line 56 "maybe_error.m"
}

void mercury__parse_tree__maybe_error__init(void)
{
}

void mercury__parse_tree__maybe_error__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_3);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe4_4);
	MR_register_type_ctor_info(&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0);
}

void mercury__parse_tree__maybe_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.maybe_error. */
