/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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




#line 68 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0;

#line 71 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1;

#line 74 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2];

#line 77 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2];

#line 80 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2];

#line 83 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5];

#line 86 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0;

#line 89 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1];

#line 92 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1];

#line 95 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1];

#line 98 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1];

#line 101 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2];

#line 104 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0;

#line 107 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1];

#line 110 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1;

#line 113 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1];

#line 116 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1];

#line 119 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2];

#line 122 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2];

#line 125 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2];

#line 128 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 131 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 133 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 136 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 139 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 141 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 143 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 146 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 149 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 151 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 154 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 157 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 159 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 161 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 164 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 167 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 169 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 172 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 175 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 177 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 179 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 182 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 185 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 187 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 190 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 193 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 195 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 197 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 200 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 203 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 205 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 208 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 211 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 213 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 215 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 218 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 221 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 223 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 226 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 229 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 231 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 233 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 236 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 239 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 241 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 244 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 247 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 249 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 251 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 266 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void);

#line 251 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void);

#line 237 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
#line 237 "name_mangle.m"
  MR_String mdb__name_mangle__String_3,
#line 237 "name_mangle.m"
  MR_String * mdb__name_mangle__Name_4);

#line 172 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
#line 172 "name_mangle.m"
  MR_String mdb__name_mangle__Name_3,
#line 172 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_4);

#line 158 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
#line 158 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 158 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_2);



#line 213 "name_mangle.m"
/* sealed */ struct mdb__name_mangle__vector_common_type_1_0_s {
#line 213 "name_mangle.m"
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
#line 213 "name_mangle.m"
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
#line 213 "name_mangle.m"
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


#include "mdb.name_mangle.mh"
#include "mdb.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 641 "mdb.name_mangle.c"
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

#line 658 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 0
};

#line 664 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1 = {
  (MR_String) "function",
  (MR_Integer) 1
};

#line 670 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1
};

#line 676 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0
};

#line 682 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 688 "mdb.name_mangle.c"
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

#line 705 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 714 "mdb.name_mangle.c"
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

#line 729 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 734 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0
  }
};

#line 743 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 748 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1] = {
  (MR_Integer) 0
};

#line 753 "mdb.name_mangle.c"
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

#line 770 "mdb.name_mangle.c"
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

#line 787 "mdb.name_mangle.c"
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

#line 804 "mdb.name_mangle.c"
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

#line 821 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 827 "mdb.name_mangle.c"
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

#line 842 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 847 "mdb.name_mangle.c"
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

#line 862 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0
};

#line 867 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 872 "mdb.name_mangle.c"
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

#line 886 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0,
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 892 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 898 "mdb.name_mangle.c"
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

