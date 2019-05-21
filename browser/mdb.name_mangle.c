/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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
#include "array.mih"
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




static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0;

static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1;

static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2];

static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2];

static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2];

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5];

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0;

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1];

static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1];

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1];

static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1];

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2];

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0;

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1];

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1;

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1];

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1];

static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2];

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2];

static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2];

static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void);

static MR_bool MR_CALL 
mdb__name_mangle__system_is_osx_0_p_0(void);

static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void);

static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
  MR_Word mdb__name_mangle__HeadVar__1_1,
  MR_String * mdb__name_mangle__MangledName_2);

static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
  MR_String mdb__name_mangle__Name_3,
  MR_String * mdb__name_mangle__MangledName_4);

static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
  MR_String mdb__name_mangle__String_3,
  MR_String * mdb__name_mangle__Name_4);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3);



/* sealed */ struct mdb__name_mangle__vector_common_type_1_0_s {
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
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



const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1 = {
  (MR_String) "function",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1
};

static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0
};

static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0 = {
  (MR_String) "mercury_proc",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_mercury_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_mode_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_module_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_pred_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0 = {
  (MR_String) "qualified",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1 = {
  (MR_String) "unqualified",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1
  }
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0,
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0(
  MR_Word * mdb__name_mangle__HeadVar__1_1,
  MR_String mdb__name_mangle__HeadVar__2_2,
  MR_String mdb__name_mangle__HeadVar__3_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_String mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
    MR_String mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0(
  MR_String mdb__name_mangle__HeadVar__1_1,
  MR_String mdb__name_mangle__HeadVar__2_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_String mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
    MR_String mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

    mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Cast_HeadVar1_3, mdb__name_mangle__Cast_HeadVar2_4) == 0);
    return mdb__name_mangle__succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0(
  MR_Word * mdb__name_mangle__HeadVar__1_1,
  MR_Word mdb__name_mangle__HeadVar__2_2,
  MR_Word mdb__name_mangle__HeadVar__3_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Word mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
    MR_Word mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

    {
      mdb__name_mangle____Compare____sym_name_0_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0(
  MR_Word mdb__name_mangle__HeadVar__1_1,
  MR_Word mdb__name_mangle__HeadVar__2_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Word mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
    MR_Word mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__Cast_HeadVar1_3, mdb__name_mangle__Cast_HeadVar2_4);
    }
    return mdb__name_mangle__succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0(
  MR_Word * mdb__name_mangle__HeadVar__1_1,
  MR_Integer mdb__name_mangle__HeadVar__2_2,
  MR_Integer mdb__name_mangle__HeadVar__3_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0(
  MR_Integer mdb__name_mangle__HeadVar__1_1,
  MR_Integer mdb__name_mangle__HeadVar__2_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
    MR_Integer mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

    mdb__name_mangle__succeeded = (mdb__name_mangle__Cast_HeadVar1_3 == mdb__name_mangle__Cast_HeadVar2_4);
    return mdb__name_mangle__succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0(
  MR_Word * mdb__name_mangle__HeadVar__1_1,
  MR_Word mdb__name_mangle__HeadVar__2_2,
  MR_Word mdb__name_mangle__HeadVar__3_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__CastX_18 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;
    MR_Integer mdb__name_mangle__CastY_19 = (MR_Integer) mdb__name_mangle__HeadVar__3_3;

    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_18 == mdb__name_mangle__CastY_19);
    if (mdb__name_mangle__succeeded)
      *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__name_mangle__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__name_mangle__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__name_mangle__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__name_mangle__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 1)));
        MR_String mdb__name_mangle__ArgX3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 2)));
        MR_String mdb__name_mangle__ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer mdb__name_mangle__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mdb__name_mangle__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer mdb__name_mangle__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer mdb__name_mangle__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mdb__name_mangle__Var_14;
        MR_Integer mdb__name_mangle__Var_25 = (MR_Integer) mdb__name_mangle__ArgX1_4;
        MR_Integer mdb__name_mangle__Var_26 = (MR_Integer) mdb__name_mangle__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__name_mangle__Var_14, mdb__name_mangle__Var_25, mdb__name_mangle__Var_26);
        }
        mdb__name_mangle__succeeded = (mdb__name_mangle__Var_14 == (MR_Integer) 0);
        mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
        if (mdb__name_mangle__succeeded)
          *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__Var_14;
        else
          {
            MR_Word mdb__name_mangle__Var_15;

            {
              mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__Var_15, mdb__name_mangle__ArgX2_6, mdb__name_mangle__ArgY2_7);
            }
            mdb__name_mangle__succeeded = (mdb__name_mangle__Var_15 == (MR_Integer) 0);
            mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
            if (mdb__name_mangle__succeeded)
              *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__Var_15;
            else
              {
                MR_Word mdb__name_mangle__Var_16;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__name_mangle__Var_16, mdb__name_mangle__ArgX3_8, mdb__name_mangle__ArgY3_9);
                }
                mdb__name_mangle__succeeded = (mdb__name_mangle__Var_16 == (MR_Integer) 0);
                mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
                if (mdb__name_mangle__succeeded)
                  *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__Var_16;
                else
                  {
                    MR_Word mdb__name_mangle__Var_17;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__name_mangle__Var_17, mdb__name_mangle__ArgX4_10, mdb__name_mangle__ArgY4_11);
                    }
                    mdb__name_mangle__succeeded = (mdb__name_mangle__Var_17 == (MR_Integer) 0);
                    mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
                    if (mdb__name_mangle__succeeded)
                      *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__Var_17;
                    else
                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__ArgX5_12, mdb__name_mangle__ArgY5_13);
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0(
  MR_Word * mdb__name_mangle__HeadVar__1_1,
  MR_Word mdb__name_mangle__HeadVar__2_2,
  MR_Word mdb__name_mangle__HeadVar__3_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__CastX_17 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;
    MR_Integer mdb__name_mangle__CastY_18 = (MR_Integer) mdb__name_mangle__HeadVar__3_3;

    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_17 == mdb__name_mangle__CastY_18);
    if (mdb__name_mangle__succeeded)
      *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String mdb__name_mangle__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__name_mangle__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mdb__name_mangle__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 0)));
            MR_String mdb__name_mangle__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mdb__name_mangle__Var_8;

            {
              mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__Var_8, mdb__name_mangle__Var_23, mdb__name_mangle__ArgY1_5);
            }
            mdb__name_mangle__succeeded = (mdb__name_mangle__Var_8 == (MR_Integer) 0);
            mdb__name_mangle__succeeded = !(mdb__name_mangle__succeeded);
            if (mdb__name_mangle__succeeded)
              *mdb__name_mangle__HeadVar__1_1 = mdb__name_mangle__Var_8;
            else
              {
                mercury__private_builtin__builtin_compare_string_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Var_22, mdb__name_mangle__ArgY2_7);
              }
          }
        else
          *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_String mdb__name_mangle__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mdb__name_mangle__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String mdb__name_mangle__ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Var_24, mdb__name_mangle__ArgY1_16);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0(
  MR_Word mdb__name_mangle__HeadVar__1_1,
  MR_Word mdb__name_mangle__HeadVar__2_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__CastX_13 = (MR_Integer) mdb__name_mangle__HeadVar__1_1;
    MR_Integer mdb__name_mangle__CastY_14 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;

    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_13 == mdb__name_mangle__CastY_14);
    if (mdb__name_mangle__succeeded)
      mdb__name_mangle__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__name_mangle__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__name_mangle__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__name_mangle__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__name_mangle__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mdb__name_mangle__ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 2)));
        MR_String mdb__name_mangle__ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdb__name_mangle__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mdb__name_mangle__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mdb__name_mangle__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer mdb__name_mangle__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 4)));

        mdb__name_mangle__succeeded = (mdb__name_mangle__ArgX1_3 == mdb__name_mangle__ArgY1_4);
        if (mdb__name_mangle__succeeded)
          {
            {
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__ArgX2_5, mdb__name_mangle__ArgY2_6);
            }
            if (mdb__name_mangle__succeeded)
              {
                mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__ArgX3_7, mdb__name_mangle__ArgY3_8) == 0);
                if (mdb__name_mangle__succeeded)
                  {
                    mdb__name_mangle__succeeded = (mdb__name_mangle__ArgX4_9 == mdb__name_mangle__ArgY4_10);
                    if (mdb__name_mangle__succeeded)
                      mdb__name_mangle__succeeded = (mdb__name_mangle__ArgX5_11 == mdb__name_mangle__ArgY5_12);
                  }
              }
          }
      }
    return mdb__name_mangle__succeeded;
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0(
  MR_Word mdb__name_mangle__HeadVar__1_1,
  MR_Word mdb__name_mangle__HeadVar__2_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__CastX_9 = (MR_Integer) mdb__name_mangle__HeadVar__1_1;
    MR_Integer mdb__name_mangle__CastY_10 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;

    mdb__name_mangle__succeeded = (mdb__name_mangle__CastX_9 == mdb__name_mangle__CastY_10);
    if (mdb__name_mangle__succeeded)
      mdb__name_mangle__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__name_mangle__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__name_mangle__ArgY1_4;
        MR_String mdb__name_mangle__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mdb__name_mangle__ArgY2_6;

        mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__name_mangle__succeeded)
          {
            mdb__name_mangle__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
            mdb__name_mangle__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 1)));
            {
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__ArgX1_3, mdb__name_mangle__ArgY1_4);
            }
            if (mdb__name_mangle__succeeded)
              mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__ArgX2_5, mdb__name_mangle__ArgY2_6) == 0);
          }
      }
    else
      {
        MR_String mdb__name_mangle__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdb__name_mangle__ArgY1_8;

        mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__name_mangle__succeeded)
          {
            mdb__name_mangle__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__2_2, (MR_Integer) 0)));
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__ArgX1_7, mdb__name_mangle__ArgY1_8) == 0);
          }
      }
    return mdb__name_mangle__succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0(
  MR_Word * mdb__name_mangle__HeadVar__1_1,
  MR_Word mdb__name_mangle__HeadVar__2_2,
  MR_Word mdb__name_mangle__HeadVar__3_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = (MR_Integer) mdb__name_mangle__HeadVar__2_2;
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = (MR_Integer) mdb__name_mangle__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0(
  MR_Word mdb__name_mangle__HeadVar__2_1,
  MR_Word mdb__name_mangle__HeadVar__2_2)
{
  {
    MR_bool mdb__name_mangle__succeeded = (mdb__name_mangle__HeadVar__2_1 == mdb__name_mangle__HeadVar__2_2);

    return mdb__name_mangle__succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____arity_0_0(
  MR_Word * mdb__name_mangle__HeadVar__1_1,
  MR_Integer mdb__name_mangle__HeadVar__2_2,
  MR_Integer mdb__name_mangle__HeadVar__3_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__Cast_HeadVar1_4 = mdb__name_mangle__HeadVar__2_2;
    MR_Integer mdb__name_mangle__Cast_HeadVar2_5 = mdb__name_mangle__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__name_mangle__HeadVar__1_1, mdb__name_mangle__Cast_HeadVar1_4, mdb__name_mangle__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0(
  MR_Integer mdb__name_mangle__HeadVar__1_1,
  MR_Integer mdb__name_mangle__HeadVar__2_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Integer mdb__name_mangle__Cast_HeadVar1_3 = mdb__name_mangle__HeadVar__1_1;
    MR_Integer mdb__name_mangle__Cast_HeadVar2_4 = mdb__name_mangle__HeadVar__2_2;

    mdb__name_mangle__succeeded = (mdb__name_mangle__Cast_HeadVar1_3 == mdb__name_mangle__Cast_HeadVar2_4);
    return mdb__name_mangle__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void)
{
  {
    MR_bool mdb__name_mangle__succeeded;

{
#define MR_PROC_LABEL mdb__name_mangle__high_level_code_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__name_mangle__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle__system_is_osx_0_p_0(void)
{
  {
    MR_bool mdb__name_mangle__succeeded;

{
#define MR_PROC_LABEL mdb__name_mangle__system_is_osx_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__name_mangle__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void)
{
  {
    MR_bool mdb__name_mangle__succeeded;

{
#define MR_PROC_LABEL mdb__name_mangle__use_asm_labels_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__name_mangle__succeeded;
  }
}

MR_String MR_CALL 
mdb__name_mangle__proc_name_mangle_1_f_0(
  MR_Word mdb__name_mangle__MercuryProc_3)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_String mdb__name_mangle__HeadVar__2_2;

{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
    if (mdb__name_mangle__succeeded)
      {
        MR_Word mdb__name_mangle__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 0)));
        MR_Word mdb__name_mangle__Module_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 1)));
        MR_String mdb__name_mangle__Name0_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 2)));
        MR_Integer mdb__name_mangle__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 3)));
        MR_Integer mdb__name_mangle__ModeNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 4)));
        MR_String mdb__name_mangle__ModuleName_12;
        MR_String mdb__name_mangle__LabelName0_13;
        MR_String mdb__name_mangle__LabelName1_14;
        MR_String mdb__name_mangle__PredOrFuncString_15;
        MR_String mdb__name_mangle__ArityString_16;
        MR_String mdb__name_mangle__ModeNumString_17;
        MR_Word mdb__name_mangle__Var_18;
        MR_Word mdb__name_mangle__Var_19;
        MR_Word mdb__name_mangle__Var_21;
        MR_Word mdb__name_mangle__Var_22;
        MR_Word mdb__name_mangle__Var_24;
        MR_Word mdb__name_mangle__Var_25;
        MR_Word mdb__name_mangle__Var_27;

        {
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_8, &mdb__name_mangle__ModuleName_12);
        }
        mdb__name_mangle__succeeded = (mdb__name_mangle__PredOrFunc_7 == (MR_Integer) 0);
        if (mdb__name_mangle__succeeded)
          {
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Name0_9, (MR_String) "main") == 0);
            if (mdb__name_mangle__succeeded)
              mdb__name_mangle__succeeded = (mdb__name_mangle__Arity_10 == (MR_Integer) 2);
          }
        if (mdb__name_mangle__succeeded)
          {
            mdb__name_mangle__LabelName0_13 = mdb__name_mangle__Name0_9;
            mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
          }
        else
          {
            MR_Word mdb__name_mangle__Var_32;
            MR_Word mdb__name_mangle__Var_33;
            MR_Word mdb__name_mangle__Var_35;

            {
              mdb__name_mangle__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_35, 0) = ((MR_Box) (mdb__name_mangle__Name0_9));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__name_mangle__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_33, 0) = ((MR_Box) ((MR_String) "__"));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_33, 1) = ((MR_Box) (mdb__name_mangle__Var_35));
            }
            {
              mdb__name_mangle__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_32, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_12));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_32, 1) = ((MR_Box) (mdb__name_mangle__Var_33));
            }
            {
              mercury__string__append_list_2_p_0(mdb__name_mangle__Var_32, &mdb__name_mangle__LabelName0_13);
            }
            switch (mdb__name_mangle__PredOrFunc_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "f";
                break;
              case (MR_Integer) 0:
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
                break;
            }
          }
        {
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__LabelName0_13, &mdb__name_mangle__LabelName1_14);
        }
        {
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Arity_10, &mdb__name_mangle__ArityString_16);
        }
        {
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ModeNum_11, &mdb__name_mangle__ModeNumString_17);
        }
        {
          mdb__name_mangle__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_27, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_17));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdb__name_mangle__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_25, 0) = ((MR_Box) ((MR_String) "_"));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_25, 1) = ((MR_Box) (mdb__name_mangle__Var_27));
        }
        {
          mdb__name_mangle__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_24, 0) = ((MR_Box) (mdb__name_mangle__PredOrFuncString_15));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_24, 1) = ((MR_Box) (mdb__name_mangle__Var_25));
        }
        {
          mdb__name_mangle__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_22, 0) = ((MR_Box) ((MR_String) "_"));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_22, 1) = ((MR_Box) (mdb__name_mangle__Var_24));
        }
        {
          mdb__name_mangle__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_21, 0) = ((MR_Box) (mdb__name_mangle__ArityString_16));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_21, 1) = ((MR_Box) (mdb__name_mangle__Var_22));
        }
        {
          mdb__name_mangle__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_19, 0) = ((MR_Box) ((MR_String) "_"));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_19, 1) = ((MR_Box) (mdb__name_mangle__Var_21));
        }
        {
          mdb__name_mangle__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_18, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_14));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_18, 1) = ((MR_Box) (mdb__name_mangle__Var_19));
        }
        {
          mercury__string__append_list_2_p_0(mdb__name_mangle__Var_18, &mdb__name_mangle__HeadVar__2_2);
        }
      }
    else
      {
        MR_Word mdb__name_mangle__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 0)));
        MR_Word mdb__name_mangle__Module_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 1)));
        MR_String mdb__name_mangle__Name0_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 2)));
        MR_Integer mdb__name_mangle__Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 3)));
        MR_Integer mdb__name_mangle__ModeNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__name_mangle__MercuryProc_3, (MR_Integer) 4)));
        MR_String mdb__name_mangle__ModuleName_44;
        MR_String mdb__name_mangle__LabelName0_45;
        MR_String mdb__name_mangle__LabelName1_46;
        MR_String mdb__name_mangle__ArityString_47;
        MR_String mdb__name_mangle__ModeNumString_48;
        MR_String mdb__name_mangle__LabelName2_49;
        MR_String mdb__name_mangle__LabelName3_50;
        MR_String mdb__name_mangle__LabelName4_51;
        MR_Word mdb__name_mangle__Var_54;
        MR_Word mdb__name_mangle__Var_55;
        MR_Word mdb__name_mangle__Var_57;
        MR_Word mdb__name_mangle__Var_58;
        MR_Word mdb__name_mangle__Var_60;

        {
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__Module_40, &mdb__name_mangle__ModuleName_44);
        }
        {
          MR_String mdb__name_mangle__Var_53;

          mdb__name_mangle__succeeded = ((MR_tag((MR_Word) mdb__name_mangle__Module_40)) == (MR_mktag((MR_Integer) 1)));
          if (mdb__name_mangle__succeeded)
            {
              mdb__name_mangle__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__Module_40, (MR_Integer) 0)));
              mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Var_53, (MR_String) "builtin") == 0);
            }
        }
        if (!(mdb__name_mangle__succeeded))
          {
            mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__Name0_41, (MR_String) "main") == 0);
            if (mdb__name_mangle__succeeded)
              mdb__name_mangle__succeeded = (mdb__name_mangle__Arity_42 == (MR_Integer) 2);
          }
        if (mdb__name_mangle__succeeded)
          mdb__name_mangle__LabelName0_45 = mdb__name_mangle__Name0_41;
        else
          {
            MR_Word mdb__name_mangle__Var_67;
            MR_Word mdb__name_mangle__Var_68;
            MR_Word mdb__name_mangle__Var_70;

            {
              mdb__name_mangle__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_70, 0) = ((MR_Box) (mdb__name_mangle__Name0_41));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__name_mangle__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_68, 0) = ((MR_Box) ((MR_String) "__"));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_68, 1) = ((MR_Box) (mdb__name_mangle__Var_70));
            }
            {
              mdb__name_mangle__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_67, 0) = ((MR_Box) (mdb__name_mangle__ModuleName_44));
              MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_67, 1) = ((MR_Box) (mdb__name_mangle__Var_68));
            }
            {
              mercury__string__append_list_2_p_0(mdb__name_mangle__Var_67, &mdb__name_mangle__LabelName0_45);
            }
          }
        {
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__LabelName0_45, &mdb__name_mangle__LabelName1_46);
        }
        {
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Arity_42, &mdb__name_mangle__ArityString_47);
        }
        {
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__ModeNum_43, &mdb__name_mangle__ModeNumString_48);
        }
        {
          mdb__name_mangle__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_60, 0) = ((MR_Box) (mdb__name_mangle__ModeNumString_48));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdb__name_mangle__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_58, 0) = ((MR_Box) ((MR_String) "_"));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_58, 1) = ((MR_Box) (mdb__name_mangle__Var_60));
        }
        {
          mdb__name_mangle__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_57, 0) = ((MR_Box) (mdb__name_mangle__ArityString_47));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_57, 1) = ((MR_Box) (mdb__name_mangle__Var_58));
        }
        {
          mdb__name_mangle__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_55, 0) = ((MR_Box) ((MR_String) "_"));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_55, 1) = ((MR_Box) (mdb__name_mangle__Var_57));
        }
        {
          mdb__name_mangle__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_54, 0) = ((MR_Box) (mdb__name_mangle__LabelName1_46));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_54, 1) = ((MR_Box) (mdb__name_mangle__Var_55));
        }
        {
          mercury__string__append_list_2_p_0(mdb__name_mangle__Var_54, &mdb__name_mangle__LabelName2_49);
        }
        switch (mdb__name_mangle__PredOrFunc_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__string__append_3_p_2((MR_String) "fn__", mdb__name_mangle__LabelName2_49, &mdb__name_mangle__LabelName3_50);
              }
            }
            break;
          case (MR_Integer) 0:
            mdb__name_mangle__LabelName3_50 = mdb__name_mangle__LabelName2_49;
            break;
        }
        {
          mercury__string__append_3_p_2((MR_String) "mercury__", mdb__name_mangle__LabelName3_50, &mdb__name_mangle__LabelName4_51);
        }
{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
        if (mdb__name_mangle__succeeded)
          {
            MR_String mdb__name_mangle__EntryPrefix_52;

{
#define MR_PROC_LABEL mdb__name_mangle__proc_name_mangle_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__name_mangle__succeeded  = SUCCESS_INDICATOR;
}
            if (mdb__name_mangle__succeeded)
              mdb__name_mangle__EntryPrefix_52 = (MR_String) "entry_";
            else
              mdb__name_mangle__EntryPrefix_52 = (MR_String) "_entry_";
            {
              mercury__string__append_3_p_2(mdb__name_mangle__EntryPrefix_52, mdb__name_mangle__LabelName4_51, &mdb__name_mangle__HeadVar__2_2);
            }
          }
        else
          mdb__name_mangle__HeadVar__2_2 = mdb__name_mangle__LabelName4_51;
      }
    return mdb__name_mangle__HeadVar__2_2;
  }
}

