/*
** Automatically generated from `rtti_access.m'
** by the Mercury compiler,
** version rotd-2023-06-05
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


// :- module mdbcomp.rtti_access.
// :- implementation.

/*
INIT mercury__mdbcomp__rtti_access__init
ENDINIT
*/

#include "mdbcomp.rtti_access.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
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
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"




static const MR_PseudoTypeInfo mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_bytecode_0_0[2];

static const MR_DuFunctorDesc mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_bytecode_0_0;

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_bytecode_0_0[1];

static const MR_DuPtagLayout mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_bytecode_0[1];

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_bytecode_0[1];

static const MR_Integer mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_bytecode_0[1];

static const MR_PseudoTypeInfo mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_string_table_0_0[2];

static const MR_DuFunctorDesc mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_string_table_0_0;

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_string_table_0_0[1];

static const MR_DuPtagLayout mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_string_table_0[1];

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_string_table_0[1];

static const MR_Integer mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_string_table_0[1];

static void MR_CALL 
mdbcomp__rtti_access__bytecode_string_table_2_4_p_0(
  MR_Word TypeInfo_for_Offset_5,
  MR_Word TypeInfo_for_Size_6,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mdbcomp__rtti_access__read_int32_2_4_p_0(
  MR_Box ByteCode_1,
  MR_Integer * Value_2,
  MR_Integer Pos0_3,
  MR_Integer * Pos_4);

static void MR_CALL 
mdbcomp__rtti_access__read_short_2_4_p_0(
  MR_Box ByteCode_1,
  MR_Integer * Value_2,
  MR_Integer Pos0_3,
  MR_Integer * Pos_4);

static void MR_CALL 
mdbcomp__rtti_access__read_byte_2_4_p_0(
  MR_Box ByteCode_1,
  MR_Integer * Value_2,
  MR_Integer Pos0_3,
  MR_Integer * Pos_4);

static MR_String MR_CALL 
mdbcomp__rtti_access__lookup_string_table_2_3_f_0(
  MR_Box StringTableChars_1,
  MR_Integer StringTableSize_2,
  MR_Integer NameCode_3);

static void MR_CALL 
mdbcomp__rtti_access__module_string_table_components_3_p_0(
  MR_Box ModuleLayout_1,
  MR_Box * StringTableChars_2,
  MR_Integer * Size_3);

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_p_0(
  MR_Box Layout_1,
  MR_Word * PredOrFunc_2,
  MR_String * DeclModule_3,
  MR_String * DefModule_4,
  MR_String * PredName_5,
  MR_Integer * Arity_6,
  MR_Integer * ModeNum_7);

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_uci_fields_7_p_0(
  MR_Box Layout_1,
  MR_String * TypeName_2,
  MR_String * TypeModule_3,
  MR_String * DefModule_4,
  MR_String * PredName_5,
  MR_Integer * TypeArity_6,
  MR_Integer * ModeNum_7);

static MR_bool MR_CALL 
mdbcomp__rtti_access__proc_layout_is_uci_1_p_0(
  MR_Box Layout_1);

static MR_Box MR_CALL 
mdbcomp__rtti_access__encode_len_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdbcomp__rtti_access__encode_num_2_3_p_0(
  MR_Integer Num_4,
  MR_Word RestBytes_5,
  MR_Word * Bytes_6);

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_len_string_2_6_p_0(
  MR_Word ByteCode_7,
  MR_Integer N_8,
  MR_Word STATE_VARIABLE_RevChars_0_13,
  MR_Word * STATE_VARIABLE_RevChars_14,
  MR_Integer STATE_VARIABLE_Pos_0_15,
  MR_Integer * STATE_VARIABLE_Pos_16);

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_line_2_5_p_0(
  MR_Word ByteCode_6,
  MR_Word STATE_VARIABLE_RevChars_0_11,
  MR_Word * STATE_VARIABLE_RevChars_12,
  MR_Integer STATE_VARIABLE_Pos_0_13,
  MR_Integer * STATE_VARIABLE_Pos_14);

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_num_2_5_p_0(
  MR_Word ByteCode_6,
  MR_Integer Num0_7,
  MR_Integer * Num_8,
  MR_Integer STATE_VARIABLE_Pos_0_12,
  MR_Integer * STATE_VARIABLE_Pos_13);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_bytes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_bytes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____label_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____label_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____module_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____module_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____proc_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____proc_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_chars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_chars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_1[1][5];

static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_2[1][3];




static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_1[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mdbcomp__rtti_access_scalar_common_1[0])),
    ((MR_Box) (mdbcomp__rtti_access__encode_len_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_PseudoTypeInfo mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_bytecode_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_bytecode_0_0 = {
  (MR_String) "bytecode",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_bytecode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_bytecode_0_0[1] = { &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_bytecode_0_0 };

static const MR_DuPtagLayout mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_bytecode_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_bytecode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_bytecode_0[1] = { &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_bytecode_0_0 };

static const MR_Integer mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_bytecode_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__rtti_access____Unify____bytecode_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____bytecode_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "bytecode",
  { mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_bytecode_0 },
  { mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_bytecode_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_bytecode_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____bytecode_bytes_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____bytecode_bytes_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "bytecode_bytes",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____label_layout_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____label_layout_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "label_layout",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_module_layout_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____module_layout_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____module_layout_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "module_layout",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____proc_layout_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____proc_layout_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "proc_layout",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_string_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_chars_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_string_table_0_0 = {
  (MR_String) "string_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_string_table_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_string_table_0_0[1] = { &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_string_table_0_0 };

static const MR_DuPtagLayout mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_string_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_string_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_string_table_0[1] = { &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_string_table_0_0 };

static const MR_Integer mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_string_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__rtti_access____Unify____string_table_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____string_table_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "string_table",
  { mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_string_table_0 },
  { mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_string_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_string_table_0,

};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_chars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____string_table_chars_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____string_table_chars_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "string_table_chars",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_chars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_chars_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgY1_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Word Cast_HeadVar1_13 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_14 = (MR_Word) (ArgY1_5);

    mercury__builtin____Compare____c_pointer_0_0(&SubResult1_6, Cast_HeadVar1_13, Cast_HeadVar2_14);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_0_0(
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
  {
    MR_Box ArgX1_3 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Box ArgY1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Cast_HeadVar1_9 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_10 = (MR_Word) (ArgY1_4);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_9, Cast_HeadVar2_10);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__rtti_access____Compare____proc_layout_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____proc_layout_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdbcomp__rtti_access____Compare____module_layout_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____module_layout_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdbcomp__rtti_access____Compare____label_layout_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____label_layout_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_bytes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_bytes_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgY1_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Word Cast_HeadVar1_13 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_14 = (MR_Word) (ArgY1_5);

    mercury__builtin____Compare____c_pointer_0_0(&SubResult1_6, Cast_HeadVar1_13, Cast_HeadVar2_14);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_0_0(
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
  {
    MR_Box ArgX1_3 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Box ArgY1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Cast_HeadVar1_9 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_10 = (MR_Word) (ArgY1_4);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_9, Cast_HeadVar2_10);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access__bytecode_string_table_2_4_p_0(
  MR_Word TypeInfo_for_Offset_5,
  MR_Word TypeInfo_for_Size_6,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0

	const MR_uint_least8_t * Bytes;
	MR_Word Offset;
	MR_Word Size;
	MR_ConstString StringTableChars;

	Bytes = (const MR_uint_least8_t *)HeadVar__1_1 ;
	Offset = (MR_Word) HeadVar__2_2 ;
	Size = (MR_Word) HeadVar__3_3 ;
		{

    char        *buf;
    char        *table;
    MR_Unsigned i;

    MR_allocate_aligned_string_msg(buf, Size, MR_ALLOC_ID);
    table = ((char *) Bytes) + Offset;
    for (i = 0; i < Size; i++) {
        buf[i] = table[i];
    }

    StringTableChars = (MR_ConstString) buf;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) StringTableChars;
}
}

static void MR_CALL 
mdbcomp__rtti_access__read_int32_2_4_p_0(
  MR_Box ByteCode_1,
  MR_Integer * Value_2,
  MR_Integer Pos0_3,
  MR_Integer * Pos_4)
{
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_int32_2_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)ByteCode_1 ;
	Pos0 = Pos0_3 ;
		{

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;


		;}
#undef MR_PROC_LABEL
	*Value_2  = Value;
	*Pos_4  = Pos;
}
}

static void MR_CALL 
mdbcomp__rtti_access__read_short_2_4_p_0(
  MR_Box ByteCode_1,
  MR_Integer * Value_2,
  MR_Integer Pos0_3,
  MR_Integer * Pos_4)
{
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_short_2_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)ByteCode_1 ;
	Pos0 = Pos0_3 ;
		{

    Value = (ByteCode[Pos0] << 8) + ByteCode[Pos0+1];
    Pos = Pos0 + 2;


		;}
#undef MR_PROC_LABEL
	*Value_2  = Value;
	*Pos_4  = Pos;
}
}

static void MR_CALL 
mdbcomp__rtti_access__read_byte_2_4_p_0(
  MR_Box ByteCode_1,
  MR_Integer * Value_2,
  MR_Integer Pos0_3,
  MR_Integer * Pos_4)
{
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_byte_2_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)ByteCode_1 ;
	Pos0 = Pos0_3 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	*Value_2  = Value;
	*Pos_4  = Pos;
}
}

