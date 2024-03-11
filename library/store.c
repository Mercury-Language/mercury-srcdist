/*
** Automatically generated from `store.m'
** by the Mercury compiler,
** version rotd-2024-03-11
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


// :- module store.
// :- implementation.

/*
INIT mercury__store__init
ENDINIT
*/

#include "store.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__store__store__functor_number_map_generic_mutvar_2[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__private_builtin__pti_ref_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_mutvar_2;

static const MR_Integer mercury__store__store__functor_number_map_generic_ref_2[1];

static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_ref_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__store__pti_store_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2;

static const MR_ConstString mercury__store__store__type_class_id_var_names_store_1[1];

static const MR_TypeClassId mercury__store__store__type_class_id_store_1;

static MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__store____Compare____generic_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__store____Compare____io_mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__store____Compare____io_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__store____Unify____store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__store____Compare____store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__store____Compare____store_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__store____Compare____store_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__store_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__store_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__store_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__store_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__store_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__store_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__store_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__store_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_Integer mercury__store__store__functor_number_map_generic_mutvar_2[1] = { (MR_Integer) 0 };

static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__private_builtin__pti_ref_1__pseudo_1 = {
  &mercury__private_builtin__private_builtin__type_ctor_info_ref_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_mutvar_2 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) (&mercury__store__private_builtin__pti_ref_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_generic_mutvar_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__store____Unify____generic_mutvar_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____generic_mutvar_2_0_10001)),
  (MR_String) "store",
  (MR_String) "generic_mutvar",
  { &mercury__store__store__notag_functor_desc_generic_mutvar_2 },
  { &mercury__store__store__notag_functor_desc_generic_mutvar_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__store__store__functor_number_map_generic_mutvar_2,

};

static const MR_Integer mercury__store__store__functor_number_map_generic_ref_2[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__store__store__notag_functor_desc_generic_ref_2 = {
  (MR_String) "ref",
  (MR_PseudoTypeInfo) (&mercury__store__private_builtin__pti_ref_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_generic_ref_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__store____Unify____generic_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____generic_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "generic_ref",
  { &mercury__store__store__notag_functor_desc_generic_ref_2 },
  { &mercury__store__store__notag_functor_desc_generic_ref_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__store__store__functor_number_map_generic_ref_2,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__store__store__type_ctor_info_generic_mutvar_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_io_mutvar_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____io_mutvar_1_0_10001)),
  ((MR_Box) (mercury__store____Compare____io_mutvar_1_0_10001)),
  (MR_String) "store",
  (MR_String) "io_mutvar",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__store__store__pti_generic_mutvar_2__pseudo_1__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__store__store__type_ctor_info_generic_ref_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_io_ref_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____io_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____io_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "io_ref",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__store__store__pti_generic_ref_2__pseudo_1__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__store____Unify____store_1_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_1_0_10001)),
  (MR_String) "store",
  (MR_String) "store",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__store__store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_store_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_generic_mutvar_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__store__store__pti_store_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_mutvar_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____store_mutvar_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_mutvar_2_0_10001)),
  (MR_String) "store",
  (MR_String) "store_mutvar",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__store__store__pti_generic_mutvar_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_generic_ref_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__store__store__pti_store_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct mercury__store__store__type_ctor_info_store_ref_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__store____Unify____store_ref_2_0_10001)),
  ((MR_Box) (mercury__store____Compare____store_ref_2_0_10001)),
  (MR_String) "store",
  (MR_String) "store_ref",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__store__store__pti_generic_ref_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_store__store__arity1__io__state__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0))
};

const MR_BaseTypeclassInfo base_typeclass_info_store__store__arity1__store__store__arity1__[5] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0))
};

static const MR_ConstString mercury__store__store__type_class_id_var_names_store_1[1] = { (MR_String) "T" };

static const MR_TypeClassId mercury__store__store__type_class_id_store_1 = {
  (MR_String) "store",
  (MR_String) "store",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__store__store__type_class_id_var_names_store_1,
  NULL
};

