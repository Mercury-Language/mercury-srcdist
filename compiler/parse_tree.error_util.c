/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-2024-10-23
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


// :- module parse_tree.error_util.
// :- implementation.

/*
INIT mercury__parse_tree__error_util__init
ENDINIT
*/

#include "parse_tree.error_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__424__1_1_p_0(
  MR_Word LambdaHeadVar__1_20);

static MR_Box MR_CALL 
parse_tree__error_util__does_msg_component_print_anything_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__error_util__does_msg_component_print_anything_2_f_0(
  MR_Word Globals_4,
  MR_Word MsgComponent_5);

static MR_Box MR_CALL 
parse_tree__error_util__does_msg_print_anything_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_util__does_msg_print_anything_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__error_util__does_msg_print_anything_2_f_0(
  MR_Word Globals_4,
  MR_Word Msg_5);

static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__error_util__filter_interface_generation_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeWorst_0_3,
  MR_Word * STATE_VARIABLE_MaybeWorst_4);

static MR_Box MR_CALL 
parse_tree__error_util__does_spec_print_anything_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__error_util__does_spec_print_anything_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[2][3];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][4];




static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__error_util_scalar_common_6[0])),
    ((MR_Box) (parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_TypeInfo) (&parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_accumulator_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_spec_accumulator",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__424__1_1_p_0(
  MR_Word LambdaHeadVar__1_20)
{
  MR_bool succeeded;
  MR_Word Phase_7;
  MR_Word ModeReportControl_8;
  MR_Word Var_21;

  switch (MR_tag((MR_Word) LambdaHeadVar__1_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Phase_7 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_20, (MR_Integer) 2))));
      break;
    case (MR_Integer) 1:
      Phase_7 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_20, (MR_Integer) 2))));
      break;
    case (MR_Integer) 2:
      Phase_7 = ((MR_Word) ((MR_hl_field(2, LambdaHeadVar__1_20, (MR_Integer) 2))));
      break;
    case (MR_Integer) 3:
      Phase_7 = ((MR_Word) ((MR_hl_field(3, LambdaHeadVar__1_20, (MR_Integer) 3))));
      break;
  }
  switch (MR_tag((MR_Word) Phase_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Phase_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 4:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 5:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 6:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 7:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 8:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 9:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 10:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 11:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 12:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 13:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 14:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 15:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 16:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 17:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 18:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 19:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 20:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 21:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 22:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 23:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 24:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 25:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 26:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 27:
          ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      ModeReportControl_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Control_38 = ((MR_Unsigned) ((MR_hl_field(2, Phase_7, (MR_Integer) 0))) & (MR_Integer) 1);

        {
          ModeReportControl_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModeReportControl_8, 0) = ((MR_Box) (Control_38));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Control_39 = ((MR_Unsigned) ((MR_hl_field(3, Phase_7, (MR_Integer) 0))) & (MR_Integer) 1);

        {
          ModeReportControl_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModeReportControl_8, 0) = ((MR_Box) (Control_39));
        }
      }
      break;
  }
  succeeded = (ModeReportControl_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(1, ModeReportControl_8, (MR_Integer) 0))));
    succeeded = (Var_21 == (MR_Integer) 1);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__error_util_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__error_util__does_msg_component_print_anything_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Prints_6;

  conv0_Prints_6 = parse_tree__error_util__does_msg_component_print_anything_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Prints_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__error_util__does_msg_component_print_anything_2_f_0(
  MR_Word Globals_4,
  MR_Word MsgComponent_5)
{
  MR_bool succeeded;
  MR_Word Prints_6;

  switch (MR_tag((MR_Word) MsgComponent_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      Prints_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Option_12 = ((((MR_Unsigned) ((MR_hl_field(1, MsgComponent_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
        MR_Word MatchValue_13 = ((MR_Unsigned) ((MR_hl_field(1, MsgComponent_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word MsgComponents_14 = ((MR_Word) ((MR_hl_field(1, MsgComponent_5, (MR_Integer) 1))));
        MR_Word OptionValue_15;

        libs__globals__lookup_bool_option_3_p_0(Globals_4, Option_12, &OptionValue_15);
        succeeded = (OptionValue_15 == MatchValue_13);
        if (succeeded)
        {
          MR_Word PrintsList_16;
          MR_Word Var_17;

          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[1]));
            MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__error_util__does_msg_component_print_anything_2_f_0_1));
            MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_17, 3) = ((MR_Box) (Globals_4));
          }
          PrintsList_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_17, MsgComponents_14);
          mercury__bool__or_list_2_p_0(PrintsList_16, &Prints_6);
        }
        else
          Prints_6 = (MR_Integer) 0;
      }
      break;
  }
  return Prints_6;
}

static MR_Box MR_CALL 
parse_tree__error_util__does_msg_print_anything_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Prints_6;

  conv1_Prints_6 = parse_tree__error_util__does_msg_component_print_anything_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Prints_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__error_util__does_msg_print_anything_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Prints_6;

  conv0_Prints_6 = parse_tree__error_util__does_msg_component_print_anything_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Prints_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__error_util__does_msg_print_anything_2_f_0(
  MR_Word Globals_4,
  MR_Word Msg_5)
{
  MR_Word Prints_6;

  switch (MR_tag((MR_Word) Msg_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      Prints_6 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      {
        MR_Word MsgComponents_24 = ((MR_Word) ((MR_hl_field(2, Msg_5, (MR_Integer) 1))));
        MR_Word PrintsList_25;
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[1]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__error_util__does_msg_print_anything_2_f_0_2));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Globals_4));
        }
        PrintsList_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_26, MsgComponents_24);
        mercury__bool__or_list_2_p_0(PrintsList_25, &Prints_6);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Msg_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MsgComponents_12 = ((MR_Word) ((MR_hl_field(3, Msg_5, (MR_Integer) 4))));
            MR_Word PrintsList_16;
            MR_Word Var_17;

            {
              Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[1]));
              MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__error_util__does_msg_print_anything_2_f_0_1));
              MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_17, 3) = ((MR_Box) (Globals_4));
            }
            PrintsList_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_17, MsgComponents_12);
            mercury__bool__or_list_2_p_0(PrintsList_16, &Prints_6);
          }
          break;
        case (MR_Integer) 1:
          Prints_6 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return Prints_6;
}

MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word AnyModeSpecSet_3;
    MR_Word AllModeSpecSet_4;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_6;

    AnyModeSpecSet_3 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
    AllModeSpecSet_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
    Var_6 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnyModeSpecSet_3, AllModeSpecSet_4);
    HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_6);
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__424__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
  MR_Word ProcSpecs_4,
  MR_Word STATE_VARIABLE_MaybeSpecs_0_17,
  MR_Word * STATE_VARIABLE_MaybeSpecs_18)
{
  MR_bool succeeded;
  MR_Word ProcAllModeSpecs_9;
  MR_Word ProcAnyModeSpecs_10;
  MR_Word ProcAnyModeSpecSet_11;
  MR_Word ProcAllModeSpecSet_12;

  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__error_util_scalar_common_2[1]), ProcSpecs_4, &ProcAllModeSpecs_9, &ProcAnyModeSpecs_10);
  ProcAnyModeSpecSet_11 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ProcAnyModeSpecs_10);
  ProcAllModeSpecSet_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ProcAllModeSpecs_9);
  if ((STATE_VARIABLE_MaybeSpecs_0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (ProcAnyModeSpecSet_11));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (ProcAllModeSpecSet_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeSpecs_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
    }
  }
  else
  {
    MR_Word AnyModeSpecSet0_13;
    MR_Word AllModeSpecSet0_14;
    MR_Word AnyModeSpecSet_15;
    MR_Word AllModeSpecSet_16;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSpecs_0_17, (MR_Integer) 0))));
    MR_Word Var_24;

    AnyModeSpecSet0_13 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
    AllModeSpecSet0_14 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnyModeSpecSet0_13, ProcAnyModeSpecSet_11, &AnyModeSpecSet_15);
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AllModeSpecSet0_14, ProcAllModeSpecSet_12, &AllModeSpecSet_16);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (AnyModeSpecSet_15));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (AllModeSpecSet_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeSpecs_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
    }
  }
}

MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
parse_tree__error_util__filter_interface_generation_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__error_util__does_spec_print_anything_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
parse_tree__error_util__filter_interface_generation_specs_3_p_0(
  MR_Word Globals_4,
  MR_Word Specs_5,
  MR_Word * SpecsToPrint_6)
{
  MR_bool succeeded;
  MR_Word HaltInvalidInterface_7;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 8, &HaltInvalidInterface_7);
  switch (HaltInvalidInterface_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *SpecsToPrint_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_9;

        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_5[0]));
          MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__error_util__filter_interface_generation_specs_3_p_0_1));
          MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_9, 3) = ((MR_Box) (Globals_4));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_9, Specs_5, SpecsToPrint_6);
      }
      break;
  }
}

MR_Word MR_CALL 
parse_tree__error_util__start_each_msg_with_blank_line_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadMsg0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailMsgs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MaybeContext_6;
    MR_Word TailMsgs_7;
    MR_Word Var_8;
    MR_Word Var_9;

    parse_tree__error_spec__extract_msg_maybe_context_2_p_0(HeadMsg0_3, &MaybeContext_6);
    TailMsgs_7 = parse_tree__error_util__start_each_msg_with_blank_line_1_f_0(TailMsgs0_4);
    {
      Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_8, 1) = ((MR_Box) (MaybeContext_6));
    }
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (HeadMsg0_3));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) (TailMsgs_7));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_9));
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word Halt_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  Halt_6 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_opt_table_2_f_0(OptionTable_7, Specs_5);
  return Halt_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word Halt_6;
  MR_Word MaybeWorstActual_7;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorstActual_7);
  if ((MaybeWorstActual_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Halt_6 = (MR_Integer) 0;
  else
  {
    MR_Word WorstActual_8 = ((MR_Word) ((MR_hl_field(1, MaybeWorstActual_7, (MR_Integer) 0))));

    switch (WorstActual_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Halt_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Halt_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word HaltAtWarn_9;

          mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) ((MR_Integer) 3)), &HaltAtWarn_9);
          switch (HaltAtWarn_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Halt_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Halt_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
    }
  }
  return Halt_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word ErrorsOrWarnings_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  ErrorsOrWarnings_6 = parse_tree__error_util__contains_errors_and_or_warnings_opt_table_2_f_0(OptionTable_7, Specs_5);
  return ErrorsOrWarnings_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word ErrorsOrWarnings_6;
  MR_Word MaybeWorstActual_7;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorstActual_7);
  if ((MaybeWorstActual_7 == (MR_Word) ((MR_Unsigned) 0U)))
    ErrorsOrWarnings_6 = (MR_Integer) 0;
  else
  {
    MR_Word WorstActual_8 = ((MR_Word) ((MR_hl_field(1, MaybeWorstActual_7, (MR_Integer) 0))));

    switch (WorstActual_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ErrorsOrWarnings_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        ErrorsOrWarnings_6 = (MR_Integer) 0;
        break;
    }
  }
  return ErrorsOrWarnings_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word Errors_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  Errors_6 = parse_tree__error_util__contains_errors_option_table_2_f_0(OptionTable_7, Specs_5);
  return Errors_6;
}

MR_Word MR_CALL 
parse_tree__error_util__contains_errors_option_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word Errors_6;
  MR_Word MaybeWorstActual_7;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorstActual_7);
  if ((MaybeWorstActual_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Errors_6 = (MR_Integer) 0;
  else
  {
    MR_Word WorstActual_8 = ((MR_Word) ((MR_hl_field(1, MaybeWorstActual_7, (MR_Integer) 0))));

    switch (WorstActual_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Errors_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        Errors_6 = (MR_Integer) 0;
        break;
    }
  }
  return Errors_6;
}

MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Specs_5)
{
  MR_Word MaybeWorst_6;

  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_4, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorst_6);
  return MaybeWorst_6;
}

MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
  MR_Word Globals_4,
  MR_Word Specs_5)
{
  MR_Word MaybeWorst_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(OptionTable_7, Specs_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeWorst_6);
  return MaybeWorst_6;
}

