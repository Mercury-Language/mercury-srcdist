/*
** Automatically generated from `dl.m'
** by the Mercury compiler,
** version rotd-2022-05-02
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


// :- module mdb.dl.
// :- implementation.

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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdb.name_mangle.mih"



struct mdb__dl__mercury_sym_5_p_0_env_0_s {
  MR_Word mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23;
  MR_bool mdb__dl__mercury_sym_5_p_0_env_0__succeeded;
  jmp_buf mdb__dl__mercury_sym_5_p_0_env_0__commit_0;
  MR_Word mdb__dl__mercury_sym_5_p_0_env_0__ArgType_69;
  MR_Word mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_70;
  MR_String mdb__dl__mercury_sym_5_p_0_env_0__Var_75;
  MR_Box mdb__dl__mercury_sym_5_p_0_env_0__conv0_ArgType_69;
};


static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_0[1];

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0;

static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_1[1];

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1;

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_0[1];

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_1[1];

static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_1[2];

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_1[2];

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_1[2];

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0;

static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_0_1[1];

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1;

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_0[1];

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_1[1];

static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_0[2];

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_0[2];

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_0[2];

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_handle_0[1];

static const MR_NotagFunctorDesc mdb__dl__mdb__dl__notag_functor_desc_handle_0;

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0;

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1;

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_ordinal_ordered_link_mode_0[2];

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_link_mode_0[2];

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_link_mode_0[2];

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_0;

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_1;

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_ordinal_ordered_scope_0[2];

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_scope_0[2];

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_scope_0[2];

static MR_bool MR_CALL 
mdb__dl__high_level_code_0_p_0(void);

static void MR_CALL 
mdb__dl__dlclose_3_p_0(
  MR_Word Handle_1);

static void MR_CALL 
mdb__dl__dlerror_3_p_0(
  MR_String * ErrorMsg_1);

static void MR_CALL 
mdb__dl__dlsym_5_p_0(
  MR_Word Handle_1,
  MR_String Name_2,
  MR_Word * Pointer_3);

static MR_Word MR_CALL 
mdb__dl__make_closure_1_f_0(
  MR_Word ProcAddr_1);

static void MR_CALL 
mdb__dl__dlopen_6_p_0(
  MR_String FileName_1,
  MR_Word Mode_2,
  MR_Word Scope_3,
  MR_Word * Result_4);

static MR_bool MR_CALL 
mdb__dl__is_null_1_p_0(
  MR_Word Pointer_1);

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__dl____Compare____dl_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__dl____Compare____dl_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__dl____Unify____handle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__dl____Compare____handle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__dl____Unify____link_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__dl____Compare____link_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__dl____Unify____scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__dl____Compare____scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__dl_scalar_common_1[1][2];




static /* final */ const MR_Box mdb__dl_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) " arguments(s)")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.dl.mh"



static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0 = {
  (MR_String) "dl_ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__dl__mdb__dl__field_types_dl_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1 = {
  (MR_String) "dl_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__dl__mdb__dl__field_types_dl_result_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_0[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0
};

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_1[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1
};