static MR_String MR_CALL 
mdbcomp__rtti_access__lookup_string_table_2_3_f_0(
  MR_Box StringTableChars_1,
  MR_Integer StringTableSize_2,
  MR_Integer NameCode_3)
{
  MR_String Str_4;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__lookup_string_table_2_3_f_0

	MR_ConstString StringTableChars;
	MR_Integer StringTableSize;
	MR_Integer NameCode;
	MR_String Str;

	StringTableChars = (MR_ConstString)StringTableChars_1 ;
	StringTableSize = StringTableSize_2 ;
	NameCode = NameCode_3 ;
		{

    MR_ConstString  str0;
    int             should_copy;

    str0 = MR_name_in_string_table(StringTableChars, StringTableSize,
        (MR_uint_least32_t)NameCode, &should_copy);
    if (should_copy) {
        MR_make_aligned_string(Str, str0);
    } else {
        MR_make_aligned_string_copy(Str, str0);
    }


		;}
#undef MR_PROC_LABEL
	Str_4  = Str;
}
  return Str_4;
}

static void MR_CALL 
mdbcomp__rtti_access__module_string_table_components_3_p_0(
  MR_Box ModuleLayout_1,
  MR_Box * StringTableChars_2,
  MR_Integer * Size_3)
{
{
#define MR_PROC_LABEL mdbcomp__rtti_access__module_string_table_components_3_p_0

	const MR_ModuleLayout * ModuleLayout;
	MR_ConstString StringTableChars;
	MR_Integer Size;

	ModuleLayout = (const MR_ModuleLayout *)ModuleLayout_1 ;
		{

    StringTableChars = ModuleLayout->MR_ml_string_table;
    Size = ModuleLayout->MR_ml_string_table_size;


		;}
#undef MR_PROC_LABEL
	*StringTableChars_2  = (MR_Box) StringTableChars;
	*Size_3  = Size;
}
}

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_p_0(
  MR_Box Layout_1,
  MR_Word * PredOrFunc_2,
  MR_String * DeclModule_3,
  MR_String * DefModule_4,
  MR_String * PredName_5,
  MR_Integer * Arity_6,
  MR_Integer * ModeNum_7)
{
{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_p_0

	const MR_ProcLayout * Layout;
	MR_Word PredOrFunc;
	MR_String DeclModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer Arity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *)Layout_1 ;
		{

    const MR_UserProcId *proc_id;

    proc_id = &Layout->MR_sle_user;

    /* The casts are there to cast away const without warnings */
    PredOrFunc = proc_id->MR_user_pred_or_func;
    DeclModule = (MR_String) (MR_Integer) proc_id->MR_user_decl_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_user_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_user_name;
    Arity      = proc_id->MR_user_pred_form_arity;
    ModeNum    = proc_id->MR_user_mode;


		;}
#undef MR_PROC_LABEL
	*PredOrFunc_2  = PredOrFunc;
	*DeclModule_3  = DeclModule;
	*DefModule_4  = DefModule;
	*PredName_5  = PredName;
	*Arity_6  = Arity;
	*ModeNum_7  = ModeNum;
}
}

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_uci_fields_7_p_0(
  MR_Box Layout_1,
  MR_String * TypeName_2,
  MR_String * TypeModule_3,
  MR_String * DefModule_4,
  MR_String * PredName_5,
  MR_Integer * TypeArity_6,
  MR_Integer * ModeNum_7)
{
{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_layout_get_uci_fields_7_p_0

	const MR_ProcLayout * Layout;
	MR_String TypeName;
	MR_String TypeModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer TypeArity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *)Layout_1 ;
		{

    const MR_UCIProcId  *proc_id;

    proc_id = &Layout->MR_sle_uci;

    /* The casts are there to cast away const without warnings */
    TypeName   = (MR_String) (MR_Integer) proc_id->MR_uci_type_name;
    TypeModule = (MR_String) (MR_Integer) proc_id->MR_uci_type_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_uci_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_uci_pred_name;
    TypeArity  = proc_id->MR_uci_type_arity;
    ModeNum    = proc_id->MR_uci_mode;


		;}
#undef MR_PROC_LABEL
	*TypeName_2  = TypeName;
	*TypeModule_3  = TypeModule;
	*DefModule_4  = DefModule;
	*PredName_5  = PredName;
	*TypeArity_6  = TypeArity;
	*ModeNum_7  = ModeNum;
}
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__proc_layout_is_uci_1_p_0(
  MR_Box Layout_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_layout_is_uci_1_p_0

	const MR_ProcLayout * Layout;
	MR_bool SUCCESS_INDICATOR;

	Layout = (const MR_ProcLayout *)Layout_1 ;
		{

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_len_string_func_1_f_0(
  MR_String String_3)
{
  MR_Word Bytes_4;

  mdbcomp__rtti_access__encode_len_string_2_p_0(String_3, &Bytes_4);
  return Bytes_4;
}

static MR_Box MR_CALL 
mdbcomp__rtti_access__encode_len_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__char__to_int_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
mdbcomp__rtti_access__encode_len_string_2_p_0(
  MR_String String_3,
  MR_Word * Bytes_4)
{
  MR_bool succeeded;
  MR_Integer Length_5;
  MR_Word LengthBytes_6;
  MR_Word Chars_7;
  MR_Word CharBytes_8;
  MR_Word BytesPrime_12;

  mercury__string__length_2_p_0(String_3, &Length_5);
  succeeded = mdbcomp__rtti_access__encode_num_2_p_0(Length_5, &BytesPrime_12);
  if (succeeded)
    LengthBytes_6 = BytesPrime_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_num_det\'/2", (MR_String) "encode_num failed");
      return;
    }
  mercury__string__to_char_list_2_p_0(String_3, &Chars_7);
  CharBytes_8 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__rtti_access_scalar_common_2[0]), Chars_7);
  *Bytes_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LengthBytes_6, CharBytes_8);
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_num_func_1_f_0(
  MR_Integer Num_3)
{
  MR_bool succeeded;
  MR_Word Bytes_4;
  MR_Word BytesPrime_5;

  succeeded = mdbcomp__rtti_access__encode_num_2_p_0(Num_3, &BytesPrime_5);
  if (succeeded)
    Bytes_4 = BytesPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_num_det\'/2", (MR_String) "encode_num failed");
  return Bytes_4;
}

