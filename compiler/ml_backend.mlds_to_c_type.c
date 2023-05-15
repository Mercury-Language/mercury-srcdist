/*
** Automatically generated from `mlds_to_c_type.m'
** by the Mercury compiler,
** version rotd-2023-05-15
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


// :- module ml_backend.mlds_to_c_type.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_type__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_type.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_VA_TypeInfo_Struct4 ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__param_type_to_string_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4);

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(
  MR_Word Rval0_4,
  MR_Word * Rval_5,
  MR_Word * Changed_6);

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(
  MR_Word Type0_4,
  MR_Word * Type_5,
  MR_Word * Changed_6);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_for_c_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Params_5);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__param_types_to_c_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__param_types_to_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Args_5);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____type_prefix_suffix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____type_prefix_suffix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[3][6];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[1][1];


struct ml_backend__mlds_to_c_type__vector_common_type_3_0_s {
  const MR_String ml_backend__mlds_to_c_type__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ml_backend__mlds_to_c_type__vector_common_type_3_0_s ml_backend__mlds_to_c_type_vector_common_3[10];



static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[3][6] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};


static /* final */ const struct ml_backend__mlds_to_c_type__vector_common_type_3_0_s ml_backend__mlds_to_c_type_vector_common_3[10] = {
  /* row   0 */   { (MR_String) "MR_Integer" },
  /* row   1 */   { (MR_String) "MR_Unsigned" },
  /* row   2 */   { (MR_String) "int8_t" },
  /* row   3 */   { (MR_String) "uint8_t" },
  /* row   4 */   { (MR_String) "int16_t" },
  /* row   5 */   { (MR_String) "uint16_t" },
  /* row   6 */   { (MR_String) "int32_t" },
  /* row   7 */   { (MR_String) "uint32_t" },
  /* row   8 */   { (MR_String) "int64_t" },
  /* row   9 */   { (MR_String) "uint64_t" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_VA_TypeInfo_Struct4 ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__type_ctor_info_type_prefix_suffix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_c_type____Unify____type_prefix_suffix_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_type____Compare____type_prefix_suffix_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_type",
  (MR_String) "type_prefix_suffix",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
ml_backend__mlds_to_c_type____Compare____type_prefix_suffix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____type_prefix_suffix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__param_type_to_string_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5)
{
  MR_String TypeStr_6;
  MR_Word Type_8 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 1))));
  MR_String TypePrefix_10;
  MR_String TypeSuffix_11;

  TypePrefix_10 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_4, Type_8);
  TypeSuffix_11 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_4, Type_8, (MR_Word) ((MR_Unsigned) 0U));
  TypeStr_6 = mercury__string__f_43_43_2_f_0(TypePrefix_10, TypeSuffix_11);
  return TypeStr_6;
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Type_8)
{
  MR_String CastStr_10;

  CastStr_10 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, Type_8);
  mercury__io__write_string_4_p_0(Stream_7, CastStr_10);
}

MR_String MR_CALL 
ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Type_5)
{
  MR_String CastStr_6;
  MR_String TypeStr_7;
  MR_String Var_13;
  MR_String TypePrefix_15;
  MR_String TypeSuffix_16;

  TypePrefix_15 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_4, Type_5);
  TypeSuffix_16 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_4, Type_5, (MR_Word) ((MR_Unsigned) 0U));
  TypeStr_7 = mercury__string__f_43_43_2_f_0(TypePrefix_15, TypeSuffix_16);
  Var_13 = mercury__string__f_43_43_2_f_0(TypeStr_7, (MR_String) ") ");
  CastStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_13);
  return CastStr_6;
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Stream_6,
  MR_Word OutputPred_7,
  MR_Word List_8)
{
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n#error multiple return values\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t{");
  parse_tree__parse_tree_out_info__write_out_list_6_p_0(TypeInfo_for_T_19, OutputPred_7, (MR_String) ", ", List_8, Stream_6);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}");
}

