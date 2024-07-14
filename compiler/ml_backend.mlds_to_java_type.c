/*
** Automatically generated from `mlds_to_java_type.m'
** by the Mercury compiler,
** version rotd-2024-07-14
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


// :- module ml_backend.mlds_to_java_type.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_type__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_type.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "set_tree234.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static void MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__generic_args_types_to_string_for_java__416__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__mercury_user_enum_type_to_string_and_dims_for_java__396__1_2_p_0(
  MR_Word ArrayDims_15,
  MR_Word HeadVar__2_21);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__mercury_user_type_to_string_and_dims_for_java__375__1_2_p_0(
  MR_Word ArrayDims_13,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word CtorCat_8,
  MR_String * String_9,
  MR_Word * ArrayDims_10);

static void MR_CALL 
ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word ArgsTypes_5,
  MR_String * String_6);


static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_5[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_6[1][5];


struct ml_backend__mlds_to_java_type__vector_common_type_2_0_s {
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_0;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_1;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_2;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_3;
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_2_0_s ml_backend__mlds_to_java_type_vector_common_2[16];

struct ml_backend__mlds_to_java_type__vector_common_type_3_0_s {
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_0;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_1;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_2;
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_3_0_s ml_backend__mlds_to_java_type_vector_common_3[10];

struct ml_backend__mlds_to_java_type__vector_common_type_4_0_s {
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_0;
  const MR_Word ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_4_0_s ml_backend__mlds_to_java_type_vector_common_4[4];

struct ml_backend__mlds_to_java_type__vector_common_type_7_0_s {
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_7_0_s ml_backend__mlds_to_java_type_vector_common_7[10];



static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_java_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_2_0_s ml_backend__mlds_to_java_type_vector_common_2[16] = {
  /* row   0 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue",
    (MR_String) "0"
  },
  /* row   1 */
  {
    (MR_String) "double",
    (MR_String) "java.lang.Double",
    (MR_String) "doubleValue",
    (MR_String) "0"
  },
  /* row   2 */
  {
    (MR_String) "char",
    (MR_String) "java.lang.Character",
    (MR_String) "charValue",
    (MR_String) "\'\\u0000\'"
  },
  /* row   3 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    (MR_String) "long",
    (MR_String) "java.lang.Long",
    (MR_String) "longValue",
    (MR_String) "0"
  },
  /* row   5 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue",
    (MR_String) "0"
  },
  /* row   6 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    (MR_String) "float",
    (MR_String) "java.lang.Float",
    (MR_String) "floatValue",
    (MR_String) "0"
  },
  /* row   8 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue",
    (MR_String) "0"
  },
  /* row   9 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    (MR_String) "boolean",
    (MR_String) "java.lang.Boolean",
    (MR_String) "booleanValue",
    (MR_String) "false"
  },
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_3_0_s ml_backend__mlds_to_java_type_vector_common_3[10] = {
  /* row   0 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row   1 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row   2 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue"
  },
  /* row   3 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue"
  },
  /* row   4 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue"
  },
  /* row   5 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue"
  },
  /* row   6 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row   7 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row   8 */
  {
    (MR_String) "long",
    (MR_String) "java.lang.Long",
    (MR_String) "longValue"
  },
  /* row   9 */
  {
    (MR_String) "long",
    (MR_String) "java.lang.Long",
    (MR_String) "longValue"
  },
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_4_0_s ml_backend__mlds_to_java_type_vector_common_4[4] = {
  /* row   0 */
  {
    (MR_String) "jmercury.runtime.TypeInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_String) "jmercury.runtime.TypeCtorInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    (MR_String) "/* typeclass_info */ java.lang.Object",
    (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_type_scalar_common_1[2]))
  },
  /* row   3 */
  {
    (MR_String) "/* base_typeclass_info */ java.lang.Object",
    (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_type_scalar_common_1[2]))
  },
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_7_0_s ml_backend__mlds_to_java_type_vector_common_7[10] = {
  /* row   0 */   { (MR_String) "int" },
  /* row   1 */   { (MR_String) "int" },
  /* row   2 */   { (MR_String) "byte" },
  /* row   3 */   { (MR_String) "byte" },
  /* row   4 */   { (MR_String) "short" },
  /* row   5 */   { (MR_String) "short" },
  /* row   6 */   { (MR_String) "int" },
  /* row   7 */   { (MR_String) "int" },
  /* row   8 */   { (MR_String) "long" },
  /* row   9 */   { (MR_String) "long" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static void MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__generic_args_types_to_string_for_java__416__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
  MR_Word MLDS_ArgType_13;
  MR_String JavaBoxedName_34;
  MR_String Var_33;
  MR_String Var_35;

  MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, LambdaHeadVar__1_16);
  succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(MLDS_ArgType_13, &Var_33, &JavaBoxedName_34, &Var_35);
  if (succeeded)
    *LambdaHeadVar__2_17 = JavaBoxedName_34;
  else
  {
    MR_String BaseTypeName_36;
    MR_Word ArrayDims_37;

    ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_4, MLDS_ArgType_13, &BaseTypeName_36, &ArrayDims_37);
    if ((ArrayDims_37 == (MR_Word) ((MR_Unsigned) 0U)))
      *LambdaHeadVar__2_17 = BaseTypeName_36;
    else
    {
      MR_String Var_40;

      Var_40 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(ArrayDims_37);
      *LambdaHeadVar__2_17 = mercury__string__f_43_43_2_f_0(BaseTypeName_36, Var_40);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__mercury_user_enum_type_to_string_and_dims_for_java__396__1_2_p_0(
  MR_Word ArrayDims_15,
  MR_Word HeadVar__2_21)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_java_type_scalar_common_1[1]), ((MR_Box) (ArrayDims_15)), ((MR_Box) (HeadVar__2_21)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__mercury_user_type_to_string_and_dims_for_java__375__1_2_p_0(
  MR_Word ArrayDims_13,
  MR_Word HeadVar__2_20)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_java_type_scalar_common_1[1]), ((MR_Box) (ArrayDims_13)), ((MR_Box) (HeadVar__2_20)));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * TypeName_6)
{
  MR_bool succeeded;
  MR_String JavaBoxedName_8;
  MR_String Var_7;
  MR_String Var_9;

  succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_5, &Var_7, &JavaBoxedName_8, &Var_9);
  if (succeeded)
    *TypeName_6 = JavaBoxedName_8;
  else
  {
    MR_String BaseTypeName_10;
    MR_Word ArrayDims_11;

    ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_4, Type_5, &BaseTypeName_10, &ArrayDims_11);
    if ((ArrayDims_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *TypeName_6 = BaseTypeName_10;
    else
    {
      MR_String Var_14;

      Var_14 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(ArrayDims_11);
      *TypeName_6 = mercury__string__f_43_43_2_f_0(BaseTypeName_10, Var_14);
    }
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(
  MR_Word Info_4,
  MR_Word MLDS_Type_5)
{
  MR_String FullTypeName_6;
  MR_String BaseTypeName_7;
  MR_Word ArrayDims_8;

  ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_4, MLDS_Type_5, &BaseTypeName_7, &ArrayDims_8);
  if ((ArrayDims_8 == (MR_Word) ((MR_Unsigned) 0U)))
    FullTypeName_6 = BaseTypeName_7;
  else
  {
    MR_String Var_11;

    Var_11 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(ArrayDims_8);
    FullTypeName_6 = mercury__string__f_43_43_2_f_0(BaseTypeName_7, Var_11);
  }
  return FullTypeName_6;
}

void MR_CALL 
ml_backend__mlds_to_java_type__output_type_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word MLDS_Type_9,
  MR_Word * ArrayDims_10)
{
  MR_String BaseTypeName_12;

  ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_7, MLDS_Type_9, &BaseTypeName_12, ArrayDims_10);
  mercury__io__write_string_4_p_0(Stream_8, BaseTypeName_12);
  if (!((*ArrayDims_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_18;

    Var_18 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(*ArrayDims_10);
    mercury__io__write_string_4_p_0(Stream_8, Var_18);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word MLDS_Type_8)
{
  MR_Word _ArrayDims_10;
  MR_String BaseTypeName_13;

  ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_6, MLDS_Type_8, &BaseTypeName_13, &_ArrayDims_10);
  mercury__io__write_string_4_p_0(Stream_7, BaseTypeName_13);
  if (!((_ArrayDims_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_17;

    Var_17 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(_ArrayDims_10);
    mercury__io__write_string_4_p_0(Stream_7, Var_17);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6,
  MR_String * String_7,
  MR_Word * ArrayDims_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) MLDS_Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MLDS_Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *String_7 = (MR_String) "jmercury.runtime.Commit";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              *String_7 = (MR_String) "double";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "java.lang.String";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              *String_7 = (MR_String) "int";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              *String_7 = (MR_String) "boolean";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              *String_7 = (MR_String) "/* generic_type */ java.lang.Object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              *String_7 = (MR_String) "/* env_ptr */ java.lang.Object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 7:
            {
              *String_7 = (MR_String) "jmercury.runtime.TypeInfo";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 8:
            {
              *String_7 = (MR_String) "jmercury.runtime.PseudoTypeInfo";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.type_to_string_and_dims_for_java\'/4", (MR_String) "unknown type");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassId_26 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
          MR_Integer Arity_27 = ((MR_Integer) ((MR_hl_field(0, ClassId_26, (MR_Integer) 1))));
          MR_Word Name_59 = ((MR_Word) ((MR_hl_field(0, ClassId_26, (MR_Integer) 0))));

          *String_7 = ml_backend__mlds_to_java_name__qual_class_name_to_string_for_java_2_f_0(Name_59, Arity_27);
          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EnumClassId_28 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));
          MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(0, EnumClassId_28, (MR_Integer) 0))));
          MR_String Name_60 = ((MR_String) ((MR_hl_field(0, EnumClassId_28, (MR_Integer) 1))));
          MR_Integer Arity_61 = ((MR_Integer) ((MR_hl_field(0, EnumClassId_28, (MR_Integer) 2))));

          *String_7 = ml_backend__mlds_to_java_name__qual_nrt_name_to_string_for_java_3_f_0(ModuleName_29, Name_60, Arity_61);
          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word EnvId_30 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_String Name_62 = ((MR_String) ((MR_hl_field(0, EnvId_30, (MR_Integer) 1))));
              MR_Word ModuleName_63 = ((MR_Word) ((MR_hl_field(0, EnvId_30, (MR_Integer) 0))));

              *String_7 = ml_backend__mlds_to_java_name__qual_nrt_name_to_string_for_java_3_f_0(ModuleName_63, Name_62, (MR_Integer) 0);
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word StructId_31 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_String Name_64 = ((MR_String) ((MR_hl_field(0, StructId_31, (MR_Integer) 1))));
              MR_Word ModuleName_65 = ((MR_Word) ((MR_hl_field(0, StructId_31, (MR_Integer) 0))));

              *String_7 = ml_backend__mlds_to_java_name__qual_nrt_name_to_string_for_java_3_f_0(ModuleName_65, Name_64, (MR_Integer) 0);
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "jmercury.runtime.MethodPtr";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_9 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word CtorCat_10 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 2))));
              MR_String StringPrime_11;
              MR_Word ArrayDimsPrime_12;

              succeeded = ml_backend__mlds_to_java_type__hand_defined_type_for_java_4_p_0(Type_9, CtorCat_10, &StringPrime_11, &ArrayDimsPrime_12);
              if (succeeded)
              {
                *String_7 = StringPrime_11;
                *ArrayDims_8 = ArrayDimsPrime_12;
              }
              else
              {
                succeeded = (CtorCat_10 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *String_7 = (MR_String) "/* builtin_dummy */ java.lang.Object";
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_71;

                  Var_71 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_71);
                  if (succeeded)
                  {
                    *String_7 = (MR_String) "/* c_pointer */ java.lang.Object";
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                  {
                    MR_Word Var_39 = (MR_Word) (CtorCat_10);

                    ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0(Info_5, Type_9, Var_39, String_7, ArrayDims_8);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ElementType_13 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word Var_40;

              succeeded = ((((MR_tag((MR_Word) ElementType_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ElementType_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_40 = ((MR_Word) ((MR_hl_field(3, ElementType_13, (MR_Integer) 2))));
                succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 8U));
              }
              if (succeeded)
              {
                *String_7 = (MR_String) "/* Array */ java.lang.Object";
                *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_String Var_15;
                MR_String Var_16;
                MR_String Var_17;

                succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(ElementType_13, &Var_15, &Var_16, &Var_17);
                if (succeeded)
                {
                  MR_Word ArrayDims0_18;

                  ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_5, ElementType_13, String_7, &ArrayDims0_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ArrayDims_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(1, base, 1) = ((MR_Box) (ArrayDims0_18));
                  }
                }
                else
                {
                  *String_7 = (MR_String) "java.lang.Object";
                  *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_type_scalar_common_1[2]));
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *String_7 = (MR_String) "jmercury.runtime.MethodPtr";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word IntType_19 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))) & (MR_Integer) 15);

              *String_7 = ((&ml_backend__mlds_to_java_type_vector_common_7[0 + IntType_19]))->ml_backend__mlds_to_java_type__vector_common_type_7_0__vct_7_f_0;
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ForeignType_22 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.type_to_string_and_dims_for_java\'/4", (MR_String) "c foreign_type");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, ForeignType_22, (MR_Integer) 0))));

                    *String_7 = (MR_String) (Var_44);
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.type_to_string_and_dims_for_java\'/4", (MR_String) "csharp foreign_type");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ElementType_66 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word ArrayDims0_67;

              ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_5, ElementType_66, String_7, &ArrayDims0_67);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArrayDims0_67));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArrayDims0_69;

              ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_5, (MR_Word) ((MR_Unsigned) 20U), String_7, &ArrayDims0_69);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArrayDims0_69));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PointedToType_32 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_MLDS_Type_6 = PointedToType_32;

              // direct tailcall eliminated
              ;
              MLDS_Type_6 = next_value_of_MLDS_Type_6;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RttiIdMaybeElement_36 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_37;

              backend_libs__rtti__rtti_id_maybe_element_java_type_3_p_0(RttiIdMaybeElement_36, String_7, &IsArray_37);
              switch (IsArray_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_type_scalar_common_1[2]));
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TablingId_38 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_70;

              backend_libs__rtti__tabling_id_java_type_3_p_0(TablingId_38, String_7, &IsArray_70);
              switch (IsArray_70) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_type_scalar_common_1[2]));
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_java_type__IntroducedFrom__pred__mercury_user_enum_type_to_string_and_dims_for_java__396__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_java_type__IntroducedFrom__pred__mercury_user_type_to_string_and_dims_for_java__375__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word CtorCat_8,
  MR_String * String_9,
  MR_Word * ArrayDims_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) CtorCat_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtor_44;
            MR_Word ArgsTypes_45;
            MR_Word ClassName_46;
            MR_Integer ClassArity_47;
            MR_Word MLDS_Type_48;
            MR_String TypeName_49;
            MR_Word ArrayDims_50;
            MR_Word OutputGenerics_51;
            MR_Word Var_53;
            MR_Word Var_54;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_44, &ArgsTypes_45);
            ml_backend__ml_type_gen__ml_gen_class_name_3_p_0(TypeCtor_44, &ClassName_46, &ClassArity_47);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (ClassName_46));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (ClassArity_47));
            }
            MLDS_Type_48 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_53)));
            ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_6, MLDS_Type_48, &TypeName_49, &ArrayDims_50);
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_java_type_scalar_common_6[0]));
              MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0_1));
              MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_54, 3) = ((MR_Box) (ArrayDims_50));
              MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.mlds_to_java_type.mercury_user_type_to_string_and_dims_for_java\'/3", (MR_String) "ArrayDims != []");
            OutputGenerics_51 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
            switch (OutputGenerics_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *String_9 = TypeName_49;
                break;
              case (MR_Integer) 0:
                {
                  MR_String GenericsString_52;

                  ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_45, &GenericsString_52);
                  *String_9 = mercury__string__f_43_43_2_f_0(TypeName_49, GenericsString_52);
                }
                break;
            }
            *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            *String_9 = (MR_String) "builtin.Void_0";
            *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TVar_12;
            MR_Word TypeInfo_43_43;
            MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
            MR_Word Var_19;
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 6))));

            succeeded = (Var_18 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Type_7)) == (MR_Integer) 0);
              if (succeeded)
              {
                TVar_12 = ((MR_Word) ((MR_hl_field(0, Type_7, (MR_Integer) 0))));
                Var_19 = ((MR_Word) ((MR_hl_field(0, Type_7, (MR_Integer) 1))));
                succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeInfo_43_43 = (MR_Word) (&ml_backend__mlds_to_java_type_scalar_common_1[0]);
                  succeeded = mercury__list__member_2_p_0(TypeInfo_43_43, ((MR_Box) (TVar_12)), Var_33);
                }
              }
            }
            if (succeeded)
              *String_9 = ml_backend__mlds_to_target_util__generic_tvar_to_string_1_f_0(TVar_12);
            else
              *String_9 = (MR_String) "java.lang.Object";
            *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            *String_9 = (MR_String) "/* closure */ java.lang.Object";
            *ArrayDims_10 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_type_scalar_common_1[2]));
          }
          break;
        case (MR_Integer) 4:
          {
            *String_9 = (MR_String) "/* tuple */ java.lang.Object";
            *ArrayDims_10 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_type_scalar_common_1[2]));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.mercury_type_to_string_for_java\'/5", (MR_String) "ctor_cat_builtin");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeCtor_67;
        MR_Word ArgsTypes_68;
        MR_Word EnumModule_69;
        MR_String EnumName_70;
        MR_Integer EnumArity_71;
        MR_Word EnumId_72;
        MR_Word MLDS_Type_73;
        MR_String TypeName_74;
        MR_Word ArrayDims_75;
        MR_Word OutputGenerics_76;
        MR_Word Var_78;

        parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_67, &ArgsTypes_68);
        ml_backend__ml_type_gen__ml_gen_type_name_4_p_0(TypeCtor_67, &EnumModule_69, &EnumName_70, &EnumArity_71);
        {
          EnumId_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, EnumId_72, 0) = ((MR_Box) (EnumModule_69));
          MR_hl_field(0, EnumId_72, 1) = ((MR_Box) (EnumName_70));
          MR_hl_field(0, EnumId_72, 2) = ((MR_Box) (EnumArity_71));
        }
        MLDS_Type_73 = (MR_Word) (MR_mkword(2, (MR_Word) (EnumId_72)));
        ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_6, MLDS_Type_73, &TypeName_74, &ArrayDims_75);
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_78, 0) = ((MR_Box) (&ml_backend__mlds_to_java_type_scalar_common_6[0]));
          MR_hl_field(0, Var_78, 1) = ((MR_Box) (ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0_2));
          MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_78, 3) = ((MR_Box) (ArrayDims_75));
          MR_hl_field(0, Var_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_78, (MR_String) "predicate \140ml_backend.mlds_to_java_type.mercury_user_enum_type_to_string_and_dims_for_java\'/3", (MR_String) "ArrayDims != []");
        OutputGenerics_76 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
        switch (OutputGenerics_76) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *String_9 = TypeName_74;
            break;
          case (MR_Integer) 0:
            {
              MR_String GenericsString_77;

              ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_68, &GenericsString_77);
              *String_9 = mercury__string__f_43_43_2_f_0(TypeName_74, GenericsString_77);
            }
            break;
        }
        *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word TypeCtor_44;
        MR_Word ArgsTypes_45;
        MR_Word ClassName_46;
        MR_Integer ClassArity_47;
        MR_Word MLDS_Type_48;
        MR_String TypeName_49;
        MR_Word ArrayDims_50;
        MR_Word OutputGenerics_51;
        MR_Word Var_53;
        MR_Word Var_54;

        parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_44, &ArgsTypes_45);
        ml_backend__ml_type_gen__ml_gen_class_name_3_p_0(TypeCtor_44, &ClassName_46, &ClassArity_47);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_53, 0) = ((MR_Box) (ClassName_46));
          MR_hl_field(0, Var_53, 1) = ((MR_Box) (ClassArity_47));
        }
        MLDS_Type_48 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_53)));
        ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_6, MLDS_Type_48, &TypeName_49, &ArrayDims_50);
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_java_type_scalar_common_6[0]));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0_1));
          MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_54, 3) = ((MR_Box) (ArrayDims_50));
          MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.mlds_to_java_type.mercury_user_type_to_string_and_dims_for_java\'/3", (MR_String) "ArrayDims != []");
        OutputGenerics_51 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
        switch (OutputGenerics_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *String_9 = TypeName_49;
            break;
          case (MR_Integer) 0:
            {
              MR_String GenericsString_52;

              ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_45, &GenericsString_52);
              *String_9 = mercury__string__f_43_43_2_f_0(TypeName_49, GenericsString_52);
            }
            break;
        }
        *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_17;

  ml_backend__mlds_to_java_type__IntroducedFrom__pred__generic_args_types_to_string_for_java__416__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
}

