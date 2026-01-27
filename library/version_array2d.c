/*
** Automatically generated from `version_array2d.m'
** by the Mercury compiler,
** version rotd-2026-01-27
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


// :- module version_array2d.
// :- implementation.

/*
INIT mercury__version_array2d__init
ENDINIT
*/

#include "version_array2d.mih"


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
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
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
#include "tree_bitset.mih"
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



struct mercury__version_array2d__version_array2d_2_f_0_env_0_s {
  MR_Word mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18;
  MR_Word mercury__version_array2d__version_array2d_2_f_0_env_0__Rows_3;
  MR_bool mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded;
  MR_Word mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_20_20;
  MR_Integer mercury__version_array2d__version_array2d_2_f_0_env_0__FirstRowNumColumns_8;
  jmp_buf mercury__version_array2d__version_array2d_2_f_0_env_0__commit_0;
  MR_Word mercury__version_array2d__version_array2d_2_f_0_env_0__Row_9;
  MR_Box mercury__version_array2d__version_array2d_2_f_0_env_0__conv0_Row_9;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array2d__version_array__pti_version_array_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__version_array2d__version_array2d__field_types_version_array2d_1_0[3];

static const MR_DuFunctorDesc mercury__version_array2d__version_array2d__du_functor_desc_version_array2d_1_0;

static const MR_DuFunctorDescPtr mercury__version_array2d__version_array2d__du_stag_ordered_version_array2d_1_0[1];

static const MR_DuPtagLayout mercury__version_array2d__version_array2d__du_ptag_ordered_version_array2d_1[1];

static const MR_DuFunctorDescPtr mercury__version_array2d__version_array2d__du_name_ordered_version_array2d_1[1];

static const MR_Integer mercury__version_array2d__version_array2d__functor_number_map_version_array2d_1[1];

static void MR_CALL 
mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_114_111_119_115_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Box VersionArray_7,
  MR_Integer NumColumns_9,
  MR_Integer RowNum_10,
  MR_Word STATE_VARIABLE_Rows_0_14,
  MR_Word * STATE_VARIABLE_Rows_15);

static void MR_CALL 
mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_99_111_108_117_109_110_115_95_95_91_49_44_32_52_93_95_48_6_p_0(
  MR_Box VersionArray_7,
  MR_Integer RowBase_8,
  MR_Integer ColumnNum_10,
  MR_Word STATE_VARIABLE_ItemsInRow_0_13,
  MR_Word * STATE_VARIABLE_ItemsInRow_14);

static MR_Word MR_CALL 
mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_115_95_50_95_95_91_49_93_95_48_6_f_0(
  MR_Integer IJ_8,
  MR_Integer J_9,
  MR_Integer N_10,
  MR_Box VA_11,
  MR_Word Xs_12,
  MR_Word Xss_13);

static void MR_CALL 
mercury__version_array2d__out_of_bounds_error_4_p_0(
  MR_String PredName_5,
  MR_String RowOrColumn_6,
  MR_Integer Index_7,
  MR_Integer Max_8);

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__version_array2d____Unify____version_array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__version_array2d____Compare____version_array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__version_array2d_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__version_array2d_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__version_array2d_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__version_array2d_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__version_array2d_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__version_array2d_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__version_array2d_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array2d_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array2d_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array2d_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_array2d_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_array2d_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
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


static const MR_FA_PseudoTypeInfo_Struct1 mercury__version_array2d__version_array__pti_version_array_1__pseudo_1 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__version_array2d__version_array2d__field_types_version_array2d_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__version_array2d__version_array__pti_version_array_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__version_array2d__version_array2d__du_functor_desc_version_array2d_1_0 = {
  (MR_String) "version_array2d",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__version_array2d__version_array2d__field_types_version_array2d_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__version_array2d__version_array2d__du_stag_ordered_version_array2d_1_0[1] = { &mercury__version_array2d__version_array2d__du_functor_desc_version_array2d_1_0 };

static const MR_DuPtagLayout mercury__version_array2d__version_array2d__du_ptag_ordered_version_array2d_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__version_array2d__version_array2d__du_stag_ordered_version_array2d_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__version_array2d__version_array2d__du_name_ordered_version_array2d_1[1] = { &mercury__version_array2d__version_array2d__du_functor_desc_version_array2d_1_0 };

static const MR_Integer mercury__version_array2d__version_array2d__functor_number_map_version_array2d_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__version_array2d__version_array2d__type_ctor_info_version_array2d_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__version_array2d____Unify____version_array2d_1_0_10001)),
  ((MR_Box) (mercury__version_array2d____Compare____version_array2d_1_0_10001)),
  (MR_String) "version_array2d",
  (MR_String) "version_array2d",
  { mercury__version_array2d__version_array2d__du_name_ordered_version_array2d_1 },
  { mercury__version_array2d__version_array2d__du_ptag_ordered_version_array2d_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__version_array2d__version_array2d__functor_number_map_version_array2d_1,

};

void MR_CALL 
mercury__version_array2d____Compare____version_array2d_1_0(
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
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Box ArgX3_10 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Box ArgY3_11 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__version_array____Compare____version_array_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
mercury__version_array2d____Unify____version_array2d_1_0(
  MR_Word TypeInfo_for_T_11,
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
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box ArgX3_7 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Box ArgY3_8 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = mercury__version_array____Unify____version_array_1_0(TypeInfo_for_T_11, ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__version_array2d__unsafe_rewind_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer NumRows_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer NumColumns_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Box VersionArray_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, 2))));
  MR_Box Var_6;