#line 915 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 918 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 920 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 922 "mdb.name_mangle.c"
{
#line 924 "mdb.name_mangle.c"
  {
#line 926 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 929 "mdb.name_mangle.c"
    {
#line 931 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____arity_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 934 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 936 "mdb.name_mangle.c"
  }
#line 938 "mdb.name_mangle.c"
}

#line 941 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 944 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 946 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 948 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 950 "mdb.name_mangle.c"
{
#line 952 "mdb.name_mangle.c"
  {
#line 954 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 957 "mdb.name_mangle.c"
    {
#line 959 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____arity_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 962 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 964 "mdb.name_mangle.c"
  }
#line 966 "mdb.name_mangle.c"
}

#line 969 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 972 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 974 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 976 "mdb.name_mangle.c"
{
#line 978 "mdb.name_mangle.c"
  {
#line 980 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 983 "mdb.name_mangle.c"
    {
#line 985 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____is_pred_or_func_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 988 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 990 "mdb.name_mangle.c"
  }
#line 992 "mdb.name_mangle.c"
}

#line 995 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 998 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1000 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1002 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1004 "mdb.name_mangle.c"
{
#line 1006 "mdb.name_mangle.c"
  {
#line 1008 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1011 "mdb.name_mangle.c"
    {
#line 1013 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____is_pred_or_func_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1016 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1018 "mdb.name_mangle.c"
  }
#line 1020 "mdb.name_mangle.c"
}

#line 1023 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 1026 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1028 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1030 "mdb.name_mangle.c"
{
#line 1032 "mdb.name_mangle.c"
  {
#line 1034 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1037 "mdb.name_mangle.c"
    {
#line 1039 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mercury_proc_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1042 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1044 "mdb.name_mangle.c"
  }
#line 1046 "mdb.name_mangle.c"
}

#line 1049 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 1052 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1054 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1056 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1058 "mdb.name_mangle.c"
{
#line 1060 "mdb.name_mangle.c"
  {
#line 1062 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1065 "mdb.name_mangle.c"
    {
#line 1067 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mercury_proc_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1070 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1072 "mdb.name_mangle.c"
  }
#line 1074 "mdb.name_mangle.c"
}

#line 1077 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 1080 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1082 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1084 "mdb.name_mangle.c"
{
#line 1086 "mdb.name_mangle.c"
  {
#line 1088 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1091 "mdb.name_mangle.c"
    {
#line 1093 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mode_num_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 1096 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1098 "mdb.name_mangle.c"
  }
#line 1100 "mdb.name_mangle.c"
}

#line 1103 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 1106 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1108 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1110 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1112 "mdb.name_mangle.c"
{
#line 1114 "mdb.name_mangle.c"
  {
#line 1116 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1119 "mdb.name_mangle.c"
    {
#line 1121 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mode_num_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 1124 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1126 "mdb.name_mangle.c"
  }
#line 1128 "mdb.name_mangle.c"
}

#line 1131 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 1134 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1136 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1138 "mdb.name_mangle.c"
{
#line 1140 "mdb.name_mangle.c"
  {
#line 1142 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1145 "mdb.name_mangle.c"
    {
#line 1147 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____module_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1150 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1152 "mdb.name_mangle.c"
  }
#line 1154 "mdb.name_mangle.c"
}

#line 1157 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 1160 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1162 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1164 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1166 "mdb.name_mangle.c"
{
#line 1168 "mdb.name_mangle.c"
  {
#line 1170 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1173 "mdb.name_mangle.c"
    {
#line 1175 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____module_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1178 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1180 "mdb.name_mangle.c"
  }
#line 1182 "mdb.name_mangle.c"
}

#line 1185 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 1188 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1190 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1192 "mdb.name_mangle.c"
{
#line 1194 "mdb.name_mangle.c"
  {
#line 1196 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1199 "mdb.name_mangle.c"
    {
#line 1201 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____pred_name_0_0(((MR_String) mdb__name_mangle__wrapper_arg_1), ((MR_String) mdb__name_mangle__wrapper_arg_2));
    }
#line 1204 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1206 "mdb.name_mangle.c"
  }
#line 1208 "mdb.name_mangle.c"
}

#line 1211 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 1214 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1216 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1218 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1220 "mdb.name_mangle.c"
{
#line 1222 "mdb.name_mangle.c"
  {
#line 1224 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1227 "mdb.name_mangle.c"
    {
#line 1229 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____pred_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_String) mdb__name_mangle__wrapper_arg_2), ((MR_String) mdb__name_mangle__wrapper_arg_3));
    }
#line 1232 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1234 "mdb.name_mangle.c"
  }
#line 1236 "mdb.name_mangle.c"
}

#line 1239 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 1242 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1244 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1246 "mdb.name_mangle.c"
{
#line 1248 "mdb.name_mangle.c"
  {
#line 1250 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1253 "mdb.name_mangle.c"
    {
#line 1255 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1258 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1260 "mdb.name_mangle.c"
  }
#line 1262 "mdb.name_mangle.c"
}

#line 1265 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 1268 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1270 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1272 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1274 "mdb.name_mangle.c"
{
#line 1276 "mdb.name_mangle.c"
  {
#line 1278 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1281 "mdb.name_mangle.c"
    {
#line 1283 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1286 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1288 "mdb.name_mangle.c"
  }
#line 1290 "mdb.name_mangle.c"
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
#line 1317 "mdb.name_mangle.c"
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
#line 1346 "mdb.name_mangle.c"
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
#line 53 "name_mangle.m"
                return;
              }
#line 53 "name_mangle.m"
          }
#line 53 "name_mangle.m"
        else
#line 1367 "mdb.name_mangle.c"
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
#line 1380 "mdb.name_mangle.c"
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
#line 53 "name_mangle.m"
              return;
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
#line 1454 "mdb.name_mangle.c"
            {
#line 1456 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_3_3, mdb__name_mangle__V_5_5);
            }
#line 53 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 1461 "mdb.name_mangle.c"
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
#line 1484 "mdb.name_mangle.c"
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
#line 57 "name_mangle.m"
      return;
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
#line 51 "name_mangle.m"
      return;
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
      return mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__Cast_HeadVar1_3, mdb__name_mangle__Cast_HeadVar2_4);
    }
#line 51 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 51 "name_mangle.m"
  }
#line 51 "name_mangle.m"
}

#line 63 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0(
#line 63 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 63 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2,
#line 63 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__3_3)
#line 63 "name_mangle.m"
{
#line 63 "name_mangle.m"
  {
#line 63 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 63 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
#line 63 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

#line 63 "name_mangle.m"
    {
#line 63 "name_mangle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
#line 63 "name_mangle.m"
      return;
    }
#line 63 "name_mangle.m"
  }
#line 63 "name_mangle.m"
}

#line 63 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0(
#line 63 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__1_1,
#line 63 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2)
#line 63 "name_mangle.m"
{
#line 63 "name_mangle.m"
  {
#line 63 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 63 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
#line 63 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

#line 63 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__Cast_HeadVar1_3 == mdb__name_mangle__Cast_HeadVar2_4);
#line 63 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 63 "name_mangle.m"
  }
#line 63 "name_mangle.m"
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
#line 1701 "mdb.name_mangle.c"
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
#line 1739 "mdb.name_mangle.c"
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
#line 1759 "mdb.name_mangle.c"
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
#line 1779 "mdb.name_mangle.c"
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
#line 1799 "mdb.name_mangle.c"
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
#line 38 "name_mangle.m"
                        return;
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

#line 1878 "mdb.name_mangle.c"
        mdb__name_mangle__succeeded = (mdb__name_mangle__V_3_3 == mdb__name_mangle__V_8_8);
#line 38 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
          {
#line 1884 "mdb.name_mangle.c"
            {
#line 1886 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_4_4, mdb__name_mangle__V_9_9);
            }
#line 38 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
              {
#line 1893 "mdb.name_mangle.c"
                mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_5_5, mdb__name_mangle__V_10_10) == 0);
#line 38 "name_mangle.m"
                if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
                  {
#line 1899 "mdb.name_mangle.c"
                    mdb__name_mangle__succeeded = (mdb__name_mangle__V_6_6 == mdb__name_mangle__V_11_11);
#line 38 "name_mangle.m"
                    if (mdb__name_mangle__succeeded)
#line 1903 "mdb.name_mangle.c"
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
#line 47 "name_mangle.m"
      return;
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
#line 1961 "mdb.name_mangle.c"
  {
#line 1963 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded = (mdb__name_mangle__HeadVar__2_1 == mdb__name_mangle__HeadVar__2_2);

#line 1966 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1968 "mdb.name_mangle.c"
  }
#line 47 "name_mangle.m"
}

#line 59 "name_mangle.m"
void MR_CALL 
mdb__name_mangle____Compare____arity_0_0(
#line 59 "name_mangle.m"
  MR_Word * mdb__name_mangle__HeadVar__1_1,
#line 59 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2,
#line 59 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__3_3)
#line 59 "name_mangle.m"
{
#line 59 "name_mangle.m"
  {
#line 59 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 59 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
#line 59 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

#line 59 "name_mangle.m"
    {
#line 59 "name_mangle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
#line 59 "name_mangle.m"
      return;
    }
#line 59 "name_mangle.m"
  }
#line 59 "name_mangle.m"
}

#line 59 "name_mangle.m"
MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0(
#line 59 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__1_1,
#line 59 "name_mangle.m"
  MR_Integer mdb__name_mangle__HeadVar__2_2)
#line 59 "name_mangle.m"
{
#line 59 "name_mangle.m"
  {
#line 59 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 59 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
#line 59 "name_mangle.m"
    MR_Integer mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

#line 59 "name_mangle.m"
    mdb__name_mangle__succeeded = (mdb__name_mangle__Cast_HeadVar1_3 == mdb__name_mangle__Cast_HeadVar2_4);
#line 59 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 59 "name_mangle.m"
  }
#line 59 "name_mangle.m"
}

#line 266 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void)
#line 266 "name_mangle.m"
{
#line 268 "name_mangle.m"
  {
#line 268 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 271 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__high_level_code_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 271 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2057 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 271 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 268 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 268 "name_mangle.m"
  }
#line 266 "name_mangle.m"
}

#line 251 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void)
#line 251 "name_mangle.m"
{
#line 253 "name_mangle.m"
  {
#line 253 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 256 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__use_asm_labels_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 256 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2098 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 256 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 253 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 253 "name_mangle.m"
  }
#line 251 "name_mangle.m"
}

#line 237 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
#line 237 "name_mangle.m"
  MR_String mdb__name_mangle__String_3,
#line 237 "name_mangle.m"
  MR_String * mdb__name_mangle__Name_4)
#line 237 "name_mangle.m"
{
#line 246 "name_mangle.m"
  {
#line 246 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 246 "name_mangle.m"
    MR_Char mdb__name_mangle__Char_5;
#line 246 "name_mangle.m"
    MR_String mdb__name_mangle__Rest_6;

#line 240 "name_mangle.m"
    {
#line 240 "name_mangle.m"
      mdb__name_mangle__succeeded = mercury__string__first_char_3_p_3(mdb__name_mangle__String_3, &mdb__name_mangle__Char_5, &mdb__name_mangle__Rest_6);
    }
#line 246 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 241 "name_mangle.m"
      {
#line 241 "name_mangle.m"
        MR_Integer mdb__name_mangle__Code_7;
#line 241 "name_mangle.m"
        MR_String mdb__name_mangle__CodeString_8;
#line 241 "name_mangle.m"
        MR_String mdb__name_mangle__ThisCharString_9;
#line 241 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_10;

#line 241 "name_mangle.m"
        {
#line 241 "name_mangle.m"
          mercury__char__to_int_2_p_0(mdb__name_mangle__Char_5, &mdb__name_mangle__Code_7);
        }
#line 242 "name_mangle.m"
        {
#line 242 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Code_7, &mdb__name_mangle__CodeString_8);
        }
#line 243 "name_mangle.m"
        {
#line 243 "name_mangle.m"
          mercury__string__append_3_p_2((MR_String) "_", mdb__name_mangle__CodeString_8, &mdb__name_mangle__ThisCharString_9);
        }
#line 244 "name_mangle.m"
        {
#line 244 "name_mangle.m"
          mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Rest_6, &mdb__name_mangle__Name0_10);
        }
#line 245 "name_mangle.m"
        {
#line 245 "name_mangle.m"
          mercury__string__append_3_p_2(mdb__name_mangle__ThisCharString_9, mdb__name_mangle__Name0_10, mdb__name_mangle__Name_4);
#line 245 "name_mangle.m"
          return;
        }
#line 241 "name_mangle.m"
      }
#line 246 "name_mangle.m"
    else
#line 248 "name_mangle.m"
      *mdb__name_mangle__Name_4 = mdb__name_mangle__String_3;
#line 246 "name_mangle.m"
  }
#line 237 "name_mangle.m"
}

#line 172 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
#line 172 "name_mangle.m"
  MR_String mdb__name_mangle__Name_3,
#line 172 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_4)
#line 172 "name_mangle.m"
{
#line 185 "name_mangle.m"
  {
#line 185 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 175 "name_mangle.m"
    {
#line 175 "name_mangle.m"
      mdb__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(mdb__name_mangle__Name_3);
    }
#line 185 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 182 "name_mangle.m"
      {
#line 182 "name_mangle.m"
        MR_String mdb__name_mangle__Suffix_5;

#line 180 "name_mangle.m"
        {
#line 180 "name_mangle.m"
          mdb__name_mangle__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &mdb__name_mangle__Suffix_5, mdb__name_mangle__Name_3);
        }
#line 182 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 181 "name_mangle.m"
          {
#line 181 "name_mangle.m"
            {
#line 181 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "f__", mdb__name_mangle__Suffix_5, mdb__name_mangle__MangledName_4);
#line 181 "name_mangle.m"
              return;
            }
#line 181 "name_mangle.m"
          }
#line 182 "name_mangle.m"
        else
#line 183 "name_mangle.m"
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name_3;
#line 182 "name_mangle.m"
      }
#line 185 "name_mangle.m"
    else
#line 194 "name_mangle.m"
      {
#line 194 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_10;
#line 213 "name_mangle.m"
        MR_Integer mdb__name_mangle__slot_0;
#line 213 "name_mangle.m"
        MR_String mdb__name_mangle__str_1;

#line 213 "name_mangle.m"
        /* hashed string simple lookup switch */
#line 213 "name_mangle.m"
        /* compute the hash value of the input string */
#line 213 "name_mangle.m"
        mdb__name_mangle__slot_0 = ((MR_hash_string5(mdb__name_mangle__Name_3)) & (MR_Integer) 63);
#line 213 "name_mangle.m"
        /* no collisions; no hash chain loop */
#line 213 "name_mangle.m"
        /* lookup the string for this hash slot */
#line 213 "name_mangle.m"
        mdb__name_mangle__str_1 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
#line 213 "name_mangle.m"
        /* did we find a match? */
#line 213 "name_mangle.m"
        if ((((mdb__name_mangle__str_1 != NULL)) && ((strcmp(mdb__name_mangle__str_1, mdb__name_mangle__Name_3) == 0))))
#line 213 "name_mangle.m"
          {
#line 213 "name_mangle.m"
            /* we found a match; look up the results */
#line 213 "name_mangle.m"
            mdb__name_mangle__Name0_10 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
#line 213 "name_mangle.m"
            mdb__name_mangle__succeeded = MR_TRUE;
#line 213 "name_mangle.m"
            /* jump out of search loop */
#line 213 "name_mangle.m"
            goto label_0;
#line 213 "name_mangle.m"
          }
#line 213 "name_mangle.m"
        mdb__name_mangle__succeeded = MR_FALSE;
#line 213 "name_mangle.m"
      label_0:;
#line 194 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 193 "name_mangle.m"
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name0_10;
#line 194 "name_mangle.m"
        else
#line 195 "name_mangle.m"
          {
#line 195 "name_mangle.m"
            MR_String mdb__name_mangle__Name0_12;

#line 195 "name_mangle.m"
            {
#line 195 "name_mangle.m"
              mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Name_3, &mdb__name_mangle__Name0_12);
            }
#line 196 "name_mangle.m"
            {
#line 196 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "f", mdb__name_mangle__Name0_12, mdb__name_mangle__MangledName_4);
#line 196 "name_mangle.m"
              return;
            }
#line 195 "name_mangle.m"
          }
#line 194 "name_mangle.m"
      }
#line 185 "name_mangle.m"
  }
#line 172 "name_mangle.m"
}

#line 158 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
#line 158 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 158 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_2)
#line 158 "name_mangle.m"
{
#line 160 "name_mangle.m"
  {
#line 160 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 160 "name_mangle.m"
    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 162 "name_mangle.m"
      {
#line 162 "name_mangle.m"
        MR_Word mdb__name_mangle__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 162 "name_mangle.m"
        MR_String mdb__name_mangle__PlainName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
#line 162 "name_mangle.m"
        MR_String mdb__name_mangle__MangledModuleName_8;
#line 162 "name_mangle.m"
        MR_String mdb__name_mangle__MangledPlainName_9;
#line 162 "name_mangle.m"
        MR_Word mdb__name_mangle__V_13_13;
#line 162 "name_mangle.m"
        MR_Word mdb__name_mangle__V_14_14;
#line 162 "name_mangle.m"
        MR_Word mdb__name_mangle__V_16_16;

#line 163 "name_mangle.m"
        {
#line 163 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__ModuleName_5, &mdb__name_mangle__MangledModuleName_8);
        }
#line 164 "name_mangle.m"
        {
#line 164 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__PlainName_6, &mdb__name_mangle__MangledPlainName_9);
        }
#line 202 "name_mangle.m"
        {
#line 202 "name_mangle.m"
          mdb__name_mangle__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_16_16, 0) = ((MR_Box) (mdb__name_mangle__MangledPlainName_9));
#line 202 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "name_mangle.m"
        }
#line 202 "name_mangle.m"
        {
#line 202 "name_mangle.m"
          mdb__name_mangle__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_14_14, 0) = ((MR_Box) ((MR_String) "__"));
#line 202 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_14_14, 1) = ((MR_Box) (mdb__name_mangle__V_16_16));
#line 202 "name_mangle.m"
        }
#line 202 "name_mangle.m"
        {
#line 202 "name_mangle.m"
          mdb__name_mangle__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_13_13, 0) = ((MR_Box) (mdb__name_mangle__MangledModuleName_8));
#line 202 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_13_13, 1) = ((MR_Box) (mdb__name_mangle__V_14_14));
#line 202 "name_mangle.m"
        }
#line 202 "name_mangle.m"
        {
#line 202 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_13_13, mdb__name_mangle__MangledName_2);
#line 202 "name_mangle.m"
          return;
        }
#line 162 "name_mangle.m"
      }
#line 160 "name_mangle.m"
    else
#line 160 "name_mangle.m"
      {
#line 160 "name_mangle.m"
        MR_String mdb__name_mangle__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));

#line 161 "name_mangle.m"
        {
#line 161 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__Name_3, mdb__name_mangle__MangledName_2);
#line 161 "name_mangle.m"
          return;
        }
#line 160 "name_mangle.m"
      }
#line 160 "name_mangle.m"
  }
#line 158 "name_mangle.m"
}

