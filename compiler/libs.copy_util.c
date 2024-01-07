/*
** Automatically generated from `copy_util.m'
** by the Mercury compiler,
** version rotd-2024-01-07
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


// :- module libs.copy_util.
// :- implementation.

/*
INIT mercury__libs__copy_util__init
ENDINIT
*/

#include "libs.copy_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.system_cmds.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0;

static const MR_PseudoTypeInfo libs__copy_util__libs__copy_util__field_types_copy_chunk_inner_res0_0_1[1];

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1;

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2;

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_0[2];

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_1[1];

static const MR_DuPtagLayout libs__copy_util__libs__copy_util__du_ptag_ordered_copy_chunk_inner_res0_0[2];

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_name_ordered_copy_chunk_inner_res0_0[3];

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_copy_chunk_inner_res0_0[3];

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_0;

static const MR_PseudoTypeInfo libs__copy_util__libs__copy_util__field_types_file_permissions_0_1[1];

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_1;

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_file_permissions_0_0[1];

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_file_permissions_0_1[1];

static const MR_DuPtagLayout libs__copy_util__libs__copy_util__du_ptag_ordered_file_permissions_0[2];

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_name_ordered_file_permissions_0[2];

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_file_permissions_0[2];

static const MR_EnumFunctorDesc libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_0;

static const MR_EnumFunctorDesc libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_1;

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_ordinal_ordered_internal_copy_method_0[2];

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_name_ordered_internal_copy_method_0[2];

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_internal_copy_method_0[2];

static void MR_CALL 
libs__copy_util____Compare____internal_copy_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__copy_util____Unify____internal_copy_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__copy_util____Compare____file_permissions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__copy_util____Unify____file_permissions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__copy_util__do_set_file_permissions_4_p_0(
  MR_String FileName_1,
  uint64_t RawFilePermissions_2);

static void MR_CALL 
libs__copy_util__do_get_file_permissions_5_p_0(
  MR_String FileName_1,
  uint64_t * RawFilePermissions_2,
  MR_Word * IsOk_3);

static void MR_CALL 
libs__copy_util__should_reduce_stack_usage_1_p_0(
  MR_Word * ShouldReduce_1);

static void MR_CALL 
libs__copy_util__do_windows_copy_file_6_p_0(
  MR_String Src_1,
  MR_String Dst_2,
  MR_Word * IsOk_3,
  MR_Box * SysErr_4);

static MR_Word MR_CALL 
libs__copy_util__get_internal_copy_method_0_f_0(void);

static void MR_CALL 
libs__copy_util__copy_bytes_chunk_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8);

static void MR_CALL 
libs__copy_util__copy_bytes_inner_6_p_0(
  MR_Integer Left_7,
  MR_Word Source_8,
  MR_Word Destination_9,
  MR_Word * Res_10);

static void MR_CALL 
libs__copy_util__copy_bytes_plain_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8);

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__copy_util____Unify____file_permissions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__copy_util____Compare____file_permissions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__copy_util____Unify____internal_copy_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__copy_util____Compare____internal_copy_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.copy_util.mh"


static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0 = {
  (MR_String) "ccir0_ok",
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

static const MR_PseudoTypeInfo libs__copy_util__libs__copy_util__field_types_copy_chunk_inner_res0_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0) };

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1 = {
  (MR_String) "ccir0_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__copy_util__libs__copy_util__field_types_copy_chunk_inner_res0_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2 = {
  (MR_String) "ccir0_more",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_0[2] = {
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0,
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_1[1] = { &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1 };

static const MR_DuPtagLayout libs__copy_util__libs__copy_util__du_ptag_ordered_copy_chunk_inner_res0_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__copy_util__libs__copy_util__du_stag_ordered_copy_chunk_inner_res0_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_name_ordered_copy_chunk_inner_res0_0[3] = {
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_1,
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_2,
  &libs__copy_util__libs__copy_util__du_functor_desc_copy_chunk_inner_res0_0_0
};

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_copy_chunk_inner_res0_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__copy_util__libs__copy_util__type_ctor_info_copy_chunk_inner_res0_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__copy_util____Unify____copy_chunk_inner_res0_0_0_10001)),
  ((MR_Box) (libs__copy_util____Compare____copy_chunk_inner_res0_0_0_10001)),
  (MR_String) "libs.copy_util",
  (MR_String) "copy_chunk_inner_res0",
  { libs__copy_util__libs__copy_util__du_name_ordered_copy_chunk_inner_res0_0 },
  { libs__copy_util__libs__copy_util__du_ptag_ordered_copy_chunk_inner_res0_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__copy_util__libs__copy_util__functor_number_map_copy_chunk_inner_res0_0,

};

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_0 = {
  (MR_String) "unknown_file_permissions",
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

static const MR_PseudoTypeInfo libs__copy_util__libs__copy_util__field_types_file_permissions_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0) };