void MR_CALL 
mdbcomp__rtti_access__encode_num_det_2_p_0(
  MR_Integer Num_3,
  MR_Word * Bytes_4)
{
  MR_bool succeeded;
  MR_Word BytesPrime_5;

  succeeded = mdbcomp__rtti_access__encode_num_2_p_0(Num_3, &BytesPrime_5);
  if (succeeded)
    *Bytes_4 = BytesPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_num_det\'/2", (MR_String) "encode_num failed");
      return;
    }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_num_2_p_0(
  MR_Integer Num_3,
  MR_Word * Bytes_4)
{
  MR_bool succeeded = (Num_3 >= (MR_Integer) 0);
  MR_Integer LastByte_5;
  MR_Integer NextNum_6;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Word Var_10;
  MR_Word Var_11;

  if (succeeded)
  {
    Var_8 = (MR_Integer) 127;
    LastByte_5 = (Num_3 & Var_8);
    Var_9 = (MR_Integer) 128;
    NextNum_6 = mercury__int__f_slash_2_f_0(Num_3, Var_9);
    Var_11 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (LastByte_5));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_11));
    }
    mdbcomp__rtti_access__encode_num_2_3_p_0(NextNum_6, Var_10, Bytes_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access__encode_num_2_3_p_0(
  MR_Integer Num_4,
  MR_Word RestBytes_5,
  MR_Word * Bytes_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Num_4 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Bytes_6 = RestBytes_5;
    else
    {
      MR_Integer CurByte_7;
      MR_Integer NextNum_8;
      MR_Integer Var_9 = (Num_4 & (MR_Integer) 127);
      MR_Word Var_13;
      MR_Integer next_value_of_Num_4;
      MR_Word next_value_of_RestBytes_5;

      CurByte_7 = (Var_9 | (MR_Integer) 128);
      NextNum_8 = mercury__int__f_slash_2_f_0(Num_4, (MR_Integer) 128);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (CurByte_7));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (RestBytes_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Num_4 = NextNum_8;
      next_value_of_RestBytes_5 = Var_13;
      Num_4 = next_value_of_Num_4;
      RestBytes_5 = next_value_of_RestBytes_5;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_int32_func_1_f_0(
  MR_Integer Int32_3)
{
  MR_bool succeeded;
  MR_Word Bytes_4;
  MR_Word BytesPrime_5;

  succeeded = mdbcomp__rtti_access__encode_int32_2_p_0(Int32_3, &BytesPrime_5);
  if (succeeded)
    Bytes_4 = BytesPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_int32_det\'/2", (MR_String) "encode_int32 failed");
  return Bytes_4;
}

void MR_CALL 
mdbcomp__rtti_access__encode_int32_det_2_p_0(
  MR_Integer Int32_3,
  MR_Word * Bytes_4)
{
  MR_bool succeeded;
  MR_Word BytesPrime_5;

  succeeded = mdbcomp__rtti_access__encode_int32_2_p_0(Int32_3, &BytesPrime_5);
  if (succeeded)
    *Bytes_4 = BytesPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_int32_det\'/2", (MR_String) "encode_int32 failed");
      return;
    }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_int32_2_p_0(
  MR_Integer Int32_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = (Int32_3 >= (MR_Integer) 0);
  MR_Integer Byte1_4;
  MR_Integer Byte2_5;
  MR_Integer Byte3_6;
  MR_Integer Byte4_7;
  MR_Integer Bytes123_8;
  MR_Integer Bytes12_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Integer Var_17;
  MR_Integer Var_18;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Integer Var_21;

  if (succeeded)
  {
    Var_15 = (MR_Integer) 255;
    Byte4_7 = (Int32_3 & Var_15);
    Var_16 = (MR_Integer) 256;
    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (Byte4_7));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Bytes123_8 = mercury__int__f_slash_2_f_0(Int32_3, Var_16);
    Var_17 = (MR_Integer) 255;
    Byte3_6 = (Bytes123_8 & Var_17);
    Var_18 = (MR_Integer) 256;
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (Byte3_6));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_12));
    }
    Bytes12_9 = mercury__int__f_slash_2_f_0(Bytes123_8, Var_18);
    Var_19 = (MR_Integer) 255;
    Byte2_5 = (Bytes12_9 & Var_19);
    Var_20 = (MR_Integer) 256;
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (Byte2_5));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_11));
    }
    Byte1_4 = mercury__int__f_slash_2_f_0(Bytes12_9, Var_20);
    Var_21 = (MR_Integer) 128;
    succeeded = (Byte1_4 < Var_21);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Byte1_4));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_10));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_short_func_1_f_0(
  MR_Integer Short_3)
{
  MR_bool succeeded;
  MR_Word Bytes_4;
  MR_Word BytesPrime_5;

  succeeded = mdbcomp__rtti_access__encode_short_2_p_0(Short_3, &BytesPrime_5);
  if (succeeded)
    Bytes_4 = BytesPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_short_det\'/2", (MR_String) "encode_short failed");
  return Bytes_4;
}

void MR_CALL 
mdbcomp__rtti_access__encode_short_det_2_p_0(
  MR_Integer Short_3,
  MR_Word * Bytes_4)
{
  MR_bool succeeded;
  MR_Word BytesPrime_5;

  succeeded = mdbcomp__rtti_access__encode_short_2_p_0(Short_3, &BytesPrime_5);
  if (succeeded)
    *Bytes_4 = BytesPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_short_det\'/2", (MR_String) "encode_short failed");
      return;
    }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_short_2_p_0(
  MR_Integer Short_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = (Short_3 >= (MR_Integer) 0);
  MR_Integer Byte1_4;
  MR_Integer Byte2_5;
  MR_Word Var_6;
  MR_Integer Var_9;
  MR_Integer Var_10;
  MR_Integer Var_11;

  if (succeeded)
  {
    Var_9 = (MR_Integer) 255;
    Byte2_5 = (Short_3 & Var_9);
    Var_10 = (MR_Integer) 256;
    {
      Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_6, 0) = ((MR_Box) (Byte2_5));
      MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Byte1_4 = mercury__int__f_slash_2_f_0(Short_3, Var_10);
    Var_11 = (MR_Integer) 128;
    succeeded = (Byte1_4 < Var_11);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Byte1_4));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_6));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_byte_func_1_f_0(
  MR_Integer Byte_3)
{
  MR_Word Bytes_4;

  mdbcomp__rtti_access__encode_byte_det_2_p_0(Byte_3, &Bytes_4);
  return Bytes_4;
}

