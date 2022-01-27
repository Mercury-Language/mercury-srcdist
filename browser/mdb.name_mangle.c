/*
** Automatically generated from `name_mangle.m'
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


/* :- module mdb.name_mangle. */
/* :- implementation. */

/*
INIT mercury__mdb__name_mangle__init
ENDINIT
*/

#include "mdb.name_mangle.mih"


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
#include "mdb.mih"
#include "mdbcomp.mih"
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




#line 65 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0;

#line 68 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1;

#line 71 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2];

#line 74 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2];

#line 77 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2];

#line 80 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5];

#line 83 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0;

#line 86 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1];

#line 89 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1];

#line 92 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1];

#line 95 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1];

#line 98 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2];

#line 101 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0;

#line 104 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1];

#line 107 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1;

#line 110 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1];

#line 113 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1];

#line 116 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2];

#line 119 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2];

#line 122 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2];

#line 125 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 128 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 130 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 133 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 136 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 138 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 140 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 143 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 146 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 148 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 151 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 154 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 156 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 158 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 161 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 164 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 166 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 169 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 172 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 174 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 176 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 179 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 182 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 184 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 187 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 190 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 192 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 194 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 197 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 200 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 202 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 205 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 208 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 210 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 212 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 215 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 218 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 220 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 223 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 226 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 228 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 230 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 233 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 236 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 238 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 241 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 244 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 246 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 248 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 274 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void);

#line 259 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void);

#line 243 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
#line 243 "name_mangle.m"
  MR_String mdb__name_mangle__String_3,
#line 243 "name_mangle.m"
  MR_String * mdb__name_mangle__Name_4);

#line 179 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
#line 179 "name_mangle.m"
  MR_String mdb__name_mangle__Name_3,
#line 179 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_4);

#line 165 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
#line 165 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 165 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_2);



#line 220 "name_mangle.m"
/* sealed */ struct mdb__name_mangle__vector_common_type_1_0_s {
#line 220 "name_mangle.m"
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
#line 220 "name_mangle.m"
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
#line 220 "name_mangle.m"
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
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 631 "mdb.name_mangle.c"
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

#line 648 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 0
};

#line 654 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1 = {
  (MR_String) "function",
  (MR_Integer) 1
};

#line 660 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1
};

#line 666 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0
};

#line 672 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 678 "mdb.name_mangle.c"
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

#line 695 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 704 "mdb.name_mangle.c"
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

#line 719 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 724 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0
  }
};

#line 733 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 738 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1] = {
  (MR_Integer) 0
};

#line 743 "mdb.name_mangle.c"
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

#line 760 "mdb.name_mangle.c"
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

#line 777 "mdb.name_mangle.c"
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

#line 794 "mdb.name_mangle.c"
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

#line 811 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 817 "mdb.name_mangle.c"
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

#line 832 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 837 "mdb.name_mangle.c"
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

#line 852 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0
};

#line 857 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 862 "mdb.name_mangle.c"
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

#line 876 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0,
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 882 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 888 "mdb.name_mangle.c"
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