static const MR_DuFunctorDesc libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_1 = {
  (MR_String) "have_file_permissions",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__copy_util__libs__copy_util__field_types_file_permissions_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_file_permissions_0_0[1] = { &libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_0 };

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_stag_ordered_file_permissions_0_1[1] = { &libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_1 };

static const MR_DuPtagLayout libs__copy_util__libs__copy_util__du_ptag_ordered_file_permissions_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__copy_util__libs__copy_util__du_stag_ordered_file_permissions_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__copy_util__libs__copy_util__du_stag_ordered_file_permissions_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__copy_util__libs__copy_util__du_name_ordered_file_permissions_0[2] = {
  &libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_1,
  &libs__copy_util__libs__copy_util__du_functor_desc_file_permissions_0_0
};

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_file_permissions_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__copy_util__libs__copy_util__type_ctor_info_file_permissions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__copy_util____Unify____file_permissions_0_0_10001)),
  ((MR_Box) (libs__copy_util____Compare____file_permissions_0_0_10001)),
  (MR_String) "libs.copy_util",
  (MR_String) "file_permissions",
  { libs__copy_util__libs__copy_util__du_name_ordered_file_permissions_0 },
  { libs__copy_util__libs__copy_util__du_ptag_ordered_file_permissions_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__copy_util__libs__copy_util__functor_number_map_file_permissions_0,

};

static const MR_EnumFunctorDesc libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_0 = {
  (MR_String) "icm_mercury_impl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_1 = {
  (MR_String) "icm_windows_api",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_ordinal_ordered_internal_copy_method_0[2] = {
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_0,
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_1
};

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_name_ordered_internal_copy_method_0[2] = {
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_0,
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_1
};

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_internal_copy_method_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__copy_util__libs__copy_util__type_ctor_info_internal_copy_method_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__copy_util____Unify____internal_copy_method_0_0_10001)),
  ((MR_Box) (libs__copy_util____Compare____internal_copy_method_0_0_10001)),
  (MR_String) "libs.copy_util",
  (MR_String) "internal_copy_method",
  { libs__copy_util__libs__copy_util__enum_name_ordered_internal_copy_method_0 },
  { libs__copy_util__libs__copy_util__enum_ordinal_ordered_internal_copy_method_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__copy_util__libs__copy_util__functor_number_map_internal_copy_method_0,

};