#line 36 "name_mangle.m"
MR_String MR_CALL 
mdb__name_mangle__proc_name_mangle_1_f_0(
#line 36 "name_mangle.m"
  MR_Word mdb__name_mangle__MercuryProc_3)
#line 36 "name_mangle.m"
{
#line 81 "name_mangle.m"
  {
#line 81 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 81 "name_mangle.m"
    MR_String mdb__name_mangle__HeadVar__2_2;

#line 271 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 271 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2447 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 271 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 81 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 128 "name_mangle.m"
      {
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 0)));
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__Module_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 1)));
#line 128 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 2)));
#line 128 "name_mangle.m"
        MR_Integer mdb__name_mangle__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 3)));
#line 128 "name_mangle.m"
        MR_Integer mdb__name_mangle__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 4)));
#line 128 "name_mangle.m"
        MR_String mdb__name_mangle__ModuleName_12;
#line 128 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName0_13;
#line 128 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName1_14;
#line 128 "name_mangle.m"
        MR_String mdb__name_mangle__PredOrFuncString_15;
#line 128 "name_mangle.m"
        MR_Integer mdb__name_mangle__ArityAsPred_16;
#line 128 "name_mangle.m"
        MR_String mdb__name_mangle__ArityString_17;
#line 128 "name_mangle.m"
        MR_String mdb__name_mangle__ModeNumString_18;
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__V_20_20;
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__V_21_21;
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__V_23_23;
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__V_24_24;
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__V_26_26;
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__V_27_27;
#line 128 "name_mangle.m"
        MR_Word mdb__name_mangle__V_29_29;

