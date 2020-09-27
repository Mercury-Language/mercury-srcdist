/*
** Automatically generated from `mlds_to_c_type.m'
** by the Mercury compiler,
** version rotd-2020-09-27
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
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_VA_TypeInfo_Struct4 ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_type_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0(
  MR_Word Opts_5,
  MR_Word Params_6);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_array_type_suffix_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_4_p_0(
  MR_Word Opts_5,
  MR_Word Parameters_6);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_3_p_0(
  MR_Word CtorCat_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_type____Unify____output_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_type____Compare____output_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_3[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_1[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_TypeInfo_Struct4 ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_type__ml_backend__mlds_to_c_type__type_ctor_info_output_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_c_type____Unify____output_type_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_type____Compare____output_type_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_type",
  (MR_String) "output_type",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
ml_backend__mlds_to_c_type__mlds_output_param_type_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6)
{
  {
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_6, (MR_Integer) 1))));

    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, Type_9);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_9, (MR_Word) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(
  MR_Word Opts_5,
  MR_Word Type_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(");
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, Type_6);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_6, (MR_Word) ((MR_Unsigned) 0U));
    mercury__io__write_string_3_p_0((MR_String) ") ");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word List_5,
  MR_Word OutputPred_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\n#error multiple return values\n");
    mercury__io__write_string_3_p_0((MR_String) "\t{");
    mercury__io__write_list_5_p_0(TypeInfo_for_T_18, List_5, (MR_String) ", ", OutputPred_6);
    mercury__io__write_string_3_p_0((MR_String) "}");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_4_p_0(
  MR_Word Opts_5,
  MR_Word Type_6)
{
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_6, (MR_Word) ((MR_Unsigned) 0U));
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(
  MR_Word Opts_5,
  MR_Word MLDS_Type_6)
{
  switch (MR_tag((MR_Word) MLDS_Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "jmp_buf");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "MR_Float");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "MR_String");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_3_p_0((MR_String) "MR_Char");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_3_p_0((MR_String) "MR_bool");
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_3_p_0((MR_String) "MR_Box");
          break;
        case (MR_Integer) 6:
          mercury__io__write_string_3_p_0((MR_String) "void *");
          break;
        case (MR_Integer) 7:
          mercury__io__write_string_3_p_0((MR_String) "MR_TypeInfo");
          break;
        case (MR_Integer) 8:
          mercury__io__write_string_3_p_0((MR_String) "MR_PseudoTypeInfo");
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_prefix\'/4", (MR_String) "prefix has unknown type");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ClassId_12 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
        MR_Word QualClassName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 0))));
        MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 1))));
        MR_Word ClassKind_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_13, (MR_Integer) 0))));
        MR_String ClassName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_13, (MR_Integer) 2))));

        switch (ClassKind_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_String Var_59;
              MR_String Var_62;
              MR_String Var_148;

              Var_59 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_16);
              Var_62 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_18);
              mercury__io__write_string_3_p_0((MR_String) "struct ");
              mercury__io__write_string_3_p_0(Var_59);
              mercury__io__write_string_3_p_0(Var_62);
              mercury__io__write_string_3_p_0((MR_String) "_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_3[0]), Arity_14, &Var_148);
              mercury__io__write_string_3_p_0(Var_148);
              mercury__io__write_string_3_p_0((MR_String) "_s");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_70;
              MR_String Var_73;
              MR_String Var_133;

              Var_70 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_16);
              Var_73 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_18);
              mercury__io__write_string_3_p_0((MR_String) "MR_Integer /* actually \140enum ");
              mercury__io__write_string_3_p_0(Var_70);
              mercury__io__write_string_3_p_0(Var_73);
              mercury__io__write_string_3_p_0((MR_String) "_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_3[0]), Arity_14, &Var_133);
              mercury__io__write_string_3_p_0(Var_133);
              mercury__io__write_string_3_p_0((MR_String) "_e\' */");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FuncParams_21 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));

        ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0(Opts_5, FuncParams_21);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCategory_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 2))));

            ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_3_p_0(TypeCategory_9);
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "MR_ArrayPtr");
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgTypes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

            if ((ArgTypes_22 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_3_p_0((MR_String) "MR_Cont");
            else
              mercury__io__write_string_3_p_0((MR_String) "void MR_CALL (*");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Var_125) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                break;
              case (MR_Integer) 4:
                mercury__io__write_string_3_p_0((MR_String) "int16_t");
                break;
              case (MR_Integer) 6:
                mercury__io__write_string_3_p_0((MR_String) "int32_t");
                break;
              case (MR_Integer) 8:
                mercury__io__write_string_3_p_0((MR_String) "int64_t");
                break;
              case (MR_Integer) 2:
                mercury__io__write_string_3_p_0((MR_String) "int8_t");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                break;
              case (MR_Integer) 5:
                mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                break;
              case (MR_Integer) 7:
                mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                break;
              case (MR_Integer) 9:
                mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                break;
              case (MR_Integer) 3:
                mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_3_p_0((MR_String) "MR_Box");
          break;
        case (MR_Integer) 5:
          {
            MR_Word Type_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

            ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_120);
          }
          break;
        case (MR_Integer) 6:
          ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, (MR_Word) ((MR_Unsigned) 20U));
          break;
        case (MR_Integer) 7:
          {
            MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

            ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_19);
            mercury__io__write_string_3_p_0((MR_String) " *");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word RttiIdMaybeElement_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
            MR_String CType_26;
            MR_Word _IsArray_27;

            backend_libs__rtti__rtti_id_maybe_element_c_type_3_p_0(RttiIdMaybeElement_25, &CType_26, &_IsArray_27);
            mercury__io__write_string_3_p_0(CType_26);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word TablingId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
            MR_String CType_123;
            MR_Word _IsArray_122;

            backend_libs__rtti__tabling_id_c_type_3_p_0(TablingId_28, &CType_123, &_IsArray_122);
            mercury__io__write_string_3_p_0(CType_123);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(
  MR_Word Opts_5,
  MR_Word Type_6)
{
  {
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, Type_6);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_6, (MR_Word) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0(
  MR_Word Opts_5,
  MR_Word Params_6)
{
  {
    MR_Word RetTypes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 1))));

    if ((RetTypes_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "void");
    else
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_9, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_9, (MR_Integer) 0))));

      if ((Var_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, Var_30);
        ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Var_30, (MR_Word) ((MR_Unsigned) 0U));
      }
      else
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Opts_5));
        }
        mercury__io__write_string_3_p_0((MR_String) "\n#error multiple return values\n");
        mercury__io__write_string_3_p_0((MR_String) "\t{");
        mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetTypes_9, (MR_String) ", ", Var_17);
        mercury__io__write_string_3_p_0((MR_String) "}");
      }
    }
    mercury__io__write_string_3_p_0((MR_String) " MR_CALL (*");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(
  MR_Word Opts_6,
  MR_Word MLDS_Type_7,
  MR_Word ArraySize_8)
{
  switch (MR_tag((MR_Word) MLDS_Type_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_7)) {
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_suffix\'/5", (MR_String) "unknown_type");
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
        MR_Word FuncParams_12 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_7), (MR_Integer) 2));
        MR_Word Parameters_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncParams_12, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) ")");
        ml_backend__mlds_to_c_type__mlds_output_param_types_4_p_0(Opts_6, Parameters_67);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 0))))) {
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
            MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))));

            if (!((ArgTypes_13 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word Var_35;

              mercury__io__write_string_3_p_0((MR_String) ")(");
              {
                Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Opts_6));
              }
              mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), ArgTypes_13, (MR_String) ", ", Var_35);
              mercury__io__write_string_3_p_0((MR_String) ", void *)");
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
          if ((ArraySize_8 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__io__write_string_3_p_0((MR_String) "[]");
          else
          {
            MR_Integer Size0_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArraySize_8, (MR_Integer) 0))));
            MR_Integer Size_53;

            mercury__int__max_3_p_0(Size0_51, (MR_Integer) 1, &Size_53);
            mercury__io__write_char_3_p_0((MR_Char) 91);
            mercury__io__write_int_3_p_0(Size_53);
            mercury__io__write_char_3_p_0((MR_Char) 93);
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
            MR_Word RttiIdMaybeElement_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))));
            MR_Word IsArrayType_17;

            IsArrayType_17 = backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_f_0(RttiIdMaybeElement_16);
            switch (IsArrayType_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((ArraySize_8 == (MR_Word) ((MR_Unsigned) 0U)))
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                else
                {
                  MR_Integer Size0_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArraySize_8, (MR_Integer) 0))));
                  MR_Integer Size_79;

                  mercury__int__max_3_p_0(Size0_77, (MR_Integer) 1, &Size_79);
                  mercury__io__write_char_3_p_0((MR_Char) 91);
                  mercury__io__write_int_3_p_0(Size_79);
                  mercury__io__write_char_3_p_0((MR_Char) 93);
                }
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
            MR_Word TablingId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))));
            MR_Word IsArrayType_41;

            IsArrayType_41 = backend_libs__rtti__tabling_id_has_array_type_1_f_0(TablingId_18);
            switch (IsArrayType_41) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__mlds_to_c_type__mlds_output_array_type_suffix_3_p_0(ArraySize_8);
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
ml_backend__mlds_to_c_type__mlds_output_array_type_suffix_3_p_0(
  MR_Word HeadVar__1_1)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "[]");
  else
  {
    MR_Integer Size0_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Size_11;

    mercury__int__max_3_p_0(Size0_9, (MR_Integer) 1, &Size_11);
    mercury__io__write_char_3_p_0((MR_Char) 91);
    mercury__io__write_int_3_p_0(Size_11);
    mercury__io__write_char_3_p_0((MR_Char) 93);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_param_type_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_types_4_p_0(
  MR_Word Opts_5,
  MR_Word Parameters_6)
{
  {
    mercury__io__write_char_3_p_0((MR_Char) 40);
    if ((Parameters_6 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "void");
    else
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_param_types_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Opts_5));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_6, (MR_String) ", ", Var_15);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_3_p_0(
  MR_Word CtorCat_4)
{
  switch (MR_tag((MR_Word) CtorCat_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "MR_Tuple");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_3_p_0((MR_String) "MR_Box");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_mercury_type_prefix\'/3", (MR_String) "ctor_cat_builtin");
        return;
      }
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_3_p_0((MR_String) "MR_Word");
      break;
    case (MR_Integer) 3:
      mercury__io__write_string_3_p_0((MR_String) "MR_Word");
      break;
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