static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeWorst_0_3,
  MR_Word * STATE_VARIABLE_MaybeWorst_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_MaybeWorst_4 = STATE_VARIABLE_MaybeWorst_0_3;
    else
    {
      MR_Word Spec_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Specs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MaybeThis_13;
      MR_Word STATE_VARIABLE_MaybeWorst_18_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeWorst_0_3;

      MaybeThis_13 = parse_tree__error_util__actual_spec_severity_opt_table_2_f_0(HeadVar__1_1, Spec_10);
      if ((STATE_VARIABLE_MaybeWorst_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_MaybeWorst_18_18 = MaybeThis_13;
      else
      {
        MR_Word Worst_14 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0))));

        if ((MaybeThis_13 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_MaybeWorst_18_18 = STATE_VARIABLE_MaybeWorst_0_3;
        else
        {
          MR_Word This_15 = ((MR_Word) ((MR_hl_field(1, MaybeThis_13, (MR_Integer) 0))));
          MR_Word Var_20;

          Var_20 = parse_tree__error_util__worst_severity_2_f_0(Worst_14, This_15);
          {
            STATE_VARIABLE_MaybeWorst_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_MaybeWorst_18_18, 0) = ((MR_Box) (Var_20));
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Specs_11;
      next_value_of_STATE_VARIABLE_MaybeWorst_0_3 = STATE_VARIABLE_MaybeWorst_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_MaybeWorst_0_3 = next_value_of_STATE_VARIABLE_MaybeWorst_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
parse_tree__error_util__actual_spec_severity_2_f_0(
  MR_Word Globals_4,
  MR_Word Spec_5)
{
  MR_Word MaybeSeverity_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  MaybeSeverity_6 = parse_tree__error_util__actual_spec_severity_opt_table_2_f_0(OptionTable_7, Spec_5);
  return MaybeSeverity_6;
}

MR_Word MR_CALL 
parse_tree__error_util__actual_spec_severity_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Spec_5)
{
  MR_bool succeeded;
  MR_Word MaybeSeverity_6;

  switch (MR_tag((MR_Word) Spec_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Severity_27 = ((MR_Word) ((MR_hl_field(0, Spec_5, (MR_Integer) 1))));

        MaybeSeverity_6 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_4, Severity_27);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Severity_26 = ((MR_Word) ((MR_hl_field(1, Spec_5, (MR_Integer) 1))));

        MaybeSeverity_6 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_4, Severity_26);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Severity_8 = ((MR_Word) ((MR_hl_field(2, Spec_5, (MR_Integer) 1))));

        MaybeSeverity_6 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_4, Severity_8);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Option_19 = ((((MR_Unsigned) ((MR_hl_field(3, Spec_5, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
        MR_Word MatchValue_20 = ((MR_Unsigned) ((MR_hl_field(3, Spec_5, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word OptionValue_23;
        MR_Word Severity_24 = ((MR_Word) ((MR_hl_field(3, Spec_5, (MR_Integer) 2))));

        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) (Option_19)), &OptionValue_23);
        succeeded = (OptionValue_23 == MatchValue_20);
        if (succeeded)
          MaybeSeverity_6 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_4, Severity_24);
        else
          MaybeSeverity_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  return MaybeSeverity_6;
}

MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
  MR_Word Globals_4,
  MR_Word Severity_5)
{
  MR_Word MaybeActual_6;
  MR_Word OptionTable_7;

  libs__globals__get_options_2_p_0(Globals_4, &OptionTable_7);
  MaybeActual_6 = parse_tree__error_util__actual_error_severity_opt_table_2_f_0(OptionTable_7, Severity_5);
  return MaybeActual_6;
}

MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_opt_table_2_f_0(
  MR_Word OptionTable_4,
  MR_Word Severity_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeActual_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Severity_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Severity_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeActual_6 = (MR_Word) (MR_mkword(1, &parse_tree__error_util_scalar_common_3[0]));
            break;
          case (MR_Integer) 1:
            MaybeActual_6 = (MR_Word) (MR_mkword(1, &parse_tree__error_util_scalar_common_3[2]));
            break;
          case (MR_Integer) 2:
            MaybeActual_6 = (MR_Word) (MR_mkword(1, &parse_tree__error_util_scalar_common_3[1]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Option_7 = ((((MR_Unsigned) ((MR_hl_field(1, Severity_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
          MR_Word MatchValue_8 = ((MR_Unsigned) ((MR_hl_field(1, Severity_5, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Match_9 = ((MR_Word) ((MR_hl_field(1, Severity_5, (MR_Integer) 1))));
          MR_Word MaybeNoMatch_10 = ((MR_Word) ((MR_hl_field(1, Severity_5, (MR_Integer) 2))));
          MR_Word Value_11;

          mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) (Option_7)), &Value_11);
          succeeded = (Value_11 == MatchValue_8);
          if (succeeded)
          {
            MR_Word next_value_of_Severity_5 = Match_9;

            // direct tailcall eliminated
            ;
            Severity_5 = next_value_of_Severity_5;
            continue;
          }
          else
          if ((MaybeNoMatch_10 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeActual_6 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word NoMatch_12 = ((MR_Word) ((MR_hl_field(1, MaybeNoMatch_10, (MR_Integer) 0))));
            MR_Word next_value_of_Severity_5 = NoMatch_12;

            // direct tailcall eliminated
            ;
            Severity_5 = next_value_of_Severity_5;
            continue;
          }
        }
        break;
    }
    return MaybeActual_6;
    break;
  }
}

MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
parse_tree__error_util__does_spec_print_anything_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Prints_6;

  conv1_Prints_6 = parse_tree__error_util__does_msg_print_anything_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Prints_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__error_util__does_spec_print_anything_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Prints_6;

  conv0_Prints_6 = parse_tree__error_util__does_msg_print_anything_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Prints_6));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
parse_tree__error_util__does_spec_print_anything_2_p_0(
  MR_Word Globals_3,
  MR_Word Spec_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Spec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Msgs_9 = ((MR_Word) ((MR_hl_field(2, Spec_4, (MR_Integer) 3))));
        MR_Word PrintsList_10;
        MR_Word Var_17;
        MR_Word Var_29;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[0]));
          MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__error_util__does_spec_print_anything_2_p_0_2));
          MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_17, 3) = ((MR_Box) (Globals_3));
        }
        PrintsList_10 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_17, Msgs_9);
        mercury__bool__or_list_2_p_0(PrintsList_10, &Var_29);
        succeeded = (Var_29 == (MR_Integer) 1);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word TypeCtorInfo_36_23;
        MR_Word TypeCtorInfo_37_24;
        MR_Word Var_5;
        MR_Word Option_12 = ((((MR_Unsigned) ((MR_hl_field(3, Spec_4, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
        MR_Word MatchValue_13 = ((MR_Unsigned) ((MR_hl_field(3, Spec_4, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word OptionValue_16;
        MR_Word Var_18;
        MR_Word PrintsList_19;
        MR_Word Msgs_20 = ((MR_Word) ((MR_hl_field(3, Spec_4, (MR_Integer) 4))));

        libs__globals__lookup_bool_option_3_p_0(Globals_3, Option_12, &OptionValue_16);
        succeeded = (OptionValue_16 == MatchValue_13);
        if (succeeded)
        {
          TypeCtorInfo_36_23 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0);
          TypeCtorInfo_37_24 = (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0);
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[0]));
            MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__error_util__does_spec_print_anything_2_p_0_1));
            MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_18, 3) = ((MR_Box) (Globals_3));
          }
          PrintsList_19 = mercury__list__map_2_f_0(TypeCtorInfo_36_23, TypeCtorInfo_37_24, Var_18, Msgs_20);
          mercury__bool__or_list_2_p_0(PrintsList_19, &Var_5);
          succeeded = (Var_5 == (MR_Integer) 1);
        }
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_util____Compare____error_spec_accumulator_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__error_util__init(void)
{
}

void mercury__parse_tree__error_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_accumulator_0);
}

void mercury__parse_tree__error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__error_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.error_util.
