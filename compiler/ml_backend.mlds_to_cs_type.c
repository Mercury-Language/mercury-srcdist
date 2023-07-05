/*
** Automatically generated from `mlds_to_cs_type.m'
** by the Mercury compiler,
** version rotd-2023-07-05
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


// :- module ml_backend.mlds_to_cs_type.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_type__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_type.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
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
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static void MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__511__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__mercury_user_enum_type_to_string_and_dims_for_csharp__490__1_2_p_0(
  MR_Word ArrayDims_14,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__mercury_user_type_to_string_and_dims_for_csharp__468__1_2_p_0(
  MR_Word ArrayDims_16,
  MR_Word HeadVar__2_22);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__func__type_to_string_and_dims_for_csharp__240__1_1_f_0(
  MR_Word LambdaHeadVar__1_49);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * TypeNameWithGenerics_6);

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Type_6,
  MR_Word ClassKind_7,
  MR_String * TypeNameWithGenerics_8);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_3[2][6];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_6[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_7[1][3];


struct ml_backend__mlds_to_cs_type__vector_common_type_4_0_s {
  const MR_String ml_backend__mlds_to_cs_type__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_4_0_s ml_backend__mlds_to_cs_type_vector_common_4[10];

struct ml_backend__mlds_to_cs_type__vector_common_type_5_0_s {
  const MR_String ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_0;
  const MR_Word ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_5_0_s ml_backend__mlds_to_cs_type_vector_common_5[4];



static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_cs_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_7[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_4_0_s ml_backend__mlds_to_cs_type_vector_common_4[10] = {
  /* row   0 */   { (MR_String) "int" },
  /* row   1 */   { (MR_String) "uint" },
  /* row   2 */   { (MR_String) "sbyte" },
  /* row   3 */   { (MR_String) "byte" },
  /* row   4 */   { (MR_String) "short" },
  /* row   5 */   { (MR_String) "ushort" },
  /* row   6 */   { (MR_String) "int" },
  /* row   7 */   { (MR_String) "uint" },
  /* row   8 */   { (MR_String) "long" },
  /* row   9 */   { (MR_String) "ulong" },
};

