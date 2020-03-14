/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2020-03-14
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mdb.name_mangle.
// :- implementation.

/*
INIT mercury__mdb__name_mangle__init
ENDINIT
*/

#include "mdb.name_mangle.mih"


#include "mdb.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0;

static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1;

static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2];

static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2];

static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2];

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5];

static const MR_DuArgLocn mdb__name_mangle__mdb__name_mangle__field_locns_mercury_proc_0_0[5];

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
  MR_Word HeadVar__1_1,
  MR_String * MangledName_2);

static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
  MR_String Name_3,
  MR_String * MangledName_4);

static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
  MR_String String_3,
  MR_String * Name_4);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);



/* sealed */ struct mdb__name_mangle__vector_common_type_1_0_s {
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;
  const MR_String mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
};

static /* final */ const struct mdb__name_mangle__vector_common_type_1_0_s mdb__name_mangle_vector_common_1[64];




static /* final */ const struct mdb__name_mangle__vector_common_type_1_0_s mdb__name_mangle_vector_common_1[64] = {
  /* row 0 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 1 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 2 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 3 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 5 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 8 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    (MR_String) "\\=",
    (MR_String) "f_not_equal"
  },
  /* row 12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    (MR_String) "=<",
    (MR_String) "f_less_or_equal"
  },
  /* row 16 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 17 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 18 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 19 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 21 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 22 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 23 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 24 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 25 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 27 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 29 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 30 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 31 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 32 */
  {
    (MR_String) "!",
    (MR_String) "f_cut"
  },
  /* row 33 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 34 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 35 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 36 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 37 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 38 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 39 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 40 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 41 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
    (MR_String) ((MR_Integer) 0)
  },
  /* row 48 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 49 */
  {
    (MR_String) ">=",
    (MR_String) "f_greater_or_equal"
  },
  /* row 50 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 51 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 52 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 53 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 54 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 55 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 56 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 57 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 58 */
  {
    (MR_String) ";",
    (MR_String) "f_semicolon"
  },
  /* row 59 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
    (MR_String) ((MR_Integer) 0)
  },
  /* row 63 */
  {
    (MR_String) ">",
    (MR_String) "f_greater_than"
  },
};


#include "mdb.mh"
#include "string.mh"
#include "mdb.name_mangle.mh"



