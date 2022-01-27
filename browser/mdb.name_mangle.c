/*
** Automatically generated from `name_mangle.m'
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


/* :- module mdb.name_mangle. */
/* :- implementation. */

/*
INIT mercury__mdb__name_mangle__init
ENDINIT
*/

#include "mdb.name_mangle.mih"


#include "mdb.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




#line 64 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0;

#line 67 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1;

#line 70 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2];

#line 73 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2];

#line 76 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2];

#line 79 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5];

#line 82 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0;

#line 85 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1];

#line 88 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1];

#line 91 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1];

#line 94 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1];

#line 97 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2];

#line 100 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0;

#line 103 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1];

#line 106 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1;

#line 109 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1];

#line 112 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1];

#line 115 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2];

#line 118 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2];

#line 121 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2];

#line 124 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 127 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 129 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 132 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 135 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 137 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 139 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 142 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 145 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 147 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 150 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 153 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 155 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 157 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 160 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 163 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 165 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 168 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 171 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 173 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 175 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 178 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 181 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 183 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 186 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 189 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 191 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 193 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 196 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 199 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 201 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 204 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 207 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 209 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 211 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 214 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 217 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 219 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 222 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 225 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 227 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 229 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 232 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 235 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 237 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 240 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 243 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 245 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 247 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 292 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void);

#line 279 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__system_is_osx_0_p_0(void);

#line 264 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void);

#line 248 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
#line 248 "name_mangle.m"
  MR_String mdb__name_mangle__String_3,
#line 248 "name_mangle.m"
  MR_String * mdb__name_mangle__Name_4);

#line 184 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
#line 184 "name_mangle.m"
  MR_String mdb__name_mangle__Name_3,
#line 184 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_4);

#line 170 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
#line 170 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 170 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_2);



#line 225 "name_mangle.m"
/* sealed */ struct mdb__name_mangle__vector_common_type_1_0_s {
#line 225 "name_mangle.m"
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
#line 225 "name_mangle.m"
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
#line 225 "name_mangle.m"
};

static /* final */ const struct mdb__name_mangle__vector_common_type_1_0_s mdb__name_mangle_vector_common_1[64];




static /* final */ const struct mdb__name_mangle__vector_common_type_1_0_s mdb__name_mangle_vector_common_1[64] = {
  /* row 0 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 1 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 2 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 3 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 11 */
  {
    (MR_String) "\\=",
    (MR_String) "f_not_equal"
  },
  /* row 12 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 13 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 15 */
  {
    (MR_String) "=<",
    (MR_String) "f_less_or_equal"
  },
  /* row 16 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 21 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 23 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 24 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 28 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 29 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 32 */
  {
    (MR_String) "!",
    (MR_String) "f_cut"
  },
  /* row 33 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 34 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 35 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 36 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 37 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 38 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 39 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 40 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 41 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 42 */
  {
    (MR_String) "+",
    (MR_String) "f_plus"
  },
  /* row 43 */
  {
    (MR_String) "*",
    (MR_String) "f_times"
  },
  /* row 44 */
  {
    (MR_String) "-",
    (MR_String) "f_minus"
  },
  /* row 45 */
  {
    (MR_String) ",",
    (MR_String) "f_comma"
  },
  /* row 46 */
  {
    (MR_String) "/",
    (MR_String) "f_slash"
  },
  /* row 47 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 48 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 49 */
  {
    (MR_String) ">=",
    (MR_String) "f_greater_or_equal"
  },
  /* row 50 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 51 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 52 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 53 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 54 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 55 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 56 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 57 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 58 */
  {
    (MR_String) ";",
    (MR_String) "f_semicolon"
  },
  /* row 59 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 60 */
  {
    (MR_String) "=",
    (MR_String) "f_equal"
  },
  /* row 61 */
  {
    (MR_String) "<",
    (MR_String) "f_less_than"
  },
  /* row 62 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 63 */
  {
    (MR_String) ">",
    (MR_String) "f_greater_than"
  },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.name_mangle.mh"



#line 634 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____arity_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "arity",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 651 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 0
};

#line 657 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1 = {
  (MR_String) "function",
  (MR_Integer) 1
};

#line 663 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1
};

#line 669 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0
};

#line 675 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 681 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__name_mangle____Unify____is_pred_or_func_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____is_pred_or_func_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "is_pred_or_func",
  {     mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0 },
  {     mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0
};

#line 698 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 707 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0 = {
  (MR_String) "mercury_proc",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0,
  NULL,
  NULL,
  NULL
};

#line 722 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 727 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0
  }
};

#line 736 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 741 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1] = {
  (MR_Integer) 0
};

#line 746 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_mercury_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__name_mangle____Unify____mercury_proc_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____mercury_proc_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "mercury_proc",
  {     mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0 },
  {     mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0
};

#line 763 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_mode_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____mode_num_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____mode_num_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "mode_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 780 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_module_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____module_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____module_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "module_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 797 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_pred_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____pred_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____pred_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "pred_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 814 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 820 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0 = {
  (MR_String) "qualified",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0,
  NULL,
  NULL,
  NULL
};

#line 835 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 840 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1 = {
  (MR_String) "unqualified",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1,
  NULL,
  NULL,
  NULL
};

#line 855 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0
};

#line 860 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 865 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1
  }
};

#line 879 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0,
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 885 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 891 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__name_mangle____Unify____sym_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____sym_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "sym_name",
  {     mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0 },
  {     mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0
};

