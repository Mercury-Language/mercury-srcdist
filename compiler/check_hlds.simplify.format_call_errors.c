/*
** Automatically generated from `format_call_errors.m'
** by the Mercury compiler,
** version rotd-2024-05-20
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


// :- module check_hlds.simplify.format_call_errors.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__format_call_errors__init
ENDINIT
*/

#include "check_hlds.simplify.format_call_errors.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0[2];

static const MR_Integer check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__functor_number_map_maybe_warn_unknown_format_0[2];

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__string_format_error_to_words_1_f_0(
  MR_Word Error_3);

static MR_Box MR_CALL 
check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_1[2][1];

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_2[28][2];

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_4[1][3];




static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_1[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_2[28][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unknown format string"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to be formatted"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unknown list of values"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "when considering the"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "entry in its"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "format_call"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which places the format string as the"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument, and"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the values list as the"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[14])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not match the list of values to be formatted"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[7])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the format string"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[25])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_errors_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_errors_scalar_common_3[0])),
    ((MR_Box) (check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0 = {
  (MR_String) "do_not_warn_unknown_format",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1 = {
  (MR_String) "warn_unknown_format",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0[2] = {
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0,
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0[2] = {
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_0,
  &check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_functor_desc_maybe_warn_unknown_format_0_1
};

static const MR_Integer check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__functor_number_map_maybe_warn_unknown_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__type_ctor_info_maybe_warn_unknown_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call_errors",
  (MR_String) "maybe_warn_unknown_format",
  { check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_name_ordered_maybe_warn_unknown_format_0 },
  { check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__enum_ordinal_ordered_maybe_warn_unknown_format_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__functor_number_map_maybe_warn_unknown_format_0,

};

void MR_CALL 
check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__string_format_error_to_words_1_f_0(
  MR_Word Error_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(Error_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__simplify__format_call_errors__string_format_error_to_words_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word MaybePos_10,
  MR_Word HeadError_11,
  MR_Word TailErrors_12,
  MR_Word Context_13)
{
  MR_Word Specs_14;
  MR_Word Globals_15;
  MR_Word WarnKnownBadFormatCalls_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 46, &WarnKnownBadFormatCalls_16);
  switch (WarnKnownBadFormatCalls_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredNameColonPieces_17;
        MR_Word WarnOnlyOneFormatStringError_21;
        MR_Word ErrorPieces_22;
        MR_Word Pieces_23;
        MR_Word Spec_25;
        MR_Word Var_90;
        MR_Word Var_91;

        if ((MaybePos_10 == (MR_Word) ((MR_Unsigned) 0U)))
          PredNameColonPieces_17 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_8, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[14])), PredId_9);
        else
        {
          MR_Integer Pos_18;
          MR_Integer ArgNumFS_19;
          MR_Integer ArgNumVL_20;
          MR_Tuple Var_34 = ((MR_Tuple) ((MR_hl_field(1, MaybePos_10, (MR_Integer) 0))));
          MR_Word Var_35;
          MR_Word Var_40;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_65;
          MR_Word Var_66;

          Pos_18 = ((MR_Integer) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
          ArgNumFS_19 = ((MR_Integer) ((MR_hl_field(0, Var_34, (MR_Integer) 1))));
          ArgNumVL_20 = ((MR_Integer) ((MR_hl_field(0, Var_34, (MR_Integer) 2))));
          Var_35 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_8, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_9);
          {
            Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_44, 1) = ((MR_Box) (Pos_18));
          }
          {
            Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_58, 1) = ((MR_Box) (ArgNumFS_19));
          }
          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_66, 1) = ((MR_Box) (ArgNumVL_20));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[23])));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[21])));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[20])));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[19])));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[18])));
            MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[17])));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[16])));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_2[15])));
            MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
          }
          PredNameColonPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_40);
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 47, &WarnOnlyOneFormatStringError_21);
        switch (WarnOnlyOneFormatStringError_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_77;
              MR_Word Var_78;
              MR_String Var_105;

              Var_105 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(HeadError_11);
              {
                Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_105));
              }
              Var_78 = mercury__list__map_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__simplify__format_call_errors_scalar_common_4[0]), TailErrors_12);
              {
                ErrorPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ErrorPieces_22, 0) = ((MR_Box) (Var_77));
                MR_hl_field(1, ErrorPieces_22, 1) = ((MR_Box) (Var_78));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_75;
              MR_String Var_106;

              Var_106 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(HeadError_11);
              {
                Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_106));
              }
              {
                ErrorPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ErrorPieces_22, 0) = ((MR_Box) (Var_75));
                MR_hl_field(1, ErrorPieces_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[8])), ErrorPieces_22);
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameColonPieces_17, Var_91);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[27])), Var_90);
        {
          Spec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.format_call_errors.report_format_mismatch\'/6"));
          MR_hl_field(0, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_25, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[1])));
          MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Context_13));
          MR_hl_field(0, Spec_25, 4) = ((MR_Box) (Pieces_23));
        }
        {
          Specs_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_14, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(1, Specs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Specs_14;
}

MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__report_unknown_format_values_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word WarnUnknownFormat_8,
  MR_Word Context_9)
{
  MR_Word Specs_10;

  switch (WarnUnknownFormat_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredNameDotPieces_11;
        MR_Word Pieces_12;
        MR_Word Spec_14;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_35;
        MR_Word Var_40;

        PredNameDotPieces_11 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[1])), PredId_7);
        Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[12])));
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[8])));
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[7])), Var_40);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_35);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[3])), Var_26);
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.format_call_errors.report_unknown_format_values\'/4"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[1])));
          MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
          MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_12));
        }
        {
          Specs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_10, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(1, Specs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Specs_10;
}

MR_Word MR_CALL 
check_hlds__simplify__format_call_errors__report_unknown_format_string_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word WarnUnknownFormat_8,
  MR_Word Context_9)
{
  MR_Word Specs_10;

  switch (WarnUnknownFormat_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredNameDotPieces_11;
        MR_Word Pieces_12;
        MR_Word Spec_14;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_32;
        MR_Word Var_37;

        PredNameDotPieces_11 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_1[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[1])), PredId_7);
        Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[5])));
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNameDotPieces_11, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[8])));
        Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[7])), Var_37);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_32);
        Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_errors_scalar_common_2[3])), Var_26);
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.simplify.format_call_errors.report_unknown_format_string\'/4"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_errors_scalar_common_1[1])));
          MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_9));
          MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_12));
        }
        {
          Specs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_10, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(1, Specs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  return Specs_10;
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call_errors____Unify____maybe_warn_unknown_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call_errors____Compare____maybe_warn_unknown_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__format_call_errors__init(void)
{
}

void mercury__check_hlds__simplify__format_call_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__type_ctor_info_maybe_warn_unknown_format_0);
}

void mercury__check_hlds__simplify__format_call_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__format_call_errors__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.format_call_errors.