{
#define MR_PROC_LABEL mercury__version_array2d__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	VA0 = (struct ML_va *) VersionArray_5 ;
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	Var_6  = (MR_Box) VA;
}
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (NumRows_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (NumColumns_4));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_6));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__version_array2d__uresize_4_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word OldVersionArray2d_6,
  MR_Unsigned NewNumRows_7,
  MR_Unsigned NewNumColumns_8,
  MR_Box DefaultValue_9)
{
  MR_Word VersionArray2d_10;
  MR_Integer Var_11;
  MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__version_array2d__uresize_4_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = NewNumRows_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_11  = I;
}
{
#define MR_PROC_LABEL mercury__version_array2d__uresize_4_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = NewNumColumns_8 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
  VersionArray2d_10 = mercury__version_array2d__resize_4_f_0(TypeInfo_for_T_13, OldVersionArray2d_6, Var_11, Var_12, DefaultValue_9);
  return VersionArray2d_10;
}

MR_Word MR_CALL 
mercury__version_array2d__resize_4_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word OldVersionArray2d_6,
  MR_Integer NewNumRows_7,
  MR_Integer NewNumColumns_8,
  MR_Box DefaultValue_9)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_VersionArray2d_15;
  MR_Integer OldNumRows_11;
  MR_Integer OldNumColumns_12;
  MR_Integer CopyNumRows_13;
  MR_Integer CopyNumColumns_14;
  MR_Word STATE_VARIABLE_VersionArray2d_1_16;

  STATE_VARIABLE_VersionArray2d_1_16 = mercury__version_array2d__init_3_f_0(TypeInfo_for_T_19, NewNumRows_7, NewNumColumns_8, DefaultValue_9);
  OldNumRows_11 = ((MR_Integer) ((MR_hl_field(0, OldVersionArray2d_6, 0))));
  OldNumColumns_12 = ((MR_Integer) ((MR_hl_field(0, OldVersionArray2d_6, 1))));
  succeeded = (OldNumRows_11 < NewNumRows_7);
  if (succeeded)
    CopyNumRows_13 = OldNumRows_11;
  else
    CopyNumRows_13 = NewNumRows_7;
  succeeded = (OldNumColumns_12 < NewNumColumns_8);
  if (succeeded)
    CopyNumColumns_14 = OldNumColumns_12;
  else
    CopyNumColumns_14 = NewNumColumns_8;
  mercury__version_array2d__resize_copy_loop_7_p_0(TypeInfo_for_T_19, (MR_Integer) 0, (MR_Integer) 0, CopyNumRows_13, CopyNumColumns_14, OldVersionArray2d_6, STATE_VARIABLE_VersionArray2d_1_16, &STATE_VARIABLE_VersionArray2d_15);
  return STATE_VARIABLE_VersionArray2d_15;
}

void MR_CALL 
mercury__version_array2d__resize_copy_loop_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer RowNum_8,
  MR_Integer ColumnNum_9,
  MR_Integer CopyNumRows_10,
  MR_Integer CopyNumColumns_11,
  MR_Word OldVersionArray2d_12,
  MR_Word STATE_VARIABLE_VersionArray2d_0_15,
  MR_Word * STATE_VARIABLE_VersionArray2d_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RowNum_8 >= CopyNumRows_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_VersionArray2d_16 = STATE_VARIABLE_VersionArray2d_0_15;
    else
    {
      succeeded = (ColumnNum_9 >= CopyNumColumns_11);
      if (succeeded)
      {
        MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) RowNum_8 + (MR_Unsigned) 1);
        MR_Integer next_value_of_RowNum_8 = Var_17;

        // direct tailcall eliminated
        ;
        RowNum_8 = next_value_of_RowNum_8;
        ColumnNum_9 = (MR_Integer) 0;
        continue;
      }
      else
      {
        MR_Box Item_14;
        MR_Word STATE_VARIABLE_VersionArray2d_2_21;
        MR_Integer Var_22;
        MR_Integer next_value_of_ColumnNum_9;
        MR_Word next_value_of_STATE_VARIABLE_VersionArray2d_0_15;

        mercury__version_array2d__lookup_4_p_0(TypeInfo_for_T_25, OldVersionArray2d_12, RowNum_8, ColumnNum_9, &Item_14);
        mercury__version_array2d__set_5_p_0(TypeInfo_for_T_25, RowNum_8, ColumnNum_9, Item_14, STATE_VARIABLE_VersionArray2d_0_15, &STATE_VARIABLE_VersionArray2d_2_21);
        Var_22 = (MR_Integer) ((MR_Unsigned) ColumnNum_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_ColumnNum_9 = Var_22;
        next_value_of_STATE_VARIABLE_VersionArray2d_0_15 = STATE_VARIABLE_VersionArray2d_2_21;
        ColumnNum_9 = next_value_of_ColumnNum_9;
        STATE_VARIABLE_VersionArray2d_0_15 = next_value_of_STATE_VARIABLE_VersionArray2d_0_15;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__version_array2d__copy_1_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word VersionArray2d_3)
{
  MR_Word CopyVersionArray2d_4;
  MR_Integer NumRows_5 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_3, 0))));
  MR_Integer NumColumns_6 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_3, 1))));
  MR_Box VA_7 = ((MR_Box) ((MR_hl_field(0, VersionArray2d_3, 2))));
  MR_Box Var_8;

  Var_8 = mercury__version_array__copy_1_f_0(TypeInfo_for_T_9, VA_7);
  {
    CopyVersionArray2d_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CopyVersionArray2d_4, 0) = ((MR_Box) (NumRows_5));
    MR_hl_field(0, CopyVersionArray2d_4, 1) = ((MR_Box) (NumColumns_6));
    MR_hl_field(0, CopyVersionArray2d_4, 2) = ((MR_Box) (Var_8));
  }
  return CopyVersionArray2d_4;
}