static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_1[2] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_1,
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_1_0
};

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_dl_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__dl____Unify____dl_result_1_0_10001)),
  ((MR_Box) (mdb__dl____Compare____dl_result_1_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "dl_result",
  { mdb__dl__mdb__dl__du_name_ordered_dl_result_1 },
  { mdb__dl__mdb__dl__du_ptag_ordered_dl_result_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__dl__mdb__dl__functor_number_map_dl_result_1,

};

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0 = {
  (MR_String) "dl_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__dl__mdb__dl__field_types_dl_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1 = {
  (MR_String) "dl_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__dl__mdb__dl__field_types_dl_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_0[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0
};

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_1[1] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1
};

static const MR_DuPtagLayout mdb__dl__mdb__dl__du_ptag_ordered_dl_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__dl__mdb__dl__du_stag_ordered_dl_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__dl__mdb__dl__du_name_ordered_dl_result_0[2] = {
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_1,
  &mdb__dl__mdb__dl__du_functor_desc_dl_result_0_0
};

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_dl_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_dl_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__dl____Unify____dl_result_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____dl_result_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "dl_result",
  { mdb__dl__mdb__dl__du_name_ordered_dl_result_0 },
  { mdb__dl__mdb__dl__du_ptag_ordered_dl_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__dl__mdb__dl__functor_number_map_dl_result_0,

};

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_handle_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__dl__mdb__dl__notag_functor_desc_handle_0 = {
  (MR_String) "handle",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_handle_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__dl____Unify____handle_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____handle_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "handle",
  { &mdb__dl__mdb__dl__notag_functor_desc_handle_0 },
  { &mdb__dl__mdb__dl__notag_functor_desc_handle_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__dl__mdb__dl__functor_number_map_handle_0,

};

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0 = {
  (MR_String) "lazy",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1 = {
  (MR_String) "now",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_ordinal_ordered_link_mode_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0,
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1
};

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_link_mode_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_0,
  &mdb__dl__mdb__dl__enum_functor_desc_link_mode_0_1
};

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_link_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_link_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__dl____Unify____link_mode_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____link_mode_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "link_mode",
  { mdb__dl__mdb__dl__enum_name_ordered_link_mode_0 },
  { mdb__dl__mdb__dl__enum_ordinal_ordered_link_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__dl__mdb__dl__functor_number_map_link_mode_0,

};

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_0 = {
  (MR_String) "scope_local",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__dl__mdb__dl__enum_functor_desc_scope_0_1 = {
  (MR_String) "scope_global",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_ordinal_ordered_scope_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_0,
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_1
};

static const MR_EnumFunctorDescPtr mdb__dl__mdb__dl__enum_name_ordered_scope_0[2] = {
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_1,
  &mdb__dl__mdb__dl__enum_functor_desc_scope_0_0
};

static const MR_Integer mdb__dl__mdb__dl__functor_number_map_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__dl__mdb__dl__type_ctor_info_scope_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__dl____Unify____scope_0_0_10001)),
  ((MR_Box) (mdb__dl____Compare____scope_0_0_10001)),
  (MR_String) "mdb.dl",
  (MR_String) "scope",
  { mdb__dl__mdb__dl__enum_name_ordered_scope_0 },
  { mdb__dl__mdb__dl__enum_ordinal_ordered_scope_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__dl__mdb__dl__functor_number_map_scope_0,

};

void MR_CALL 
mdb__dl____Compare____scope_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mdb__dl____Unify____scope_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__dl____Compare____link_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mdb__dl____Unify____link_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__dl____Compare____handle_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mdb__dl____Unify____handle_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mdb__dl____Compare____dl_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

MR_bool MR_CALL 
mdb__dl____Unify____dl_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__dl____Compare____dl_result_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_17 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__dl____Unify____dl_result_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__dl__high_level_code_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__dl__high_level_code_0_p_0

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

static void MR_CALL 
mdb__dl__dlclose_3_p_0(
  MR_Word Handle_1)
{
{
#define MR_PROC_LABEL mdb__dl__dlclose_3_p_0

	MR_Word Handle;

	Handle = Handle_1 ;
		{

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLCLOSE)
    dlclose((void *) Handle);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
mdb__dl__dlerror_3_p_0(
  MR_String * ErrorMsg_1)
{
{
#define MR_PROC_LABEL mdb__dl__dlerror_3_p_0

	MR_String ErrorMsg;

		{
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

		;}
#undef MR_PROC_LABEL
	*ErrorMsg_1  = ErrorMsg;
}
}

static void MR_CALL 
mdb__dl__dlsym_5_p_0(
  MR_Word Handle_1,
  MR_String Name_2,
  MR_Word * Pointer_3)
{
{
#define MR_PROC_LABEL mdb__dl__dlsym_5_p_0

	MR_Word Handle;
	MR_String Name;
	MR_Word Pointer;

	Handle = Handle_1 ;
	Name = Name_2 ;
		{
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLSYM)
    Pointer = (MR_Word) dlsym((void *) Handle, Name);
#else
    Pointer = (MR_Word) NULL;
#endif
}

		;}
#undef MR_PROC_LABEL
	*Pointer_3  = Pointer;
}
}

static MR_Word MR_CALL 
mdb__dl__make_closure_1_f_0(
  MR_Word ProcAddr_1)
{
  MR_Word Closure_2;

{
#define MR_PROC_LABEL mdb__dl__make_closure_1_f_0

	MR_Word ProcAddr;
	MR_Word Closure;

	ProcAddr = ProcAddr_1 ;
		{
{
    MR_save_transient_hp();
    Closure = (MR_Word) MR_make_closure((MR_Code *) ProcAddr);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	Closure_2  = Closure;
}
  return Closure_2;
}

static void MR_CALL 
mdb__dl__dlopen_6_p_0(
  MR_String FileName_1,
  MR_Word Mode_2,
  MR_Word Scope_3,
  MR_Word * Result_4)
{
{
#define MR_PROC_LABEL mdb__dl__dlopen_6_p_0

	MR_String FileName;
	MR_Word Mode;
	MR_Word Scope;
	MR_Word Result;

	FileName = FileName_1 ;
	Mode = Mode_2 ;
	Scope = Scope_3 ;
		{
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

		;}
#undef MR_PROC_LABEL
	*Result_4  = Result;
}
}

static MR_bool MR_CALL 
mdb__dl__is_null_1_p_0(
  MR_Word Pointer_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdb__dl__is_null_1_p_0

	MR_Word Pointer;
	MR_bool SUCCESS_INDICATOR;

	Pointer = Pointer_1 ;
		{

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mdb__dl__close_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word Handle_5 = (MR_Word) (HeadVar__1_1);
  MR_String ErrorMsg_8;

{
#define MR_PROC_LABEL mdb__dl__close_4_p_0

	MR_Word Handle;

	Handle = Handle_5 ;
		{

#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLCLOSE)
    dlclose((void *) Handle);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mdb__dl__close_4_p_0

	MR_String ErrorMsg;

		{
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

		;}
#undef MR_PROC_LABEL
	ErrorMsg_8  = ErrorMsg;
}
  succeeded = (strcmp(ErrorMsg_8, (MR_String) "") == 0);
  if (succeeded)
    *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorMsg_8));
    }
}

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_1(
  void * env_ptr_arg)
{
  struct mdb__dl__mercury_sym_5_p_0_env_0_s * env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_3(
  void * env_ptr_arg)
{
  struct mdb__dl__mercury_sym_5_p_0_env_0_s * env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgType_69 = ((MR_Word) ((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__conv0_ArgType_69));
  mdb__dl__mercury_sym_5_p_0_2(env_ptr);
}

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_2(
  void * env_ptr_arg)
{
  struct mdb__dl__mercury_sym_5_p_0_env_0_s * env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_70 = mercury__type_desc__type_ctor_1_f_0((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgType_69);
  {
    MR_String Var_74;

    Var_74 = mercury__type_desc__type_ctor_name_1_f_0((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_70);
    (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(Var_74, (MR_String) "float") == 0);
  }
  if (!((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded))
  {
    MR_String Var_73;

    Var_73 = mercury__type_desc__type_ctor_name_1_f_0((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_70);
    (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(Var_73, (MR_String) "char") == 0);
  }
  if ((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
  {
    (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__Var_75 = mercury__type_desc__type_ctor_module_name_1_f_0((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__ArgTypeCtor_70);
    (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__Var_75, (MR_String) "builtin") == 0);
    if ((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
      mdb__dl__mercury_sym_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mdb__dl__mercury_sym_5_p_0_4(
  void * env_ptr_arg)
{
  struct mdb__dl__mercury_sym_5_p_0_env_0_s * env_ptr = (struct mdb__dl__mercury_sym_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeCtorInfo_25_84;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Box Var_12;

{
#define MR_PROC_LABEL mdb__dl__mercury_sym_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
(env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded  = SUCCESS_INDICATOR;
}
        if ((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
        {
          Var_72 = mercury__type_desc__type_of_1_f_0((env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23);
          Var_71 = mercury__type_desc__type_args_1_f_0(Var_72);
          TypeCtorInfo_25_84 = (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0);
          mercury__list__member_2_p_1(TypeCtorInfo_25_84, &(env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__conv0_ArgType_69, Var_71, mdb__dl__mercury_sym_5_p_0_3, env_ptr);
        }
      }
      (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->mdb__dl__mercury_sym_5_p_0_env_0__succeeded = MR_TRUE;
}

void MR_CALL 
mdb__dl__mercury_sym_5_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Handle_6,
  MR_Word MercuryProc0_7,
  MR_Word * Result_8)
{
  struct mdb__dl__mercury_sym_5_p_0_env_0_s env;

  (env).mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23 = TypeInfo_for_T_23;
  {
    MR_Word MercuryProc1_11;
    MR_Word MercuryProc_13;
    MR_String MangledName_14;
    MR_Word Result0_15;
    MR_Word IsPredOrFunc_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MercuryProc0_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer ProcArity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MercuryProc0_7, (MR_Integer) 3))));
    MR_Word ResultType_29;
    MR_String TypeModule_30;
    MR_String TypeName_31;
    MR_Integer TypeArity_32;
    MR_Integer TypeProcArity_33;
    MR_Word Var_37;
    MR_Word _Module_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MercuryProc0_7, (MR_Integer) 1))));
    MR_String _Name_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), MercuryProc0_7, (MR_Integer) 2))));
    MR_Integer _Mode_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MercuryProc0_7, (MR_Integer) 4))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), MercuryProc0_7, (MR_Integer) 0)));
    MR_Box Var_10;

    ResultType_29 = mercury__type_desc__type_of_1_f_0((env).mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23);
    Var_37 = mercury__type_desc__type_ctor_1_f_0(ResultType_29);
    mercury__type_desc__type_ctor_name_and_arity_4_p_0(Var_37, &TypeModule_30, &TypeName_31, &TypeArity_32);
    (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(TypeName_31, (MR_String) "func") == 0);
    if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
      TypeProcArity_33 = (MR_Integer) ((MR_Unsigned) TypeArity_32 - (MR_Unsigned) 1);
    else
      TypeProcArity_33 = TypeArity_32;
    (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(TypeModule_30, (MR_String) "builtin") == 0);
    (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
    if (!((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded))
    {
      (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(TypeName_31, (MR_String) "pred") == 0);
      (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
      if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
      {
        (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(TypeName_31, (MR_String) "func") == 0);
        (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
      }
    }
    if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
    {
      MR_String Var_40;
      MR_String Var_42;
      MR_String Var_43;
      MR_String Var_44;

      Var_43 = mercury__type_desc__type_name_1_f_0(ResultType_29);
      Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "\')", (MR_String) " is not a higher-order type");
      Var_42 = mercury__string__f_43_43_2_f_0(Var_43, Var_44);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "result type (\140", Var_42);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.dl.check_proc_spec_matches_result_type\'/4", Var_40);
        return;
      }
    }
    else
    {
      (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (IsPredOrFunc_24 == (MR_Integer) 0);
      if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
      {
        (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(TypeName_31, (MR_String) "pred") == 0);
        (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
      }
      if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
      {
        MR_String Var_48;

        Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "predicate/function mismatch: ", (MR_String) "argument is a predicate, result type is a function");
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.dl.check_proc_spec_matches_result_type\'/4", Var_48);
          return;
        }
      }
      else
      {
        (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (IsPredOrFunc_24 == (MR_Integer) 1);
        if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
        {
          (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (strcmp(TypeName_31, (MR_String) "func") == 0);
          (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = !((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded);
        }
        if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
        {
          MR_String Var_52;

          Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "predicate/function mismatch: ", (MR_String) "argument is a function, result type is a predicate");
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.dl.check_proc_spec_matches_result_type\'/4", Var_52);
            return;
          }
        }
        else
        {
          (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (ProcArity_27 != TypeProcArity_33);
          if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
          {
            MR_String ProcArityString_34;
            MR_String TypeArityString_35;
            MR_String Msg_36;
            MR_Word Var_55;
            MR_Word Var_57;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_62;
            MR_Word Var_64;

            mercury__string__int_to_string_2_p_0(ProcArity_27, &ProcArityString_34);
            mercury__string__int_to_string_2_p_0(TypeProcArity_33, &TypeArityString_35);
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (TypeArityString_35));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__dl_scalar_common_1[0])));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "result type has "));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_String) " argument(s), "));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ProcArityString_34));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_String) "argument has "));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) "arity mismatch: "));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
            }
            mercury__string__append_list_2_p_0(Var_55, &Msg_36);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.dl.check_proc_spec_matches_result_type\'/4", Msg_36);
              return;
            }
          }
          else
            MercuryProc1_11 = MercuryProc0_7;
        }
      }
    }
    mdb__dl__mercury_sym_5_p_0_4(&env);
    if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140mdb.dl.check_type_is_supported\'/4", (MR_String) "procedure with argument type \140float\' or \140char\'");
        return;
      }
    else
    {
      MR_Integer Var_78;
      MR_Integer Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Box Var_85;

{
#define MR_PROC_LABEL mdb__dl__mercury_sym_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
(env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded  = SUCCESS_INDICATOR;
}
      if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
      {
        Var_81 = mercury__type_desc__type_of_1_f_0((env).mdb__dl__mercury_sym_5_p_0_env_0__TypeInfo_for_T_23);
        Var_80 = mercury__type_desc__type_ctor_1_f_0(Var_81);
        Var_78 = mercury__type_desc__type_ctor_arity_1_f_0(Var_80);
        Var_79 = (MR_Integer) 18;
        (env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded = (Var_78 > Var_79);
      }
      if ((env).mdb__dl__mercury_sym_5_p_0_env_0__succeeded)
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140mdb.dl.check_type_is_supported\'/4", (MR_String) "procedure with more than 18 arguments");
          return;
        }
      else
        MercuryProc_13 = MercuryProc1_11;
    }
    MangledName_14 = mdb__name_mangle__proc_name_mangle_1_f_0(MercuryProc_13);
    mdb__dl__sym_5_p_0(Handle_6, MangledName_14, &Result0_15);
    if (((MR_tag((MR_Word) Result0_15)) == (MR_Integer) 1))
      *Result_8 = Result0_15;
    else
    {
      MR_Word Address_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_15, (MR_Integer) 0))));
      MR_Box Closure_18;
      MR_Word Var_22;

