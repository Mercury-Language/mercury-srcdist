/*
** Automatically generated from `rtti_access.m'
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


/* :- module mdbcomp.rtti_access. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__rtti_access__init
ENDINIT
*/

#include "mdbcomp.rtti_access.mih"


#include "mdbcomp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
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
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
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

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_bytes_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_bytes_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____label_layout_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____label_layout_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____module_layout_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____module_layout_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____proc_layout_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____proc_layout_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_chars_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2);

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_chars_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3);

static void MR_CALL 
mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3,
  MR_Box * mdbcomp__rtti_access__HeadVar__4_4);

static void MR_CALL 
mdbcomp__rtti_access__encode_num_2_3_p_0(
  MR_Integer mdbcomp__rtti_access__Num_4,
  MR_Word mdbcomp__rtti_access__RestBytes_5,
  MR_Word * mdbcomp__rtti_access__Bytes_6);

static void MR_CALL 
mdbcomp__rtti_access__bytecode_string_table_2_4_p_0(
  MR_Word mdbcomp__rtti_access__TypeInfo_for_Offset_5,
  MR_Word mdbcomp__rtti_access__TypeInfo_for_Size_6,
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3,
  MR_Box * mdbcomp__rtti_access__HeadVar__4_4);

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_len_string_2_6_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_7,
  MR_Integer mdbcomp__rtti_access__N_8,
  MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mdbcomp__rtti_access__STATE_VARIABLE_RevChars_14,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_15,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_16);

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_line_2_5_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_6,
  MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_11,
  MR_Word * mdbcomp__rtti_access__STATE_VARIABLE_RevChars_12,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_13,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_14);

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_num_2_5_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_6,
  MR_Integer mdbcomp__rtti_access__Num0_7,
  MR_Integer * mdbcomp__rtti_access__Num_8,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_12,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_13);

static void MR_CALL 
mdbcomp__rtti_access__read_int32_2_4_p_0(
  MR_Box mdbcomp__rtti_access__ByteCode_1,
  MR_Integer * mdbcomp__rtti_access__Value_2,
  MR_Integer mdbcomp__rtti_access__Pos0_3,
  MR_Integer * mdbcomp__rtti_access__Pos_4);

static void MR_CALL 
mdbcomp__rtti_access__read_short_2_4_p_0(
  MR_Box mdbcomp__rtti_access__ByteCode_1,
  MR_Integer * mdbcomp__rtti_access__Value_2,
  MR_Integer mdbcomp__rtti_access__Pos0_3,
  MR_Integer * mdbcomp__rtti_access__Pos_4);

static void MR_CALL 
mdbcomp__rtti_access__read_byte_2_4_p_0(
  MR_Box mdbcomp__rtti_access__ByteCode_1,
  MR_Integer * mdbcomp__rtti_access__Value_2,
  MR_Integer mdbcomp__rtti_access__Pos0_3,
  MR_Integer * mdbcomp__rtti_access__Pos_4);

static MR_String MR_CALL 
mdbcomp__rtti_access__lookup_string_table_2_3_f_0(
  MR_Box mdbcomp__rtti_access__StringTableChars_1,
  MR_Integer mdbcomp__rtti_access__StringTableSize_2,
  MR_Integer mdbcomp__rtti_access__NameCode_3);

static void MR_CALL 
mdbcomp__rtti_access__module_string_table_components_3_p_0(
  MR_Box mdbcomp__rtti_access__ModuleLayout_1,
  MR_Box * mdbcomp__rtti_access__StringTableChars_2,
  MR_Integer * mdbcomp__rtti_access__Size_3);

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_p_0(
  MR_Box mdbcomp__rtti_access__Layout_1,
  MR_Word * mdbcomp__rtti_access__PredOrFunc_2,
  MR_String * mdbcomp__rtti_access__DeclModule_3,
  MR_String * mdbcomp__rtti_access__DefModule_4,
  MR_String * mdbcomp__rtti_access__PredName_5,
  MR_Integer * mdbcomp__rtti_access__Arity_6,
  MR_Integer * mdbcomp__rtti_access__ModeNum_7);

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_uci_fields_7_p_0(
  MR_Box mdbcomp__rtti_access__Layout_1,
  MR_String * mdbcomp__rtti_access__TypeName_2,
  MR_String * mdbcomp__rtti_access__TypeModule_3,
  MR_String * mdbcomp__rtti_access__DefModule_4,
  MR_String * mdbcomp__rtti_access__PredName_5,
  MR_Integer * mdbcomp__rtti_access__TypeArity_6,
  MR_Integer * mdbcomp__rtti_access__ModeNum_7);

static MR_bool MR_CALL 
mdbcomp__rtti_access__proc_layout_is_uci_1_p_0(
  MR_Box mdbcomp__rtti_access__Layout_1);

static MR_Box MR_CALL 
mdbcomp__rtti_access__encode_len_string_2_p_0_1(
  MR_Box mdbcomp__rtti_access__closure_arg,
  MR_Box mdbcomp__rtti_access__wrapper_arg_1);


static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_1[1][5];

static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_2[1][3];




static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdbcomp__rtti_access_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__rtti_access_scalar_common_1[0])),
    ((MR_Box) (mdbcomp__rtti_access__encode_len_string_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_bytecode_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_bytecode_0_0 = {
  (MR_String) "bytecode",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_bytecode_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_bytecode_0_0[1] = {
  &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_bytecode_0_0
};

static const MR_DuPtagLayout mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_bytecode_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_bytecode_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_bytecode_0[1] = {
  &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_bytecode_0_0
};

static const MR_Integer mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_bytecode_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__rtti_access____Unify____bytecode_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____bytecode_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "bytecode",
  {     mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_bytecode_0 },
  {     mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_bytecode_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_bytecode_0
};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____bytecode_bytes_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____bytecode_bytes_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "bytecode_bytes",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____label_layout_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____label_layout_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "label_layout",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_module_layout_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____module_layout_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____module_layout_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "module_layout",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____proc_layout_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____proc_layout_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "proc_layout",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_string_table_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_chars_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_string_table_0_0 = {
  (MR_String) "string_table",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__rtti_access__mdbcomp__rtti_access__field_types_string_table_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_string_table_0_0[1] = {
  &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_string_table_0_0
};

static const MR_DuPtagLayout mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_string_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__rtti_access__mdbcomp__rtti_access__du_stag_ordered_string_table_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_string_table_0[1] = {
  &mdbcomp__rtti_access__mdbcomp__rtti_access__du_functor_desc_string_table_0_0
};

static const MR_Integer mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_string_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__rtti_access____Unify____string_table_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____string_table_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "string_table",
  {     mdbcomp__rtti_access__mdbcomp__rtti_access__du_name_ordered_string_table_0 },
  {     mdbcomp__rtti_access__mdbcomp__rtti_access__du_ptag_ordered_string_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__rtti_access__mdbcomp__rtti_access__functor_number_map_string_table_0
};

const MR_TypeCtorInfo_Struct mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_string_table_chars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mdbcomp__rtti_access____Unify____string_table_chars_0_0_10001)),
  ((MR_Box) (mdbcomp__rtti_access____Compare____string_table_chars_0_0_10001)),
  (MR_String) "mdbcomp.rtti_access",
  (MR_String) "string_table_chars",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access____Unify____bytecode_0_0(((MR_Word) mdbcomp__rtti_access__wrapper_arg_1), ((MR_Word) mdbcomp__rtti_access__wrapper_arg_2));
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__rtti_access__conv0_HeadVar__1_1;

    {
      mdbcomp__rtti_access____Compare____bytecode_0_0(&mdbcomp__rtti_access__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__rtti_access__wrapper_arg_2), ((MR_Word) mdbcomp__rtti_access__wrapper_arg_3));
    }
    *mdbcomp__rtti_access__wrapper_arg_1 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_bytes_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access____Unify____bytecode_bytes_0_0(((MR_Box) mdbcomp__rtti_access__wrapper_arg_1), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2));
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_bytes_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__rtti_access__conv0_HeadVar__1_1;

    {
      mdbcomp__rtti_access____Compare____bytecode_bytes_0_0(&mdbcomp__rtti_access__conv0_HeadVar__1_1, ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_3));
    }
    *mdbcomp__rtti_access__wrapper_arg_1 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____label_layout_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(((MR_Box) mdbcomp__rtti_access__wrapper_arg_1), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2));
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____label_layout_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__rtti_access__conv0_HeadVar__1_1;

    {
      mdbcomp__rtti_access____Compare____label_layout_0_0(&mdbcomp__rtti_access__conv0_HeadVar__1_1, ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_3));
    }
    *mdbcomp__rtti_access__wrapper_arg_1 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____module_layout_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access____Unify____module_layout_0_0(((MR_Box) mdbcomp__rtti_access__wrapper_arg_1), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2));
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____module_layout_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__rtti_access__conv0_HeadVar__1_1;

    {
      mdbcomp__rtti_access____Compare____module_layout_0_0(&mdbcomp__rtti_access__conv0_HeadVar__1_1, ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_3));
    }
    *mdbcomp__rtti_access__wrapper_arg_1 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____proc_layout_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(((MR_Box) mdbcomp__rtti_access__wrapper_arg_1), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2));
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____proc_layout_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__rtti_access__conv0_HeadVar__1_1;

    {
      mdbcomp__rtti_access____Compare____proc_layout_0_0(&mdbcomp__rtti_access__conv0_HeadVar__1_1, ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_3));
    }
    *mdbcomp__rtti_access__wrapper_arg_1 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access____Unify____string_table_0_0(((MR_Word) mdbcomp__rtti_access__wrapper_arg_1), ((MR_Word) mdbcomp__rtti_access__wrapper_arg_2));
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__rtti_access__conv0_HeadVar__1_1;

    {
      mdbcomp__rtti_access____Compare____string_table_0_0(&mdbcomp__rtti_access__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__rtti_access__wrapper_arg_2), ((MR_Word) mdbcomp__rtti_access__wrapper_arg_3));
    }
    *mdbcomp__rtti_access__wrapper_arg_1 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_chars_0_0_10001(
  MR_Box mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access____Unify____string_table_chars_0_0(((MR_Box) mdbcomp__rtti_access__wrapper_arg_1), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2));
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_chars_0_0_10001(
  MR_Box * mdbcomp__rtti_access__wrapper_arg_1,
  MR_Box mdbcomp__rtti_access__wrapper_arg_2,
  MR_Box mdbcomp__rtti_access__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__rtti_access__conv0_HeadVar__1_1;

    {
      mdbcomp__rtti_access____Compare____string_table_chars_0_0(&mdbcomp__rtti_access__conv0_HeadVar__1_1, ((MR_Box) mdbcomp__rtti_access__wrapper_arg_2), ((MR_Box) mdbcomp__rtti_access__wrapper_arg_3));
    }
    *mdbcomp__rtti_access__wrapper_arg_1 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3,
  MR_Box * mdbcomp__rtti_access__HeadVar__4_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__TypeInfo_for_Offset_7;
    MR_Word mdbcomp__rtti_access__TypeInfo_for_Size_8;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0

	const MR_uint_least8_t * Bytes;
	MR_Word Offset;
	MR_Word Size;
	MR_ConstString StringTableChars;

	Bytes = (const MR_uint_least8_t *) mdbcomp__rtti_access__HeadVar__1_1 ;
	Offset = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2 ;
	Size = (MR_Word) mdbcomp__rtti_access__HeadVar__3_3 ;
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
	 *mdbcomp__rtti_access__HeadVar__4_4  = (MR_Box) StringTableChars;
}
  }
}