MR_Word MR_CALL 
mercury__version_array2d__lists_1_f_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word VersionArray2d_3)
{
  MR_bool succeeded;
  MR_Word List_4;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_34_34;
  MR_Integer NumRows_5 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_3, 0))));
  MR_Integer NumColumns_6 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_3, 1))));
  MR_Box VersionArray_7 = ((MR_Box) ((MR_hl_field(0, VersionArray2d_3, 2))));
  MR_Word ListB_8;
  MR_Integer Var_9;
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) NumRows_5 * (MR_Unsigned) NumColumns_6);
  MR_Integer Var_12;
  MR_Integer Var_16;
  MR_String Var_21;
  MR_String Var_23;
  MR_String Var_24;
  MR_String Var_25;
  MR_String Var_27;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_41;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_Var_49;

  Var_9 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) 1);
  Var_12 = (MR_Integer) ((MR_Unsigned) NumColumns_6 - (MR_Unsigned) 1);
  List_4 = mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_115_95_50_95_95_91_49_93_95_48_6_f_0(Var_9, Var_12, NumColumns_6, VersionArray_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U));
  Var_16 = (MR_Integer) ((MR_Unsigned) NumRows_5 - (MR_Unsigned) 1);
  mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_114_111_119_115_95_95_91_49_44_32_51_93_95_48_6_p_0(VersionArray_7, NumColumns_6, Var_16, (MR_Word) ((MR_Unsigned) 0U), &ListB_8);
  {
    TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_28));
  }
  {
    TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_34_34, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_33_33));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__version_array2d_scalar_common_1[0]), 0)), 12))));
  conv1_Var_41 = func_0(((MR_Box) ((MR_Word) (&mercury__version_array2d_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_41 = ((MR_Word) (conv1_Var_41));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_34_34, (MR_Integer) 1, Var_41, ((MR_Box) (List_4)), (MR_Word) ((MR_Unsigned) 0U), &Var_38);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, &Var_39);
  Var_24 = mercury__string__append_list_1_f_0(Var_39);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__version_array2d_scalar_common_1[0]), 0)), 12))));
  conv3_Var_49 = func_2(((MR_Box) ((MR_Word) (&mercury__version_array2d_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Var_49 = ((MR_Word) (conv3_Var_49));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_34_34, (MR_Integer) 1, Var_49, ((MR_Box) (ListB_8)), (MR_Word) ((MR_Unsigned) 0U), &Var_46);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, &Var_47);
  Var_27 = mercury__string__append_list_1_f_0(Var_47);
  mercury__string__append_3_p_2((MR_String) " vs ", Var_27, &Var_25);
  mercury__string__append_3_p_2(Var_24, Var_25, &Var_23);
  mercury__string__append_3_p_2((MR_String) "lists results mismatch", Var_23, &Var_21);
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_33_33, (MR_Word) (List_4), (MR_Word) (ListB_8));
  if (!(succeeded))
    mercury__require__unexpected_2_p_0((MR_String) "function \140version_array2d.lists\'/1", Var_21);
  return List_4;
}

static void MR_CALL 
mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_114_111_119_115_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Box VersionArray_7,
  MR_Integer NumColumns_9,
  MR_Integer RowNum_10,
  MR_Word STATE_VARIABLE_Rows_0_14,
  MR_Word * STATE_VARIABLE_Rows_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= RowNum_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer RowBase_12 = (MR_Integer) ((MR_Unsigned) RowNum_10 * (MR_Unsigned) NumColumns_9);
      MR_Word Row_13;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) NumColumns_9 - (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Rows_1_20;
      MR_Integer Var_21;
      MR_Integer next_value_of_RowNum_10;
      MR_Word next_value_of_STATE_VARIABLE_Rows_0_14;

      mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_99_111_108_117_109_110_115_95_95_91_49_44_32_52_93_95_48_6_p_0(VersionArray_7, RowBase_12, Var_17, (MR_Word) ((MR_Unsigned) 0U), &Row_13);
      {
        STATE_VARIABLE_Rows_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rows_1_20, 0) = ((MR_Box) (Row_13));
        MR_hl_field(1, STATE_VARIABLE_Rows_1_20, 1) = ((MR_Box) (STATE_VARIABLE_Rows_0_14));
      }
      Var_21 = (MR_Integer) ((MR_Unsigned) RowNum_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_RowNum_10 = Var_21;
      next_value_of_STATE_VARIABLE_Rows_0_14 = STATE_VARIABLE_Rows_1_20;
      RowNum_10 = next_value_of_RowNum_10;
      STATE_VARIABLE_Rows_0_14 = next_value_of_STATE_VARIABLE_Rows_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Rows_15 = STATE_VARIABLE_Rows_0_14;
    break;
  }
}

