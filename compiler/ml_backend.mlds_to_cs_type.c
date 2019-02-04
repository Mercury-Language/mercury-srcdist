/*
** Automatically generated from `mlds_to_cs_type.m'
** by the Mercury compiler,
** version rotd-2019-01-27
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
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
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__458__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__func__type_to_string_for_csharp__214__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static void MR_CALL 
ml_backend__mlds_to_cs_type__boxed_type_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_type__mercury_type_to_string_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word CtorCat_8,
  MR_String * String_9,
  MR_Word * ArrayDims_10);

static void MR_CALL 
ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word ArgsTypes_5,
  MR_String * String_6);

static void MR_CALL 
ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_1[2][6];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_4[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_6[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_7[2][3];


/* sealed */ struct ml_backend__mlds_to_cs_type__vector_common_type_3_0_s {
  const MR_String ml_backend__mlds_to_cs_type__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_3_0_s ml_backend__mlds_to_cs_type_vector_common_3[10];

/* sealed */ struct ml_backend__mlds_to_cs_type__vector_common_type_5_0_s {
  const MR_String ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_0;
  const MR_Word ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_5_0_s ml_backend__mlds_to_cs_type_vector_common_5[4];



static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_1[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_4[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_type_scalar_common_7[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_type__boxed_type_to_string_for_csharp_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_3_0_s ml_backend__mlds_to_cs_type_vector_common_3[10] = {
  /* row 0 */   {     (MR_String) "int" },
  /* row 1 */   {     (MR_String) "uint" },
  /* row 2 */   {     (MR_String) "sbyte" },
  /* row 3 */   {     (MR_String) "byte" },
  /* row 4 */   {     (MR_String) "short" },
  /* row 5 */   {     (MR_String) "ushort" },
  /* row 6 */   {     (MR_String) "int" },
  /* row 7 */   {     (MR_String) "uint" },
  /* row 8 */   {     (MR_String) "long" },
  /* row 9 */   {     (MR_String) "ulong" },
};

static /* final */ const struct ml_backend__mlds_to_cs_type__vector_common_type_5_0_s ml_backend__mlds_to_cs_type_vector_common_5[4] = {
  /* row 0 */
  {
    (MR_String) "runtime.TypeInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_String) "runtime.TypeCtorInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    (MR_String) "/* typeclass_info */ object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_type_scalar_common_4[0]))
  },
  /* row 3 */
  {
    (MR_String) "/* base_typeclass_info */ object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_type_scalar_common_4[0]))
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__458__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17)
{
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
    MR_Word MLDS_ArgType_13;

    MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, LambdaHeadVar__1_16);
    ml_backend__mlds_to_cs_type__boxed_type_to_string_for_csharp_3_p_0(Info_4, MLDS_ArgType_13, LambdaHeadVar__2_17);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_type__IntroducedFrom__func__type_to_string_for_csharp__214__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 1))));

    return LambdaHeadVar__2_44;
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_cs_type__type_is_array_for_csharp_1_f_0(
  MR_Word Type_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word IsArray_4;

    if (succeeded)
    {
      IsArray_4 = (MR_Integer) 0;
    }
    else
    {
      succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        IsArray_4 = (MR_Integer) 0;
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          IsArray_4 = (MR_Integer) 0;
        }
        else
        {
          MR_Word CtorCat_9;

          succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CtorCat_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2))));
            IsArray_4 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_9);
          }
          else
          {
            MR_Word RttiIdMaybeElement_10;

            succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
            if (succeeded)
            {
              RttiIdMaybeElement_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
              {
                MR_String _TypeName_11;

                backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(RttiIdMaybeElement_10, &_TypeName_11, &IsArray_4);
              }
            }
            else
              IsArray_4 = (MR_Integer) 1;
          }
        }
      }
    }
    return IsArray_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_type__boxed_type_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    ml_backend__mlds_to_target_util__array_dimension_to_string_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_type__boxed_type_to_string_for_csharp_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * String_6)
{
  {
    MR_String String0_7;
    MR_Word ArrayDims_8;
    MR_Word RevBrackets_9;
    MR_Word Brackets_10;
    MR_Word Var_12;

    ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_4, Type_5, &String0_7, &ArrayDims_8);
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_7[1]), ArrayDims_8, &RevBrackets_9);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevBrackets_9, &Brackets_10);
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (String0_7));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Brackets_10));
    }
    mercury__string__append_list_2_p_0(Var_12, String_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6)
{
  {
    MR_String String_18;
    MR_Word ArrayDims_19;
    MR_Word Var_21;

    ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_5, MLDS_Type_6, &String_18, &ArrayDims_19);
    mercury__io__write_string_3_p_0(String_18);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_19, (MR_Word) ((MR_Unsigned) 0U));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_21);
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_44;

    conv0_LambdaHeadVar__2_44 = ml_backend__mlds_to_cs_type__IntroducedFrom__func__type_to_string_for_csharp__214__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(
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
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.type_to_string_for_csharp\'/4", (MR_String) "unknown type");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassId_21 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
          MR_Word Name_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_21, (MR_Integer) 0))));
          MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_21, (MR_Integer) 1))));

          ml_backend__mlds_to_cs_name__qual_class_name_to_string_for_csharp_3_p_0(Name_22, Arity_23, String_7);
          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_26;
          MR_Word RetTypes_27;
          MR_Word ArgTypes_28;
          MR_Word Var_41 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));

          Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
          RetTypes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
          ArgTypes_28 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_7[0]), Args_26);
          *String_7 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_5, ArgTypes_28, RetTypes_27);
          *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word CtorCat_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 2))));
              MR_String SubstituteName_11;
              MR_Word ArrayDims0_12;

              succeeded = ml_backend__mlds_to_cs_type__hand_defined_type_for_csharp_4_p_0(Type_9, CtorCat_10, &SubstituteName_11, &ArrayDims0_12);
              if (succeeded)
              {
                *String_7 = SubstituteName_11;
                *ArrayDims_8 = ArrayDims0_12;
              }
              else
              {
                succeeded = (CtorCat_10 == (MR_Word) ((MR_Unsigned) 8U));
                if (succeeded)
                {
                  *String_7 = (MR_String) "/* builtin_dummy */ object";
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_75;

                  Var_75 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_75);
                  if (succeeded)
                  {
                    *String_7 = (MR_String) "/* c_pointer */ object";
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                    ml_backend__mlds_to_cs_type__mercury_type_to_string_for_csharp_5_p_0(Info_5, Type_9, CtorCat_10, String_7, ArrayDims_8);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ElementType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word Var_54;

              succeeded = ((((MR_tag((MR_Word) ElementType_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ElementType_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ElementType_13, (MR_Integer) 2))));
                succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 12U));
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
                  MR_Word ArrayDims0_58;

                  ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_5, ElementType_13, String_7, &ArrayDims0_58);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_58));
                  }
                }
                else
                {
                  *String_7 = (MR_String) "object";
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_type_scalar_common_4[0]));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "/* cont_type */ object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word IntType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))) & (MR_Integer) 15);

              *String_7 = ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(IntType_16);
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ForeignType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.type_to_string_for_csharp\'/4", (MR_String) "c foreign_type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.type_to_string_for_csharp\'/4", (MR_String) "java foreign_type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_17, (MR_Integer) 0))));

                    *String_7 = (MR_String) (Var_53);
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.type_to_string_for_csharp\'/4", (MR_String) "erlang foreign_type");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Type_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word ArrayDims0_64;

              ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_5, Type_63, String_7, &ArrayDims0_64);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_64));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArrayDims0_66;

              ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_5, (MR_Word) ((MR_Unsigned) 20U), String_7, &ArrayDims0_66);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_66));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Type_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_MLDS_Type_6 = Type_62;

              // direct tailcall eliminated
              ;
              MLDS_Type_6 = next_value_of_MLDS_Type_6;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word RttiIdMaybeElement_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_33;

              backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(RttiIdMaybeElement_32, String_7, &IsArray_33);
              switch (IsArray_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_type_scalar_common_4[0]));
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TablingId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_72;

              backend_libs__rtti__tabling_id_java_type_3_p_0(TablingId_34, String_7, &IsArray_72);
              switch (IsArray_72) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_type_scalar_common_4[0]));
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
ml_backend__mlds_to_cs_type__mercury_type_to_string_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word CtorCat_8,
  MR_String * String_9,
  MR_Word * ArrayDims_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) CtorCat_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *String_9 = (MR_String) "/* closure */ object";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_type_scalar_common_4[0]));
            }
            break;
          case (MR_Integer) 1:
            {
              *String_9 = (MR_String) "/* tuple */ object";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_type_scalar_common_4[0]));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtor_31;
              MR_Word ArgsTypes_32;
              MR_Word ClassName_33;
              MR_Integer ClassArity_34;
              MR_Word ClassKind_36;
              MR_Word ClassId_37;
              MR_Word MLDS_Type_38;
              MR_String TypeString_39;
              MR_Word OutputGenerics_40;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_31, &ArgsTypes_32);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_31, &ClassName_33, &ClassArity_34);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                ClassKind_36 = (MR_Integer) 3;
              }
              else
                ClassKind_36 = (MR_Integer) 0;
              {
                ClassId_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (ClassName_33));
                MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (ClassArity_34));
                MR_hl_field(MR_mktag(0), ClassId_37, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_36));
              }
              MLDS_Type_38 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
              ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_6, MLDS_Type_38, &TypeString_39, ArrayDims_10);
              OutputGenerics_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              switch (OutputGenerics_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_39;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_41;

                    ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0(Info_6, ArgsTypes_32, &GenericsString_41);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_39, GenericsString_41);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *String_9 = (MR_String) "object";
              *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 4:
            {
              *String_9 = (MR_String) "builtin.Void_0";
              *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *String_9 = (MR_String) "double";
                    *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *String_9 = (MR_String) "int";
                    *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *String_9 = (MR_String) "string";
                    *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))) & (MR_Integer) 15);

                *String_9 = ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(IntType_11);
                *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_31;
          MR_Word ArgsTypes_32;
          MR_Word ClassName_33;
          MR_Integer ClassArity_34;
          MR_Word ClassKind_36;
          MR_Word ClassId_37;
          MR_Word MLDS_Type_38;
          MR_String TypeString_39;
          MR_Word OutputGenerics_40;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_31, &ArgsTypes_32);
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_31, &ClassName_33, &ClassArity_34);
          succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_Integer) 2);
          if (succeeded)
          {
            ClassKind_36 = (MR_Integer) 3;
          }
          else
            ClassKind_36 = (MR_Integer) 0;
          {
            ClassId_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (ClassName_33));
            MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (ClassArity_34));
            MR_hl_field(MR_mktag(0), ClassId_37, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_36));
          }
          MLDS_Type_38 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
          ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_6, MLDS_Type_38, &TypeString_39, ArrayDims_10);
          OutputGenerics_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
          switch (OutputGenerics_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *String_9 = TypeString_39;
              break;
            case (MR_Integer) 0:
              {
                MR_String GenericsString_41;

                ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0(Info_6, ArgsTypes_32, &GenericsString_41);
                *String_9 = mercury__string__f_43_43_2_f_0(TypeString_39, GenericsString_41);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // direct tailcall eliminated
              ;
              CtorCat_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_cs_type_scalar_common_4[1]));
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtor_31;
              MR_Word ArgsTypes_32;
              MR_Word ClassName_33;
              MR_Integer ClassArity_34;
              MR_Word ClassKind_36;
              MR_Word ClassId_37;
              MR_Word MLDS_Type_38;
              MR_String TypeString_39;
              MR_Word OutputGenerics_40;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_31, &ArgsTypes_32);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_31, &ClassName_33, &ClassArity_34);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                ClassKind_36 = (MR_Integer) 3;
              }
              else
                ClassKind_36 = (MR_Integer) 0;
              {
                ClassId_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (ClassName_33));
                MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (ClassArity_34));
                MR_hl_field(MR_mktag(0), ClassId_37, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_36));
              }
              MLDS_Type_38 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
              ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_6, MLDS_Type_38, &TypeString_39, ArrayDims_10);
              OutputGenerics_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              switch (OutputGenerics_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_39;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_41;

                    ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0(Info_6, ArgsTypes_32, &GenericsString_41);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_39, GenericsString_41);
                  }
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
ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_17;

    ml_backend__mlds_to_cs_type__IntroducedFrom__pred__generic_args_types_to_string_for_csharp__458__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0(
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
      MR_hl_field(MR_mktag(0), ToString_9, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), ToString_9, 1) = ((MR_Box) (ml_backend__mlds_to_cs_type__generic_args_types_to_string_for_csharp_3_p_0_1));
      MR_hl_field(MR_mktag(0), ToString_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToString_9, 3) = ((MR_Box) (Info_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToString_9, ArgsTypes_5, &ArgsTypesStrings_14);
    ArgsTypesString_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsTypesStrings_14);
    Var_20 = mercury__string__f_43_43_2_f_0(ArgsTypesString_15, (MR_String) ">");
    *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_20);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__hand_defined_type_for_csharp_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
    {
      MR_Word CtorCatSystem_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 1))) & (MR_Integer) 3);

      *SubstituteName_7 = ((&ml_backend__mlds_to_cs_type_vector_common_5[0 + CtorCatSystem_9]))->ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_0;
      *ArrayDims_8 = ((&ml_backend__mlds_to_cs_type_vector_common_5[0 + CtorCatSystem_9]))->ml_backend__mlds_to_cs_type__vector_common_type_5_0__vct_5_f_1;
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word CtorCatUser_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 1))) & (MR_Integer) 7);
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
}