const MR_TypeClassDeclStruct mercury__store__store__type_class_decl_store_1 = {
  &mercury__store__store__type_class_id_store_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
mercury__store____Compare____store_ref_2_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_S_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_S_7));
  }
  mercury__store____Compare____generic_ref_2_0(TypeInfo_for_T_6, TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_S_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_S_6));
  }
  succeeded = mercury__store____Unify____generic_ref_2_0(TypeInfo_for_T_5, TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__store____Compare____store_mutvar_2_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_S_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_S_7));
  }
  mercury__store____Compare____generic_mutvar_2_0(TypeInfo_for_T_6, TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_S_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_S_6));
  }
  succeeded = mercury__store____Unify____generic_mutvar_2_0(TypeInfo_for_T_5, TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__store____Compare____store_1_0(
  MR_Word TypeInfo_for_S_6,
  MR_Word * HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (mercury__private_builtin__dummy_var);
  MR_Integer CastY_5 = (MR_Integer) (mercury__private_builtin__dummy_var);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    {
      mercury__require__error_1_p_0((MR_String) "attempt to compare two stores");
      return;
    }
}

MR_bool MR_CALL 
mercury__store____Unify____store_1_0(
  MR_Word TypeInfo_for_S_5)
{
  MR_bool succeeded;
  MR_Integer CastX_3 = (MR_Integer) (mercury__private_builtin__dummy_var);
  MR_Integer CastY_4 = (MR_Integer) (mercury__private_builtin__dummy_var);

  succeeded = (CastX_3 == CastY_4);
  if (!(succeeded))
    mercury__require__error_1_p_0((MR_String) "attempt to unify two stores");
  succeeded = MR_TRUE;
  return succeeded;
}

void MR_CALL 
mercury__store____Compare____io_ref_2_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_S_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_p_0(TypeInfo_for_T_6, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

void MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_3_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__store____Compare____generic_ref_2_0(TypeInfo_for_T_6, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_S_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_p_0(TypeInfo_for_T_5, HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

MR_bool MR_CALL 
mercury__store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_111_114_101_95_95_105_111_95_114_101_102_95_50_95_95_91_50_93_95_48_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__store____Unify____generic_ref_2_0(TypeInfo_for_T_5, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__store____Compare____io_mutvar_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__store____Compare____generic_mutvar_2_0(TypeInfo_for_T_6, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__store____Unify____generic_mutvar_2_0(TypeInfo_for_T_5, (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__store____Compare____generic_ref_2_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_S_9,
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

    mercury__private_builtin____Compare____ref_1_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_S_8,
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

    succeeded = mercury__private_builtin____Unify____ref_1_0(TypeInfo_for_T_7, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_S_9,
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

    mercury__private_builtin____Compare____ref_1_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_S_8,
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

    succeeded = mercury__private_builtin____Unify____ref_1_0(TypeInfo_for_T_7, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__store__unsafe_ref_value_4_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeClassInfo_for_store_5,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__store__unsafe_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref = HeadVar__1_1 ;
	S0 = (MR_Word) HeadVar__3_3 ;
		{

    Val = * (MR_Word *) Ref;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) Val;
	*HeadVar__4_4  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__unsafe_new_uninitialized_mutvar_3_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeClassInfo_for_store_4,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__store__unsafe_new_uninitialized_mutvar_3_p_0

	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) HeadVar__2_2 ;
		{

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__1_1  = Mutvar;
	*HeadVar__3_3  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__do_init_1_p_0(
  MR_Word * TypeInfo_for_S_2)
{
{
#define MR_PROC_LABEL mercury__store__do_init_1_p_0

	MR_Word TypeInfo_for_S;
	MR_Word TypeInfo_Out_1;

		{

    TypeInfo_for_S = 0;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_S;
	*TypeInfo_for_S_2  = TypeInfo_for_S;
}
}

void MR_CALL 
mercury__store__store_compare_3_p_0(
  MR_Word TypeInfo_for_S_8,
  MR_Word * HeadVar__1_4)
{
  {
    mercury__require__error_1_p_0((MR_String) "attempt to compare two stores");
    return;
  }
}

MR_bool MR_CALL 
mercury__store__store_equal_2_p_0(
  MR_Word TypeInfo_for_S_6)
{
  mercury__require__error_1_p_0((MR_String) "attempt to unify two stores");
  return MR_TRUE;
}

void MR_CALL 
mercury__store__unsafe_new_arg_ref_5_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_ArgT_8,
  MR_Word TypeClassInfo_for_store_6,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
{
#define MR_PROC_LABEL mercury__store__unsafe_new_arg_ref_5_p_0

	MR_Word Val;
	MR_Integer Arg;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) HeadVar__1_1 ;
	Arg = HeadVar__2_2 ;
	S0 = (MR_Word) HeadVar__4_4 ;
		{
{
    // Unsafe - does not check type & arity, won't handle no_tag types.
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Val);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
}

		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = ArgRef;
	*HeadVar__5_5  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__unsafe_arg_ref_5_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_ArgT_8,
  MR_Word TypeClassInfo_for_store_6,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
{
#define MR_PROC_LABEL mercury__store__unsafe_arg_ref_5_p_0

	MR_Word Ref;
	MR_Integer Arg;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	Ref = HeadVar__1_1 ;
	Arg = HeadVar__2_2 ;
	S0 = (MR_Word) HeadVar__4_4 ;
		{
{
    // Unsafe - does not check type & arity, won't handle no_tag types.
    MR_Word *Ptr;

    Ptr = (MR_Word *) MR_strip_tag((MR_Word) Ref);
    ArgRef = (MR_Word) &Ptr[Arg];
    S = S0;
}

		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = ArgRef;
	*HeadVar__5_5  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__extract_ref_value_3_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeClassInfo_for_store_4,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
{
#define MR_PROC_LABEL mercury__store__extract_ref_value_3_p_0

	MR_Word Ref;
	MR_Word Val;

	Ref = HeadVar__2_2 ;
		{

    Val = * (MR_Word *) Ref;


		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = (MR_Box) Val;
}
}

void MR_CALL 
mercury__store__copy_ref_value_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeClassInfo_for_store_9,
  MR_Word Ref_5,
  MR_Box * Val_6,
  MR_Box DCG_0_7,
  MR_Box * DCG_1_8)
{
{
#define MR_PROC_LABEL mercury__store__copy_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref = Ref_5 ;
	S0 = (MR_Word) DCG_0_7 ;
		{

    Val = * (MR_Word *) Ref;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*Val_6  = (MR_Box) Val;
	*DCG_1_8  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__set_ref_value_4_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeClassInfo_for_store_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__store__set_ref_value_4_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref = HeadVar__1_1 ;
	Val = (MR_Word) HeadVar__2_2 ;
	S0 = (MR_Word) HeadVar__3_3 ;
		{

    * (MR_Word *) Ref = Val;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__set_ref_4_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeClassInfo_for_store_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__store__set_ref_4_p_0

	MR_Word Ref;
	MR_Word ValRef;
	MR_Word S0;
	MR_Word S;

	Ref = HeadVar__1_1 ;
	ValRef = HeadVar__2_2 ;
	S0 = (MR_Word) HeadVar__3_3 ;
		{

    * (MR_Word *) Ref = * (MR_Word *) ValRef;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__new_arg_ref_5_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_ArgT_8,
  MR_Word TypeClassInfo_for_store_6,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
{
#define MR_PROC_LABEL mercury__store__new_arg_ref_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_In_2;
	MR_Word Val;
	MR_Integer ArgNum;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	TypeInfo_for_T = TypeInfo_for_T_7 ;
	TypeInfo_for_ArgT = TypeInfo_for_ArgT_8 ;
	Val = (MR_Word) HeadVar__1_1 ;
	ArgNum = HeadVar__2_2 ;
	S0 = (MR_Word) HeadVar__4_4 ;
	TypeInfo_In_1 = TypeInfo_for_T;
	TypeInfo_In_2 = TypeInfo_for_ArgT;
		{
{
    MR_TypeInfo         type_info;
    MR_TypeInfo         arg_type_info;
    MR_TypeInfo         exp_arg_type_info;
    MR_Word             arg_value;
    MR_Word             *word_sized_arg_ptr;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    exp_arg_type_info = (MR_TypeInfo) TypeInfo_for_ArgT;

    MR_save_transient_registers();

    if (!MR_arg(type_info, (MR_Word *) &Val, MR_NONCANON_ABORT, ArgNum,
        &arg_type_info, &arg_value, &word_sized_arg_ptr))
    {
        MR_fatal_error("store.new_arg_ref: argument number out of range");
    }

    if (MR_compare_type_info(arg_type_info, exp_arg_type_info) !=
        MR_COMPARE_EQUAL)
    {
        MR_fatal_error("store.new_arg_ref: argument has wrong type");
    }

    MR_restore_transient_registers();

    if (word_sized_arg_ptr == NULL) {
        MR_offset_incr_hp_msg(ArgRef, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + 1, MR_ALLOC_ID, "store.ref/2");
        MR_define_size_slot(0, ArgRef, 1);
        * (MR_Word *) ArgRef = arg_value;
    } else if (word_sized_arg_ptr == &Val) {
        // For no_tag types, the argument may have the same address as the
        // term. Since the term (Val) is currently on the C stack, we can't
        // return a pointer to it; so if that is the case, then we need
        // to copy it to the heap before returning.

        MR_offset_incr_hp_msg(ArgRef, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + 1, MR_ALLOC_ID, "store.ref/2");
        MR_define_size_slot(0, ArgRef, 1);
        * (MR_Word *) ArgRef = Val;
    } else {
        ArgRef = (MR_Word) word_sized_arg_ptr;
    }
    S = S0;
}

		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = ArgRef;
	*HeadVar__5_5  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__arg_ref_5_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TypeInfo_for_ArgT_8,
  MR_Word TypeClassInfo_for_store_6,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
{
#define MR_PROC_LABEL mercury__store__arg_ref_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo_for_ArgT;
	MR_Word TypeInfo_In_2;
	MR_Word Ref;
	MR_Integer ArgNum;
	MR_Word ArgRef;
	MR_Word S0;
	MR_Word S;

	TypeInfo_for_T = TypeInfo_for_T_7 ;
	TypeInfo_for_ArgT = TypeInfo_for_ArgT_8 ;
	Ref = HeadVar__1_1 ;
	ArgNum = HeadVar__2_2 ;
	S0 = (MR_Word) HeadVar__4_4 ;
	TypeInfo_In_1 = TypeInfo_for_T;
	TypeInfo_In_2 = TypeInfo_for_ArgT;
		{
{
    MR_TypeInfo         type_info;
    MR_TypeInfo         arg_type_info;
    MR_TypeInfo         exp_arg_type_info;
    MR_Word             arg_value;
    MR_Word             *word_sized_arg_ptr;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    exp_arg_type_info = (MR_TypeInfo) TypeInfo_for_ArgT;

    MR_save_transient_registers();

    if (!MR_arg(type_info, (MR_Word *) Ref, MR_NONCANON_ABORT, ArgNum,
        &arg_type_info, &arg_value, &word_sized_arg_ptr))
    {
        MR_fatal_error("store.arg_ref: argument number out of range");
    }

    if (MR_compare_type_info(arg_type_info, exp_arg_type_info) !=
        MR_COMPARE_EQUAL)
    {
        MR_fatal_error("store.arg_ref: argument has wrong type");
    }

    MR_restore_transient_registers();

    if (word_sized_arg_ptr == NULL) {
        MR_offset_incr_hp_msg(ArgRef, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + 1, MR_ALLOC_ID, "store.ref/2");
        MR_define_size_slot(0, ArgRef, 1);
        * (MR_Word *) ArgRef = arg_value;
    } else {
        ArgRef = (MR_Word) word_sized_arg_ptr;
    }
    S = S0;
}

		;}
#undef MR_PROC_LABEL
	*HeadVar__3_3  = ArgRef;
	*HeadVar__5_5  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__ref_functor_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_store_15,
  MR_Word Ref_6,
  MR_String * Functor_7,
  MR_Integer * Arity_8,
  MR_Box STATE_VARIABLE_Store_0_11,
  MR_Box * STATE_VARIABLE_Store_12)
{
  MR_Box Val_10;

{
#define MR_PROC_LABEL mercury__store__ref_functor_5_p_0

	MR_Word Ref;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Ref = Ref_6 ;
	S0 = (MR_Word) STATE_VARIABLE_Store_0_11 ;
		{

    Val = * (MR_Word *) Ref;
    S = S0;


		;}
#undef MR_PROC_LABEL
	Val_10  = (MR_Box) Val;
	*STATE_VARIABLE_Store_12  = (MR_Box) S;
}
  mercury__deconstruct__functor_4_p_1(TypeInfo_for_T_16, Val_10, (MR_Integer) 1, Functor_7, Arity_8);
}

void MR_CALL 
mercury__store__new_ref_4_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeClassInfo_for_store_5,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__store__new_ref_4_p_0

	MR_Word Val;
	MR_Word Ref;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) HeadVar__1_1 ;
	S0 = (MR_Word) HeadVar__3_3 ;
		{

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.ref/2");
    MR_define_size_slot(0, Ref, 1);
    * (MR_Word *) Ref = Val;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = Ref;
	*HeadVar__4_4  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__new_cyclic_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeClassInfo_for_store_12,
  MR_Word Func_5,
  MR_Word * MutVar_6,
  MR_Box STATE_VARIABLE_Store_0_9,
  MR_Box * STATE_VARIABLE_Store_10)
{
  MR_Box Value_8;
  MR_Box STATE_VARIABLE_Store_11_11;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__store__new_cyclic_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) STATE_VARIABLE_Store_0_9 ;
		{

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    S = S0;


		;}
#undef MR_PROC_LABEL
	*MutVar_6  = Mutvar;
	STATE_VARIABLE_Store_11_11  = (MR_Box) S;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Func_5, (MR_Integer) 1))));
  Value_8 = func_0(((MR_Box) (Func_5)), ((MR_Box) (*MutVar_6)));
{
#define MR_PROC_LABEL mercury__store__new_cyclic_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar = *MutVar_6 ;
	Val = (MR_Word) Value_8 ;
	S0 = (MR_Word) STATE_VARIABLE_Store_11_11 ;
		{

    * (MR_Word *) Mutvar = Val;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Store_10  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__set_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeClassInfo_for_store_5,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__store__set_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar = HeadVar__1_1 ;
	Val = (MR_Word) HeadVar__2_2 ;
	S0 = (MR_Word) HeadVar__3_3 ;
		{

    * (MR_Word *) Mutvar = Val;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__get_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeClassInfo_for_store_5,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__store__get_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar = HeadVar__1_1 ;
	S0 = (MR_Word) HeadVar__3_3 ;
		{

    Val = * (MR_Word *) Mutvar;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) Val;
	*HeadVar__4_4  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__copy_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word TypeClassInfo_for_store_12,
  MR_Word Mutvar_5,
  MR_Word * Copy_6,
  MR_Box STATE_VARIABLE_S_0_9,
  MR_Box * STATE_VARIABLE_S_10)
{
  MR_Box Value_8;
  MR_Box STATE_VARIABLE_S_11_11;

{
#define MR_PROC_LABEL mercury__store__copy_mutvar_4_p_0

	MR_Word Mutvar;
	MR_Word Val;
	MR_Word S0;
	MR_Word S;

	Mutvar = Mutvar_5 ;
	S0 = (MR_Word) STATE_VARIABLE_S_0_9 ;
		{

    Val = * (MR_Word *) Mutvar;
    S = S0;


		;}
#undef MR_PROC_LABEL
	Value_8  = (MR_Box) Val;
	STATE_VARIABLE_S_11_11  = (MR_Box) S;
}
{
#define MR_PROC_LABEL mercury__store__copy_mutvar_4_p_0

	MR_Word Val;
	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) Value_8 ;
	S0 = (MR_Word) STATE_VARIABLE_S_11_11 ;
		{

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*Copy_6  = Mutvar;
	*STATE_VARIABLE_S_10  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__new_mutvar_4_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeClassInfo_for_store_5,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__store__new_mutvar_4_p_0

	MR_Word Val;
	MR_Word Mutvar;
	MR_Word S0;
	MR_Word S;

	Val = (MR_Word) HeadVar__1_1 ;
	S0 = (MR_Word) HeadVar__3_3 ;
		{

    MR_offset_incr_hp_msg(Mutvar, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "store.mutvar/2");
    MR_define_size_slot(0, Mutvar, 1);
    * (MR_Word *) Mutvar = Val;
    S = S0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = Mutvar;
	*HeadVar__4_4  = (MR_Box) S;
}
}

void MR_CALL 
mercury__store__init_1_p_0(
  MR_Word * TypeInfo_for_S_3)
{
{
#define MR_PROC_LABEL mercury__store__init_1_p_0

	MR_Word TypeInfo_for_S;
	MR_Word TypeInfo_Out_1;

		{

    TypeInfo_for_S = 0;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_S;
	*TypeInfo_for_S_3  = TypeInfo_for_S;
}
}

static MR_bool MR_CALL 
mercury__store____Unify____generic_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__store____Unify____generic_mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__store____Compare____generic_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__store____Compare____generic_mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__store____Unify____generic_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__store____Unify____generic_ref_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__store____Compare____generic_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__store____Compare____generic_ref_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__store____Unify____io_mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__store____Unify____io_mutvar_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__store____Compare____io_mutvar_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__store____Compare____io_mutvar_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__store____Unify____io_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__store____Unify____io_ref_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__store____Compare____io_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__store____Compare____io_ref_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__store____Unify____store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__store____Unify____store_1_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mercury__store____Compare____store_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__store____Compare____store_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__store____Unify____store_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__store____Unify____store_mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__store____Compare____store_mutvar_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__store____Compare____store_mutvar_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__store____Unify____store_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__store____Unify____store_ref_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__store____Compare____store_ref_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__store____Compare____store_ref_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__store__init(void)
{
}

void mercury__store__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_generic_mutvar_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_generic_ref_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_io_mutvar_1);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_io_ref_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_store_1);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_store_mutvar_2);
	MR_register_type_ctor_info(&mercury__store__store__type_ctor_info_store_ref_2);
}

void mercury__store__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__store__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module store.