#line 905 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 908 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 910 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 912 "mdb.name_mangle.c"
{
#line 914 "mdb.name_mangle.c"
  {
#line 916 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 919 "mdb.name_mangle.c"
    {
#line 921 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____arity_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 924 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 926 "mdb.name_mangle.c"
  }
#line 928 "mdb.name_mangle.c"
}

#line 931 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 934 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 936 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 938 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 940 "mdb.name_mangle.c"
{
#line 942 "mdb.name_mangle.c"
  {
#line 944 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 947 "mdb.name_mangle.c"
    {
#line 949 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____arity_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 952 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 954 "mdb.name_mangle.c"
  }
#line 956 "mdb.name_mangle.c"
}

#line 959 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 962 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 964 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 966 "mdb.name_mangle.c"
{
#line 968 "mdb.name_mangle.c"
  {
#line 970 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 973 "mdb.name_mangle.c"
    {
#line 975 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____is_pred_or_func_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 978 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 980 "mdb.name_mangle.c"
  }
#line 982 "mdb.name_mangle.c"
}

#line 985 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 988 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 990 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 992 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 994 "mdb.name_mangle.c"
{
#line 996 "mdb.name_mangle.c"
  {
#line 998 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1001 "mdb.name_mangle.c"
    {
#line 1003 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____is_pred_or_func_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1006 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1008 "mdb.name_mangle.c"
  }
#line 1010 "mdb.name_mangle.c"
}

#line 1013 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 1016 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1018 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1020 "mdb.name_mangle.c"
{
#line 1022 "mdb.name_mangle.c"
  {
#line 1024 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1027 "mdb.name_mangle.c"
    {
#line 1029 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mercury_proc_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1032 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1034 "mdb.name_mangle.c"
  }
#line 1036 "mdb.name_mangle.c"
}

#line 1039 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 1042 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1044 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1046 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1048 "mdb.name_mangle.c"
{
#line 1050 "mdb.name_mangle.c"
  {
#line 1052 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1055 "mdb.name_mangle.c"
    {
#line 1057 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mercury_proc_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1060 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1062 "mdb.name_mangle.c"
  }
#line 1064 "mdb.name_mangle.c"
}

#line 1067 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 1070 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1072 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1074 "mdb.name_mangle.c"
{
#line 1076 "mdb.name_mangle.c"
  {
#line 1078 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1081 "mdb.name_mangle.c"
    {
#line 1083 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mode_num_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 1086 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1088 "mdb.name_mangle.c"
  }
#line 1090 "mdb.name_mangle.c"
}

#line 1093 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 1096 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1098 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1100 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1102 "mdb.name_mangle.c"
{
#line 1104 "mdb.name_mangle.c"
  {
#line 1106 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1109 "mdb.name_mangle.c"
    {
#line 1111 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mode_num_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 1114 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1116 "mdb.name_mangle.c"
  }
#line 1118 "mdb.name_mangle.c"
}

#line 1121 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 1124 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1126 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1128 "mdb.name_mangle.c"
{
#line 1130 "mdb.name_mangle.c"
  {
#line 1132 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1135 "mdb.name_mangle.c"
    {
#line 1137 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____module_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1140 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1142 "mdb.name_mangle.c"
  }
#line 1144 "mdb.name_mangle.c"
}

#line 1147 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 1150 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1152 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1154 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1156 "mdb.name_mangle.c"
{
#line 1158 "mdb.name_mangle.c"
  {
#line 1160 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1163 "mdb.name_mangle.c"
    {
#line 1165 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____module_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1168 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1170 "mdb.name_mangle.c"
  }
#line 1172 "mdb.name_mangle.c"
}

#line 1175 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 1178 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1180 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1182 "mdb.name_mangle.c"
{
#line 1184 "mdb.name_mangle.c"
  {
#line 1186 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1189 "mdb.name_mangle.c"
    {
#line 1191 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____pred_name_0_0(((MR_String) mdb__name_mangle__wrapper_arg_1), ((MR_String) mdb__name_mangle__wrapper_arg_2));
    }
#line 1194 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1196 "mdb.name_mangle.c"
  }
#line 1198 "mdb.name_mangle.c"
}

#line 1201 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 1204 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1206 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1208 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1210 "mdb.name_mangle.c"
{
#line 1212 "mdb.name_mangle.c"
  {
#line 1214 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1217 "mdb.name_mangle.c"
    {
#line 1219 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____pred_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_String) mdb__name_mangle__wrapper_arg_2), ((MR_String) mdb__name_mangle__wrapper_arg_3));
    }
#line 1222 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1224 "mdb.name_mangle.c"
  }
#line 1226 "mdb.name_mangle.c"
}

#line 1229 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 1232 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 1234 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 1236 "mdb.name_mangle.c"
{
#line 1238 "mdb.name_mangle.c"
  {
#line 1240 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 1243 "mdb.name_mangle.c"
    {
#line 1245 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 1248 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1250 "mdb.name_mangle.c"
  }
#line 1252 "mdb.name_mangle.c"
}

#line 1255 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 1258 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 1260 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 1262 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 1264 "mdb.name_mangle.c"
{
#line 1266 "mdb.name_mangle.c"
  {
#line 1268 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 1271 "mdb.name_mangle.c"
    {
#line 1273 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 1276 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 1278 "mdb.name_mangle.c"
  }
#line 1280 "mdb.name_mangle.c"
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
#line 1307 "mdb.name_mangle.c"
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
#line 1336 "mdb.name_mangle.c"
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
#line 1357 "mdb.name_mangle.c"
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
#line 1370 "mdb.name_mangle.c"
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
#line 1444 "mdb.name_mangle.c"
            {
#line 1446 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_3_3, mdb__name_mangle__V_5_5);
            }
#line 53 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 1451 "mdb.name_mangle.c"
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
#line 1474 "mdb.name_mangle.c"
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
#line 64 "name_mangle.m"
      return;
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
#line 1691 "mdb.name_mangle.c"
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
#line 1729 "mdb.name_mangle.c"
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
#line 1749 "mdb.name_mangle.c"
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
#line 1769 "mdb.name_mangle.c"
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
#line 1789 "mdb.name_mangle.c"
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

#line 1868 "mdb.name_mangle.c"
        mdb__name_mangle__succeeded = (mdb__name_mangle__V_3_3 == mdb__name_mangle__V_8_8);
#line 38 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
          {
#line 1874 "mdb.name_mangle.c"
            {
#line 1876 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_4_4, mdb__name_mangle__V_9_9);
            }
#line 38 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
              {
#line 1883 "mdb.name_mangle.c"
                mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_5_5, mdb__name_mangle__V_10_10) == 0);
#line 38 "name_mangle.m"
                if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
                  {
#line 1889 "mdb.name_mangle.c"
                    mdb__name_mangle__succeeded = (mdb__name_mangle__V_6_6 == mdb__name_mangle__V_11_11);
#line 38 "name_mangle.m"
                    if (mdb__name_mangle__succeeded)
#line 1893 "mdb.name_mangle.c"
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
#line 1951 "mdb.name_mangle.c"
  {
#line 1953 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded = (mdb__name_mangle__HeadVar__2_1 == mdb__name_mangle__HeadVar__2_2);

#line 1956 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1958 "mdb.name_mangle.c"
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
#line 61 "name_mangle.m"
      return;
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

#line 274 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void)
#line 274 "name_mangle.m"
{
#line 276 "name_mangle.m"
  {
#line 276 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 279 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__high_level_code_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 279 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2047 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 279 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 276 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 276 "name_mangle.m"
  }
#line 274 "name_mangle.m"
}

#line 259 "name_mangle.m"
static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void)
#line 259 "name_mangle.m"
{
#line 261 "name_mangle.m"
  {
#line 261 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 264 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__use_asm_labels_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 264 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2088 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 264 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 261 "name_mangle.m"
    return mdb__name_mangle__succeeded;
#line 261 "name_mangle.m"
  }
#line 259 "name_mangle.m"
}

#line 243 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
#line 243 "name_mangle.m"
  MR_String mdb__name_mangle__String_3,
#line 243 "name_mangle.m"
  MR_String * mdb__name_mangle__Name_4)
#line 243 "name_mangle.m"
{
#line 252 "name_mangle.m"
  {
#line 252 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;
#line 252 "name_mangle.m"
    MR_Char mdb__name_mangle__Char_5;
#line 252 "name_mangle.m"
    MR_String mdb__name_mangle__Rest_6;

#line 246 "name_mangle.m"
    {
#line 246 "name_mangle.m"
      mdb__name_mangle__succeeded = mercury__string__first_char_3_p_3(mdb__name_mangle__String_3, &mdb__name_mangle__Char_5, &mdb__name_mangle__Rest_6);
    }
#line 252 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 247 "name_mangle.m"
      {
#line 247 "name_mangle.m"
        MR_Integer mdb__name_mangle__Code_7;
#line 247 "name_mangle.m"
        MR_String mdb__name_mangle__CodeString_8;
#line 247 "name_mangle.m"
        MR_String mdb__name_mangle__ThisCharString_9;
#line 247 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_10;

#line 247 "name_mangle.m"
        {
#line 247 "name_mangle.m"
          mercury__char__to_int_2_p_0(mdb__name_mangle__Char_5, &mdb__name_mangle__Code_7);
        }
#line 248 "name_mangle.m"
        {
#line 248 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Code_7, &mdb__name_mangle__CodeString_8);
        }
#line 249 "name_mangle.m"
        {
#line 249 "name_mangle.m"
          mercury__string__append_3_p_2((MR_String) "_", mdb__name_mangle__CodeString_8, &mdb__name_mangle__ThisCharString_9);
        }
#line 250 "name_mangle.m"
        {
#line 250 "name_mangle.m"
          mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Rest_6, &mdb__name_mangle__Name0_10);
        }
#line 251 "name_mangle.m"
        {
#line 251 "name_mangle.m"
          mercury__string__append_3_p_2(mdb__name_mangle__ThisCharString_9, mdb__name_mangle__Name0_10, mdb__name_mangle__Name_4);
#line 251 "name_mangle.m"
          return;
        }
#line 247 "name_mangle.m"
      }
#line 252 "name_mangle.m"
    else
#line 254 "name_mangle.m"
      *mdb__name_mangle__Name_4 = mdb__name_mangle__String_3;
#line 252 "name_mangle.m"
  }
#line 243 "name_mangle.m"
}

#line 179 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
#line 179 "name_mangle.m"
  MR_String mdb__name_mangle__Name_3,
#line 179 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_4)
#line 179 "name_mangle.m"
{
#line 192 "name_mangle.m"
  {
#line 192 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 182 "name_mangle.m"
    {
#line 182 "name_mangle.m"
      mdb__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(mdb__name_mangle__Name_3);
    }
#line 192 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 189 "name_mangle.m"
      {
#line 189 "name_mangle.m"
        MR_String mdb__name_mangle__Suffix_5;

#line 187 "name_mangle.m"
        {
#line 187 "name_mangle.m"
          mdb__name_mangle__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &mdb__name_mangle__Suffix_5, mdb__name_mangle__Name_3);
        }
#line 189 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 188 "name_mangle.m"
          {
#line 188 "name_mangle.m"
            {
#line 188 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "f__", mdb__name_mangle__Suffix_5, mdb__name_mangle__MangledName_4);
#line 188 "name_mangle.m"
              return;
            }
#line 188 "name_mangle.m"
          }
#line 189 "name_mangle.m"
        else
#line 190 "name_mangle.m"
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name_3;
#line 189 "name_mangle.m"
      }
#line 192 "name_mangle.m"
    else
#line 201 "name_mangle.m"
      {
#line 201 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_10;
#line 220 "name_mangle.m"
        MR_Integer mdb__name_mangle__slot_0;
#line 220 "name_mangle.m"
        MR_String mdb__name_mangle__str_1;

#line 220 "name_mangle.m"
        /* hashed string simple lookup switch */
#line 220 "name_mangle.m"
        /* compute the hash value of the input string */
#line 220 "name_mangle.m"
        mdb__name_mangle__slot_0 = ((MR_hash_string5(mdb__name_mangle__Name_3)) & (MR_Integer) 63);
#line 220 "name_mangle.m"
        /* no collisions; no hash chain loop */
#line 220 "name_mangle.m"
        /* lookup the string for this hash slot */
#line 220 "name_mangle.m"
        mdb__name_mangle__str_1 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
#line 220 "name_mangle.m"
        /* did we find a match? */
#line 220 "name_mangle.m"
        if ((((mdb__name_mangle__str_1 != NULL)) && ((strcmp(mdb__name_mangle__str_1, mdb__name_mangle__Name_3) == 0))))
#line 220 "name_mangle.m"
          {
#line 220 "name_mangle.m"
            /* we found a match; look up the results */
#line 220 "name_mangle.m"
            mdb__name_mangle__Name0_10 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
#line 220 "name_mangle.m"
            mdb__name_mangle__succeeded = MR_TRUE;
#line 220 "name_mangle.m"
            /* jump out of search loop */
#line 220 "name_mangle.m"
            goto label_0;
#line 220 "name_mangle.m"
          }
#line 220 "name_mangle.m"
        mdb__name_mangle__succeeded = MR_FALSE;
#line 220 "name_mangle.m"
      label_0:;
#line 201 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 200 "name_mangle.m"
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name0_10;
#line 201 "name_mangle.m"
        else
#line 202 "name_mangle.m"
          {
#line 202 "name_mangle.m"
            MR_String mdb__name_mangle__Name0_12;

#line 202 "name_mangle.m"
            {
#line 202 "name_mangle.m"
              mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Name_3, &mdb__name_mangle__Name0_12);
            }
#line 203 "name_mangle.m"
            {
#line 203 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "f", mdb__name_mangle__Name0_12, mdb__name_mangle__MangledName_4);
#line 203 "name_mangle.m"
              return;
            }
#line 202 "name_mangle.m"
          }
#line 201 "name_mangle.m"
      }
#line 192 "name_mangle.m"
  }
#line 179 "name_mangle.m"
}

#line 165 "name_mangle.m"
static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
#line 165 "name_mangle.m"
  MR_Word mdb__name_mangle__HeadVar__1_1,
#line 165 "name_mangle.m"
  MR_String * mdb__name_mangle__MangledName_2)
#line 165 "name_mangle.m"
{
#line 167 "name_mangle.m"
  {
#line 167 "name_mangle.m"
    MR_bool mdb__name_mangle__succeeded;

#line 167 "name_mangle.m"
    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 169 "name_mangle.m"
      {
#line 169 "name_mangle.m"
        MR_Word mdb__name_mangle__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "name_mangle.m"
        MR_String mdb__name_mangle__PlainName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "name_mangle.m"
        MR_String mdb__name_mangle__MangledModuleName_8;
#line 169 "name_mangle.m"
        MR_String mdb__name_mangle__MangledPlainName_9;
#line 169 "name_mangle.m"
        MR_Word mdb__name_mangle__V_13_13;
#line 169 "name_mangle.m"
        MR_Word mdb__name_mangle__V_14_14;
#line 169 "name_mangle.m"
        MR_Word mdb__name_mangle__V_16_16;

#line 170 "name_mangle.m"
        {
#line 170 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__ModuleName_5, &mdb__name_mangle__MangledModuleName_8);
        }
#line 171 "name_mangle.m"
        {
#line 171 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__PlainName_6, &mdb__name_mangle__MangledPlainName_9);
        }
#line 209 "name_mangle.m"
        {
#line 209 "name_mangle.m"
          mdb__name_mangle__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_16_16, 0) = ((MR_Box) (mdb__name_mangle__MangledPlainName_9));
#line 209 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "name_mangle.m"
        }
#line 209 "name_mangle.m"
        {
#line 209 "name_mangle.m"
          mdb__name_mangle__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_14_14, 0) = ((MR_Box) ((MR_String) "__"));
#line 209 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_14_14, 1) = ((MR_Box) (mdb__name_mangle__V_16_16));
#line 209 "name_mangle.m"
        }
#line 209 "name_mangle.m"
        {
#line 209 "name_mangle.m"
          mdb__name_mangle__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_13_13, 0) = ((MR_Box) (mdb__name_mangle__MangledModuleName_8));
#line 209 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_13_13, 1) = ((MR_Box) (mdb__name_mangle__V_14_14));
#line 209 "name_mangle.m"
        }
#line 209 "name_mangle.m"
        {
#line 209 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_13_13, mdb__name_mangle__MangledName_2);
#line 209 "name_mangle.m"
          return;
        }
#line 169 "name_mangle.m"
      }
#line 167 "name_mangle.m"
    else
#line 167 "name_mangle.m"
      {
#line 167 "name_mangle.m"
        MR_String mdb__name_mangle__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));

#line 168 "name_mangle.m"
        {
#line 168 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__Name_3, mdb__name_mangle__MangledName_2);
#line 168 "name_mangle.m"
          return;
        }
#line 167 "name_mangle.m"
      }
#line 167 "name_mangle.m"
  }
#line 165 "name_mangle.m"
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

#line 279 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 279 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2437 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 279 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 77 "name_mangle.m"
    if (mdb__name_mangle__succeeded)
#line 135 "name_mangle.m"
      {
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 0)));
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__Module_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 1)));
#line 135 "name_mangle.m"
        MR_String mdb__name_mangle__Name0_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 2)));