void MR_CALL 
mdbcomp__rtti_access__encode_byte_det_2_p_0(
  MR_Integer Byte_3,
  MR_Word * Bytes_4)
{
  MR_bool succeeded = (Byte_3 >= (MR_Integer) 0);
  MR_Word BytesPrime_5;
  MR_Integer Var_10;

  if (succeeded)
  {
    Var_10 = (MR_Integer) 128;
    succeeded = (Byte_3 < Var_10);
    if (succeeded)
    {
      {
        BytesPrime_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BytesPrime_5, 0) = ((MR_Box) (Byte_3));
        MR_hl_field(1, BytesPrime_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    *Bytes_4 = BytesPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.rtti_access.encode_byte_det\'/2", (MR_String) "encode_byte failed");
      return;
    }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_byte_2_p_0(
  MR_Integer Byte_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = (Byte_3 >= (MR_Integer) 0);
  MR_Integer Var_6;

  if (succeeded)
  {
    Var_6 = (MR_Integer) 128;
    succeeded = (Byte_3 < Var_6);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Byte_3));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_string_table_4_p_0(
  MR_Word ByteCode_5,
  MR_Word * StringTable_6,
  MR_Integer STATE_VARIABLE_Pos_0_12,
  MR_Integer * STATE_VARIABLE_Pos_13)
{
  MR_bool succeeded;
  MR_Integer Size_8;
  MR_Box Bytes_9;
  MR_Integer NumBytes_10;
  MR_Box StringTableChars_11;
  MR_Integer STATE_VARIABLE_Pos_14_14;
  MR_Integer Var_15;

  succeeded = mdbcomp__rtti_access__read_num_2_5_p_0(ByteCode_5, (MR_Integer) 0, &Size_8, STATE_VARIABLE_Pos_0_12, &STATE_VARIABLE_Pos_14_14);
  if (succeeded)
  {
    Bytes_9 = ((MR_Box) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 0))));
    NumBytes_10 = ((MR_Integer) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 1))));
    Var_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_14_14 + (MR_Unsigned) Size_8);
    succeeded = (Var_15 <= NumBytes_10);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_string_table_4_p_0

	const MR_uint_least8_t * Bytes;
	MR_Word Offset;
	MR_Word Size;
	MR_ConstString StringTableChars;

	Bytes = (const MR_uint_least8_t *)Bytes_9 ;
	Offset = (MR_Word) ((MR_Box) (STATE_VARIABLE_Pos_14_14)) ;
	Size = (MR_Word) ((MR_Box) (Size_8)) ;
		{

    char        *buf;
    char        *table;
    MR_Unsigned i;

    MR_allocate_aligned_string_msg(buf, Size, MR_ALLOC_ID);
    table = ((char *) Bytes) + Offset;
    for (i = 0; i < Size; i++) {
        buf[i] = table[i];
    }

    StringTableChars = (MR_ConstString) buf;


		;}
#undef MR_PROC_LABEL
	StringTableChars_11  = (MR_Box) StringTableChars;
}
      *STATE_VARIABLE_Pos_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_14_14 + (MR_Unsigned) Size_8);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *StringTable_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (StringTableChars_11));
        MR_hl_field(0, base, 1) = ((MR_Box) (Size_8));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_len_string_4_p_0(
  MR_Word ByteCode_5,
  MR_String * String_6,
  MR_Integer STATE_VARIABLE_Pos_0_10,
  MR_Integer * STATE_VARIABLE_Pos_11)
{
  MR_bool succeeded;
  MR_Integer Length_8;
  MR_Word RevChars_9;
  MR_Integer STATE_VARIABLE_Pos_12_12;
  MR_Word Var_13;

  succeeded = mdbcomp__rtti_access__read_num_2_5_p_0(ByteCode_5, (MR_Integer) 0, &Length_8, STATE_VARIABLE_Pos_0_10, &STATE_VARIABLE_Pos_12_12);
  if (succeeded)
  {
    Var_13 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mdbcomp__rtti_access__read_len_string_2_6_p_0(ByteCode_5, Length_8, Var_13, &RevChars_9, STATE_VARIABLE_Pos_12_12, STATE_VARIABLE_Pos_11);
    if (succeeded)
    {
      mercury__string__from_rev_char_list_2_p_0(RevChars_9, String_6);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_len_string_2_6_p_0(
  MR_Word ByteCode_7,
  MR_Integer N_8,
  MR_Word STATE_VARIABLE_RevChars_0_13,
  MR_Word * STATE_VARIABLE_RevChars_14,
  MR_Integer STATE_VARIABLE_Pos_0_15,
  MR_Integer * STATE_VARIABLE_Pos_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_8 <= (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Pos_16 = STATE_VARIABLE_Pos_0_15;
      *STATE_VARIABLE_RevChars_14 = STATE_VARIABLE_RevChars_0_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Byte_11;
      MR_Char Char_12;
      MR_Integer STATE_VARIABLE_Pos_18_18;
      MR_Word STATE_VARIABLE_RevChars_19_19;
      MR_Integer Var_20;
      MR_Integer Var_23;
      MR_Box Bytes_24 = ((MR_Box) ((MR_hl_field(0, ByteCode_7, (MR_Integer) 0))));
      MR_Integer Size_25 = ((MR_Integer) ((MR_hl_field(0, ByteCode_7, (MR_Integer) 1))));
      MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_15 + (MR_Unsigned) 1);
      MR_Integer next_value_of_N_8;
      MR_Word next_value_of_STATE_VARIABLE_RevChars_0_13;
      MR_Integer next_value_of_STATE_VARIABLE_Pos_0_15;

      succeeded = (Var_26 <= Size_25);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_len_string_2_6_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)Bytes_24 ;
	Pos0 = STATE_VARIABLE_Pos_0_15 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	Byte_11  = Value;
	STATE_VARIABLE_Pos_18_18  = Pos;
}
        succeeded = mercury__char__from_int_2_p_0(Byte_11, &Char_12);
        if (succeeded)
        {
          Var_23 = (MR_Integer) 1;
          Var_20 = (MR_Integer) ((MR_Unsigned) N_8 - (MR_Unsigned) Var_23);
          {
            STATE_VARIABLE_RevChars_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevChars_19_19, 0) = ((MR_Box) (MR_Word) (Char_12));
            MR_hl_field(1, STATE_VARIABLE_RevChars_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_13));
          }
          // direct tailcall eliminated
          ;
          next_value_of_N_8 = Var_20;
          next_value_of_STATE_VARIABLE_RevChars_0_13 = STATE_VARIABLE_RevChars_19_19;
          next_value_of_STATE_VARIABLE_Pos_0_15 = STATE_VARIABLE_Pos_18_18;
          N_8 = next_value_of_N_8;
          STATE_VARIABLE_RevChars_0_13 = next_value_of_STATE_VARIABLE_RevChars_0_13;
          STATE_VARIABLE_Pos_0_15 = next_value_of_STATE_VARIABLE_Pos_0_15;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_line_4_p_0(
  MR_Word ByteCode_5,
  MR_String * Line_6,
  MR_Integer STATE_VARIABLE_Pos_0_9,
  MR_Integer * STATE_VARIABLE_Pos_10)
{
  MR_bool succeeded;
  MR_Word RevChars_8;

  succeeded = mdbcomp__rtti_access__read_line_2_5_p_0(ByteCode_5, (MR_Word) ((MR_Unsigned) 0U), &RevChars_8, STATE_VARIABLE_Pos_0_9, STATE_VARIABLE_Pos_10);
  if (succeeded)
  {
    mercury__string__from_rev_char_list_2_p_0(RevChars_8, Line_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_line_2_5_p_0(
  MR_Word ByteCode_6,
  MR_Word STATE_VARIABLE_RevChars_0_11,
  MR_Word * STATE_VARIABLE_RevChars_12,
  MR_Integer STATE_VARIABLE_Pos_0_13,
  MR_Integer * STATE_VARIABLE_Pos_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Byte_9;
    MR_Char Char_10;
    MR_Integer STATE_VARIABLE_Pos_15_15;
    MR_Box Bytes_18 = ((MR_Box) ((MR_hl_field(0, ByteCode_6, (MR_Integer) 0))));
    MR_Integer Size_19 = ((MR_Integer) ((MR_hl_field(0, ByteCode_6, (MR_Integer) 1))));
    MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_13 + (MR_Unsigned) 1);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (Var_20 <= Size_19);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_line_2_5_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)Bytes_18 ;
	Pos0 = STATE_VARIABLE_Pos_0_13 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	Byte_9  = Value;
	STATE_VARIABLE_Pos_15_15  = Pos;
}
      succeeded = mercury__char__from_int_2_p_0(Byte_9, &Char_10);
      if (succeeded)
      {
        succeeded = (Char_10 == (MR_Char) 10);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevChars_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Char_10));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_11));
          }
          *STATE_VARIABLE_Pos_14 = STATE_VARIABLE_Pos_15_15;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word STATE_VARIABLE_RevChars_17_17;
          MR_Word next_value_of_STATE_VARIABLE_RevChars_0_11;
          MR_Integer next_value_of_STATE_VARIABLE_Pos_0_13;

          {
            STATE_VARIABLE_RevChars_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevChars_17_17, 0) = ((MR_Box) (MR_Word) (Char_10));
            MR_hl_field(1, STATE_VARIABLE_RevChars_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_11));
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_RevChars_0_11 = STATE_VARIABLE_RevChars_17_17;
          next_value_of_STATE_VARIABLE_Pos_0_13 = STATE_VARIABLE_Pos_15_15;
          STATE_VARIABLE_RevChars_0_11 = next_value_of_STATE_VARIABLE_RevChars_0_11;
          STATE_VARIABLE_Pos_0_13 = next_value_of_STATE_VARIABLE_Pos_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_string_via_offset_5_p_0(
  MR_Word ByteCode_6,
  MR_Word StringTable_7,
  MR_String * String_8,
  MR_Integer STATE_VARIABLE_Pos_0_11,
  MR_Integer * STATE_VARIABLE_Pos_12)
{
  MR_bool succeeded;
  MR_Integer Offset_10;
  MR_Box Bytes_13 = ((MR_Box) ((MR_hl_field(0, ByteCode_6, (MR_Integer) 0))));
  MR_Integer Size_14 = ((MR_Integer) ((MR_hl_field(0, ByteCode_6, (MR_Integer) 1))));
  MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_11 + (MR_Unsigned) 4);
  MR_Box StringTableChars_17;
  MR_Integer Size_18;

  succeeded = (Var_15 <= Size_14);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_string_via_offset_5_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)Bytes_13 ;
	Pos0 = STATE_VARIABLE_Pos_0_11 ;
		{

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;


		;}