#line 130 "name_mangle.m"
        {
#line 130 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_8, &mdb__name_mangle__ModuleName_12);
        }
#line 132 "name_mangle.m"
        mdb__name_mangle__succeeded = (mdb__name_mangle__PredOrFunc_7 == (MR_Integer) 0);
#line 132 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 132 "name_mangle.m"
          {
#line 133 "name_mangle.m"
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Name0_9, (MR_String) "main") == 0);
#line 132 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 134 "name_mangle.m"
              mdb__name_mangle__succeeded = (mdb__name_mangle__Arity_10 == (MR_Integer) 2);
#line 132 "name_mangle.m"
          }
#line 2518 "mdb.name_mangle.c"
        if (mdb__name_mangle__succeeded)
#line 2520 "mdb.name_mangle.c"
          {
#line 138 "name_mangle.m"
            mdb__name_mangle__LabelName0_13 = mdb__name_mangle__Name0_9;
#line 145 "name_mangle.m"
            mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 146 "name_mangle.m"
            mdb__name_mangle__ArityAsPred_16 = mdb__name_mangle__Arity_10;
#line 2528 "mdb.name_mangle.c"
          }
#line 2530 "mdb.name_mangle.c"
        else
#line 2532 "mdb.name_mangle.c"
          {
#line 2534 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_34_34;
#line 2536 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_35_35;
#line 2538 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_37_37;

#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mdb__name_mangle__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_37_37, 0) = ((MR_Box) (mdb__name_mangle__Name0_9));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "name_mangle.m"
            }
