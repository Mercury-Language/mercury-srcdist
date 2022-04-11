/*
** Automatically generated from `mlds_to_c_type.m'
** by the Mercury compiler,
** version 22.01.1-beta-2022-04-11
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
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_ordinal_ordered_maybe_changed_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_name_ordered_maybe_changed_0[2];

static const MR_Integer ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__functor_number_map_maybe_changed_0[2];

static const MR_VA_TypeInfo_Struct5 ml_backend__mlds_to_c_type____vti_pred_5ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0io__type_ctor_info_output_stream_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____maybe_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_type_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8);

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

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Params_8);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_array_type_suffix_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Parameters_8);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_4_p_0(
  MR_Word Stream_5,
  MR_Word CtorCat_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____output_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____output_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_3[2][8];




static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[1][7] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "unchanged",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_ordinal_ordered_maybe_changed_0[2] = {
  &ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_0,
  &ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_name_ordered_maybe_changed_0[2] = {
  &ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_1,
  &ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_functor_desc_maybe_changed_0_0
};

static const MR_Integer ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_type____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_type____Compare____maybe_changed_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_type",
  (MR_String) "maybe_changed",
  {     ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_name_ordered_maybe_changed_0 },
  {     ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__enum_ordinal_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__functor_number_map_maybe_changed_0,

};

static const MR_VA_TypeInfo_Struct5 ml_backend__mlds_to_c_type____vti_pred_5ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0io__type_ctor_info_output_stream_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__type_ctor_info_output_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_c_type____Unify____output_type_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_type____Compare____output_type_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_type",
  (MR_String) "output_type",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_type____vti_pred_5ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0io__type_ctor_info_output_stream_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
ml_backend__mlds_to_c_type____Compare____output_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____output_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____maybe_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_type_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8)
{
  {
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1))));

    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_6, Stream_8, Type_11);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_6, Stream_8, Type_11, (MR_Word) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Type_8)
{
  {
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_6, Stream_7, Type_8);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_6, Stream_7, Type_8, (MR_Word) ((MR_Unsigned) 0U));
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ") ");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word Stream_6,
  MR_Word OutputPred_7,
  MR_Word List_8)
{
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n#error multiple return values\n");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t{");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0(TypeInfo_for_T_20, OutputPred_7, (MR_String) ", ", List_8, Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}");
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializer_for_c_1_f_0(
  MR_Word Init0_3)
{
  {
    MR_Word Init_4;

    switch (MR_tag((MR_Word) Init0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Init_4 = Init0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Init0_3, (MR_Integer) 0))));
          MR_Word Rval_10;
          MR_Word Var_18;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(Rval0_9, &Rval_10, &Var_18);
          switch (Var_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                Init_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Init_4, 0) = ((MR_Box) (Rval_10));
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
          MR_Word StructType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_3, (MR_Integer) 0))));
          MR_Word Inits0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_3, (MR_Integer) 1))));
          MR_Word Inits_13;
          MR_Word Var_19;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_12, &Inits_13, (MR_Integer) 0, &Var_19);
          switch (Var_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                Init_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Init_4, 0) = ((MR_Box) (StructType_11));
                MR_hl_field(MR_mktag(2), Init_4, 1) = ((MR_Box) (Inits_13));
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
          MR_Word Inits0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Init0_3, (MR_Integer) 0))));
          MR_Word Inits_17;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_16, &Inits_17, (MR_Integer) 0, &Var_5);
          switch (Var_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                Init_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Init_4, 0) = ((MR_Box) (Inits_17));
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
    MR_Word Init0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Inits0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
          MR_Word Rval0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Init0_8, (MR_Integer) 0))));
          MR_Word Rval_22;
          MR_Word InitChanged_30;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(Rval0_21, &Rval_22, &InitChanged_30);
          switch (InitChanged_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  Init_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Init_10, 0) = ((MR_Box) (Rval_22));
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
          MR_Word StructType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_8, (MR_Integer) 0))));
          MR_Word Inits0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_8, (MR_Integer) 1))));
          MR_Word Inits_25;
          MR_Word InitChanged_31;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_24, &Inits_25, (MR_Integer) 0, &InitChanged_31);
          switch (InitChanged_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  Init_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Init_10, 0) = ((MR_Box) (StructType_23));
                  MR_hl_field(MR_mktag(2), Init_10, 1) = ((MR_Box) (Inits_25));
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
          MR_Word Inits0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Init0_8, (MR_Integer) 0))));
          MR_Word Inits_29;

          ml_backend__mlds_to_c_type__semicanonicalize_types_in_initializers_for_c_4_p_0(Inits0_28, &Inits_29, (MR_Integer) 0, &InitChanged_13);
          switch (InitChanged_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  Init_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Init_10, 0) = ((MR_Box) (Inits_29));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Init_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Inits_11));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(
  MR_Word Rval0_4,
  MR_Word * Rval_5,
  MR_Word * Changed_6)
{
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Tag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
              MR_Word SubRvalA0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
              MR_Word SubRvalA_36;

              ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalA0_35, &SubRvalA_36, Changed_6);
              switch (*Changed_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Rval_5 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_23));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_36));
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
              MR_Word Type0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
              MR_Word SubRvalA0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
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
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_5 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_19));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_21));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
              MR_Word SubRvalA0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
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
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_5 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_31));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_33));
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word UnOp_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
              MR_Word SubRvalA0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
              MR_Word SubRvalA_38;

              ml_backend__mlds_to_c_type__semicanonicalize_types_in_rval_for_c_3_p_0(SubRvalA0_37, &SubRvalA_38, Changed_6);
              switch (*Changed_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Rval_5 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnOp_24));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_38));
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
              MR_Word BinOp_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1))));
              MR_Word SubRvalB0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 3))));
              MR_Word SubRvalB_27;
              MR_Word ChangedB_28;
              MR_Word SubRvalA0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2))));
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
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_5 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BinOp_25));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_40));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubRvalB_27));
                }
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(
  MR_Word Type0_4,
  MR_Word * Type_5,
  MR_Word * Changed_6)
{
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MerType0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 1))));
              MR_Word CtorCat0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) CtorCat0_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(CtorCat0_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                    case (MR_Integer) 4:
                      {
                        MR_Word MerType_30;

                        MerType_30 = parse_tree__builtin_lib_types__void_type_0_f_0();
                        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_30, MerType0_17);
                        if (succeeded)
                          succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 16U), CtorCat0_18);
                        if (succeeded)
                        {
                          *Type_5 = Type0_4;
                          *Changed_6 = (MR_Integer) 0;
                        }
                        else
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Type_5 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MerType_30));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                          }
                          *Changed_6 = (MR_Integer) 1;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
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
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Type_5 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MerType_20));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CtorCat0_18));
                          }
                          *Changed_6 = (MR_Integer) 1;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        *Type_5 = (MR_Word) ((MR_Unsigned) 20U);
                        *Changed_6 = (MR_Integer) 1;
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
                      succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 16U), CtorCat0_18);
                    if (succeeded)
                    {
                      *Type_5 = Type0_4;
                      *Changed_6 = (MR_Integer) 0;
                    }
                    else
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Type_5 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MerType_30));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
                      succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0((MR_Word) ((MR_Unsigned) 16U), CtorCat0_18);
                    if (succeeded)
                    {
                      *Type_5 = Type0_4;
                      *Changed_6 = (MR_Integer) 0;
                    }
                    else
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Type_5 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MerType_30));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
              MR_Word SubType0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 1))));
              MR_Word SubType_29;

              ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(SubType0_28, &SubType_29, Changed_6);
              switch (*Changed_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Type_5 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubType_29));
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
              MR_Word SubType0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_4, (MR_Integer) 1))));
              MR_Word SubType_16;

              ml_backend__mlds_to_c_type__semicanonicalize_types_in_type_for_c_3_p_0(SubType0_15, &SubType_16, Changed_6);
              switch (*Changed_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Type_5 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SubType_16));
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
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Type_8)
{
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_6, Stream_7, Type_8, (MR_Word) ((MR_Unsigned) 0U));
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word MLDS_Type_8)
{
  switch (MR_tag((MR_Word) MLDS_Type_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "jmp_buf");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Float");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_String");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Char");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_bool");
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Box");
          break;
        case (MR_Integer) 6:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "void *");
          break;
        case (MR_Integer) 7:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_TypeInfo");
          break;
        case (MR_Integer) 8:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_PseudoTypeInfo");
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_prefix\'/5", (MR_String) "prefix has unknown type");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ClassId_15 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_8), (MR_Integer) 1));
        MR_Word QualClassName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_15, (MR_Integer) 0))));
        MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_15, (MR_Integer) 1))));
        MR_Word ClassKind_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassId_15, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_16, (MR_Integer) 0))));
        MR_String ClassName_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_16, (MR_Integer) 2))));

        switch (ClassKind_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_String Var_62;
              MR_String Var_65;
              MR_String Var_140;

              Var_62 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_19);
              Var_65 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_21);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "struct ");
              mercury__io__write_string_4_p_0(Stream_7, Var_62);
              mercury__io__write_string_4_p_0(Stream_7, Var_65);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Arity_17, &Var_140);
              mercury__io__write_string_4_p_0(Stream_7, Var_140);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_s");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_73;
              MR_String Var_76;
              MR_String Var_125;

              Var_73 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_19);
              Var_76 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_21);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Integer /* actually \140enum ");
              mercury__io__write_string_4_p_0(Stream_7, Var_73);
              mercury__io__write_string_4_p_0(Stream_7, Var_76);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Arity_17, &Var_125);
              mercury__io__write_string_4_p_0(Stream_7, Var_125);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_e\' */");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FuncParams_24 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_8), (MR_Integer) 2));

        ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_5_p_0(Opts_6, Stream_7, FuncParams_24);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCategory_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 2))));

            ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_4_p_0(Stream_7, TypeCategory_11);
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_ArrayPtr");
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 1))));

            if ((ArgTypes_25 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Cont");
            else
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "void MR_CALL (*");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntType_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (IntType_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Integer");
                break;
              case (MR_Integer) 4:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "int16_t");
                break;
              case (MR_Integer) 6:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "int32_t");
                break;
              case (MR_Integer) 8:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "int64_t");
                break;
              case (MR_Integer) 2:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "int8_t");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Unsigned");
                break;
              case (MR_Integer) 5:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "uint16_t");
                break;
              case (MR_Integer) 7:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "uint32_t");
                break;
              case (MR_Integer) 9:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "uint64_t");
                break;
              case (MR_Integer) 3:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "uint8_t");
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Box");
          break;
        case (MR_Integer) 5:
          {
            MR_Word Type_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 1))));

            ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(Opts_6, Type_113, Stream_7);
          }
          break;
        case (MR_Integer) 6:
          ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(Opts_6, (MR_Word) ((MR_Unsigned) 20U), Stream_7);
          break;
        case (MR_Integer) 7:
          {
            MR_Word Type_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 1))));

            ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(Opts_6, Type_22, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) " *");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word RttiIdMaybeElement_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 1))));
            MR_String CType_29;
            MR_Word _IsArray_30;

            backend_libs__rtti__rtti_id_maybe_element_c_type_3_p_0(RttiIdMaybeElement_28, &CType_29, &_IsArray_30);
            mercury__io__write_string_4_p_0(Stream_7, CType_29);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word TablingId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_8, (MR_Integer) 1))));
            MR_String CType_116;
            MR_Word _IsArray_115;

            backend_libs__rtti__tabling_id_c_type_3_p_0(TablingId_31, &CType_116, &_IsArray_115);
            mercury__io__write_string_4_p_0(Stream_7, CType_116);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(
  MR_Word Opts_6,
  MR_Word Type_7,
  MR_Word Stream_8)
{
  {
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_6, Stream_8, Type_7);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_6, Stream_8, Type_7, (MR_Word) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Params_8)
{
  {
    MR_Word RetTypes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));

    if ((RetTypes_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "void");
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 0))));

      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_6, Stream_7, Var_33);
        ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_6, Stream_7, Var_33, (MR_Word) ((MR_Unsigned) 0U));
      }
      else
      {
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Opts_6));
        }
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n#error multiple return values\n");
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t{");
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_19, (MR_String) ", ", RetTypes_11, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}");
      }
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " MR_CALL (*");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word MLDS_Type_9,
  MR_Word ArraySize_10)
{
  switch (MR_tag((MR_Word) MLDS_Type_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
        case (MR_Integer) 3:
          {
          }
          break;
        case (MR_Integer) 4:
          {
          }
          break;
        case (MR_Integer) 5:
          {
          }
          break;
        case (MR_Integer) 6:
          {
          }
          break;
        case (MR_Integer) 7:
          {
          }
          break;
        case (MR_Integer) 8:
          {
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_suffix\'/6", (MR_String) "unknown_type");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FuncParams_14 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_9), (MR_Integer) 2));
        MR_Word Parameters_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncParams_14, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        ml_backend__mlds_to_c_type__mlds_output_param_types_5_p_0(Opts_7, Stream_8, Parameters_84);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));

            if (!((ArgTypes_15 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word Var_36;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")(");
              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Opts_7));
              }
              parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_36, (MR_String) ", ", ArgTypes_15, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", void *)");
            }
          }
          break;
        case (MR_Integer) 3:
          {
          }
          break;
        case (MR_Integer) 4:
          {
          }
          break;
        case (MR_Integer) 5:
          if ((ArraySize_10 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[]");
          else
          {
            MR_Integer Size0_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArraySize_10, (MR_Integer) 0))));
            MR_Integer Size_58;
            MR_String Var_70;

            mercury__int__max_3_p_0(Size0_56, (MR_Integer) 1, &Size_58);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Size_58, &Var_70);
            mercury__io__write_string_4_p_0(Stream_8, Var_70);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
          break;
        case (MR_Integer) 6:
          {
          }
          break;
        case (MR_Integer) 7:
          {
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word RttiIdMaybeElement_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
            MR_Word IsArrayType_19;

            IsArrayType_19 = backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_f_0(RttiIdMaybeElement_18);
            switch (IsArrayType_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__mlds_to_c_type__mlds_output_array_type_suffix_4_p_0(Stream_8, ArraySize_10);
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word TablingId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
            MR_Word IsArrayType_43;

            IsArrayType_43 = backend_libs__rtti__tabling_id_has_array_type_1_f_0(TablingId_20);
            switch (IsArrayType_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__mlds_to_c_type__mlds_output_array_type_suffix_4_p_0(Stream_8, ArraySize_10);
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_array_type_suffix_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_1, (MR_String) "[]");
  else
  {
    MR_Integer Size0_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer Size_14;
    MR_String Var_26;

    mercury__int__max_3_p_0(Size0_12, (MR_Integer) 1, &Size_14);
    mercury__io__write_string_4_p_0(Stream_1, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[0]), Size_14, &Var_26);
    mercury__io__write_string_4_p_0(Stream_1, Var_26);
    mercury__io__write_string_4_p_0(Stream_1, (MR_String) "]");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_param_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Parameters_8)
{
  {
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
    if ((Parameters_8 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "void");
    else
    {
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_param_types_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Opts_6));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_16, (MR_String) ", ", Parameters_8, Stream_7);
    }
    mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_4_p_0(
  MR_Word Stream_5,
  MR_Word CtorCat_6)
{
  switch (MR_tag((MR_Word) CtorCat_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_Word");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_Tuple");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_Box");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_mercury_type_prefix\'/4", (MR_String) "ctor_cat_builtin");
        return;
      }
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_Word");
      break;
    case (MR_Integer) 3:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_Word");
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_type____Unify____maybe_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_type____Compare____maybe_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____output_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_type____Unify____output_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____output_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_type____Compare____output_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__mlds_to_c_type__init(void)
{
}

void mercury__ml_backend__mlds_to_c_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__type_ctor_info_output_type_0);
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