#line 135 "name_mangle.m"
        MR_Integer mdb__name_mangle__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 3)));
#line 135 "name_mangle.m"
        MR_Integer mdb__name_mangle__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 4)));
#line 135 "name_mangle.m"
        MR_String mdb__name_mangle__ModuleName_12;
#line 135 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName0_13;
#line 135 "name_mangle.m"
        MR_String mdb__name_mangle__LabelName1_14;
#line 135 "name_mangle.m"
        MR_String mdb__name_mangle__PredOrFuncString_15;
#line 135 "name_mangle.m"
        MR_String mdb__name_mangle__ArityString_16;
#line 135 "name_mangle.m"
        MR_String mdb__name_mangle__ModeNumString_17;
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__V_18_18;
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__V_19_19;
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__V_21_21;
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__V_22_22;
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__V_24_24;
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__V_25_25;
#line 135 "name_mangle.m"
        MR_Word mdb__name_mangle__V_27_27;

#line 137 "name_mangle.m"
        {
#line 137 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_8, &mdb__name_mangle__ModuleName_12);
        }
#line 139 "name_mangle.m"
        mdb__name_mangle__succeeded = (mdb__name_mangle__PredOrFunc_7 == (MR_Integer) 0);
#line 139 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 139 "name_mangle.m"
          {
#line 140 "name_mangle.m"
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Name0_9, (MR_String) "main") == 0);
#line 139 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 141 "name_mangle.m"
              mdb__name_mangle__succeeded = (mdb__name_mangle__Arity_10 == (MR_Integer) 2);