void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_chars_0_0(
  MR_Word * mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_5 = (MR_Word) mdbcomp__rtti_access__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__Cast_HeadVar1_4, mdbcomp__rtti_access__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_chars_0_0(
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_3 = (MR_Word) mdbcomp__rtti_access__HeadVar__1_1;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;

    {
      mdbcomp__rtti_access__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdbcomp__rtti_access__Cast_HeadVar1_3, mdbcomp__rtti_access__Cast_HeadVar2_4);
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

void MR_CALL 
mdbcomp__rtti_access____Compare____string_table_0_0(
  MR_Word * mdbcomp__rtti_access__HeadVar__1_1,
  MR_Word mdbcomp__rtti_access__HeadVar__2_2,
  MR_Word mdbcomp__rtti_access__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Integer mdbcomp__rtti_access__CastX_9 = (MR_Integer) mdbcomp__rtti_access__HeadVar__2_2;
    MR_Integer mdbcomp__rtti_access__CastY_10 = (MR_Integer) mdbcomp__rtti_access__HeadVar__3_3;

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__CastX_9 == mdbcomp__rtti_access__CastY_10);
    if (mdbcomp__rtti_access__succeeded)
      *mdbcomp__rtti_access__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mdbcomp__rtti_access__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mdbcomp__rtti_access__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__rtti_access__V_8_8;
        MR_Word mdbcomp__rtti_access__Cast_HeadVar1_13 = (MR_Word) mdbcomp__rtti_access__V_4_4;
        MR_Word mdbcomp__rtti_access__Cast_HeadVar2_14 = (MR_Word) mdbcomp__rtti_access__V_6_6;

        {
          mercury__builtin____Compare____c_pointer_0_0(&mdbcomp__rtti_access__V_8_8, mdbcomp__rtti_access__Cast_HeadVar1_13, mdbcomp__rtti_access__Cast_HeadVar2_14);
        }
        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_8_8 == (MR_Integer) 0);
        mdbcomp__rtti_access__succeeded = !(mdbcomp__rtti_access__succeeded);
        if (mdbcomp__rtti_access__succeeded)
          *mdbcomp__rtti_access__HeadVar__1_1 = mdbcomp__rtti_access__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__V_5_5, mdbcomp__rtti_access__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____string_table_0_0(
  MR_Word mdbcomp__rtti_access__HeadVar__1_1,
  MR_Word mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Integer mdbcomp__rtti_access__CastX_7 = (MR_Integer) mdbcomp__rtti_access__HeadVar__1_1;
    MR_Integer mdbcomp__rtti_access__CastY_8 = (MR_Integer) mdbcomp__rtti_access__HeadVar__2_2;

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__CastX_7 == mdbcomp__rtti_access__CastY_8);
    if (mdbcomp__rtti_access__succeeded)
      mdbcomp__rtti_access__succeeded = MR_TRUE;
    else
      {
        MR_Box mdbcomp__rtti_access__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mdbcomp__rtti_access__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__rtti_access__Cast_HeadVar1_9 = (MR_Word) mdbcomp__rtti_access__V_3_3;
        MR_Word mdbcomp__rtti_access__Cast_HeadVar2_10 = (MR_Word) mdbcomp__rtti_access__V_5_5;

        {
          mdbcomp__rtti_access__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdbcomp__rtti_access__Cast_HeadVar1_9, mdbcomp__rtti_access__Cast_HeadVar2_10);
        }
        if (mdbcomp__rtti_access__succeeded)
          mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_4_4 == mdbcomp__rtti_access__V_6_6);
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