#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mdb__name_mangle__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_35_35, 0) = ((MR_Box) ((MR_String) "__"));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_35_35, 1) = ((MR_Box) (mdb__name_mangle__V_37_37));
#line 202 "name_mangle.m"
            }
#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mdb__name_mangle__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_34_34, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_12));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_34_34, 1) = ((MR_Box) (mdb__name_mangle__V_35_35));
#line 202 "name_mangle.m"
            }
#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mercury__string__append_list_2_p_0(mdb__name_mangle__V_34_34, &mdb__name_mangle__LabelName0_13);
            }
#line 147 "name_mangle.m"
#line 147 "name_mangle.m"
            switch (mdb__name_mangle__PredOrFunc_7) {
#line 147 "name_mangle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 147 "name_mangle.m"
              case (MR_Integer) 1:
#line 148 "name_mangle.m"
                {
#line 149 "name_mangle.m"
                  mdb__name_mangle__PredOrFuncString_15 = (MR_String) "f";
#line 150 "name_mangle.m"
                  mdb__name_mangle__ArityAsPred_16 = (mdb__name_mangle__Arity_10 + (MR_Integer) 1);
#line 148 "name_mangle.m"
                }
#line 147 "name_mangle.m"
                break;
#line 147 "name_mangle.m"
              case (MR_Integer) 0:
#line 144 "name_mangle.m"
                {
#line 145 "name_mangle.m"
                  mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 146 "name_mangle.m"
                  mdb__name_mangle__ArityAsPred_16 = mdb__name_mangle__Arity_10;
#line 144 "name_mangle.m"
                }
#line 147 "name_mangle.m"
                break;
#line 147 "name_mangle.m"
            }