MR_String MR_CALL 
ml_backend__mlds_to_c_type__return_list_to_string_for_c_1_f_0(
  MR_Word ReturnTypeStrs_3)
{
  MR_String ListStr_4;
  MR_String ReturnTypesStr_5;
  MR_String Var_12;

  ReturnTypesStr_5 = mercury__string__join_list_2_f_0((MR_String) ", ", ReturnTypeStrs_3);
  Var_12 = mercury__string__f_43_43_2_f_0(ReturnTypesStr_5, (MR_String) "}");
  ListStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "\n#error multiple return values\n\t{", Var_12);
  return ListStr_4;
}

MR_Word MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializer_for_c_1_f_0(
  MR_Word Init0_3)
{
  MR_Word Init_4;

  switch (MR_tag((MR_Word) Init0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Init_4 = Init0_3;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval0_6 = ((MR_Word) ((MR_hl_field(1, Init0_3, (MR_Integer) 0))));
        MR_Word Rval_7;
        MR_Word Var_15;

        ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(Rval0_6, &Rval_7, &Var_15);
        switch (Var_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              Init_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Init_4, 0) = ((MR_Box) (Rval_7));
            }
            break;
          case (MR_Integer) 0:
            Init_4 = Init0_3;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StructType_8 = ((MR_Word) ((MR_hl_field(2, Init0_3, (MR_Integer) 0))));
        MR_Word Inits0_9 = ((MR_Word) ((MR_hl_field(2, Init0_3, (MR_Integer) 1))));
        MR_Word Inits_10;
        MR_Word Var_16;

        ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_9, &Inits_10, (MR_Integer) 0, &Var_16);
        switch (Var_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              Init_4 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Init_4, 0) = ((MR_Box) (StructType_8));
              MR_hl_field(2, Init_4, 1) = ((MR_Box) (Inits_10));
            }
            break;
          case (MR_Integer) 0:
            Init_4 = Init0_3;
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_5;
        MR_Word Inits0_13 = ((MR_Word) ((MR_hl_field(3, Init0_3, (MR_Integer) 0))));
        MR_Word Inits_14;

        ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_13, &Inits_14, (MR_Integer) 0, &Var_5);
        switch (Var_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              Init_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Init_4, 0) = ((MR_Box) (Inits_14));
            }
            break;
          case (MR_Integer) 0:
            Init_4 = Init0_3;
            break;
        }
      }
      break;
  }
  return Init_4;
}

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Changed_0_3,
  MR_Word * STATE_VARIABLE_Changed_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Changed_4 = STATE_VARIABLE_Changed_0_3;
  }
  else
  {
    MR_Word Init0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Inits0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Init_10;
    MR_Word Inits_11;
    MR_Word STATE_VARIABLE_Changed_16_16;

    switch (MR_tag((MR_Word) Init0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Init_10 = Init0_8;
          STATE_VARIABLE_Changed_16_16 = STATE_VARIABLE_Changed_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval0_17 = ((MR_Word) ((MR_hl_field(1, Init0_8, (MR_Integer) 0))));
          MR_Word Rval_18;
          MR_Word InitChanged_26;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(Rval0_17, &Rval_18, &InitChanged_26);
          switch (InitChanged_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  Init_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Init_10, 0) = ((MR_Box) (Rval_18));
                }
                STATE_VARIABLE_Changed_16_16 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                Init_10 = Init0_8;
                STATE_VARIABLE_Changed_16_16 = STATE_VARIABLE_Changed_0_3;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_19 = ((MR_Word) ((MR_hl_field(2, Init0_8, (MR_Integer) 0))));
          MR_Word Inits0_20 = ((MR_Word) ((MR_hl_field(2, Init0_8, (MR_Integer) 1))));
          MR_Word Inits_21;
          MR_Word InitChanged_27;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_20, &Inits_21, (MR_Integer) 0, &InitChanged_27);
          switch (InitChanged_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  Init_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Init_10, 0) = ((MR_Box) (StructType_19));
                  MR_hl_field(2, Init_10, 1) = ((MR_Box) (Inits_21));
                }
                STATE_VARIABLE_Changed_16_16 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                Init_10 = Init0_8;
                STATE_VARIABLE_Changed_16_16 = STATE_VARIABLE_Changed_0_3;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word InitChanged_13;
          MR_Word Inits0_24 = ((MR_Word) ((MR_hl_field(3, Init0_8, (MR_Integer) 0))));
          MR_Word Inits_25;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_24, &Inits_25, (MR_Integer) 0, &InitChanged_13);
          switch (InitChanged_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  Init_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Init_10, 0) = ((MR_Box) (Inits_25));
                }
                STATE_VARIABLE_Changed_16_16 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 0:
              {
                Init_10 = Init0_8;
                STATE_VARIABLE_Changed_16_16 = STATE_VARIABLE_Changed_0_3;
              }
              break;
          }
        }
        break;
    }
    ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_9, &Inits_11, STATE_VARIABLE_Changed_16_16, STATE_VARIABLE_Changed_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Init_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Inits_11));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(
  MR_Word Rval0_4,
  MR_Word * Rval_5,
  MR_Word * Changed_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Rval0_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Rval_5 = Rval0_4;
        *Changed_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        *Rval_5 = Rval0_4;
        *Changed_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Tag_23 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalA0_35 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 2))));
            MR_Word SubRvalA_36;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalA0_35, &SubRvalA_36, Changed_6);
            switch (*Changed_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_5 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Tag_23));
                  MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_36));
                }
                break;
              case (MR_Integer) 0:
                *Rval_5 = Rval0_4;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          {
            *Rval_5 = Rval0_4;
            *Changed_6 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type0_17 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalA0_18 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 2))));
            MR_Word Type_19;
            MR_Word ChangedT_20;
            MR_Word SubRvalA_21;
            MR_Word ChangedA_22;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(Type0_17, &Type_19, &ChangedT_20);
            ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalA0_18, &SubRvalA_21, &ChangedA_22);
            succeeded = (ChangedT_20 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (ChangedA_22 == (MR_Integer) 0);
            if (succeeded)
            {
              *Changed_6 = (MR_Integer) 0;
              *Rval_5 = Rval0_4;
            }
            else
            {
              *Changed_6 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_5 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Type_19));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_21));
              }
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type0_29 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalA0_30 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 2))));
            MR_Word Type_31;
            MR_Word ChangedT_32;
            MR_Word SubRvalA_33;
            MR_Word ChangedA_34;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(Type0_29, &Type_31, &ChangedT_32);
            ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalA0_30, &SubRvalA_33, &ChangedA_34);
            succeeded = (ChangedT_32 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (ChangedA_34 == (MR_Integer) 0);
            if (succeeded)
            {
              *Changed_6 = (MR_Integer) 0;
              *Rval_5 = Rval0_4;
            }
            else
            {
              *Changed_6 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_5 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Type_31));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_33));
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word UnOp_24 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalA0_37 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 2))));
            MR_Word SubRvalA_38;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalA0_37, &SubRvalA_38, Changed_6);
            switch (*Changed_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_5 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (UnOp_24));
                  MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_38));
                }
                break;
              case (MR_Integer) 0:
                *Rval_5 = Rval0_4;
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BinOp_25 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 1))));
            MR_Word SubRvalB0_26 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 3))));
            MR_Word SubRvalB_27;
            MR_Word ChangedB_28;
            MR_Word SubRvalA0_39 = ((MR_Word) ((MR_hl_field(3, Rval0_4, (MR_Integer) 2))));
            MR_Word SubRvalA_40;
            MR_Word ChangedA_41;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalA0_39, &SubRvalA_40, &ChangedA_41);
            ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalB0_26, &SubRvalB_27, &ChangedB_28);
            succeeded = (ChangedA_41 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (ChangedB_28 == (MR_Integer) 0);
            if (succeeded)
            {
              *Changed_6 = (MR_Integer) 0;
              *Rval_5 = Rval0_4;
            }
            else
            {
              *Changed_6 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Rval_5 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, base, 1) = ((MR_Box) (BinOp_25));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_40));
                MR_hl_field(3, base, 3) = ((MR_Box) (SubRvalB_27));
              }
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(
  MR_Word Type0_4,
  MR_Word * Type_5,
  MR_Word * Changed_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type0_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_5 = Type0_4;
        *Changed_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Type_5 = Type0_4;
        *Changed_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MerType0_17 = ((MR_Word) ((MR_hl_field(3, Type0_4, (MR_Integer) 1))));
            MR_Word CtorCat0_18 = ((MR_Word) ((MR_hl_field(3, Type0_4, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) CtorCat0_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(CtorCat0_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                    {
                      MR_Word MerType_30;

                      MerType_30 = parse_tree__builtin_lib_types__void_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_30, MerType0_17);
                      if (succeeded)
                        succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 4U), CtorCat0_18);
                      if (succeeded)
                      {
                        *Type_5 = Type0_4;
                        *Changed_6 = (MR_Integer) 0;
                      }
                      else
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Type_5 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (MerType_30));
                          MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                        }
                        *Changed_6 = (MR_Integer) 1;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *Type_5 = (MR_Word) ((MR_Unsigned) 20U);
                      *Changed_6 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word MerType_20;

                      MerType_20 = parse_tree__builtin_lib_types__void_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_20, MerType0_17);
                      if (succeeded)
                      {
                        *Type_5 = Type0_4;
                        *Changed_6 = (MR_Integer) 0;
                      }
                      else
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Type_5 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (MerType_20));
                          MR_hl_field(3, base, 2) = ((MR_Box) (CtorCat0_18));
                        }
                        *Changed_6 = (MR_Integer) 1;
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.semicanonicalize_types_in_type_for_c\'/3", (MR_String) "ctor_cat_builtin");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MerType_30;

                  MerType_30 = parse_tree__builtin_lib_types__void_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_30, MerType0_17);
                  if (succeeded)
                    succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 4U), CtorCat0_18);
                  if (succeeded)
                  {
                    *Type_5 = Type0_4;
                    *Changed_6 = (MR_Integer) 0;
                  }
                  else
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Type_5 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (MerType_30));
                      MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                    }
                    *Changed_6 = (MR_Integer) 1;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word MerType_30;

                  MerType_30 = parse_tree__builtin_lib_types__void_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_30, MerType0_17);
                  if (succeeded)
                    succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 4U), CtorCat0_18);
                  if (succeeded)
                  {
                    *Type_5 = Type0_4;
                    *Changed_6 = (MR_Integer) 0;
                  }
                  else
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Type_5 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (MerType_30));
                      MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                    }
                    *Changed_6 = (MR_Integer) 1;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 6:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          {
            *Type_5 = Type0_4;
            *Changed_6 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 4:
          {
            *Type_5 = (MR_Word) ((MR_Unsigned) 20U);
            *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubType0_28 = ((MR_Word) ((MR_hl_field(3, Type0_4, (MR_Integer) 1))));
            MR_Word SubType_29;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(SubType0_28, &SubType_29, Changed_6);
            switch (*Changed_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Type_5 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (SubType_29));
                }
                break;
              case (MR_Integer) 0:
                *Type_5 = Type0_4;
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word SubType0_15 = ((MR_Word) ((MR_hl_field(3, Type0_4, (MR_Integer) 1))));
            MR_Word SubType_16;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(SubType0_15, &SubType_16, Changed_6);
            switch (*Changed_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Type_5 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (SubType_16));
                }
                break;
              case (MR_Integer) 0:
                *Type_5 = Type0_4;
                break;
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word MLDS_Type_9,
  MR_Word ArraySize_10)
{
  MR_String TypeStr_12;

  TypeStr_12 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_7, MLDS_Type_9, ArraySize_10);
  mercury__io__write_string_4_p_0(Stream_8, TypeStr_12);
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Type_8)
{
  MR_String TypeStr_13;

  TypeStr_13 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_6, Type_8, (MR_Word) ((MR_Unsigned) 0U));
  mercury__io__write_string_4_p_0(Stream_7, TypeStr_13);
}

