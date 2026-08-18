/*
** Automatically generated from `copy_util.m'
** by the Mercury compiler,
** version rotd-2026-08-18
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
#include "io.error_util.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




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

static const MR_EnumFunctorDesc libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_2;

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_ordinal_ordered_internal_copy_method_0[3];

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_name_ordered_internal_copy_method_0[3];

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_internal_copy_method_0[3];

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
libs__copy_util__do_windows_copy_file_5_p_0(
  MR_String Src_1,
  MR_String Dst_2,
  MR_Box * SysErr_3);

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


static /* final */ const MR_Box libs__copy_util_scalar_common_1[1][1];




static /* final */ const MR_Box libs__copy_util_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



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

static const MR_EnumFunctorDesc libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_2 = {
  (MR_String) "icm_java_library",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_ordinal_ordered_internal_copy_method_0[3] = {
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_0,
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_1,
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_2
};

static const MR_EnumFunctorDescPtr libs__copy_util__libs__copy_util__enum_name_ordered_internal_copy_method_0[3] = {
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_2,
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_0,
  &libs__copy_util__libs__copy_util__enum_functor_desc_internal_copy_method_0_1
};

static const MR_Integer libs__copy_util__libs__copy_util__functor_number_map_internal_copy_method_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
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
  (MR_Integer) 3,
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
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    uint64_t ArgX1_4 = MR_unbox_uint64((MR_hl_field(1, HeadVar__2_2, 0)));
    uint64_t ArgY1_5 = MR_unbox_uint64((MR_hl_field(1, HeadVar__3_3, 0)));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    uint64_t ArgX1_3 = MR_unbox_uint64((MR_hl_field(1, HeadVar__1_1, 0)));
    uint64_t ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = MR_unbox_uint64((MR_hl_field(1, HeadVar__2_2, 0)));
      succeeded = (ArgX1_3 == ArgY1_4);
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
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
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
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_3, ArgY1_4);
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
    #if defined(MR_MSVC)
        // MSVC does not define mode_t.
        (void) _wchmod(MR_utf8_to_wide(FileName), (int) RawFilePermissions);
    #elif defined(MR_WIN32)
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
libs__copy_util__do_windows_copy_file_5_p_0(
  MR_String Src_1,
  MR_String Dst_2,
  MR_Box * SysErr_3)
{
{
#define MR_PROC_LABEL libs__copy_util__do_windows_copy_file_5_p_0

	MR_String Src;
	MR_String Dst;
	MR_Integer SysErr;

	Src = Src_1 ;
	Dst = Dst_2 ;
		{

#if defined(MR_WIN32)
     if (CopyFileW(MR_utf8_to_wide(Src), MR_utf8_to_wide(Dst), FALSE)) {
         SysErr = 0;
     } else {
         SysErr = GetLastError();
     }
#else
     MR_fatal_error("do_windows_copy_file/6 not supported on this system");
#endif


		;}
#undef MR_PROC_LABEL
	*SysErr_3  = (MR_Box) SysErr;
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
          MR_Word CopyMethod_61;

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
	CopyMethod_61  = Method;
}
          switch (CopyMethod_61) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.copy_util.do_java_copy_file\'/5", (MR_String) "do_java_copy_file/5 not supported on non-Java backends");
                return;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Res_18;
                MR_Word SourceRes_69;
                MR_Word SourceFilePermissions_70;
                uint64_t RawFilePermissions_82;
                MR_Word IsOk_83;

                mercury__io__open_binary_input_4_p_0(SourceFile_10, &SourceRes_69);
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
	RawFilePermissions_82  = RawFilePermissions;
	IsOk_83  = IsOk;
}
                switch (IsOk_83) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    SourceFilePermissions_70 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      SourceFilePermissions_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SourceFilePermissions_70, 0) = MR_box_uint64(RawFilePermissions_82);
                    }
                    break;
                }
                if (((MR_tag((MR_Word) SourceRes_69)) == (MR_Integer) 1))
                {
                  MR_Word Error_81 = ((MR_Word) ((MR_hl_field(1, SourceRes_69, 0))));

                  {
                    Res_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Res_18, 0) = ((MR_Box) (Error_81));
                  }
                }
                else
                {
                  MR_Word SourceStream_71 = ((MR_Word) ((MR_hl_field(0, SourceRes_69, 0))));
                  MR_Word DestRes_72;

                  mercury__io__open_binary_output_4_p_0(DestinationFile_17, &DestRes_72);
                  if (((MR_tag((MR_Word) DestRes_72)) == (MR_Integer) 1))
                  {
                    MR_Word Error_74 = ((MR_Word) ((MR_hl_field(1, DestRes_72, 0))));

                    {
                      Res_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Res_18, 0) = ((MR_Box) (Error_74));
                    }
                  }
                  else
                  {
                    MR_Word DestStream_73 = ((MR_Word) ((MR_hl_field(0, DestRes_72, 0))));
                    MR_Word ShouldReduce_84;

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
	ShouldReduce_84  = ShouldReduce;
}
                    switch (ShouldReduce_84) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        libs__copy_util__copy_bytes_plain_5_p_0(SourceStream_71, DestStream_73, &Res_18);
                        break;
                      case (MR_Integer) 1:
                        libs__copy_util__copy_bytes_chunk_5_p_0(SourceStream_71, DestStream_73, &Res_18);
                        break;
                    }
                    mercury__io__close_binary_input_3_p_0(SourceStream_71);
                    mercury__io__close_binary_output_3_p_0(DestStream_73);
                    if (!((SourceFilePermissions_70 == (MR_Word) ((MR_Unsigned) 0U))))
                    {
                      uint64_t RawFilePermissions_85 = MR_unbox_uint64((MR_hl_field(1, SourceFilePermissions_70, 0)));

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_directory_7_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;

	FileName = DestinationFile_17 ;
	RawFilePermissions = RawFilePermissions_85 ;
		{

#if defined(MR_HAVE_CHMOD)
    #if defined(MR_MSVC)
        // MSVC does not define mode_t.
        (void) _wchmod(MR_utf8_to_wide(FileName), (int) RawFilePermissions);
    #elif defined(MR_WIN32)
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
                }
                if ((Res_18 == (MR_Word) ((MR_Unsigned) 0U)))
                  *Succeeded_12 = (MR_Integer) 1;
                else
                {
                  MR_Word Error_19 = ((MR_Word) ((MR_hl_field(1, Res_18, 0))));
                  MR_String Msg_20;
                  MR_String Var_34;
                  MR_String Var_43;
                  MR_String Var_52;
                  MR_String Var_53;
                  MR_String Var_55;
                  MR_String Var_56;

                  Var_34 = mercury__io__error_message_1_f_0(Error_19);
                  mercury__string__format__format_string_component_nowidth_prec_4_p_0((MR_Word) (&libs__copy_util_scalar_common_1[0]), (MR_Integer) 0, Var_34, &Var_43);
                  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_43);
                  Var_53 = mercury__string__f_43_43_2_f_0(DestinationFile_17, Var_52);
                  Var_55 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_53);
                  Var_56 = mercury__string__f_43_43_2_f_0(SourceFile_10, Var_55);
                  Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "could not copy ", Var_56);
                  libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_9, Msg_20);
                  *Succeeded_12 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box SysErr_86;
                MR_Word MaybeIOError_87;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_directory_7_p_0

	MR_String Src;
	MR_String Dst;
	MR_Integer SysErr;

	Src = SourceFile_10 ;
	Dst = DestinationFile_17 ;
		{

#if defined(MR_WIN32)
     if (CopyFileW(MR_utf8_to_wide(Src), MR_utf8_to_wide(Dst), FALSE)) {
         SysErr = 0;
     } else {
         SysErr = GetLastError();
     }
#else
     MR_fatal_error("do_windows_copy_file/6 not supported on this system");
#endif


		;}