static void MR_CALL 
mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_99_111_108_117_109_110_115_95_95_91_49_44_32_52_93_95_48_6_p_0(
  MR_Box VersionArray_7,
  MR_Integer RowBase_8,
  MR_Integer ColumnNum_10,
  MR_Word STATE_VARIABLE_ItemsInRow_0_13,
  MR_Word * STATE_VARIABLE_ItemsInRow_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= ColumnNum_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Item_12;
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) RowBase_8 + (MR_Unsigned) ColumnNum_10);
      MR_Word STATE_VARIABLE_ItemsInRow_1_17;
      MR_Integer Var_18;
      MR_Box Var_22;
      MR_Integer next_value_of_ColumnNum_10;
      MR_Word next_value_of_STATE_VARIABLE_ItemsInRow_0_13;

{
#define MR_PROC_LABEL mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_99_111_108_117_109_110_115_95_95_91_49_44_32_52_93_95_48_6_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) VersionArray_7 ;
	I = Var_16 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_22  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Item_12 = Var_22;
      else
      {
        MR_Integer Var_23;
        MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_114_101_118_95_99_111_108_117_109_110_115_95_95_91_49_44_32_52_93_95_48_6_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) VersionArray_7 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_25  = N;
}
        Var_23 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(Var_16, Var_23, (MR_String) "version_array.lookup");
          return;
        }
      }
      {
        STATE_VARIABLE_ItemsInRow_1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ItemsInRow_1_17, 0) = Item_12;
        MR_hl_field(1, STATE_VARIABLE_ItemsInRow_1_17, 1) = ((MR_Box) (STATE_VARIABLE_ItemsInRow_0_13));
      }
      Var_18 = (MR_Integer) ((MR_Unsigned) ColumnNum_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ColumnNum_10 = Var_18;
      next_value_of_STATE_VARIABLE_ItemsInRow_0_13 = STATE_VARIABLE_ItemsInRow_1_17;
      ColumnNum_10 = next_value_of_ColumnNum_10;
      STATE_VARIABLE_ItemsInRow_0_13 = next_value_of_STATE_VARIABLE_ItemsInRow_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_ItemsInRow_14 = STATE_VARIABLE_ItemsInRow_0_13;
    break;
  }
}

static MR_Word MR_CALL 
mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_115_95_50_95_95_91_49_93_95_48_6_f_0(
  MR_Integer IJ_8,
  MR_Integer J_9,
  MR_Integer N_10,
  MR_Box VA_11,
  MR_Word Xs_12,
  MR_Word Xss_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= IJ_8);
    MR_Word HeadVar__7_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = ((MR_Integer) 0 <= J_9);
      if (succeeded)
      {
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) IJ_8 - (MR_Unsigned) 1);
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) J_9 - (MR_Unsigned) 1);
        MR_Word Var_20;
        MR_Box Var_21;
        MR_Box Var_27;
        MR_Integer next_value_of_IJ_8;
        MR_Integer next_value_of_J_9;
        MR_Word next_value_of_Xs_12;

{
#define MR_PROC_LABEL mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_115_95_50_95_95_91_49_93_95_48_6_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) VA_11 ;
	I = IJ_8 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_27  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_21 = Var_27;
        else
        {
          MR_Integer Var_28;
          MR_Integer Var_30;

{
#define MR_PROC_LABEL mercury__version_array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_115_95_50_95_95_91_49_93_95_48_6_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) VA_11 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_30  = N;
}
          Var_28 = (MR_Integer) ((MR_Unsigned) Var_30 - (MR_Unsigned) 1);
          mercury__version_array__out_of_bounds_error_3_p_0(IJ_8, Var_28, (MR_String) "version_array.lookup");
        }
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = Var_21;
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (Xs_12));
        }
        // direct tailcall eliminated
        ;
        next_value_of_IJ_8 = Var_16;
        next_value_of_J_9 = Var_18;
        next_value_of_Xs_12 = Var_20;
        IJ_8 = next_value_of_IJ_8;
        J_9 = next_value_of_J_9;
        Xs_12 = next_value_of_Xs_12;
        continue;
      }
      else
      {
        MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) N_10 - (MR_Unsigned) 1);
        MR_Word Var_25;
        MR_Integer next_value_of_J_9;
        MR_Word next_value_of_Xss_13;

        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Xs_12));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (Xss_13));
        }
        // direct tailcall eliminated
        ;
        next_value_of_J_9 = Var_22;
        next_value_of_Xss_13 = Var_25;
        J_9 = next_value_of_J_9;
        Xs_12 = (MR_Word) ((MR_Unsigned) 0U);
        Xss_13 = next_value_of_Xss_13;
        continue;
      }
    }
    else
      {
        HeadVar__7_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__7_7, 0) = ((MR_Box) (Xs_12));
        MR_hl_field(1, HeadVar__7_7, 1) = ((MR_Box) (Xss_13));
      }
    return HeadVar__7_7;
    break;
  }
}

MR_Word MR_CALL 
mercury__version_array2d__f_117_101_108_101_109_32_58_61_4_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Unsigned RowNum_6,
  MR_Unsigned ColumnNum_7,
  MR_Word STATE_VARIABLE_VersionArray2d_0_10,
  MR_Box NewValue_9)
{
  MR_Word STATE_VARIABLE_VersionArray2d_11;

  mercury__version_array2d__uset_5_p_0(TypeInfo_for_T_12, RowNum_6, ColumnNum_7, NewValue_9, STATE_VARIABLE_VersionArray2d_0_10, &STATE_VARIABLE_VersionArray2d_11);
  return STATE_VARIABLE_VersionArray2d_11;
}