#line 139 "name_mangle.m"
          }
#line 2506 "mdb.name_mangle.c"
        if (mdb__name_mangle__succeeded)
#line 2508 "mdb.name_mangle.c"
          {
#line 145 "name_mangle.m"
            mdb__name_mangle__LabelName0_13 = mdb__name_mangle__Name0_9;
#line 152 "name_mangle.m"
            mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 2514 "mdb.name_mangle.c"
          }
#line 2516 "mdb.name_mangle.c"
        else
#line 2518 "mdb.name_mangle.c"
          {
#line 2520 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_32_32;
#line 2522 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_33_33;
#line 2524 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_35_35;

#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mdb__name_mangle__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_35_35, 0) = ((MR_Box) (mdb__name_mangle__Name0_9));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "name_mangle.m"
            }
#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mdb__name_mangle__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_33_33, 0) = ((MR_Box) ((MR_String) "__"));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_33_33, 1) = ((MR_Box) (mdb__name_mangle__V_35_35));
#line 209 "name_mangle.m"
            }
#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mdb__name_mangle__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_32_32, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_12));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_32_32, 1) = ((MR_Box) (mdb__name_mangle__V_33_33));
#line 209 "name_mangle.m"
            }
#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mercury__string__append_list_2_p_0(mdb__name_mangle__V_32_32, &mdb__name_mangle__LabelName0_13);
            }