MR_String MR_CALL 
ml_backend__mlds_to_c_type__type_suffix_for_c_no_size_2_f_0(
  MR_Word Opts_4,
  MR_Word Type_5)
{
  MR_String TypeStr_6;

  TypeStr_6 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_4, Type_5, (MR_Word) ((MR_Unsigned) 0U));
  return TypeStr_6;
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word MLDS_Type_8)
{
  MR_String TypePrefix_10;

  TypePrefix_10 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_6, MLDS_Type_8);
  mercury__io__write_string_4_p_0(Stream_7, TypePrefix_10);
}

void MR_CALL 
ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_no_size_4_p_0(
  MR_Word Opts_5,
  MR_Word Type_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8)
{
  *TypePrefix_7 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_5, Type_6);
  *TypeSuffix_8 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_5, Type_6, (MR_Word) ((MR_Unsigned) 0U));
}

void MR_CALL 
ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(
  MR_Word Opts_6,
  MR_Word Type_7,
  MR_Word InitSize_8,
  MR_String * TypePrefix_9,
  MR_String * TypeSuffix_10)
{
  *TypePrefix_9 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_6, Type_7);
  *TypeSuffix_10 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_6, Type_7, InitSize_8);
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(
  MR_Word Opts_6,
  MR_Word Type_7,
  MR_Word Stream_8)
{
  MR_String TypeStr_10;
  MR_String TypePrefix_13;
  MR_String TypeSuffix_14;

  TypePrefix_13 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_6, Type_7);
  TypeSuffix_14 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_6, Type_7, (MR_Word) ((MR_Unsigned) 0U));
  TypeStr_10 = mercury__string__f_43_43_2_f_0(TypePrefix_13, TypeSuffix_14);
  mercury__io__write_string_4_p_0(Stream_8, TypeStr_10);
}