void MR_CALL 
mdbcomp__rtti_access____Compare____proc_layout_0_0(
  MR_Word * mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_5 = (MR_Word) mdbcomp__rtti_access__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__Cast_HeadVar1_4, mdbcomp__rtti_access__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____proc_layout_0_0(
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_3 = (MR_Word) mdbcomp__rtti_access__HeadVar__1_1;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;

    {
      mdbcomp__rtti_access__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdbcomp__rtti_access__Cast_HeadVar1_3, mdbcomp__rtti_access__Cast_HeadVar2_4);
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

void MR_CALL 
mdbcomp__rtti_access____Compare____module_layout_0_0(
  MR_Word * mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_5 = (MR_Word) mdbcomp__rtti_access__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__Cast_HeadVar1_4, mdbcomp__rtti_access__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____module_layout_0_0(
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_3 = (MR_Word) mdbcomp__rtti_access__HeadVar__1_1;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;

    {
      mdbcomp__rtti_access__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdbcomp__rtti_access__Cast_HeadVar1_3, mdbcomp__rtti_access__Cast_HeadVar2_4);
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

void MR_CALL 
mdbcomp__rtti_access____Compare____label_layout_0_0(
  MR_Word * mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_5 = (MR_Word) mdbcomp__rtti_access__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__Cast_HeadVar1_4, mdbcomp__rtti_access__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____label_layout_0_0(
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_3 = (MR_Word) mdbcomp__rtti_access__HeadVar__1_1;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;

    {
      mdbcomp__rtti_access__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdbcomp__rtti_access__Cast_HeadVar1_3, mdbcomp__rtti_access__Cast_HeadVar2_4);
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_bytes_0_0(
  MR_Word * mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_5 = (MR_Word) mdbcomp__rtti_access__HeadVar__3_3;

    {
      mercury__builtin____Compare____c_pointer_0_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__Cast_HeadVar1_4, mdbcomp__rtti_access__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_bytes_0_0(
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar1_3 = (MR_Word) mdbcomp__rtti_access__HeadVar__1_1;
    MR_Word mdbcomp__rtti_access__Cast_HeadVar2_4 = (MR_Word) mdbcomp__rtti_access__HeadVar__2_2;

    {
      mdbcomp__rtti_access__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdbcomp__rtti_access__Cast_HeadVar1_3, mdbcomp__rtti_access__Cast_HeadVar2_4);
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

void MR_CALL 
mdbcomp__rtti_access____Compare____bytecode_0_0(
  MR_Word * mdbcomp__rtti_access__HeadVar__1_1,
  MR_Word mdbcomp__rtti_access__HeadVar__2_2,
  MR_Word mdbcomp__rtti_access__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Integer mdbcomp__rtti_access__CastX_9 = (MR_Integer) mdbcomp__rtti_access__HeadVar__2_2;
    MR_Integer mdbcomp__rtti_access__CastY_10 = (MR_Integer) mdbcomp__rtti_access__HeadVar__3_3;

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__CastX_9 == mdbcomp__rtti_access__CastY_10);
    if (mdbcomp__rtti_access__succeeded)
      *mdbcomp__rtti_access__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mdbcomp__rtti_access__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mdbcomp__rtti_access__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__rtti_access__V_8_8;
        MR_Word mdbcomp__rtti_access__Cast_HeadVar1_13 = (MR_Word) mdbcomp__rtti_access__V_4_4;
        MR_Word mdbcomp__rtti_access__Cast_HeadVar2_14 = (MR_Word) mdbcomp__rtti_access__V_6_6;

        {
          mercury__builtin____Compare____c_pointer_0_0(&mdbcomp__rtti_access__V_8_8, mdbcomp__rtti_access__Cast_HeadVar1_13, mdbcomp__rtti_access__Cast_HeadVar2_14);
        }
        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_8_8 == (MR_Integer) 0);
        mdbcomp__rtti_access__succeeded = !(mdbcomp__rtti_access__succeeded);
        if (mdbcomp__rtti_access__succeeded)
          *mdbcomp__rtti_access__HeadVar__1_1 = mdbcomp__rtti_access__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__V_5_5, mdbcomp__rtti_access__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access____Unify____bytecode_0_0(
  MR_Word mdbcomp__rtti_access__HeadVar__1_1,
  MR_Word mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Integer mdbcomp__rtti_access__CastX_7 = (MR_Integer) mdbcomp__rtti_access__HeadVar__1_1;
    MR_Integer mdbcomp__rtti_access__CastY_8 = (MR_Integer) mdbcomp__rtti_access__HeadVar__2_2;

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__CastX_7 == mdbcomp__rtti_access__CastY_8);
    if (mdbcomp__rtti_access__succeeded)
      mdbcomp__rtti_access__succeeded = MR_TRUE;
    else
      {
        MR_Box mdbcomp__rtti_access__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mdbcomp__rtti_access__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__rtti_access__Cast_HeadVar1_9 = (MR_Word) mdbcomp__rtti_access__V_3_3;
        MR_Word mdbcomp__rtti_access__Cast_HeadVar2_10 = (MR_Word) mdbcomp__rtti_access__V_5_5;

        {
          mdbcomp__rtti_access__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdbcomp__rtti_access__Cast_HeadVar1_9, mdbcomp__rtti_access__Cast_HeadVar2_10);
        }
        if (mdbcomp__rtti_access__succeeded)
          mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_4_4 == mdbcomp__rtti_access__V_6_6);
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

static void MR_CALL 
mdbcomp__rtti_access__encode_num_2_3_p_0(
  MR_Integer mdbcomp__rtti_access__Num_4,
  MR_Word mdbcomp__rtti_access__RestBytes_5,
  MR_Word * mdbcomp__rtti_access__Bytes_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Num_4 == (MR_Integer) 0);

        if (mdbcomp__rtti_access__succeeded)
          *mdbcomp__rtti_access__Bytes_6 = mdbcomp__rtti_access__RestBytes_5;
        else
          {
            MR_Integer mdbcomp__rtti_access__CurByte_7;
            MR_Integer mdbcomp__rtti_access__NextNum_8;
            MR_Integer mdbcomp__rtti_access__V_9_9 = (mdbcomp__rtti_access__Num_4 & (MR_Integer) 127);
            MR_Word mdbcomp__rtti_access__V_13_13;

            mdbcomp__rtti_access__CurByte_7 = (mdbcomp__rtti_access__V_9_9 | (MR_Integer) 128);
            {
              mdbcomp__rtti_access__NextNum_8 = mercury__int__f_slash_2_f_0(mdbcomp__rtti_access__Num_4, (MR_Integer) 128);
            }
            {
              mdbcomp__rtti_access__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_13_13, 0) = ((MR_Box) (mdbcomp__rtti_access__CurByte_7));
              MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_13_13, 1) = ((MR_Box) (mdbcomp__rtti_access__RestBytes_5));
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mdbcomp__rtti_access__Num__tmp_copy_4 = mdbcomp__rtti_access__NextNum_8;
              MR_Word mdbcomp__rtti_access__RestBytes__tmp_copy_5 = mdbcomp__rtti_access__V_13_13;

              mdbcomp__rtti_access__RestBytes_5 = mdbcomp__rtti_access__RestBytes__tmp_copy_5;
              mdbcomp__rtti_access__Num_4 = mdbcomp__rtti_access__Num__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mdbcomp__rtti_access__bytecode_string_table_2_4_p_0(
  MR_Word mdbcomp__rtti_access__TypeInfo_for_Offset_5,
  MR_Word mdbcomp__rtti_access__TypeInfo_for_Size_6,
  MR_Box mdbcomp__rtti_access__HeadVar__1_1,
  MR_Box mdbcomp__rtti_access__HeadVar__2_2,
  MR_Box mdbcomp__rtti_access__HeadVar__3_3,
  MR_Box * mdbcomp__rtti_access__HeadVar__4_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_p_0(mdbcomp__rtti_access__HeadVar__1_1, mdbcomp__rtti_access__HeadVar__2_2, mdbcomp__rtti_access__HeadVar__3_3, mdbcomp__rtti_access__HeadVar__4_4);
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_len_string_2_6_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_7,
  MR_Integer mdbcomp__rtti_access__N_8,
  MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mdbcomp__rtti_access__STATE_VARIABLE_RevChars_14,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_15,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__N_8 <= (MR_Integer) 0);

        if (mdbcomp__rtti_access__succeeded)
          {
            *mdbcomp__rtti_access__STATE_VARIABLE_Pos_16 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_15;
            *mdbcomp__rtti_access__STATE_VARIABLE_RevChars_14 = mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_13;
            mdbcomp__rtti_access__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mdbcomp__rtti_access__Byte_11;
            MR_Char mdbcomp__rtti_access__Char_12;
            MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_18_18;
            MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_19_19;
            MR_Integer mdbcomp__rtti_access__V_20_20;
            MR_Integer mdbcomp__rtti_access__V_23_23;
            MR_Box mdbcomp__rtti_access__Bytes_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_7, (MR_Integer) 0)));
            MR_Integer mdbcomp__rtti_access__Size_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_7, (MR_Integer) 1)));
            MR_Integer mdbcomp__rtti_access__V_31_31 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_15 + (MR_Integer) 1);

            mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_31_31 <= mdbcomp__rtti_access__Size_30);
            if (mdbcomp__rtti_access__succeeded)
              {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_len_string_2_6_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_29 ;
	Pos0 =  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_15 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__Byte_11  = Value;
	 mdbcomp__rtti_access__STATE_VARIABLE_Pos_18_18  = Pos;
}
                {
                  mdbcomp__rtti_access__succeeded = mercury__char__from_int_2_p_0(mdbcomp__rtti_access__Byte_11, &mdbcomp__rtti_access__Char_12);
                }
                if (mdbcomp__rtti_access__succeeded)
                  {
                    mdbcomp__rtti_access__V_23_23 = (MR_Integer) 1;
                    mdbcomp__rtti_access__V_20_20 = (mdbcomp__rtti_access__N_8 - mdbcomp__rtti_access__V_23_23);
                    {
                      mdbcomp__rtti_access__STATE_VARIABLE_RevChars_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__STATE_VARIABLE_RevChars_19_19, 0) = ((MR_Box) (MR_Word) (mdbcomp__rtti_access__Char_12));
                      MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__STATE_VARIABLE_RevChars_19_19, 1) = ((MR_Box) (mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_13));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Integer mdbcomp__rtti_access__N__tmp_copy_8 = mdbcomp__rtti_access__V_20_20;
                      MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0__tmp_copy_13 = mdbcomp__rtti_access__STATE_VARIABLE_RevChars_19_19;
                      MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0__tmp_copy_15 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_18_18;

                      mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_15 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_0__tmp_copy_15;
                      mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_13 = mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0__tmp_copy_13;
                      mdbcomp__rtti_access__N_8 = mdbcomp__rtti_access__N__tmp_copy_8;
                    }
                    continue;
                  }
              }
          }
        return mdbcomp__rtti_access__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_line_2_5_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_6,
  MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_11,
  MR_Word * mdbcomp__rtti_access__STATE_VARIABLE_RevChars_12,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_13,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__rtti_access__succeeded;
        MR_Integer mdbcomp__rtti_access__Byte_9;
        MR_Char mdbcomp__rtti_access__Char_10;
        MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_15_15;
        MR_Box mdbcomp__rtti_access__Bytes_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_6, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__Size_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_6, (MR_Integer) 1)));
        MR_Integer mdbcomp__rtti_access__V_27_27 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_13 + (MR_Integer) 1);

        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_27_27 <= mdbcomp__rtti_access__Size_26);
        if (mdbcomp__rtti_access__succeeded)
          {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_line_2_5_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_25 ;
	Pos0 =  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_13 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__Byte_9  = Value;
	 mdbcomp__rtti_access__STATE_VARIABLE_Pos_15_15  = Pos;
}
            {
              mdbcomp__rtti_access__succeeded = mercury__char__from_int_2_p_0(mdbcomp__rtti_access__Byte_9, &mdbcomp__rtti_access__Char_10);
            }
            if (mdbcomp__rtti_access__succeeded)
              {
                mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Char_10 == (MR_Char) 10);
                if (mdbcomp__rtti_access__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mdbcomp__rtti_access__STATE_VARIABLE_RevChars_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mdbcomp__rtti_access__Char_10));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_11));
                    }
                    *mdbcomp__rtti_access__STATE_VARIABLE_Pos_14 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_15_15;
                    mdbcomp__rtti_access__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_17_17;

                    {
                      mdbcomp__rtti_access__STATE_VARIABLE_RevChars_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__STATE_VARIABLE_RevChars_17_17, 0) = ((MR_Box) (MR_Word) (mdbcomp__rtti_access__Char_10));
                      MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__STATE_VARIABLE_RevChars_17_17, 1) = ((MR_Box) (mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_11));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0__tmp_copy_11 = mdbcomp__rtti_access__STATE_VARIABLE_RevChars_17_17;
                      MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0__tmp_copy_13 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_15_15;

                      mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_13 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_0__tmp_copy_13;
                      mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0_11 = mdbcomp__rtti_access__STATE_VARIABLE_RevChars_0__tmp_copy_11;
                    }
                    continue;
                  }
              }
          }
        return mdbcomp__rtti_access__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__read_num_2_5_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_6,
  MR_Integer mdbcomp__rtti_access__Num0_7,
  MR_Integer * mdbcomp__rtti_access__Num_8,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_12,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__rtti_access__succeeded;
        MR_Integer mdbcomp__rtti_access__Byte_10;
        MR_Integer mdbcomp__rtti_access__Num1_11;
        MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14;
        MR_Integer mdbcomp__rtti_access__V_15_15;
        MR_Integer mdbcomp__rtti_access__V_16_16;
        MR_Integer mdbcomp__rtti_access__V_17_17;
        MR_Integer mdbcomp__rtti_access__V_18_18;
        MR_Box mdbcomp__rtti_access__Bytes_27 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_6, (MR_Integer) 0)));
        MR_Integer mdbcomp__rtti_access__Size_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_6, (MR_Integer) 1)));
        MR_Integer mdbcomp__rtti_access__V_29_29 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_12 + (MR_Integer) 1);
        MR_Integer mdbcomp__rtti_access__V_19_19;
        MR_Integer mdbcomp__rtti_access__V_20_20;

        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_29_29 <= mdbcomp__rtti_access__Size_28);
        if (mdbcomp__rtti_access__succeeded)
          {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_num_2_5_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_27 ;
	Pos0 =  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_12 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__Byte_10  = Value;
	 mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14  = Pos;
}
            mdbcomp__rtti_access__V_16_16 = (MR_Integer) 7;
            {
              mdbcomp__rtti_access__V_15_15 = mercury__int__f_60_60_2_f_0(mdbcomp__rtti_access__Num0_7, mdbcomp__rtti_access__V_16_16);
            }
            mdbcomp__rtti_access__V_18_18 = (MR_Integer) 127;
            mdbcomp__rtti_access__V_17_17 = (mdbcomp__rtti_access__Byte_10 & mdbcomp__rtti_access__V_18_18);
            mdbcomp__rtti_access__Num1_11 = (mdbcomp__rtti_access__V_15_15 | mdbcomp__rtti_access__V_17_17);
            mdbcomp__rtti_access__V_20_20 = (MR_Integer) 128;
            mdbcomp__rtti_access__V_19_19 = (mdbcomp__rtti_access__Byte_10 & mdbcomp__rtti_access__V_20_20);
            mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_19_19 == (MR_Integer) 0);
            if (mdbcomp__rtti_access__succeeded)
              {
                *mdbcomp__rtti_access__Num_8 = mdbcomp__rtti_access__Num1_11;
                *mdbcomp__rtti_access__STATE_VARIABLE_Pos_13 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14;
                mdbcomp__rtti_access__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mdbcomp__rtti_access__Num0__tmp_copy_7 = mdbcomp__rtti_access__Num1_11;
                  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0__tmp_copy_12 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14;

                  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_12 = mdbcomp__rtti_access__STATE_VARIABLE_Pos_0__tmp_copy_12;
                  mdbcomp__rtti_access__Num0_7 = mdbcomp__rtti_access__Num0__tmp_copy_7;
                }
                continue;
              }
          }
        return mdbcomp__rtti_access__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mdbcomp__rtti_access__read_int32_2_4_p_0(
  MR_Box mdbcomp__rtti_access__ByteCode_1,
  MR_Integer * mdbcomp__rtti_access__Value_2,
  MR_Integer mdbcomp__rtti_access__Pos0_3,
  MR_Integer * mdbcomp__rtti_access__Pos_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_int32_2_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__ByteCode_1 ;
	Pos0 =  mdbcomp__rtti_access__Pos0_3 ;
		{

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__Value_2  = Value;
	 *mdbcomp__rtti_access__Pos_4  = Pos;
}
  }
}