static void MR_CALL 
libs__copy_util____Compare____internal_copy_method_0_0(
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

static MR_bool MR_CALL 
libs__copy_util____Unify____internal_copy_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__copy_util____Compare____file_permissions_0_0(
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
    uint64_t Var_11 = MR_unbox_uint64((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      uint64_t ArgY1_7 = MR_unbox_uint64((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

      succeeded = (Var_11 < ArgY1_7);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_11 > ArgY1_7);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
libs__copy_util____Unify____file_permissions_0_0(
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
    uint64_t ArgX1_5 = MR_unbox_uint64((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
    uint64_t ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = MR_unbox_uint64((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_13, ArgY1_7);
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
libs__copy_util__do_set_file_permissions_4_p_0(
  MR_String FileName_1,
  uint64_t RawFilePermissions_2)
{
{
#define MR_PROC_LABEL libs__copy_util__do_set_file_permissions_4_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;

	FileName = FileName_1 ;
	RawFilePermissions = RawFilePermissions_2 ;
		{

#if defined(MR_HAVE_CHMOD)
    #if defined(MR_WIN32)
        (void) _wchmod(MR_utf8_to_wide(FileName), (mode_t) RawFilePermissions);
    #else
        (void) chmod(FileName, (mode_t) RawFilePermissions);
    #endif
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__copy_util__do_get_file_permissions_5_p_0(
  MR_String FileName_1,
  uint64_t * RawFilePermissions_2,
  MR_Word * IsOk_3)
{
{
#define MR_PROC_LABEL libs__copy_util__do_get_file_permissions_5_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;
	MR_Word IsOk;

	FileName = FileName_1 ;
		{

#if defined(MR_HAVE_STAT)

    int stat_result;
    #if defined(MR_WIN32)
        struct _stat statbuf;
        stat_result = _wstat(MR_utf8_to_wide(FileName), &statbuf);
    #else
        struct stat statbuf;
        stat_result = stat(FileName, &statbuf);
    #endif

    if (stat_result == 0) {
        IsOk = MR_YES;
        RawFilePermissions = statbuf.st_mode;
    } else {
        IsOk = MR_NO;
        RawFilePermissions = 0;
    }
#else
    IsOk = MR_NO;
    RawFilePermissions = 0;
#endif


		;}
#undef MR_PROC_LABEL
	*RawFilePermissions_2  = RawFilePermissions;
	*IsOk_3  = IsOk;
}
}

static void MR_CALL 
libs__copy_util__should_reduce_stack_usage_1_p_0(
  MR_Word * ShouldReduce_1)
{
{
#define MR_PROC_LABEL libs__copy_util__should_reduce_stack_usage_1_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	*ShouldReduce_1  = ShouldReduce;
}
}

static void MR_CALL 
libs__copy_util__do_windows_copy_file_6_p_0(
  MR_String Src_1,
  MR_String Dst_2,
  MR_Word * IsOk_3,
  MR_Box * SysErr_4)
{
{
#define MR_PROC_LABEL libs__copy_util__do_windows_copy_file_6_p_0

	MR_String Src;
	MR_String Dst;
	MR_Word IsOk;
	MR_Integer SysErr;

	Src = Src_1 ;
	Dst = Dst_2 ;
		{

#if defined(MR_WIN32)
     if (CopyFileW(MR_utf8_to_wide(Src), MR_utf8_to_wide(Dst), FALSE)) {
         IsOk = MR_YES;
         SysErr = 0;
     } else {
         IsOk = MR_NO;
         SysErr = GetLastError();
     }
#else
     MR_fatal_error("do_windows_copy_file/6 not supported on this system");
#endif


		;}
#undef MR_PROC_LABEL
	*IsOk_3  = IsOk;
	*SysErr_4  = (MR_Box) SysErr;
}
}

static MR_Word MR_CALL 
libs__copy_util__get_internal_copy_method_0_f_0(void)
{
  MR_Word Method_1;

{
#define MR_PROC_LABEL libs__copy_util__get_internal_copy_method_0_f_0

	MR_Word Method;

		{

#if defined(MR_WIN32) && !defined(MR_CYGWIN)
    Method = MC_ICM_WINDOWS_API;
#else
    Method = MC_ICM_MERCURY_IMPL;
#endif



		;}
#undef MR_PROC_LABEL
	Method_1  = Method;
}
  return Method_1;
}

void MR_CALL 
libs__copy_util__copy_file_to_directory_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_String SourceFile_10,
  MR_String DestinationDir_11,
  MR_Word * Succeeded_12)
{
  MR_bool succeeded;
  MR_Word InstallMethod_14;

  libs__globals__get_install_method_2_p_0(Globals_8, &InstallMethod_14);
  switch (InstallMethod_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Command_15;

        Command_15 = libs__file_util__make_install_file_command_3_f_0(Globals_8, SourceFile_10, DestinationDir_11);
        libs__system_cmds__invoke_system_command_8_p_0(Globals_8, ProgressStream_9, ProgressStream_9, (MR_Integer) 0, Command_15, Succeeded_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String BaseSourceFile_16;

        succeeded = mercury__dir__basename_2_p_0(SourceFile_10, &BaseSourceFile_16);
        if (succeeded)
        {
          MR_String DestinationFile_17;
          MR_Word CopyMethod_31;

          DestinationFile_17 = mercury__dir__f_slash_2_f_0(DestinationDir_11, BaseSourceFile_16);
{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_directory_7_p_0

	MR_Word Method;

		{

#if defined(MR_WIN32) && !defined(MR_CYGWIN)
    Method = MC_ICM_WINDOWS_API;
#else
    Method = MC_ICM_MERCURY_IMPL;
#endif



		;}
#undef MR_PROC_LABEL
	CopyMethod_31  = Method;
}
          switch (CopyMethod_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SourceRes_32;
                MR_Word SourceFilePermissions_33;
                uint64_t RawFilePermissions_45;
                MR_Word IsOk_46;

                mercury__io__open_binary_input_4_p_0(SourceFile_10, &SourceRes_32);
{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_directory_7_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;
	MR_Word IsOk;

	FileName = SourceFile_10 ;
		{

#if defined(MR_HAVE_STAT)

    int stat_result;
    #if defined(MR_WIN32)
        struct _stat statbuf;
        stat_result = _wstat(MR_utf8_to_wide(FileName), &statbuf);
    #else
        struct stat statbuf;
        stat_result = stat(FileName, &statbuf);
    #endif

    if (stat_result == 0) {
        IsOk = MR_YES;
        RawFilePermissions = statbuf.st_mode;
    } else {
        IsOk = MR_NO;
        RawFilePermissions = 0;
    }
#else
    IsOk = MR_NO;
    RawFilePermissions = 0;
#endif


		;}
#undef MR_PROC_LABEL
	RawFilePermissions_45  = RawFilePermissions;
	IsOk_46  = IsOk;
}
                switch (IsOk_46) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    SourceFilePermissions_33 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      SourceFilePermissions_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SourceFilePermissions_33, 0) = MR_box_uint64(RawFilePermissions_45);
                    }
                    break;
                }
                if (((MR_tag((MR_Word) SourceRes_32)) == (MR_Integer) 1))
                {
                  MR_Word Error_19 = ((MR_Word) ((MR_hl_field(1, SourceRes_32, (MR_Integer) 0))));
                  MR_String Var_26;
                  MR_String Var_29;

                  Var_29 = mercury__io__error_message_1_f_0(Error_19);
                  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "Could not copy file:  ", Var_29);
                  libs__file_util__report_error_4_p_0(ProgressStream_9, Var_26);
                  *Succeeded_12 = (MR_Integer) 0;
                }
                else
                {
                  MR_Word SourceStream_34 = ((MR_Word) ((MR_hl_field(0, SourceRes_32, (MR_Integer) 0))));
                  MR_Word DestRes_35;
                  MR_Word Res_76;

                  mercury__io__open_binary_output_4_p_0(DestinationFile_17, &DestRes_35);
                  if (((MR_tag((MR_Word) DestRes_35)) == (MR_Integer) 1))
                  {
                    MR_Word Error_37 = ((MR_Word) ((MR_hl_field(1, DestRes_35, (MR_Integer) 0))));

                    {
                      Res_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Res_76, 0) = ((MR_Box) (Error_37));
                    }
                  }
                  else
                  {
                    MR_Word DestStream_36 = ((MR_Word) ((MR_hl_field(0, DestRes_35, (MR_Integer) 0))));
                    MR_Word ShouldReduce_47;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_directory_7_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_47  = ShouldReduce;
}
                    switch (ShouldReduce_47) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        libs__copy_util__copy_bytes_plain_5_p_0(SourceStream_34, DestStream_36, &Res_76);
                        break;
                      case (MR_Integer) 1:
                        libs__copy_util__copy_bytes_chunk_5_p_0(SourceStream_34, DestStream_36, &Res_76);
                        break;
                    }
                    mercury__io__close_binary_input_3_p_0(SourceStream_34);
                    mercury__io__close_binary_output_3_p_0(DestStream_36);
                    if (!((SourceFilePermissions_33 == (MR_Word) ((MR_Unsigned) 0U))))
                    {
                      uint64_t RawFilePermissions_48 = MR_unbox_uint64((MR_hl_field(1, SourceFilePermissions_33, (MR_Integer) 0)));

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_directory_7_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;

	FileName = DestinationFile_17 ;
	RawFilePermissions = RawFilePermissions_48 ;
		{

#if defined(MR_HAVE_CHMOD)
    #if defined(MR_WIN32)
        (void) _wchmod(MR_utf8_to_wide(FileName), (mode_t) RawFilePermissions);
    #else
        (void) chmod(FileName, (mode_t) RawFilePermissions);
    #endif
#endif


		;}
#undef MR_PROC_LABEL
}
                    }
                  }
                  if ((Res_76 == (MR_Word) ((MR_Unsigned) 0U)))
                    *Succeeded_12 = (MR_Integer) 1;
                  else
                  {
                    MR_Word Error_68 = ((MR_Word) ((MR_hl_field(1, Res_76, (MR_Integer) 0))));
                    MR_String Var_69;
                    MR_String Var_71;

                    Var_71 = mercury__io__error_message_1_f_0(Error_68);
                    Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "Could not copy file:  ", Var_71);
                    libs__file_util__report_error_4_p_0(ProgressStream_9, Var_69);
                    *Succeeded_12 = (MR_Integer) 0;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IsOk_49;
                MR_Box SysErr_50;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_directory_7_p_0

	MR_String Src;
	MR_String Dst;
	MR_Word IsOk;
	MR_Integer SysErr;

	Src = SourceFile_10 ;
	Dst = DestinationFile_17 ;
		{

#if defined(MR_WIN32)
     if (CopyFileW(MR_utf8_to_wide(Src), MR_utf8_to_wide(Dst), FALSE)) {
         IsOk = MR_YES;
         SysErr = 0;
     } else {
         IsOk = MR_NO;
         SysErr = GetLastError();
     }
#else
     MR_fatal_error("do_windows_copy_file/6 not supported on this system");
#endif


		;}
#undef MR_PROC_LABEL
	IsOk_49  = IsOk;
	SysErr_50  = (MR_Box) SysErr;
}
                switch (IsOk_49) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Error_54;
                      MR_String Var_55;
                      MR_String Var_57;

                      mercury__io__make_io_error_from_windows_error_5_p_0(SysErr_50, (MR_String) "file copy failed: ", &Error_54);
                      Var_57 = mercury__io__error_message_1_f_0(Error_54);
                      Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "Could not copy file:  ", Var_57);
                      libs__file_util__report_error_4_p_0(ProgressStream_9, Var_55);
                      *Succeeded_12 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    *Succeeded_12 = (MR_Integer) 1;
                    break;
                }
              }
              break;
          }
        }
        else
        {
          libs__file_util__report_error_4_p_0(ProgressStream_9, (MR_String) "Could not copy file: source is a root directory.");
          *Succeeded_12 = (MR_Integer) 0;
        }
      }
      break;
  }
}