#undef MR_PROC_LABEL
	Offset_10  = Value;
	*STATE_VARIABLE_Pos_12  = Pos;
}
    StringTableChars_17 = ((MR_Box) ((MR_hl_field(0, StringTable_7, (MR_Integer) 0))));
    Size_18 = ((MR_Integer) ((MR_hl_field(0, StringTable_7, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_string_via_offset_5_p_0

	MR_ConstString StringTableChars;
	MR_Integer StringTableSize;
	MR_Integer NameCode;
	MR_String Str;

	StringTableChars = (MR_ConstString)StringTableChars_17 ;
	StringTableSize = Size_18 ;
	NameCode = Offset_10 ;
		{

    MR_ConstString  str0;
    int             should_copy;

    str0 = MR_name_in_string_table(StringTableChars, StringTableSize,
        (MR_uint_least32_t)NameCode, &should_copy);
    if (should_copy) {
        MR_make_aligned_string(Str, str0);
    } else {
        MR_make_aligned_string_copy(Str, str0);
    }


		;}
#undef MR_PROC_LABEL
	*String_8  = Str;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_num_4_p_0(
  MR_Word ByteCode_5,
  MR_Integer * Num_6,
  MR_Integer STATE_VARIABLE_Pos_0_8,
  MR_Integer * STATE_VARIABLE_Pos_9)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access__read_num_2_5_p_0(ByteCode_5, (MR_Integer) 0, Num_6, STATE_VARIABLE_Pos_0_8, STATE_VARIABLE_Pos_9);
  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_num_2_5_p_0(
  MR_Word ByteCode_6,
  MR_Integer Num0_7,
  MR_Integer * Num_8,
  MR_Integer STATE_VARIABLE_Pos_0_12,
  MR_Integer * STATE_VARIABLE_Pos_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Byte_10;
    MR_Integer Num1_11;
    MR_Integer STATE_VARIABLE_Pos_14_14;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_Box Bytes_21 = ((MR_Box) ((MR_hl_field(0, ByteCode_6, (MR_Integer) 0))));
    MR_Integer Size_22 = ((MR_Integer) ((MR_hl_field(0, ByteCode_6, (MR_Integer) 1))));
    MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_12 + (MR_Unsigned) 1);
    MR_Integer Var_19;
    MR_Integer Var_20;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (Var_23 <= Size_22);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_num_2_5_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)Bytes_21 ;
	Pos0 = STATE_VARIABLE_Pos_0_12 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	Byte_10  = Value;
	STATE_VARIABLE_Pos_14_14  = Pos;
}
      Var_16 = (MR_Integer) 7;
      Var_15 = mercury__int__f_60_60_2_f_0(Num0_7, Var_16);
      Var_18 = (MR_Integer) 127;
      Var_17 = (Byte_10 & Var_18);
      Num1_11 = (Var_15 | Var_17);
      Var_20 = (MR_Integer) 128;
      Var_19 = (Byte_10 & Var_20);
      succeeded = (Var_19 == (MR_Integer) 0);
      if (succeeded)
      {
        *Num_8 = Num1_11;
        *STATE_VARIABLE_Pos_13 = STATE_VARIABLE_Pos_14_14;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer next_value_of_Num0_7 = Num1_11;
        MR_Integer next_value_of_STATE_VARIABLE_Pos_0_12 = STATE_VARIABLE_Pos_14_14;

        // direct tailcall eliminated
        ;
        Num0_7 = next_value_of_Num0_7;
        STATE_VARIABLE_Pos_0_12 = next_value_of_STATE_VARIABLE_Pos_0_12;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_int32_4_p_0(
  MR_Word ByteCode_5,
  MR_Integer * Value_6,
  MR_Integer STATE_VARIABLE_Pos_0_10,
  MR_Integer * STATE_VARIABLE_Pos_11)
{
  MR_bool succeeded;
  MR_Box Bytes_8 = ((MR_Box) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 0))));
  MR_Integer Size_9 = ((MR_Integer) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 1))));
  MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_10 + (MR_Unsigned) 4);

  succeeded = (Var_12 <= Size_9);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_int32_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)Bytes_8 ;
	Pos0 = STATE_VARIABLE_Pos_0_10 ;
		{

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;


		;}