#undef MR_PROC_LABEL
	SysErr_86  = (MR_Box) SysErr;
}
                mercury__io__error_util__is_error_maybe_win32_6_p_0(SysErr_86, (MR_Integer) 1, (MR_String) "file copy failed: ", &MaybeIOError_87);
                if ((MaybeIOError_87 == (MR_Word) ((MR_Unsigned) 0U)))
                  *Succeeded_12 = (MR_Integer) 1;
                else
                {
                  MR_Word Error_92 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_87, 0))));
                  MR_String Msg_93;
                  MR_String Var_94;
                  MR_String Var_95;
                  MR_String Var_99;
                  MR_String Var_100;
                  MR_String Var_102;
                  MR_String Var_103;

                  Var_94 = mercury__io__error_message_1_f_0(Error_92);
                  mercury__string__format__format_string_component_nowidth_prec_4_p_0((MR_Word) (&libs__copy_util_scalar_common_1[0]), (MR_Integer) 0, Var_94, &Var_95);
                  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_95);
                  Var_100 = mercury__string__f_43_43_2_f_0(DestinationFile_17, Var_99);
                  Var_102 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_100);
                  Var_103 = mercury__string__f_43_43_2_f_0(SourceFile_10, Var_102);
                  Msg_93 = mercury__string__f_43_43_2_f_0((MR_String) "could not copy ", Var_103);
                  libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_9, Msg_93);
                  *Succeeded_12 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        else
        {
          MR_String Msg_42;
          MR_String Var_59;

          Var_59 = mercury__string__f_43_43_2_f_0(SourceFile_10, (MR_String) ": it is a root directory.");
          Msg_42 = mercury__string__f_43_43_2_f_0((MR_String) "could not copy ", Var_59);
          libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_9, Msg_42);
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
        MR_Word CopyMethod_43;

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
	CopyMethod_43  = Method;
}
        switch (CopyMethod_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.copy_util.do_java_copy_file\'/5", (MR_String) "do_java_copy_file/5 not supported on non-Java backends");
              return;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Res_16;
              MR_Word SourceRes_51;
              MR_Word SourceFilePermissions_52;
              uint64_t RawFilePermissions_64;
              MR_Word IsOk_65;

              mercury__io__open_binary_input_4_p_0(SourceFile_10, &SourceRes_51);
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
	RawFilePermissions_64  = RawFilePermissions;
	IsOk_65  = IsOk;
}
              switch (IsOk_65) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SourceFilePermissions_52 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  {
                    SourceFilePermissions_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SourceFilePermissions_52, 0) = MR_box_uint64(RawFilePermissions_64);
                  }
                  break;
              }
              if (((MR_tag((MR_Word) SourceRes_51)) == (MR_Integer) 1))
              {
                MR_Word Error_63 = ((MR_Word) ((MR_hl_field(1, SourceRes_51, 0))));

                {
                  Res_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Res_16, 0) = ((MR_Box) (Error_63));
                }
              }
              else
              {
                MR_Word SourceStream_53 = ((MR_Word) ((MR_hl_field(0, SourceRes_51, 0))));
                MR_Word DestRes_54;

                mercury__io__open_binary_output_4_p_0(DestinationFile_11, &DestRes_54);
                if (((MR_tag((MR_Word) DestRes_54)) == (MR_Integer) 1))
                {
                  MR_Word Error_56 = ((MR_Word) ((MR_hl_field(1, DestRes_54, 0))));

                  {
                    Res_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Res_16, 0) = ((MR_Box) (Error_56));
                  }
                }
                else
                {
                  MR_Word DestStream_55 = ((MR_Word) ((MR_hl_field(0, DestRes_54, 0))));
                  MR_Word ShouldReduce_66;

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
	ShouldReduce_66  = ShouldReduce;
}
                  switch (ShouldReduce_66) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      libs__copy_util__copy_bytes_plain_5_p_0(SourceStream_53, DestStream_55, &Res_16);
                      break;
                    case (MR_Integer) 1:
                      libs__copy_util__copy_bytes_chunk_5_p_0(SourceStream_53, DestStream_55, &Res_16);
                      break;
                  }
                  mercury__io__close_binary_input_3_p_0(SourceStream_53);
                  mercury__io__close_binary_output_3_p_0(DestStream_55);
                  if (!((SourceFilePermissions_52 == (MR_Word) ((MR_Unsigned) 0U))))
                  {
                    uint64_t RawFilePermissions_67 = MR_unbox_uint64((MR_hl_field(1, SourceFilePermissions_52, 0)));

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_file_name_7_p_0

	MR_String FileName;
	uint64_t RawFilePermissions;

	FileName = DestinationFile_11 ;
	RawFilePermissions = RawFilePermissions_67 ;
		{

#if defined(MR_HAVE_CHMOD)
    #if defined(MR_MSVC)
        // MSVC does not define mode_t.
        (void) _wchmod(MR_utf8_to_wide(FileName), (int) RawFilePermissions);
    #elif defined(MR_WIN32)
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
              }
              if ((Res_16 == (MR_Word) ((MR_Unsigned) 0U)))
                *Succeeded_12 = (MR_Integer) 1;
              else
              {
                MR_Word Error_17 = ((MR_Word) ((MR_hl_field(1, Res_16, 0))));
                MR_String Msg_18;
                MR_String Var_32;
                MR_String Var_35;
                MR_String Var_37;
                MR_String Var_38;
                MR_String Var_40;
                MR_String Var_41;

                Var_32 = mercury__io__error_message_1_f_0(Error_17);
                Var_35 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) ".");
                Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_35);
                Var_38 = mercury__string__f_43_43_2_f_0(DestinationFile_11, Var_37);
                Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_38);
                Var_41 = mercury__string__f_43_43_2_f_0(SourceFile_10, Var_40);
                Msg_18 = mercury__string__f_43_43_2_f_0((MR_String) "could not copy ", Var_41);
                libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_9, Msg_18);
                *Succeeded_12 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box SysErr_68;
              MR_Word MaybeIOError_69;