#line 153 "name_mangle.m"
#line 153 "name_mangle.m"
            switch (mdb__name_mangle__PredOrFunc_7) {
#line 153 "name_mangle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "name_mangle.m"
              case (MR_Integer) 1:
#line 155 "name_mangle.m"
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "f";
#line 153 "name_mangle.m"
                break;
#line 153 "name_mangle.m"
              case (MR_Integer) 0:
#line 152 "name_mangle.m"
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 153 "name_mangle.m"
                break;
#line 153 "name_mangle.m"
            }
#line 2581 "mdb.name_mangle.c"
          }
#line 149 "name_mangle.m"
        {
#line 149 "name_mangle.m"
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__LabelName0_13, &mdb__name_mangle__LabelName1_14);
        }
#line 157 "name_mangle.m"
        {
#line 157 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Arity_10, &mdb__name_mangle__ArityString_16);
        }
#line 158 "name_mangle.m"
        {
#line 158 "name_mangle.m"
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ModeNum_11, &mdb__name_mangle__ModeNumString_17);
        }
#line 160 "name_mangle.m"
        {
#line 160 "name_mangle.m"
          mdb__name_mangle__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_27_27, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_17));
#line 160 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "name_mangle.m"
        }
#line 160 "name_mangle.m"
        {
#line 160 "name_mangle.m"
          mdb__name_mangle__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_25_25, 0) = ((MR_Box) ((MR_String) "_"));