#line 2607 "mdb.name_mangle.c"
          }
#line 142 "name_mangle.m"
        {
#line 142 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__LabelName0_13, &mdb__name_mangle__LabelName1_14);
        }
#line 152 "name_mangle.m"
        {
#line 152 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ArityAsPred_16, &mdb__name_mangle__ArityString_17);
        }
#line 153 "name_mangle.m"
        {
#line 153 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ModeNum_11, &mdb__name_mangle__ModeNumString_18);
        }
#line 155 "name_mangle.m"
        {
#line 155 "name_mangle.m"
          mdb__name_mangle__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_29_29, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_18));
#line 155 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "name_mangle.m"
        }
#line 155 "name_mangle.m"
        {
#line 155 "name_mangle.m"
          mdb__name_mangle__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_27_27, 0) = ((MR_Box) ((MR_String) "_"));
#line 155 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_27_27, 1) = ((MR_Box) (mdb__name_mangle__V_29_29));
#line 155 "name_mangle.m"
        }
#line 155 "name_mangle.m"
        {
#line 155 "name_mangle.m"
          mdb__name_mangle__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_26_26, 0) = ((MR_Box) (mdb__name_mangle__PredOrFuncString_15));
#line 155 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_26_26, 1) = ((MR_Box) (mdb__name_mangle__V_27_27));
#line 155 "name_mangle.m"
        }