#line 908 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 911 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 913 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 915 "mdb.name_mangle.c"
{
#line 917 "mdb.name_mangle.c"
  {
#line 919 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 922 "mdb.name_mangle.c"
    {
#line 924 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____arity_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 927 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 929 "mdb.name_mangle.c"
  }
#line 931 "mdb.name_mangle.c"
}

#line 934 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 937 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 939 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 941 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 943 "mdb.name_mangle.c"
{
#line 945 "mdb.name_mangle.c"
  {
#line 947 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 950 "mdb.name_mangle.c"
    {
#line 952 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____arity_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 955 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 957 "mdb.name_mangle.c"
  }
#line 959 "mdb.name_mangle.c"
}

#line 962 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 965 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 967 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 969 "mdb.name_mangle.c"
{
#line 971 "mdb.name_mangle.c"
  {
#line 973 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 976 "mdb.name_mangle.c"
    {
#line 978 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____is_pred_or_func_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 981 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 983 "mdb.name_mangle.c"
  }
#line 985 "mdb.name_mangle.c"
}

#line 988 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 991 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 993 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 995 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 997 "mdb.name_mangle.c"
{
#line 999 "mdb.name_mangle.c"
  {
#line 1001 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1004 "mdb.name_mangle.c"
    {
#line 1006 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____is_pred_or_func_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1009 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1011 "mdb.name_mangle.c"
  }
#line 1013 "mdb.name_mangle.c"
}

#line 1016 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 1019 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1021 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1023 "mdb.name_mangle.c"
{
#line 1025 "mdb.name_mangle.c"
  {
#line 1027 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1030 "mdb.name_mangle.c"
    {
#line 1032 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mercury_proc_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1035 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1037 "mdb.name_mangle.c"
  }
#line 1039 "mdb.name_mangle.c"
}

#line 1042 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 1045 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1047 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1049 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1051 "mdb.name_mangle.c"
{
#line 1053 "mdb.name_mangle.c"
  {
#line 1055 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1058 "mdb.name_mangle.c"
    {
#line 1060 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mercury_proc_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1063 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1065 "mdb.name_mangle.c"
  }
#line 1067 "mdb.name_mangle.c"
}

#line 1070 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 1073 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1075 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1077 "mdb.name_mangle.c"
{
#line 1079 "mdb.name_mangle.c"
  {
#line 1081 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1084 "mdb.name_mangle.c"
    {
#line 1086 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mode_num_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 1089 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1091 "mdb.name_mangle.c"
  }
#line 1093 "mdb.name_mangle.c"
}

#line 1096 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 1099 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1101 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1103 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1105 "mdb.name_mangle.c"
{
#line 1107 "mdb.name_mangle.c"
  {
#line 1109 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1112 "mdb.name_mangle.c"
    {
#line 1114 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mode_num_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 1117 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1119 "mdb.name_mangle.c"
  }
#line 1121 "mdb.name_mangle.c"
}

#line 1124 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 1127 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1129 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1131 "mdb.name_mangle.c"
{
#line 1133 "mdb.name_mangle.c"
  {
#line 1135 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1138 "mdb.name_mangle.c"
    {
#line 1140 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____module_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1143 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1145 "mdb.name_mangle.c"
  }
#line 1147 "mdb.name_mangle.c"
}

#line 1150 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 1153 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1155 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1157 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1159 "mdb.name_mangle.c"
{
#line 1161 "mdb.name_mangle.c"
  {
#line 1163 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1166 "mdb.name_mangle.c"
    {
#line 1168 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____module_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1171 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1173 "mdb.name_mangle.c"
  }
#line 1175 "mdb.name_mangle.c"
}

#line 1178 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 1181 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1183 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1185 "mdb.name_mangle.c"
{
#line 1187 "mdb.name_mangle.c"
  {
#line 1189 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1192 "mdb.name_mangle.c"
    {
#line 1194 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____pred_name_0_0(((MR_String) mdb__name_mangle__wrapper_arg_1), ((MR_String) mdb__name_mangle__wrapper_arg_2));
    }
#line 1197 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1199 "mdb.name_mangle.c"
  }
#line 1201 "mdb.name_mangle.c"
}

#line 1204 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 1207 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1209 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1211 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1213 "mdb.name_mangle.c"
{
#line 1215 "mdb.name_mangle.c"
  {
#line 1217 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1220 "mdb.name_mangle.c"
    {
#line 1222 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____pred_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_String) mdb__name_mangle__wrapper_arg_2), ((MR_String) mdb__name_mangle__wrapper_arg_3));
    }
#line 1225 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1227 "mdb.name_mangle.c"
  }
#line 1229 "mdb.name_mangle.c"
}

#line 1232 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 1235 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1237 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1239 "mdb.name_mangle.c"
{
#line 1241 "mdb.name_mangle.c"
  {
#line 1243 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1246 "mdb.name_mangle.c"
    {
#line 1248 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1251 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1253 "mdb.name_mangle.c"
  }
#line 1255 "mdb.name_mangle.c"
}

#line 1258 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 1261 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1263 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1265 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1267 "mdb.name_mangle.c"
{
#line 1269 "mdb.name_mangle.c"
  {
#line 1271 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1274 "mdb.name_mangle.c"
    {
#line 1276 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1279 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1281 "mdb.name_mangle.c"
  }
#line 1283 "mdb.name_mangle.c"
}

#line 53 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0(
#line 53 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 53 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2,
#line 53 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__3_3)
#line 53 "name_mangle.m"
{
#line 53 "name_mangle.m"
  {
#line 53 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 53 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastX_17 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;
#line 53 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastY_18 = (MR_Integer) mdb__name_mangle__HeadVar__3_3;

#line 53 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_17 == mdb__name_mangle__CastY_18);
#line 53 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 1310 "mdb.name_mangle.c"
      *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 0;
#line 53 "name_mangle.m"
    else
#line 53 "name_mangle.m"
    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 53 "name_mangle.m"
      {
#line 53 "name_mangle.m"
        MR_String mdb__name_mangle__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
#line 53 "name_mangle.m"
        MR_Word mdb__name_mangle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));

#line 53 "name_mangle.m"
        if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 53 "name_mangle.m"
          {
#line 53 "name_mangle.m"
            MR_Word mdb__name_mangle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 0)));
#line 53 "name_mangle.m"
            MR_String mdb__name_mangle__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 1)));
#line 53 "name_mangle.m"
            MR_Word mdb__name_mangle__V_8_8;

#line 53 "name_mangle.m"
            {
#line 53 "name_mangle.m"
              mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__V_8_8, mdb__name_mangle__V_23_23, mdb__name_mangle__V_6_6);
            }
#line 1339 "mdb.name_mangle.c"
            mdb__name_mangle__succeeded = (mdb__name_mangle__V_8_8 == (MR_Integer) 0);
#line 53 "name_mangle.m"
            mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
#line 53 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 53 "name_mangle.m"
              *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__V_8_8;
#line 53 "name_mangle.m"
            else
#line 53 "name_mangle.m"
              {
#line 53 "name_mangle.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__V_22_22, mdb__name_mangle__V_7_7);
              }
#line 53 "name_mangle.m"
          }
#line 53 "name_mangle.m"
        else
#line 1358 "mdb.name_mangle.c"
          *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "name_mangle.m"
      }
#line 53 "name_mangle.m"
    else
#line 53 "name_mangle.m"
      {
#line 53 "name_mangle.m"
        MR_String mdb__name_mangle__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));

#line 53 "name_mangle.m"
        if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1371 "mdb.name_mangle.c"
          *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 2;
#line 53 "name_mangle.m"
        else
#line 53 "name_mangle.m"
          {
#line 53 "name_mangle.m"
            MR_String mdb__name_mangle__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 0)));

#line 53 "name_mangle.m"
            {
#line 53 "name_mangle.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__V_24_24, mdb__name_mangle__V_16_16);
            }
#line 53 "name_mangle.m"
          }
#line 53 "name_mangle.m"
      }
