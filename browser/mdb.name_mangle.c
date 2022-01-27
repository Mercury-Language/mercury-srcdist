/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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




#line 67 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0;

#line 70 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1;

#line 73 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2];

#line 76 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2];

#line 79 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2];

#line 82 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5];

#line 85 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0;

#line 88 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1];

#line 91 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1];

#line 94 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1];

#line 97 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1];

#line 100 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2];

#line 103 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0;

#line 106 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1];

#line 109 "mdb.name_mangle.c"
static const MR_DuFunctorDesc mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1;

#line 112 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1];

#line 115 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1];

#line 118 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0[2];

#line 121 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2];

#line 124 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2];

#line 127 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 130 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 132 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 135 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 138 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 140 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 142 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 145 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 148 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 150 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 153 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 156 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 158 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 160 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 163 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 166 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 168 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 171 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 174 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 176 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 178 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 181 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 184 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 186 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 189 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 192 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 194 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 196 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 199 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 202 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 204 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 207 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 210 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 212 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 214 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 217 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 220 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 222 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 225 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 228 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 230 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 232 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3);

#line 235 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 238 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 240 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2);

#line 243 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 246 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 248 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 250 "mdb.name_mangle.c"
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



#line 306 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____arity_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "arity",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 327 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 0
};

#line 333 "mdb.name_mangle.c"
static const MR_EnumFunctorDesc mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1 = {
  (MR_String) "function",
  (MR_Integer) 1
};

#line 339 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1
};

#line 345 "mdb.name_mangle.c"
static const MR_EnumFunctorDescPtr mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1,
  &mdb__name_mangle__mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0
};

#line 351 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 357 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__name_mangle____Unify____is_pred_or_func_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____is_pred_or_func_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "is_pred_or_func",
  {
    mdb__name_mangle__mdb__name_mangle__enum_name_ordered_is_pred_or_func_0
  },
  {
    mdb__name_mangle__mdb__name_mangle__enum_value_ordered_is_pred_or_func_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__name_mangle__mdb__name_mangle__functor_number_map_is_pred_or_func_0
};

#line 378 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_mercury_proc_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 387 "mdb.name_mangle.c"
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

#line 402 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 407 "mdb.name_mangle.c"
static const MR_DuPtagLayout mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__name_mangle__mdb__name_mangle__du_stag_ordered_mercury_proc_0_0
  }
};

#line 416 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

#line 421 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0[1] = {
  (MR_Integer) 0
};

#line 426 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_mercury_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__name_mangle____Unify____mercury_proc_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____mercury_proc_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "mercury_proc",
  {
    mdb__name_mangle__mdb__name_mangle__du_name_ordered_mercury_proc_0
  },
  {
    mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_mercury_proc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__name_mangle__mdb__name_mangle__functor_number_map_mercury_proc_0
};

#line 447 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_mode_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____mode_num_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____mode_num_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "mode_num",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 468 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_module_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____module_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____module_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "module_name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 489 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_pred_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__name_mangle____Unify____pred_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____pred_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "pred_name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 510 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 516 "mdb.name_mangle.c"
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

#line 531 "mdb.name_mangle.c"
static const MR_PseudoTypeInfo mdb__name_mangle__mdb__name_mangle__field_types_sym_name_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 536 "mdb.name_mangle.c"
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

#line 551 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_0[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0
};

#line 556 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_stag_ordered_sym_name_0_1[1] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 561 "mdb.name_mangle.c"
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

#line 575 "mdb.name_mangle.c"
static const MR_DuFunctorDescPtr mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0[2] = {
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_0,
  &mdb__name_mangle__mdb__name_mangle__du_functor_desc_sym_name_0_1
};

#line 581 "mdb.name_mangle.c"
static const MR_Integer mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 587 "mdb.name_mangle.c"
const MR_TypeCtorInfo_Struct mdb__name_mangle__mdb__name_mangle__type_ctor_info_sym_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__name_mangle____Unify____sym_name_0_0_10001)),
  ((MR_Box) (mdb__name_mangle____Compare____sym_name_0_0_10001)),
  (MR_String) "mdb.name_mangle",
  (MR_String) "sym_name",
  {
    mdb__name_mangle__mdb__name_mangle__du_name_ordered_sym_name_0
  },
  {
    mdb__name_mangle__mdb__name_mangle__du_ptag_ordered_sym_name_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__name_mangle__mdb__name_mangle__functor_number_map_sym_name_0
};

