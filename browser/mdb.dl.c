/*
** Automatically generated from `dl.m'
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


/* :- module mdb.dl. */
/* :- implementation. */

/*
INIT mercury__mdb__dl__init
ENDINIT
*/

#include "mdb.dl.mih"


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
#include "require.mih"
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
#include "mdb.name_mangle.mih"




#line 72 "dl.m"
struct mdb__dl__mercury_sym_5_p_0_env_0_s {
#line 72 "dl.m"
  MR_Word mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23;
#line 166 "dl.m"
  MR_bool mdb__dl__mercury_sym_5_p_0_env_0__succeeded;
#line 275 "dl.m"
  jmp_buf mdb__dl__mercury_sym_5_p_0_env_0__commit_0;
#line 275 "dl.m"
  MR_Word mdb__dl__mercury_sym_5_p_0_env_0__ArgType_73;
#line 275 "dl.m"
  MR_Word mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_74;
#line 275 "dl.m"
  MR_String mdb__dl__mercury_sym_5_p_0_env_0__V_79_79;
#line 276 "dl.m"
  MR_Box mdb__dl__mercury_sym_5_p_0_env_0__conv0_ArgType_73;
#line 72 "dl.m"
};


#line 90 "mdb.dl.c"
static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_0[1];

#line 93 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0;

#line 96 "mdb.dl.c"
static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_1[1];

#line 99 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1;

#line 102 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_0[1];

#line 105 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_1[1];

#line 108 "mdb.dl.c"
static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_1[2];

#line 111 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_1[2];

#line 114 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_1[2];

#line 117 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0;

#line 120 "mdb.dl.c"
static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_0_1[1];

#line 123 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1;

#line 126 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_0[1];

#line 129 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_1[1];

#line 132 "mdb.dl.c"
static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_0[2];

#line 135 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_0[2];

#line 138 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_0[2];

#line 141 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_handle_0[1];

#line 144 "mdb.dl.c"
static const MR_NotagFunctorDesc mdb__dl__mdb__dl__notag_functor_desc_handle_0;

#line 147 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0;

#line 150 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1;

#line 153 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_value_ordered_link_mode_0[2];

#line 156 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_link_mode_0[2];

#line 159 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_link_mode_0[2];

#line 162 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_0;

#line 165 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_1;

#line 168 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_value_ordered_scope_0[2];

#line 171 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_scope_0[2];

#line 174 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_scope_0[2];

#line 177 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_1_0_10001(
#line 180 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 182 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 184 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3);

#line 187 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____dl_result_1_0_10001(
#line 190 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 192 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_2,
#line 194 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3,
#line 196 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_4);

#line 199 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_0_0_10001(
#line 202 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 204 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2);

#line 207 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____dl_result_0_0_10001(
#line 210 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 212 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 214 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3);

#line 217 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____handle_0_0_10001(
#line 220 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 222 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2);

#line 225 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____handle_0_0_10001(
#line 228 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 230 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 232 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3);

#line 235 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____link_mode_0_0_10001(
#line 238 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 240 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2);

#line 243 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____link_mode_0_0_10001(
#line 246 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 248 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 250 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3);

#line 253 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____scope_0_0_10001(
#line 256 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 258 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2);

#line 261 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____scope_0_0_10001(
#line 264 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 266 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 268 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3);

#line 374 "dl.m"
static MR_bool MR_CALL 
mdb__dl__high_level_code_0_p_0(void);

#line 356 "dl.m"
static void MR_CALL 
mdb__dl__dlclose_3_p_0(
#line 356 "dl.m"
  MR_Word mdb__dl__Handle_1);

#line 329 "dl.m"
static void MR_CALL 
mdb__dl__dlerror_3_p_0(
#line 329 "dl.m"
  MR_String * mdb__dl__ErrorMsg_1);

#line 312 "dl.m"
static void MR_CALL 
mdb__dl__dlsym_5_p_0(
#line 312 "dl.m"
  MR_Word mdb__dl__Handle_1,
#line 312 "dl.m"
  MR_String mdb__dl__Name_2,
#line 312 "dl.m"
  MR_Word * mdb__dl__Pointer_3);

#line 187 "dl.m"
static MR_Word MR_CALL 
mdb__dl__make_closure_1_f_0(
#line 187 "dl.m"
  MR_Word mdb__dl__ProcAddr_1);

#line 143 "dl.m"
static void MR_CALL 
mdb__dl__dlopen_6_p_0(
#line 143 "dl.m"
  MR_String mdb__dl__FileName_1,
#line 143 "dl.m"
  MR_Word mdb__dl__Mode_2,
#line 143 "dl.m"
  MR_Word mdb__dl__Scope_3,
#line 143 "dl.m"
  MR_Word * mdb__dl__Result_4);

#line 119 "dl.m"
static MR_bool MR_CALL 
mdb__dl__is_null_1_p_0(
#line 119 "dl.m"
  MR_Word mdb__dl__Pointer_1);

#line 275 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_1(
#line 275 "dl.m"
  void * mdb__dl__env_ptr_arg);

#line 276 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_3(
#line 276 "dl.m"
  void * mdb__dl__env_ptr_arg);

#line 275 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_2(
#line 275 "dl.m"
  void * mdb__dl__env_ptr_arg);

#line 275 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_4(
#line 275 "dl.m"
  void * mdb__dl__env_ptr_arg);


static /* final */ const MR_Box mdb__dl_scalar_common_1[1][2];




static /* final */ const MR_Box mdb__dl_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) " arguments(s)")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "mdb.dl.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 376 "mdb.dl.c"
static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 381 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0 = {
  (MR_String) "dl_ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__dl__mdb__dl__field_types_dl_result_1_0,
  NULL,
  NULL,
  NULL
};

#line 396 "mdb.dl.c"
static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 401 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1 = {
  (MR_String) "dl_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__dl__mdb__dl__field_types_dl_result_1_1,
  NULL,
  NULL,
  NULL
};

#line 416 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_0[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0
};

#line 421 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_1[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1
};

#line 426 "mdb.dl.c"
static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_1
  }
};

#line 440 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_1[2] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1,
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0
};

#line 446 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 452 "mdb.dl.c"
const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_dl_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__dl____Unify____dl_result_1_0_10001)),
  ((MR_Box) (mdb__dl____Compare____dl_result_1_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "dl_result",
  {     mdb__dl__mdb__dl__du_name_ordered_dl_result_1 },
  {     mdb__dl__mdb__dl__du_ptag_ordered_dl_result_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__dl__mdb__dl__functor_number_map_dl_result_1
};

#line 469 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0 = {
  (MR_String) "dl_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 484 "mdb.dl.c"
static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 489 "mdb.dl.c"
static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1 = {
  (MR_String) "dl_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__dl__mdb__dl__field_types_dl_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 504 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_0[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0
};

#line 509 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_1[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1
};

#line 514 "mdb.dl.c"
static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_1
  }
};

#line 528 "mdb.dl.c"
static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_0[2] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1,
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0
};

#line 534 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 540 "mdb.dl.c"
const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_dl_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__dl____Unify____dl_result_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____dl_result_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "dl_result",
  {     mdb__dl__mdb__dl__du_name_ordered_dl_result_0 },
  {     mdb__dl__mdb__dl__du_ptag_ordered_dl_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__dl__mdb__dl__functor_number_map_dl_result_0
};

#line 557 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_handle_0[1] = {
  (MR_Integer) 0
};

#line 562 "mdb.dl.c"
static const MR_NotagFunctorDesc mdb__dl__mdb__dl__notag_functor_desc_handle_0 = {
  (MR_String) "handle",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 569 "mdb.dl.c"
const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_handle_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__dl____Unify____handle_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____handle_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "handle",
  {     &mdb__dl__mdb__dl__notag_functor_desc_handle_0 },
  {     &mdb__dl__mdb__dl__notag_functor_desc_handle_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__dl__mdb__dl__functor_number_map_handle_0
};

#line 586 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0 = {
  (MR_String) "lazy",
  (MR_Integer) 0
};

#line 592 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1 = {
  (MR_String) "now",
  (MR_Integer) 1
};

#line 598 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_value_ordered_link_mode_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0,
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1
};

#line 604 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_link_mode_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0,
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1
};

#line 610 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_link_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 616 "mdb.dl.c"
const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_link_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__dl____Unify____link_mode_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____link_mode_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "link_mode",
  {     mdb__dl__mdb__dl__enum_name_ordered_link_mode_0 },
  {     mdb__dl__mdb__dl__enum_value_ordered_link_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__dl__mdb__dl__functor_number_map_link_mode_0
};

#line 633 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_0 = {
  (MR_String) "local",
  (MR_Integer) 0
};

#line 639 "mdb.dl.c"
static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_1 = {
  (MR_String) "global",
  (MR_Integer) 1
};

#line 645 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_value_ordered_scope_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_0,
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_1
};

#line 651 "mdb.dl.c"
static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_scope_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_1,
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_0
};