#line 53 "name_mangle.m"
  }
#line 53 "name_mangle.m"
}

#line 53 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0(
#line 53 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 53 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2)
#line 53 "name_mangle.m"
{
#line 53 "name_mangle.m"
  {
#line 53 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 53 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastX_9 = (MR_Integer) mdb__name_mangle__HeadVar__1_1;
#line 53 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastY_10 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;

#line 53 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_9 == mdb__name_mangle__CastY_10);
#line 53 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 53 "name_mangle.m"
      mdb__name_mangle__succeeded = MR_TRUE;
#line 53 "name_mangle.m"
    else
#line 53 "name_mangle.m"
    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 53 "name_mangle.m"
      {
#line 53 "name_mangle.m"
        MR_Word mdb__name_mangle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 53 "name_mangle.m"
        MR_String mdb__name_mangle__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
#line 53 "name_mangle.m"
        MR_Word mdb__name_mangle__V_5_5;
#line 53 "name_mangle.m"
        MR_String mdb__name_mangle__V_6_6;

#line 53 "name_mangle.m"
        mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 53 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 53 "name_mangle.m"
          {
#line 53 "name_mangle.m"
            mdb__name_mangle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
#line 53 "name_mangle.m"
            mdb__name_mangle__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
#line 1443 "mdb.name_mangle.c"
            {
#line 1445 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_3_3, mdb__name_mangle__V_5_5);
            }
#line 53 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 1450 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_4_4, mdb__name_mangle__V_6_6) == 0);
#line 53 "name_mangle.m"
          }
#line 53 "name_mangle.m"
      }
#line 53 "name_mangle.m"
    else
#line 53 "name_mangle.m"
      {
#line 53 "name_mangle.m"
        MR_String mdb__name_mangle__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 53 "name_mangle.m"
        MR_String mdb__name_mangle__V_8_8;

#line 53 "name_mangle.m"
        mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 53 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 53 "name_mangle.m"
          {
#line 53 "name_mangle.m"
            mdb__name_mangle__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
#line 1473 "mdb.name_mangle.c"
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_7_7, mdb__name_mangle__V_8_8) == 0);
#line 53 "name_mangle.m"
          }
#line 53 "name_mangle.m"
      }
#line 53 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 53 "name_mangle.m"
  }
#line 53 "name_mangle.m"
}

#line 57 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0(
#line 57 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 57 "name_mangle.m"
  MR_String mdb__name_mangle__HeadVar__2_2,
#line 57 "name_mangle.m"
  MR_String mdb__name_mangle__HeadVar__3_3)
#line 57 "name_mangle.m"
{
#line 57 "name_mangle.m"
  {
#line 57 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 57 "name_mangle.m"
    MR_String mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
#line 57 "name_mangle.m"
    MR_String mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

#line 57 "name_mangle.m"
    {
#line 57 "name_mangle.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
#line 57 "name_mangle.m"
  }
#line 57 "name_mangle.m"
}

#line 57 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0(
#line 57 "name_mangle.m"
  MR_String mdb__name_mangle__HeadVar__1_1,
#line 57 "name_mangle.m"
  MR_String mdb__name_mangle__HeadVar__2_2)
#line 57 "name_mangle.m"
{
#line 57 "name_mangle.m"
  {
#line 57 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 57 "name_mangle.m"
    MR_String mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
#line 57 "name_mangle.m"
    MR_String mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

#line 57 "name_mangle.m"
    mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Cast_HeadVar1_3, mdb__name_mangle__Cast_HeadVar2_4) == 0);
#line 57 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 57 "name_mangle.m"
  }
#line 57 "name_mangle.m"
}

