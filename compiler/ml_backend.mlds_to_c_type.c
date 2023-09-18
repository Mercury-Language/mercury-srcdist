/*
** Automatically generated from `mlds_to_c_type.m'
** by the Mercury compiler,
** version rotd-2023-09-18
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
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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
ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0(
  MR_Word Opts_5,
  MR_Word FuncParams_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8);

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__array_type_suffix_for_c_1_f_0(
  MR_Word InitSize_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[2][6];


struct ml_backend__mlds_to_c_type__vector_common_type_3_0_s {
  const MR_String ml_backend__mlds_to_c_type__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ml_backend__mlds_to_c_type__vector_common_type_3_0_s ml_backend__mlds_to_c_type_vector_common_3[10];



static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
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


static MR_String MR_CALL 
ml_backend__mlds_to_c_type__param_type_to_string_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5)
{
  MR_String TypeStr_6;
  MR_Word Type_8 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 1))));
  MR_String TypePrefix_10;
  MR_String TypeSuffix_11;

  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_4, Type_8, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_10, &TypeSuffix_11);
  TypeStr_6 = mercury__string__f_43_43_2_f_0(TypePrefix_10, TypeSuffix_11);
  return TypeStr_6;
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
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 9:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
          {
            *Type_5 = Type0_4;
            *Changed_6 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word MerType0_20 = ((MR_Word) ((MR_hl_field(3, Type0_4, (MR_Integer) 1))));
            MR_Word CtorCat0_21 = ((MR_Word) ((MR_hl_field(3, Type0_4, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) CtorCat0_21)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(CtorCat0_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                    {
                      MR_Word MerType_30;

                      MerType_30 = parse_tree__builtin_lib_types__void_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_30, MerType0_20);
                      if (succeeded)
                        succeeded = parse_tree__prog_type____Unify____nb_type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 4U), CtorCat0_21);
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
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
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
                      MR_Word MerType_22;

                      MerType_22 = parse_tree__builtin_lib_types__void_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_22, MerType0_20);
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
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                          MR_hl_field(3, base, 1) = ((MR_Box) (MerType_22));
                          MR_hl_field(3, base, 2) = ((MR_Box) (CtorCat0_21));
                        }
                        *Changed_6 = (MR_Integer) 1;
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MerType_30;

                  MerType_30 = parse_tree__builtin_lib_types__void_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_30, MerType0_20);
                  if (succeeded)
                    succeeded = parse_tree__prog_type____Unify____nb_type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 4U), CtorCat0_21);
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
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
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
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_30, MerType0_20);
                  if (succeeded)
                    succeeded = parse_tree__prog_type____Unify____nb_type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 4U), CtorCat0_21);
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
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
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
        case (MR_Integer) 7:
          {
            *Type_5 = (MR_Word) ((MR_Unsigned) 20U);
            *Changed_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 8:
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
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (SubType_29));
                }
                break;
              case (MR_Integer) 0:
                *Type_5 = Type0_4;
                break;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word SubType0_18 = ((MR_Word) ((MR_hl_field(3, Type0_4, (MR_Integer) 1))));
            MR_Word SubType_19;

            ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(SubType0_18, &SubType_19, Changed_6);
            switch (*Changed_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Type_5 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (SubType_19));
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

  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_4, Type_5, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_15, &TypeSuffix_16);
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

void MR_CALL 
ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_no_size_4_p_0(
  MR_Word Opts_5,
  MR_Word Type_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8)
{
  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_5, Type_6, (MR_Word) ((MR_Unsigned) 0U), TypePrefix_7, TypeSuffix_8);
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0_1(
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

void MR_CALL 
ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(
  MR_Word Opts_6,
  MR_Word MLDS_Type_7,
  MR_Word InitSize_8,
  MR_String * TypePrefix_9,
  MR_String * TypeSuffix_10)
{
  switch (MR_tag((MR_Word) MLDS_Type_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *TypePrefix_9 = (MR_String) "jmp_buf";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            *TypePrefix_9 = (MR_String) "MR_Float";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 2:
          {
            *TypePrefix_9 = (MR_String) "MR_String";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 3:
          {
            *TypePrefix_9 = (MR_String) "MR_Char";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 4:
          {
            *TypePrefix_9 = (MR_String) "MR_bool";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 5:
          {
            *TypePrefix_9 = (MR_String) "MR_Box";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 6:
          {
            *TypePrefix_9 = (MR_String) "void *";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 7:
          {
            *TypePrefix_9 = (MR_String) "MR_TypeInfo";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 8:
          {
            *TypePrefix_9 = (MR_String) "MR_PseudoTypeInfo";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.type_to_prefix_suffix_for_c\'/5", (MR_String) "prefix has unknown type");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ClassId_18 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_7), (MR_Integer) 1));
        MR_Word QualClassName_19 = ((MR_Word) ((MR_hl_field(0, ClassId_18, (MR_Integer) 0))));
        MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(0, ClassId_18, (MR_Integer) 1))));
        MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, QualClassName_19, (MR_Integer) 0))));
        MR_String ClassName_23 = ((MR_String) ((MR_hl_field(0, QualClassName_19, (MR_Integer) 2))));
        MR_String Qualifier_24;
        MR_String MangledClassName_25;
        MR_String Var_132;
        MR_String Var_139;
        MR_String Var_141;
        MR_String Var_142;
        MR_String Var_144;
        MR_String Var_145;

        Qualifier_24 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_21);
        MangledClassName_25 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_23);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_1[0]), Arity_20, &Var_132);
        Var_139 = mercury__string__f_43_43_2_f_0(Var_132, (MR_String) "_s");
        Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_139);
        Var_142 = mercury__string__f_43_43_2_f_0(MangledClassName_25, Var_141);
        Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_142);
        Var_145 = mercury__string__f_43_43_2_f_0(Qualifier_24, Var_144);
        *TypePrefix_9 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_145);
        *TypeSuffix_10 = (MR_String) "";
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EnumClassId_26 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_7), (MR_Integer) 2));
        MR_String EnumClassName_27 = ((MR_String) ((MR_hl_field(0, EnumClassId_26, (MR_Integer) 1))));
        MR_String MangledEnumClassName_28;
        MR_Integer Arity_86 = ((MR_Integer) ((MR_hl_field(0, EnumClassId_26, (MR_Integer) 2))));
        MR_Word ModuleName_87 = ((MR_Word) ((MR_hl_field(0, EnumClassId_26, (MR_Integer) 0))));
        MR_String Qualifier_88;
        MR_String Var_113;
        MR_String Var_120;
        MR_String Var_122;
        MR_String Var_123;
        MR_String Var_125;
        MR_String Var_126;

        Qualifier_88 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_87);
        MangledEnumClassName_28 = parse_tree__prog_foreign__name_mangle_1_f_0(EnumClassName_27);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_1[0]), Arity_86, &Var_113);
        Var_120 = mercury__string__f_43_43_2_f_0(Var_113, (MR_String) "_e\' */");
        Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_120);
        Var_123 = mercury__string__f_43_43_2_f_0(MangledEnumClassName_28, Var_122);
        Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_123);
        Var_126 = mercury__string__f_43_43_2_f_0(Qualifier_88, Var_125);
        *TypePrefix_9 = mercury__string__f_43_43_2_f_0((MR_String) "MR_Integer /* actually \140enum ", Var_126);
        *TypeSuffix_10 = (MR_String) "";
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word EnvId_29 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));
            MR_String EnvName_30 = ((MR_String) ((MR_hl_field(0, EnvId_29, (MR_Integer) 1))));
            MR_String MangledEnvName_31;
            MR_Word ModuleName_89 = ((MR_Word) ((MR_hl_field(0, EnvId_29, (MR_Integer) 0))));
            MR_String Qualifier_90;
            MR_String Var_107;
            MR_String Var_109;
            MR_String Var_110;

            Qualifier_90 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_89);
            MangledEnvName_31 = parse_tree__prog_foreign__name_mangle_1_f_0(EnvName_30);
            Var_107 = mercury__string__f_43_43_2_f_0(MangledEnvName_31, (MR_String) "_0_s");
            Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_107);
            Var_110 = mercury__string__f_43_43_2_f_0(Qualifier_90, Var_109);
            *TypePrefix_9 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_110);
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word StructId_32 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));
            MR_String StructName_33 = ((MR_String) ((MR_hl_field(0, StructId_32, (MR_Integer) 1))));
            MR_String MangledStructName_34;
            MR_Word ModuleName_91 = ((MR_Word) ((MR_hl_field(0, StructId_32, (MR_Integer) 0))));
            MR_String Qualifier_92;
            MR_String Var_100;
            MR_String Var_102;
            MR_String Var_103;

            Qualifier_92 = ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(ModuleName_91);
            MangledStructName_34 = parse_tree__prog_foreign__name_mangle_1_f_0(StructName_33);
            Var_100 = mercury__string__f_43_43_2_f_0(MangledStructName_34, (MR_String) "_0_s");
            Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_100);
            Var_103 = mercury__string__f_43_43_2_f_0(Qualifier_92, Var_102);
            *TypePrefix_9 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_103);
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FuncParams_36 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));

            ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0(Opts_6, FuncParams_36, TypePrefix_9, TypeSuffix_10);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCategory_12 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) TypeCategory_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(TypeCategory_12)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                    *TypePrefix_9 = (MR_String) "MR_Word";
                    break;
                  case (MR_Integer) 2:
                    *TypePrefix_9 = (MR_String) "MR_Box";
                    break;
                  case (MR_Integer) 4:
                    *TypePrefix_9 = (MR_String) "MR_Tuple";
                    break;
                }
                break;
              case (MR_Integer) 2:
                *TypePrefix_9 = (MR_String) "MR_Word";
                break;
              case (MR_Integer) 3:
                *TypePrefix_9 = (MR_String) "MR_Word";
                break;
            }
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 4:
          {
            *TypePrefix_9 = (MR_String) "MR_ArrayPtr";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ArgTypes_37 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));

            if ((ArgTypes_37 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *TypePrefix_9 = (MR_String) "MR_Cont";
              *TypeSuffix_10 = (MR_String) "";
            }
            else
            {
              MR_Word ArgTypeStrs_40;
              MR_String ArgTypesStr_41;
              MR_Word Var_78;
              MR_String Var_129;

              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_2[0]));
                MR_hl_field(0, Var_78, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0_1));
                MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_78, 3) = ((MR_Box) (Opts_6));
              }
              ArgTypeStrs_40 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_78, ArgTypes_37);
              ArgTypesStr_41 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgTypeStrs_40);
              *TypePrefix_9 = (MR_String) "void MR_CALL (*";
              Var_129 = mercury__string__f_43_43_2_f_0(ArgTypesStr_41, (MR_String) ", void *)");
              *TypeSuffix_10 = mercury__string__f_43_43_2_f_0((MR_String) ")(", Var_129);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_13 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))) & (MR_Integer) 15);

            *TypePrefix_9 = ((&ml_backend__mlds_to_c_type_vector_common_3[0 + IntType_13]))->ml_backend__mlds_to_c_type__vector_common_type_3_0__vct_3_f_0;
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 7:
          {
            *TypePrefix_9 = (MR_String) "MR_Box";
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word BaseType_16 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));
            MR_String TypePrefix_150;
            MR_String TypeSuffix_151;

            ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_6, BaseType_16, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_150, &TypeSuffix_151);
            *TypePrefix_9 = mercury__string__f_43_43_2_f_0(TypePrefix_150, TypeSuffix_151);
            *TypeSuffix_10 = ml_backend__mlds_to_c_type__array_type_suffix_for_c_1_f_0(InitSize_8);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String TypePrefix_153;
            MR_String TypeSuffix_154;

            ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_6, (MR_Word) ((MR_Unsigned) 20U), (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_153, &TypeSuffix_154);
            *TypePrefix_9 = mercury__string__f_43_43_2_f_0(TypePrefix_153, TypeSuffix_154);
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String BaseTypeStr_35;
            MR_Word BaseType_93 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));

            BaseTypeStr_35 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_6, BaseType_93);
            *TypePrefix_9 = mercury__string__f_43_43_2_f_0(BaseTypeStr_35, (MR_String) " *");
            *TypeSuffix_10 = (MR_String) "";
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RttiIdMaybeElement_42 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));
            MR_Word IsArray_43;

            backend_libs__rtti__rtti_id_maybe_element_c_type_3_p_0(RttiIdMaybeElement_42, TypePrefix_9, &IsArray_43);
            switch (IsArray_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *TypeSuffix_10 = ml_backend__mlds_to_c_type__array_type_suffix_for_c_1_f_0(InitSize_8);
                break;
              case (MR_Integer) 1:
                *TypeSuffix_10 = (MR_String) "";
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word TablingId_44 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_7, (MR_Integer) 1))));
            MR_Word IsArray_94;

            backend_libs__rtti__tabling_id_c_type_3_p_0(TablingId_44, TypePrefix_9, &IsArray_94);
            switch (IsArray_94) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *TypeSuffix_10 = ml_backend__mlds_to_c_type__array_type_suffix_for_c_1_f_0(InitSize_8);
                break;
              case (MR_Integer) 1:
                *TypeSuffix_10 = (MR_String) "";
                break;
            }
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_TypeStr_6;

  conv1_TypeStr_6 = ml_backend__mlds_to_c_type__param_type_to_string_for_c_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_TypeStr_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0_1(
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

static void MR_CALL 
ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0(
  MR_Word Opts_5,
  MR_Word FuncParams_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8)
{
  MR_Word Args_9 = ((MR_Word) ((MR_hl_field(0, FuncParams_6, (MR_Integer) 0))));
  MR_Word ReturnTypes_10 = ((MR_Word) ((MR_hl_field(0, FuncParams_6, (MR_Integer) 1))));
  MR_String ReturnTypeStr_11;
  MR_String Var_25;

  if ((ReturnTypes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnTypeStr_11 = (MR_String) "void";
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_10, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_10, (MR_Integer) 0))));

    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String TypePrefix_33;
      MR_String TypeSuffix_34;

      ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_5, Var_31, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_33, &TypeSuffix_34);
      ReturnTypeStr_11 = mercury__string__f_43_43_2_f_0(TypePrefix_33, TypeSuffix_34);
    }
    else
    {
      MR_Word ReturnTypeStrs_16;
      MR_Word Var_19;
      MR_String ReturnTypesStr_36;
      MR_String Var_43;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_2[0]));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0_1));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_19, 3) = ((MR_Box) (Opts_5));
      }
      ReturnTypeStrs_16 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, ReturnTypes_10);
      ReturnTypesStr_36 = mercury__string__join_list_2_f_0((MR_String) ", ", ReturnTypeStrs_16);
      Var_43 = mercury__string__f_43_43_2_f_0(ReturnTypesStr_36, (MR_String) "}");
      ReturnTypeStr_11 = mercury__string__f_43_43_2_f_0((MR_String) "\n#error multiple return values\n\t{", Var_43);
    }
  }
  *TypePrefix_7 = mercury__string__f_43_43_2_f_0(ReturnTypeStr_11, (MR_String) " MR_CALL (*");
  if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_25 = (MR_String) "(void)";
  else
  {
    MR_Word ArgTypeStrs_45;
    MR_String ArgTypesStr_46;
    MR_Word Var_47;
    MR_String Var_52;

    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_2[1]));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__func_type_prefix_suffix_for_c_4_p_0_2));
      MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_47, 3) = ((MR_Box) (Opts_5));
    }
    ArgTypeStrs_45 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Args_9);
    ArgTypesStr_46 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgTypeStrs_45);
    Var_52 = mercury__string__f_43_43_2_f_0(ArgTypesStr_46, (MR_String) ")");
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_52);
  }
  *TypeSuffix_8 = mercury__string__f_43_43_2_f_0((MR_String) ")", Var_25);
}