static void MR_CALL 
mdbcomp__rtti_access__read_short_2_4_p_0(
  MR_Box mdbcomp__rtti_access__ByteCode_1,
  MR_Integer * mdbcomp__rtti_access__Value_2,
  MR_Integer mdbcomp__rtti_access__Pos0_3,
  MR_Integer * mdbcomp__rtti_access__Pos_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_short_2_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__ByteCode_1 ;
	Pos0 =  mdbcomp__rtti_access__Pos0_3 ;
		{

    Value = (ByteCode[Pos0] << 8) + ByteCode[Pos0+1];
    Pos = Pos0 + 2;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__Value_2  = Value;
	 *mdbcomp__rtti_access__Pos_4  = Pos;
}
  }
}

static void MR_CALL 
mdbcomp__rtti_access__read_byte_2_4_p_0(
  MR_Box mdbcomp__rtti_access__ByteCode_1,
  MR_Integer * mdbcomp__rtti_access__Value_2,
  MR_Integer mdbcomp__rtti_access__Pos0_3,
  MR_Integer * mdbcomp__rtti_access__Pos_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_byte_2_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__ByteCode_1 ;
	Pos0 =  mdbcomp__rtti_access__Pos0_3 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__Value_2  = Value;
	 *mdbcomp__rtti_access__Pos_4  = Pos;
}
  }
}

static MR_String MR_CALL 
mdbcomp__rtti_access__lookup_string_table_2_3_f_0(
  MR_Box mdbcomp__rtti_access__StringTableChars_1,
  MR_Integer mdbcomp__rtti_access__StringTableSize_2,
  MR_Integer mdbcomp__rtti_access__NameCode_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_String mdbcomp__rtti_access__Str_4;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__lookup_string_table_2_3_f_0

	MR_ConstString StringTableChars;
	MR_Integer StringTableSize;
	MR_Integer NameCode;
	MR_String Str;

	StringTableChars = (MR_ConstString) mdbcomp__rtti_access__StringTableChars_1 ;
	StringTableSize =  mdbcomp__rtti_access__StringTableSize_2 ;
	NameCode =  mdbcomp__rtti_access__NameCode_3 ;
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
	 mdbcomp__rtti_access__Str_4  = Str;
}
    return mdbcomp__rtti_access__Str_4;
  }
}

static void MR_CALL 
mdbcomp__rtti_access__module_string_table_components_3_p_0(
  MR_Box mdbcomp__rtti_access__ModuleLayout_1,
  MR_Box * mdbcomp__rtti_access__StringTableChars_2,
  MR_Integer * mdbcomp__rtti_access__Size_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__module_string_table_components_3_p_0

	const MR_ModuleLayout * ModuleLayout;
	MR_ConstString StringTableChars;
	MR_Integer Size;

	ModuleLayout = (const MR_ModuleLayout *) mdbcomp__rtti_access__ModuleLayout_1 ;
		{

    StringTableChars = ModuleLayout->MR_ml_string_table;
    Size = ModuleLayout->MR_ml_string_table_size;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__StringTableChars_2  = (MR_Box) StringTableChars;
	 *mdbcomp__rtti_access__Size_3  = Size;
}
  }
}

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_p_0(
  MR_Box mdbcomp__rtti_access__Layout_1,
  MR_Word * mdbcomp__rtti_access__PredOrFunc_2,
  MR_String * mdbcomp__rtti_access__DeclModule_3,
  MR_String * mdbcomp__rtti_access__DefModule_4,
  MR_String * mdbcomp__rtti_access__PredName_5,
  MR_Integer * mdbcomp__rtti_access__Arity_6,
  MR_Integer * mdbcomp__rtti_access__ModeNum_7)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_p_0

	const MR_ProcLayout * Layout;
	MR_Word PredOrFunc;
	MR_String DeclModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer Arity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_1 ;
		{

    const MR_UserProcId *proc_id;

    proc_id = &Layout->MR_sle_user;

    /* The casts are there to cast away const without warnings */
    PredOrFunc = proc_id->MR_user_pred_or_func;
    DeclModule = (MR_String) (MR_Integer) proc_id->MR_user_decl_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_user_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_user_name;
    Arity      = proc_id->MR_user_arity;
    ModeNum    = proc_id->MR_user_mode;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__PredOrFunc_2  = PredOrFunc;
	 *mdbcomp__rtti_access__DeclModule_3  = DeclModule;
	 *mdbcomp__rtti_access__DefModule_4  = DefModule;
	 *mdbcomp__rtti_access__PredName_5  = PredName;
	 *mdbcomp__rtti_access__Arity_6  = Arity;
	 *mdbcomp__rtti_access__ModeNum_7  = ModeNum;
}
  }
}

static void MR_CALL 
mdbcomp__rtti_access__proc_layout_get_uci_fields_7_p_0(
  MR_Box mdbcomp__rtti_access__Layout_1,
  MR_String * mdbcomp__rtti_access__TypeName_2,
  MR_String * mdbcomp__rtti_access__TypeModule_3,
  MR_String * mdbcomp__rtti_access__DefModule_4,
  MR_String * mdbcomp__rtti_access__PredName_5,
  MR_Integer * mdbcomp__rtti_access__TypeArity_6,
  MR_Integer * mdbcomp__rtti_access__ModeNum_7)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_layout_get_uci_fields_7_p_0

	const MR_ProcLayout * Layout;
	MR_String TypeName;
	MR_String TypeModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer TypeArity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_1 ;
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
	 *mdbcomp__rtti_access__TypeName_2  = TypeName;
	 *mdbcomp__rtti_access__TypeModule_3  = TypeModule;
	 *mdbcomp__rtti_access__DefModule_4  = DefModule;
	 *mdbcomp__rtti_access__PredName_5  = PredName;
	 *mdbcomp__rtti_access__TypeArity_6  = TypeArity;
	 *mdbcomp__rtti_access__ModeNum_7  = ModeNum;
}
  }
}

static MR_bool MR_CALL 
mdbcomp__rtti_access__proc_layout_is_uci_1_p_0(
  MR_Box mdbcomp__rtti_access__Layout_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_layout_is_uci_1_p_0

	const MR_ProcLayout * Layout;
	MR_bool SUCCESS_INDICATOR;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_1 ;
		{

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdbcomp__rtti_access__succeeded  = SUCCESS_INDICATOR;
}
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_len_string_func_1_f_0(
  MR_String mdbcomp__rtti_access__String_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Bytes_4;

    {
      mdbcomp__rtti_access__encode_len_string_2_p_0(mdbcomp__rtti_access__String_3, &mdbcomp__rtti_access__Bytes_4);
    }
    return mdbcomp__rtti_access__Bytes_4;
  }
}

static MR_Box MR_CALL 
mdbcomp__rtti_access__encode_len_string_2_p_0_1(
  MR_Box mdbcomp__rtti_access__closure_arg,
  MR_Box mdbcomp__rtti_access__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__rtti_access__wrapper_arg_2;
    MR_Box mdbcomp__rtti_access__closure = mdbcomp__rtti_access__closure_arg;
    MR_Integer mdbcomp__rtti_access__conv0_HeadVar__2_2;

    {
      mdbcomp__rtti_access__conv0_HeadVar__2_2 = mercury__char__to_int_1_f_0(((MR_Char) (MR_Word) mdbcomp__rtti_access__wrapper_arg_1));
    }
    mdbcomp__rtti_access__wrapper_arg_2 = ((MR_Box) (mdbcomp__rtti_access__conv0_HeadVar__2_2));
    return mdbcomp__rtti_access__wrapper_arg_2;
  }
}