void MR_CALL 
libs__copy_util__copy_file_to_file_name_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_String SourceFile_10,
  MR_String DestinationFile_11,
  MR_Word * Succeeded_12)
{
  MR_Word InstallMethod_14;

  libs__globals__get_install_method_2_p_0(Globals_8, &InstallMethod_14);
  switch (InstallMethod_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Command_15;

        Command_15 = libs__file_util__make_install_file_command_3_f_0(Globals_8, SourceFile_10, DestinationFile_11);
        libs__system_cmds__invoke_system_command_8_p_0(Globals_8, ProgressStream_9, ProgressStream_9, (MR_Integer) 0, Command_15, Succeeded_12);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CopyMethod_28;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_file_name_7_p_0

	MR_Word Method;

		{

#if defined(MR_WIN32) && !defined(MR_CYGWIN)
    Method = MC_ICM_WINDOWS_API;
#else
    Method = MC_ICM_MERCURY_IMPL;
#endif



		;}
#undef MR_PROC_LABEL
	CopyMethod_28  = Method;
}
        switch (CopyMethod_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SourceRes_29;
              MR_Word SourceFilePermissions_30;
              uint64_t RawFilePermissions_42;
              MR_Word IsOk_43;

              mercury__io__open_binary_input_4_p_0(SourceFile_10, &SourceRes_29);
{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_file_name_7_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;
	MR_Word IsOk;

	FileName = SourceFile_10 ;
		{

#if defined(MR_HAVE_STAT)

    int stat_result;
    #if defined(MR_WIN32)
        struct _stat statbuf;
        stat_result = _wstat(MR_utf8_to_wide(FileName), &statbuf);
    #else
        struct stat statbuf;
        stat_result = stat(FileName, &statbuf);
    #endif

    if (stat_result == 0) {
        IsOk = MR_YES;
        RawFilePermissions = statbuf.st_mode;
    } else {
        IsOk = MR_NO;
        RawFilePermissions = 0;
    }
#else
    IsOk = MR_NO;
    RawFilePermissions = 0;
#endif


		;}
#undef MR_PROC_LABEL
	RawFilePermissions_42  = RawFilePermissions;
	IsOk_43  = IsOk;
}
              switch (IsOk_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SourceFilePermissions_30 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    SourceFilePermissions_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SourceFilePermissions_30, 0) = MR_box_uint64(RawFilePermissions_42);
                  }
                  break;
              }
              if (((MR_tag((MR_Word) SourceRes_29)) == (MR_Integer) 1))
              {
                MR_Word Error_17 = ((MR_Word) ((MR_hl_field(1, SourceRes_29, (MR_Integer) 0))));
                MR_String Var_24;
                MR_String Var_27;

                Var_27 = mercury__io__error_message_1_f_0(Error_17);
                Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "Could not copy file:  ", Var_27);
                libs__file_util__report_error_4_p_0(ProgressStream_9, Var_24);
                *Succeeded_12 = (MR_Integer) 0;
              }
              else
              {
                MR_Word SourceStream_31 = ((MR_Word) ((MR_hl_field(0, SourceRes_29, (MR_Integer) 0))));
                MR_Word DestRes_32;
                MR_Word Res_73;

                mercury__io__open_binary_output_4_p_0(DestinationFile_11, &DestRes_32);
                if (((MR_tag((MR_Word) DestRes_32)) == (MR_Integer) 1))
                {
                  MR_Word Error_34 = ((MR_Word) ((MR_hl_field(1, DestRes_32, (MR_Integer) 0))));

                  {
                    Res_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Res_73, 0) = ((MR_Box) (Error_34));
                  }
                }
                else
                {
                  MR_Word DestStream_33 = ((MR_Word) ((MR_hl_field(0, DestRes_32, (MR_Integer) 0))));
                  MR_Word ShouldReduce_44;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_file_name_7_p_0

	MR_Word ShouldReduce;

		{

#ifdef  MR_EXEC_TRACE
    ShouldReduce = MR_YES;
#else
    ShouldReduce = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	ShouldReduce_44  = ShouldReduce;
}
                  switch (ShouldReduce_44) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      libs__copy_util__copy_bytes_plain_5_p_0(SourceStream_31, DestStream_33, &Res_73);
                      break;
                    case (MR_Integer) 1:
                      libs__copy_util__copy_bytes_chunk_5_p_0(SourceStream_31, DestStream_33, &Res_73);
                      break;
                  }
                  mercury__io__close_binary_input_3_p_0(SourceStream_31);
                  mercury__io__close_binary_output_3_p_0(DestStream_33);
                  if (!((SourceFilePermissions_30 == (MR_Word) ((MR_Unsigned) 0U))))
                  {
                    uint64_t RawFilePermissions_45 = MR_unbox_uint64((MR_hl_field(1, SourceFilePermissions_30, (MR_Integer) 0)));

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_file_name_7_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;

	FileName = DestinationFile_11 ;
	RawFilePermissions = RawFilePermissions_45 ;
		{

#if defined(MR_HAVE_CHMOD)
    #if defined(MR_WIN32)
        (void) _wchmod(MR_utf8_to_wide(FileName), (mode_t) RawFilePermissions);
    #else
        (void) chmod(FileName, (mode_t) RawFilePermissions);
    #endif
#endif


		;}
#undef MR_PROC_LABEL
}
                  }
                }
                if ((Res_73 == (MR_Word) ((MR_Unsigned) 0U)))
                  *Succeeded_12 = (MR_Integer) 1;
                else
                {
                  MR_Word Error_65 = ((MR_Word) ((MR_hl_field(1, Res_73, (MR_Integer) 0))));
                  MR_String Var_66;
                  MR_String Var_68;

                  Var_68 = mercury__io__error_message_1_f_0(Error_65);
                  Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "Could not copy file:  ", Var_68);
                  libs__file_util__report_error_4_p_0(ProgressStream_9, Var_66);
                  *Succeeded_12 = (MR_Integer) 0;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsOk_46;
              MR_Box SysErr_47;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_file_name_7_p_0

	MR_String Src;
	MR_String Dst;
	MR_Word IsOk;
	MR_Integer SysErr;

	Src = SourceFile_10 ;
	Dst = DestinationFile_11 ;
		{

#if defined(MR_WIN32)
     if (CopyFileW(MR_utf8_to_wide(Src), MR_utf8_to_wide(Dst), FALSE)) {
         IsOk = MR_YES;
         SysErr = 0;
     } else {
         IsOk = MR_NO;
         SysErr = GetLastError();
     }
#else
     MR_fatal_error("do_windows_copy_file/6 not supported on this system");
#endif


		;}