#line 51 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0(
#line 51 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 51 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2,
#line 51 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__3_3)
#line 51 "name_mangle.m"
{
#line 51 "name_mangle.m"
  {
#line 51 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 51 "name_mangle.m"
    MR_Word mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
#line 51 "name_mangle.m"
    MR_Word mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

#line 51 "name_mangle.m"
    {
#line 51 "name_mangle.m"
      mdb__name_mangle____Compare____sym_name_0_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
#line 51 "name_mangle.m"
  }
#line 51 "name_mangle.m"
}

#line 51 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0(
#line 51 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 51 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2)
#line 51 "name_mangle.m"
{
#line 51 "name_mangle.m"
  {
#line 51 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 51 "name_mangle.m"
    MR_Word mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
#line 51 "name_mangle.m"
    MR_Word mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

#line 51 "name_mangle.m"
    {
#line 51 "name_mangle.m"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__Cast_HeadVar1_3, mdb__name_mangle__Cast_HeadVar2_4);
    }
#line 51 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 51 "name_mangle.m"
  }
#line 51 "name_mangle.m"
}

#line 64 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0(
#line 64 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 64 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2,
#line 64 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__3_3)
#line 64 "name_mangle.m"
{
#line 64 "name_mangle.m"
  {
#line 64 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 64 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
#line 64 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

#line 64 "name_mangle.m"
    {
#line 64 "name_mangle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
#line 64 "name_mangle.m"
  }
#line 64 "name_mangle.m"
}

#line 64 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0(
#line 64 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__1_1,
#line 64 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2)
#line 64 "name_mangle.m"
{
#line 64 "name_mangle.m"
  {
#line 64 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 64 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
#line 64 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

#line 64 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__Cast_HeadVar1_3 == mdb__name_mangle__Cast_HeadVar2_4);
#line 64 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 64 "name_mangle.m"
  }
#line 64 "name_mangle.m"
}

#line 38 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0(
#line 38 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 38 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2,
#line 38 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__3_3)
#line 38 "name_mangle.m"
{
#line 38 "name_mangle.m"
  {
#line 38 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 38 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastX_18 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;
#line 38 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastY_19 = (MR_Integer) mdb__name_mangle__HeadVar__3_3;

#line 38 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_18 == mdb__name_mangle__CastY_19);
#line 38 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 1684 "mdb.name_mangle.c"
      *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "name_mangle.m"
    else
#line 38 "name_mangle.m"
      {
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "name_mangle.m"
        MR_String mdb__name_mangle__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "name_mangle.m"
        MR_String mdb__name_mangle__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 4)));
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_14_14;
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_25_25 = (MR_Integer) mdb__name_mangle__V_4_4;
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_26_26 = (MR_Integer) mdb__name_mangle__V_9_9;

#line 38 "name_mangle.m"
        {
#line 38 "name_mangle.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__name_mangle__V_14_14, mdb__name_mangle__V_25_25, mdb__name_mangle__V_26_26);
        }
#line 1722 "mdb.name_mangle.c"
        mdb__name_mangle__succeeded = (mdb__name_mangle__V_14_14 == (MR_Integer) 0);
#line 38 "name_mangle.m"
        mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
#line 38 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
          *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__V_14_14;
#line 38 "name_mangle.m"
        else
#line 38 "name_mangle.m"
          {
#line 38 "name_mangle.m"
            MR_Word mdb__name_mangle__V_15_15;

#line 38 "name_mangle.m"
            {
#line 38 "name_mangle.m"
              mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__V_15_15, mdb__name_mangle__V_5_5, mdb__name_mangle__V_10_10);
            }
#line 1742 "mdb.name_mangle.c"
            mdb__name_mangle__succeeded = (mdb__name_mangle__V_15_15 == (MR_Integer) 0);
#line 38 "name_mangle.m"
            mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
#line 38 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
              *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__V_15_15;
#line 38 "name_mangle.m"
            else
#line 38 "name_mangle.m"
              {
#line 38 "name_mangle.m"
                MR_Word mdb__name_mangle__V_16_16;

#line 38 "name_mangle.m"
                {
#line 38 "name_mangle.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__name_mangle__V_16_16, mdb__name_mangle__V_6_6, mdb__name_mangle__V_11_11);
                }
#line 1762 "mdb.name_mangle.c"
                mdb__name_mangle__succeeded = (mdb__name_mangle__V_16_16 == (MR_Integer) 0);
#line 38 "name_mangle.m"
                mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
#line 38 "name_mangle.m"
                if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
                  *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__V_16_16;
#line 38 "name_mangle.m"
                else
#line 38 "name_mangle.m"
                  {
#line 38 "name_mangle.m"
                    MR_Word mdb__name_mangle__V_17_17;

#line 38 "name_mangle.m"
                    {
#line 38 "name_mangle.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__name_mangle__V_17_17, mdb__name_mangle__V_7_7, mdb__name_mangle__V_12_12);
                    }
#line 1782 "mdb.name_mangle.c"
                    mdb__name_mangle__succeeded = (mdb__name_mangle__V_17_17 == (MR_Integer) 0);
#line 38 "name_mangle.m"
                    mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
#line 38 "name_mangle.m"
                    if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
                      *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__V_17_17;
#line 38 "name_mangle.m"
                    else
#line 38 "name_mangle.m"
                      {
#line 38 "name_mangle.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__V_8_8, mdb__name_mangle__V_13_13);
                      }
#line 38 "name_mangle.m"
                  }
#line 38 "name_mangle.m"
              }
#line 38 "name_mangle.m"
          }
#line 38 "name_mangle.m"
      }
#line 38 "name_mangle.m"
  }
#line 38 "name_mangle.m"
}

#line 38 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0(
#line 38 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 38 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2)
#line 38 "name_mangle.m"
{
#line 38 "name_mangle.m"
  {
#line 38 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 38 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastX_13 = (MR_Integer) mdb__name_mangle__HeadVar__1_1;
#line 38 "name_mangle.m"
    MR_Integer mdb__name_mangle__CastY_14 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;

#line 38 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_13 == mdb__name_mangle__CastY_14);
#line 38 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
      mdb__name_mangle__succeeded = MR_TRUE;
#line 38 "name_mangle.m"
    else
#line 38 "name_mangle.m"
      {
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "name_mangle.m"
        MR_String mdb__name_mangle__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 4)));
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "name_mangle.m"
        MR_Word mdb__name_mangle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "name_mangle.m"
        MR_String mdb__name_mangle__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "name_mangle.m"
        MR_Integer mdb__name_mangle__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 4)));

#line 1859 "mdb.name_mangle.c"
        mdb__name_mangle__succeeded = (mdb__name_mangle__V_3_3 == mdb__name_mangle__V_8_8);
#line 38 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
          {
#line 1865 "mdb.name_mangle.c"
            {
#line 1867 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_4_4, mdb__name_mangle__V_9_9);
            }
#line 38 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
              {
#line 1874 "mdb.name_mangle.c"
                mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_5_5, mdb__name_mangle__V_10_10) == 0);
#line 38 "name_mangle.m"
                if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
                  {
#line 1880 "mdb.name_mangle.c"
                    mdb__name_mangle__succeeded = (mdb__name_mangle__V_6_6 == mdb__name_mangle__V_11_11);
#line 38 "name_mangle.m"
                    if (mdb__name_mangle__succeeded)
#line 1884 "mdb.name_mangle.c"
                      mdb__name_mangle__succeeded = (mdb__name_mangle__V_7_7 == mdb__name_mangle__V_12_12);
#line 38 "name_mangle.m"
                  }
#line 38 "name_mangle.m"
              }
#line 38 "name_mangle.m"
          }
#line 38 "name_mangle.m"
      }
#line 38 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 38 "name_mangle.m"
  }
#line 38 "name_mangle.m"
}