#line 657 "mdb.dl.c"
static const MR_Integer mdb__dl__mdb__dl__functor_number_map_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 663 "mdb.dl.c"
const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__dl____Unify____scope_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____scope_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "scope",
  {     mdb__dl__mdb__dl__enum_name_ordered_scope_0 },
  {     mdb__dl__mdb__dl__enum_value_ordered_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__dl__mdb__dl__functor_number_map_scope_0
};

#line 680 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_1_0_10001(
#line 683 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 685 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 687 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3)
#line 689 "mdb.dl.c"
{
#line 691 "mdb.dl.c"
  {
#line 693 "mdb.dl.c"
    MR_bool mdb__dl__succeeded;

#line 696 "mdb.dl.c"
    {
#line 698 "mdb.dl.c"
      mdb__dl__succeeded = mdb__dl____Unify____dl_result_1_0(((MR_Word) mdb__dl__wrapper_arg_1), ((MR_Word) mdb__dl__wrapper_arg_2), ((MR_Word) mdb__dl__wrapper_arg_3));
    }
#line 701 "mdb.dl.c"
    return mdb__dl__succeeded;
#line 703 "mdb.dl.c"
  }
#line 705 "mdb.dl.c"
}

#line 708 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____dl_result_1_0_10001(
#line 711 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 713 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_2,
#line 715 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3,
#line 717 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_4)
#line 719 "mdb.dl.c"
{
#line 721 "mdb.dl.c"
  {
#line 723 "mdb.dl.c"
    MR_Word mdb__dl__conv0_HeadVar__1_1;

#line 726 "mdb.dl.c"
    {
#line 728 "mdb.dl.c"
      mdb__dl____Compare____dl_result_1_0(((MR_Word) mdb__dl__wrapper_arg_1), &mdb__dl__conv0_HeadVar__1_1, ((MR_Word) mdb__dl__wrapper_arg_3), ((MR_Word) mdb__dl__wrapper_arg_4));
    }
#line 731 "mdb.dl.c"
    *mdb__dl__wrapper_arg_2 = ((MR_Box) (mdb__dl__conv0_HeadVar__1_1));
#line 733 "mdb.dl.c"
  }
#line 735 "mdb.dl.c"
}

#line 738 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_0_0_10001(
#line 741 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 743 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2)
#line 745 "mdb.dl.c"
{
#line 747 "mdb.dl.c"
  {
#line 749 "mdb.dl.c"
    MR_bool mdb__dl__succeeded;

#line 752 "mdb.dl.c"
    {
#line 754 "mdb.dl.c"
      mdb__dl__succeeded = mdb__dl____Unify____dl_result_0_0(((MR_Word) mdb__dl__wrapper_arg_1), ((MR_Word) mdb__dl__wrapper_arg_2));
    }
#line 757 "mdb.dl.c"
    return mdb__dl__succeeded;
#line 759 "mdb.dl.c"
  }
#line 761 "mdb.dl.c"
}

#line 764 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____dl_result_0_0_10001(
#line 767 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 769 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 771 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3)
#line 773 "mdb.dl.c"
{
#line 775 "mdb.dl.c"
  {
#line 777 "mdb.dl.c"
    MR_Word mdb__dl__conv0_HeadVar__1_1;

#line 780 "mdb.dl.c"
    {
#line 782 "mdb.dl.c"
      mdb__dl____Compare____dl_result_0_0(&mdb__dl__conv0_HeadVar__1_1, ((MR_Word) mdb__dl__wrapper_arg_2), ((MR_Word) mdb__dl__wrapper_arg_3));
    }
#line 785 "mdb.dl.c"
    *mdb__dl__wrapper_arg_1 = ((MR_Box) (mdb__dl__conv0_HeadVar__1_1));
#line 787 "mdb.dl.c"
  }
#line 789 "mdb.dl.c"
}

#line 792 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____handle_0_0_10001(
#line 795 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 797 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2)
#line 799 "mdb.dl.c"
{
#line 801 "mdb.dl.c"
  {
#line 803 "mdb.dl.c"
    MR_bool mdb__dl__succeeded;

#line 806 "mdb.dl.c"
    {
#line 808 "mdb.dl.c"
      mdb__dl__succeeded = mdb__dl____Unify____handle_0_0(((MR_Word) mdb__dl__wrapper_arg_1), ((MR_Word) mdb__dl__wrapper_arg_2));
    }
#line 811 "mdb.dl.c"
    return mdb__dl__succeeded;
#line 813 "mdb.dl.c"
  }
#line 815 "mdb.dl.c"
}

#line 818 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____handle_0_0_10001(
#line 821 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 823 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 825 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3)
#line 827 "mdb.dl.c"
{
#line 829 "mdb.dl.c"
  {
#line 831 "mdb.dl.c"
    MR_Word mdb__dl__conv0_HeadVar__1_1;

#line 834 "mdb.dl.c"
    {
#line 836 "mdb.dl.c"
      mdb__dl____Compare____handle_0_0(&mdb__dl__conv0_HeadVar__1_1, ((MR_Word) mdb__dl__wrapper_arg_2), ((MR_Word) mdb__dl__wrapper_arg_3));
    }
#line 839 "mdb.dl.c"
    *mdb__dl__wrapper_arg_1 = ((MR_Box) (mdb__dl__conv0_HeadVar__1_1));
#line 841 "mdb.dl.c"
  }
#line 843 "mdb.dl.c"
}

#line 846 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____link_mode_0_0_10001(
#line 849 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 851 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2)
#line 853 "mdb.dl.c"
{
#line 855 "mdb.dl.c"
  {
#line 857 "mdb.dl.c"
    MR_bool mdb__dl__succeeded;

#line 860 "mdb.dl.c"
    {
#line 862 "mdb.dl.c"
      mdb__dl__succeeded = mdb__dl____Unify____link_mode_0_0(((MR_Word) mdb__dl__wrapper_arg_1), ((MR_Word) mdb__dl__wrapper_arg_2));
    }
#line 865 "mdb.dl.c"
    return mdb__dl__succeeded;
#line 867 "mdb.dl.c"
  }
#line 869 "mdb.dl.c"
}

#line 872 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____link_mode_0_0_10001(
#line 875 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 877 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 879 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3)
#line 881 "mdb.dl.c"
{
#line 883 "mdb.dl.c"
  {
#line 885 "mdb.dl.c"
    MR_Word mdb__dl__conv0_HeadVar__1_1;

#line 888 "mdb.dl.c"
    {
#line 890 "mdb.dl.c"
      mdb__dl____Compare____link_mode_0_0(&mdb__dl__conv0_HeadVar__1_1, ((MR_Word) mdb__dl__wrapper_arg_2), ((MR_Word) mdb__dl__wrapper_arg_3));
    }
#line 893 "mdb.dl.c"
    *mdb__dl__wrapper_arg_1 = ((MR_Box) (mdb__dl__conv0_HeadVar__1_1));
#line 895 "mdb.dl.c"
  }
#line 897 "mdb.dl.c"
}