MR_Word MR_CALL 
mercury__version_array2d__f_101_108_101_109_32_58_61_4_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer RowNum_6,
  MR_Integer ColumnNum_7,
  MR_Word STATE_VARIABLE_VersionArray2d_0_10,
  MR_Box NewValue_9)
{
  MR_Word STATE_VARIABLE_VersionArray2d_11;

  mercury__version_array2d__set_5_p_0(TypeInfo_for_T_12, RowNum_6, ColumnNum_7, NewValue_9, STATE_VARIABLE_VersionArray2d_0_10, &STATE_VARIABLE_VersionArray2d_11);
  return STATE_VARIABLE_VersionArray2d_11;
}

void MR_CALL 
mercury__version_array2d__uset_5_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Unsigned RowNum_6,
  MR_Unsigned ColumnNum_7,
  MR_Box NewValue_8,
  MR_Word STATE_VARIABLE_VersionArray2d_0_17,
  MR_Word * STATE_VARIABLE_VersionArray2d_18)
{
  MR_bool succeeded;
  MR_Integer NumRows_10 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VersionArray2d_0_17, 0))));
  MR_Integer NumColumns_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VersionArray2d_0_17, 1))));
  MR_Box VersionArray0_12 = ((MR_Box) ((MR_hl_field(0, STATE_VARIABLE_VersionArray2d_0_17, 2))));
  MR_Integer RowNumI_13;
  MR_Integer ColumnNumI_14;

{
#define MR_PROC_LABEL mercury__version_array2d__uset_5_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = RowNum_6 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	RowNumI_13  = I;
}
{
#define MR_PROC_LABEL mercury__version_array2d__uset_5_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = ColumnNum_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	ColumnNumI_14  = I;
}
  succeeded = (RowNumI_13 >= NumRows_10);
  if (succeeded)
    {
      mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.uset", (MR_String) "row", RowNumI_13, NumRows_10);
      return;
    }
  else
  {
    succeeded = (ColumnNumI_14 >= NumColumns_11);
    if (succeeded)
      {
        mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.uset", (MR_String) "column", ColumnNumI_14, NumColumns_11);
        return;
      }
    else
    {
      MR_Integer SlotNum_15;
      MR_Box VersionArray_16;
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) RowNumI_13 * (MR_Unsigned) NumColumns_11);
      MR_Box Var_25;

      SlotNum_15 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) ColumnNumI_14);
{
#define MR_PROC_LABEL mercury__version_array2d__uset_5_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = SlotNum_15 ;
	X = (MR_Word) NewValue_8 ;
	VA0 = (struct ML_va *) VersionArray0_12 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_25  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        VersionArray_16 = Var_25;
      else
      {
        MR_Integer Var_26;
        MR_Integer Var_28;

{
#define MR_PROC_LABEL mercury__version_array2d__uset_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) VersionArray0_12 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_28  = N;
}
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(SlotNum_15, Var_26, (MR_String) "version_array.set");
          return;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_VersionArray2d_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (NumRows_10));
        MR_hl_field(0, base, 1) = ((MR_Box) (NumColumns_11));
        MR_hl_field(0, base, 2) = ((MR_Box) (VersionArray_16));
      }
    }
  }
}

void MR_CALL 
mercury__version_array2d__set_5_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Integer RowNum_6,
  MR_Integer ColumnNum_7,
  MR_Box NewValue_8,
  MR_Word STATE_VARIABLE_VersionArray2d_0_15,
  MR_Word * STATE_VARIABLE_VersionArray2d_16)
{
  MR_bool succeeded = ((MR_Integer) 0 <= RowNum_6);
  MR_Integer NumRows_10 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VersionArray2d_0_15, 0))));
  MR_Integer NumColumns_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VersionArray2d_0_15, 1))));
  MR_Box VersionArray0_12 = ((MR_Box) ((MR_hl_field(0, STATE_VARIABLE_VersionArray2d_0_15, 2))));

  if (succeeded)
    succeeded = (RowNum_6 < NumRows_10);
  succeeded = !(succeeded);
  if (succeeded)
    {
      mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.set", (MR_String) "row", RowNum_6, NumRows_10);
      return;
    }
  else
  {
    succeeded = ((MR_Integer) 0 <= ColumnNum_7);
    if (succeeded)
      succeeded = (ColumnNum_7 < NumColumns_11);
    succeeded = !(succeeded);
    if (succeeded)
      {
        mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.set", (MR_String) "column", ColumnNum_7, NumColumns_11);
        return;
      }
    else
    {
      MR_Integer SlotNum_13;
      MR_Box VersionArray_14;
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) RowNum_6 * (MR_Unsigned) NumColumns_11);
      MR_Box Var_25;

      SlotNum_13 = (MR_Integer) ((MR_Unsigned) Var_23 + (MR_Unsigned) ColumnNum_7);
{
#define MR_PROC_LABEL mercury__version_array2d__set_5_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = SlotNum_13 ;
	X = (MR_Word) NewValue_8 ;
	VA0 = (struct ML_va *) VersionArray0_12 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_25  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        VersionArray_14 = Var_25;
      else
      {
        MR_Integer Var_26;
        MR_Integer Var_28;

{
#define MR_PROC_LABEL mercury__version_array2d__set_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) VersionArray0_12 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_28  = N;
}
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(SlotNum_13, Var_26, (MR_String) "version_array.set");
          return;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_VersionArray2d_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (NumRows_10));
        MR_hl_field(0, base, 1) = ((MR_Box) (NumColumns_11));
        MR_hl_field(0, base, 2) = ((MR_Box) (VersionArray_14));
      }
    }
  }
}