#line 47 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0(
#line 47 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 47 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2,
#line 47 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__3_3)
#line 47 "name_mangle.m"
{
#line 47 "name_mangle.m"
  {
#line 47 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 47 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;
#line 47 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = (MR_Integer) mdb__name_mangle__HeadVar__3_3;

#line 47 "name_mangle.m"
    {
#line 47 "name_mangle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
#line 47 "name_mangle.m"
  }
#line 47 "name_mangle.m"
}

#line 47 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0(
#line 47 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_1,
#line 47 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__2_2)
#line 47 "name_mangle.m"
{
#line 1940 "mdb.name_mangle.c"
  {
#line 1942 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded = (mdb__name_mangle__HeadVar__2_1 == mdb__name_mangle__HeadVar__2_2);

#line 1945 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1947 "mdb.name_mangle.c"
  }
#line 47 "name_mangle.m"
}

#line 61 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____arity_0_0(
#line 61 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 61 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2,
#line 61 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__3_3)
#line 61 "name_mangle.m"
{
#line 61 "name_mangle.m"
  {
#line 61 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 61 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
#line 61 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

#line 61 "name_mangle.m"
    {
#line 61 "name_mangle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
#line 61 "name_mangle.m"
  }
#line 61 "name_mangle.m"
}

#line 61 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0(
#line 61 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__1_1,
#line 61 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2)
#line 61 "name_mangle.m"
{
#line 61 "name_mangle.m"
  {
#line 61 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 61 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
#line 61 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

#line 61 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__Cast_HeadVar1_3 == mdb__name_mangle__Cast_HeadVar2_4);
#line 61 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 61 "name_mangle.m"
  }
#line 61 "name_mangle.m"
}

#line 292 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void)
#line 292 "name_mangle.m"
{
#line 294 "name_mangle.m"
  {
#line 294 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 297 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__high_level_code_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 297 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2034 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 297 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 294 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 294 "name_mangle.m"
  }
#line 292 "name_mangle.m"
}

#line 279 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__system_is_osx_0_p_0(void)
#line 279 "name_mangle.m"
{
#line 281 "name_mangle.m"
  {
#line 281 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 284 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__system_is_osx_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 284 "name_mangle.m"

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2075 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 284 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 281 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 281 "name_mangle.m"
  }
#line 279 "name_mangle.m"
}

#line 264 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void)
#line 264 "name_mangle.m"
{
#line 266 "name_mangle.m"
  {
#line 266 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 269 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__use_asm_labels_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 269 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2116 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 269 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 266 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 266 "name_mangle.m"
  }
#line 264 "name_mangle.m"
}

#line 248 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
#line 248 "name_mangle.m"
  MR_String mdb__name_mangle__String_3,
#line 248 "name_mangle.m"
  MR_String * mdb__name_mangle__Name_4)
#line 248 "name_mangle.m"
{
#line 251 "name_mangle.m"
  {
#line 251 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 251 "name_mangle.m"
    MR_Char mdb__name_mangle__Char_5;
#line 251 "name_mangle.m"
    MR_String mdb__name_mangle__Rest_6;

#line 251 "name_mangle.m"
    {
#line 251 "name_mangle.m"
      mdb__name_mangle__succeeded = mercury__string__first_char_3_p_3(mdb__name_mangle__String_3, &mdb__name_mangle__Char_5, &mdb__name_mangle__Rest_6);
    }
#line 251 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 252 "name_mangle.m"
      {
#line 252 "name_mangle.m"
        MR_Integer mdb__name_mangle__Code_7;
#line 252 "name_mangle.m"
        MR_String mdb__name_mangle__CodeString_8;
#line 252 "name_mangle.m"
        MR_String mdb__name_mangle__ThisCharString_9;
#line 252 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_10;

#line 252 "name_mangle.m"
        {
#line 252 "name_mangle.m"
          mercury__char__to_int_2_p_0(mdb__name_mangle__Char_5, &mdb__name_mangle__Code_7);
        }
#line 253 "name_mangle.m"
        {
#line 253 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Code_7, &mdb__name_mangle__CodeString_8);
        }
#line 254 "name_mangle.m"
        {
#line 254 "name_mangle.m"
          mercury__string__append_3_p_2((MR_String) "_", mdb__name_mangle__CodeString_8, &mdb__name_mangle__ThisCharString_9);
        }
#line 255 "name_mangle.m"
        {
#line 255 "name_mangle.m"
          mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Rest_6, &mdb__name_mangle__Name0_10);
        }
#line 256 "name_mangle.m"
        {
#line 256 "name_mangle.m"
          mercury__string__append_3_p_2(mdb__name_mangle__ThisCharString_9, mdb__name_mangle__Name0_10, mdb__name_mangle__Name_4);
        }
#line 252 "name_mangle.m"
      }
#line 251 "name_mangle.m"
    else
#line 259 "name_mangle.m"
      *mdb__name_mangle__Name_4 = mdb__name_mangle__String_3;
#line 251 "name_mangle.m"
  }
#line 248 "name_mangle.m"
}

#line 184 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
#line 184 "name_mangle.m"
  MR_String mdb__name_mangle__Name_3,