#line 608 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____arity_0_0_10001(
#line 611 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 613 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 615 "mdb.name_mangle.c"
{
#line 617 "mdb.name_mangle.c"
  {
#line 619 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 622 "mdb.name_mangle.c"
    {
#line 624 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____arity_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 627 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 629 "mdb.name_mangle.c"
  }
#line 631 "mdb.name_mangle.c"
}

#line 634 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____arity_0_0_10001(
#line 637 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 639 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 641 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 643 "mdb.name_mangle.c"
{
#line 645 "mdb.name_mangle.c"
  {
#line 647 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 650 "mdb.name_mangle.c"
    {
#line 652 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____arity_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 655 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 657 "mdb.name_mangle.c"
  }
#line 659 "mdb.name_mangle.c"
}

#line 662 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____is_pred_or_func_0_0_10001(
#line 665 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 667 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 669 "mdb.name_mangle.c"
{
#line 671 "mdb.name_mangle.c"
  {
#line 673 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 676 "mdb.name_mangle.c"
    {
#line 678 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____is_pred_or_func_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 681 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 683 "mdb.name_mangle.c"
  }
#line 685 "mdb.name_mangle.c"
}

#line 688 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____is_pred_or_func_0_0_10001(
#line 691 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 693 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 695 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 697 "mdb.name_mangle.c"
{
#line 699 "mdb.name_mangle.c"
  {
#line 701 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 704 "mdb.name_mangle.c"
    {
#line 706 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____is_pred_or_func_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 709 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 711 "mdb.name_mangle.c"
  }
#line 713 "mdb.name_mangle.c"
}

#line 716 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mercury_proc_0_0_10001(
#line 719 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 721 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 723 "mdb.name_mangle.c"
{
#line 725 "mdb.name_mangle.c"
  {
#line 727 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 730 "mdb.name_mangle.c"
    {
#line 732 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mercury_proc_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 735 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 737 "mdb.name_mangle.c"
  }
#line 739 "mdb.name_mangle.c"
}

#line 742 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mercury_proc_0_0_10001(
#line 745 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 747 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 749 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 751 "mdb.name_mangle.c"
{
#line 753 "mdb.name_mangle.c"
  {
#line 755 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 758 "mdb.name_mangle.c"
    {
#line 760 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mercury_proc_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 763 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 765 "mdb.name_mangle.c"
  }
#line 767 "mdb.name_mangle.c"
}

#line 770 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____mode_num_0_0_10001(
#line 773 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 775 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 777 "mdb.name_mangle.c"
{
#line 779 "mdb.name_mangle.c"
  {
#line 781 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 784 "mdb.name_mangle.c"
    {
#line 786 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____mode_num_0_0(((MR_Integer) mdb__name_mangle__wrapper_arg_1), ((MR_Integer) mdb__name_mangle__wrapper_arg_2));
    }
#line 789 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 791 "mdb.name_mangle.c"
  }
#line 793 "mdb.name_mangle.c"
}

#line 796 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____mode_num_0_0_10001(
#line 799 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 801 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 803 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 805 "mdb.name_mangle.c"
{
#line 807 "mdb.name_mangle.c"
  {
#line 809 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 812 "mdb.name_mangle.c"
    {
#line 814 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____mode_num_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Integer) mdb__name_mangle__wrapper_arg_2), ((MR_Integer) mdb__name_mangle__wrapper_arg_3));
    }
#line 817 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 819 "mdb.name_mangle.c"
  }
#line 821 "mdb.name_mangle.c"
}

#line 824 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____module_name_0_0_10001(
#line 827 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 829 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 831 "mdb.name_mangle.c"
{
#line 833 "mdb.name_mangle.c"
  {
#line 835 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 838 "mdb.name_mangle.c"
    {
#line 840 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____module_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 843 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 845 "mdb.name_mangle.c"
  }
#line 847 "mdb.name_mangle.c"
}

#line 850 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____module_name_0_0_10001(
#line 853 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 855 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 857 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 859 "mdb.name_mangle.c"
{
#line 861 "mdb.name_mangle.c"
  {
#line 863 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 866 "mdb.name_mangle.c"
    {
#line 868 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____module_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 871 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 873 "mdb.name_mangle.c"
  }
#line 875 "mdb.name_mangle.c"
}

#line 878 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____pred_name_0_0_10001(
#line 881 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 883 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 885 "mdb.name_mangle.c"
{
#line 887 "mdb.name_mangle.c"
  {
#line 889 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 892 "mdb.name_mangle.c"
    {
#line 894 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____pred_name_0_0(((MR_String) mdb__name_mangle__wrapper_arg_1), ((MR_String) mdb__name_mangle__wrapper_arg_2));
    }
#line 897 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 899 "mdb.name_mangle.c"
  }
#line 901 "mdb.name_mangle.c"
}

#line 904 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____pred_name_0_0_10001(
#line 907 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 909 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 911 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 913 "mdb.name_mangle.c"
{
#line 915 "mdb.name_mangle.c"
  {
#line 917 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 920 "mdb.name_mangle.c"
    {
#line 922 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____pred_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_String) mdb__name_mangle__wrapper_arg_2), ((MR_String) mdb__name_mangle__wrapper_arg_3));
    }
#line 925 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 927 "mdb.name_mangle.c"
  }
#line 929 "mdb.name_mangle.c"
}

#line 932 "mdb.name_mangle.c"
static MR_bool MR_CALL 
mdb__name_mangle____Unify____sym_name_0_0_10001(
#line 935 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_1,
#line 937 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2)
#line 939 "mdb.name_mangle.c"
{
#line 941 "mdb.name_mangle.c"
  {
#line 943 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded;

#line 946 "mdb.name_mangle.c"
    {
#line 948 "mdb.name_mangle.c"
      mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(((MR_Word) mdb__name_mangle__wrapper_arg_1), ((MR_Word) mdb__name_mangle__wrapper_arg_2));
    }
#line 951 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 953 "mdb.name_mangle.c"
  }
#line 955 "mdb.name_mangle.c"
}

#line 958 "mdb.name_mangle.c"
static void MR_CALL 
mdb__name_mangle____Compare____sym_name_0_0_10001(
#line 961 "mdb.name_mangle.c"
  MR_Box * mdb__name_mangle__wrapper_arg_1,
#line 963 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_2,
#line 965 "mdb.name_mangle.c"
  MR_Box mdb__name_mangle__wrapper_arg_3)
#line 967 "mdb.name_mangle.c"
{
#line 969 "mdb.name_mangle.c"
  {
#line 971 "mdb.name_mangle.c"
    MR_Word mdb__name_mangle__conv0_HeadVar__1_1;

#line 974 "mdb.name_mangle.c"
    {
#line 976 "mdb.name_mangle.c"
      mdb__name_mangle____Compare____sym_name_0_0(&mdb__name_mangle__conv0_HeadVar__1_1, ((MR_Word) mdb__name_mangle__wrapper_arg_2), ((MR_Word) mdb__name_mangle__wrapper_arg_3));
    }
#line 979 "mdb.name_mangle.c"
    *mdb__name_mangle__wrapper_arg_1 = ((MR_Box) (mdb__name_mangle__conv0_HeadVar__1_1));
#line 981 "mdb.name_mangle.c"
  }
#line 983 "mdb.name_mangle.c"
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
#line 1010 "mdb.name_mangle.c"
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
#line 1039 "mdb.name_mangle.c"
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
#line 1060 "mdb.name_mangle.c"
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
#line 1073 "mdb.name_mangle.c"
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
#line 1147 "mdb.name_mangle.c"
              {
#line 1149 "mdb.name_mangle.c"
                mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_3_3, mdb__name_mangle__V_5_5);
              }
#line 53 "name_mangle.m"
              if (mdb__name_mangle__succeeded)
#line 1154 "mdb.name_mangle.c"
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
#line 1177 "mdb.name_mangle.c"
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
#line 1394 "mdb.name_mangle.c"
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
#line 1432 "mdb.name_mangle.c"
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
#line 1452 "mdb.name_mangle.c"
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
#line 1472 "mdb.name_mangle.c"
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
#line 1492 "mdb.name_mangle.c"
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

#line 1571 "mdb.name_mangle.c"
        mdb__name_mangle__succeeded = (mdb__name_mangle__V_3_3 == mdb__name_mangle__V_8_8);
#line 38 "name_mangle.m"
        if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
          {
#line 1577 "mdb.name_mangle.c"
            {
#line 1579 "mdb.name_mangle.c"
              mdb__name_mangle__succeeded = mdb__name_mangle____Unify____sym_name_0_0(mdb__name_mangle__V_4_4, mdb__name_mangle__V_9_9);
            }
#line 38 "name_mangle.m"
            if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
              {
#line 1586 "mdb.name_mangle.c"
                mdb__name_mangle__succeeded = (strcmp(mdb__name_mangle__V_5_5, mdb__name_mangle__V_10_10) == 0);
#line 38 "name_mangle.m"
                if (mdb__name_mangle__succeeded)
#line 38 "name_mangle.m"
                  {
#line 1592 "mdb.name_mangle.c"
                    mdb__name_mangle__succeeded = (mdb__name_mangle__V_6_6 == mdb__name_mangle__V_11_11);
#line 38 "name_mangle.m"
                    if (mdb__name_mangle__succeeded)
#line 1596 "mdb.name_mangle.c"
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
#line 1654 "mdb.name_mangle.c"
  {
#line 1656 "mdb.name_mangle.c"
    MR_bool mdb__name_mangle__succeeded = (mdb__name_mangle__HeadVar__2_1 == mdb__name_mangle__HeadVar__2_2);

#line 1659 "mdb.name_mangle.c"
    return mdb__name_mangle__succeeded;
#line 1661 "mdb.name_mangle.c"
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

#line 1750 "mdb.name_mangle.c"

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

#line 1791 "mdb.name_mangle.c"

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
        if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "!") == 0))
#line 225 "name_mangle.m"
          {
#line 225 "name_mangle.m"
            mdb__name_mangle__Name0_10 = (MR_String) "f_cut";
#line 225 "name_mangle.m"
            mdb__name_mangle__succeeded = MR_TRUE;
#line 225 "name_mangle.m"
          }
#line 213 "name_mangle.m"
        else
#line 213 "name_mangle.m"
          if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "*") == 0))
#line 221 "name_mangle.m"
            {
#line 221 "name_mangle.m"
              mdb__name_mangle__Name0_10 = (MR_String) "f_times";
#line 221 "name_mangle.m"
              mdb__name_mangle__succeeded = MR_TRUE;
#line 221 "name_mangle.m"
            }
#line 213 "name_mangle.m"
          else
#line 213 "name_mangle.m"
            if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "+") == 0))
#line 220 "name_mangle.m"
              {
#line 220 "name_mangle.m"
                mdb__name_mangle__Name0_10 = (MR_String) "f_plus";
#line 220 "name_mangle.m"
                mdb__name_mangle__succeeded = MR_TRUE;
#line 220 "name_mangle.m"
              }
#line 213 "name_mangle.m"
            else
#line 213 "name_mangle.m"
              if ((strcmp(mdb__name_mangle__Name_3, (MR_String) ",") == 0))
#line 223 "name_mangle.m"
                {
#line 223 "name_mangle.m"
                  mdb__name_mangle__Name0_10 = (MR_String) "f_comma";
#line 223 "name_mangle.m"
                  mdb__name_mangle__succeeded = MR_TRUE;
#line 223 "name_mangle.m"
                }
#line 213 "name_mangle.m"
              else
#line 213 "name_mangle.m"
                if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "-") == 0))
#line 219 "name_mangle.m"
                  {
#line 219 "name_mangle.m"
                    mdb__name_mangle__Name0_10 = (MR_String) "f_minus";
#line 219 "name_mangle.m"
                    mdb__name_mangle__succeeded = MR_TRUE;
#line 219 "name_mangle.m"
                  }
#line 213 "name_mangle.m"
                else
#line 213 "name_mangle.m"
                  if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "/") == 0))