MR_Box MR_CALL 
mercury__version_array2d__uelem_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Unsigned RowNum_5,
  MR_Unsigned ColumnNum_6,
  MR_Word VersionArray2d_7)
{
  MR_Box Value_8;

  mercury__version_array2d__ulookup_4_p_0(TypeInfo_for_T_9, VersionArray2d_7, RowNum_5, ColumnNum_6, &Value_8);
  return Value_8;
}

MR_Box MR_CALL 
mercury__version_array2d__elem_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer RowNum_5,
  MR_Integer ColumnNum_6,
  MR_Word VersionArray2d_7)
{
  MR_Box Value_8;

  mercury__version_array2d__lookup_4_p_0(TypeInfo_for_T_9, VersionArray2d_7, RowNum_5, ColumnNum_6, &Value_8);
  return Value_8;
}

void MR_CALL 
mercury__version_array2d__ulookup_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word VersionArray2d_5,
  MR_Unsigned RowNum_6,
  MR_Unsigned ColumnNum_7,
  MR_Box * Value_8)
{
  MR_bool succeeded;
  MR_Integer NumRows_9 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_5, 0))));
  MR_Integer NumColumns_10 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_5, 1))));
  MR_Box VersionArray_11 = ((MR_Box) ((MR_hl_field(0, VersionArray2d_5, 2))));
  MR_Integer RowNumI_12;
  MR_Integer ColumnNumI_13;

{
#define MR_PROC_LABEL mercury__version_array2d__ulookup_4_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = RowNum_6 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	RowNumI_12  = I;
}
{
#define MR_PROC_LABEL mercury__version_array2d__ulookup_4_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = ColumnNum_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	ColumnNumI_13  = I;
}
  succeeded = (RowNumI_12 >= NumRows_9);
  if (succeeded)
    {
      mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.ulookup", (MR_String) "row", RowNumI_12, NumRows_9);
      return;
    }
  else
  {
    succeeded = (ColumnNumI_13 >= NumColumns_10);
    if (succeeded)
      {
        mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.ulookup", (MR_String) "column", ColumnNumI_13, NumColumns_10);
        return;
      }
    else
    {
      MR_Integer Slot_14;
      MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) RowNumI_12 * (MR_Unsigned) NumColumns_10);
      MR_Box Var_21;

      Slot_14 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) ColumnNumI_13);
{
#define MR_PROC_LABEL mercury__version_array2d__ulookup_4_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) VersionArray_11 ;
	I = Slot_14 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_21  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        *Value_8 = Var_21;
      else
      {
        MR_Integer Var_22;
        MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__version_array2d__ulookup_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) VersionArray_11 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_24  = N;
}
        Var_22 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(Slot_14, Var_22, (MR_String) "version_array.lookup");
          return;
        }
      }
    }
  }
}

void MR_CALL 
mercury__version_array2d__lookup_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word VersionArray2d_5,
  MR_Integer RowNum_6,
  MR_Integer ColumnNum_7,
  MR_Box * Value_8)
{
  MR_bool succeeded = ((MR_Integer) 0 <= RowNum_6);
  MR_Integer NumRows_9 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_5, 0))));
  MR_Integer NumColumns_10 = ((MR_Integer) ((MR_hl_field(0, VersionArray2d_5, 1))));
  MR_Box VersionArray_11 = ((MR_Box) ((MR_hl_field(0, VersionArray2d_5, 2))));

  if (succeeded)
    succeeded = (RowNum_6 < NumRows_9);
  succeeded = !(succeeded);
  if (succeeded)
    {
      mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.lookup", (MR_String) "row", RowNum_6, NumRows_9);
      return;
    }
  else
  {
    succeeded = ((MR_Integer) 0 <= ColumnNum_7);
    if (succeeded)
      succeeded = (ColumnNum_7 < NumColumns_10);
    succeeded = !(succeeded);
    if (succeeded)
      {
        mercury__version_array2d__out_of_bounds_error_4_p_0((MR_String) "version_array2d.lookup", (MR_String) "column", ColumnNum_7, NumColumns_10);
        return;
      }
    else
    {
      MR_Integer Slot_12;
      MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) RowNum_6 * (MR_Unsigned) NumColumns_10);
      MR_Box Var_21;

      Slot_12 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) ColumnNum_7);
{
#define MR_PROC_LABEL mercury__version_array2d__lookup_4_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) VersionArray_11 ;
	I = Slot_12 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_21  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        *Value_8 = Var_21;
      else
      {
        MR_Integer Var_22;
        MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__version_array2d__lookup_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) VersionArray_11 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_24  = N;
}
        Var_22 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(Slot_12, Var_22, (MR_String) "version_array.lookup");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__version_array2d__out_of_bounds_error_4_p_0(
  MR_String PredName_5,
  MR_String RowOrColumn_6,
  MR_Integer Index_7,
  MR_Integer Max_8)
{
  MR_String Msg_9;
  MR_Word Var_20;
  MR_String Var_23;
  MR_String Var_30;
  MR_String Var_32;
  MR_String Var_33;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_43;
  MR_String Var_45;

  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__version_array2d_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Max_8, &Var_23);
  mercury__string__append_3_p_2(Var_23, (MR_String) "]", &Var_30);
  mercury__string__append_3_p_2((MR_String) " not in range [0, ", Var_30, &Var_32);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__version_array2d_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Index_7, &Var_33);
  mercury__string__append_3_p_2(Var_33, Var_32, &Var_40);
  mercury__string__append_3_p_2((MR_String) " index ", Var_40, &Var_42);
  mercury__string__append_3_p_2(RowOrColumn_6, Var_42, &Var_43);
  mercury__string__append_3_p_2((MR_String) ": ", Var_43, &Var_45);
  mercury__string__append_3_p_2(PredName_5, Var_45, &Msg_9);
  Var_20 = (MR_Word) (Msg_9);
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__version_array__version_array__type_ctor_info_index_out_of_bounds_0), ((MR_Box) (Var_20)));
    return;
  }
}