const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____arity_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "arity",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0 = {
  (MR_String) "predicate",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1 = {
  (MR_String) "function",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__name_mangle____Unify____is_pred_or_func_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____is_pred_or_func_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "is_pred_or_func",
  {     mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0 },
  {     mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0
};

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5] = {
  (MR_PseudoTypeInfo) (&mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn mdb__name_mangle__mdb__name_mangle__field_locns_mercury_proc_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0 = {
  (MR_String) "mercury_proc",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0,
  NULL,
  mdb__name_mangle__mdb__name_mangle__field_locns_mercury_proc_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__name_mangle____Unify____mercury_proc_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____mercury_proc_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "mercury_proc",
  {     mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0 },
  {     mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0
};

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_mode_num_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____mode_num_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____mode_num_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "mode_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_module_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____module_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____module_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "module_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_pred_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____pred_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____pred_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "pred_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0 = {
  (MR_String) "qualified",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1 = {
  (MR_String) "unqualified",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0
};

static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__name_mangle____Unify____sym_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____sym_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "sym_name",
  {     mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0 },
  {     mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0
};

void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mdb__name_mangle____Compare____sym_name_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mdb__name_mangle____Unify____sym_name_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;
      MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_25 < Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_25 > Var_26);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mdb__name_mangle____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              succeeded = (ArgX5_16 < ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX5_16 > ArgY5_17);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;

        mdb__name_mangle____Compare____sym_name_0_0(&SubResult1_6, Var_23, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_22, ArgY2_8);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_String Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_24, ArgY1_16);
      }
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = mdb__name_mangle____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mdb__name_mangle____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      }
    }
    else
    {
      MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__name_mangle____Compare____arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle__high_level_code_0_p_0(void)
{
  {
    MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle__system_is_osx_0_p_0(void)
{
  {
    MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle__use_asm_labels_0_p_0(void)
{
  {
    MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_String MR_CALL 
mdb__name_mangle__proc_name_mangle_1_f_0(
  MR_Word MercuryProc_3)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Module_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 1))));
      MR_String Name0_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 2))));
      MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 3))));
      MR_Integer ModeNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 4))));
      MR_String ModuleName_12;
      MR_String LabelName0_13;
      MR_String LabelName1_14;
      MR_String PredOrFuncString_15;
      MR_String ArityString_16;
      MR_String ModeNumString_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_27;

      mdb__name_mangle__sym_name_mangle_2_p_0(Module_8, &ModuleName_12);
      succeeded = (PredOrFunc_7 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (strcmp(Name0_9, (MR_String) "main") == 0);
        if (succeeded)
          succeeded = (Arity_10 == (MR_Integer) 2);
      }
      if (succeeded)
      {
        LabelName0_13 = Name0_9;
        PredOrFuncString_15 = (MR_String) "p";
      }
      else
      {
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_35;

        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Name0_9));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_String) "__"));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ModuleName_12));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
        }
        mercury__string__append_list_2_p_0(Var_32, &LabelName0_13);
        switch (PredOrFunc_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PredOrFuncString_15 = (MR_String) "f";
            break;
          case (MR_Integer) 0:
            PredOrFuncString_15 = (MR_String) "p";
            break;
        }
      }
      mdb__name_mangle__name_mangle_2_p_0(LabelName0_13, &LabelName1_14);
      mercury__string__int_to_string_2_p_0(Arity_10, &ArityString_16);
      mercury__string__int_to_string_2_p_0(ModeNum_11, &ModeNumString_17);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ModeNumString_17));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (PredOrFuncString_15));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (ArityString_16));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (LabelName1_14));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
      }
      mercury__string__append_list_2_p_0(Var_18, &HeadVar__2_2);
    }
    else
    {
      MR_Word PredOrFunc_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Module_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 1))));
      MR_String Name0_41 = ((MR_String) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 2))));
      MR_Integer Arity_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 3))));
      MR_Integer ModeNum_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MercuryProc_3, (MR_Integer) 4))));
      MR_String ModuleName_44;
      MR_String LabelName0_45;
      MR_String LabelName1_46;
      MR_String ArityString_47;
      MR_String ModeNumString_48;
      MR_String LabelName2_49;
      MR_String LabelName3_50;
      MR_String LabelName4_51;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_60;

      mdb__name_mangle__sym_name_mangle_2_p_0(Module_40, &ModuleName_44);
      {
        MR_String Var_53;

        succeeded = ((MR_tag((MR_Word) Module_40)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(MR_mktag(1), Module_40, (MR_Integer) 0))));
          succeeded = (strcmp(Var_53, (MR_String) "builtin") == 0);
        }
      }
      if (!(succeeded))
      {
        succeeded = (strcmp(Name0_41, (MR_String) "main") == 0);
        if (succeeded)
          succeeded = (Arity_42 == (MR_Integer) 2);
      }
      if (succeeded)
        LabelName0_45 = Name0_41;
      else
      {
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_70;

        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Name0_41));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "__"));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ModuleName_44));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
        }
        mercury__string__append_list_2_p_0(Var_67, &LabelName0_45);
      }
      mdb__name_mangle__name_mangle_2_p_0(LabelName0_45, &LabelName1_46);
      mercury__string__int_to_string_2_p_0(Arity_42, &ArityString_47);
      mercury__string__int_to_string_2_p_0(ModeNum_43, &ModeNumString_48);
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ModeNumString_48));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ArityString_47));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LabelName1_46));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
      }
      mercury__string__append_list_2_p_0(Var_54, &LabelName2_49);
      switch (PredOrFunc_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__string__append_3_p_2((MR_String) "fn__", LabelName2_49, &LabelName3_50);
          break;
        case (MR_Integer) 0:
          LabelName3_50 = LabelName2_49;
          break;
      }
      mercury__string__append_3_p_2((MR_String) "mercury__", LabelName3_50, &LabelName4_51);
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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        MR_String EntryPrefix_52;

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
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          EntryPrefix_52 = (MR_String) "entry_";
        else
          EntryPrefix_52 = (MR_String) "_entry_";
        mercury__string__append_3_p_2(EntryPrefix_52, LabelName4_51, &HeadVar__2_2);
      }
      else
        HeadVar__2_2 = LabelName4_51;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mdb__name_mangle__sym_name_mangle_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * MangledName_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String PlainName_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String MangledModuleName_8;
    MR_String MangledPlainName_9;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;

    mdb__name_mangle__sym_name_mangle_2_p_0(ModuleName_5, &MangledModuleName_8);
    mdb__name_mangle__name_mangle_2_p_0(PlainName_6, &MangledPlainName_9);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MangledPlainName_9));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "__"));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MangledModuleName_8));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_14));
    }
    mercury__string__append_list_2_p_0(Var_13, MangledName_2);
  }
  else
  {
    MR_String Name_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    mdb__name_mangle__name_mangle_2_p_0(Name_3, MangledName_2);
  }
}