#line 222 "name_mangle.m"
                    {
#line 222 "name_mangle.m"
                      mdb__name_mangle__Name0_10 = (MR_String) "f_slash";
#line 222 "name_mangle.m"
                      mdb__name_mangle__succeeded = MR_TRUE;
#line 222 "name_mangle.m"
                    }
#line 213 "name_mangle.m"
                  else
#line 213 "name_mangle.m"
                    if ((strcmp(mdb__name_mangle__Name_3, (MR_String) ";") == 0))
#line 224 "name_mangle.m"
                      {
#line 224 "name_mangle.m"
                        mdb__name_mangle__Name0_10 = (MR_String) "f_semicolon";
#line 224 "name_mangle.m"
                        mdb__name_mangle__succeeded = MR_TRUE;
#line 224 "name_mangle.m"
                      }
#line 213 "name_mangle.m"
                    else
#line 213 "name_mangle.m"
                      if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "<") == 0))
#line 217 "name_mangle.m"
                        {
#line 217 "name_mangle.m"
                          mdb__name_mangle__Name0_10 = (MR_String) "f_less_than";
#line 217 "name_mangle.m"
                          mdb__name_mangle__succeeded = MR_TRUE;
#line 217 "name_mangle.m"
                        }
#line 213 "name_mangle.m"
                      else