void MR_CALL 
mdbcomp__rtti_access__encode_len_string_2_p_0(
  MR_String mdbcomp__rtti_access__String_3,
  MR_Word * mdbcomp__rtti_access__Bytes_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__TypeCtorInfo_11_11;
    MR_Integer mdbcomp__rtti_access__Length_5;
    MR_Word mdbcomp__rtti_access__LengthBytes_6;
    MR_Word mdbcomp__rtti_access__Chars_7;
    MR_Word mdbcomp__rtti_access__CharBytes_8;
    MR_Word mdbcomp__rtti_access__BytesPrime_16;

    {
      mercury__string__length_2_p_0(mdbcomp__rtti_access__String_3, &mdbcomp__rtti_access__Length_5);
    }
    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__encode_num_2_p_0(mdbcomp__rtti_access__Length_5, &mdbcomp__rtti_access__BytesPrime_16);
    }
    if (mdbcomp__rtti_access__succeeded)
      mdbcomp__rtti_access__LengthBytes_6 = mdbcomp__rtti_access__BytesPrime_16;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_num_det\'/2", (MR_String) "encode_num failed");
          return;
        }
      }
    {
      mercury__string__to_char_list_2_p_0(mdbcomp__rtti_access__String_3, &mdbcomp__rtti_access__Chars_7);
    }
    mdbcomp__rtti_access__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mdbcomp__rtti_access__CharBytes_8 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, mdbcomp__rtti_access__TypeCtorInfo_11_11, (MR_Word) &mdbcomp__rtti_access_scalar_common_2[0], mdbcomp__rtti_access__Chars_7);
    }
    {
      *mdbcomp__rtti_access__Bytes_4 = mercury__list__f_43_43_2_f_0(mdbcomp__rtti_access__TypeCtorInfo_11_11, mdbcomp__rtti_access__LengthBytes_6, mdbcomp__rtti_access__CharBytes_8);
    }
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_num_func_1_f_0(
  MR_Integer mdbcomp__rtti_access__Num_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Bytes_4;
    MR_Word mdbcomp__rtti_access__BytesPrime_7;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__encode_num_2_p_0(mdbcomp__rtti_access__Num_3, &mdbcomp__rtti_access__BytesPrime_7);
    }
    if (mdbcomp__rtti_access__succeeded)
      mdbcomp__rtti_access__Bytes_4 = mdbcomp__rtti_access__BytesPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_num_det\'/2", (MR_String) "encode_num failed");
        }
      }
    return mdbcomp__rtti_access__Bytes_4;
  }
}

void MR_CALL 
mdbcomp__rtti_access__encode_num_det_2_p_0(
  MR_Integer mdbcomp__rtti_access__Num_3,
  MR_Word * mdbcomp__rtti_access__Bytes_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__BytesPrime_5;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__encode_num_2_p_0(mdbcomp__rtti_access__Num_3, &mdbcomp__rtti_access__BytesPrime_5);
    }
    if (mdbcomp__rtti_access__succeeded)
      *mdbcomp__rtti_access__Bytes_4 = mdbcomp__rtti_access__BytesPrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_num_det\'/2", (MR_String) "encode_num failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_num_2_p_0(
  MR_Integer mdbcomp__rtti_access__Num_3,
  MR_Word * mdbcomp__rtti_access__Bytes_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Num_3 >= (MR_Integer) 0);
    MR_Integer mdbcomp__rtti_access__LastByte_5;
    MR_Integer mdbcomp__rtti_access__NextNum_6;
    MR_Integer mdbcomp__rtti_access__V_8_8;
    MR_Integer mdbcomp__rtti_access__V_9_9;
    MR_Word mdbcomp__rtti_access__V_10_10;
    MR_Word mdbcomp__rtti_access__V_11_11;

    if (mdbcomp__rtti_access__succeeded)
      {
        mdbcomp__rtti_access__V_8_8 = (MR_Integer) 127;
        mdbcomp__rtti_access__LastByte_5 = (mdbcomp__rtti_access__Num_3 & mdbcomp__rtti_access__V_8_8);
        mdbcomp__rtti_access__V_9_9 = (MR_Integer) 128;
        {
          mdbcomp__rtti_access__NextNum_6 = mercury__int__f_slash_2_f_0(mdbcomp__rtti_access__Num_3, mdbcomp__rtti_access__V_9_9);
        }
        mdbcomp__rtti_access__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mdbcomp__rtti_access__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_10_10, 0) = ((MR_Box) (mdbcomp__rtti_access__LastByte_5));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_10_10, 1) = ((MR_Box) (mdbcomp__rtti_access__V_11_11));
        }
        {
          mdbcomp__rtti_access__encode_num_2_3_p_0(mdbcomp__rtti_access__NextNum_6, mdbcomp__rtti_access__V_10_10, mdbcomp__rtti_access__Bytes_4);
        }
        mdbcomp__rtti_access__succeeded = MR_TRUE;
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_int32_func_1_f_0(
  MR_Integer mdbcomp__rtti_access__Int32_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Bytes_4;
    MR_Word mdbcomp__rtti_access__BytesPrime_7;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__encode_int32_2_p_0(mdbcomp__rtti_access__Int32_3, &mdbcomp__rtti_access__BytesPrime_7);
    }
    if (mdbcomp__rtti_access__succeeded)
      mdbcomp__rtti_access__Bytes_4 = mdbcomp__rtti_access__BytesPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_int32_det\'/2", (MR_String) "encode_int32 failed");
        }
      }
    return mdbcomp__rtti_access__Bytes_4;
  }
}

void MR_CALL 
mdbcomp__rtti_access__encode_int32_det_2_p_0(
  MR_Integer mdbcomp__rtti_access__Int32_3,
  MR_Word * mdbcomp__rtti_access__Bytes_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__BytesPrime_5;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__encode_int32_2_p_0(mdbcomp__rtti_access__Int32_3, &mdbcomp__rtti_access__BytesPrime_5);
    }
    if (mdbcomp__rtti_access__succeeded)
      *mdbcomp__rtti_access__Bytes_4 = mdbcomp__rtti_access__BytesPrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_int32_det\'/2", (MR_String) "encode_int32 failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_int32_2_p_0(
  MR_Integer mdbcomp__rtti_access__Int32_3,
  MR_Word * mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Int32_3 >= (MR_Integer) 0);
    MR_Integer mdbcomp__rtti_access__Byte1_4;
    MR_Integer mdbcomp__rtti_access__Byte2_5;
    MR_Integer mdbcomp__rtti_access__Byte3_6;
    MR_Integer mdbcomp__rtti_access__Byte4_7;
    MR_Integer mdbcomp__rtti_access__Bytes123_8;
    MR_Integer mdbcomp__rtti_access__Bytes12_9;
    MR_Word mdbcomp__rtti_access__V_10_10;
    MR_Word mdbcomp__rtti_access__V_11_11;
    MR_Word mdbcomp__rtti_access__V_12_12;
    MR_Integer mdbcomp__rtti_access__V_15_15;
    MR_Integer mdbcomp__rtti_access__V_16_16;
    MR_Integer mdbcomp__rtti_access__V_17_17;
    MR_Integer mdbcomp__rtti_access__V_18_18;
    MR_Integer mdbcomp__rtti_access__V_19_19;
    MR_Integer mdbcomp__rtti_access__V_20_20;
    MR_Integer mdbcomp__rtti_access__V_21_21;

    if (mdbcomp__rtti_access__succeeded)
      {
        mdbcomp__rtti_access__V_15_15 = (MR_Integer) 255;
        mdbcomp__rtti_access__Byte4_7 = (mdbcomp__rtti_access__Int32_3 & mdbcomp__rtti_access__V_15_15);
        mdbcomp__rtti_access__V_16_16 = (MR_Integer) 256;
        {
          mdbcomp__rtti_access__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_12_12, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte4_7));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdbcomp__rtti_access__Bytes123_8 = mercury__int__f_slash_2_f_0(mdbcomp__rtti_access__Int32_3, mdbcomp__rtti_access__V_16_16);
        }
        mdbcomp__rtti_access__V_17_17 = (MR_Integer) 255;
        mdbcomp__rtti_access__Byte3_6 = (mdbcomp__rtti_access__Bytes123_8 & mdbcomp__rtti_access__V_17_17);
        mdbcomp__rtti_access__V_18_18 = (MR_Integer) 256;
        {
          mdbcomp__rtti_access__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_11_11, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte3_6));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_11_11, 1) = ((MR_Box) (mdbcomp__rtti_access__V_12_12));
        }
        {
          mdbcomp__rtti_access__Bytes12_9 = mercury__int__f_slash_2_f_0(mdbcomp__rtti_access__Bytes123_8, mdbcomp__rtti_access__V_18_18);
        }
        mdbcomp__rtti_access__V_19_19 = (MR_Integer) 255;
        mdbcomp__rtti_access__Byte2_5 = (mdbcomp__rtti_access__Bytes12_9 & mdbcomp__rtti_access__V_19_19);
        mdbcomp__rtti_access__V_20_20 = (MR_Integer) 256;
        {
          mdbcomp__rtti_access__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_10_10, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte2_5));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_10_10, 1) = ((MR_Box) (mdbcomp__rtti_access__V_11_11));
        }
        {
          mdbcomp__rtti_access__Byte1_4 = mercury__int__f_slash_2_f_0(mdbcomp__rtti_access__Bytes12_9, mdbcomp__rtti_access__V_20_20);
        }
        mdbcomp__rtti_access__V_21_21 = (MR_Integer) 128;
        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Byte1_4 < mdbcomp__rtti_access__V_21_21);
        if (mdbcomp__rtti_access__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdbcomp__rtti_access__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte1_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__rtti_access__V_10_10));
            }
            mdbcomp__rtti_access__succeeded = MR_TRUE;
          }
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_short_func_1_f_0(
  MR_Integer mdbcomp__rtti_access__Short_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Bytes_4;
    MR_Word mdbcomp__rtti_access__BytesPrime_7;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__encode_short_2_p_0(mdbcomp__rtti_access__Short_3, &mdbcomp__rtti_access__BytesPrime_7);
    }
    if (mdbcomp__rtti_access__succeeded)
      mdbcomp__rtti_access__Bytes_4 = mdbcomp__rtti_access__BytesPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_short_det\'/2", (MR_String) "encode_short failed");
        }
      }
    return mdbcomp__rtti_access__Bytes_4;
  }
}