#line 184 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_4)
#line 184 "name_mangle.m"
{
#line 187 "name_mangle.m"
  {
#line 187 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 187 "name_mangle.m"
    {
#line 187 "name_mangle.m"
      mdb__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(mdb__name_mangle__Name_3);
    }
#line 187 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 192 "name_mangle.m"
      {
#line 192 "name_mangle.m"
        MR_String mdb__name_mangle__Suffix_5;

#line 192 "name_mangle.m"
        {
#line 192 "name_mangle.m"
          mdb__name_mangle__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &mdb__name_mangle__Suffix_5, mdb__name_mangle__Name_3);
        }
#line 192 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 193 "name_mangle.m"
          {
#line 193 "name_mangle.m"
            {
#line 193 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "f__", mdb__name_mangle__Suffix_5, mdb__name_mangle__MangledName_4);
            }
#line 193 "name_mangle.m"
          }
#line 192 "name_mangle.m"
        else
#line 195 "name_mangle.m"
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name_3;
#line 192 "name_mangle.m"
      }
#line 187 "name_mangle.m"
    else
#line 204 "name_mangle.m"
      {
#line 204 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_10;
#line 225 "name_mangle.m"
        MR_Integer mdb__name_mangle__slot_0;
#line 225 "name_mangle.m"
        MR_String mdb__name_mangle__str_1;

#line 225 "name_mangle.m"
        /* hashed string simple lookup switch */
#line 225 "name_mangle.m"
        /* compute the hash value of the input string */
#line 225 "name_mangle.m"
        mdb__name_mangle__slot_0 = ((MR_hash_string5(mdb__name_mangle__Name_3)) & (MR_Integer) 63);
#line 225 "name_mangle.m"
        /* no collisions; no hash chain loop */
#line 225 "name_mangle.m"
        /* lookup the string for this hash slot */
#line 225 "name_mangle.m"
        mdb__name_mangle__str_1 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
#line 225 "name_mangle.m"
        /* did we find a match? */
#line 225 "name_mangle.m"
        if ((((mdb__name_mangle__str_1 != NULL)) && ((strcmp(mdb__name_mangle__str_1, mdb__name_mangle__Name_3) == 0))))
#line 225 "name_mangle.m"
          {
#line 225 "name_mangle.m"
            /* we found a match; look up the results */
#line 225 "name_mangle.m"
            mdb__name_mangle__Name0_10 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
#line 225 "name_mangle.m"
            mdb__name_mangle__succeeded = MR_TRUE;
#line 225 "name_mangle.m"
            /* jump out of search loop */
#line 225 "name_mangle.m"
            goto label_0;
#line 225 "name_mangle.m"
          }
#line 225 "name_mangle.m"
        mdb__name_mangle__succeeded = MR_FALSE;
#line 225 "name_mangle.m"
      label_0:;
#line 204 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 205 "name_mangle.m"
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name0_10;
#line 204 "name_mangle.m"
        else
#line 207 "name_mangle.m"
          {
#line 207 "name_mangle.m"
            MR_String mdb__name_mangle__Name0_12;

#line 207 "name_mangle.m"
            {
#line 207 "name_mangle.m"
              mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Name_3, &mdb__name_mangle__Name0_12);
            }
#line 208 "name_mangle.m"
            {
#line 208 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "f", mdb__name_mangle__Name0_12, mdb__name_mangle__MangledName_4);
            }
#line 207 "name_mangle.m"
          }
#line 204 "name_mangle.m"
      }
#line 187 "name_mangle.m"
  }
#line 184 "name_mangle.m"
}

#line 170 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
#line 170 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 170 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_2)
#line 170 "name_mangle.m"
{
#line 172 "name_mangle.m"
  {
#line 172 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 172 "name_mangle.m"
    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 174 "name_mangle.m"
      {
#line 174 "name_mangle.m"
        MR_Word mdb__name_mangle__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "name_mangle.m"
        MR_String mdb__name_mangle__PlainName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "name_mangle.m"
        MR_String mdb__name_mangle__MangledModuleName_8;
#line 174 "name_mangle.m"
        MR_String mdb__name_mangle__MangledPlainName_9;
#line 174 "name_mangle.m"
        MR_Word mdb__name_mangle__V_13_13;
#line 174 "name_mangle.m"
        MR_Word mdb__name_mangle__V_14_14;
#line 174 "name_mangle.m"
        MR_Word mdb__name_mangle__V_16_16;

#line 175 "name_mangle.m"
        {
#line 175 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__ModuleName_5, &mdb__name_mangle__MangledModuleName_8);
        }
#line 176 "name_mangle.m"
        {
#line 176 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__PlainName_6, &mdb__name_mangle__MangledPlainName_9);
        }
#line 214 "name_mangle.m"
        {
#line 214 "name_mangle.m"
          mdb__name_mangle__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_16_16, 0) = ((MR_Box) (mdb__name_mangle__MangledPlainName_9));
#line 214 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "name_mangle.m"
        }
#line 214 "name_mangle.m"
        {
#line 214 "name_mangle.m"
          mdb__name_mangle__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_14_14, 0) = ((MR_Box) ((MR_String) "__"));
#line 214 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_14_14, 1) = ((MR_Box) (mdb__name_mangle__V_16_16));
#line 214 "name_mangle.m"
        }
#line 214 "name_mangle.m"
        {
#line 214 "name_mangle.m"
          mdb__name_mangle__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_13_13, 0) = ((MR_Box) (mdb__name_mangle__MangledModuleName_8));
#line 214 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_13_13, 1) = ((MR_Box) (mdb__name_mangle__V_14_14));
#line 214 "name_mangle.m"
        }
#line 214 "name_mangle.m"
        {
#line 214 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_13_13, mdb__name_mangle__MangledName_2);
        }
#line 174 "name_mangle.m"
      }
#line 172 "name_mangle.m"
    else
#line 172 "name_mangle.m"
      {
#line 172 "name_mangle.m"
        MR_String mdb__name_mangle__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));

#line 173 "name_mangle.m"
        {
#line 173 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__Name_3, mdb__name_mangle__MangledName_2);
        }
#line 172 "name_mangle.m"
      }
#line 172 "name_mangle.m"
  }
#line 170 "name_mangle.m"
}

#line 36 "name_mangle.m"
MR_String MR_CALL 
mdb__name_mangle__proc_name_mangle_1_f_0(
#line 36 "name_mangle.m"
  MR_Word mdb__name_mangle__MercuryProc_3)
#line 36 "name_mangle.m"
{
#line 77 "name_mangle.m"
  {
#line 77 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 77 "name_mangle.m"
    MR_String mdb__name_mangle__HeadVar__2_2;

#line 297 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 297 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2455 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 297 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 77 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 140 "name_mangle.m"
      {
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 0)));
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__Module_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 1)));
#line 140 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 2)));
#line 140 "name_mangle.m"
        MR_Integer mdb__name_mangle__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 3)));
#line 140 "name_mangle.m"
        MR_Integer mdb__name_mangle__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 4)));
#line 140 "name_mangle.m"
        MR_String mdb__name_mangle__ModuleName_12;
#line 140 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName0_13;
#line 140 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName1_14;
#line 140 "name_mangle.m"
        MR_String mdb__name_mangle__PredOrFuncString_15;
#line 140 "name_mangle.m"
        MR_String mdb__name_mangle__ArityString_16;
#line 140 "name_mangle.m"
        MR_String mdb__name_mangle__ModeNumString_17;
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__V_18_18;
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__V_19_19;
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__V_21_21;
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__V_22_22;
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__V_24_24;
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__V_25_25;
#line 140 "name_mangle.m"
        MR_Word mdb__name_mangle__V_27_27;

#line 142 "name_mangle.m"
        {
#line 142 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_8, &mdb__name_mangle__ModuleName_12);
        }
#line 144 "name_mangle.m"
        mdb__name_mangle__succeeded = (mdb__name_mangle__PredOrFunc_7 == (MR_Integer) 0);