#line 213 "name_mangle.m"
                        if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "=") == 0))
#line 216 "name_mangle.m"
                          {
#line 216 "name_mangle.m"
                            mdb__name_mangle__Name0_10 = (MR_String) "f_equal";
#line 216 "name_mangle.m"
                            mdb__name_mangle__succeeded = MR_TRUE;
#line 216 "name_mangle.m"
                          }
#line 213 "name_mangle.m"
                        else
#line 213 "name_mangle.m"
                          if ((strcmp(mdb__name_mangle__Name_3, (MR_String) ">") == 0))
#line 218 "name_mangle.m"
                            {
#line 218 "name_mangle.m"
                              mdb__name_mangle__Name0_10 = (MR_String) "f_greater_than";
#line 218 "name_mangle.m"
                              mdb__name_mangle__succeeded = MR_TRUE;
#line 218 "name_mangle.m"
                            }
#line 213 "name_mangle.m"
                          else
#line 213 "name_mangle.m"
                            if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "=<") == 0))
#line 215 "name_mangle.m"
                              {
#line 215 "name_mangle.m"
                                mdb__name_mangle__Name0_10 = (MR_String) "f_less_or_equal";
#line 215 "name_mangle.m"
                                mdb__name_mangle__succeeded = MR_TRUE;
#line 215 "name_mangle.m"
                              }