MR_bool MR_CALL 
mercury__version_array2d__in_ubounds_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Unsigned RowNum_7,
  MR_Unsigned ColumnNum_8)
{
  MR_bool succeeded;
  MR_Integer NumRowsI_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer NumColumnsI_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Integer RowNumI_9;
  MR_Integer ColumnNumI_10;

{
#define MR_PROC_LABEL mercury__version_array2d__in_ubounds_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = RowNum_7 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	RowNumI_9  = I;
}
{
#define MR_PROC_LABEL mercury__version_array2d__in_ubounds_3_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = ColumnNum_8 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	ColumnNumI_10  = I;
}
  succeeded = (RowNumI_9 < NumRowsI_4);
  if (succeeded)
    succeeded = (ColumnNumI_10 < NumColumnsI_5);
  return succeeded;
}

MR_bool MR_CALL 
mercury__version_array2d__in_bounds_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Integer RowNum_7,
  MR_Integer ColumnNum_8)
{
  MR_bool succeeded = ((MR_Integer) 0 <= RowNum_7);
  MR_Integer NumRows_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer NumColumns_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Integer Var_10;

  if (succeeded)
  {
    succeeded = (RowNum_7 < NumRows_4);
    if (succeeded)
    {
      Var_10 = (MR_Integer) 0;
      succeeded = (Var_10 <= ColumnNum_8);
      if (succeeded)
        succeeded = (ColumnNum_8 < NumColumns_5);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__version_array2d__ubounds_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Unsigned * NumRows_7,
  MR_Unsigned * NumColumns_8)
{
  MR_Integer NumRowsI_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer NumColumnsI_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));

{
#define MR_PROC_LABEL mercury__version_array2d__ubounds_3_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = NumRowsI_4 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	*NumRows_7  = U;
}
{
#define MR_PROC_LABEL mercury__version_array2d__ubounds_3_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = NumColumnsI_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	*NumColumns_8  = U;
}
}

void MR_CALL 
mercury__version_array2d__bounds_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Integer * NumRows_4,
  MR_Integer * NumColumns_5)
{
  *NumRows_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  *NumColumns_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
}

MR_Word MR_CALL 
mercury__version_array2d__uinit_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Unsigned NumRows_5,
  MR_Unsigned NumColumns_6,
  MR_Box InitValue_7)
{
  MR_Word VersionArray2d_8;
  MR_Integer NumRowsI_9;
  MR_Integer NumColumnsI_10;

{
#define MR_PROC_LABEL mercury__version_array2d__uinit_3_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = NumRows_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	NumRowsI_9  = I;
}
{
#define MR_PROC_LABEL mercury__version_array2d__uinit_3_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = NumColumns_6 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	NumColumnsI_10  = I;
}
  VersionArray2d_8 = mercury__version_array2d__init_3_f_0(TypeInfo_for_T_11, NumRowsI_9, NumColumnsI_10, InitValue_7);
  return VersionArray2d_8;
}