#undef MR_PROC_LABEL
	*Value_6  = Value;
	*STATE_VARIABLE_Pos_11  = Pos;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_short_4_p_0(
  MR_Word ByteCode_5,
  MR_Integer * Value_6,
  MR_Integer STATE_VARIABLE_Pos_0_10,
  MR_Integer * STATE_VARIABLE_Pos_11)
{
  MR_bool succeeded;
  MR_Box Bytes_8 = ((MR_Box) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 0))));
  MR_Integer Size_9 = ((MR_Integer) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 1))));
  MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_10 + (MR_Unsigned) 2);

  succeeded = (Var_12 <= Size_9);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_short_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)Bytes_8 ;
	Pos0 = STATE_VARIABLE_Pos_0_10 ;
		{

    Value = (ByteCode[Pos0] << 8) + ByteCode[Pos0+1];
    Pos = Pos0 + 2;


		;}
#undef MR_PROC_LABEL
	*Value_6  = Value;
	*STATE_VARIABLE_Pos_11  = Pos;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_byte_4_p_0(
  MR_Word ByteCode_5,
  MR_Integer * Value_6,
  MR_Integer STATE_VARIABLE_Pos_0_10,
  MR_Integer * STATE_VARIABLE_Pos_11)
{
  MR_bool succeeded;
  MR_Box Bytes_8 = ((MR_Box) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 0))));
  MR_Integer Size_9 = ((MR_Integer) ((MR_hl_field(0, ByteCode_5, (MR_Integer) 1))));
  MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_10 + (MR_Unsigned) 1);

  succeeded = (Var_12 <= Size_9);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_byte_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *)Bytes_8 ;
	Pos0 = STATE_VARIABLE_Pos_0_10 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	*Value_6  = Value;
	*STATE_VARIABLE_Pos_11  = Pos;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_String MR_CALL 