MR_String MR_CALL 
ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word MLDS_Type_5)
{
  MR_String TypePrefix_6;

  switch (MR_tag((MR_Word) MLDS_Type_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TypePrefix_6 = (MR_String) "jmp_buf";
          break;
        case (MR_Integer) 1:
          TypePrefix_6 = (MR_String) "MR_Float";
          break;
        case (MR_Integer) 2:
          TypePrefix_6 = (MR_String) "MR_String";
          break;
        case (MR_Integer) 3:
          TypePrefix_6 = (MR_String) "MR_Char";
          break;
        case (MR_Integer) 4:
          TypePrefix_6 = (MR_String) "MR_bool";
          break;
        case (MR_Integer) 5:
          TypePrefix_6 = (MR_String) "MR_Box";
          break;
        case (MR_Integer) 6:
          TypePrefix_6 = (MR_String) "void *";
          break;
        case (MR_Integer) 7:
          TypePrefix_6 = (MR_String) "MR_TypeInfo";
          break;
        case (MR_Integer) 8:
          TypePrefix_6 = (MR_String) "MR_PseudoTypeInfo";
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_type.type_prefix_for_c\'/2", (MR_String) "prefix has unknown type");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ClassId_12 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_5), (MR_Integer) 1));
        MR_Word QualClassName_13 = ((MR_Word) ((MR_hl_field(0, ClassId_12, (MR_Integer) 0))));
        MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, ClassId_12, (MR_Integer) 1))));
        MR_Word ClassKind_15 = ((MR_Unsigned) ((MR_hl_field(0, ClassId_12, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(0, QualClassName_13, (MR_Integer) 0))));
        MR_String ClassName_18 = ((MR_String) ((MR_hl_field(0, QualClassName_13, (MR_Integer) 2))));
        MR_String Qualifier_19;
        MR_String MangledClassName_20;

        Qualifier_19 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_16);
        MangledClassName_20 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_18);
        switch (ClassKind_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_String Var_74;
              MR_String Var_81;
              MR_String Var_83;
              MR_String Var_84;
              MR_String Var_86;
              MR_String Var_87;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Arity_14, &Var_74);
              Var_81 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) "_s");
              Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_81);
              Var_84 = mercury__string__f_43_43_2_f_0(MangledClassName_20, Var_83);
              Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_84);
              Var_87 = mercury__string__f_43_43_2_f_0(Qualifier_19, Var_86);
              TypePrefix_6 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_87);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_58;
              MR_String Var_65;
              MR_String Var_67;
              MR_String Var_68;
              MR_String Var_70;
              MR_String Var_71;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Arity_14, &Var_58);
              Var_65 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) "_e\' */");
              Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_65);
              Var_68 = mercury__string__f_43_43_2_f_0(MangledClassName_20, Var_67);
              Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_68);
              Var_71 = mercury__string__f_43_43_2_f_0(Qualifier_19, Var_70);
              TypePrefix_6 = mercury__string__f_43_43_2_f_0((MR_String) "MR_Integer /* actually \140enum ", Var_71);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FuncParams_24 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_5), (MR_Integer) 2));

        TypePrefix_6 = ml_backend__mlds_to_c_type__func_type_prefix_for_c_2_f_0(Opts_4, FuncParams_24);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCategory_8 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) TypeCategory_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(TypeCategory_8)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                    TypePrefix_6 = (MR_String) "MR_Word";
                    break;
                  case (MR_Integer) 2:
                    TypePrefix_6 = (MR_String) "MR_Box";
                    break;
                  case (MR_Integer) 4:
                    TypePrefix_6 = (MR_String) "MR_Tuple";
                    break;
                }
                break;
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_type.mercury_type_prefix_for_c\'/1", (MR_String) "ctor_cat_builtin");
                break;
              case (MR_Integer) 2:
                TypePrefix_6 = (MR_String) "MR_Word";
                break;
              case (MR_Integer) 3:
                TypePrefix_6 = (MR_String) "MR_Word";
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          TypePrefix_6 = (MR_String) "MR_ArrayPtr";
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypes_25 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))));

            if ((ArgTypes_25 == (MR_Word) ((MR_Unsigned) 0U)))
              TypePrefix_6 = (MR_String) "MR_Cont";
            else
              TypePrefix_6 = (MR_String) "void MR_CALL (*";
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntType_10 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))) & (MR_Integer) 15);

            TypePrefix_6 = ((&ml_backend__mlds_to_c_type_vector_common_3[0 + IntType_10]))->ml_backend__mlds_to_c_type__vector_common_type_3_0__vct_3_f_0;
          }
          break;
        case (MR_Integer) 4:
          TypePrefix_6 = (MR_String) "MR_Box";
          break;
        case (MR_Integer) 5:
          {
            MR_Word BaseType_54 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))));
            MR_String TypePrefix_95;
            MR_String TypeSuffix_96;

            TypePrefix_95 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_4, BaseType_54);
            TypeSuffix_96 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_4, BaseType_54, (MR_Word) ((MR_Unsigned) 0U));
            TypePrefix_6 = mercury__string__f_43_43_2_f_0(TypePrefix_95, TypeSuffix_96);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String TypePrefix_98;
            MR_String TypeSuffix_99;

            TypePrefix_98 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_4, (MR_Word) ((MR_Unsigned) 20U));
            TypeSuffix_99 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_4, (MR_Word) ((MR_Unsigned) 20U), (MR_Word) ((MR_Unsigned) 0U));
            TypePrefix_6 = mercury__string__f_43_43_2_f_0(TypePrefix_98, TypeSuffix_99);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word BaseType_21 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))));
            MR_String BaseTypeStr_22;

            BaseTypeStr_22 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_4, BaseType_21);
            TypePrefix_6 = mercury__string__f_43_43_2_f_0(BaseTypeStr_22, (MR_String) " *");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word RttiIdMaybeElement_28 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))));
            MR_Word _IsArray_29;

            backend_libs__rtti__rtti_id_maybe_element_c_type_3_p_0(RttiIdMaybeElement_28, &TypePrefix_6, &_IsArray_29);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word TablingId_30 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_5, (MR_Integer) 1))));
            MR_Word _IsArray_55;

            backend_libs__rtti__tabling_id_c_type_3_p_0(TablingId_30, &TypePrefix_6, &_IsArray_55);
          }
          break;
      }
      break;
  }
  return TypePrefix_6;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_for_c_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_TypeStr_6;

  conv0_TypeStr_6 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_TypeStr_6));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Params_5)
{
  MR_String TypePrefix_6;
  MR_Word ReturnTypes_8 = ((MR_Word) ((MR_hl_field(0, Params_5, (MR_Integer) 1))));
  MR_String ReturnTypeStr_9;

  if ((ReturnTypes_8 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTypeStr_9 = (MR_String) "void";
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_8, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_8, (MR_Integer) 0))));

    if ((Var_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String TypePrefix_29;
      MR_String TypeSuffix_30;

      TypePrefix_29 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_4, Var_27);
      TypeSuffix_30 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_4, Var_27, (MR_Word) ((MR_Unsigned) 0U));
      ReturnTypeStr_9 = mercury__string__f_43_43_2_f_0(TypePrefix_29, TypeSuffix_30);
    }
    else
    {
      MR_Word ReturnTypeStrs_14;
      MR_Word Var_17;
      MR_String ReturnTypesStr_32;
      MR_String Var_39;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_1[2]));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__func_type_prefix_for_c_2_f_0_1));
        MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_17, 3) = ((MR_Box) (Opts_4));
      }
      ReturnTypeStrs_14 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, ReturnTypes_8);
      ReturnTypesStr_32 = mercury__string__join_list_2_f_0((MR_String) ", ", ReturnTypeStrs_14);
      Var_39 = mercury__string__f_43_43_2_f_0(ReturnTypesStr_32, (MR_String) "}");
      ReturnTypeStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n#error multiple return values\n\t{", Var_39);
    }
  }
  TypePrefix_6 = mercury__string__f_43_43_2_f_0(ReturnTypeStr_9, (MR_String) " MR_CALL (*");
  return TypePrefix_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Type_5)
{
  MR_String TypeStr_6;
  MR_String TypePrefix_7;
  MR_String TypeSuffix_8;

  TypePrefix_7 = ml_backend__mlds_to_c_type__type_prefix_for_c_2_f_0(Opts_4, Type_5);
  TypeSuffix_8 = ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(Opts_4, Type_5, (MR_Word) ((MR_Unsigned) 0U));
  TypeStr_6 = mercury__string__f_43_43_2_f_0(TypePrefix_7, TypeSuffix_8);
  return TypeStr_6;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_TypeStr_6;

  conv0_TypeStr_6 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_TypeStr_6));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0(
  MR_Word Opts_5,
  MR_Word MLDS_Type_6,
  MR_Word InitSize_7)
{
  MR_String TypeSuffix_8;

  switch (MR_tag((MR_Word) MLDS_Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          TypeSuffix_8 = (MR_String) "";
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_type.type_suffix_for_c\'/3", (MR_String) "unknown_type");
          break;
      }
      break;
    case (MR_Integer) 1:
      TypeSuffix_8 = (MR_String) "";
      break;
    case (MR_Integer) 2:
      {
        MR_Word FuncParams_11 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));
        MR_Word Args_60 = ((MR_Word) ((MR_hl_field(0, FuncParams_11, (MR_Integer) 0))));
        MR_String Var_63;

        Var_63 = ml_backend__mlds_to_c_type__param_types_to_c_2_f_0(Opts_5, Args_60);
        TypeSuffix_8 = mercury__string__f_43_43_2_f_0((MR_String) ")", Var_63);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 7:
          TypeSuffix_8 = (MR_String) "";
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));

            if ((ArgTypes_12 == (MR_Word) ((MR_Unsigned) 0U)))
              TypeSuffix_8 = (MR_String) "";
            else
            {
              MR_Word ArgTypeStrs_15;
              MR_String ArgTypesStr_16;
              MR_Word Var_27;
              MR_String Var_41;

              {
                Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_1[2]));
                MR_hl_field(0, Var_27, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__type_suffix_for_c_3_f_0_1));
                MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_27, 3) = ((MR_Box) (Opts_5));
              }
              ArgTypeStrs_15 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, ArgTypes_12);
              ArgTypesStr_16 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgTypeStrs_15);
              Var_41 = mercury__string__f_43_43_2_f_0(ArgTypesStr_16, (MR_String) ", void *)");
              TypeSuffix_8 = mercury__string__f_43_43_2_f_0((MR_String) ")(", Var_41);
            }
          }
          break;
        case (MR_Integer) 5:
          if ((InitSize_7 == (MR_Word) ((MR_Unsigned) 0U)))
            TypeSuffix_8 = (MR_String) "[]";
          else
          {
            MR_Integer Size0_43 = ((MR_Integer) ((MR_hl_field(1, InitSize_7, (MR_Integer) 0))));
            MR_Integer Size_44;
            MR_String Var_51;
            MR_String Var_58;

            mercury__int__max_3_p_0(Size0_43, (MR_Integer) 1, &Size_44);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Size_44, &Var_51);
            Var_58 = mercury__string__f_43_43_2_f_0(Var_51, (MR_String) "]");
            TypeSuffix_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_58);
          }
          break;
        case (MR_Integer) 6:
          TypeSuffix_8 = (MR_String) "";
          break;
        case (MR_Integer) 8:
          {
            MR_Word RttiIdMaybeElement_17 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
            MR_Word IsArrayType_18;

            IsArrayType_18 = backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_f_0(RttiIdMaybeElement_17);
            switch (IsArrayType_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((InitSize_7 == (MR_Word) ((MR_Unsigned) 0U)))
                  TypeSuffix_8 = (MR_String) "[]";
                else
                {
                  MR_Integer Size0_64 = ((MR_Integer) ((MR_hl_field(1, InitSize_7, (MR_Integer) 0))));
                  MR_Integer Size_65;
                  MR_String Var_72;
                  MR_String Var_79;

                  mercury__int__max_3_p_0(Size0_64, (MR_Integer) 1, &Size_65);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Size_65, &Var_72);
                  Var_79 = mercury__string__f_43_43_2_f_0(Var_72, (MR_String) "]");
                  TypeSuffix_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_79);
                }
                break;
              case (MR_Integer) 1:
                TypeSuffix_8 = (MR_String) "";
                break;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word TablingId_19 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
            MR_Word IsArrayType_35;

            IsArrayType_35 = backend_libs__rtti__tabling_id_has_array_type_1_f_0(TablingId_19);
            switch (IsArrayType_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((InitSize_7 == (MR_Word) ((MR_Unsigned) 0U)))
                  TypeSuffix_8 = (MR_String) "[]";
                else
                {
                  MR_Integer Size0_81 = ((MR_Integer) ((MR_hl_field(1, InitSize_7, (MR_Integer) 0))));
                  MR_Integer Size_82;
                  MR_String Var_89;
                  MR_String Var_96;

                  mercury__int__max_3_p_0(Size0_81, (MR_Integer) 1, &Size_82);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Size_82, &Var_89);
                  Var_96 = mercury__string__f_43_43_2_f_0(Var_89, (MR_String) "]");
                  TypeSuffix_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_96);
                }
                break;
              case (MR_Integer) 1:
                TypeSuffix_8 = (MR_String) "";
                break;
            }
          }
          break;
      }
      break;
  }
  return TypeSuffix_8;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__param_types_to_c_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_TypeStr_6;

  conv0_TypeStr_6 = ml_backend__mlds_to_c_type__param_type_to_string_for_c_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_TypeStr_6));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__param_types_to_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Args_5)
{
  MR_String ArgsStr_6;

  if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
    ArgsStr_6 = (MR_String) "(void)";
  else
  {
    MR_Word ArgTypeStrs_9;
    MR_String ArgTypesStr_10;
    MR_Word Var_11;
    MR_String Var_22;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_11, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_1[1]));
      MR_hl_field(0, Var_11, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__param_types_to_c_2_f_0_1));
      MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_11, 3) = ((MR_Box) (Opts_4));
    }
    ArgTypeStrs_9 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Args_5);
    ArgTypesStr_10 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgTypeStrs_9);
    Var_22 = mercury__string__f_43_43_2_f_0(ArgTypesStr_10, (MR_String) ")");
    ArgsStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_22);
  }
  return ArgsStr_6;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____type_prefix_suffix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_type____Unify____type_prefix_suffix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____type_prefix_suffix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_type____Compare____type_prefix_suffix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_to_c_type__init(void)
{
}

void mercury__ml_backend__mlds_to_c_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__type_ctor_info_type_prefix_suffix_0);
}

void mercury__ml_backend__mlds_to_c_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_type__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_type.
