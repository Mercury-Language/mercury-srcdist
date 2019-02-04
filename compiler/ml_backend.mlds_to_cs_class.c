/*
** Automatically generated from `mlds_to_cs_class.m'
** by the Mercury compiler,
** version rotd-2018-11-29
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


// :- module ml_backend.mlds_to_cs_class.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_class__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_class.mih"


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
#include "int.mih"
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
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__61__1_2_p_0(
  MR_Word MemberMethods_21,
  MR_Word HeadVar__2_32);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word FieldVarDefn_8);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_2_p_0(
  MR_Word InterfaceId_3,
  MR_String * String_4);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word Flags_7,
  MR_Word Kind_8);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constants_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constants_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word EnumConsts_8);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Inherits_9,
  MR_Word Interfaces_10);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_kind_for_csharp_3_p_0(
  MR_Word Kind_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_3[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_4[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_5[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_6[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_7[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_8[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_class__output_supers_list_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_4[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_class__output_supers_list_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_8[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__61__1_2_p_0(
  MR_Word MemberMethods_21,
  MR_Word HeadVar__2_32)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_1[0]), ((MR_Box) (MemberMethods_21)), ((MR_Box) (HeadVar__2_32)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word FieldVarDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word FieldVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_8, (MR_Integer) 0))));
    MR_Word Initializer_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_8, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) Initializer_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_27;

          Var_27 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_14)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/5", Var_27);
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_14, (MR_Integer) 0))));
          MR_Integer N_17;
          MR_Word Var_32;

          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_10);
          mercury__io__write_string_3_p_0((MR_String) " = ");
          succeeded = ((((MR_tag((MR_Word) Rval_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
              N_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 1))));
          }
          if (succeeded)
            mercury__io__write_int_3_p_0(N_17);
          else
          {
            MR_String String_19;
            MR_Word Type_20;
            MR_Word Var_34;
            MR_Word Var_35;

            succeeded = ((((MR_tag((MR_Word) Rval_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_16, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 1))) & (MR_Integer) 3);
                String_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 2))));
                Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 3))));
                succeeded = (Var_35 == (MR_Integer) 1);
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_6, Type_20);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0(String_19);
            }
            else
            {
              MR_String Var_43;

              Var_43 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (Rval_16)));
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/5", Var_43);
                return;
              }
            }
          }
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_String Var_27;

          Var_27 = mercury__string__string_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ((MR_Box) (Initializer_14)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/5", Var_27);
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FieldVarDefn_10)
{
  {
    MR_Word FieldVarName_12;
    MR_Word Flags_14;
    MR_Word Type_15;
    MR_Word Initializer_16;
    MR_Word Var_32;
    MR_Word Var_36;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    FieldVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 0))));
    Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 2))));
    Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 3))));
    Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn_10, (MR_Integer) 4))));
    mercury__io__write_string_3_p_0((MR_String) "public ");
    Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Var_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    switch (Var_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "readonly ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ml_backend__mlds_to_cs_type__output_type_for_csharp_4_p_0(Info_7, Type_15);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(FieldVarName_12);
    ml_backend__mlds_to_cs_data__output_initializer_for_csharp_6_p_0(Info_7, OutputAux_9, Type_15, Initializer_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_2_p_0(
  MR_Word InterfaceId_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded;
    MR_Word QualClassName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InterfaceId_3, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InterfaceId_3, (MR_Integer) 1))));
    MR_Word ModuleQualifier_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_5, (MR_Integer) 0))));
    MR_String ClassName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_5, (MR_Integer) 2))));
    MR_Word SymName_11;
    MR_String ModuleNameStr_12;

    SymName_11 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleQualifier_8);
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_11, (MR_Integer) 0, (MR_String) ".", &ModuleNameStr_12);
    succeeded = (strcmp(ClassName_10, (MR_String) "MercuryType") == 0);
    if (succeeded)
    {
      *String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, (MR_String) ".MercuryType");
    }
    else
    {
      MR_String Var_31;
      MR_String Var_38;
      MR_String Var_40;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_8[0]), Arity_6, &Var_31);
      Var_38 = mercury__string__f_43_43_2_f_0(ClassName_10, Var_31);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_38);
      *String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_12, Var_40);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__field_var_defn_is_enum_const_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__61__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0(
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Integer Indent_7,
  MR_Word ClassDefn_8)
{
  {
    MR_bool succeeded;
    MR_String ClassName_10;
    MR_Integer ClassArity_11;
    MR_Word Flags_13;
    MR_Word Kind_14;
    MR_Word Inherits_16;
    MR_Word Implements_17;
    MR_Word TypeParams_18;
    MR_Word MemberFields_19;
    MR_Word MemberClasses_20;
    MR_Word MemberMethods_21;
    MR_Word Ctors_22;
    MR_Word OutputGenerics_23;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Integer Var_42;
    MR_Word Var_62;
    MR_Integer Var_64;
    MR_Word Var_66;
    MR_Word Var_70;
    MR_Word Var_74;
    MR_String Var_75;
    MR_Word Var_76;
    MR_Unsigned packed_word_1;
    MR_Unsigned packed_word_2;
    MR_Box conv2_STATE_VARIABLE_IO_63_63;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    ClassName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 0))));
    ClassArity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 1))));
    Flags_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 3))));
    Kind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 4))) & (MR_Integer) 3);
    Inherits_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 6))));
    Implements_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 7))));
    TypeParams_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 8))));
    MemberFields_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 9))));
    MemberClasses_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 10))));
    MemberMethods_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 11))));
    Ctors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 12))));
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (MemberMethods_21));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_class_defn_for_csharp\'/5", (MR_String) "MemberMethods != []");
    switch (Kind_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          mercury__io__write_string_3_p_0((MR_String) "[System.Serializable]\n");
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(Flags_13, Kind_14);
          ml_backend__mlds_to_cs_class__output_class_kind_for_csharp_3_p_0(Kind_14);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(Flags_13, Kind_14);
          mercury__io__write_string_3_p_0((MR_String) "interface ");
        }
        break;
      case (MR_Integer) 2:
        {
          ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(Flags_13, Kind_14);
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
        break;
    }
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
    Var_75 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
    {
      STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 1) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 5) = (MR_Box) (packed_word_2);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (TypeParams_18));
    }
    ml_backend__mlds_to_cs_name__output_unqual_class_name_for_csharp_4_p_0(ClassName_10, ClassArity_11);
    OutputGenerics_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
    switch (OutputGenerics_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        ml_backend__mlds_to_target_util__output_generic_tvars_3_p_0(TypeParams_18);
        break;
    }
    mercury__io__nl_2_p_0();
    Var_42 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_class__output_supers_list_6_p_0(STATE_VARIABLE_Info_37_37, Var_42, Inherits_16, Implements_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    switch (Kind_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_52;
          MR_Integer Var_54 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word Var_57;
          MR_Integer Var_59;
          MR_Box conv0_STATE_VARIABLE_IO_53_53;
          MR_Box conv1_STATE_VARIABLE_IO_58_58;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (STATE_VARIABLE_Info_37_37));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, MemberFields_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_53_53);
          Var_59 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_3));
            MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (STATE_VARIABLE_Info_37_37));
            MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Var_59));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, MemberClasses_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_58_58);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word EnumConstMemberFields_24;
          MR_Integer Var_49;

          mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_3[2]), MemberFields_19, &EnumConstMemberFields_24);
          Var_49 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 2);
          ml_backend__mlds_to_cs_class__output_enum_constants_for_csharp_5_p_0(STATE_VARIABLE_Info_37_37, Var_49, EnumConstMemberFields_24);
        }
        break;
    }
    mercury__io__nl_2_p_0();
    Var_64 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ClassName_10));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (ClassArity_11));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (STATE_VARIABLE_Info_37_37));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (Var_66));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, Ctors_22, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_63_63);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word Flags_7,
  MR_Word Kind_8)
{
  {
    MR_Word Access_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Overridability0_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Constness_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Access_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "private ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "public ");
        }
        break;
    }
    switch (Kind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        switch (Overridability0_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "sealed ");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
          switch (Overridability0_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "sealed ");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
    switch (Constness_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "readonly ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constants_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constants_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word EnumConsts_8)
{
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_enum_constants_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Indent_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), EnumConsts_8, (MR_String) "\n", Var_13);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    ml_backend__mlds_to_cs_class__interface_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_supers_list_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Inherits_9,
  MR_Word Interfaces_10)
{
  {
    MR_Word Strings0_12;
    MR_Word Strings_13;

    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_3[0]), Interfaces_10, &Strings0_12);
    switch (MR_tag((MR_Word) Inherits_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inherits_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Strings_13 = Strings0_12;
            break;
          case (MR_Integer) 1:
            {
              MR_String EnvPtrTypeString_18;
              MR_Word _ArrayDims_32;

              ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_7, (MR_Word) ((MR_Unsigned) 24U), &EnvPtrTypeString_18, &_ArrayDims_32);
              {
                Strings_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Strings_13, 0) = ((MR_Box) (EnvPtrTypeString_18));
                MR_hl_field(MR_mktag(1), Strings_13, 1) = ((MR_Box) (Strings0_12));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BaseClassId_14 = (MR_Word) (MR_body((MR_Word) (Inherits_9), (MR_Integer) 1));
          MR_Word BaseClassType_15 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (BaseClassId_14)));
          MR_String BaseClassString_16;
          MR_Word _ArrayDims_17;

          ml_backend__mlds_to_cs_type__type_to_string_for_csharp_4_p_0(Info_7, BaseClassType_15, &BaseClassString_16, &_ArrayDims_17);
          {
            Strings_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Strings_13, 0) = ((MR_Box) (BaseClassString_16));
            MR_hl_field(MR_mktag(1), Strings_13, 1) = ((MR_Box) (Strings0_12));
          }
        }
        break;
    }
    if (!((Strings_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Strings_13, (MR_String) ", ", (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_3[1]));
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_kind_for_csharp_3_p_0(
  MR_Word Kind_4)
{
  switch (Kind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "class ");
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) "enum ");
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "interface ");
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__io__write_string_3_p_0((MR_String) "struct ");
      }
      break;
  }
}

void mercury__ml_backend__mlds_to_cs_class__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_class__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_class.