#undef MR_PROC_LABEL
	IsOk_46  = IsOk;
	SysErr_47  = (MR_Box) SysErr;
}
              switch (IsOk_46) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Error_51;
                    MR_String Var_52;
                    MR_String Var_54;

                    mercury__io__make_io_error_from_windows_error_5_p_0(SysErr_47, (MR_String) "file copy failed: ", &Error_51);
                    Var_54 = mercury__io__error_message_1_f_0(Error_51);
                    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "Could not copy file:  ", Var_54);
                    libs__file_util__report_error_4_p_0(ProgressStream_9, Var_52);
                    *Succeeded_12 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  *Succeeded_12 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
libs__copy_util__copy_bytes_chunk_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word InnerRes_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    libs__copy_util__copy_bytes_inner_6_p_0((MR_Integer) 1000, Source_6, Destination_7, &InnerRes_11);
    switch (MR_tag((MR_Word) InnerRes_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InnerRes_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              // direct tailcall eliminated
              ;
              continue;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, InnerRes_11, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
libs__copy_util__copy_bytes_inner_6_p_0(
  MR_Integer Left_7,
  MR_Word Source_8,
  MR_Word Destination_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Left_7 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word ByteResult_12;
      uint8_t Byte_13;

      mercury__io__read_binary_uint8_unboxed_5_p_0(Source_8, &ByteResult_12, &Byte_13);
      switch (MR_tag((MR_Word) ByteResult_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ByteResult_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_20;
                MR_Integer next_value_of_Left_7;

                mercury__io__write_binary_uint8_4_p_0(Destination_9, Byte_13);
                Var_20 = (MR_Integer) ((MR_Unsigned) Left_7 - (MR_Unsigned) 1);
                // direct tailcall eliminated
                ;
                next_value_of_Left_7 = Var_20;
                Left_7 = next_value_of_Left_7;
                continue;
              }
              break;
            case (MR_Integer) 1:
              *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, ByteResult_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
            }
          }
          break;
      }
    }
    else
      *Res_10 = (MR_Word) ((MR_Unsigned) 4U);
    break;
  }
}