void MR_CALL 
mdbcomp__rtti_access__encode_short_det_2_p_0(
  MR_Integer mdbcomp__rtti_access__Short_3,
  MR_Word * mdbcomp__rtti_access__Bytes_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__BytesPrime_5;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__encode_short_2_p_0(mdbcomp__rtti_access__Short_3, &mdbcomp__rtti_access__BytesPrime_5);
    }
    if (mdbcomp__rtti_access__succeeded)
      *mdbcomp__rtti_access__Bytes_4 = mdbcomp__rtti_access__BytesPrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_short_det\'/2", (MR_String) "encode_short failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_short_2_p_0(
  MR_Integer mdbcomp__rtti_access__Short_3,
  MR_Word * mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Short_3 >= (MR_Integer) 0);
    MR_Integer mdbcomp__rtti_access__Byte1_4;
    MR_Integer mdbcomp__rtti_access__Byte2_5;
    MR_Word mdbcomp__rtti_access__V_6_6;
    MR_Integer mdbcomp__rtti_access__V_9_9;
    MR_Integer mdbcomp__rtti_access__V_10_10;
    MR_Integer mdbcomp__rtti_access__V_11_11;

    if (mdbcomp__rtti_access__succeeded)
      {
        mdbcomp__rtti_access__V_9_9 = (MR_Integer) 255;
        mdbcomp__rtti_access__Byte2_5 = (mdbcomp__rtti_access__Short_3 & mdbcomp__rtti_access__V_9_9);
        mdbcomp__rtti_access__V_10_10 = (MR_Integer) 256;
        {
          mdbcomp__rtti_access__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_6_6, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte2_5));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdbcomp__rtti_access__Byte1_4 = mercury__int__f_slash_2_f_0(mdbcomp__rtti_access__Short_3, mdbcomp__rtti_access__V_10_10);
        }
        mdbcomp__rtti_access__V_11_11 = (MR_Integer) 128;
        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Byte1_4 < mdbcomp__rtti_access__V_11_11);
        if (mdbcomp__rtti_access__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdbcomp__rtti_access__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte1_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__rtti_access__V_6_6));
            }
            mdbcomp__rtti_access__succeeded = MR_TRUE;
          }
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__encode_byte_func_1_f_0(
  MR_Integer mdbcomp__rtti_access__Byte_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Bytes_4;

    {
      mdbcomp__rtti_access__encode_byte_det_2_p_0(mdbcomp__rtti_access__Byte_3, &mdbcomp__rtti_access__Bytes_4);
    }
    return mdbcomp__rtti_access__Bytes_4;
  }
}

void MR_CALL 
mdbcomp__rtti_access__encode_byte_det_2_p_0(
  MR_Integer mdbcomp__rtti_access__Byte_3,
  MR_Word * mdbcomp__rtti_access__Bytes_4)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Byte_3 >= (MR_Integer) 0);
    MR_Word mdbcomp__rtti_access__BytesPrime_5;
    MR_Integer mdbcomp__rtti_access__V_12_12;

    if (mdbcomp__rtti_access__succeeded)
      {
        mdbcomp__rtti_access__V_12_12 = (MR_Integer) 128;
        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Byte_3 < mdbcomp__rtti_access__V_12_12);
        if (mdbcomp__rtti_access__succeeded)
          {
            {
              mdbcomp__rtti_access__BytesPrime_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__BytesPrime_5, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte_3));
              MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__BytesPrime_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mdbcomp__rtti_access__succeeded = MR_TRUE;
          }
      }
    if (mdbcomp__rtti_access__succeeded)
      *mdbcomp__rtti_access__Bytes_4 = mdbcomp__rtti_access__BytesPrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "predicate \140mdbcomp.rtti_access.encode_byte_det\'/2", (MR_String) "encode_byte failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__encode_byte_2_p_0(
  MR_Integer mdbcomp__rtti_access__Byte_3,
  MR_Word * mdbcomp__rtti_access__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Byte_3 >= (MR_Integer) 0);
    MR_Integer mdbcomp__rtti_access__V_6_6;

    if (mdbcomp__rtti_access__succeeded)
      {
        mdbcomp__rtti_access__V_6_6 = (MR_Integer) 128;
        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__Byte_3 < mdbcomp__rtti_access__V_6_6);
        if (mdbcomp__rtti_access__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdbcomp__rtti_access__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__rtti_access__Byte_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mdbcomp__rtti_access__succeeded = MR_TRUE;
          }
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_string_table_4_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_5,
  MR_Word * mdbcomp__rtti_access__StringTable_6,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_12,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_13)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Integer mdbcomp__rtti_access__Size_8;
    MR_Box mdbcomp__rtti_access__Bytes_9;
    MR_Integer mdbcomp__rtti_access__NumBytes_10;
    MR_Box mdbcomp__rtti_access__StringTableChars_11;
    MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14;
    MR_Integer mdbcomp__rtti_access__V_15_15;
    MR_Word mdbcomp__rtti_access__TypeCtorInfo_17_25;
    MR_Word mdbcomp__rtti_access__TypeCtorInfo_17_26;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__read_num_2_5_p_0(mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 0, &mdbcomp__rtti_access__Size_8, mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_12, &mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14);
    }
    if (mdbcomp__rtti_access__succeeded)
      {
        mdbcomp__rtti_access__Bytes_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 0)));
        mdbcomp__rtti_access__NumBytes_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 1)));
        mdbcomp__rtti_access__V_15_15 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14 + mdbcomp__rtti_access__Size_8);
        mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_15_15 <= mdbcomp__rtti_access__NumBytes_10);
        if (mdbcomp__rtti_access__succeeded)
          {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_string_table_4_p_0

	const MR_uint_least8_t * Bytes;
	MR_Word Offset;
	MR_Word Size;
	MR_ConstString StringTableChars;

	Bytes = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_9 ;
	Offset = (MR_Word) ((MR_Box) (mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14)) ;
	Size = (MR_Word) ((MR_Box) (mdbcomp__rtti_access__Size_8)) ;
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
	 mdbcomp__rtti_access__StringTableChars_11  = (MR_Box) StringTableChars;
}
            *mdbcomp__rtti_access__STATE_VARIABLE_Pos_13 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_14_14 + mdbcomp__rtti_access__Size_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *mdbcomp__rtti_access__StringTable_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__rtti_access__StringTableChars_11));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__rtti_access__Size_8));
            }
            mdbcomp__rtti_access__succeeded = MR_TRUE;
          }
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_len_string_4_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_5,
  MR_String * mdbcomp__rtti_access__String_6,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_11)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Integer mdbcomp__rtti_access__Length_8;
    MR_Word mdbcomp__rtti_access__RevChars_9;
    MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_12_12;
    MR_Word mdbcomp__rtti_access__V_13_13;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__read_num_2_5_p_0(mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 0, &mdbcomp__rtti_access__Length_8, mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10, &mdbcomp__rtti_access__STATE_VARIABLE_Pos_12_12);
    }
    if (mdbcomp__rtti_access__succeeded)
      {
        mdbcomp__rtti_access__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__read_len_string_2_6_p_0(mdbcomp__rtti_access__ByteCode_5, mdbcomp__rtti_access__Length_8, mdbcomp__rtti_access__V_13_13, &mdbcomp__rtti_access__RevChars_9, mdbcomp__rtti_access__STATE_VARIABLE_Pos_12_12, mdbcomp__rtti_access__STATE_VARIABLE_Pos_11);
        }
        if (mdbcomp__rtti_access__succeeded)
          {
            {
              mercury__string__from_rev_char_list_2_p_0(mdbcomp__rtti_access__RevChars_9, mdbcomp__rtti_access__String_6);
            }
            mdbcomp__rtti_access__succeeded = MR_TRUE;
          }
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_line_4_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_5,
  MR_String * mdbcomp__rtti_access__Line_6,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_9,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_10)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__RevChars_8;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__read_line_2_5_p_0(mdbcomp__rtti_access__ByteCode_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__rtti_access__RevChars_8, mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_9, mdbcomp__rtti_access__STATE_VARIABLE_Pos_10);
    }
    if (mdbcomp__rtti_access__succeeded)
      {
        {
          mercury__string__from_rev_char_list_2_p_0(mdbcomp__rtti_access__RevChars_8, mdbcomp__rtti_access__Line_6);
        }
        mdbcomp__rtti_access__succeeded = MR_TRUE;
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_string_via_offset_5_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_6,
  MR_Word mdbcomp__rtti_access__StringTable_7,
  MR_String * mdbcomp__rtti_access__String_8,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_11,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_12)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Integer mdbcomp__rtti_access__Offset_10;
    MR_Box mdbcomp__rtti_access__Bytes_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_6, (MR_Integer) 0)));
    MR_Integer mdbcomp__rtti_access__Size_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_6, (MR_Integer) 1)));
    MR_Integer mdbcomp__rtti_access__V_21_21 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_11 + (MR_Integer) 4);
    MR_Box mdbcomp__rtti_access__StringTableChars_27;
    MR_Integer mdbcomp__rtti_access__Size_28;

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_21_21 <= mdbcomp__rtti_access__Size_20);
    if (mdbcomp__rtti_access__succeeded)
      {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_string_via_offset_5_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_19 ;
	Pos0 =  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_11 ;
		{

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__Offset_10  = Value;
	 *mdbcomp__rtti_access__STATE_VARIABLE_Pos_12  = Pos;
}
        mdbcomp__rtti_access__StringTableChars_27 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__StringTable_7, (MR_Integer) 0)));
        mdbcomp__rtti_access__Size_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__StringTable_7, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_string_via_offset_5_p_0

	MR_ConstString StringTableChars;
	MR_Integer StringTableSize;
	MR_Integer NameCode;
	MR_String Str;

	StringTableChars = (MR_ConstString) mdbcomp__rtti_access__StringTableChars_27 ;
	StringTableSize =  mdbcomp__rtti_access__Size_28 ;
	NameCode =  mdbcomp__rtti_access__Offset_10 ;
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
	 *mdbcomp__rtti_access__String_8  = Str;
}
        mdbcomp__rtti_access__succeeded = MR_TRUE;
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_num_4_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_5,
  MR_Integer * mdbcomp__rtti_access__Num_6,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_8,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_9)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

    {
      mdbcomp__rtti_access__succeeded = mdbcomp__rtti_access__read_num_2_5_p_0(mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 0, mdbcomp__rtti_access__Num_6, mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_8, mdbcomp__rtti_access__STATE_VARIABLE_Pos_9);
    }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_int32_4_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_5,
  MR_Integer * mdbcomp__rtti_access__Value_6,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_11)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Box mdbcomp__rtti_access__Bytes_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 0)));
    MR_Integer mdbcomp__rtti_access__Size_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 1)));
    MR_Integer mdbcomp__rtti_access__V_12_12 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10 + (MR_Integer) 4);

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_12_12 <= mdbcomp__rtti_access__Size_9);
    if (mdbcomp__rtti_access__succeeded)
      {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_int32_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_8 ;
	Pos0 =  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10 ;
		{

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__Value_6  = Value;
	 *mdbcomp__rtti_access__STATE_VARIABLE_Pos_11  = Pos;
}
        mdbcomp__rtti_access__succeeded = MR_TRUE;
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_short_4_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_5,
  MR_Integer * mdbcomp__rtti_access__Value_6,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_11)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Box mdbcomp__rtti_access__Bytes_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 0)));
    MR_Integer mdbcomp__rtti_access__Size_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 1)));
    MR_Integer mdbcomp__rtti_access__V_12_12 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10 + (MR_Integer) 2);

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_12_12 <= mdbcomp__rtti_access__Size_9);
    if (mdbcomp__rtti_access__succeeded)
      {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_short_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_8 ;
	Pos0 =  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10 ;
		{

    Value = (ByteCode[Pos0] << 8) + ByteCode[Pos0+1];
    Pos = Pos0 + 2;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__Value_6  = Value;
	 *mdbcomp__rtti_access__STATE_VARIABLE_Pos_11  = Pos;
}
        mdbcomp__rtti_access__succeeded = MR_TRUE;
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__read_byte_4_p_0(
  MR_Word mdbcomp__rtti_access__ByteCode_5,
  MR_Integer * mdbcomp__rtti_access__Value_6,
  MR_Integer mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10,
  MR_Integer * mdbcomp__rtti_access__STATE_VARIABLE_Pos_11)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Box mdbcomp__rtti_access__Bytes_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 0)));
    MR_Integer mdbcomp__rtti_access__Size_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ByteCode_5, (MR_Integer) 1)));
    MR_Integer mdbcomp__rtti_access__V_12_12 = (mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10 + (MR_Integer) 1);

    mdbcomp__rtti_access__succeeded = (mdbcomp__rtti_access__V_12_12 <= mdbcomp__rtti_access__Size_9);
    if (mdbcomp__rtti_access__succeeded)
      {
{
#define MR_PROC_LABEL mdbcomp__rtti_access__read_byte_4_p_0

	const MR_uint_least8_t * ByteCode;
	MR_Integer Value;
	MR_Integer Pos0;
	MR_Integer Pos;

	ByteCode = (const MR_uint_least8_t *) mdbcomp__rtti_access__Bytes_8 ;
	Pos0 =  mdbcomp__rtti_access__STATE_VARIABLE_Pos_0_10 ;
		{

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__rtti_access__Value_6  = Value;
	 *mdbcomp__rtti_access__STATE_VARIABLE_Pos_11  = Pos;
}
        mdbcomp__rtti_access__succeeded = MR_TRUE;
      }
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_String MR_CALL 
mdbcomp__rtti_access__lookup_string_table_2_f_0(
  MR_Word mdbcomp__rtti_access__StringTable_4,
  MR_Integer mdbcomp__rtti_access__NameCode_5)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_String mdbcomp__rtti_access__Str_6;
    MR_Box mdbcomp__rtti_access__StringTableChars_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__StringTable_4, (MR_Integer) 0)));
    MR_Integer mdbcomp__rtti_access__Size_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__StringTable_4, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mdbcomp__rtti_access__lookup_string_table_2_f_0

	MR_ConstString StringTableChars;
	MR_Integer StringTableSize;
	MR_Integer NameCode;
	MR_String Str;

	StringTableChars = (MR_ConstString) mdbcomp__rtti_access__StringTableChars_7 ;
	StringTableSize =  mdbcomp__rtti_access__Size_8 ;
	NameCode =  mdbcomp__rtti_access__NameCode_5 ;
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
	 mdbcomp__rtti_access__Str_6  = Str;
}
    return mdbcomp__rtti_access__Str_6;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__module_string_table_1_f_0(
  MR_Box mdbcomp__rtti_access__ModuleLayout_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__StringTable_4;
    MR_Box mdbcomp__rtti_access__StringTableChars_5;
    MR_Integer mdbcomp__rtti_access__Size_6;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__module_string_table_1_f_0

	const MR_ModuleLayout * ModuleLayout;
	MR_ConstString StringTableChars;
	MR_Integer Size;

	ModuleLayout = (const MR_ModuleLayout *) mdbcomp__rtti_access__ModuleLayout_3 ;
		{

    StringTableChars = ModuleLayout->MR_ml_string_table;
    Size = ModuleLayout->MR_ml_string_table_size;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__StringTableChars_5  = (MR_Box) StringTableChars;
	 mdbcomp__rtti_access__Size_6  = Size;
}
    {
      mdbcomp__rtti_access__StringTable_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__StringTable_4, 0) = ((MR_Box) (mdbcomp__rtti_access__StringTableChars_5));
      MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__StringTable_4, 1) = ((MR_Box) (mdbcomp__rtti_access__Size_6));
    }
    return mdbcomp__rtti_access__StringTable_4;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__containing_module_layout_2_p_0(
  MR_Box mdbcomp__rtti_access__ProcLayout_1,
  MR_Box * mdbcomp__rtti_access__ModuleLayout_2)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__containing_module_layout_2_p_0

	const MR_ProcLayout * ProcLayout;
	const MR_ModuleLayout * ModuleLayout;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdbcomp__rtti_access__ProcLayout_1 ;
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
	 *mdbcomp__rtti_access__ModuleLayout_2  = (MR_Box) ModuleLayout;
	}