MR_String MR_CALL 
ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(
  MR_Word Opts_4,
  MR_Word Type_5)
{
  MR_String TypeStr_6;
  MR_String TypePrefix_7;
  MR_String TypeSuffix_8;

  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_4, Type_5, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_7, &TypeSuffix_8);
  TypeStr_6 = mercury__string__f_43_43_2_f_0(TypePrefix_7, TypeSuffix_8);
  return TypeStr_6;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_type__array_type_suffix_for_c_1_f_0(
  MR_Word InitSize_3)
{
  MR_String ArraySuffix_4;

  if ((InitSize_3 == (MR_Word) ((MR_Unsigned) 0U)))
    ArraySuffix_4 = (MR_String) "[]";
  else
  {
    MR_Integer Size0_5 = ((MR_Integer) ((MR_hl_field(1, InitSize_3, (MR_Integer) 0))));
    MR_Integer Size_6;
    MR_String Var_13;
    MR_String Var_20;

    mercury__int__max_3_p_0(Size0_5, (MR_Integer) 1, &Size_6);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_1[0]), Size_6, &Var_13);
    Var_20 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) "]");
    ArraySuffix_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_20);
  }
  return ArraySuffix_4;
}

void mercury__ml_backend__mlds_to_c_type__init(void)
{
}

void mercury__ml_backend__mlds_to_c_type__init_type_tables(void)
{
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