MR_Word MR_CALL 
mercury__version_array2d__init_3_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Integer NumRows_5,
  MR_Integer NumColumns_6,
  MR_Box InitValue_7)
{
  MR_bool succeeded = (NumRows_5 >= (MR_Integer) 0);
  MR_Word VersionArray2d_8;
  MR_Integer Var_11;

  if (succeeded)
  {
    Var_11 = (MR_Integer) 0;
    succeeded = (NumColumns_6 >= Var_11);
  }
  if (succeeded)
  {
    MR_Box VersionArray_9;
    MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) NumRows_5 * (MR_Unsigned) NumColumns_6);

    VersionArray_9 = mercury__version_array__init_2_f_0(TypeInfo_for_T_15, Var_12, InitValue_7);
    {
      VersionArray2d_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VersionArray2d_8, 0) = ((MR_Box) (NumRows_5));
      MR_hl_field(0, VersionArray2d_8, 1) = ((MR_Box) (NumColumns_6));
      MR_hl_field(0, VersionArray2d_8, 2) = ((MR_Box) (VersionArray_9));
    }
  }
  else
    mercury__require__error_2_p_0((MR_String) "function \140version_array2d.init\'/3", (MR_String) "bounds must be non-negative");
  return VersionArray2d_8;
}

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_1(
  void * env_ptr_arg)
{
  struct mercury__version_array2d__version_array2d_2_f_0_env_0_s * env_ptr = (struct mercury__version_array2d__version_array2d_2_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__commit_0, 1);
}

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_3(
  void * env_ptr_arg)
{
  struct mercury__version_array2d__version_array2d_2_f_0_env_0_s * env_ptr = (struct mercury__version_array2d__version_array2d_2_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__Row_9 = ((MR_Word) ((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__conv0_Row_9));
  mercury__version_array2d__version_array2d_1_f_0_2(env_ptr);
}

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_2(
  void * env_ptr_arg)
{
  struct mercury__version_array2d__version_array2d_2_f_0_env_0_s * env_ptr = (struct mercury__version_array2d__version_array2d_2_f_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer Var_21;
    MR_Unsigned Var_26;

    mercury__list__ulength_acc_3_p_0((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18, (env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__Row_9, (MR_Unsigned) 0U, &Var_26);
{
#define MR_PROC_LABEL mercury__version_array2d__version_array2d_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_26 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_21  = I;
}
    (env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded = ((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__FirstRowNumColumns_8 != Var_21);
    if ((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded)
      mercury__version_array2d__version_array2d_1_f_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__version_array2d__version_array2d_1_f_0_4(
  void * env_ptr_arg)
{
  struct mercury__version_array2d__version_array2d_2_f_0_env_0_s * env_ptr = (struct mercury__version_array2d__version_array2d_2_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_20_20, &(env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__conv0_Row_9, (MR_Word) ((env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__Rows_3), mercury__version_array2d__version_array2d_1_f_0_3, env_ptr);
      (env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded = MR_TRUE;
}

MR_Word MR_CALL 
mercury__version_array2d__version_array2d_1_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Rows_3)
{
  struct mercury__version_array2d__version_array2d_2_f_0_env_0_s env;

  (env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18 = TypeInfo_for_T_18;
  (env).mercury__version_array2d__version_array2d_2_f_0_env_0__Rows_3 = Rows_3;
  {
    MR_Word VersionArray2d_4;

    if (((env).mercury__version_array2d__version_array2d_2_f_0_env_0__Rows_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box Var_13;

      Var_13 = mercury__version_array__version_array_1_f_0((env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18, (MR_Word) ((MR_Unsigned) 0U));
      {
        VersionArray2d_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VersionArray2d_4, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, VersionArray2d_4, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, VersionArray2d_4, 2) = ((MR_Box) (Var_13));
      }
    }
    else
    {
      MR_Word FirstRow_5 = ((MR_Word) ((MR_hl_field(1, (env).mercury__version_array2d__version_array2d_2_f_0_env_0__Rows_3, 0))));
      MR_Integer NumRows_7;
      MR_Unsigned Var_22;
      MR_Unsigned Var_24;
      MR_Word Var_6;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        (env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_20_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(0, base, 1) = ((MR_Box) ((env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18));
      }
      mercury__list__ulength_acc_3_p_0((env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_20_20, (MR_Word) ((env).mercury__version_array2d__version_array2d_2_f_0_env_0__Rows_3), (MR_Unsigned) 0U, &Var_22);
{
#define MR_PROC_LABEL mercury__version_array2d__version_array2d_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_22 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	NumRows_7  = I;
}
      mercury__list__ulength_acc_3_p_0((env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18, FirstRow_5, (MR_Unsigned) 0U, &Var_24);
{
#define MR_PROC_LABEL mercury__version_array2d__version_array2d_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_24 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	(env).mercury__version_array2d__version_array2d_2_f_0_env_0__FirstRowNumColumns_8  = I;
}
      mercury__version_array2d__version_array2d_1_f_0_4(&env);
      (env).mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded = !((env).mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded);
      if ((env).mercury__version_array2d__version_array2d_2_f_0_env_0__succeeded)
      {
        MR_Box VersionArray_10;
        MR_Word Var_15;
        MR_Word Var_28;
        MR_Word conv1_Var_28;

        mercury__list__reverse_2_p_0((env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_20_20, (MR_Word) ((env).mercury__version_array2d__version_array2d_2_f_0_env_0__Rows_3), &conv1_Var_28);
        Var_28 = (MR_Word) (conv1_Var_28);
        mercury__list__condense_acc_3_p_0((env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18, Var_28, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
        VersionArray_10 = mercury__version_array__version_array_1_f_0((env).mercury__version_array2d__version_array2d_2_f_0_env_0__TypeInfo_for_T_18, Var_15);
        {
          VersionArray2d_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VersionArray2d_4, 0) = ((MR_Box) (NumRows_7));
          MR_hl_field(0, VersionArray2d_4, 1) = ((MR_Box) ((env).mercury__version_array2d__version_array2d_2_f_0_env_0__FirstRowNumColumns_8));
          MR_hl_field(0, VersionArray2d_4, 2) = ((MR_Box) (VersionArray_10));
        }
      }
      else
        mercury__require__error_2_p_0((MR_String) "function \140version_array2d.version_array2d\'/1", (MR_String) "non-rectangular list of lists");
    }
    return VersionArray2d_4;
  }
}

static MR_bool MR_CALL 
mercury__version_array2d____Unify____version_array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__version_array2d____Unify____version_array2d_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__version_array2d____Compare____version_array2d_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__version_array2d____Compare____version_array2d_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__version_array2d__init(void)
{
}

void mercury__version_array2d__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__version_array2d__version_array2d__type_ctor_info_version_array2d_1);
}

void mercury__version_array2d__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__version_array2d__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module version_array2d.