static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
  MR_Word mdb__name_mangle__HeadVar__1_1,
  MR_String * mdb__name_mangle__MangledName_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    if (((MR_tag((MR_Word) mdb__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdb__name_mangle__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdb__name_mangle__PlainName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mdb__name_mangle__MangledModuleName_8;
        MR_String mdb__name_mangle__MangledPlainName_9;
        MR_Word mdb__name_mangle__Var_13;
        MR_Word mdb__name_mangle__Var_14;
        MR_Word mdb__name_mangle__Var_16;

        {
          mdb__name_mangle__sym_name_mangle_2_p_0(mdb__name_mangle__ModuleName_5, &mdb__name_mangle__MangledModuleName_8);
        }
        {
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__PlainName_6, &mdb__name_mangle__MangledPlainName_9);
        }
        {
          mdb__name_mangle__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_16, 0) = ((MR_Box) (mdb__name_mangle__MangledPlainName_9));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdb__name_mangle__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_14, 0) = ((MR_Box) ((MR_String) "__"));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_14, 1) = ((MR_Box) (mdb__name_mangle__Var_16));
        }
        {
          mdb__name_mangle__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_13, 0) = ((MR_Box) (mdb__name_mangle__MangledModuleName_8));
          MR_hl_field(MR_mktag(1), mdb__name_mangle__Var_13, 1) = ((MR_Box) (mdb__name_mangle__Var_14));
        }
        {
          mercury__string__append_list_2_p_0(mdb__name_mangle__Var_13, mdb__name_mangle__MangledName_2);
        }
      }
    else
      {
        MR_String mdb__name_mangle__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__name_mangle__HeadVar__1_1, (MR_Integer) 0)));

        {
          mdb__name_mangle__name_mangle_2_p_0(mdb__name_mangle__Name_3, mdb__name_mangle__MangledName_2);
        }
      }
  }
}

