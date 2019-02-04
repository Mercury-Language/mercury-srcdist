/*
** Automatically generated from `mlds_to_java_type.m'
** by the Mercury compiler,
** version rotd-2018-09-25
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
#include "backend_libs.foreign.mih"
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
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_util.mih"
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




static void MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__generic_args_types_to_string_for_java__387__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17);

static void MR_CALL 
ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_7[1][3];


/* sealed */ struct ml_backend__mlds_to_java_type__vector_common_type_2_0_s {
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_0;
  const MR_Word ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_2_0_s ml_backend__mlds_to_java_type_vector_common_2[14];

/* sealed */ struct ml_backend__mlds_to_java_type__vector_common_type_3_0_s {
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_0;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_1;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_2;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_3;
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_3_0_s ml_backend__mlds_to_java_type_vector_common_3[16];

/* sealed */ struct ml_backend__mlds_to_java_type__vector_common_type_4_0_s {
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_0;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_1;
  const MR_String ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_2;
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_4_0_s ml_backend__mlds_to_java_type_vector_common_4[10];



static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) ((MR_Integer) 4))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_type_scalar_common_7[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_type_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_2_0_s ml_backend__mlds_to_java_type_vector_common_2[14] = {
  /* row 0 */
  {
    (MR_String) "jmercury.runtime.TypeInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_String) "jmercury.runtime.TypeCtorInfo_Struct",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    (MR_String) "/* typeclass_info */ java.lang.Object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_type_scalar_common_1[1]))
  },
  /* row 3 */
  {
    (MR_String) "/* base_typeclass_info */ java.lang.Object",
    (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_type_scalar_common_1[1]))
  },
  /* row 4 */
  {
    (MR_String) "int",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 5 */
  {
    (MR_String) "int",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 6 */
  {
    (MR_String) "byte",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 7 */
  {
    (MR_String) "byte",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 8 */
  {
    (MR_String) "short",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 9 */
  {
    (MR_String) "short",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 10 */
  {
    (MR_String) "int",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 11 */
  {
    (MR_String) "int",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 12 */
  {
    (MR_String) "long",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 13 */
  {
    (MR_String) "long",
    (MR_Word) ((MR_Unsigned) 0U)
  },
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_3_0_s ml_backend__mlds_to_java_type_vector_common_3[16] = {
  /* row 0 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue",
    (MR_String) "0"
  },
  /* row 1 */
  {
    (MR_String) "double",
    (MR_String) "java.lang.Double",
    (MR_String) "doubleValue",
    (MR_String) "0"
  },
  /* row 2 */
  {
    (MR_String) "char",
    (MR_String) "java.lang.Character",
    (MR_String) "charValue",
    (MR_String) "\'\\u0000\'"
  },
  /* row 3 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    (MR_String) "long",
    (MR_String) "java.lang.Long",
    (MR_String) "longValue",
    (MR_String) "0"
  },
  /* row 5 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue",
    (MR_String) "0"
  },
  /* row 6 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    (MR_String) "float",
    (MR_String) "java.lang.Float",
    (MR_String) "floatValue",
    (MR_String) "0"
  },
  /* row 8 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue",
    (MR_String) "0"
  },
  /* row 9 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0),
    (MR_String) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    (MR_String) "boolean",
    (MR_String) "java.lang.Boolean",
    (MR_String) "booleanValue",
    (MR_String) "false"
  },
};

static /* final */ const struct ml_backend__mlds_to_java_type__vector_common_type_4_0_s ml_backend__mlds_to_java_type_vector_common_4[10] = {
  /* row 0 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 1 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 2 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue"
  },
  /* row 3 */
  {
    (MR_String) "byte",
    (MR_String) "java.lang.Byte",
    (MR_String) "byteValue"
  },
  /* row 4 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue"
  },
  /* row 5 */
  {
    (MR_String) "short",
    (MR_String) "java.lang.Short",
    (MR_String) "shortValue"
  },
  /* row 6 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 7 */
  {
    (MR_String) "int",
    (MR_String) "java.lang.Integer",
    (MR_String) "intValue"
  },
  /* row 8 */
  {
    (MR_String) "long",
    (MR_String) "java.lang.Long",
    (MR_String) "longValue"
  },
  /* row 9 */
  {
    (MR_String) "long",
    (MR_String) "java.lang.Long",
    (MR_String) "longValue"
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ml_backend__mlds_to_java_type__IntroducedFrom__pred__generic_args_types_to_string_for_java__387__1_3_p_0(
  MR_Word Info_4,
  MR_Word LambdaHeadVar__1_16,
  MR_String * LambdaHeadVar__2_17)
{
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
    MR_Word MLDS_ArgType_13;

    MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, LambdaHeadVar__1_16);
    ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_4, MLDS_ArgType_13, LambdaHeadVar__2_17);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0_1(
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
ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;
    MR_String JavaBoxedName_8;
    MR_String Var_7;
    MR_String Var_9;

    succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_5, &Var_7, &JavaBoxedName_8, &Var_9);
    if (succeeded)
      *String_6 = JavaBoxedName_8;
    else
    {
      MR_String String0_10;
      MR_Word ArrayDims_11;
      MR_Word RevBrackets_12;
      MR_Word Brackets_13;
      MR_Word Var_15;

      ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_4, Type_5, &String0_10, &ArrayDims_11);
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_type_scalar_common_7[0]), ArrayDims_11, &RevBrackets_12);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevBrackets_12, &Brackets_13);
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (String0_10));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Brackets_13));
      }
      mercury__string__append_list_2_p_0(Var_15, String_6);
    }
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_java_type__type_is_array_for_java_1_f_0(
  MR_Word Type_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 4)));
    MR_Word IsArray_4;

    if (succeeded)
    {
      IsArray_4 = (MR_Integer) 0;
    }
    else
    {
      succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        IsArray_4 = (MR_Integer) 0;
      }
      else
      {
        MR_Word CtorCat_9;

        succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 0)));
        if (succeeded)
        {
          CtorCat_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 3))));
          IsArray_4 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_9);
        }
        else
        {
          MR_Word RttiIdMaybeElement_10;

          succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))) == (MR_Integer) 7)));
          if (succeeded)
          {
            RttiIdMaybeElement_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
            {
              MR_String _JavaTypeName_11;

              backend_libs__rtti__rtti_id_maybe_element_java_type_3_p_0(RttiIdMaybeElement_10, &_JavaTypeName_11, &IsArray_4);
            }
          }
          else
            IsArray_4 = (MR_Integer) 1;
        }
      }
    }
    return IsArray_4;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word MLDS_Type_6)
{
  {
    MR_String String_18;
    MR_Word ArrayDims_19;
    MR_Word Var_21;

    ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_5, MLDS_Type_6, &String_18, &ArrayDims_19);
    mercury__io__write_string_3_p_0(String_18);
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_19, (MR_Word) ((MR_Unsigned) 0U));
    ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_21);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(
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
              *String_7 = (MR_String) "boolean";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              *String_7 = (MR_String) "int";
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
              *String_7 = (MR_String) "double";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 5:
            {
              *String_7 = (MR_String) "int";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 6:
            {
              *String_7 = (MR_String) "/* generic_type */ java.lang.Object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 7:
            {
              *String_7 = (MR_String) "/* env_ptr */ java.lang.Object";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 8:
            {
              *String_7 = (MR_String) "jmercury.runtime.TypeInfo";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 9:
            {
              *String_7 = (MR_String) "jmercury.runtime.PseudoTypeInfo";
              *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.type_to_string_for_java\'/4", (MR_String) "unknown type");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Arity_25;
          MR_Word Var_41 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
          MR_Word Name_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));

          Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
          ml_backend__mlds_to_java_name__qual_class_name_to_string_for_java_3_p_0(Name_57, Arity_25, String_7);
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word CtorCat_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 3))));
              MR_String SubstituteName_12;
              MR_Word ArrayDims0_13;

              succeeded = ml_backend__mlds_to_java_type__hand_defined_type_for_java_4_p_0(Type_9, CtorCat_11, &SubstituteName_12, &ArrayDims0_13);
              if (succeeded)
              {
                *String_7 = SubstituteName_12;
                *ArrayDims_8 = ArrayDims0_13;
              }
              else
              {
                succeeded = (CtorCat_11 == (MR_Word) ((MR_Unsigned) 8U));
                if (succeeded)
                {
                  *String_7 = (MR_String) "/* builtin_dummy */ java.lang.Object";
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_64;

                  Var_64 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_9, Var_64);
                  if (succeeded)
                  {
                    *String_7 = (MR_String) "/* c_pointer */ java.lang.Object";
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                    ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0(Info_5, Type_9, CtorCat_11, String_7, ArrayDims_8);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ElementType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word Var_49;

              succeeded = ((((MR_tag((MR_Word) ElementType_14)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ElementType_14, (MR_Integer) 3))));
                succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 12U));
              }
              if (succeeded)
              {
                *String_7 = (MR_String) "/* Array */ java.lang.Object";
                *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_String Var_17;
                MR_String Var_18;
                MR_String Var_19;

                succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(ElementType_14, &Var_17, &Var_18, &Var_19);
                if (succeeded)
                {
                  MR_Word ArrayDims0_53;

                  ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_5, ElementType_14, String_7, &ArrayDims0_53);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_53));
                  }
                }
                else
                {
                  *String_7 = (MR_String) "java.lang.Object";
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_type_scalar_common_1[1]));
                }
              }
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
              MR_Word ForeignType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ForeignType_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.type_to_string_for_java\'/4", (MR_String) "c foreign_type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignType_20, (MR_Integer) 0))));

                    *String_7 = (MR_String) (Var_48);
                    *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.type_to_string_for_java\'/4", (MR_String) "csharp foreign_type");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_type.type_to_string_for_java\'/4", (MR_String) "erlang foreign_type");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word ArrayDims0_60;

              ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_5, Type_59, String_7, &ArrayDims0_60);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_60));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArrayDims0_62;

              ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_5, (MR_Word) ((MR_Unsigned) 24U), String_7, &ArrayDims0_62);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ArrayDims_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArrayDims0_62));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Type_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_MLDS_Type_6 = Type_58;

              // direct tailcall eliminated
              ;
              MLDS_Type_6 = next_value_of_MLDS_Type_6;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word RttiIdMaybeElement_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_31;

              backend_libs__rtti__rtti_id_maybe_element_java_type_3_p_0(RttiIdMaybeElement_30, String_7, &IsArray_31);
              switch (IsArray_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_type_scalar_common_1[1]));
                  break;
                case (MR_Integer) 1:
                  *ArrayDims_8 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TablingId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
              MR_Word IsArray_63;

              backend_libs__rtti__tabling_id_java_type_3_p_0(TablingId_32, String_7, &IsArray_63);
              switch (IsArray_63) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ArrayDims_8 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_type_scalar_common_1[1]));
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
ml_backend__mlds_to_java_type__mercury_type_to_string_for_java_5_p_0(
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
              *String_9 = (MR_String) "/* closure */ java.lang.Object";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_type_scalar_common_1[1]));
            }
            break;
          case (MR_Integer) 1:
            {
              *String_9 = (MR_String) "/* tuple */ java.lang.Object";
              *ArrayDims_10 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_type_scalar_common_1[1]));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtor_73;
              MR_Word ArgsTypes_74;
              MR_Word ClassName_75;
              MR_Integer ClassArity_76;
              MR_Word ClassKind_78;
              MR_Word MLDS_Type_79;
              MR_String TypeString_80;
              MR_Word OutputGenerics_81;
              MR_Word Var_83;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_73, &ArgsTypes_74);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_73, &ClassName_75, &ClassArity_76);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                ClassKind_78 = (MR_Integer) 3;
              }
              else
                ClassKind_78 = (MR_Integer) 0;
              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (ClassName_75));
                MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ClassArity_76));
                MR_hl_field(MR_mktag(0), Var_83, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_78));
              }
              MLDS_Type_79 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_83)));
              ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_6, MLDS_Type_79, &TypeString_80, ArrayDims_10);
              OutputGenerics_81 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              switch (OutputGenerics_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_80;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_82;

                    ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_74, &GenericsString_82);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_80, GenericsString_82);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TVar_11;
              MR_Word TypeInfo_65_65;
              MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              MR_Word Var_22;
              MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6))));

              succeeded = (Var_21 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Type_7)) == (MR_Integer) 0);
                if (succeeded)
                {
                  TVar_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 0))));
                  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 1))));
                  succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeInfo_65_65 = (MR_Word) (&ml_backend__mlds_to_java_type_scalar_common_1[0]);
                    succeeded = mercury__list__member_2_p_0(TypeInfo_65_65, ((MR_Box) (TVar_11)), Var_55);
                  }
                }
              }
              if (succeeded)
                ml_backend__mlds_to_target_util__generic_tvar_to_string_2_p_0(TVar_11, String_9);
              else
                *String_9 = (MR_String) "java.lang.Object";
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
          MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_66)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_66)) {
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
                    *String_9 = (MR_String) "java.lang.String";
                    *ArrayDims_10 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0))) & (MR_Integer) 15);

                *String_9 = ((&ml_backend__mlds_to_java_type_vector_common_2[4 + Var_67]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_0;
                *ArrayDims_10 = ((&ml_backend__mlds_to_java_type_vector_common_2[4 + Var_67]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_73;
          MR_Word ArgsTypes_74;
          MR_Word ClassName_75;
          MR_Integer ClassArity_76;
          MR_Word ClassKind_78;
          MR_Word MLDS_Type_79;
          MR_String TypeString_80;
          MR_Word OutputGenerics_81;
          MR_Word Var_83;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_73, &ArgsTypes_74);
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_73, &ClassName_75, &ClassArity_76);
          succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_Integer) 2);
          if (succeeded)
          {
            ClassKind_78 = (MR_Integer) 3;
          }
          else
            ClassKind_78 = (MR_Integer) 0;
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (ClassName_75));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ClassArity_76));
            MR_hl_field(MR_mktag(0), Var_83, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_78));
          }
          MLDS_Type_79 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_83)));
          ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_6, MLDS_Type_79, &TypeString_80, ArrayDims_10);
          OutputGenerics_81 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
          switch (OutputGenerics_81) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *String_9 = TypeString_80;
              break;
            case (MR_Integer) 0:
              {
                MR_String GenericsString_82;

                ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_74, &GenericsString_82);
                *String_9 = mercury__string__f_43_43_2_f_0(TypeString_80, GenericsString_82);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // direct tailcall eliminated
              ;
              CtorCat_8 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__mlds_to_java_type_scalar_common_1[2]));
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtor_73;
              MR_Word ArgsTypes_74;
              MR_Word ClassName_75;
              MR_Integer ClassArity_76;
              MR_Word ClassKind_78;
              MR_Word MLDS_Type_79;
              MR_String TypeString_80;
              MR_Word OutputGenerics_81;
              MR_Word Var_83;

              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_73, &ArgsTypes_74);
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_73, &ClassName_75, &ClassArity_76);
              succeeded = ((MR_tag((MR_Word) CtorCat_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                ClassKind_78 = (MR_Integer) 3;
              }
              else
                ClassKind_78 = (MR_Integer) 0;
              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (ClassName_75));
                MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ClassArity_76));
                MR_hl_field(MR_mktag(0), Var_83, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_78));
              }
              MLDS_Type_79 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_83)));
              ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_6, MLDS_Type_79, &TypeString_80, ArrayDims_10);
              OutputGenerics_81 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              switch (OutputGenerics_81) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *String_9 = TypeString_80;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String GenericsString_82;

                    ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0(Info_6, ArgsTypes_74, &GenericsString_82);
                    *String_9 = mercury__string__f_43_43_2_f_0(TypeString_80, GenericsString_82);
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
ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_17;

    ml_backend__mlds_to_java_type__IntroducedFrom__pred__generic_args_types_to_string_for_java__387__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  }
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
      MR_hl_field(MR_mktag(0), ToString_9, 0) = ((MR_Box) (&ml_backend__mlds_to_java_type_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToString_9, 1) = ((MR_Box) (ml_backend__mlds_to_java_type__generic_args_types_to_string_for_java_3_p_0_1));
      MR_hl_field(MR_mktag(0), ToString_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToString_9, 3) = ((MR_Box) (Info_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToString_9, ArgsTypes_5, &ArgsTypesStrings_14);
    ArgsTypesString_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgsTypesStrings_14);
    Var_20 = mercury__string__f_43_43_2_f_0(ArgsTypesString_15, (MR_String) ">");
    *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_20);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(
  MR_Word MLDS_Type_5,
  MR_String * JavaUnboxedType_6,
  MR_String * JavaBoxedType_7,
  MR_String * UnboxMethod_8)
{
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
              *JavaUnboxedType_6 = (MR_String) "boolean";
              *JavaBoxedType_7 = (MR_String) "java.lang.Boolean";
              *UnboxMethod_8 = (MR_String) "booleanValue";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
            {
              *JavaUnboxedType_6 = (MR_String) "int";
              *JavaBoxedType_7 = (MR_String) "java.lang.Integer";
              *UnboxMethod_8 = (MR_String) "intValue";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *JavaUnboxedType_6 = (MR_String) "double";
              *JavaBoxedType_7 = (MR_String) "java.lang.Double";
              *UnboxMethod_8 = (MR_String) "doubleValue";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java_type.m", (MR_String) "predicate \140ml_backend.mlds_to_java_type.java_builtin_type\'/4", (MR_String) "unknown typed");
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word MerType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 1))));
              MR_Word TypeCtorCat_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 3))));

              if (((MR_tag((MR_Word) MerType_9)) == (MR_Integer) 2))
              {
                MR_Word BuiltinType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MerType_9, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) BuiltinType_12)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(BuiltinType_12)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          *JavaUnboxedType_6 = (MR_String) "double";
                          *JavaBoxedType_7 = (MR_String) "java.lang.Double";
                          *UnboxMethod_8 = (MR_String) "doubleValue";
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          *JavaUnboxedType_6 = (MR_String) "int";
                          *JavaBoxedType_7 = (MR_String) "java.lang.Integer";
                          *UnboxMethod_8 = (MR_String) "intValue";
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_12, (MR_Integer) 0))) & (MR_Integer) 15);

                      *JavaUnboxedType_6 = ((&ml_backend__mlds_to_java_type_vector_common_4[0 + Var_58]))->ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_0;
                      *JavaBoxedType_7 = ((&ml_backend__mlds_to_java_type_vector_common_4[0 + Var_58]))->ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_1;
                      *UnboxMethod_8 = ((&ml_backend__mlds_to_java_type_vector_common_4[0 + Var_58]))->ml_backend__mlds_to_java_type__vector_common_type_4_0__vct_4_f_2;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              else
              if (((MR_tag((MR_Word) MerType_9)) == (MR_Integer) 1))
              {
                succeeded = (TypeCtorCat_11 == (MR_Word) ((MR_Unsigned) 8U));
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
          case (MR_Integer) 3:
            {
              MR_Word ForeignLangType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_5, (MR_Integer) 1))));
              MR_String _DefaultValue_35;

              succeeded = ml_backend__mlds_to_java_type__java_primitive_foreign_language_type_5_p_0(ForeignLangType_34, JavaUnboxedType_6, JavaBoxedType_7, UnboxMethod_8, &_DefaultValue_35);
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_type__java_primitive_foreign_language_type_5_p_0(
  MR_Word ForeignLangType_6,
  MR_String * PrimitiveType_7,
  MR_String * BoxedType_8,
  MR_String * UnboxMethod_9,
  MR_String * DefaultValue_10)
{
  {
    MR_bool succeeded;
    MR_String JavaForeignType_11;
    MR_Integer slot_0;
    MR_String str_1;

    switch (MR_tag((MR_Word) ForeignLangType_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java_type.m", (MR_String) "predicate \140ml_backend.mlds_to_java_type.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignLangType_6, (MR_Integer) 0))));

          JavaForeignType_11 = (MR_String) (Var_24);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java_type.m", (MR_String) "predicate \140ml_backend.mlds_to_java_type.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for C#");
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_3_p_0((MR_String) "mlds_to_java_type.m", (MR_String) "predicate \140ml_backend.mlds_to_java_type.java_primitive_foreign_language_type\'/5", (MR_String) "foreign_type for Erlang");
        }
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
    str_1 = ((&ml_backend__mlds_to_java_type_vector_common_3[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_0;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, *PrimitiveType_7) == 0))))
    {
      // we found a match; look up the results
      ;
      *BoxedType_8 = ((&ml_backend__mlds_to_java_type_vector_common_3[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_1;
      *UnboxMethod_9 = ((&ml_backend__mlds_to_java_type_vector_common_3[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_2;
      *DefaultValue_10 = ((&ml_backend__mlds_to_java_type_vector_common_3[0 + slot_0]))->ml_backend__mlds_to_java_type__vector_common_type_3_0__vct_3_f_3;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_java_type__hand_defined_type_for_java_4_p_0(
  MR_Word Type_5,
  MR_Word CtorCat_6,
  MR_String * SubstituteName_7,
  MR_Word * ArrayDims_8)
{
  {
    MR_bool succeeded;

    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0))) == (MR_Integer) 0))))
    {
      MR_Word CtorCatSystem_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 1))) & (MR_Integer) 3);

      *SubstituteName_7 = ((&ml_backend__mlds_to_java_type_vector_common_2[0 + CtorCatSystem_9]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_0;
      *ArrayDims_8 = ((&ml_backend__mlds_to_java_type_vector_common_2[0 + CtorCatSystem_9]))->ml_backend__mlds_to_java_type__vector_common_type_2_0__vct_2_f_1;
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) CtorCat_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_6, (MR_Integer) 0))) == (MR_Integer) 1))))
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
          *SubstituteName_7 = (MR_String) "jmercury.runtime.TypeInfo_Struct";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_18;

          Var_18 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_18);
          if (succeeded)
          {
            *SubstituteName_7 = (MR_String) "jmercury.runtime.PseudoTypeInfo";
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_19;

            Var_19 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_19);
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