#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          mdb__name_mangle__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_24_24, 0) = ((MR_Box) ((MR_String) "_"));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_24_24, 1) = ((MR_Box) (mdb__name_mangle__V_26_26));
#line 154 "name_mangle.m"
        }
#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          mdb__name_mangle__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_23_23, 0) = ((MR_Box) (mdb__name_mangle__ArityString_17));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_23_23, 1) = ((MR_Box) (mdb__name_mangle__V_24_24));
#line 154 "name_mangle.m"
        }
#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          mdb__name_mangle__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_21_21, 0) = ((MR_Box) ((MR_String) "_"));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_21_21, 1) = ((MR_Box) (mdb__name_mangle__V_23_23));
#line 154 "name_mangle.m"
        }
#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          mdb__name_mangle__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_20_20, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_14));
#line 154 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_20_20, 1) = ((MR_Box) (mdb__name_mangle__V_21_21));
#line 154 "name_mangle.m"
        }
#line 154 "name_mangle.m"
        {
#line 154 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_20_20, &mdb__name_mangle__HeadVar__2_2);
        }
#line 128 "name_mangle.m"
      }
#line 81 "name_mangle.m"
    else
#line 90 "name_mangle.m"
      {
#line 90 "name_mangle.m"
        MR_Word mdb__name_mangle__PredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 0)));
#line 90 "name_mangle.m"
        MR_Word mdb__name_mangle__Module_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 1)));
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_43 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 2)));
#line 90 "name_mangle.m"
        MR_Integer mdb__name_mangle__Arity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 3)));
#line 90 "name_mangle.m"
        MR_Integer mdb__name_mangle__ModeNum_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 4)));
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__ModuleName_46;
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName0_47;
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName1_48;
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__ArityString_49;
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__ModeNumString_50;
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName2_51;
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName3_52;
#line 90 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName4_53;
#line 90 "name_mangle.m"
        MR_Word mdb__name_mangle__V_55_55;
#line 90 "name_mangle.m"
        MR_Word mdb__name_mangle__V_56_56;
#line 90 "name_mangle.m"
        MR_Word mdb__name_mangle__V_58_58;
#line 90 "name_mangle.m"
        MR_Word mdb__name_mangle__V_59_59;
#line 90 "name_mangle.m"
        MR_Word mdb__name_mangle__V_61_61;

#line 92 "name_mangle.m"
        {
#line 92 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_42, &mdb__name_mangle__ModuleName_46);
        }
#line 95 "name_mangle.m"
        {
#line 95 "name_mangle.m"
          MR_String mdb__name_mangle__V_54_54;

#line 95 "name_mangle.m"
          mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__Module_42)) == (MR_mktag((MR_Integer) 1)));
#line 95 "name_mangle.m"
          if (mdb__name_mangle__succeeded)
#line 95 "name_mangle.m"
            {
#line 95 "name_mangle.m"
              mdb__name_mangle__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__Module_42, (MR_Integer) 0)));
#line 95 "name_mangle.m"
              mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_54_54, (MR_String) "builtin") == 0);
#line 95 "name_mangle.m"
            }
#line 95 "name_mangle.m"
        }
#line 96 "name_mangle.m"
        if (!(mdb__name_mangle__succeeded))
#line 97 "name_mangle.m"
          {
#line 97 "name_mangle.m"
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Name0_43, (MR_String) "main") == 0);
#line 97 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 98 "name_mangle.m"
              mdb__name_mangle__succeeded = (mdb__name_mangle__Arity_44 == (MR_Integer) 2);
#line 97 "name_mangle.m"
          }
#line 104 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 103 "name_mangle.m"
          mdb__name_mangle__LabelName0_47 = mdb__name_mangle__Name0_43;
#line 104 "name_mangle.m"
        else
#line 201 "name_mangle.m"
          {
#line 201 "name_mangle.m"
            MR_Word mdb__name_mangle__V_69_69;
#line 201 "name_mangle.m"
            MR_Word mdb__name_mangle__V_70_70;
#line 201 "name_mangle.m"
            MR_Word mdb__name_mangle__V_72_72;

#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mdb__name_mangle__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_72_72, 0) = ((MR_Box) (mdb__name_mangle__Name0_43));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "name_mangle.m"
            }