MR_bool MR_CALL 
ml_backend__mlds_to_cs_type__csharp_builtin_type_2_p_0(
  MR_Word Type_3,
  MR_String * TargetType_4)
{
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word MerType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
              MR_Word TypeCtorCat_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2))));

              if (((MR_tag((MR_Word) MerType_6)) == (MR_Integer) 2))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_type.csharp_builtin_type\'/2", (MR_String) "mercury_nb_type but builtin_type");
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) MerType_6)) == (MR_Integer) 1))
              {
                succeeded = (TypeCtorCat_7 == (MR_Word) ((MR_Unsigned) 8U));
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
          case (MR_Integer) 3:
            {
              MR_Word IntType_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))) & (MR_Integer) 15);

              *TargetType_4 = ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(IntType_5);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_type__int_type_to_csharp_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&ml_backend__mlds_to_cs_type_vector_common_3[0 + HeadVar__1_1]))->ml_backend__mlds_to_cs_type__vector_common_type_3_0__vct_3_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_String_6;

    ml_backend__mlds_to_cs_type__boxed_type_to_string_for_csharp_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_String_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_String_6));
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(
  MR_Word Info_5,
  MR_Word ArgTypes_6,
  MR_Word RetTypes_7)
{
  {
    MR_String String_8;
    MR_Integer Arity_9;
    MR_Integer NumRets_10;
    MR_Word ArgTypesStrings_11;
    MR_Word RetTypesStrings_12;
    MR_String TypesString_13;
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
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_type_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, ArgTypes_6, &ArgTypesStrings_11);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, RetTypes_7, &RetTypesStrings_12);
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgTypesStrings_11, RetTypesStrings_12);
    TypesString_13 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_17);
    Var_33 = mercury__string__f_43_43_2_f_0(TypesString_13, (MR_String) ">");
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_33);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_2[0]), NumRets_10, &Var_36);
    Var_43 = mercury__string__f_43_43_2_f_0(Var_36, Var_35);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_r", Var_43);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_type_scalar_common_2[0]), Arity_9, &Var_46);
    Var_53 = mercury__string__f_43_43_2_f_0(Var_46, Var_45);
    String_8 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.MethodPtr", Var_53);
    return String_8;
  }
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