mdbcomp__rtti_access__lookup_string_table_2_f_0(
  MR_Word StringTable_4,
  MR_Integer NameCode_5)
{
  MR_String Str_6;
  MR_Box StringTableChars_7 = ((MR_Box) ((MR_hl_field(0, StringTable_4, (MR_Integer) 0))));
  MR_Integer Size_8 = ((MR_Integer) ((MR_hl_field(0, StringTable_4, (MR_Integer) 1))));

{
#define MR_PROC_LABEL mdbcomp__rtti_access__lookup_string_table_2_f_0

	MR_ConstString StringTableChars;
	MR_Integer StringTableSize;
	MR_Integer NameCode;
	MR_String Str;

	StringTableChars = (MR_ConstString)StringTableChars_7 ;
	StringTableSize = Size_8 ;
	NameCode = NameCode_5 ;
		{

    MR_ConstString  str0;
    int             should_copy;

    str0 = MR_name_in_string_table(StringTableChars, StringTableSize,
        (MR_uint_least32_t)NameCode, &should_copy);
    if (should_copy) {
        MR_make_aligned_string(Str, str0);
    } else {
        MR_make_aligned_string_copy(Str, str0);
    }


		;}
#undef MR_PROC_LABEL
	Str_6  = Str;
}
  return Str_6;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__module_string_table_1_f_0(
  MR_Box ModuleLayout_3)
{
  MR_Word StringTable_4;
  MR_Box StringTableChars_5;
  MR_Integer Size_6;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__module_string_table_1_f_0

	const MR_ModuleLayout * ModuleLayout;
	MR_ConstString StringTableChars;
	MR_Integer Size;

	ModuleLayout = (const MR_ModuleLayout *)ModuleLayout_3 ;
		{

    StringTableChars = ModuleLayout->MR_ml_string_table;
    Size = ModuleLayout->MR_ml_string_table_size;


		;}
#undef MR_PROC_LABEL
	StringTableChars_5  = (MR_Box) StringTableChars;
	Size_6  = Size;
}
  {
    StringTable_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StringTable_4, 0) = ((MR_Box) (StringTableChars_5));
    MR_hl_field(0, StringTable_4, 1) = ((MR_Box) (Size_6));
  }
  return StringTable_4;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__containing_module_layout_2_p_0(
  MR_Box ProcLayout_1,
  MR_Box * ModuleLayout_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__containing_module_layout_2_p_0

	const MR_ProcLayout * ProcLayout;
	const MR_ModuleLayout * ModuleLayout;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *)ProcLayout_1 ;
		{

    if (MR_PROC_LAYOUT_HAS_THIRD_GROUP(ProcLayout)) {
        ModuleLayout = ProcLayout->MR_sle_module_layout;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*ModuleLayout_2  = (MR_Box) ModuleLayout;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Box MR_CALL 
mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0(
  MR_Box ProcLayout_1)
{
  MR_Box ByteCodeBytes_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0

	const MR_ProcLayout * ProcLayout;
	const MR_uint_least8_t * ByteCodeBytes;

	ProcLayout = (const MR_ProcLayout *)ProcLayout_1 ;
		{

    ByteCodeBytes = ProcLayout->MR_sle_body_bytes;
#ifdef MR_DEBUG_PROC_REP
    printf("lookup_proc_bytecode: %p %p\n", ProcLayout, ByteCodeBytes);
#endif


		;}
#undef MR_PROC_LABEL
	ByteCodeBytes_2  = (MR_Box) ByteCodeBytes;
}
  return ByteCodeBytes_2;
}

MR_Box MR_CALL 
mdbcomp__rtti_access__containing_proc_layout_1_f_0(
  MR_Box LabelLayout_1)
{
  MR_Box ProcLayout_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__containing_proc_layout_1_f_0

	const MR_LabelLayout * LabelLayout;
	const MR_ProcLayout * ProcLayout;

	LabelLayout = (const MR_LabelLayout *)LabelLayout_1 ;
		{

    ProcLayout = LabelLayout->MR_sll_entry;


		;}
#undef MR_PROC_LABEL
	ProcLayout_2  = (MR_Box) ProcLayout;
}
  return ProcLayout_2;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(
  MR_Box Layout_1)
{
  MR_Word Layouts_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_Word Layouts;

	Layout = (const MR_ProcLayout *)Layout_1 ;
		{

    const MR_ModuleLayout   *module;
    const MR_ProcLayout     *proc;
    int                     i;
    MR_Word                 list;
    MR_bool                 match;
    const MR_ProcLayout     *selected_proc;

    selected_proc = Layout;

    if (! MR_PROC_LAYOUT_HAS_EXEC_TRACE(selected_proc)) {
        MR_fatal_error("get_all_modes_for_layout: selected_proc");
    }

    module = selected_proc->MR_sle_module_layout;
    list = MR_list_empty();
    for (i = 0; i < module->MR_ml_proc_count; i++) {
        proc = module->MR_ml_procs[i];
        if (! MR_PROC_LAYOUT_HAS_EXEC_TRACE(selected_proc)) {
            MR_fatal_error("get_all_modes_for_layout: proc");
        }

        if (MR_PROC_LAYOUT_IS_UCI(selected_proc)
            && MR_PROC_LAYOUT_IS_UCI(proc))
        {
            const MR_UCIProcId  *proc_id;
            const MR_UCIProcId  *selected_proc_id;

            proc_id = &proc->MR_sle_uci;
            selected_proc_id = &selected_proc->MR_sle_uci;

            if (MR_streq(proc_id->MR_uci_type_name,
                selected_proc_id->MR_uci_type_name)
            && MR_streq(proc_id->MR_uci_type_module,
                selected_proc_id->MR_uci_type_module)
            && MR_streq(proc_id->MR_uci_pred_name,
                selected_proc_id->MR_uci_pred_name)
            && (proc_id->MR_uci_type_arity ==
                selected_proc_id->MR_uci_type_arity))
            {
                match = MR_TRUE;
            } else {
                match = MR_FALSE;
            }
        } else if (!MR_PROC_LAYOUT_IS_UCI(selected_proc)
            && !MR_PROC_LAYOUT_IS_UCI(proc))
        {
            const MR_UserProcId *proc_id;
            const MR_UserProcId *selected_proc_id;

            proc_id = &proc->MR_sle_user;
            selected_proc_id = &selected_proc->MR_sle_user;

            if ((proc_id->MR_user_pred_or_func ==
                selected_proc_id->MR_user_pred_or_func)
            && MR_streq(proc_id->MR_user_decl_module,
                selected_proc_id->MR_user_decl_module)
            && MR_streq(proc_id->MR_user_name,
                selected_proc_id->MR_user_name)
            && (proc_id->MR_user_pred_form_arity ==
                selected_proc_id->MR_user_pred_form_arity))
            {
                match = MR_TRUE;
            } else {
                match = MR_FALSE;
            }
        } else {
            match = MR_FALSE;
        }

        if (match) {
            list = MR_int_list_cons((MR_Integer) proc, list);
        }
    }

    Layouts = list;


		;}
#undef MR_PROC_LABEL
	Layouts_2  = Layouts;
}
  return Layouts_2;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__find_initial_version_arg_num_3_p_0(
  MR_Box Layout_1,
  MR_Integer OutArgNum_2,
  MR_Integer * InArgNum_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__find_initial_version_arg_num_3_p_0

	const MR_ProcLayout * Layout;
	MR_Integer OutArgNum;
	MR_Integer InArgNum;
	MR_bool SUCCESS_INDICATOR;

	Layout = (const MR_ProcLayout *)Layout_1 ;
	OutArgNum = OutArgNum_2 ;
		{

    const MR_ProcLayout     *proc;
    int                     out_hlds_num;
    const char              *out_name;
    int                     should_copy_out;

    proc = Layout;

    if (! MR_PROC_LAYOUT_HAS_EXEC_TRACE(proc)) {
        MR_fatal_error("find_initial_version_arg_num: proc");
    }

    out_hlds_num = proc->MR_sle_head_var_nums[OutArgNum - 1];
    out_name = MR_hlds_var_name(proc, out_hlds_num, &should_copy_out);
    if (out_name == NULL || MR_streq(out_name, "")) {
        /* out_hlds_num was not named by the user */
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        char                    out_name_buf[MR_MAX_VARNAME_SIZE];
        int                     out_base_name_len;
        int                     out_numerical_suffix;
        int                     num_matches;
        int                     in_hlds_num;
        int                     in_arg_num;
        const char              *in_name;
        int                     start_of_num;
        int                     in_numerical_suffix;
        int                     head_var_num;
        int                     call_var_num;
        int                     call_num_vars;
        const MR_LabelLayout    *call_label;
        MR_bool                 found;

        if (should_copy_out) {
            strncpy(out_name_buf, out_name, sizeof(out_name_buf) - 1);
            out_name_buf[sizeof(out_name_buf) - 1] = '\0';
            out_name = (const char *) out_name_buf;
        }

        start_of_num = MR_find_start_of_num_suffix(out_name);
        if (start_of_num < 0) {
            out_base_name_len = strlen(out_name);
            out_numerical_suffix = -1;
        } else {
            out_base_name_len = start_of_num;
            out_numerical_suffix = atoi(out_name + start_of_num);
        }

        num_matches = 0;
        in_arg_num = -1;

        for (head_var_num = 0; head_var_num < proc->MR_sle_num_head_vars;
            head_var_num++)
        {
            in_hlds_num = proc->MR_sle_head_var_nums[head_var_num];
            in_name = MR_hlds_var_name(proc, in_hlds_num, NULL);
            if (in_name == NULL || MR_streq(in_name, "")) {
                continue;
            }

            start_of_num = MR_find_start_of_num_suffix(in_name);
            if (start_of_num < 0) {
                continue;
            }

            if (! (
                    (
                        /*
                        ** The names are exactly the same except
                        ** for the numerical suffix.
                        */
                        start_of_num == out_base_name_len &&
                        MR_strneq(out_name, in_name, start_of_num)
                    )
                ||
                    (
                        /*
                        ** The names are exactly the same except
                        ** for an underscore and the numerical suffix
                        ** (as is the case with state variable notation).
                        */
                        start_of_num == out_base_name_len + 1 &&
                        start_of_num > 0 &&
                        in_name[start_of_num - 1] == '_' &&
                        MR_strneq(out_name, in_name, start_of_num - 1)
                    )
                ))
            {
                continue;
            }

            in_numerical_suffix = atoi(in_name + start_of_num);
            if (! ((in_numerical_suffix >= out_numerical_suffix)
                || (out_numerical_suffix < 0)))
            {
                continue;
            }

            call_label = proc->MR_sle_call_label;
            if (! MR_has_valid_var_count(call_label)) {
                    continue;
            }

            if (! MR_has_valid_var_info(call_label)) {
                continue;
            }

            /*
            ** The in_hlds_num has the same prefix as the output variable.
            ** Check if in_hlds_num is an input argument.
            */
            call_num_vars = MR_all_desc_var_count(call_label);
            found = MR_FALSE;
            for (call_var_num = 0 ; call_var_num < call_num_vars;
                    call_var_num++)
            {
                if (call_label->MR_sll_var_nums[call_var_num] == in_hlds_num) {
                    found = MR_TRUE;
                    break;
                }
            }

            if (! found) {
                continue;
            }

            num_matches++;
            in_arg_num = head_var_num;
        }

        if (num_matches == 1) {
            InArgNum = in_arg_num + 1;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*InArgNum_3  = InArgNum;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_String MR_CALL 
mdbcomp__rtti_access__get_proc_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String ProcName_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    ProcName_2 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
  else
    ProcName_2 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
  return ProcName_2;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(
  MR_Box Layout_3)
{
  MR_bool succeeded;
  MR_Word ProcLabel_4;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_bool SUCCESS_INDICATOR;

	Layout = (const MR_ProcLayout *)Layout_3 ;
		{

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String TypeName_5;
    MR_String TypeModule_6;
    MR_String DefModule_7;
    MR_String PredName_8;
    MR_Integer TypeArity_9;
    MR_Integer ModeNum_10;
    MR_Word SpecialId_14;
    MR_Word SymDefModule_15;
    MR_Word SymTypeModule_16;
    MR_Word SpecialIdPrime_11;
    MR_String Var_12;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_String TypeName;
	MR_String TypeModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer TypeArity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *)Layout_3 ;
		{

    const MR_UCIProcId  *proc_id;

    proc_id = &Layout->MR_sle_uci;

    /* The casts are there to cast away const without warnings */
    TypeName   = (MR_String) (MR_Integer) proc_id->MR_uci_type_name;
    TypeModule = (MR_String) (MR_Integer) proc_id->MR_uci_type_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_uci_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_uci_pred_name;
    TypeArity  = proc_id->MR_uci_type_arity;
    ModeNum    = proc_id->MR_uci_mode;


		;}
#undef MR_PROC_LABEL
	TypeName_5  = TypeName;
	TypeModule_6  = TypeModule;
	DefModule_7  = DefModule;
	PredName_8  = PredName;
	TypeArity_9  = TypeArity;
	ModeNum_10  = ModeNum;
}
    succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_2(&SpecialIdPrime_11, &Var_12, PredName_8, &Var_13);
    if (succeeded)
      SpecialId_14 = SpecialIdPrime_11;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140mdbcomp.rtti_access.get_proc_label_from_layout\'/1", (MR_String) "bad special_pred_id");
    SymDefModule_15 = mdbcomp__sym_name__string_to_sym_name_1_f_0(DefModule_7);
    SymTypeModule_16 = mdbcomp__sym_name__string_to_sym_name_1_f_0(TypeModule_6);
    {
      ProcLabel_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ProcLabel_4, 0) = ((MR_Box) (SymDefModule_15));
      MR_hl_field(1, ProcLabel_4, 1) = (MR_Box) ((MR_Unsigned) (SpecialId_14));
      MR_hl_field(1, ProcLabel_4, 2) = ((MR_Box) (SymTypeModule_16));
      MR_hl_field(1, ProcLabel_4, 3) = ((MR_Box) (TypeName_5));
      MR_hl_field(1, ProcLabel_4, 4) = ((MR_Box) (TypeArity_9));
      MR_hl_field(1, ProcLabel_4, 5) = ((MR_Box) (ModeNum_10));
    }
  }
  else
  {
    MR_Word PredOrFunc_17;
    MR_String DeclModule_18;
    MR_Integer Arity_19;
    MR_Word SymDeclModule_20;
    MR_String DefModule_23;
    MR_String PredName_24;
    MR_Integer ModeNum_25;
    MR_Word SymDefModule_26;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_Word PredOrFunc;
	MR_String DeclModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer Arity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *)Layout_3 ;
		{

    const MR_UserProcId *proc_id;

    proc_id = &Layout->MR_sle_user;

    /* The casts are there to cast away const without warnings */
    PredOrFunc = proc_id->MR_user_pred_or_func;
    DeclModule = (MR_String) (MR_Integer) proc_id->MR_user_decl_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_user_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_user_name;
    Arity      = proc_id->MR_user_pred_form_arity;
    ModeNum    = proc_id->MR_user_mode;


		;}
#undef MR_PROC_LABEL
	PredOrFunc_17  = PredOrFunc;
	DeclModule_18  = DeclModule;
	DefModule_23  = DefModule;
	PredName_24  = PredName;
	Arity_19  = Arity;
	ModeNum_25  = ModeNum;
}
    SymDefModule_26 = mdbcomp__sym_name__string_to_sym_name_1_f_0(DefModule_23);
    SymDeclModule_20 = mdbcomp__sym_name__string_to_sym_name_1_f_0(DeclModule_18);
    {
      ProcLabel_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcLabel_4, 0) = ((MR_Box) (SymDefModule_26));
      MR_hl_field(0, ProcLabel_4, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(0, ProcLabel_4, 2) = ((MR_Box) (SymDeclModule_20));
      MR_hl_field(0, ProcLabel_4, 3) = ((MR_Box) (PredName_24));
      MR_hl_field(0, ProcLabel_4, 4) = ((MR_Box) (Arity_19));
      MR_hl_field(0, ProcLabel_4, 5) = ((MR_Box) (ModeNum_25));
    }
  }
  return ProcLabel_4;
}