{
#define MR_PROC_LABEL mdb__dl__mercury_sym_5_p_0

	MR_Word ProcAddr;
	MR_Word Closure;

	ProcAddr = Address_17 ;
		{
{
    MR_save_transient_hp();
    Closure = (MR_Word) MR_make_closure((MR_Code *) ProcAddr);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	Var_22  = Closure;
}
      Closure_18 = ((MR_Box) (Var_22));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = Closure_18;
      }
    }
  }
}

void MR_CALL 
mdb__dl__sym_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word Handle_6 = (MR_Word) (HeadVar__1_1);
  MR_Word Pointer_10;

{
#define MR_PROC_LABEL mdb__dl__sym_5_p_0

	MR_Word Handle;
	MR_String Name;
	MR_Word Pointer;

	Handle = Handle_6 ;
	Name = Name_7 ;
		{
{
#if defined(MR_HAVE_DLFCN_H) && defined(MR_HAVE_DLSYM)
    Pointer = (MR_Word) dlsym((void *) Handle, Name);
#else
    Pointer = (MR_Word) NULL;
#endif
}

		;}
#undef MR_PROC_LABEL
	Pointer_10  = Pointer;
}
{
#define MR_PROC_LABEL mdb__dl__sym_5_p_0

	MR_Word Pointer;
	MR_bool SUCCESS_INDICATOR;

	Pointer = Pointer_10 ;
		{

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String ErrorMsg_11;

{
#define MR_PROC_LABEL mdb__dl__sym_5_p_0

	MR_String ErrorMsg;

		{
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

		;}
#undef MR_PROC_LABEL
	ErrorMsg_11  = ErrorMsg;
}
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorMsg_11));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pointer_10));
    }
}