static void MR_CALL 
ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word ArgsTypes_5,
  MR_String * String_6)
{
  if ((ArgsTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *String_6 = (MR_String) "";
  else
  {
    MR_Word ToString_9;
    MR_Word ArgsTypesStrings_14;
    MR_String ArgsTypesString_15;
    MR_String Var_20;

    {
      ToString_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ToString_9, 0) = ((MR_Box) (&ml_backend__mlds_to_java_type_scalar_common_5[0]));
      MR_hl_field(0, ToString_9, 1) = ((MR_Box) (ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0_1));
      MR_hl_field(0, ToString_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ToString_9, 3) = ((MR_Box) (Info_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToString_9, ArgsTypes_5, &ArgsTypesStrings_14);
    ArgsTypesString_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsTypesStrings_14);
    Var_20 = mercury__string__f_43_43_2_f_0(ArgsTypesString_15, (MR_String) ">");
    *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_20);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_type__hand_defined_type_for_java_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
  {
    MR_Word CtorCatSystem_9 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 1))) & (MR_Integer) 3);

    *SubstituteName_7 = ((&ml_backend__mlds_to_java_type_vector_common_4[0 + CtorCatSystem_9]))->ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_0;
    *ArrayDims_8 = ((&ml_backend__mlds_to_java_type_vector_common_4[0 + CtorCatSystem_9]))->ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_1;
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
  {
    MR_Word CtorCatUser_10 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word Var_16;

    succeeded = (CtorCatUser_10 == (MR_Integer) 4);
    if (succeeded)
    {
      Var_16 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_16);
      if (succeeded)
      {
        *SubstituteName_7 = (MR_String) "jmercury.runtime.TypeInfo_Struct";
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_17;

        Var_17 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_17);
        if (succeeded)
        {
          *SubstituteName_7 = (MR_String) "jmercury.runtime.PseudoTypeInfo";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_18;

          Var_18 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_18);
          if (succeeded)
          {
            *SubstituteName_7 = (MR_String) "jmercury.runtime.TypeCtorInfo_Struct";
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(
  MR_Word MLDS_Type_5,
  MR_String * JavaUnboxedType_6,
  MR_String * JavaBoxedType_7,
  MR_String * UnboxMethod_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) MLDS_Type_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_5)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *JavaUnboxedType_6 = (MR_String) "double";
            *JavaBoxedType_7 = (MR_String) "java.lang.Double";
            *UnboxMethod_8 = (MR_String) "doubleValue";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            *JavaUnboxedType_6 = (MR_String) "int";
            *JavaBoxedType_7 = (MR_String) "java.lang.Integer";
            *UnboxMethod_8 = (MR_String) "intValue";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            *JavaUnboxedType_6 = (MR_String) "boolean";
            *JavaBoxedType_7 = (MR_String) "java.lang.Boolean";
            *UnboxMethod_8 = (MR_String) "booleanValue";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java_type.m", (MR_String) "predicate \140ml_backend.mlds_to_java_type.java_builtin_type\'/4", (MR_String) "unknown typed");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            MR_Word MerType_10 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))));
            MR_Word TypeCtorCat_11 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 2))));

            if (((MR_tag((MR_Word) MerType_10)) == (MR_Integer) 2))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.java_builtin_type\'/4", (MR_String) "mercury_nb_type but builtin_type");
              succeeded = MR_TRUE;
            }
            else
            if (((MR_tag((MR_Word) MerType_10)) == (MR_Integer) 1))
            {
              succeeded = (TypeCtorCat_11 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                *JavaUnboxedType_6 = (MR_String) "int";
                *JavaBoxedType_7 = (MR_String) "java.lang.Integer";
                *UnboxMethod_8 = (MR_String) "intValue";
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_9 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))) & (MR_Integer) 15);

            *JavaUnboxedType_6 = ((&ml_backend__mlds_to_java_type_vector_common_3[0 + IntType_9]))->ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_0;
            *JavaBoxedType_7 = ((&ml_backend__mlds_to_java_type_vector_common_3[0 + IntType_9]))->ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_1;
            *UnboxMethod_8 = ((&ml_backend__mlds_to_java_type_vector_common_3[0 + IntType_9]))->ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_2;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ForeignLangType_32 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))));
            MR_String _DefaultValue_33;

            succeeded = ml_backend__mlds_to_java_type__java_primitive_foreign_language_type_5_p_0(ForeignLangType_32, JavaUnboxedType_6, JavaBoxedType_7, UnboxMethod_8, &_DefaultValue_33);
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_type__java_primitive_foreign_language_type_5_p_0(
  MR_Word ForeignLangType_6,
  MR_String * PrimitiveType_7,
  MR_String * BoxedType_8,
  MR_String * UnboxMethod_9,
  MR_String * DefaultValue_10)
{
  MR_bool succeeded;
  MR_String JavaForeignType_11;
  MR_Integer slot_0;
  MR_String str_1;

  switch (MR_tag((MR_Word) ForeignLangType_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java_type.m", (MR_String) "predicate \140ml_backend.mlds_to_java_type.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C");
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, ForeignLangType_6, (MR_Integer) 0))));

        JavaForeignType_11 = (MR_String) (Var_14);
      }
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java_type.m", (MR_String) "predicate \140ml_backend.mlds_to_java_type.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C#");
      break;
  }
  *PrimitiveType_7 = mercury__string__strip_1_f_0(JavaForeignType_11);
  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  slot_0 = ((MR_hash_string5(*PrimitiveType_7)) & (MR_Integer) 15);
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  str_1 = ((&ml_backend__mlds_to_java_type_vector_common_2[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_0;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, *PrimitiveType_7) == 0))))
  {
    // we found a match; look up the results
    ;
    *BoxedType_8 = ((&ml_backend__mlds_to_java_type_vector_common_2[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_1;
    *UnboxMethod_9 = ((&ml_backend__mlds_to_java_type_vector_common_2[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_2;
    *DefaultValue_10 = ((&ml_backend__mlds_to_java_type_vector_common_2[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_3;
    succeeded = MR_TRUE;
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

void mercury__ml_backend__mlds_to_java_type__init(void)
{
}

void mercury__ml_backend__mlds_to_java_type__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_type__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_type.