MR_bool MR_CALL 
mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(
  MR_Box Label_1,
  MR_String * FileName_2,
  MR_Integer * LineNo_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_context_from_label_layout_3_p_0

	const MR_LabelLayout * Label;
	MR_String FileName;
	MR_Integer LineNo;
	MR_bool SUCCESS_INDICATOR;

	Label = (const MR_LabelLayout *)Label_1 ;
		{

    const char  *filename;
    int         line_no;

    SUCCESS_INDICATOR = MR_find_context(Label, &filename, &line_no);
    LineNo = (MR_Integer) line_no;
    MR_TRACE_USE_HP(
        MR_make_aligned_string(FileName, (MR_String) filename);
    );


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*FileName_2  = FileName;
	*LineNo_3  = LineNo;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0(
  MR_Box Label_3)
{
  MR_Word PathPort_4;
  MR_Word Port_5;
  MR_String GoalPathStr_6;
  MR_Word GoalPath_7;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_Word Port;

	Label = (const MR_LabelLayout *)Label_3 ;
		{

    Port = Label->MR_sll_port;


		;}
#undef MR_PROC_LABEL
	Port_5  = Port;
}
{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_String GoalPath;

	Label = (const MR_LabelLayout *)Label_3 ;
		{

    GoalPath = (MR_String) MR_label_goal_path(Label);


		;}
#undef MR_PROC_LABEL
	GoalPathStr_6  = GoalPath;
}
  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(GoalPathStr_6, &GoalPath_7);
  PathPort_4 = mdbcomp__trace_counts__make_path_port_2_f_0(GoalPath_7, Port_5);
  return PathPort_4;
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_port_from_label_layout_1_f_0(
  MR_Box Label_1)
{
  MR_Word Port_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_port_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_Word Port;

	Label = (const MR_LabelLayout *)Label_1 ;
		{

    Port = Label->MR_sll_port;


		;}
#undef MR_PROC_LABEL
	Port_2  = Port;
}
  return Port_2;
}

MR_String MR_CALL 
mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_Box Label_3 = ((MR_Box) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0

	const MR_LabelLayout * Label;
	MR_String GoalPath;

	Label = (const MR_LabelLayout *)Label_3 ;
		{

    GoalPath = (MR_String) MR_label_goal_path(Label);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = GoalPath;
}
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(
  MR_Box Label_1)
{
  MR_String GoalPath_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_String GoalPath;

	Label = (const MR_LabelLayout *)Label_1 ;
		{

    GoalPath = (MR_String) MR_label_goal_path(Label);


		;}
#undef MR_PROC_LABEL
	GoalPath_2  = GoalPath;
}
  return GoalPath_2;
}

MR_Box MR_CALL 
mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(
  MR_Box Label_1)
{
  MR_Box ProcLayout_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	const MR_ProcLayout * ProcLayout;

	Label = (const MR_LabelLayout *)Label_1 ;
		{

    ProcLayout = Label->MR_sll_entry;


		;}
#undef MR_PROC_LABEL
	ProcLayout_2  = (MR_Box) ProcLayout;
}
  return ProcLayout_2;
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access____Unify____bytecode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__rtti_access____Compare____bytecode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_bytes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access____Unify____bytecode_bytes_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_bytes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__rtti_access____Compare____bytecode_bytes_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____label_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____label_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__rtti_access____Compare____label_layout_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____module_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access____Unify____module_layout_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____module_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__rtti_access____Compare____module_layout_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____proc_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____proc_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__rtti_access____Compare____proc_layout_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access____Unify____string_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__rtti_access____Compare____string_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_chars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__rtti_access____Unify____string_table_chars_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_chars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__rtti_access____Compare____string_table_chars_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdbcomp__rtti_access__init(void)
{
}

void mercury__mdbcomp__rtti_access__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_0);
	MR_register_type_ctor_info(&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0);
	MR_register_type_ctor_info(&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0);
	MR_register_type_ctor_info(&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_module_layout_0);
	MR_register_type_ctor_info(&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0);
	MR_register_type_ctor_info(&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_0);
	MR_register_type_ctor_info(&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_chars_0);
}

void mercury__mdbcomp__rtti_access__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__rtti_access__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.rtti_access.