{
#define MR_PROC_LABEL libs__copy_util__copy_file_to_file_name_7_p_0

	MR_String Src;
	MR_String Dst;
	MR_Integer SysErr;

	Src = SourceFile_10 ;
	Dst = DestinationFile_11 ;
		{

#if defined(MR_WIN32)
     if (CopyFileW(MR_utf8_to_wide(Src), MR_utf8_to_wide(Dst), FALSE)) {
         SysErr = 0;
     } else {
         SysErr = GetLastError();
     }
#else
     MR_fatal_error("do_windows_copy_file/6 not supported on this system");
#endif


		;}
#undef MR_PROC_LABEL
	SysErr_68  = (MR_Box) SysErr;
}
              mercury__io__error_util__is_error_maybe_win32_6_p_0(SysErr_68, (MR_Integer) 1, (MR_String) "file copy failed: ", &MaybeIOError_69);
              if ((MaybeIOError_69 == (MR_Word) ((MR_Unsigned) 0U)))
                *Succeeded_12 = (MR_Integer) 1;
              else
              {
                MR_Word Error_74 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_69, 0))));
                MR_String Msg_75;
                MR_String Var_76;
                MR_String Var_78;
                MR_String Var_80;
                MR_String Var_81;
                MR_String Var_83;
                MR_String Var_84;

                Var_76 = mercury__io__error_message_1_f_0(Error_74);
                Var_78 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) ".");
                Var_80 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_78);
                Var_81 = mercury__string__f_43_43_2_f_0(DestinationFile_11, Var_80);
                Var_83 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_81);
                Var_84 = mercury__string__f_43_43_2_f_0(SourceFile_10, Var_83);
                Msg_75 = mercury__string__f_43_43_2_f_0((MR_String) "could not copy ", Var_84);
                libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_9, Msg_75);
                *Succeeded_12 = (MR_Integer) 0;
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
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, InnerRes_11, 0))));

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
            MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, ByteResult_12, 0))));

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
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(1, ByteResult_10, 0))));

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