#line 900 "mdb.dl.c"
static MR_bool MR_CALL 
mdb__dl____Unify____scope_0_0_10001(
#line 903 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_1,
#line 905 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2)
#line 907 "mdb.dl.c"
{
#line 909 "mdb.dl.c"
  {
#line 911 "mdb.dl.c"
    MR_bool mdb__dl__succeeded;

#line 914 "mdb.dl.c"
    {
#line 916 "mdb.dl.c"
      mdb__dl__succeeded = mdb__dl____Unify____scope_0_0(((MR_Word) mdb__dl__wrapper_arg_1), ((MR_Word) mdb__dl__wrapper_arg_2));
    }
#line 919 "mdb.dl.c"
    return mdb__dl__succeeded;
#line 921 "mdb.dl.c"
  }
#line 923 "mdb.dl.c"
}

#line 926 "mdb.dl.c"
static void MR_CALL 
mdb__dl____Compare____scope_0_0_10001(
#line 929 "mdb.dl.c"
  MR_Box * mdb__dl__wrapper_arg_1,
#line 931 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_2,
#line 933 "mdb.dl.c"
  MR_Box mdb__dl__wrapper_arg_3)
#line 935 "mdb.dl.c"
{
#line 937 "mdb.dl.c"
  {
#line 939 "mdb.dl.c"
    MR_Word mdb__dl__conv0_HeadVar__1_1;

#line 942 "mdb.dl.c"
    {
#line 944 "mdb.dl.c"
      mdb__dl____Compare____scope_0_0(&mdb__dl__conv0_HeadVar__1_1, ((MR_Word) mdb__dl__wrapper_arg_2), ((MR_Word) mdb__dl__wrapper_arg_3));
    }
#line 947 "mdb.dl.c"
    *mdb__dl__wrapper_arg_1 = ((MR_Box) (mdb__dl__conv0_HeadVar__1_1));
#line 949 "mdb.dl.c"
  }
#line 951 "mdb.dl.c"
}

#line 31 "dl.m"
void MR_CALL 
mdb__dl____Compare____scope_0_0(
#line 31 "dl.m"
  MR_Word * mdb__dl__HeadVar__1_1,
#line 31 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2,
#line 31 "dl.m"
  MR_Word mdb__dl__HeadVar__3_3)
#line 31 "dl.m"
{
#line 31 "dl.m"
  {
#line 31 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 31 "dl.m"
    MR_Integer mdb__dl__Cast_HeadVar1_4 = (MR_Integer) mdb__dl__HeadVar__2_2;
#line 31 "dl.m"
    MR_Integer mdb__dl__Cast_HeadVar2_5 = (MR_Integer) mdb__dl__HeadVar__3_3;

#line 31 "dl.m"
    {
#line 31 "dl.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__dl__HeadVar__1_1, mdb__dl__Cast_HeadVar1_4, mdb__dl__Cast_HeadVar2_5);
#line 31 "dl.m"
      return;
    }
#line 31 "dl.m"
  }
#line 31 "dl.m"
}

#line 31 "dl.m"
MR_bool MR_CALL 
mdb__dl____Unify____scope_0_0(
#line 31 "dl.m"
  MR_Word mdb__dl__HeadVar__2_1,
#line 31 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2)
#line 31 "dl.m"
{
#line 995 "mdb.dl.c"
  {
#line 997 "mdb.dl.c"
    MR_bool mdb__dl__succeeded = (mdb__dl__HeadVar__2_1 == mdb__dl__HeadVar__2_2);

#line 1000 "mdb.dl.c"
    return mdb__dl__succeeded;
#line 1002 "mdb.dl.c"
  }
#line 31 "dl.m"
}

#line 27 "dl.m"
void MR_CALL 
mdb__dl____Compare____link_mode_0_0(
#line 27 "dl.m"
  MR_Word * mdb__dl__HeadVar__1_1,
#line 27 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2,
#line 27 "dl.m"
  MR_Word mdb__dl__HeadVar__3_3)
#line 27 "dl.m"
{
#line 27 "dl.m"
  {
#line 27 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 27 "dl.m"
    MR_Integer mdb__dl__Cast_HeadVar1_4 = (MR_Integer) mdb__dl__HeadVar__2_2;
#line 27 "dl.m"
    MR_Integer mdb__dl__Cast_HeadVar2_5 = (MR_Integer) mdb__dl__HeadVar__3_3;

#line 27 "dl.m"
    {
#line 27 "dl.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__dl__HeadVar__1_1, mdb__dl__Cast_HeadVar1_4, mdb__dl__Cast_HeadVar2_5);
#line 27 "dl.m"
      return;
    }
#line 27 "dl.m"
  }
#line 27 "dl.m"
}

#line 27 "dl.m"
MR_bool MR_CALL 
mdb__dl____Unify____link_mode_0_0(
#line 27 "dl.m"
  MR_Word mdb__dl__HeadVar__2_1,
#line 27 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2)
#line 27 "dl.m"
{
#line 1048 "mdb.dl.c"
  {
#line 1050 "mdb.dl.c"
    MR_bool mdb__dl__succeeded = (mdb__dl__HeadVar__2_1 == mdb__dl__HeadVar__2_2);

#line 1053 "mdb.dl.c"
    return mdb__dl__succeeded;
#line 1055 "mdb.dl.c"
  }
#line 27 "dl.m"
}

#line 117 "dl.m"
void MR_CALL 
mdb__dl____Compare____handle_0_0(
#line 117 "dl.m"
  MR_Word * mdb__dl__HeadVar__1_1,
#line 117 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2,
#line 117 "dl.m"
  MR_Word mdb__dl__HeadVar__3_3)
#line 117 "dl.m"
{
#line 117 "dl.m"
  {
#line 117 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 117 "dl.m"
    MR_Integer mdb__dl__CastX_6 = (MR_Integer) mdb__dl__HeadVar__2_2;
#line 117 "dl.m"
    MR_Integer mdb__dl__CastY_7 = (MR_Integer) mdb__dl__HeadVar__3_3;

#line 117 "dl.m"
    mdb__dl__succeeded = (mdb__dl__CastX_6 == mdb__dl__CastY_7);
#line 117 "dl.m"
    if (mdb__dl__succeeded)
#line 1084 "mdb.dl.c"
      *mdb__dl__HeadVar__1_1 = (MR_Integer) 0;
#line 117 "dl.m"
    else
#line 117 "dl.m"
      {
#line 117 "dl.m"
        MR_Word mdb__dl__V_4_4 = (MR_Word) mdb__dl__HeadVar__2_2;
#line 117 "dl.m"
        MR_Word mdb__dl__V_5_5 = (MR_Word) mdb__dl__HeadVar__3_3;

#line 117 "dl.m"
        {
#line 117 "dl.m"
          mercury__builtin____Compare____c_pointer_0_0(mdb__dl__HeadVar__1_1, mdb__dl__V_4_4, mdb__dl__V_5_5);
#line 117 "dl.m"
          return;
        }
#line 117 "dl.m"
      }
#line 117 "dl.m"
  }
#line 117 "dl.m"
}

#line 117 "dl.m"
MR_bool MR_CALL 
mdb__dl____Unify____handle_0_0(
#line 117 "dl.m"
  MR_Word mdb__dl__HeadVar__1_1,
#line 117 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2)
#line 117 "dl.m"
{
#line 117 "dl.m"
  {
#line 117 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 117 "dl.m"
    MR_Integer mdb__dl__CastX_5 = (MR_Integer) mdb__dl__HeadVar__1_1;
#line 117 "dl.m"
    MR_Integer mdb__dl__CastY_6 = (MR_Integer) mdb__dl__HeadVar__2_2;

#line 117 "dl.m"
    mdb__dl__succeeded = (mdb__dl__CastX_5 == mdb__dl__CastY_6);
#line 117 "dl.m"
    if (mdb__dl__succeeded)
#line 117 "dl.m"
      mdb__dl__succeeded = MR_TRUE;
#line 117 "dl.m"
    else
#line 117 "dl.m"
      {
#line 117 "dl.m"
        MR_Word mdb__dl__V_3_3 = (MR_Word) mdb__dl__HeadVar__1_1;
#line 117 "dl.m"
        MR_Word mdb__dl__V_4_4 = (MR_Word) mdb__dl__HeadVar__2_2;

#line 1142 "mdb.dl.c"
        {
#line 1144 "mdb.dl.c"
          return mdb__dl__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__dl__V_3_3, mdb__dl__V_4_4);
        }
#line 117 "dl.m"
      }
#line 117 "dl.m"
    return mdb__dl__succeeded;
#line 117 "dl.m"
  }
#line 117 "dl.m"
}

#line 36 "dl.m"
void MR_CALL 
mdb__dl____Compare____dl_result_1_0(
#line 36 "dl.m"
  MR_Word mdb__dl__TypeInfo_for_T_14,
#line 36 "dl.m"
  MR_Word * mdb__dl__HeadVar__1_1,
#line 36 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2,
#line 36 "dl.m"
  MR_Word mdb__dl__HeadVar__3_3)
#line 36 "dl.m"
{
#line 36 "dl.m"
  {
#line 36 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 36 "dl.m"
    MR_Integer mdb__dl__CastX_12 = (MR_Integer) mdb__dl__HeadVar__2_2;
#line 36 "dl.m"
    MR_Integer mdb__dl__CastY_13 = (MR_Integer) mdb__dl__HeadVar__3_3;

#line 36 "dl.m"
    mdb__dl__succeeded = (mdb__dl__CastX_12 == mdb__dl__CastY_13);
#line 36 "dl.m"
    if (mdb__dl__succeeded)
#line 1182 "mdb.dl.c"
      *mdb__dl__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "dl.m"
    else
#line 36 "dl.m"
    if (((MR_tag((MR_Word) mdb__dl__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 36 "dl.m"
      {
#line 36 "dl.m"
        MR_String mdb__dl__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "dl.m"
        if (((MR_tag((MR_Word) mdb__dl__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 36 "dl.m"
          {
#line 36 "dl.m"
            MR_String mdb__dl__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__3_3, (MR_Integer) 0)));

#line 36 "dl.m"
            {
#line 36 "dl.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mdb__dl__HeadVar__1_1, mdb__dl__V_16_16, mdb__dl__V_11_11);
#line 36 "dl.m"
              return;
            }
#line 36 "dl.m"
          }
#line 36 "dl.m"
        else
#line 1211 "mdb.dl.c"
          *mdb__dl__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "dl.m"
      }
#line 36 "dl.m"
    else
#line 36 "dl.m"
      {
#line 36 "dl.m"
        MR_Box mdb__dl__V_17_17 = (MR_hl_field(MR_mktag(0), mdb__dl__HeadVar__2_2, (MR_Integer) 0));

#line 36 "dl.m"
        if (((MR_tag((MR_Word) mdb__dl__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1224 "mdb.dl.c"
          *mdb__dl__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "dl.m"
        else
#line 36 "dl.m"
          {
#line 36 "dl.m"
            MR_Box mdb__dl__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__dl__HeadVar__3_3, (MR_Integer) 0));

#line 36 "dl.m"
            {
#line 36 "dl.m"
              mercury__builtin__compare_3_p_0(mdb__dl__TypeInfo_for_T_14, mdb__dl__HeadVar__1_1, mdb__dl__V_17_17, mdb__dl__V_5_5);
#line 36 "dl.m"
              return;
            }
#line 36 "dl.m"
          }
#line 36 "dl.m"
      }
#line 36 "dl.m"
  }
#line 36 "dl.m"
}

#line 36 "dl.m"
MR_bool MR_CALL 
mdb__dl____Unify____dl_result_1_0(
#line 36 "dl.m"
  MR_Word mdb__dl__TypeInfo_for_T_9,
#line 36 "dl.m"
  MR_Word mdb__dl__HeadVar__1_1,
#line 36 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2)
#line 36 "dl.m"
{
#line 36 "dl.m"
  {
#line 36 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 36 "dl.m"
    MR_Integer mdb__dl__CastX_7 = (MR_Integer) mdb__dl__HeadVar__1_1;
#line 36 "dl.m"
    MR_Integer mdb__dl__CastY_8 = (MR_Integer) mdb__dl__HeadVar__2_2;

#line 36 "dl.m"
    mdb__dl__succeeded = (mdb__dl__CastX_7 == mdb__dl__CastY_8);
#line 36 "dl.m"
    if (mdb__dl__succeeded)
#line 36 "dl.m"
      mdb__dl__succeeded = MR_TRUE;
#line 36 "dl.m"
    else
#line 36 "dl.m"
    if (((MR_tag((MR_Word) mdb__dl__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 36 "dl.m"
      {
#line 36 "dl.m"
        MR_String mdb__dl__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "dl.m"
        MR_String mdb__dl__V_6_6;

#line 36 "dl.m"
        mdb__dl__succeeded = ((MR_tag((MR_Word) mdb__dl__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "dl.m"
        if (mdb__dl__succeeded)
#line 36 "dl.m"
          {
#line 36 "dl.m"
            mdb__dl__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__2_2, (MR_Integer) 0)));
#line 1294 "mdb.dl.c"
            mdb__dl__succeeded = (strcmp(mdb__dl__V_5_5, mdb__dl__V_6_6) == 0);
#line 36 "dl.m"
          }
#line 36 "dl.m"
      }
#line 36 "dl.m"
    else
#line 36 "dl.m"
      {
#line 36 "dl.m"
        MR_Box mdb__dl__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__dl__HeadVar__1_1, (MR_Integer) 0));
#line 36 "dl.m"
        MR_Box mdb__dl__V_4_4;

#line 36 "dl.m"
        mdb__dl__succeeded = ((MR_tag((MR_Word) mdb__dl__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 36 "dl.m"
        if (mdb__dl__succeeded)
#line 36 "dl.m"
          {
#line 36 "dl.m"
            mdb__dl__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__dl__HeadVar__2_2, (MR_Integer) 0));
#line 1317 "mdb.dl.c"
            {
#line 1319 "mdb.dl.c"
              return mdb__dl__succeeded = mercury__builtin__unify_2_p_0(mdb__dl__TypeInfo_for_T_9, mdb__dl__V_3_3, mdb__dl__V_4_4);
            }
#line 36 "dl.m"
          }
#line 36 "dl.m"
      }
#line 36 "dl.m"
    return mdb__dl__succeeded;
#line 36 "dl.m"
  }
#line 36 "dl.m"
}

#line 40 "dl.m"
void MR_CALL 
mdb__dl____Compare____dl_result_0_0(
#line 40 "dl.m"
  MR_Word * mdb__dl__HeadVar__1_1,
#line 40 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2,
#line 40 "dl.m"
  MR_Word mdb__dl__HeadVar__3_3)
#line 40 "dl.m"
{
#line 40 "dl.m"
  {
#line 40 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 40 "dl.m"
    MR_Integer mdb__dl__CastX_8 = (MR_Integer) mdb__dl__HeadVar__2_2;
#line 40 "dl.m"
    MR_Integer mdb__dl__CastY_9 = (MR_Integer) mdb__dl__HeadVar__3_3;

#line 40 "dl.m"
    mdb__dl__succeeded = (mdb__dl__CastX_8 == mdb__dl__CastY_9);
#line 40 "dl.m"
    if (mdb__dl__succeeded)
#line 1357 "mdb.dl.c"
      *mdb__dl__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "dl.m"
    else
#line 40 "dl.m"
    if ((mdb__dl__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "dl.m"
      if ((mdb__dl__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "dl.m"
        *mdb__dl__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "dl.m"
      else
#line 1369 "mdb.dl.c"
        *mdb__dl__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "dl.m"
    else
#line 40 "dl.m"
      {
#line 40 "dl.m"
        MR_String mdb__dl__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "dl.m"
        if ((mdb__dl__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1380 "mdb.dl.c"
          *mdb__dl__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "dl.m"
        else
#line 40 "dl.m"
          {
#line 40 "dl.m"
            MR_String mdb__dl__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__3_3, (MR_Integer) 0)));

#line 40 "dl.m"
            {
#line 40 "dl.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mdb__dl__HeadVar__1_1, mdb__dl__V_11_11, mdb__dl__V_7_7);
#line 40 "dl.m"
              return;
            }
#line 40 "dl.m"
          }
#line 40 "dl.m"
      }
#line 40 "dl.m"
  }
#line 40 "dl.m"
}

#line 40 "dl.m"
MR_bool MR_CALL 
mdb__dl____Unify____dl_result_0_0(
#line 40 "dl.m"
  MR_Word mdb__dl__HeadVar__1_1,
#line 40 "dl.m"
  MR_Word mdb__dl__HeadVar__2_2)
#line 40 "dl.m"
{
#line 40 "dl.m"
  {
#line 40 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 40 "dl.m"
    MR_Integer mdb__dl__CastX_7 = (MR_Integer) mdb__dl__HeadVar__1_1;
#line 40 "dl.m"
    MR_Integer mdb__dl__CastY_8 = (MR_Integer) mdb__dl__HeadVar__2_2;

#line 40 "dl.m"
    mdb__dl__succeeded = (mdb__dl__CastX_7 == mdb__dl__CastY_8);
#line 40 "dl.m"
    if (mdb__dl__succeeded)
#line 40 "dl.m"
      mdb__dl__succeeded = MR_TRUE;
#line 40 "dl.m"
    else
#line 40 "dl.m"
    if ((mdb__dl__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "dl.m"
      {
#line 40 "dl.m"
        MR_Integer mdb__dl__CastX_3 = (MR_Integer) mdb__dl__HeadVar__1_1;
#line 40 "dl.m"
        MR_Integer mdb__dl__CastY_4 = (MR_Integer) mdb__dl__HeadVar__2_2;

#line 40 "dl.m"
        mdb__dl__succeeded = (mdb__dl__CastY_4 == mdb__dl__CastX_3);
#line 40 "dl.m"
      }
#line 40 "dl.m"
    else
#line 40 "dl.m"
      {
#line 40 "dl.m"
        MR_String mdb__dl__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "dl.m"
        MR_String mdb__dl__V_6_6;

#line 40 "dl.m"
        mdb__dl__succeeded = ((MR_tag((MR_Word) mdb__dl__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "dl.m"
        if (mdb__dl__succeeded)
#line 40 "dl.m"
          {
#line 40 "dl.m"
            mdb__dl__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__dl__HeadVar__2_2, (MR_Integer) 0)));
#line 1461 "mdb.dl.c"
            mdb__dl__succeeded = (strcmp(mdb__dl__V_5_5, mdb__dl__V_6_6) == 0);
#line 40 "dl.m"
          }
#line 40 "dl.m"
      }
#line 40 "dl.m"
    return mdb__dl__succeeded;
#line 40 "dl.m"
  }
#line 40 "dl.m"
}

#line 374 "dl.m"
static MR_bool MR_CALL 
mdb__dl__high_level_code_0_p_0(void)
#line 374 "dl.m"
{
#line 375 "dl.m"
  {
#line 375 "dl.m"
    MR_bool mdb__dl__succeeded;

#line 378 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__high_level_code_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 378 "dl.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1499 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 378 "dl.m"
	}
mdb__dl__succeeded  = SUCCESS_INDICATOR;
}
#line 375 "dl.m"
    return mdb__dl__succeeded;
#line 375 "dl.m"
  }
#line 374 "dl.m"
}

#line 356 "dl.m"
static void MR_CALL 
mdb__dl__dlclose_3_p_0(
#line 356 "dl.m"
  MR_Word mdb__dl__Handle_1)
#line 356 "dl.m"
{
#line 361 "dl.m"
  {
#line 361 "dl.m"
    MR_bool mdb__dl__succeeded;

#line 364 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__dlclose_3_p_0

	MR_Word Handle;

	Handle =  mdb__dl__Handle_1 ;
		{
#line 364 "dl.m"

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLCLOSE)
    dlclose((void *) Handle);
#endif

#line 1541 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
#line 364 "dl.m"
}
#line 361 "dl.m"
  }
#line 356 "dl.m"
}

#line 329 "dl.m"
static void MR_CALL 
mdb__dl__dlerror_3_p_0(
#line 329 "dl.m"
  MR_String * mdb__dl__ErrorMsg_1)
#line 329 "dl.m"
{
#line 331 "dl.m"
  {
#line 331 "dl.m"
    MR_bool mdb__dl__succeeded;

#line 334 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__dlerror_3_p_0

	MR_String ErrorMsg;

		{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
}
#line 1585 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__dl__ErrorMsg_1  = ErrorMsg;
#line 334 "dl.m"
}
#line 331 "dl.m"
  }
#line 329 "dl.m"
}

#line 312 "dl.m"
static void MR_CALL 
mdb__dl__dlsym_5_p_0(
#line 312 "dl.m"
  MR_Word mdb__dl__Handle_1,
#line 312 "dl.m"
  MR_String mdb__dl__Name_2,
#line 312 "dl.m"
  MR_Word * mdb__dl__Pointer_3)
#line 312 "dl.m"
{
#line 315 "dl.m"
  {
#line 315 "dl.m"
    MR_bool mdb__dl__succeeded;

#line 318 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__dlsym_5_p_0

	MR_Word Handle;
	MR_String Name;
	MR_Word Pointer;

	Handle =  mdb__dl__Handle_1 ;
	Name =  mdb__dl__Name_2 ;
		{
#line 318 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLSYM)
    Pointer = (MR_Word) dlsym((void *) Handle, Name);
#else
    Pointer = (MR_Word) NULL;
#endif
}
#line 1632 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__dl__Pointer_3  = Pointer;
#line 318 "dl.m"
}
#line 315 "dl.m"
  }
#line 312 "dl.m"
}

#line 187 "dl.m"
static MR_Word MR_CALL 
mdb__dl__make_closure_1_f_0(
#line 187 "dl.m"
  MR_Word mdb__dl__ProcAddr_1)
#line 187 "dl.m"
{
#line 189 "dl.m"
  {
#line 189 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 189 "dl.m"
    MR_Word mdb__dl__Closure_2;

#line 192 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__make_closure_1_f_0

	MR_Word ProcAddr;
	MR_Word Closure;

	ProcAddr =  mdb__dl__ProcAddr_1 ;
		{
#line 192 "dl.m"
{
    MR_save_transient_hp();
    Closure = (MR_Word) MR_make_closure((MR_Code *) ProcAddr);
    MR_restore_transient_hp();
}
#line 1673 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 mdb__dl__Closure_2  = Closure;
#line 192 "dl.m"
}
#line 189 "dl.m"
    return mdb__dl__Closure_2;
#line 189 "dl.m"
  }
#line 187 "dl.m"
}

#line 143 "dl.m"
static void MR_CALL 
mdb__dl__dlopen_6_p_0(
#line 143 "dl.m"
  MR_String mdb__dl__FileName_1,
#line 143 "dl.m"
  MR_Word mdb__dl__Mode_2,
#line 143 "dl.m"
  MR_Word mdb__dl__Scope_3,
#line 143 "dl.m"
  MR_Word * mdb__dl__Result_4)
#line 143 "dl.m"
{
#line 146 "dl.m"
  {
#line 146 "dl.m"
    MR_bool mdb__dl__succeeded;

#line 149 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__dlopen_6_p_0

	MR_String FileName;
	MR_Word Mode;
	MR_Word Scope;
	MR_Word Result;

	FileName =  mdb__dl__FileName_1 ;
	Mode =  mdb__dl__Mode_2 ;
	Scope =  mdb__dl__Scope_3 ;
		{
#line 149 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLOPEN)  && defined(RTLD_NOW) && defined(RTLD_LAZY)
    int mode = (Mode ? RTLD_NOW : RTLD_LAZY);
    /* not all systems have RTLD_GLOBAL */
    #ifdef RTLD_GLOBAL
      if (Scope) mode |= RTLD_GLOBAL;
    #endif
    Result = (MR_Word) dlopen(FileName, mode);
#else
    Result = (MR_Word) NULL;
#endif
}
#line 1731 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__dl__Result_4  = Result;
#line 149 "dl.m"
}
#line 146 "dl.m"
  }
#line 143 "dl.m"
}

#line 119 "dl.m"
static MR_bool MR_CALL 
mdb__dl__is_null_1_p_0(
#line 119 "dl.m"
  MR_Word mdb__dl__Pointer_1)
#line 119 "dl.m"
{
#line 120 "dl.m"
  {
#line 120 "dl.m"
    MR_bool mdb__dl__succeeded;

#line 123 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__is_null_1_p_0

	MR_Word Pointer;
	MR_bool SUCCESS_INDICATOR;

	Pointer =  mdb__dl__Pointer_1 ;
		{
#line 123 "dl.m"

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)

#line 1768 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 123 "dl.m"
	}
mdb__dl__succeeded  = SUCCESS_INDICATOR;
}
#line 120 "dl.m"
    return mdb__dl__succeeded;
#line 120 "dl.m"
  }
#line 119 "dl.m"
}

#line 97 "dl.m"
void MR_CALL 
mdb__dl__close_4_p_0(
#line 97 "dl.m"
  MR_Word mdb__dl__HeadVar__1_1,
#line 97 "dl.m"
  MR_Word * mdb__dl__Result_6)
#line 97 "dl.m"
{
#line 351 "dl.m"
  {
#line 351 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 351 "dl.m"
    MR_Word mdb__dl__Handle_5 = (MR_Word) mdb__dl__HeadVar__1_1;
#line 351 "dl.m"
    MR_String mdb__dl__ErrorMsg_8;

#line 364 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__close_4_p_0

	MR_Word Handle;

	Handle =  mdb__dl__Handle_5 ;
		{
#line 364 "dl.m"

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLCLOSE)
    dlclose((void *) Handle);
#endif

#line 1816 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
#line 364 "dl.m"
}
#line 334 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__close_4_p_0

	MR_String ErrorMsg;

		{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
}
#line 1843 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 mdb__dl__ErrorMsg_8  = ErrorMsg;
#line 334 "dl.m"
}
#line 354 "dl.m"
    mdb__dl__succeeded = (strcmp(mdb__dl__ErrorMsg_8, (MR_String) "") == 0);
#line 354 "dl.m"
    if (mdb__dl__succeeded)
#line 354 "dl.m"
      *mdb__dl__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "dl.m"
    else
#line 354 "dl.m"
      {
#line 354 "dl.m"
        MR_Word base;
#line 354 "dl.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 354 "dl.m"
        *mdb__dl__Result_6 = base;
#line 354 "dl.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__dl__ErrorMsg_8));
#line 354 "dl.m"
      }
#line 351 "dl.m"
  }
#line 97 "dl.m"
}

#line 275 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_1(
#line 275 "dl.m"
  void * mdb__dl__env_ptr_arg)
#line 275 "dl.m"
{
#line 275 "dl.m"
  {
#line 275 "dl.m"
    struct mdb__dl__mercury_sym_5_p_0_env_0_s * mdb__dl__env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) mdb__dl__env_ptr_arg;

#line 275 "dl.m"
    MR_builtin_longjmp((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__commit_0, 1);
#line 275 "dl.m"
  }
#line 275 "dl.m"
}

#line 276 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_3(
#line 276 "dl.m"
  void * mdb__dl__env_ptr_arg)
#line 276 "dl.m"
{
#line 276 "dl.m"
  {
#line 276 "dl.m"
    struct mdb__dl__mercury_sym_5_p_0_env_0_s * mdb__dl__env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) mdb__dl__env_ptr_arg;

#line 276 "dl.m"
    (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgType_73 = ((MR_Word) (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__conv0_ArgType_73);
#line 276 "dl.m"
    {
#line 276 "dl.m"
      mdb__dl__mercury_sym_5_p_0_2(mdb__dl__env_ptr);
#line 276 "dl.m"
      return;
    }
#line 276 "dl.m"
  }
#line 276 "dl.m"
}

#line 275 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_2(
#line 275 "dl.m"
  void * mdb__dl__env_ptr_arg)
#line 275 "dl.m"
{
#line 275 "dl.m"
  {
#line 275 "dl.m"
    struct mdb__dl__mercury_sym_5_p_0_env_0_s * mdb__dl__env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) mdb__dl__env_ptr_arg;

#line 280 "dl.m"
    {
#line 280 "dl.m"
      (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_74 = mercury__type_desc__type_ctor_1_f_0((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgType_73);
    }
#line 281 "dl.m"
    {
#line 281 "dl.m"
      MR_String mdb__dl__V_78_78;

#line 281 "dl.m"
      {
#line 281 "dl.m"
        mdb__dl__V_78_78 = mercury__type_desc__type_ctor_name_1_f_0((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_74);
      }
#line 281 "dl.m"
      (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__V_78_78, (MR_String) "float") == 0);
#line 281 "dl.m"
    }
#line 282 "dl.m"
    if (!((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded))
#line 282 "dl.m"
      {
#line 282 "dl.m"
        MR_String mdb__dl__V_77_77;

#line 282 "dl.m"
        {
#line 282 "dl.m"
          mdb__dl__V_77_77 = mercury__type_desc__type_ctor_name_1_f_0((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_74);
        }
#line 282 "dl.m"
        (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__V_77_77, (MR_String) "char") == 0);
#line 282 "dl.m"
      }
#line 275 "dl.m"
    if ((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 275 "dl.m"
      {
#line 284 "dl.m"
        {
#line 284 "dl.m"
          (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__V_79_79 = mercury__type_desc__type_ctor_module_name_1_f_0((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_74);
        }
#line 284 "dl.m"
        (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__V_79_79, (MR_String) "builtin") == 0);
#line 284 "dl.m"
        if ((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 284 "dl.m"
          {
#line 284 "dl.m"
            mdb__dl__mercury_sym_5_p_0_1(mdb__dl__env_ptr);
#line 284 "dl.m"
            return;
          }
#line 275 "dl.m"
      }
#line 275 "dl.m"
  }
#line 275 "dl.m"
}

#line 275 "dl.m"
static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_4(
#line 275 "dl.m"
  void * mdb__dl__env_ptr_arg)
#line 275 "dl.m"
{
#line 275 "dl.m"
  {
#line 275 "dl.m"
    struct mdb__dl__mercury_sym_5_p_0_env_0_s * mdb__dl__env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) mdb__dl__env_ptr_arg;

#line 275 "dl.m"
    if (MR_builtin_setjmp((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__commit_0) == 0)
#line 275 "dl.m"
      {
#line 275 "dl.m"
        {
#line 275 "dl.m"
          MR_Word mdb__dl__TypeCtorInfo_27_90;
#line 275 "dl.m"
          MR_Word mdb__dl__V_75_75;
#line 275 "dl.m"
          MR_Word mdb__dl__V_76_76;
#line 276 "dl.m"
          MR_Box mdb__dl__V_12_12;

#line 378 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__mercury_sym_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 378 "dl.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2036 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 378 "dl.m"
	}
(mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded  = SUCCESS_INDICATOR;
}
#line 275 "dl.m"
          if ((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 275 "dl.m"
            {
#line 276 "dl.m"
              {
#line 276 "dl.m"
                mdb__dl__V_76_76 = mercury__type_desc__type_of_1_f_0((mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23);
              }
#line 276 "dl.m"
              {
#line 276 "dl.m"
                mdb__dl__V_75_75 = mercury__type_desc__type_args_1_f_0(mdb__dl__V_76_76);
              }
#line 2059 "mdb.dl.c"
              mdb__dl__TypeCtorInfo_27_90 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 276 "dl.m"
              {
#line 276 "dl.m"
                mercury__list__member_2_p_1(mdb__dl__TypeCtorInfo_27_90, &(mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__conv0_ArgType_73, mdb__dl__V_75_75, mdb__dl__mercury_sym_5_p_0_3, mdb__dl__env_ptr);
              }
#line 275 "dl.m"
            }
#line 275 "dl.m"
        }
#line 275 "dl.m"
        (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = MR_FALSE;
#line 275 "dl.m"
      }
#line 275 "dl.m"
    else
#line 275 "dl.m"
      (mdb__dl__env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = MR_TRUE;
#line 275 "dl.m"
  }
#line 275 "dl.m"
}

#line 72 "dl.m"
void MR_CALL 
mdb__dl__mercury_sym_5_p_0(
#line 72 "dl.m"
  MR_Word mdb__dl__TypeInfo_for_T_23,
#line 72 "dl.m"
  MR_Word mdb__dl__Handle_6,
#line 72 "dl.m"
  MR_Word mdb__dl__MercuryProc0_7,
#line 72 "dl.m"
  MR_Word * mdb__dl__Result_8)
#line 72 "dl.m"
{
#line 72 "dl.m"
  {
#line 72 "dl.m"
    struct mdb__dl__mercury_sym_5_p_0_env_0_s mdb__dl__env;

#line 72 "dl.m"
    (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23 = mdb__dl__TypeInfo_for_T_23;
#line 166 "dl.m"
    {
#line 166 "dl.m"
      MR_Word mdb__dl__MercuryProc1_11;
#line 166 "dl.m"
      MR_Word mdb__dl__MercuryProc_13;
#line 166 "dl.m"
      MR_String mdb__dl__MangledName_14;
#line 166 "dl.m"
      MR_Word mdb__dl__Result0_15;
#line 166 "dl.m"
      MR_Word mdb__dl__IsPredOrFunc_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__dl__MercuryProc0_7, (MR_Integer) 0)));
#line 166 "dl.m"
      MR_Integer mdb__dl__ProcArity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__dl__MercuryProc0_7, (MR_Integer) 3)));
#line 166 "dl.m"
      MR_Word mdb__dl__ResultType_33;
#line 166 "dl.m"
      MR_String mdb__dl__TypeModule_34;
#line 166 "dl.m"
      MR_String mdb__dl__TypeName_35;
#line 166 "dl.m"
      MR_Integer mdb__dl__TypeArity_36;
#line 166 "dl.m"
      MR_Integer mdb__dl__TypeProcArity_37;
#line 166 "dl.m"
      MR_Word mdb__dl__V_41_41;
#line 209 "dl.m"
      MR_Word mdb__dl___Module_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__dl__MercuryProc0_7, (MR_Integer) 1)));
#line 209 "dl.m"
      MR_String mdb__dl___Name_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__dl__MercuryProc0_7, (MR_Integer) 2)));
#line 209 "dl.m"
      MR_Integer mdb__dl___Mode_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__dl__MercuryProc0_7, (MR_Integer) 4)));
#line 210 "dl.m"
      MR_Box mdb__dl__V_10_10;

#line 210 "dl.m"
      {
#line 210 "dl.m"
        mdb__dl__ResultType_33 = mercury__type_desc__type_of_1_f_0((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23);
      }
#line 211 "dl.m"
      {
#line 211 "dl.m"
        mdb__dl__V_41_41 = mercury__type_desc__type_ctor_1_f_0(mdb__dl__ResultType_33);
      }
#line 211 "dl.m"
      {
#line 211 "dl.m"
        mercury__type_desc__type_ctor_name_and_arity_4_p_0(mdb__dl__V_41_41, &mdb__dl__TypeModule_34, &mdb__dl__TypeName_35, &mdb__dl__TypeArity_36);
      }
#line 213 "dl.m"
      (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__TypeName_35, (MR_String) "func") == 0);
#line 215 "dl.m"
      if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 214 "dl.m"
        {
#line 214 "dl.m"
          mdb__dl__TypeProcArity_37 = (mdb__dl__TypeArity_36 - (MR_Integer) 1);
#line 214 "dl.m"
        }
#line 215 "dl.m"
      else
#line 216 "dl.m"
        mdb__dl__TypeProcArity_37 = mdb__dl__TypeArity_36;
#line 219 "dl.m"
      (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__TypeModule_34, (MR_String) "builtin") == 0);
#line 219 "dl.m"
      (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
#line 220 "dl.m"
      if (!((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded))
#line 220 "dl.m"
        {
#line 220 "dl.m"
          (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__TypeName_35, (MR_String) "pred") == 0);
#line 220 "dl.m"
          (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
#line 220 "dl.m"
          if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 220 "dl.m"
            {
#line 220 "dl.m"
              (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__TypeName_35, (MR_String) "func") == 0);
#line 220 "dl.m"
              (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
#line 220 "dl.m"
            }
#line 220 "dl.m"
        }
#line 225 "dl.m"
      if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 223 "dl.m"
        {
#line 223 "dl.m"
          MR_String mdb__dl__V_43_43;
#line 223 "dl.m"
          MR_String mdb__dl__V_45_45;
#line 223 "dl.m"
          MR_String mdb__dl__V_46_46;

#line 224 "dl.m"
          {
#line 224 "dl.m"
            mdb__dl__V_46_46 = mercury__type_desc__type_name_1_f_0(mdb__dl__ResultType_33);
          }
#line 224 "dl.m"
          {
#line 224 "dl.m"
            mdb__dl__V_45_45 = mercury__string__f_43_43_2_f_0(mdb__dl__V_46_46, (MR_String) "\') is not a higher-order type");
          }
#line 224 "dl.m"
          {
#line 224 "dl.m"
            mdb__dl__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_sym: result type (\140", mdb__dl__V_45_45);
          }
#line 223 "dl.m"
          {
#line 223 "dl.m"
            mercury__require__error_1_p_0(mdb__dl__V_43_43);
#line 223 "dl.m"
            return;
          }
#line 223 "dl.m"
        }
#line 225 "dl.m"
      else
#line 231 "dl.m"
        {
#line 226 "dl.m"
          (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (mdb__dl__IsPredOrFunc_28 == (MR_Integer) 0);
#line 226 "dl.m"
          if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 226 "dl.m"
            {
#line 226 "dl.m"
              (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__TypeName_35, (MR_String) "pred") == 0);
#line 226 "dl.m"
              (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
#line 226 "dl.m"
            }
#line 231 "dl.m"
          if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 229 "dl.m"
            {
#line 229 "dl.m"
              MR_String mdb__dl__Msg_38;

#line 228 "dl.m"
              {
#line 228 "dl.m"
                mercury__string__append_3_p_2((MR_String) "mercury_sym: predicate/function mismatch: ", (MR_String) "argument is a predicate, result type is a function", &mdb__dl__Msg_38);
              }
#line 230 "dl.m"
              {
#line 230 "dl.m"
                mercury__require__error_1_p_0(mdb__dl__Msg_38);
#line 230 "dl.m"
                return;
              }
#line 229 "dl.m"
            }
#line 231 "dl.m"
          else
#line 237 "dl.m"
            {
#line 232 "dl.m"
              (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (mdb__dl__IsPredOrFunc_28 == (MR_Integer) 1);
#line 232 "dl.m"
              if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 232 "dl.m"
                {
#line 232 "dl.m"
                  (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(mdb__dl__TypeName_35, (MR_String) "func") == 0);
#line 232 "dl.m"
                  (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
#line 232 "dl.m"
                }
#line 237 "dl.m"
              if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 235 "dl.m"
                {
#line 235 "dl.m"
                  MR_String mdb__dl__Msg_65;

#line 234 "dl.m"
                  {
#line 234 "dl.m"
                    mercury__string__append_3_p_2((MR_String) "mercury_sym: predicate/function mismatch: ", (MR_String) "argument is a function, result type is a predicate", &mdb__dl__Msg_65);
                  }
#line 236 "dl.m"
                  {
#line 236 "dl.m"
                    mercury__require__error_1_p_0(mdb__dl__Msg_65);
#line 236 "dl.m"
                    return;
                  }
#line 235 "dl.m"
                }
#line 237 "dl.m"
              else
#line 246 "dl.m"
                {
#line 238 "dl.m"
                  (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (mdb__dl__ProcArity_31 == mdb__dl__TypeProcArity_37);
#line 238 "dl.m"
                  (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
#line 246 "dl.m"
                  if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 240 "dl.m"
                    {
#line 240 "dl.m"
                      MR_String mdb__dl__ProcArityString_39;
#line 240 "dl.m"
                      MR_String mdb__dl__TypeArityString_40;
#line 240 "dl.m"
                      MR_Word mdb__dl__V_52_52;
#line 240 "dl.m"
                      MR_Word mdb__dl__V_54_54;
#line 240 "dl.m"
                      MR_Word mdb__dl__V_56_56;
#line 240 "dl.m"
                      MR_Word mdb__dl__V_57_57;
#line 240 "dl.m"
                      MR_Word mdb__dl__V_59_59;
#line 240 "dl.m"
                      MR_Word mdb__dl__V_61_61;
#line 240 "dl.m"
                      MR_String mdb__dl__Msg_66;

#line 240 "dl.m"
                      {
#line 240 "dl.m"
                        mercury__string__int_to_string_2_p_0(mdb__dl__ProcArity_31, &mdb__dl__ProcArityString_39);
                      }
#line 241 "dl.m"
                      {
#line 241 "dl.m"
                        mercury__string__int_to_string_2_p_0(mdb__dl__TypeProcArity_37, &mdb__dl__TypeArityString_40);
                      }
#line 244 "dl.m"
                      {
#line 244 "dl.m"
                        mdb__dl__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_61_61, 0) = ((MR_Box) (mdb__dl__TypeArityString_40));
#line 244 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__dl_scalar_common_1[0])));
#line 244 "dl.m"
                      }
#line 244 "dl.m"
                      {
#line 244 "dl.m"
                        mdb__dl__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_59_59, 0) = ((MR_Box) ((MR_String) "result type has "));
#line 244 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_59_59, 1) = ((MR_Box) (mdb__dl__V_61_61));
#line 244 "dl.m"
                      }
#line 243 "dl.m"
                      {
#line 243 "dl.m"
                        mdb__dl__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_57_57, 0) = ((MR_Box) ((MR_String) " argument(s), "));
#line 243 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_57_57, 1) = ((MR_Box) (mdb__dl__V_59_59));
#line 243 "dl.m"
                      }
#line 243 "dl.m"
                      {
#line 243 "dl.m"
                        mdb__dl__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_56_56, 0) = ((MR_Box) (mdb__dl__ProcArityString_39));
#line 243 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_56_56, 1) = ((MR_Box) (mdb__dl__V_57_57));
#line 243 "dl.m"
                      }
#line 243 "dl.m"
                      {
#line 243 "dl.m"
                        mdb__dl__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_54_54, 0) = ((MR_Box) ((MR_String) "argument has "));
#line 243 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_54_54, 1) = ((MR_Box) (mdb__dl__V_56_56));
#line 243 "dl.m"
                      }
#line 242 "dl.m"
                      {
#line 242 "dl.m"
                        mdb__dl__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_52_52, 0) = ((MR_Box) ((MR_String) "mercury_sym: arity mismatch: "));
#line 242 "dl.m"
                        MR_hl_field(MR_mktag(1), mdb__dl__V_52_52, 1) = ((MR_Box) (mdb__dl__V_54_54));
#line 242 "dl.m"
                      }
#line 242 "dl.m"
                      {
#line 242 "dl.m"
                        mercury__string__append_list_2_p_0(mdb__dl__V_52_52, &mdb__dl__Msg_66);
                      }
#line 245 "dl.m"
                      {
#line 245 "dl.m"
                        mercury__require__error_1_p_0(mdb__dl__Msg_66);
#line 245 "dl.m"
                        return;
                      }
#line 240 "dl.m"
                    }
#line 246 "dl.m"
                  else
#line 247 "dl.m"
                    mdb__dl__MercuryProc1_11 = mdb__dl__MercuryProc0_7;
#line 246 "dl.m"
                }
#line 237 "dl.m"
            }
#line 231 "dl.m"
        }
#line 275 "dl.m"
      {
#line 275 "dl.m"
        mdb__dl__mercury_sym_5_p_0_4(&mdb__dl__env);
      }
#line 288 "dl.m"
      if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 286 "dl.m"
        {
#line 286 "dl.m"
          {
#line 286 "dl.m"
            mercury__require__error_1_p_0((MR_String) "sorry, not implemented: mercury_sym for procedure with argument type \140float\' or \140char\'");
#line 286 "dl.m"
            return;
          }
#line 286 "dl.m"
        }
#line 288 "dl.m"
      else
#line 299 "dl.m"
        {
#line 289 "dl.m"
          MR_Integer mdb__dl__V_83_83;
#line 289 "dl.m"
          MR_Integer mdb__dl__V_84_84;
#line 289 "dl.m"
          MR_Word mdb__dl__V_85_85;
#line 289 "dl.m"
          MR_Word mdb__dl__V_86_86;
#line 295 "dl.m"
          MR_Box mdb__dl__V_96_96;

#line 378 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__mercury_sym_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 378 "dl.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2473 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 378 "dl.m"
	}
(mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded  = SUCCESS_INDICATOR;
}
#line 289 "dl.m"
          if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 289 "dl.m"
            {
#line 295 "dl.m"
              {
#line 295 "dl.m"
                mdb__dl__V_86_86 = mercury__type_desc__type_of_1_f_0((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23);
              }
#line 295 "dl.m"
              {
#line 295 "dl.m"
                mdb__dl__V_85_85 = mercury__type_desc__type_ctor_1_f_0(mdb__dl__V_86_86);
              }
#line 295 "dl.m"
              {
#line 295 "dl.m"
                mdb__dl__V_83_83 = mercury__type_desc__type_ctor_arity_1_f_0(mdb__dl__V_85_85);
              }
#line 295 "dl.m"
              mdb__dl__V_84_84 = (MR_Integer) 18;
#line 295 "dl.m"
              (mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (mdb__dl__V_83_83 > mdb__dl__V_84_84);
#line 289 "dl.m"
            }
#line 299 "dl.m"
          if ((mdb__dl__env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
#line 297 "dl.m"
            {
#line 297 "dl.m"
              {
#line 297 "dl.m"
                mercury__require__error_1_p_0((MR_String) "sorry, not implemented: mercury_sym for procedure with more than 18 arguments");
#line 297 "dl.m"
                return;
              }
#line 297 "dl.m"
            }
#line 299 "dl.m"
          else
#line 300 "dl.m"
            mdb__dl__MercuryProc_13 = mdb__dl__MercuryProc1_11;
#line 299 "dl.m"
        }
#line 169 "dl.m"
      {
#line 169 "dl.m"
        mdb__dl__MangledName_14 = mdb__name_mangle__proc_name_mangle_1_f_0(mdb__dl__MercuryProc_13);
      }
#line 170 "dl.m"
      {
#line 170 "dl.m"
        mdb__dl__sym_5_p_0(mdb__dl__Handle_6, mdb__dl__MangledName_14, &mdb__dl__Result0_15);
      }
#line 174 "dl.m"
      if (((MR_tag((MR_Word) mdb__dl__Result0_15)) == (MR_mktag((MR_Integer) 1))))
#line 173 "dl.m"
        *mdb__dl__Result_8 = mdb__dl__Result0_15;
#line 174 "dl.m"
      else
#line 175 "dl.m"
        {
#line 175 "dl.m"
          MR_Word mdb__dl__Address_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__dl__Result0_15, (MR_Integer) 0)));
#line 175 "dl.m"
          MR_Box mdb__dl__Closure_18;
#line 175 "dl.m"
          MR_Word mdb__dl__V_22_22;

#line 192 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__mercury_sym_5_p_0

	MR_Word ProcAddr;
	MR_Word Closure;

	ProcAddr =  mdb__dl__Address_17 ;
		{
#line 192 "dl.m"
{
    MR_save_transient_hp();
    Closure = (MR_Word) MR_make_closure((MR_Code *) ProcAddr);
    MR_restore_transient_hp();
}
#line 2566 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 mdb__dl__V_22_22  = Closure;
#line 192 "dl.m"
}
#line 176 "dl.m"
          mdb__dl__Closure_18 = ((MR_Box) (mdb__dl__V_22_22));
#line 177 "dl.m"
          {
#line 177 "dl.m"
            MR_Word base;
#line 177 "dl.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 177 "dl.m"
            *mdb__dl__Result_8 = base;
#line 177 "dl.m"
            MR_hl_field(MR_mktag(0), base, 0) = mdb__dl__Closure_18;
#line 177 "dl.m"
          }
#line 175 "dl.m"
        }
#line 166 "dl.m"
    }
#line 72 "dl.m"
  }
#line 72 "dl.m"
}

#line 51 "dl.m"
void MR_CALL 
mdb__dl__sym_5_p_0(
#line 51 "dl.m"
  MR_Word mdb__dl__HeadVar__1_1,
#line 51 "dl.m"
  MR_String mdb__dl__Name_7,
#line 51 "dl.m"
  MR_Word * mdb__dl__Result_8)
#line 51 "dl.m"
{
#line 303 "dl.m"
  {
#line 303 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 303 "dl.m"
    MR_Word mdb__dl__Handle_6 = (MR_Word) mdb__dl__HeadVar__1_1;
#line 303 "dl.m"
    MR_Word mdb__dl__Pointer_10;

#line 318 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__sym_5_p_0

	MR_Word Handle;
	MR_String Name;
	MR_Word Pointer;

	Handle =  mdb__dl__Handle_6 ;
	Name =  mdb__dl__Name_7 ;
		{
#line 318 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLSYM)
    Pointer = (MR_Word) dlsym((void *) Handle, Name);
#else
    Pointer = (MR_Word) NULL;
#endif
}
#line 2635 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 mdb__dl__Pointer_10  = Pointer;
#line 318 "dl.m"
}
#line 123 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__sym_5_p_0

	MR_Word Pointer;
	MR_bool SUCCESS_INDICATOR;

	Pointer =  mdb__dl__Pointer_10 ;
		{
#line 123 "dl.m"

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)

#line 2655 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 123 "dl.m"
	}
mdb__dl__succeeded  = SUCCESS_INDICATOR;
}
#line 308 "dl.m"
    if (mdb__dl__succeeded)
#line 306 "dl.m"
      {
#line 306 "dl.m"
        MR_String mdb__dl__ErrorMsg_11;

#line 334 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__sym_5_p_0

	MR_String ErrorMsg;

		{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
}
#line 2692 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 mdb__dl__ErrorMsg_11  = ErrorMsg;
#line 334 "dl.m"
}
#line 307 "dl.m"
        {
#line 307 "dl.m"
          MR_Word base;
#line 307 "dl.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 307 "dl.m"
          *mdb__dl__Result_8 = base;
#line 307 "dl.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__dl__ErrorMsg_11));
#line 307 "dl.m"
        }
#line 306 "dl.m"
      }
#line 308 "dl.m"
    else
#line 309 "dl.m"
      {
#line 309 "dl.m"
        MR_Word base;
#line 309 "dl.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 309 "dl.m"
        *mdb__dl__Result_8 = base;
#line 309 "dl.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__dl__Pointer_10));
#line 309 "dl.m"
      }
#line 303 "dl.m"
  }
#line 51 "dl.m"
}

#line 46 "dl.m"
void MR_CALL 
mdb__dl__open_6_p_0(
#line 46 "dl.m"
  MR_String mdb__dl__FileName_7,
#line 46 "dl.m"
  MR_Word mdb__dl__Mode_8,
#line 46 "dl.m"
  MR_Word mdb__dl__Scope_9,
#line 46 "dl.m"
  MR_Word * mdb__dl__Result_10)
#line 46 "dl.m"
{
#line 130 "dl.m"
  {
#line 130 "dl.m"
    MR_bool mdb__dl__succeeded;
#line 130 "dl.m"
    MR_Word mdb__dl__Pointer_12;

#line 149 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__open_6_p_0

	MR_String FileName;
	MR_Word Mode;
	MR_Word Scope;
	MR_Word Result;

	FileName =  mdb__dl__FileName_7 ;
	Mode =  mdb__dl__Mode_8 ;
	Scope =  mdb__dl__Scope_9 ;
		{
#line 149 "dl.m"
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLOPEN)  && defined(RTLD_NOW) && defined(RTLD_LAZY)
    int mode = (Mode ? RTLD_NOW : RTLD_LAZY);
    /* not all systems have RTLD_GLOBAL */
    #ifdef RTLD_GLOBAL
      if (Scope) mode |= RTLD_GLOBAL;
    #endif
    Result = (MR_Word) dlopen(FileName, mode);
#else
    Result = (MR_Word) NULL;
#endif
}
#line 2778 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 mdb__dl__Pointer_12  = Result;
#line 149 "dl.m"
}
#line 123 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__open_6_p_0

	MR_Word Pointer;
	MR_bool SUCCESS_INDICATOR;

	Pointer =  mdb__dl__Pointer_12 ;
		{
#line 123 "dl.m"

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)

#line 2798 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 123 "dl.m"
	}
mdb__dl__succeeded  = SUCCESS_INDICATOR;
}
#line 135 "dl.m"
    if (mdb__dl__succeeded)