#line 160 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_25_25, 1) = ((MR_Box) (mdb__name_mangle__V_27_27));
#line 160 "name_mangle.m"
        }
#line 160 "name_mangle.m"
        {
#line 160 "name_mangle.m"
          mdb__name_mangle__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_24_24, 0) = ((MR_Box) (mdb__name_mangle__PredOrFuncString_15));
#line 160 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_24_24, 1) = ((MR_Box) (mdb__name_mangle__V_25_25));
#line 160 "name_mangle.m"
        }
#line 159 "name_mangle.m"
        {
#line 159 "name_mangle.m"
          mdb__name_mangle__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_22_22, 0) = ((MR_Box) ((MR_String) "_"));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_22_22, 1) = ((MR_Box) (mdb__name_mangle__V_24_24));
#line 159 "name_mangle.m"
        }
#line 159 "name_mangle.m"
        {
#line 159 "name_mangle.m"
          mdb__name_mangle__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_21_21, 0) = ((MR_Box) (mdb__name_mangle__ArityString_16));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_21_21, 1) = ((MR_Box) (mdb__name_mangle__V_22_22));
#line 159 "name_mangle.m"
        }
#line 159 "name_mangle.m"
        {
#line 159 "name_mangle.m"
          mdb__name_mangle__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_19_19, 0) = ((MR_Box) ((MR_String) "_"));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_19_19, 1) = ((MR_Box) (mdb__name_mangle__V_21_21));