static void MR_CALL 
mdb__name_mangle__name_mangle_2_p_0(
  MR_String Name_3,
  MR_String * MangledName_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(Name_3);
    if (succeeded)
    {
      MR_String Suffix_5;

      succeeded = mercury__string__append_3_p_1((MR_String) "f_", &Suffix_5, Name_3);
      if (succeeded)
        mercury__string__append_3_p_2((MR_String) "f__", Suffix_5, MangledName_4);
      else
        *MangledName_4 = Name_3;
    }
    else
    {
      MR_String Name0_10;
      MR_Integer slot_0 = ((MR_hash_string5(Name_3)) & (MR_Integer) 63);
      MR_String str_1 = ((&mdb__name_mangle_vector_common_1[0 + slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_0;

      // hashed string simple lookup switch
      ;
      // compute the hash value of the input string
      ;
      // no collisions; no hash chain loop
      ;
      // lookup the string for this hash slot
      ;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, Name_3) == 0))))
      {
        // we found a match; look up the results
        ;
        Name0_10 = ((&mdb__name_mangle_vector_common_1[0 + slot_0]))->mdb__name_mangle__vector_common_type_1_0__vct_1_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      succeeded = MR_FALSE;
    label_0:;
      if (succeeded)
        *MangledName_4 = Name0_10;
      else
      {
        MR_String Name0_12;

        mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(Name_3, &Name0_12);
        mercury__string__append_3_p_2((MR_String) "f", Name0_12, MangledName_4);
      }
    }
  }
}

static void MR_CALL 
mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(
  MR_String String_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded;
    MR_Char Char_5;
    MR_String Rest_6;

    succeeded = mercury__string__first_char_3_p_3(String_3, &Char_5, &Rest_6);
    if (succeeded)
    {
      MR_Integer Code_7;
      MR_String CodeString_8;
      MR_String ThisCharString_9;
      MR_String Name0_10;

      mercury__char__to_int_2_p_0(Char_5, &Code_7);
      mercury__string__int_to_string_2_p_0(Code_7, &CodeString_8);
      mercury__string__append_3_p_2((MR_String) "_", CodeString_8, &ThisCharString_9);
      mdb__name_mangle__convert_to_valid_c_identifier_2_2_p_0(Rest_6, &Name0_10);
      mercury__string__append_3_p_2(ThisCharString_9, Name0_10, Name_4);
    }
    else
      *Name_4 = String_3;
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__name_mangle____Unify____arity_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__name_mangle____Compare____arity_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__name_mangle____Unify____is_pred_or_func_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__name_mangle____Compare____is_pred_or_func_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__name_mangle____Unify____mercury_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__name_mangle____Compare____mercury_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__name_mangle____Unify____mode_num_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__name_mangle____Compare____mode_num_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__name_mangle____Unify____module_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__name_mangle____Compare____module_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__name_mangle____Unify____pred_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__name_mangle____Compare____pred_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__name_mangle____Unify____sym_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__name_mangle____Compare____sym_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mdb.name_mangle.