static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
  MR_String mdb__name_mangle__Name_3,
  MR_String * mdb__name_mangle__MangledName_4)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(mdb__name_mangle__Name_3);
    }
    if (mdb__name_mangle__succeeded)
      {
        MR_String mdb__name_mangle__Suffix_5;

        {
          mdb__name_mangle__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &mdb__name_mangle__Suffix_5, mdb__name_mangle__Name_3);
        }
        if (mdb__name_mangle__succeeded)
          {
            {
              mercury__string__append_3_p_2((MR_String) "f__", mdb__name_mangle__Suffix_5, mdb__name_mangle__MangledName_4);
            }
          }
        else
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name_3;
      }
    else
      {
        MR_String mdb__name_mangle__Name0_10;
        MR_Integer mdb__name_mangle__slot_0;
        MR_String mdb__name_mangle__str_1;

        /* hashed string simple lookup switch */
        /* compute the hash value of the input string */
        mdb__name_mangle__slot_0 = ((MR_hash_string5(mdb__name_mangle__Name_3)) & (MR_Integer) 63);
        /* no collisions; no hash chain loop */
        /* lookup the string for this hash slot */
        mdb__name_mangle__str_1 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
        /* did we find a match? */
        if ((((mdb__name_mangle__str_1 != NULL)) && ((strcmp(mdb__name_mangle__str_1, mdb__name_mangle__Name_3) == 0))))
          {
            /* we found a match; look up the results */
            mdb__name_mangle__Name0_10 = ((&mdb__name_mangle_vector_common_1[0 + mdb__name_mangle__slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
            mdb__name_mangle__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        mdb__name_mangle__succeeded = MR_FALSE;
      label_0:;
        if (mdb__name_mangle__succeeded)
          *mdb__name_mangle__MangledName_4 = mdb__name_mangle__Name0_10;
        else
          {
            MR_String mdb__name_mangle__Name0_12;

            {
              mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Name_3, &mdb__name_mangle__Name0_12);
            }
            {
              mercury__string__append_3_p_2((MR_String) "f", mdb__name_mangle__Name0_12, mdb__name_mangle__MangledName_4);
            }
          }
      }
  }
}

static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
  MR_String mdb__name_mangle__String_3,
  MR_String * mdb__name_mangle__Name_4)
{
  {
    MR_bool mdb__name_mangle__succeeded;
    MR_Char mdb__name_mangle__Char_5;
    MR_String mdb__name_mangle__Rest_6;

    {
      mdb__name_mangle__succeeded = mercury__string__first_char_3_p_3(mdb__name_mangle__String_3, &mdb__name_mangle__Char_5, &mdb__name_mangle__Rest_6);
    }
    if (mdb__name_mangle__succeeded)
      {
        MR_Integer mdb__name_mangle__Code_7;
        MR_String mdb__name_mangle__CodeString_8;
        MR_String mdb__name_mangle__ThisCharString_9;
        MR_String mdb__name_mangle__Name0_10;

        {
          mercury__char__to_int_2_p_0(mdb__name_mangle__Char_5, &mdb__name_mangle__Code_7);
        }
        {
          mercury__string__int_to_string_2_p_0(mdb__name_mangle__Code_7, &mdb__name_mangle__CodeString_8);
        }
        {
          mercury__string__append_3_p_2((MR_String) "_", mdb__name_mangle__CodeString_8, &mdb__name_mangle__ThisCharString_9);
        }
        {
          mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(mdb__name_mangle__Rest_6, &mdb__name_mangle__Name0_10);
        }
        {
          mercury__string__append_3_p_2(mdb__name_mangle__ThisCharString_9, mdb__name_mangle__Name0_10, mdb__name_mangle__Name_4);
        }
      }
    else
      *mdb__name_mangle__Name_4 = mdb__name_mangle__String_3;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____arity_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
    return mdb__name_mangle__succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3)
{
  {
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

    {
      mdb__name_mangle____Compare____arity_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____is_pred_or_func_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
    return mdb__name_mangle__succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3)
{
  {
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

    {
      mdb__name_mangle____Compare____is_pred_or_func_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mercury_proc_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
    return mdb__name_mangle__succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3)
{
  {
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

    {
      mdb__name_mangle____Compare____mercury_proc_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mode_num_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
    return mdb__name_mangle__succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3)
{
  {
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

    {
      mdb__name_mangle____Compare____mode_num_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____module_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
    return mdb__name_mangle__succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3)
{
  {
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

    {
      mdb__name_mangle____Compare____module_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____pred_name_0_0(((MR_String) mdb__name_mangle__wrapper_arg_1), ((MR_String) mdb__name_mangle__wrapper_arg_2));
    }
    return mdb__name_mangle__succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3)
{
  {
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

    {
      mdb__name_mangle____Compare____pred_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_String) mdb__name_mangle__wrapper_arg_2), ((MR_String) mdb__name_mangle__wrapper_arg_3));
    }
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
  MR_Box mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2)
{
  {
    MR_bool mdb__name_mangle__succeeded;

    {
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
    return mdb__name_mangle__succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
  MR_Box * mdb__name_mangle__wrapper_arg_1,
  MR_Box mdb__name_mangle__wrapper_arg_2,
  MR_Box mdb__name_mangle__wrapper_arg_3)
{
  {
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

    {
      mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__name_mangle__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdb.name_mangle. */