static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_5_0_s ml_backend__mlds_to_cs_type_vector_common_5[4] = {
  /* row   0 */
  {
    (MR_String) "runtime.TypeInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_String) "runtime.TypeCtorInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    (MR_String) "/* typeclass_info */ object",
    (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_type_scalar_common_1[1]))
  },
  /* row   3 */
  {
    (MR_String) "/* base_typeclass_info */ object",
    (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_type_scalar_common_1[1]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_type__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static void MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__511__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17)
{
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
  MR_Word MLDS_ArgType_13;
  MR_String BaseTypeName_33;
  MR_Word ArrayDims_34;

  MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, LambdaHeadVar__1_16);
  ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_4, MLDS_ArgType_13, &BaseTypeName_33, &ArrayDims_34);
  if ((ArrayDims_34 == (MR_Word) ((MR_Unsigned) 0U)))
    *LambdaHeadVar__2_17 = BaseTypeName_33;
  else
  {
    MR_String Var_37;

    Var_37 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(ArrayDims_34);
    *LambdaHeadVar__2_17 = mercury__string__f_43_43_2_f_0(BaseTypeName_33, Var_37);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__mercury_user_enum_type_to_string_and_dims_for_csharp__490__1_2_p_0(
  MR_Word ArrayDims_14,
  MR_Word HeadVar__2_20)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_1[0]), ((MR_Box) (ArrayDims_14)), ((MR_Box) (HeadVar__2_20)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__mercury_user_type_to_string_and_dims_for_csharp__468__1_2_p_0(
  MR_Word ArrayDims_16,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_1[0]), ((MR_Box) (ArrayDims_16)), ((MR_Box) (HeadVar__2_22)));
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__func__type_to_string_and_dims_for_csharp__240__1_1_f_0(
  MR_Word LambdaHeadVar__1_49)
{
  MR_Word LambdaHeadVar__2_50 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_49, (MR_Integer) 1))));

  return LambdaHeadVar__2_50;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(
  MR_Word Info_4,
  MR_Word MLDS_Type_5)
{
  MR_String FullTypeName_6;
  MR_String BaseTypeName_7;
  MR_Word ArrayDims_8;

  ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_4, MLDS_Type_5, &BaseTypeName_7, &ArrayDims_8);
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
ml_backend__mlds_to_cs_type__output_type_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word MLDS_Type_9,
  MR_Word * ArrayDims_10)
{
  MR_String BaseTypeName_12;

  ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_7, MLDS_Type_9, &BaseTypeName_12, ArrayDims_10);
  mercury__io__write_string_4_p_0(Stream_8, BaseTypeName_12);
  if (!((*ArrayDims_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_18;

    Var_18 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(*ArrayDims_10);
    mercury__io__write_string_4_p_0(Stream_8, Var_18);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word MLDS_Type_8)
{
  MR_Word _ArrayDims_10;
  MR_String BaseTypeName_13;

  ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_6, MLDS_Type_8, &BaseTypeName_13, &_ArrayDims_10);
  mercury__io__write_string_4_p_0(Stream_7, BaseTypeName_13);
  if (!((_ArrayDims_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_17;

    Var_17 = ml_backend__mlds_to_target_util__array_dimensions_to_string_1_f_0(_ArrayDims_10);
    mercury__io__write_string_4_p_0(Stream_7, Var_17);
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_50;

  conv0_LambdaHeadVar__2_50 = ml_backend__mlds_to_cs_type__IntroducedFrom__func__type_to_string_and_dims_for_csharp__240__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_50));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(
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
              *String_7 = (MR_String) "runtime.Commit";
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
              *String_7 = (MR_String) "string";
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
              *String_7 = (MR_String) "bool";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              *String_7 = (MR_String) "/* generic_type */ object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              *String_7 = (MR_String) "/* env_ptr */ object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 7:
            {
              *String_7 = (MR_String) "runtime.TypeInfo";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 8:
            {
              *String_7 = (MR_String) "runtime.PseudoTypeInfo";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.type_to_string_and_dims_for_csharp\'/4", (MR_String) "unknown type");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassId_21 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
          MR_Word Name_22 = ((MR_Word) ((MR_hl_field(0, ClassId_21, (MR_Integer) 0))));
          MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(0, ClassId_21, (MR_Integer) 1))));

          *String_7 = ml_backend__mlds_to_cs_name__qual_class_name_to_nll_string_for_csharp_2_f_0(Name_22, Arity_23);
          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EnumClassId_25 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));
          MR_Word Name_57 = ((MR_Word) ((MR_hl_field(0, EnumClassId_25, (MR_Integer) 0))));
          MR_Integer Arity_58 = ((MR_Integer) ((MR_hl_field(0, EnumClassId_25, (MR_Integer) 1))));

          *String_7 = ml_backend__mlds_to_cs_name__qual_class_name_to_nll_string_for_csharp_2_f_0(Name_57, Arity_58);
          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_27;
              MR_Word RetTypes_28;
              MR_Word ArgTypes_29;
              MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));

              Args_27 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
              RetTypes_28 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 1))));
              ArgTypes_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_7[0]), Args_27);
              *String_7 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_5, ArgTypes_29, RetTypes_28);
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Type_9 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word CtorCat_10 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 2))));
              MR_String StringPrime_11;
              MR_Word ArrayDimsPrime_12;

              succeeded = ml_backend__mlds_to_cs_type__hand_defined_type_for_csharp_4_p_0(Type_9, CtorCat_10, &StringPrime_11, &ArrayDimsPrime_12);
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
                  *String_7 = (MR_String) "/* builtin_dummy */ object";
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_72;

                  Var_72 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_72);
                  if (succeeded)
                  {
                    *String_7 = (MR_String) "/* c_pointer */ object";
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                    switch (MR_tag((MR_Word) CtorCat_10)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(CtorCat_10)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0(Info_5, Type_9, (MR_Integer) 0, String_7);
                              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              *String_7 = (MR_String) "builtin.Void_0";
                              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              *String_7 = (MR_String) "object";
                              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              *String_7 = (MR_String) "/* closure */ object";
                              *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_type_scalar_common_1[1]));
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              *String_7 = (MR_String) "/* tuple */ object";
                              *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_type_scalar_common_1[1]));
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BuiltinCat_74 = ((MR_Word) ((MR_hl_field(1, CtorCat_10, (MR_Integer) 0))));

                          switch (MR_tag((MR_Word) BuiltinCat_74)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(BuiltinCat_74)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  *String_7 = (MR_String) "double";
                                  break;
                                case (MR_Integer) 1:
                                  *String_7 = (MR_String) "int";
                                  break;
                                case (MR_Integer) 2:
                                  *String_7 = (MR_String) "string";
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word IntType_75 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinCat_74, (MR_Integer) 0))) & (MR_Integer) 15);

                                *String_7 = ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(IntType_75);
                              }
                              break;
                          }
                          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0(Info_5, Type_9, String_7);
                          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0(Info_5, Type_9, (MR_Integer) 0, String_7);
                          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                    }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ElementType_13 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word Var_36;

              succeeded = ((((MR_tag((MR_Word) ElementType_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ElementType_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(3, ElementType_13, (MR_Integer) 2))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 8U));
              }
              if (succeeded)
              {
                *String_7 = (MR_String) "System.Array";
                *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_String Var_15;

                succeeded = ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(ElementType_13, &Var_15);
                if (succeeded)
                {
                  MR_Word ArrayDims0_16;

                  ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_5, ElementType_13, String_7, &ArrayDims0_16);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ArrayDims_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(1, base, 1) = ((MR_Box) (ArrayDims0_16));
                  }
                }
                else
                {
                  *String_7 = (MR_String) "object";
                  *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_type_scalar_common_1[1]));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *String_7 = (MR_String) "/* cont_type */ object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word IntType_17 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))) & (MR_Integer) 15);

              *String_7 = ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(IntType_17);
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ForeignType_18 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.type_to_string_and_dims_for_csharp\'/4", (MR_String) "c foreign_type");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.type_to_string_and_dims_for_csharp\'/4", (MR_String) "java foreign_type");
                    return;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(2, ForeignType_18, (MR_Integer) 0))));

                    *String_7 = (MR_String) (Var_40);
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Type_60 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word ArrayDims0_61;

              ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_5, Type_60, String_7, &ArrayDims0_61);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArrayDims0_61));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArrayDims0_63;

              ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_5, (MR_Word) ((MR_Unsigned) 20U), String_7, &ArrayDims0_63);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArrayDims0_63));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Type_59 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_MLDS_Type_6 = Type_59;

              // direct tailcall eliminated
              ;
              MLDS_Type_6 = next_value_of_MLDS_Type_6;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RttiIdMaybeElement_33 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_34;

              backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(RttiIdMaybeElement_33, String_7, &IsArray_34);
              switch (IsArray_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_type_scalar_common_1[1]));
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word TablingId_35 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_69;

              backend_libs__rtti__tabling_id_java_type_3_p_0(TablingId_35, String_7, &IsArray_69);
              switch (IsArray_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_type_scalar_common_1[1]));
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

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_17;

  ml_backend__mlds_to_cs_type__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__511__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_type__IntroducedFrom__pred__mercury_user_enum_type_to_string_and_dims_for_csharp__490__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * TypeNameWithGenerics_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;
  MR_Word ArgsTypes_8;
  MR_Word ClassName_9;
  MR_Integer ClassArity_10;
  MR_Word ClassId_11;
  MR_Word MLDS_Type_12;
  MR_String TypeName_13;
  MR_Word ArrayDims_14;
  MR_Word OutputGenerics_15;
  MR_Word Var_17;

  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_5, &TypeCtor_7, &ArgsTypes_8);
  ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_7, &ClassName_9, &ClassArity_10);
  {
    ClassId_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_11, 0) = ((MR_Box) (ClassName_9));
    MR_hl_field(0, ClassId_11, 1) = ((MR_Box) (ClassArity_10));
  }
  MLDS_Type_12 = (MR_Word) (MR_mkword(2, (MR_Word) (ClassId_11)));
  ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_4, MLDS_Type_12, &TypeName_13, &ArrayDims_14);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_6[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ArrayDims_14));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140ml_backend.mlds_to_cs_type.mercury_user_enum_type_to_string_and_dims_for_csharp\'/3", (MR_String) "ArrayDims != []");
  OutputGenerics_15 = ((((MR_Unsigned) ((MR_hl_field(0, Info_4, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *TypeNameWithGenerics_6 = TypeName_13;
      break;
    case (MR_Integer) 0:
      {
        MR_String GenericsString_16;

        if ((ArgsTypes_8 == (MR_Word) ((MR_Unsigned) 0U)))
          GenericsString_16 = (MR_String) "";
        else
        {
          MR_Word ToStr_30;
          MR_Word ArgsTypesStrs_31;
          MR_String ArgsTypesStr_32;
          MR_String Var_35;

          {
            ToStr_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ToStr_30, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_3[1]));
            MR_hl_field(0, ToStr_30, 1) = ((MR_Box) (ml_backend__mlds_to_cs_type__mercury_user_enum_type_to_string_and_dims_for_csharp_3_p_0_2));
            MR_hl_field(0, ToStr_30, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, ToStr_30, 3) = ((MR_Box) (Info_4));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToStr_30, ArgsTypes_8, &ArgsTypesStrs_31);
          ArgsTypesStr_32 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsTypesStrs_31);
          Var_35 = mercury__string__f_43_43_2_f_0(ArgsTypesStr_32, (MR_String) ">");
          GenericsString_16 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_35);
        }
        *TypeNameWithGenerics_6 = mercury__string__f_43_43_2_f_0(TypeName_13, GenericsString_16);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_17;

  ml_backend__mlds_to_cs_type__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__511__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_type__IntroducedFrom__pred__mercury_user_type_to_string_and_dims_for_csharp__468__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word Type_6,
  MR_Word ClassKind_7,
  MR_String * TypeNameWithGenerics_8)
{
  MR_bool succeeded;
  MR_Word TypeCtor_9;
  MR_Word ArgsTypes_10;
  MR_Word ClassName_11;
  MR_Integer ClassArity_12;
  MR_Word ClassId_13;
  MR_Word MLDS_Type_14;
  MR_String TypeName_15;
  MR_Word ArrayDims_16;
  MR_Word OutputGenerics_17;
  MR_Word Var_19;

  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_6, &TypeCtor_9, &ArgsTypes_10);
  ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_9, &ClassName_11, &ClassArity_12);
  {
    ClassId_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_13, 0) = ((MR_Box) (ClassName_11));
    MR_hl_field(0, ClassId_13, 1) = ((MR_Box) (ClassArity_12));
    MR_hl_field(0, ClassId_13, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_7));
  }
  MLDS_Type_14 = (MR_Word) (MR_mkword(1, (MR_Word) (ClassId_13)));
  ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_5, MLDS_Type_14, &TypeName_15, &ArrayDims_16);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_6[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (ArrayDims_16));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.mlds_to_cs_type.mercury_user_type_to_string_and_dims_for_csharp\'/4", (MR_String) "ArrayDims != []");
  OutputGenerics_17 = ((((MR_Unsigned) ((MR_hl_field(0, Info_5, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *TypeNameWithGenerics_8 = TypeName_15;
      break;
    case (MR_Integer) 0:
      {
        MR_String GenericsString_18;

        if ((ArgsTypes_10 == (MR_Word) ((MR_Unsigned) 0U)))
          GenericsString_18 = (MR_String) "";
        else
        {
          MR_Word ToStr_32;
          MR_Word ArgsTypesStrs_33;
          MR_String ArgsTypesStr_34;
          MR_String Var_37;

          {
            ToStr_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ToStr_32, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_3[1]));
            MR_hl_field(0, ToStr_32, 1) = ((MR_Box) (ml_backend__mlds_to_cs_type__mercury_user_type_to_string_and_dims_for_csharp_4_p_0_2));
            MR_hl_field(0, ToStr_32, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, ToStr_32, 3) = ((MR_Box) (Info_5));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToStr_32, ArgsTypes_10, &ArgsTypesStrs_33);
          ArgsTypesStr_34 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsTypesStrs_33);
          Var_37 = mercury__string__f_43_43_2_f_0(ArgsTypesStr_34, (MR_String) ">");
          GenericsString_18 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_37);
        }
        *TypeNameWithGenerics_8 = mercury__string__f_43_43_2_f_0(TypeName_15, GenericsString_18);
      }
      break;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__hand_defined_type_for_csharp_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
  {
    MR_Word CtorCatSystem_9 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 1))) & (MR_Integer) 3);

    *SubstituteName_7 = ((&ml_backend__mlds_to_cs_type_vector_common_5[0 + CtorCatSystem_9]))->ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_0;
    *ArrayDims_8 = ((&ml_backend__mlds_to_cs_type_vector_common_5[0 + CtorCatSystem_9]))->ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_1;
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
  {
    MR_Word CtorCatUser_10 = ((MR_Unsigned) ((MR_hl_field(3, CtorCat_6, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word Var_17;

    succeeded = (CtorCatUser_10 == (MR_Integer) 4);
    if (succeeded)
    {
      Var_17 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_17);
      if (succeeded)
      {
        *SubstituteName_7 = (MR_String) "runtime.TypeInfo_Struct";
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_18;

        Var_18 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_18);
        if (succeeded)
        {
          *SubstituteName_7 = (MR_String) "runtime.PseudoTypeInfo";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_19;

          Var_19 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_19);
          if (succeeded)
          {
            *SubstituteName_7 = (MR_String) "runtime.TypeCtorInfo_Struct";
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
ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(
  MR_Word Type_3,
  MR_String * TargetType_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *TargetType_4 = (MR_String) "double";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            *TargetType_4 = (MR_String) "int";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            *TargetType_4 = (MR_String) "bool";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_3_p_0((MR_String) "mlds_to_cs_type.m", (MR_String) "predicate \140ml_backend.mlds_to_cs_type.csharp_builtin_type\'/2", (MR_String) "unknown typed");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_3, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word MerType_6 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 1))));
            MR_Word TypeCtorCat_7 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 2))));

            if (((MR_tag((MR_Word) MerType_6)) == (MR_Integer) 2))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.csharp_builtin_type\'/2", (MR_String) "mercury_nb_type but builtin_type");
              succeeded = MR_TRUE;
            }
            else
            if (((MR_tag((MR_Word) MerType_6)) == (MR_Integer) 1))
            {
              succeeded = (TypeCtorCat_7 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                *TargetType_4 = (MR_String) "int";
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word IntType_5 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, (MR_Integer) 1))) & (MR_Integer) 15);

            *TargetType_4 = ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(IntType_5);
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&ml_backend__mlds_to_cs_type_vector_common_4[0 + HeadVar__1_1]))->ml_backend__mlds_to_cs_type__vector_common_type_4_0__vct_4_f_0;

  return HeadVar__2_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_FullTypeName_6;

  conv0_FullTypeName_6 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_FullTypeName_6));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(
  MR_Word Info_5,
  MR_Word ArgTypes_6,
  MR_Word RetTypes_7)
{
  MR_String Str_8;
  MR_Integer Arity_9;
  MR_Integer NumRets_10;
  MR_Word ArgTypesStrs_11;
  MR_Word RetTypesStrs_12;
  MR_String TypesStr_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_String Var_33;
  MR_String Var_35;
  MR_String Var_36;
  MR_String Var_43;
  MR_String Var_45;
  MR_String Var_46;
  MR_String Var_53;

  Arity_9 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), ArgTypes_6);
  NumRets_10 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetTypes_7);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_3[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Info_5));
  }
  ArgTypesStrs_11 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, ArgTypes_6);
  RetTypesStrs_12 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, RetTypes_7);
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgTypesStrs_11, RetTypesStrs_12);
  TypesStr_13 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_17);
  Var_33 = mercury__string__f_43_43_2_f_0(TypesStr_13, (MR_String) ">");
  Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_33);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_2[0]), NumRets_10, &Var_36);
  Var_43 = mercury__string__f_43_43_2_f_0(Var_36, Var_35);
  Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_r", Var_43);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_2[0]), Arity_9, &Var_46);
  Var_53 = mercury__string__f_43_43_2_f_0(Var_46, Var_45);
  Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.MethodPtr", Var_53);
  return Str_8;
}

void mercury__ml_backend__mlds_to_cs_type__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_type__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_type__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_type.