#line 159 "name_mangle.m"
        }
#line 159 "name_mangle.m"
        {
#line 159 "name_mangle.m"
          mdb__name_mangle__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_18_18, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_14));
#line 159 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_18_18, 1) = ((MR_Box) (mdb__name_mangle__V_19_19));
#line 159 "name_mangle.m"
        }
#line 159 "name_mangle.m"
        {
#line 159 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_18_18, &mdb__name_mangle__HeadVar__2_2);
        }
#line 135 "name_mangle.m"
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
        MR_Word mdb__name_mangle__V_53_53;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_54_54;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_56_56;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_57_57;
#line 92 "name_mangle.m"
        MR_Word mdb__name_mangle__V_59_59;

#line 94 "name_mangle.m"
        {
#line 94 "name_mangle.m"
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_40, &mdb__name_mangle__ModuleName_44);
        }
#line 97 "name_mangle.m"
        {
#line 97 "name_mangle.m"
          MR_String mdb__name_mangle__V_52_52;

#line 97 "name_mangle.m"
          mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__Module_40)) == (MR_mktag((MR_Integer) 1)));
#line 97 "name_mangle.m"
          if (mdb__name_mangle__succeeded)
#line 97 "name_mangle.m"
            {
#line 97 "name_mangle.m"
              mdb__name_mangle__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__Module_40, (MR_Integer) 0)));