mdbcomp__rtti_access__succeeded  = SUCCESS_INDICATOR;
}
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_Box MR_CALL 
mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0(
  MR_Box mdbcomp__rtti_access__ProcLayout_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Box mdbcomp__rtti_access__ByteCodeBytes_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0

	const MR_ProcLayout * ProcLayout;
	const MR_uint_least8_t * ByteCodeBytes;

	ProcLayout = (const MR_ProcLayout *) mdbcomp__rtti_access__ProcLayout_1 ;
		{

    ByteCodeBytes = ProcLayout->MR_sle_body_bytes;
#ifdef MR_DEBUG_PROC_REP
    printf("lookup_proc_bytecode: %p %p\n", ProcLayout, ByteCodeBytes);
#endif


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__ByteCodeBytes_2  = (MR_Box) ByteCodeBytes;
}
    return mdbcomp__rtti_access__ByteCodeBytes_2;
  }
}

MR_Box MR_CALL 
mdbcomp__rtti_access__containing_proc_layout_1_f_0(
  MR_Box mdbcomp__rtti_access__LabelLayout_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Box mdbcomp__rtti_access__ProcLayout_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__containing_proc_layout_1_f_0

	const MR_LabelLayout * LabelLayout;
	const MR_ProcLayout * ProcLayout;

	LabelLayout = (const MR_LabelLayout *) mdbcomp__rtti_access__LabelLayout_1 ;
		{

    ProcLayout = LabelLayout->MR_sll_entry;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__ProcLayout_2  = (MR_Box) ProcLayout;
}
    return mdbcomp__rtti_access__ProcLayout_2;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(
  MR_Box mdbcomp__rtti_access__Layout_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Layouts_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_Word Layouts;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_1 ;
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
            && (proc_id->MR_user_arity ==
                selected_proc_id->MR_user_arity))
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
	 mdbcomp__rtti_access__Layouts_2  = Layouts;
}
    return mdbcomp__rtti_access__Layouts_2;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__find_initial_version_arg_num_3_p_0(
  MR_Box mdbcomp__rtti_access__Layout_1,
  MR_Integer mdbcomp__rtti_access__OutArgNum_2,
  MR_Integer * mdbcomp__rtti_access__InArgNum_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__find_initial_version_arg_num_3_p_0

	const MR_ProcLayout * Layout;
	MR_Integer OutArgNum;
	MR_Integer InArgNum;
	MR_bool SUCCESS_INDICATOR;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_1 ;
	OutArgNum =  mdbcomp__rtti_access__OutArgNum_2 ;
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
            strncpy(out_name_buf, out_name, MR_MAX_VARNAME_SIZE);
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
	 *mdbcomp__rtti_access__InArgNum_3  = InArgNum;
	}