#line 213 "name_mangle.m"
                            else
#line 213 "name_mangle.m"
                              if ((strcmp(mdb__name_mangle__Name_3, (MR_String) ">=") == 0))
#line 214 "name_mangle.m"
                                {
#line 214 "name_mangle.m"
                                  mdb__name_mangle__Name0_10 = (MR_String) "f_greater_or_equal";
#line 214 "name_mangle.m"
                                  mdb__name_mangle__succeeded = MR_TRUE;
#line 214 "name_mangle.m"
                                }
#line 213 "name_mangle.m"
                              else
#line 213 "name_mangle.m"
                                if ((strcmp(mdb__name_mangle__Name_3, (MR_String) "\\=") == 0))
#line 213 "name_mangle.m"
                                  {
#line 213 "name_mangle.m"
                                    mdb__name_mangle__Name0_10 = (MR_String) "f_not_equal";
#line 213 "name_mangle.m"
                                    mdb__name_mangle__succeeded = MR_TRUE;
#line 213 "name_mangle.m"
                                  }
#line 213 "name_mangle.m"
                                else
#line 213 "name_mangle.m"
                                  mdb__name_mangle__succeeded = MR_FALSE;
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

#line 2260 "mdb.name_mangle.c"

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
#line 2331 "mdb.name_mangle.c"
        if (mdb__name_mangle__succeeded)
#line 2333 "mdb.name_mangle.c"
          {
#line 138 "name_mangle.m"
            mdb__name_mangle__LabelName0_13 = mdb__name_mangle__Name0_9;
#line 145 "name_mangle.m"
            mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 146 "name_mangle.m"
            mdb__name_mangle__ArityAsPred_16 = mdb__name_mangle__Arity_10;
#line 2341 "mdb.name_mangle.c"
          }
#line 2343 "mdb.name_mangle.c"
        else
#line 2345 "mdb.name_mangle.c"
          {
#line 2347 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_34_34;
#line 2349 "mdb.name_mangle.c"
            MR_Word mdb__name_mangle__V_35_35;
#line 2351 "mdb.name_mangle.c"
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
            if ((mdb__name_mangle__PredOrFunc_7 == (MR_Integer) 1))
#line 148 "name_mangle.m"
              {
#line 149 "name_mangle.m"
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "f";
#line 150 "name_mangle.m"
                mdb__name_mangle__ArityAsPred_16 = (mdb__name_mangle__Arity_10 + (MR_Integer) 1);
#line 148 "name_mangle.m"
              }
#line 147 "name_mangle.m"
            else
#line 144 "name_mangle.m"
              {
#line 145 "name_mangle.m"
                mdb__name_mangle__PredOrFuncString_15 = (MR_String) "p";
#line 146 "name_mangle.m"
                mdb__name_mangle__ArityAsPred_16 = mdb__name_mangle__Arity_10;
#line 144 "name_mangle.m"
              }
#line 2409 "mdb.name_mangle.c"
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
        if ((mdb__name_mangle__PredOrFunc_41 == (MR_Integer) 1))
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
        else
#line 117 "name_mangle.m"
          mdb__name_mangle__LabelName3_52 = mdb__name_mangle__LabelName2_51;
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

#line 2737 "mdb.name_mangle.c"

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