#line 133 "dl.m"
      {
#line 133 "dl.m"
        MR_String mdb__dl__ErrorMsg_13;

#line 334 "dl.m"
{
#define MR_PROC_LABEL mdb__dl__open_6_p_0

	MR_String ErrorMsg;

		{
#line 334 "dl.m"
{
    const char *msg;

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLERROR)
    msg = dlerror();
    if (msg == NULL) msg = "";
#else
    MR_make_aligned_string(msg, "sorry, not implemented: "
        "dynamic linking not supported on this platform");
#endif

    MR_make_aligned_string_copy(ErrorMsg, msg);
}
#line 2835 "mdb.dl.c"

		;}
#undef MR_PROC_LABEL
	 mdb__dl__ErrorMsg_13  = ErrorMsg;
#line 334 "dl.m"
}
#line 134 "dl.m"
        {
#line 134 "dl.m"
          MR_Word base;
#line 134 "dl.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 134 "dl.m"
          *mdb__dl__Result_10 = base;
#line 134 "dl.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__dl__ErrorMsg_13));
#line 134 "dl.m"
        }
#line 133 "dl.m"
      }
#line 135 "dl.m"
    else
#line 136 "dl.m"
      {
#line 136 "dl.m"
        MR_Word mdb__dl__V_18_18 = (MR_Word) mdb__dl__Pointer_12;

#line 136 "dl.m"
        {
#line 136 "dl.m"
          MR_Word base;
#line 136 "dl.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 136 "dl.m"
          *mdb__dl__Result_10 = base;
#line 136 "dl.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__dl__V_18_18));
#line 136 "dl.m"
        }
#line 136 "dl.m"
      }
#line 130 "dl.m"
  }
#line 46 "dl.m"
}

void mercury__mdb__dl__init(void)
{
}

void mercury__mdb__dl__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__dl__mdb__dl__type_ctor_info_dl_result_1);
	MR_register_type_ctor_info(&mdb__dl__mdb__dl__type_ctor_info_dl_result_0);
	MR_register_type_ctor_info(&mdb__dl__mdb__dl__type_ctor_info_handle_0);
	MR_register_type_ctor_info(&mdb__dl__mdb__dl__type_ctor_info_link_mode_0);
	MR_register_type_ctor_info(&mdb__dl__mdb__dl__type_ctor_info_scope_0);
}

void mercury__mdb__dl__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.dl. */