static void MR_CALL 
libs__copy_util__copy_bytes_plain_5_p_0(
  MR_Word Source_6,
  MR_Word Destination_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_Word ByteResult_10;
    uint8_t Byte_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_binary_uint8_unboxed_5_p_0(Source_6, &ByteResult_10, &Byte_11);
    switch (MR_tag((MR_Word) ByteResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ByteResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_binary_uint8_4_p_0(Destination_7, Byte_11);
              // direct tailcall eliminated
              ;
              continue;
            }
            break;
          case (MR_Integer) 1:
            *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, ByteResult_10, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_12));
          }
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
libs__copy_util____Unify____copy_chunk_inner_res0_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__copy_util____Unify____copy_chunk_inner_res0_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__copy_util____Compare____copy_chunk_inner_res0_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__copy_util____Compare____copy_chunk_inner_res0_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__copy_util____Unify____file_permissions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__copy_util____Unify____file_permissions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__copy_util____Compare____file_permissions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__copy_util____Compare____file_permissions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__copy_util____Unify____internal_copy_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__copy_util____Unify____internal_copy_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__copy_util____Compare____internal_copy_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__copy_util____Compare____internal_copy_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__copy_util__init(void)
{
}

void mercury__libs__copy_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__copy_util__libs__copy_util__type_ctor_info_copy_chunk_inner_res0_0);
	MR_register_type_ctor_info(&libs__copy_util__libs__copy_util__type_ctor_info_file_permissions_0);
	MR_register_type_ctor_info(&libs__copy_util__libs__copy_util__type_ctor_info_internal_copy_method_0);
}

void mercury__libs__copy_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__copy_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.copy_util.
