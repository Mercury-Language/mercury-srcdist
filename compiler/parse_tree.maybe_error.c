/*
** Automatically generated from `maybe_error.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 94 "parse_tree.maybe_error.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 97 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0[1];

#line 100 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0;

#line 103 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1[1];

#line 106 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1;

#line 109 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0[1];

#line 112 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1[1];

#line 115 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe1_1[2];

#line 118 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1[2];

#line 121 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1[2];

#line 124 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0[1];

#line 127 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0;

#line 130 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1[2];

#line 133 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1;

#line 136 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0[1];

#line 139 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1[1];

#line 142 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe2_2[2];

#line 145 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2[2];

#line 148 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2[2];

#line 151 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0[1];

#line 154 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0;

#line 157 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1[3];

#line 160 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1;

#line 163 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0[1];

#line 166 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1[1];

#line 169 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe3_3[2];

#line 172 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3[2];

#line 175 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3[2];

#line 178 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0[1];

#line 181 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0;

#line 184 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1[4];

#line 187 "parse_tree.maybe_error.c"
static const MR_DuFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1;

#line 190 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0[1];

#line 193 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1[1];

#line 196 "parse_tree.maybe_error.c"
static const MR_DuPtagLayout parse_tree__maybe_error__parse_tree__maybe_error__du_ptag_ordered_maybe4_4[2];

#line 199 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4[2];

#line 202 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4[2];

#line 205 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0;

#line 208 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1;

#line 211 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0[2];

#line 214 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0[2];

#line 217 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0[2];

#line 220 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
#line 223 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 225 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 227 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3);

#line 230 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
#line 233 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 235 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_2,
#line 237 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 239 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4);

#line 242 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
#line 245 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 247 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 249 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 251 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4);

#line 254 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
#line 257 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 259 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 261 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_3,
#line 263 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 265 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5);

#line 268 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
#line 271 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 273 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 275 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 277 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 279 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5);

#line 282 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
#line 285 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 287 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 289 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 291 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_4,
#line 293 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 295 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6);

#line 298 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
#line 301 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 303 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 305 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 307 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 309 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 311 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6);

#line 314 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
#line 317 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 319 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 321 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 323 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 325 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_5,
#line 327 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6,
#line 329 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_7);

#line 332 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
#line 335 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 337 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2);

#line 340 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
#line 343 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_1,
#line 345 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 347 "parse_tree.maybe_error.c"
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



#line 373 "parse_tree.maybe_error.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 381 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 386 "parse_tree.maybe_error.c"
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

#line 401 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 406 "parse_tree.maybe_error.c"
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

#line 421 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0
};

#line 426 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1
};

#line 431 "parse_tree.maybe_error.c"
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

#line 445 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe1_1[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe1_1_1
};

#line 451 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 457 "parse_tree.maybe_error.c"
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

#line 474 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 479 "parse_tree.maybe_error.c"
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

#line 494 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 500 "parse_tree.maybe_error.c"
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

#line 515 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0
};

#line 520 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1
};

#line 525 "parse_tree.maybe_error.c"
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

#line 539 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe2_2[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe2_2_1
};

#line 545 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 551 "parse_tree.maybe_error.c"
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

#line 568 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 573 "parse_tree.maybe_error.c"
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

#line 588 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 595 "parse_tree.maybe_error.c"
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

#line 610 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0
};

#line 615 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1
};

#line 620 "parse_tree.maybe_error.c"
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

#line 634 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe3_3[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe3_3_1
};

#line 640 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 646 "parse_tree.maybe_error.c"
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

#line 663 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__maybe_error__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 668 "parse_tree.maybe_error.c"
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

#line 683 "parse_tree.maybe_error.c"
static const MR_PseudoTypeInfo parse_tree__maybe_error__parse_tree__maybe_error__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

#line 691 "parse_tree.maybe_error.c"
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

#line 706 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0
};

#line 711 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1
};

#line 716 "parse_tree.maybe_error.c"
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

#line 730 "parse_tree.maybe_error.c"
static const MR_DuFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__du_name_ordered_maybe4_4[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__du_functor_desc_maybe4_4_1
};

#line 736 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 742 "parse_tree.maybe_error.c"
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

#line 759 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0 = {
  (MR_String) "safe_to_continue",
  (MR_Integer) 0
};

#line 765 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDesc parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1 = {
  (MR_String) "unsafe_to_continue",
  (MR_Integer) 1
};

#line 771 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_value_ordered_maybe_safe_to_continue_0[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1
};

#line 777 "parse_tree.maybe_error.c"
static const MR_EnumFunctorDescPtr parse_tree__maybe_error__parse_tree__maybe_error__enum_name_ordered_maybe_safe_to_continue_0[2] = {
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_0,
  &parse_tree__maybe_error__parse_tree__maybe_error__enum_functor_desc_maybe_safe_to_continue_0_1
};

#line 783 "parse_tree.maybe_error.c"
static const MR_Integer parse_tree__maybe_error__parse_tree__maybe_error__functor_number_map_maybe_safe_to_continue_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 789 "parse_tree.maybe_error.c"
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

#line 806 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe1_1_0_10001(
#line 809 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 811 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 813 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3)
#line 815 "parse_tree.maybe_error.c"
{
#line 817 "parse_tree.maybe_error.c"
  {
#line 819 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 822 "parse_tree.maybe_error.c"
    {
#line 824 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe1_1_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3));
    }
#line 827 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 829 "parse_tree.maybe_error.c"
  }
#line 831 "parse_tree.maybe_error.c"
}

#line 834 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe1_1_0_10001(
#line 837 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 839 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_2,
#line 841 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 843 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4)
#line 845 "parse_tree.maybe_error.c"
{
#line 847 "parse_tree.maybe_error.c"
  {
#line 849 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 852 "parse_tree.maybe_error.c"
    {
#line 854 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe1_1_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4));
    }
#line 857 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_2 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 859 "parse_tree.maybe_error.c"
  }
#line 861 "parse_tree.maybe_error.c"
}

#line 864 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe2_2_0_10001(
#line 867 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 869 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 871 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 873 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4)
#line 875 "parse_tree.maybe_error.c"
{
#line 877 "parse_tree.maybe_error.c"
  {
#line 879 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 882 "parse_tree.maybe_error.c"
    {
#line 884 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4));
    }
#line 887 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 889 "parse_tree.maybe_error.c"
  }
#line 891 "parse_tree.maybe_error.c"
}

#line 894 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe2_2_0_10001(
#line 897 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 899 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 901 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_3,
#line 903 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 905 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5)
#line 907 "parse_tree.maybe_error.c"
{
#line 909 "parse_tree.maybe_error.c"
  {
#line 911 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 914 "parse_tree.maybe_error.c"
    {
#line 916 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe2_2_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5));
    }
#line 919 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_3 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 921 "parse_tree.maybe_error.c"
  }
#line 923 "parse_tree.maybe_error.c"
}

#line 926 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe3_3_0_10001(
#line 929 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 931 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 933 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 935 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 937 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5)
#line 939 "parse_tree.maybe_error.c"
{
#line 941 "parse_tree.maybe_error.c"
  {
#line 943 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 946 "parse_tree.maybe_error.c"
    {
#line 948 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe3_3_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5));
    }
#line 951 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 953 "parse_tree.maybe_error.c"
  }
#line 955 "parse_tree.maybe_error.c"
}

#line 958 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe3_3_0_10001(
#line 961 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 963 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 965 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 967 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_4,
#line 969 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 971 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6)
#line 973 "parse_tree.maybe_error.c"
{
#line 975 "parse_tree.maybe_error.c"
  {
#line 977 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 980 "parse_tree.maybe_error.c"
    {
#line 982 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe3_3_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_5), ((MR_Word) parse_tree__maybe_error__wrapper_arg_6));
    }
#line 985 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_4 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 987 "parse_tree.maybe_error.c"
  }
#line 989 "parse_tree.maybe_error.c"
}

#line 992 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe4_4_0_10001(
#line 995 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 997 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 999 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 1001 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 1003 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_5,
#line 1005 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6)
#line 1007 "parse_tree.maybe_error.c"
{
#line 1009 "parse_tree.maybe_error.c"
  {
#line 1011 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 1014 "parse_tree.maybe_error.c"
    {
#line 1016 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe4_4_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), ((MR_Word) parse_tree__maybe_error__wrapper_arg_5), ((MR_Word) parse_tree__maybe_error__wrapper_arg_6));
    }
#line 1019 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 1021 "parse_tree.maybe_error.c"
  }
#line 1023 "parse_tree.maybe_error.c"
}

#line 1026 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe4_4_0_10001(
#line 1029 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 1031 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 1033 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3,
#line 1035 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_4,
#line 1037 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_5,
#line 1039 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_6,
#line 1041 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_7)
#line 1043 "parse_tree.maybe_error.c"
{
#line 1045 "parse_tree.maybe_error.c"
  {
#line 1047 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 1050 "parse_tree.maybe_error.c"
    {
#line 1052 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe4_4_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3), ((MR_Word) parse_tree__maybe_error__wrapper_arg_4), &parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_6), ((MR_Word) parse_tree__maybe_error__wrapper_arg_7));
    }
#line 1055 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_5 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 1057 "parse_tree.maybe_error.c"
  }
#line 1059 "parse_tree.maybe_error.c"
}

#line 1062 "parse_tree.maybe_error.c"
static MR_bool MR_CALL 
parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0_10001(
#line 1065 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_1,
#line 1067 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2)
#line 1069 "parse_tree.maybe_error.c"
{
#line 1071 "parse_tree.maybe_error.c"
  {
#line 1073 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded;

#line 1076 "parse_tree.maybe_error.c"
    {
#line 1078 "parse_tree.maybe_error.c"
      parse_tree__maybe_error__succeeded = parse_tree__maybe_error____Unify____maybe_safe_to_continue_0_0(((MR_Word) parse_tree__maybe_error__wrapper_arg_1), ((MR_Word) parse_tree__maybe_error__wrapper_arg_2));
    }
#line 1081 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 1083 "parse_tree.maybe_error.c"
  }
#line 1085 "parse_tree.maybe_error.c"
}

#line 1088 "parse_tree.maybe_error.c"
static void MR_CALL 
parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0_10001(
#line 1091 "parse_tree.maybe_error.c"
  MR_Box * parse_tree__maybe_error__wrapper_arg_1,
#line 1093 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_2,
#line 1095 "parse_tree.maybe_error.c"
  MR_Box parse_tree__maybe_error__wrapper_arg_3)
#line 1097 "parse_tree.maybe_error.c"
{
#line 1099 "parse_tree.maybe_error.c"
  {
#line 1101 "parse_tree.maybe_error.c"
    MR_Word parse_tree__maybe_error__conv0_HeadVar__1_1;

#line 1104 "parse_tree.maybe_error.c"
    {
#line 1106 "parse_tree.maybe_error.c"
      parse_tree__maybe_error____Compare____maybe_safe_to_continue_0_0(&parse_tree__maybe_error__conv0_HeadVar__1_1, ((MR_Word) parse_tree__maybe_error__wrapper_arg_2), ((MR_Word) parse_tree__maybe_error__wrapper_arg_3));
    }
#line 1109 "parse_tree.maybe_error.c"
    *parse_tree__maybe_error__wrapper_arg_1 = ((MR_Box) (parse_tree__maybe_error__conv0_HeadVar__1_1));
#line 1111 "parse_tree.maybe_error.c"
  }
#line 1113 "parse_tree.maybe_error.c"
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
#line 1155 "parse_tree.maybe_error.c"
  {
#line 1157 "parse_tree.maybe_error.c"
    MR_bool parse_tree__maybe_error__succeeded = (parse_tree__maybe_error__HeadVar__2_1 == parse_tree__maybe_error__HeadVar__2_2);

#line 1160 "parse_tree.maybe_error.c"
    return parse_tree__maybe_error__succeeded;
#line 1162 "parse_tree.maybe_error.c"
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
#line 1199 "parse_tree.maybe_error.c"
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
            }
#line 36 "maybe_error.m"
          }
#line 36 "maybe_error.m"
        else
#line 1226 "parse_tree.maybe_error.c"
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
#line 1245 "parse_tree.maybe_error.c"
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
#line 1267 "parse_tree.maybe_error.c"
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
#line 1287 "parse_tree.maybe_error.c"
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
#line 1307 "parse_tree.maybe_error.c"
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
#line 1388 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_19_19 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 1390 "parse_tree.maybe_error.c"
            {
#line 1392 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_19_19, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
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
#line 1434 "parse_tree.maybe_error.c"
            {
#line 1436 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_15, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_9_9);
            }
#line 36 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
              {
#line 1443 "parse_tree.maybe_error.c"
                {
#line 1445 "parse_tree.maybe_error.c"
                  parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_16, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_10_10);
                }
#line 36 "maybe_error.m"
                if (parse_tree__maybe_error__succeeded)
#line 36 "maybe_error.m"
                  {
#line 1452 "parse_tree.maybe_error.c"
                    {
#line 1454 "parse_tree.maybe_error.c"
                      parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T3_17, parse_tree__maybe_error__V_7_7, parse_tree__maybe_error__V_11_11);
                    }
#line 36 "maybe_error.m"
                    if (parse_tree__maybe_error__succeeded)
#line 1459 "parse_tree.maybe_error.c"
                      {
#line 1461 "parse_tree.maybe_error.c"
                        parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T4_18, parse_tree__maybe_error__V_8_8, parse_tree__maybe_error__V_12_12);
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
#line 1509 "parse_tree.maybe_error.c"
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
            }
#line 32 "maybe_error.m"
          }
#line 32 "maybe_error.m"
        else
#line 1536 "parse_tree.maybe_error.c"
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
#line 1553 "parse_tree.maybe_error.c"
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
#line 1573 "parse_tree.maybe_error.c"
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
#line 1593 "parse_tree.maybe_error.c"
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
#line 1670 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_16_16 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 1672 "parse_tree.maybe_error.c"
            {
#line 1674 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_16_16, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
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
#line 1710 "parse_tree.maybe_error.c"
            {
#line 1712 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_13, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_8_8);
            }
#line 32 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 32 "maybe_error.m"
              {
#line 1719 "parse_tree.maybe_error.c"
                {
#line 1721 "parse_tree.maybe_error.c"
                  parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_14, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_9_9);
                }
#line 32 "maybe_error.m"
                if (parse_tree__maybe_error__succeeded)
#line 1726 "parse_tree.maybe_error.c"
                  {
#line 1728 "parse_tree.maybe_error.c"
                    parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T3_15, parse_tree__maybe_error__V_7_7, parse_tree__maybe_error__V_10_10);
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
#line 1772 "parse_tree.maybe_error.c"
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
            }
#line 28 "maybe_error.m"
          }
#line 28 "maybe_error.m"
        else
#line 1799 "parse_tree.maybe_error.c"
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
#line 1814 "parse_tree.maybe_error.c"
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
#line 1832 "parse_tree.maybe_error.c"
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
#line 1905 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_13_13 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 1907 "parse_tree.maybe_error.c"
            {
#line 1909 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_13_13, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
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
#line 1939 "parse_tree.maybe_error.c"
            {
#line 1941 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_11, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_7_7);
            }
#line 28 "maybe_error.m"
            if (parse_tree__maybe_error__succeeded)
#line 1946 "parse_tree.maybe_error.c"
              {
#line 1948 "parse_tree.maybe_error.c"
                parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T2_12, parse_tree__maybe_error__V_6_6, parse_tree__maybe_error__V_8_8);
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
#line 1988 "parse_tree.maybe_error.c"
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
            }
#line 24 "maybe_error.m"
          }
#line 24 "maybe_error.m"
        else
#line 2015 "parse_tree.maybe_error.c"
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
#line 2028 "parse_tree.maybe_error.c"
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
#line 2098 "parse_tree.maybe_error.c"
            parse_tree__maybe_error__TypeInfo_10_10 = (MR_Word) &parse_tree__maybe_error_scalar_common_1[0];
#line 2100 "parse_tree.maybe_error.c"
            {
#line 2102 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_10_10, ((MR_Box) (parse_tree__maybe_error__V_3_3)), ((MR_Box) (parse_tree__maybe_error__V_4_4)));
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
#line 2126 "parse_tree.maybe_error.c"
            {
#line 2128 "parse_tree.maybe_error.c"
              parse_tree__maybe_error__succeeded = mercury__builtin__unify_2_p_0(parse_tree__maybe_error__TypeInfo_for_T1_9, parse_tree__maybe_error__V_5_5, parse_tree__maybe_error__V_6_6);
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