#line 144 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 144 "name_mangle.m"
          {
#line 145 "name_mangle.m"
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Name0_9, (MR_String) "main") == 0);
#line 144 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 146 "name_mangle.m"
              mdb__name_mangle__succeeded = (mdb__name_mangle__Arity_10 == (MR_Integer) 2);
#line 144 "name_mangle.m"
          }
#line 2524 "mdb.name_mangle.c"
        if (mdb__name_mangle__succeeded)
#line 2526 "mdb.name_mangle.c"
          {
#line 150 "name_mangle.m"
            mdb__name_mangle__LabelName0_13 = mdb__name_mangle__Name0_9;
#line 157 "name_mangle.m"
            mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 2532 "mdb.name_mangle.c"
          }
#line 2534 "mdb.name_mangle.c"
        else
#line 2536 "mdb.name_mangle.c"
          {
#line 2538 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_32_32;
#line 2540 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_33_33;
#line 2542 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_35_35;

#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mdb__name_mangle__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_35_35, 0) = ((MR_Box) (mdb__name_mangle__Name0_9));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "name_mangle.m"
            }
#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mdb__name_mangle__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_33_33, 0) = ((MR_Box) ((MR_String) "__"));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_33_33, 1) = ((MR_Box) (mdb__name_mangle__V_35_35));
#line 214 "name_mangle.m"
            }
#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mdb__name_mangle__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_32_32, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_12));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_32_32, 1) = ((MR_Box) (mdb__name_mangle__V_33_33));
#line 214 "name_mangle.m"
            }
#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mercury__string__append_list_2_p_0(mdb__name_mangle__V_32_32, &mdb__name_mangle__LabelName0_13);
            }
#line 158 "name_mangle.m"
#line 158 "name_mangle.m"
            switch (mdb__name_mangle__PredOrFunc_7) {
#line 158 "name_mangle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 158 "name_mangle.m"
              case (MR_Integer) 1:
#line 160 "name_mangle.m"
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "f";
#line 158 "name_mangle.m"
                break;
#line 158 "name_mangle.m"
              case (MR_Integer) 0:
#line 157 "name_mangle.m"
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 158 "name_mangle.m"
                break;
#line 158 "name_mangle.m"
            }
#line 2599 "mdb.name_mangle.c"
          }
#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__LabelName0_13, &mdb__name_mangle__LabelName1_14);
        }
#line 162 "name_mangle.m"
        {
#line 162 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Arity_10, &mdb__name_mangle__ArityString_16);
        }
#line 163 "name_mangle.m"
        {
#line 163 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ModeNum_11, &mdb__name_mangle__ModeNumString_17);
        }
#line 165 "name_mangle.m"
        {
#line 165 "name_mangle.m"
          mdb__name_mangle__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_27_27, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_17));
#line 165 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "name_mangle.m"
        }
#line 165 "name_mangle.m"
        {
#line 165 "name_mangle.m"
          mdb__name_mangle__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_25_25, 0) = ((MR_Box) ((MR_String) "_"));
#line 165 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_25_25, 1) = ((MR_Box) (mdb__name_mangle__V_27_27));
#line 165 "name_mangle.m"
        }
#line 165 "name_mangle.m"
        {
#line 165 "name_mangle.m"
          mdb__name_mangle__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_24_24, 0) = ((MR_Box) (mdb__name_mangle__PredOrFuncString_15));
#line 165 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_24_24, 1) = ((MR_Box) (mdb__name_mangle__V_25_25));
#line 165 "name_mangle.m"
        }
#line 164 "name_mangle.m"
        {
#line 164 "name_mangle.m"
          mdb__name_mangle__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_22_22, 0) = ((MR_Box) ((MR_String) "_"));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_22_22, 1) = ((MR_Box) (mdb__name_mangle__V_24_24));
#line 164 "name_mangle.m"
        }
#line 164 "name_mangle.m"
        {
#line 164 "name_mangle.m"
          mdb__name_mangle__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_21_21, 0) = ((MR_Box) (mdb__name_mangle__ArityString_16));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_21_21, 1) = ((MR_Box) (mdb__name_mangle__V_22_22));
#line 164 "name_mangle.m"
        }
#line 164 "name_mangle.m"
        {
#line 164 "name_mangle.m"
          mdb__name_mangle__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_19_19, 0) = ((MR_Box) ((MR_String) "_"));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_19_19, 1) = ((MR_Box) (mdb__name_mangle__V_21_21));
#line 164 "name_mangle.m"
        }
#line 164 "name_mangle.m"
        {
#line 164 "name_mangle.m"
          mdb__name_mangle__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_18_18, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_14));
#line 164 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_18_18, 1) = ((MR_Box) (mdb__name_mangle__V_19_19));
#line 164 "name_mangle.m"
        }
#line 164 "name_mangle.m"
        {
#line 164 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_18_18, &mdb__name_mangle__HeadVar__2_2);
        }
#line 140 "name_mangle.m"
      }
#line 77 "name_mangle.m"
    else
#line 92 "name_mangle.m"
      {
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 0)));
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__Module_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 1)));
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 2)));
#line 92 "name_mangle.m"
        MR_Integer mdb__name_mangle__Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 3)));
#line 92 "name_mangle.m"
        MR_Integer mdb__name_mangle__ModeNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 4)));
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__ModuleName_44;
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName0_45;
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName1_46;
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__ArityString_47;
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__ModeNumString_48;
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName2_49;
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName3_50;
#line 92 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName4_51;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_54_54;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_55_55;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_57_57;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_58_58;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_60_60;

#line 94 "name_mangle.m"
        {
#line 94 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_40, &mdb__name_mangle__ModuleName_44);
        }
#line 97 "name_mangle.m"
        {
#line 97 "name_mangle.m"
          MR_String mdb__name_mangle__V_53_53;

#line 97 "name_mangle.m"
          mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__Module_40)) == (MR_mktag((MR_Integer) 1)));
#line 97 "name_mangle.m"
          if (mdb__name_mangle__succeeded)
#line 97 "name_mangle.m"
            {
#line 97 "name_mangle.m"
              mdb__name_mangle__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__Module_40, (MR_Integer) 0)));
#line 97 "name_mangle.m"
              mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_53_53, (MR_String) "builtin") == 0);