#line 97 "name_mangle.m"
              mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_52_52, (MR_String) "builtin") == 0);
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
#line 106 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 105 "name_mangle.m"
          mdb__name_mangle__LabelName0_45 = mdb__name_mangle__Name0_41;
#line 106 "name_mangle.m"
        else
#line 208 "name_mangle.m"
          {
#line 208 "name_mangle.m"
            MR_Word mdb__name_mangle__V_67_67;
#line 208 "name_mangle.m"
            MR_Word mdb__name_mangle__V_68_68;
#line 208 "name_mangle.m"
            MR_Word mdb__name_mangle__V_70_70;

#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mdb__name_mangle__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_70_70, 0) = ((MR_Box) (mdb__name_mangle__Name0_41));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "name_mangle.m"
            }
#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mdb__name_mangle__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_68_68, 0) = ((MR_Box) ((MR_String) "__"));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_68_68, 1) = ((MR_Box) (mdb__name_mangle__V_70_70));
#line 209 "name_mangle.m"
            }
#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mdb__name_mangle__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_67_67, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_44));
#line 209 "name_mangle.m"
              MR_hl_field(MR_mktag(1), mdb__name_mangle__V_67_67, 1) = ((MR_Box) (mdb__name_mangle__V_68_68));
#line 209 "name_mangle.m"
            }
#line 209 "name_mangle.m"
            {
#line 209 "name_mangle.m"
              mercury__string__append_list_2_p_0(mdb__name_mangle__V_67_67, &mdb__name_mangle__LabelName0_45);
            }
#line 208 "name_mangle.m"
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
          mdb__name_mangle__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_59_59, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_48));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_57_57, 0) = ((MR_Box) ((MR_String) "_"));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_57_57, 1) = ((MR_Box) (mdb__name_mangle__V_59_59));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_56_56, 0) = ((MR_Box) (mdb__name_mangle__ArityString_47));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_56_56, 1) = ((MR_Box) (mdb__name_mangle__V_57_57));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_54_54, 0) = ((MR_Box) ((MR_String) "_"));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_54_54, 1) = ((MR_Box) (mdb__name_mangle__V_56_56));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mdb__name_mangle__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_53_53, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_46));
#line 112 "name_mangle.m"
          MR_hl_field(MR_mktag(1), mdb__name_mangle__V_53_53, 1) = ((MR_Box) (mdb__name_mangle__V_54_54));
#line 112 "name_mangle.m"
        }
#line 112 "name_mangle.m"
        {
#line 112 "name_mangle.m"
          mercury__string__append_list_2_p_0(mdb__name_mangle__V_53_53, &mdb__name_mangle__LabelName2_49);
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
#line 264 "name_mangle.m"
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 264 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2920 "mdb.name_mangle.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 264 "name_mangle.m"
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
#line 124 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 123 "name_mangle.m"
          {
#line 123 "name_mangle.m"
            {
#line 123 "name_mangle.m"
              mercury__string__append_3_p_2((MR_String) "_entry_", mdb__name_mangle__LabelName4_51, &mdb__name_mangle__HeadVar__2_2);
            }
#line 123 "name_mangle.m"
          }
#line 124 "name_mangle.m"
        else
#line 125 "name_mangle.m"
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