#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mdb__name_mangle__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_70_70, 0) = ((MR_Box) ((MR_String) "__"));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_70_70, 1) = ((MR_Box) (mdb__name_mangle__V_72_72));
#line 202 "name_mangle.m"
            }
#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mdb__name_mangle__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_69_69, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_46));
#line 202 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_69_69, 1) = ((MR_Box) (mdb__name_mangle__V_70_70));
#line 202 "name_mangle.m"
            }
#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mercury__string__append_list_2_p_0(mdb__name_mangle__V_69_69, &mdb__name_mangle__LabelName0_47);
            }
#line 201 "name_mangle.m"
          }
#line 107 "name_mangle.m"
        {
#line 107 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__LabelName0_47, &mdb__name_mangle__LabelName1_48);
        }
#line 108 "name_mangle.m"
        {
#line 108 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Arity_44, &mdb__name_mangle__ArityString_49);
        }
#line 109 "name_mangle.m"
        {
#line 109 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ModeNum_45, &mdb__name_mangle__ModeNumString_50);
        }
#line 110 "name_mangle.m"
        {
#line 110 "name_mangle.m"
          mdb__name_mangle__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_61_61, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_50));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "name_mangle.m"
        }
#line 110 "name_mangle.m"
        {
#line 110 "name_mangle.m"
          mdb__name_mangle__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_59_59, 0) = ((MR_Box) ((MR_String) "_"));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_59_59, 1) = ((MR_Box) (mdb__name_mangle__V_61_61));
#line 110 "name_mangle.m"
        }
#line 110 "name_mangle.m"
        {
#line 110 "name_mangle.m"
          mdb__name_mangle__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_58_58, 0) = ((MR_Box) (mdb__name_mangle__ArityString_49));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_58_58, 1) = ((MR_Box) (mdb__name_mangle__V_59_59));
#line 110 "name_mangle.m"
        }
#line 110 "name_mangle.m"
        {
#line 110 "name_mangle.m"
          mdb__name_mangle__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_56_56, 0) = ((MR_Box) ((MR_String) "_"));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_56_56, 1) = ((MR_Box) (mdb__name_mangle__V_58_58));
#line 110 "name_mangle.m"
        }
#line 110 "name_mangle.m"
        {
#line 110 "name_mangle.m"
          mdb__name_mangle__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_55_55, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_48));
#line 110 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_55_55, 1) = ((MR_Box) (mdb__name_mangle__V_56_56));
#line 110 "name_mangle.m"
        }
#line 110 "name_mangle.m"
        {
#line 110 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_55_55, &mdb__name_mangle__LabelName2_51);
        }
#line 115 "name_mangle.m"
#line 115 "name_mangle.m"
        switch (mdb__name_mangle__PredOrFunc_41) {
#line 115 "name_mangle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 115 "name_mangle.m"
          case (MR_Integer) 1:
#line 113 "name_mangle.m"
            {
#line 114 "name_mangle.m"
              {
#line 114 "name_mangle.m"
                mercury__string__append_3_p_2((MR_String) "fn__", mdb__name_mangle__LabelName2_51, &mdb__name_mangle__LabelName3_52);
              }
#line 113 "name_mangle.m"
            }
#line 115 "name_mangle.m"
            break;
#line 115 "name_mangle.m"
          case (MR_Integer) 0:
#line 117 "name_mangle.m"
            mdb__name_mangle__LabelName3_52 = mdb__name_mangle__LabelName2_51;
#line 115 "name_mangle.m"
            break;
#line 115 "name_mangle.m"
        }
#line 119 "name_mangle.m"
        {
#line 119 "name_mangle.m"
          mercury__string__append_3_p_2((MR_String) "mercury__", mdb__name_mangle__LabelName3_52, &mdb__name_mangle__LabelName4_53);
        }
#line 256 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 256 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2946 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 256 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 122 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 121 "name_mangle.m"
          {
#line 121 "name_mangle.m"
            {
#line 121 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "_entry_", mdb__name_mangle__LabelName4_53, &mdb__name_mangle__HeadVar__2_2);
            }
#line 121 "name_mangle.m"
          }
#line 122 "name_mangle.m"
        else
#line 123 "name_mangle.m"
          mdb__name_mangle__HeadVar__2_2 = mdb__name_mangle__LabelName4_53;
#line 90 "name_mangle.m"
      }
#line 81 "name_mangle.m"
    return mdb__name_mangle__HeadVar__2_2;
#line 81 "name_mangle.m"
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