mdbcomp__rtti_access__succeeded  = SUCCESS_INDICATOR;
}
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_String MR_CALL 
mdbcomp__rtti_access__get_proc_name_1_f_0(
  MR_Word mdbcomp__rtti_access__HeadVar__1_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_String mdbcomp__rtti_access__ProcName_2;

    if (((MR_tag((MR_Word) mdbcomp__rtti_access__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdbcomp__rtti_access__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__rtti_access__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__rtti_access__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdbcomp__rtti_access__V_7_7;
        MR_Integer mdbcomp__rtti_access__V_8_8;

        mdbcomp__rtti_access__ProcName_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 3)));
        mdbcomp__rtti_access__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 4)));
        mdbcomp__rtti_access__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 5)));
      }
    else
      {
        MR_Word mdbcomp__rtti_access__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__rtti_access__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__rtti_access__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdbcomp__rtti_access__V_13_13;
        MR_Integer mdbcomp__rtti_access__V_14_14;

        mdbcomp__rtti_access__ProcName_2 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 3)));
        mdbcomp__rtti_access__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 4)));
        mdbcomp__rtti_access__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 5)));
      }
    return mdbcomp__rtti_access__ProcName_2;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(
  MR_Box mdbcomp__rtti_access__Layout_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__ProcLabel_4;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_bool SUCCESS_INDICATOR;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_3 ;
		{

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdbcomp__rtti_access__succeeded  = SUCCESS_INDICATOR;
}
    if (mdbcomp__rtti_access__succeeded)
      {
        MR_String mdbcomp__rtti_access__TypeName_5;
        MR_String mdbcomp__rtti_access__TypeModule_6;
        MR_String mdbcomp__rtti_access__DefModule_7;
        MR_String mdbcomp__rtti_access__PredName_8;
        MR_Integer mdbcomp__rtti_access__TypeArity_9;
        MR_Integer mdbcomp__rtti_access__ModeNum_10;
        MR_Word mdbcomp__rtti_access__SpecialId_14;
        MR_Word mdbcomp__rtti_access__SymDefModule_15;
        MR_Word mdbcomp__rtti_access__SymTypeModule_16;
        MR_Word mdbcomp__rtti_access__SpecialIdPrime_11;
        MR_String mdbcomp__rtti_access__V_12_12;
        MR_Integer mdbcomp__rtti_access__V_13_13;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_String TypeName;
	MR_String TypeModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer TypeArity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_3 ;
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
	 mdbcomp__rtti_access__TypeName_5  = TypeName;
	 mdbcomp__rtti_access__TypeModule_6  = TypeModule;
	 mdbcomp__rtti_access__DefModule_7  = DefModule;
	 mdbcomp__rtti_access__PredName_8  = PredName;
	 mdbcomp__rtti_access__TypeArity_9  = TypeArity;
	 mdbcomp__rtti_access__ModeNum_10  = ModeNum;
}
        {
          mdbcomp__rtti_access__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_2(&mdbcomp__rtti_access__SpecialIdPrime_11, &mdbcomp__rtti_access__V_12_12, mdbcomp__rtti_access__PredName_8, &mdbcomp__rtti_access__V_13_13);
        }
        if (mdbcomp__rtti_access__succeeded)
          mdbcomp__rtti_access__SpecialId_14 = mdbcomp__rtti_access__SpecialIdPrime_11;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.rtti_access", (MR_String) "function \140mdbcomp.rtti_access.get_proc_label_from_layout\'/1", (MR_String) "bad special_pred_id");
            }
          }
        {
          mdbcomp__rtti_access__SymDefModule_15 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__rtti_access__DefModule_7);
        }
        {
          mdbcomp__rtti_access__SymTypeModule_16 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__rtti_access__TypeModule_6);
        }
        {
          mdbcomp__rtti_access__ProcLabel_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__ProcLabel_4, 0) = ((MR_Box) (mdbcomp__rtti_access__SymDefModule_15));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__ProcLabel_4, 1) = ((MR_Box) (mdbcomp__rtti_access__SpecialId_14));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__ProcLabel_4, 2) = ((MR_Box) (mdbcomp__rtti_access__SymTypeModule_16));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__ProcLabel_4, 3) = ((MR_Box) (mdbcomp__rtti_access__TypeName_5));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__ProcLabel_4, 4) = ((MR_Box) (mdbcomp__rtti_access__TypeArity_9));
          MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__ProcLabel_4, 5) = ((MR_Box) (mdbcomp__rtti_access__ModeNum_10));
        }
      }
    else
      {
        MR_Word mdbcomp__rtti_access__PredOrFunc_17;
        MR_String mdbcomp__rtti_access__DeclModule_18;
        MR_Integer mdbcomp__rtti_access__Arity_19;
        MR_Word mdbcomp__rtti_access__SymDeclModule_20;
        MR_String mdbcomp__rtti_access__DefModule_24;
        MR_String mdbcomp__rtti_access__PredName_25;
        MR_Integer mdbcomp__rtti_access__ModeNum_26;
        MR_Word mdbcomp__rtti_access__SymDefModule_27;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0

	const MR_ProcLayout * Layout;
	MR_Word PredOrFunc;
	MR_String DeclModule;
	MR_String DefModule;
	MR_String PredName;
	MR_Integer Arity;
	MR_Integer ModeNum;

	Layout = (const MR_ProcLayout *) mdbcomp__rtti_access__Layout_3 ;
		{

    const MR_UserProcId *proc_id;

    proc_id = &Layout->MR_sle_user;

    /* The casts are there to cast away const without warnings */
    PredOrFunc = proc_id->MR_user_pred_or_func;
    DeclModule = (MR_String) (MR_Integer) proc_id->MR_user_decl_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_user_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_user_name;
    Arity      = proc_id->MR_user_arity;
    ModeNum    = proc_id->MR_user_mode;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__PredOrFunc_17  = PredOrFunc;
	 mdbcomp__rtti_access__DeclModule_18  = DeclModule;
	 mdbcomp__rtti_access__DefModule_24  = DefModule;
	 mdbcomp__rtti_access__PredName_25  = PredName;
	 mdbcomp__rtti_access__Arity_19  = Arity;
	 mdbcomp__rtti_access__ModeNum_26  = ModeNum;
}
        {
          mdbcomp__rtti_access__SymDefModule_27 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__rtti_access__DefModule_24);
        }
        {
          mdbcomp__rtti_access__SymDeclModule_20 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__rtti_access__DeclModule_18);
        }
        {
          mdbcomp__rtti_access__ProcLabel_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ProcLabel_4, 0) = ((MR_Box) (mdbcomp__rtti_access__SymDefModule_27));
          MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ProcLabel_4, 1) = ((MR_Box) (mdbcomp__rtti_access__PredOrFunc_17));
          MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ProcLabel_4, 2) = ((MR_Box) (mdbcomp__rtti_access__SymDeclModule_20));
          MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ProcLabel_4, 3) = ((MR_Box) (mdbcomp__rtti_access__PredName_25));
          MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ProcLabel_4, 4) = ((MR_Box) (mdbcomp__rtti_access__Arity_19));
          MR_hl_field(MR_mktag(0), mdbcomp__rtti_access__ProcLabel_4, 5) = ((MR_Box) (mdbcomp__rtti_access__ModeNum_26));
        }
      }
    return mdbcomp__rtti_access__ProcLabel_4;
  }
}

MR_bool MR_CALL 
mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(
  MR_Box mdbcomp__rtti_access__Label_1,
  MR_String * mdbcomp__rtti_access__FileName_2,
  MR_Integer * mdbcomp__rtti_access__LineNo_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_context_from_label_layout_3_p_0

	const MR_LabelLayout * Label;
	MR_String FileName;
	MR_Integer LineNo;
	MR_bool SUCCESS_INDICATOR;

	Label = (const MR_LabelLayout *) mdbcomp__rtti_access__Label_1 ;
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
	 *mdbcomp__rtti_access__FileName_2  = FileName;
	 *mdbcomp__rtti_access__LineNo_3  = LineNo;
	}
mdbcomp__rtti_access__succeeded  = SUCCESS_INDICATOR;
}
    return mdbcomp__rtti_access__succeeded;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0(
  MR_Box mdbcomp__rtti_access__Label_3)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__PathPort_4;
    MR_Word mdbcomp__rtti_access__Port_5;
    MR_String mdbcomp__rtti_access__GoalPathStr_6;
    MR_Word mdbcomp__rtti_access__GoalPath_7;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_Word Port;

	Label = (const MR_LabelLayout *) mdbcomp__rtti_access__Label_3 ;
		{

    Port = Label->MR_sll_port;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__Port_5  = Port;
}
{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_String GoalPath;

	Label = (const MR_LabelLayout *) mdbcomp__rtti_access__Label_3 ;
		{

    GoalPath = (MR_String) MR_label_goal_path(Label);


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__GoalPathStr_6  = GoalPath;
}
    {
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdbcomp__rtti_access__GoalPathStr_6, &mdbcomp__rtti_access__GoalPath_7);
    }
    {
      mdbcomp__rtti_access__PathPort_4 = mdbcomp__trace_counts__make_path_port_2_f_0(mdbcomp__rtti_access__GoalPath_7, mdbcomp__rtti_access__Port_5);
    }
    return mdbcomp__rtti_access__PathPort_4;
  }
}

MR_Word MR_CALL 
mdbcomp__rtti_access__get_port_from_label_layout_1_f_0(
  MR_Box mdbcomp__rtti_access__Label_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Word mdbcomp__rtti_access__Port_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_port_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_Word Port;

	Label = (const MR_LabelLayout *) mdbcomp__rtti_access__Label_1 ;
		{

    Port = Label->MR_sll_port;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__Port_2  = Port;
}
    return mdbcomp__rtti_access__Port_2;
  }
}

MR_String MR_CALL 
mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(
  MR_Word mdbcomp__rtti_access__HeadVar__1_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_String mdbcomp__rtti_access__HeadVar__2_2;

    if ((mdbcomp__rtti_access__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdbcomp__rtti_access__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_Box mdbcomp__rtti_access__Label_3 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdbcomp__rtti_access__HeadVar__1_1, (MR_Integer) 0)));

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0

	const MR_LabelLayout * Label;
	MR_String GoalPath;

	Label = (const MR_LabelLayout *) mdbcomp__rtti_access__Label_3 ;
		{

    GoalPath = (MR_String) MR_label_goal_path(Label);


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__HeadVar__2_2  = GoalPath;
}
      }
    return mdbcomp__rtti_access__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(
  MR_Box mdbcomp__rtti_access__Label_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_String mdbcomp__rtti_access__GoalPath_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	MR_String GoalPath;

	Label = (const MR_LabelLayout *) mdbcomp__rtti_access__Label_1 ;
		{

    GoalPath = (MR_String) MR_label_goal_path(Label);


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__GoalPath_2  = GoalPath;
}
    return mdbcomp__rtti_access__GoalPath_2;
  }
}

MR_Box MR_CALL 
mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(
  MR_Box mdbcomp__rtti_access__Label_1)
{
  {
    MR_bool mdbcomp__rtti_access__succeeded;
    MR_Box mdbcomp__rtti_access__ProcLayout_2;

{
#define MR_PROC_LABEL mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0

	const MR_LabelLayout * Label;
	const MR_ProcLayout * ProcLayout;

	Label = (const MR_LabelLayout *) mdbcomp__rtti_access__Label_1 ;
		{

    ProcLayout = Label->MR_sll_entry;


		;}
#undef MR_PROC_LABEL
	 mdbcomp__rtti_access__ProcLayout_2  = (MR_Box) ProcLayout;
}
    return mdbcomp__rtti_access__ProcLayout_2;
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.rtti_access. */