void MR_CALL 
mdb__dl__open_6_p_0(
  MR_String FileName_7,
  MR_Word Mode_8,
  MR_Word Scope_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word Pointer_12;

{
#define MR_PROC_LABEL mdb__dl__open_6_p_0

	MR_String FileName;
	MR_Word Mode;
	MR_Word Scope;
	MR_Word Result;

	FileName = FileName_7 ;
	Mode = Mode_8 ;
	Scope = Scope_9 ;
		{
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

		;}
#undef MR_PROC_LABEL
	Pointer_12  = Result;
}
{
#define MR_PROC_LABEL mdb__dl__open_6_p_0

	MR_Word Pointer;
	MR_bool SUCCESS_INDICATOR;

	Pointer = Pointer_12 ;
		{

    SUCCESS_INDICATOR = ((void *) Pointer == NULL)


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String ErrorMsg_13;

{
#define MR_PROC_LABEL mdb__dl__open_6_p_0

	MR_String ErrorMsg;

		{
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

		;}
#undef MR_PROC_LABEL
	ErrorMsg_13  = ErrorMsg;
}
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorMsg_13));
    }
  }
  else
  {
    MR_Word Var_18 = (MR_Word) (Pointer_12);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
    }
  }
}

static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__dl____Unify____dl_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__dl____Compare____dl_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__dl____Compare____dl_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__dl____Unify____dl_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__dl____Unify____dl_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__dl____Compare____dl_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__dl____Compare____dl_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__dl____Unify____handle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__dl____Unify____handle_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__dl____Compare____handle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__dl____Compare____handle_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__dl____Unify____link_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__dl____Unify____link_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__dl____Compare____link_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__dl____Compare____link_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__dl____Unify____scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__dl____Unify____scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__dl____Compare____scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__dl____Compare____scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__dl__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.dl.