#line 97 "name_mangle.m"
            }
#line 97 "name_mangle.m"
        }
#line 98 "name_mangle.m"
        if (!(mdb__name_mangle__succeeded))
#line 99 "name_mangle.m"
          {
#line 99 "name_mangle.m"
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Name0_41, (MR_String) "main") == 0);
#line 99 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 100 "name_mangle.m"
              mdb__name_mangle__succeeded = (mdb__name_mangle__Arity_42 == (MR_Integer) 2);
#line 99 "name_mangle.m"
          }
#line 95 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 105 "name_mangle.m"
          mdb__name_mangle__LabelName0_45 = mdb__name_mangle__Name0_41;
#line 95 "name_mangle.m"
        else
#line 213 "name_mangle.m"
          {
#line 213 "name_mangle.m"
            MR_Word mdb__name_mangle__V_67_67;
#line 213 "name_mangle.m"
            MR_Word mdb__name_mangle__V_68_68;
#line 213 "name_mangle.m"
            MR_Word mdb__name_mangle__V_70_70;

#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mdb__name_mangle__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_70_70, 0) = ((MR_Box) (mdb__name_mangle__Name0_41));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "name_mangle.m"
            }
#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mdb__name_mangle__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_68_68, 0) = ((MR_Box) ((MR_String) "__"));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_68_68, 1) = ((MR_Box) (mdb__name_mangle__V_70_70));
#line 214 "name_mangle.m"
            }
#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mdb__name_mangle__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_67_67, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_44));
#line 214 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_67_67, 1) = ((MR_Box) (mdb__name_mangle__V_68_68));
#line 214 "name_mangle.m"
            }
#line 214 "name_mangle.m"
            {
#line 214 "name_mangle.m"
              mercury__string__append_list_2_p_0(mdb__name_mangle__V_67_67, &mdb__name_mangle__LabelName0_45);
            }
#line 213 "name_mangle.m"
          }
#line 109 "name_mangle.m"
        {
#line 109 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__LabelName0_45, &mdb__name_mangle__LabelName1_46);
        }
#line 110 "name_mangle.m"
        {
#line 110 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Arity_42, &mdb__name_mangle__ArityString_47);
        }
#line 111 "name_mangle.m"
        {
#line 111 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ModeNum_43, &mdb__name_mangle__ModeNumString_48);
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_60_60, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_48));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_58_58, 0) = ((MR_Box) ((MR_String) "_"));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_58_58, 1) = ((MR_Box) (mdb__name_mangle__V_60_60));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_57_57, 0) = ((MR_Box) (mdb__name_mangle__ArityString_47));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_57_57, 1) = ((MR_Box) (mdb__name_mangle__V_58_58));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_55_55, 0) = ((MR_Box) ((MR_String) "_"));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_55_55, 1) = ((MR_Box) (mdb__name_mangle__V_57_57));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_54_54, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_46));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_54_54, 1) = ((MR_Box) (mdb__name_mangle__V_55_55));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_54_54, &mdb__name_mangle__LabelName2_49);
        }
#line 117 "name_mangle.m"
#line 117 "name_mangle.m"
        switch (mdb__name_mangle__PredOrFunc_39) {
#line 117 "name_mangle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 117 "name_mangle.m"
          case (MR_Integer) 1:
#line 115 "name_mangle.m"
            {
#line 116 "name_mangle.m"
              {
#line 116 "name_mangle.m"
                mercury__string__append_3_p_2((MR_String) "fn__", mdb__name_mangle__LabelName2_49, &mdb__name_mangle__LabelName3_50);
              }
#line 115 "name_mangle.m"
            }
#line 117 "name_mangle.m"
            break;
#line 117 "name_mangle.m"
          case (MR_Integer) 0:
#line 119 "name_mangle.m"
            mdb__name_mangle__LabelName3_50 = mdb__name_mangle__LabelName2_49;
#line 117 "name_mangle.m"
            break;
#line 117 "name_mangle.m"
        }
#line 121 "name_mangle.m"
        {
#line 121 "name_mangle.m"
          mercury__string__append_3_p_2((MR_String) "mercury__", mdb__name_mangle__LabelName3_50, &mdb__name_mangle__LabelName4_51);
        }
#line 269 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 269 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2938 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 269 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 122 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 127 "name_mangle.m"
          {
#line 127 "name_mangle.m"
            MR_String mdb__name_mangle__EntryPrefix_52;

#line 284 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 284 "name_mangle.m"

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2969 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 284 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 127 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 127 "name_mangle.m"
              mdb__name_mangle__EntryPrefix_52 = (MR_String) "entry_";
#line 127 "name_mangle.m"
            else
#line 127 "name_mangle.m"
              mdb__name_mangle__EntryPrefix_52 = (MR_String) "_entry_";
#line 128 "name_mangle.m"
            {
#line 128 "name_mangle.m"
              mercury__string__append_3_p_2(mdb__name_mangle__EntryPrefix_52, mdb__name_mangle__LabelName4_51, &mdb__name_mangle__HeadVar__2_2);
            }
#line 127 "name_mangle.m"
          }
#line 122 "name_mangle.m"
        else
#line 130 "name_mangle.m"
          mdb__name_mangle__HeadVar__2_2 = mdb__name_mangle__LabelName4_51;
#line 92 "name_mangle.m"
      }
#line 77 "name_mangle.m"
    return mdb__name_mangle__HeadVar__2_2;
#line 77 "name_mangle.m"
  }
#line 36 "name_mangle.m"
}

void mercury__mdb__name_mangle__init(void)
{
}

void mercury__mdb__name_mangle__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__name_mangle__mdb__name_mangle__type_ctor_info_arity_0);
	MR_register_type_ctor_info(&mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0);
	MR_register_type_ctor_info(&mdb__name_mangle__mdb__name_mangle__type_ctor_info_mercury_proc_0);
	MR_register_type_ctor_info(&mdb__name_mangle__mdb__name_mangle__type_ctor_info_mode_num_0);
	MR_register_type_ctor_info(&mdb__name_mangle__mdb__name_mangle__type_ctor_info_module_name_0);
	MR_register_type_ctor_info(&mdb__name_mangle__mdb__name_mangle__type_ctor_info_pred_name_0);
	MR_register_type_ctor_info(&mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0);
}

void mercury__mdb__name_mangle__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.name_mangle. */
