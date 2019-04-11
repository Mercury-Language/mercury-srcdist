/*
** Automatically generated from `mlds_to_c_type.m'
** by the Mercury compiler,
** version rotd-2018-07-04
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
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_util.mih"
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




static const MR_VA_TypeInfo_Struct4 ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_param_type_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_5_p_0(
  MR_Word tscc_proc_2_input_1_Opts_6,
  MR_Word tscc_proc_2_input_2_Type_7,
  MR_Word tscc_proc_2_input_3_CtorCat_8);

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_user_type_prefix_5_p_0(
  MR_Word tscc_proc_3_input_1_Opts_6,
  MR_Word tscc_proc_3_input_2_Type_7,
  MR_Word tscc_proc_3_input_3_CtorCat_8);

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

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[2][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_3[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_4[2][7];




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

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "array"))
  },
  /* row 1 */
  {
    (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4))))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_3[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_2[0])),
    ((MR_Box) ((MR_String) "array"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_type_scalar_common_3[0]))),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_type_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_c_type____Unify____output_type_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_type____Compare____output_type_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_type",
  (MR_String) "output_type",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_type____vti_pred_4ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_9, (MR_Word) ((MR_Integer) 0));
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
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_6, (MR_Word) ((MR_Integer) 0));
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
  {
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_6, (MR_Word) ((MR_Integer) 0));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(
  MR_Word tscc_proc_1_input_1_Opts_5,
  MR_Word tscc_proc_1_input_2_MLDS_Type_6)
{
  {
    MR_Word tscc_proc_2_input_1_Opts_6;
    MR_Word tscc_proc_2_input_2_Type_7;
    MR_Word tscc_proc_2_input_3_CtorCat_8;
    MR_Word tscc_proc_3_input_1_Opts_6;
    MR_Word tscc_proc_3_input_2_Type_7;
    MR_Word tscc_proc_3_input_3_CtorCat_8;

    // The code for TSCC PROC 1: pred ml_backend.mlds_to_c_type.mlds_output_type_prefix/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_type_prefix/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_mercury_type_prefix/5-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_mercury_user_type_prefix/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Opts_5 = tscc_proc_1_input_1_Opts_5;
      MR_Word MLDS_Type_6 = tscc_proc_1_input_2_MLDS_Type_6;

      switch (MR_tag((MR_Word) MLDS_Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(MLDS_Type_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "jmp_buf");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_bool");
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Float");
              }
              break;
            case (MR_Integer) 5:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Char");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__io__write_string_3_p_0((MR_String) "void *");
              }
              break;
            case (MR_Integer) 8:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_TypeInfo");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_PseudoTypeInfo");
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_prefix\'/4", (MR_String) "prefix has unknown type");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ClassId_14 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
            MR_Word QualClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 0))));
            MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 1))));
            MR_Word ClassKind_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 2))));
            MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_15, (MR_Integer) 0))));
            MR_String ClassName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_15, (MR_Integer) 2))));

            switch (ClassKind_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_String Var_60;
                  MR_String Var_63;
                  MR_String Var_144;

                  Var_60 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_18);
                  Var_63 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_20);
                  mercury__io__write_string_3_p_0((MR_String) "struct ");
                  mercury__io__write_string_3_p_0(Var_60);
                  mercury__io__write_string_3_p_0(Var_63);
                  mercury__io__write_string_3_p_0((MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[1]), Arity_16, &Var_144);
                  mercury__io__write_string_3_p_0(Var_144);
                  mercury__io__write_string_3_p_0((MR_String) "_s");
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_71;
                  MR_String Var_74;
                  MR_String Var_129;

                  Var_71 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_18);
                  Var_74 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_20);
                  mercury__io__write_string_3_p_0((MR_String) "MR_Integer /* actually \140enum ");
                  mercury__io__write_string_3_p_0(Var_71);
                  mercury__io__write_string_3_p_0(Var_74);
                  mercury__io__write_string_3_p_0((MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[1]), Arity_16, &Var_129);
                  mercury__io__write_string_3_p_0(Var_129);
                  mercury__io__write_string_3_p_0((MR_String) "_e\' */");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FuncParams_22 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));

            ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0(Opts_5, FuncParams_22);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_Word TypeCategory_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_5;
                MR_Word next_value_of_tscc_proc_2_input_2_Type_7 = Type_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CtorCat_8 = TypeCategory_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                tscc_proc_2_input_2_Type_7 = next_value_of_tscc_proc_2_input_2_Type_7;
                tscc_proc_2_input_3_CtorCat_8 = next_value_of_tscc_proc_2_input_3_CtorCat_8;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HighLevelData_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2)));

                switch (HighLevelData_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_ArrayPtr");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ClassName_158;
                      MR_Integer ClassArity_159;
                      MR_Word MLDS_Type_162;
                      MR_Word Type_166;
                      MR_Word ClassId_170;
                      MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_MLDS_Type_6;

                      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_3[1]), &ClassName_158, &ClassArity_159);
                      {
                        ClassId_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ClassId_170, 0) = ((MR_Box) (ClassName_158));
                        MR_hl_field(MR_mktag(0), ClassId_170, 1) = ((MR_Box) (ClassArity_159));
                        MR_hl_field(MR_mktag(0), ClassId_170, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      Type_166 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_170)));
                      {
                        MLDS_Type_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), MLDS_Type_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), MLDS_Type_162, 1) = ((MR_Box) (Type_166));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
                      next_value_of_tscc_proc_1_input_2_MLDS_Type_6 = MLDS_Type_162;
                      tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
                      tscc_proc_1_input_2_MLDS_Type_6 = next_value_of_tscc_proc_1_input_2_MLDS_Type_6;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                if ((ArgTypes_23 == (MR_Word) ((MR_Integer) 0)))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_Cont");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "void MR_CALL (*");
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_103);
              }
              break;
            case (MR_Integer) 5:
              {
                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, (MR_Word) ((MR_Integer) 24));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Type_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_102);
                mercury__io__write_string_3_p_0((MR_String) " *");
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word RttiIdMaybeElement_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_String CType_27;
                MR_Word _IsArray_28;

                backend_libs__rtti__rtti_id_maybe_element_c_type_3_p_0(RttiIdMaybeElement_26, &CType_27, &_IsArray_28);
                mercury__io__write_string_3_p_0(CType_27);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word TablingId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_String CType_106;
                MR_Word _IsArray_105;

                backend_libs__rtti__tabling_id_c_type_3_p_0(TablingId_29, &CType_106, &_IsArray_105);
                mercury__io__write_string_3_p_0(CType_106);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Opts_6 = tscc_proc_2_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_2_input_2_Type_7;
      MR_Word CtorCat_8 = tscc_proc_2_input_3_CtorCat_8;

      switch (MR_tag((MR_Word) CtorCat_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CtorCat_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HighLevelData_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

                switch (HighLevelData_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Word");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_ClosurePtr");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Tuple");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
                MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
                MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
                tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
                tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Word");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) Var_90)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Var_90)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Float");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Char");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_String");
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));

                  switch (Var_91) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int16_t");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int32_t");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int64_t");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int8_t");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                      }
                      break;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
            MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
            MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
            tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
            tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
            MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
            MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
            tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
            tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
            goto top_of_proc_3;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Opts_6 = tscc_proc_3_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_3_input_2_Type_7;
      MR_Word CtorCat_8 = tscc_proc_3_input_3_CtorCat_8;
      MR_Word HighLevelData_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

      switch (HighLevelData_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtor_11;
            MR_Word ClassName_37;
            MR_Integer ClassArity_38;
            MR_Word MLDS_Type_41;
            MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
            MR_Word next_value_of_tscc_proc_1_input_2_MLDS_Type_6;

            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_11);
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_11, &ClassName_37, &ClassArity_38);
            switch (MR_tag((MR_Word) CtorCat_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ClassId_40;

                  {
                    ClassId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_40, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_40, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_40, 2) = ((MR_Box) ((MR_Integer) 3));
                  }
                  MLDS_Type_41 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_40)));
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_6;
            next_value_of_tscc_proc_1_input_2_MLDS_Type_6 = MLDS_Type_41;
            tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
            tscc_proc_1_input_2_MLDS_Type_6 = next_value_of_tscc_proc_1_input_2_MLDS_Type_6;
            goto top_of_proc_1;
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_type_prefix_5_p_0(
  MR_Word tscc_proc_2_input_1_Opts_6,
  MR_Word tscc_proc_2_input_2_Type_7,
  MR_Word tscc_proc_2_input_3_CtorCat_8)
{
  {
    MR_Word tscc_proc_1_input_1_Opts_5;
    MR_Word tscc_proc_1_input_2_MLDS_Type_6;
    MR_Word tscc_proc_3_input_1_Opts_6;
    MR_Word tscc_proc_3_input_2_Type_7;
    MR_Word tscc_proc_3_input_3_CtorCat_8;

    // The code for TSCC PROC 2: pred ml_backend.mlds_to_c_type.mlds_output_mercury_type_prefix/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_type_prefix/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_mercury_type_prefix/5-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_mercury_user_type_prefix/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Opts_5 = tscc_proc_1_input_1_Opts_5;
      MR_Word MLDS_Type_6 = tscc_proc_1_input_2_MLDS_Type_6;

      switch (MR_tag((MR_Word) MLDS_Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(MLDS_Type_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "jmp_buf");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_bool");
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Float");
              }
              break;
            case (MR_Integer) 5:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Char");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__io__write_string_3_p_0((MR_String) "void *");
              }
              break;
            case (MR_Integer) 8:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_TypeInfo");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_PseudoTypeInfo");
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_prefix\'/4", (MR_String) "prefix has unknown type");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ClassId_14 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
            MR_Word QualClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 0))));
            MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 1))));
            MR_Word ClassKind_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 2))));
            MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_15, (MR_Integer) 0))));
            MR_String ClassName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_15, (MR_Integer) 2))));

            switch (ClassKind_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_String Var_60;
                  MR_String Var_63;
                  MR_String Var_144;

                  Var_60 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_18);
                  Var_63 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_20);
                  mercury__io__write_string_3_p_0((MR_String) "struct ");
                  mercury__io__write_string_3_p_0(Var_60);
                  mercury__io__write_string_3_p_0(Var_63);
                  mercury__io__write_string_3_p_0((MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[1]), Arity_16, &Var_144);
                  mercury__io__write_string_3_p_0(Var_144);
                  mercury__io__write_string_3_p_0((MR_String) "_s");
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_71;
                  MR_String Var_74;
                  MR_String Var_129;

                  Var_71 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_18);
                  Var_74 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_20);
                  mercury__io__write_string_3_p_0((MR_String) "MR_Integer /* actually \140enum ");
                  mercury__io__write_string_3_p_0(Var_71);
                  mercury__io__write_string_3_p_0(Var_74);
                  mercury__io__write_string_3_p_0((MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[1]), Arity_16, &Var_129);
                  mercury__io__write_string_3_p_0(Var_129);
                  mercury__io__write_string_3_p_0((MR_String) "_e\' */");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FuncParams_22 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));

            ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0(Opts_5, FuncParams_22);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_Word TypeCategory_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_5;
                MR_Word next_value_of_tscc_proc_2_input_2_Type_7 = Type_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CtorCat_8 = TypeCategory_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                tscc_proc_2_input_2_Type_7 = next_value_of_tscc_proc_2_input_2_Type_7;
                tscc_proc_2_input_3_CtorCat_8 = next_value_of_tscc_proc_2_input_3_CtorCat_8;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HighLevelData_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2)));

                switch (HighLevelData_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_ArrayPtr");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ClassName_158;
                      MR_Integer ClassArity_159;
                      MR_Word MLDS_Type_162;
                      MR_Word Type_166;
                      MR_Word ClassId_170;
                      MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_MLDS_Type_6;

                      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_3[1]), &ClassName_158, &ClassArity_159);
                      {
                        ClassId_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ClassId_170, 0) = ((MR_Box) (ClassName_158));
                        MR_hl_field(MR_mktag(0), ClassId_170, 1) = ((MR_Box) (ClassArity_159));
                        MR_hl_field(MR_mktag(0), ClassId_170, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      Type_166 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_170)));
                      {
                        MLDS_Type_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), MLDS_Type_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), MLDS_Type_162, 1) = ((MR_Box) (Type_166));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
                      next_value_of_tscc_proc_1_input_2_MLDS_Type_6 = MLDS_Type_162;
                      tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
                      tscc_proc_1_input_2_MLDS_Type_6 = next_value_of_tscc_proc_1_input_2_MLDS_Type_6;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                if ((ArgTypes_23 == (MR_Word) ((MR_Integer) 0)))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_Cont");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "void MR_CALL (*");
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_103);
              }
              break;
            case (MR_Integer) 5:
              {
                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, (MR_Word) ((MR_Integer) 24));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Type_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_102);
                mercury__io__write_string_3_p_0((MR_String) " *");
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word RttiIdMaybeElement_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_String CType_27;
                MR_Word _IsArray_28;

                backend_libs__rtti__rtti_id_maybe_element_c_type_3_p_0(RttiIdMaybeElement_26, &CType_27, &_IsArray_28);
                mercury__io__write_string_3_p_0(CType_27);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word TablingId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_String CType_106;
                MR_Word _IsArray_105;

                backend_libs__rtti__tabling_id_c_type_3_p_0(TablingId_29, &CType_106, &_IsArray_105);
                mercury__io__write_string_3_p_0(CType_106);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Opts_6 = tscc_proc_2_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_2_input_2_Type_7;
      MR_Word CtorCat_8 = tscc_proc_2_input_3_CtorCat_8;

      switch (MR_tag((MR_Word) CtorCat_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CtorCat_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HighLevelData_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

                switch (HighLevelData_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Word");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_ClosurePtr");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Tuple");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
                MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
                MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
                tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
                tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Word");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) Var_90)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Var_90)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Float");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Char");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_String");
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));

                  switch (Var_91) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int16_t");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int32_t");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int64_t");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int8_t");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                      }
                      break;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
            MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
            MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
            tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
            tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
            MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
            MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
            tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
            tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
            goto top_of_proc_3;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Opts_6 = tscc_proc_3_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_3_input_2_Type_7;
      MR_Word CtorCat_8 = tscc_proc_3_input_3_CtorCat_8;
      MR_Word HighLevelData_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

      switch (HighLevelData_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtor_11;
            MR_Word ClassName_37;
            MR_Integer ClassArity_38;
            MR_Word MLDS_Type_41;
            MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
            MR_Word next_value_of_tscc_proc_1_input_2_MLDS_Type_6;

            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_11);
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_11, &ClassName_37, &ClassArity_38);
            switch (MR_tag((MR_Word) CtorCat_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ClassId_40;

                  {
                    ClassId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_40, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_40, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_40, 2) = ((MR_Box) ((MR_Integer) 3));
                  }
                  MLDS_Type_41 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_40)));
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_6;
            next_value_of_tscc_proc_1_input_2_MLDS_Type_6 = MLDS_Type_41;
            tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
            tscc_proc_1_input_2_MLDS_Type_6 = next_value_of_tscc_proc_1_input_2_MLDS_Type_6;
            goto top_of_proc_1;
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_mercury_user_type_prefix_5_p_0(
  MR_Word tscc_proc_3_input_1_Opts_6,
  MR_Word tscc_proc_3_input_2_Type_7,
  MR_Word tscc_proc_3_input_3_CtorCat_8)
{
  {
    MR_Word tscc_proc_1_input_1_Opts_5;
    MR_Word tscc_proc_1_input_2_MLDS_Type_6;
    MR_Word tscc_proc_2_input_1_Opts_6;
    MR_Word tscc_proc_2_input_2_Type_7;
    MR_Word tscc_proc_2_input_3_CtorCat_8;

    // The code for TSCC PROC 3: pred ml_backend.mlds_to_c_type.mlds_output_mercury_user_type_prefix/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_type_prefix/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_mercury_type_prefix/5-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_c_type.mlds_output_mercury_user_type_prefix/5-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Opts_5 = tscc_proc_1_input_1_Opts_5;
      MR_Word MLDS_Type_6 = tscc_proc_1_input_2_MLDS_Type_6;

      switch (MR_tag((MR_Word) MLDS_Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(MLDS_Type_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "jmp_buf");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_bool");
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Float");
              }
              break;
            case (MR_Integer) 5:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Char");
              }
              break;
            case (MR_Integer) 6:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__io__write_string_3_p_0((MR_String) "void *");
              }
              break;
            case (MR_Integer) 8:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_TypeInfo");
              }
              break;
            case (MR_Integer) 9:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_PseudoTypeInfo");
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_prefix\'/4", (MR_String) "prefix has unknown type");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ClassId_14 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 1));
            MR_Word QualClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 0))));
            MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 1))));
            MR_Word ClassKind_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_14, (MR_Integer) 2))));
            MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_15, (MR_Integer) 0))));
            MR_String ClassName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_15, (MR_Integer) 2))));

            switch (ClassKind_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_String Var_60;
                  MR_String Var_63;
                  MR_String Var_144;

                  Var_60 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_18);
                  Var_63 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_20);
                  mercury__io__write_string_3_p_0((MR_String) "struct ");
                  mercury__io__write_string_3_p_0(Var_60);
                  mercury__io__write_string_3_p_0(Var_63);
                  mercury__io__write_string_3_p_0((MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[1]), Arity_16, &Var_144);
                  mercury__io__write_string_3_p_0(Var_144);
                  mercury__io__write_string_3_p_0((MR_String) "_s");
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_71;
                  MR_String Var_74;
                  MR_String Var_129;

                  Var_71 = ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(ModuleName_18);
                  Var_74 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_20);
                  mercury__io__write_string_3_p_0((MR_String) "MR_Integer /* actually \140enum ");
                  mercury__io__write_string_3_p_0(Var_71);
                  mercury__io__write_string_3_p_0(Var_74);
                  mercury__io__write_string_3_p_0((MR_String) "_");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_2[1]), Arity_16, &Var_129);
                  mercury__io__write_string_3_p_0(Var_129);
                  mercury__io__write_string_3_p_0((MR_String) "_e\' */");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FuncParams_22 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_6), (MR_Integer) 2));

            ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0(Opts_5, FuncParams_22);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_Word TypeCategory_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_5;
                MR_Word next_value_of_tscc_proc_2_input_2_Type_7 = Type_8;
                MR_Word next_value_of_tscc_proc_2_input_3_CtorCat_8 = TypeCategory_10;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                tscc_proc_2_input_2_Type_7 = next_value_of_tscc_proc_2_input_2_Type_7;
                tscc_proc_2_input_3_CtorCat_8 = next_value_of_tscc_proc_2_input_3_CtorCat_8;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HighLevelData_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2)));

                switch (HighLevelData_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_ArrayPtr");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ClassName_158;
                      MR_Integer ClassArity_159;
                      MR_Word MLDS_Type_162;
                      MR_Word Type_166;
                      MR_Word ClassId_170;
                      MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_MLDS_Type_6;

                      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0((MR_Word) (&ml_backend__mlds_to_c_type_scalar_common_3[1]), &ClassName_158, &ClassArity_159);
                      {
                        ClassId_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ClassId_170, 0) = ((MR_Box) (ClassName_158));
                        MR_hl_field(MR_mktag(0), ClassId_170, 1) = ((MR_Box) (ClassArity_159));
                        MR_hl_field(MR_mktag(0), ClassId_170, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      Type_166 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_170)));
                      {
                        MLDS_Type_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), MLDS_Type_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), MLDS_Type_162, 1) = ((MR_Box) (Type_166));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_5;
                      next_value_of_tscc_proc_1_input_2_MLDS_Type_6 = MLDS_Type_162;
                      tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
                      tscc_proc_1_input_2_MLDS_Type_6 = next_value_of_tscc_proc_1_input_2_MLDS_Type_6;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                if ((ArgTypes_23 == (MR_Word) ((MR_Integer) 0)))
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_Cont");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "void MR_CALL (*");
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_103);
              }
              break;
            case (MR_Integer) 5:
              {
                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, (MR_Word) ((MR_Integer) 24));
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Type_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_5, Type_102);
                mercury__io__write_string_3_p_0((MR_String) " *");
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word RttiIdMaybeElement_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_String CType_27;
                MR_Word _IsArray_28;

                backend_libs__rtti__rtti_id_maybe_element_c_type_3_p_0(RttiIdMaybeElement_26, &CType_27, &_IsArray_28);
                mercury__io__write_string_3_p_0(CType_27);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word TablingId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_String CType_106;
                MR_Word _IsArray_105;

                backend_libs__rtti__tabling_id_c_type_3_p_0(TablingId_29, &CType_106, &_IsArray_105);
                mercury__io__write_string_3_p_0(CType_106);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Opts_6 = tscc_proc_2_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_2_input_2_Type_7;
      MR_Word CtorCat_8 = tscc_proc_2_input_3_CtorCat_8;

      switch (MR_tag((MR_Word) CtorCat_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CtorCat_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HighLevelData_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

                switch (HighLevelData_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Word");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_ClosurePtr");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Tuple");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
                MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
                MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
                tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
                tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Box");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Word");
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_8, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) Var_90)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Var_90)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Float");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_Char");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_String");
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));

                  switch (Var_91) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int16_t");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int32_t");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int64_t");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "int8_t");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                      }
                      break;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
            MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
            MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
            tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
            tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
            goto top_of_proc_3;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
            MR_Word next_value_of_tscc_proc_3_input_2_Type_7 = Type_7;
            MR_Word next_value_of_tscc_proc_3_input_3_CtorCat_8 = CtorCat_8;

            // direct tailcall eliminated
            ;
            tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
            tscc_proc_3_input_2_Type_7 = next_value_of_tscc_proc_3_input_2_Type_7;
            tscc_proc_3_input_3_CtorCat_8 = next_value_of_tscc_proc_3_input_3_CtorCat_8;
            goto top_of_proc_3;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Opts_6 = tscc_proc_3_input_1_Opts_6;
      MR_Word Type_7 = tscc_proc_3_input_2_Type_7;
      MR_Word CtorCat_8 = tscc_proc_3_input_3_CtorCat_8;
      MR_Word HighLevelData_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

      switch (HighLevelData_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtor_11;
            MR_Word ClassName_37;
            MR_Integer ClassArity_38;
            MR_Word MLDS_Type_41;
            MR_Word next_value_of_tscc_proc_1_input_1_Opts_5;
            MR_Word next_value_of_tscc_proc_1_input_2_MLDS_Type_6;

            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_11);
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_11, &ClassName_37, &ClassArity_38);
            switch (MR_tag((MR_Word) CtorCat_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ClassId_40;

                  {
                    ClassId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_40, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_40, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_40, 2) = ((MR_Box) ((MR_Integer) 3));
                  }
                  MLDS_Type_41 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_40)));
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Type_45;
                  MR_Word ClassId_49;

                  {
                    ClassId_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ClassId_49, 0) = ((MR_Box) (ClassName_37));
                    MR_hl_field(MR_mktag(0), ClassId_49, 1) = ((MR_Box) (ClassArity_38));
                    MR_hl_field(MR_mktag(0), ClassId_49, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  Type_45 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_49)));
                  {
                    MLDS_Type_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), MLDS_Type_41, 1) = ((MR_Box) (Type_45));
                  }
                }
                break;
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Opts_5 = Opts_6;
            next_value_of_tscc_proc_1_input_2_MLDS_Type_6 = MLDS_Type_41;
            tscc_proc_1_input_1_Opts_5 = next_value_of_tscc_proc_1_input_1_Opts_5;
            tscc_proc_1_input_2_MLDS_Type_6 = next_value_of_tscc_proc_1_input_2_MLDS_Type_6;
            goto top_of_proc_1;
          }
          break;
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(
  MR_Word Opts_5,
  MR_Word Type_6)
{
  {
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, Type_6);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Type_6, (MR_Word) ((MR_Integer) 0));
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

    if ((RetTypes_9 == (MR_Word) ((MR_Integer) 0)))
    {
      mercury__io__write_string_3_p_0((MR_String) "void");
    }
    else
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_9, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_9, (MR_Integer) 0))));

      if ((Var_29 == (MR_Word) ((MR_Integer) 0)))
      {
        ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, Var_30);
        ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0(Opts_5, Var_30, (MR_Word) ((MR_Integer) 0));
      }
      else
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_func_type_prefix_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
          }
          break;
        case (MR_Integer) 10:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_type.mlds_output_type_suffix\'/5", (MR_String) "unknown_type");
              return;
            }
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 0)))) {
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

            if (!((ArgTypes_13 == (MR_Word) ((MR_Integer) 0))))
            {
              MR_Word Var_35;

              mercury__io__write_string_3_p_0((MR_String) ")(");
              {
                Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_type_suffix_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
          if ((ArraySize_8 == (MR_Word) ((MR_Integer) 0)))
          {
            mercury__io__write_string_3_p_0((MR_String) "[]");
          }
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
            MR_Word RttiIdMaybeElement_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))));
            MR_Word IsArrayType_17;

            IsArrayType_17 = backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_f_0(RttiIdMaybeElement_16);
            switch (IsArrayType_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                if ((ArraySize_8 == (MR_Word) ((MR_Integer) 0)))
                {
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
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
        case (MR_Integer) 8:
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
  {
    mercury__io__write_string_3_p_0((MR_String) "[]");
  }
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
    if ((Parameters_6 == (MR_Word) ((MR_Integer) 0)))
    {
      mercury__io__write_string_3_p_0((MR_String) "void");
    }
    else
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_c_type_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_c_type__mlds_output_param_types_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Opts_5));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_6, (MR_String) ", ", Var_15);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
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
