/*
** Automatically generated from `error_sort.m'
** by the Mercury compiler,
** version rotd-2022-10-14
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


// :- module parse_tree.error_sort.
// :- implementation.

/*
INIT mercury__parse_tree__error_sort__init
ENDINIT
*/

#include "parse_tree.error_sort.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_component_0;

static void MR_CALL 
parse_tree__error_sort__compare_error_specs_4_p_0(
  MR_Word Globals_5,
  MR_Word SpecA_6,
  MR_Word SpecB_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__error_sort__compare_error_msg_lists_3_p_0(
  MR_Word MsgsA_4,
  MR_Word MsgsB_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__error_sort__compare_error_msgs_3_p_0(
  MR_Word MsgA_4,
  MR_Word MsgB_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0(
  MR_Word Globals_5,
  MR_Word Component_6,
  MR_Word STATE_VARIABLE_ComponentCord_0_18,
  MR_Word * STATE_VARIABLE_ComponentCord_19);

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0(
  MR_Word Globals_4,
  MR_Word Msg0_5,
  MR_Word * Msg_6);

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0(
  MR_Word Globals_4,
  MR_Word Spec0_5,
  MR_Word * Spec_6);

static void MR_CALL 
parse_tree__error_sort__sort_error_msgs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__error_sort__sort_error_specs_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_sort__sort_error_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box parse_tree__error_sort_scalar_common_1[3][2];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_2[3][6];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_3[2][7];

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__error_sort_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_2[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0)),
    ((MR_Box) (&parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_component_0)),
    ((MR_Box) (&parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_component_0))
  },
};

static /* final */ const MR_Box parse_tree__error_sort_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__error_sort_scalar_common_2[1])),
    ((MR_Box) (parse_tree__error_sort__sort_error_msgs_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_sort__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0)
  }
};

static void MR_CALL 
parse_tree__error_sort__compare_error_specs_4_p_0(
  MR_Word Globals_5,
  MR_Word SpecA_6,
  MR_Word SpecB_7,
  MR_Word * Result_8)
{
  MR_Word MsgsA_9;
  MR_Word MsgsB_10;
  MR_Word MsgsResult_11;

  parse_tree__error_spec__extract_spec_msgs_3_p_0(Globals_5, SpecA_6, &MsgsA_9);
  parse_tree__error_spec__extract_spec_msgs_3_p_0(Globals_5, SpecB_7, &MsgsB_10);
  parse_tree__error_sort__compare_error_msg_lists_3_p_0(MsgsA_9, MsgsB_10, &MsgsResult_11);
  switch (MsgsResult_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Result_8 = MsgsResult_11;
      break;
    case (MR_Integer) 0:
      parse_tree__error_spec____Compare____error_spec_0_0(Result_8, SpecA_6, SpecB_7);
      break;
  }
}

static void MR_CALL 
parse_tree__error_sort__compare_error_msg_lists_3_p_0(
  MR_Word MsgsA_4,
  MR_Word MsgsB_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((MsgsA_4 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MsgsB_5 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_6 = (MR_Integer) 0;
      else
        *Result_6 = (MR_Integer) 1;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, MsgsA_4, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, MsgsA_4, (MR_Integer) 0))));

      if ((MsgsB_5 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_6 = (MR_Integer) 2;
      else
      {
        MR_Word HeadMsgB_13 = ((MR_Word) ((MR_hl_field(1, MsgsB_5, (MR_Integer) 0))));
        MR_Word TailMsgsB_14 = ((MR_Word) ((MR_hl_field(1, MsgsB_5, (MR_Integer) 1))));
        MR_Word HeadResult_15;

        parse_tree__error_sort__compare_error_msgs_3_p_0(Var_17, HeadMsgB_13, &HeadResult_15);
        switch (HeadResult_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *Result_6 = HeadResult_15;
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_MsgsA_4 = Var_16;
              MR_Word next_value_of_MsgsB_5 = TailMsgsB_14;

              // direct tailcall eliminated
              ;
              MsgsA_4 = next_value_of_MsgsA_4;
              MsgsB_5 = next_value_of_MsgsB_5;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__error_sort__compare_error_msgs_3_p_0(
  MR_Word MsgA_4,
  MR_Word MsgB_5,
  MR_Word * Result_6)
{
  MR_Word MaybeContextA_7;
  MR_Word MaybeContextB_8;
  MR_Word ContextResult_9;

  switch (MR_tag((MR_Word) MsgA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, MsgA_4, (MR_Integer) 0))));

        {
          MaybeContextA_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContextA_7, 0) = ((MR_Box) (Context_16));
        }
      }
      break;
    case (MR_Integer) 1:
      MaybeContextA_7 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_23 = ((MR_Word) ((MR_hl_field(2, MsgA_4, (MR_Integer) 0))));

        {
          MaybeContextA_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContextA_7, 0) = ((MR_Box) (Context_23));
        }
      }
      break;
    case (MR_Integer) 3:
      MaybeContextA_7 = ((MR_Word) ((MR_hl_field(3, MsgA_4, (MR_Integer) 0))));
      break;
  }
  switch (MR_tag((MR_Word) MsgB_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_24 = ((MR_Word) ((MR_hl_field(0, MsgB_5, (MR_Integer) 0))));

        {
          MaybeContextB_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContextB_8, 0) = ((MR_Box) (Context_24));
        }
      }
      break;
    case (MR_Integer) 1:
      MaybeContextB_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_31 = ((MR_Word) ((MR_hl_field(2, MsgB_5, (MR_Integer) 0))));

        {
          MaybeContextB_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContextB_8, 0) = ((MR_Box) (Context_31));
        }
      }
      break;
    case (MR_Integer) 3:
      MaybeContextB_8 = ((MR_Word) ((MR_hl_field(3, MsgB_5, (MR_Integer) 0))));
      break;
  }
  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_sort_scalar_common_1[1]), &ContextResult_9, ((MR_Box) (MaybeContextA_7)), ((MR_Box) (MaybeContextB_8)));
  switch (ContextResult_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Result_6 = ContextResult_9;
      break;
    case (MR_Integer) 0:
      {
        MR_Word ComponentsA_10;
        MR_Word ComponentsB_11;
        MR_Word ComponentsResult_12;

        switch (MR_tag((MR_Word) MsgA_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_33 = ((MR_Word) ((MR_hl_field(0, MsgA_4, (MR_Integer) 1))));
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_38, 0) = ((MR_Box) (Pieces_33));
              }
              {
                ComponentsA_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsA_10, 0) = ((MR_Box) (Var_38));
                MR_hl_field(1, ComponentsA_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_40 = ((MR_Word) ((MR_hl_field(1, MsgA_4, (MR_Integer) 0))));
              MR_Word Var_41;

              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_41, 0) = ((MR_Box) (Pieces_40));
              }
              {
                ComponentsA_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsA_10, 0) = ((MR_Box) (Var_41));
                MR_hl_field(1, ComponentsA_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            ComponentsA_10 = ((MR_Word) ((MR_hl_field(2, MsgA_4, (MR_Integer) 1))));
            break;
          case (MR_Integer) 3:
            ComponentsA_10 = ((MR_Word) ((MR_hl_field(3, MsgA_4, (MR_Integer) 3))));
            break;
        }
        switch (MR_tag((MR_Word) MsgB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Pieces_44 = ((MR_Word) ((MR_hl_field(0, MsgB_5, (MR_Integer) 1))));
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_49, 0) = ((MR_Box) (Pieces_44));
              }
              {
                ComponentsB_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsB_11, 0) = ((MR_Box) (Var_49));
                MR_hl_field(1, ComponentsB_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Pieces_51 = ((MR_Word) ((MR_hl_field(1, MsgB_5, (MR_Integer) 0))));
              MR_Word Var_52;

              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_52, 0) = ((MR_Box) (Pieces_51));
              }
              {
                ComponentsB_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ComponentsB_11, 0) = ((MR_Box) (Var_52));
                MR_hl_field(1, ComponentsB_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            ComponentsB_11 = ((MR_Word) ((MR_hl_field(2, MsgB_5, (MR_Integer) 1))));
            break;
          case (MR_Integer) 3:
            ComponentsB_11 = ((MR_Word) ((MR_hl_field(3, MsgB_5, (MR_Integer) 3))));
            break;
        }
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_sort_scalar_common_1[2]), &ComponentsResult_12, ((MR_Box) (ComponentsA_10)), ((MR_Box) (ComponentsB_11)));
        switch (ComponentsResult_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *Result_6 = ComponentsResult_12;
            break;
          case (MR_Integer) 0:
            parse_tree__error_spec____Compare____error_msg_0_0(Result_6, MsgA_4, MsgB_5);
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0(
  MR_Word Globals_5,
  MR_Word Component_6,
  MR_Word STATE_VARIABLE_ComponentCord_0_18,
  MR_Word * STATE_VARIABLE_ComponentCord_19)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Component_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      *STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (Component_6)));
      break;
    case (MR_Integer) 1:
      {
        MR_Word Option_8 = ((((MR_Unsigned) ((MR_hl_field(1, Component_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
        MR_Word MatchValue_9 = ((MR_Unsigned) ((MR_hl_field(1, Component_6, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word EmbeddedComponents_10 = ((MR_Word) ((MR_hl_field(1, Component_6, (MR_Integer) 1))));
        MR_Word OptionValue_11;

        libs__globals__lookup_bool_option_3_p_0(Globals_5, Option_8, &OptionValue_11);
        succeeded = (OptionValue_11 == MatchValue_9);
        if (succeeded)
        {
          MR_Word Var_21;

          Var_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), EmbeddedComponents_10);
          *STATE_VARIABLE_ComponentCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), STATE_VARIABLE_ComponentCord_0_18, Var_21);
        }
        else
          *STATE_VARIABLE_ComponentCord_19 = STATE_VARIABLE_ComponentCord_0_18;
      }
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (Component_6)));
      break;
  }
}

static void MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ComponentCord_19;

  parse_tree__error_sort__remove_conditionals_in_msg_component_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ComponentCord_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ComponentCord_19));
}

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_msg_3_p_0(
  MR_Word Globals_4,
  MR_Word Msg0_5,
  MR_Word * Msg_6)
{
  MR_bool succeeded;
  MR_Word Components0_9;
  MR_Word MaybeContext_10;
  MR_Word TreatAsFirst_11;
  MR_Integer ExtraIndent_12;
  MR_Word ComponentCord_13;
  MR_Word Components_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv1_ComponentCord_13;

  switch (MR_tag((MR_Word) Msg0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_7 = ((MR_Word) ((MR_hl_field(0, Msg0_5, (MR_Integer) 0))));
        MR_Word Pieces0_8 = ((MR_Word) ((MR_hl_field(0, Msg0_5, (MR_Integer) 1))));
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (Pieces0_8));
        }
        {
          Components0_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components0_9, 0) = ((MR_Box) (Var_17));
          MR_hl_field(1, Components0_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeContext_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContext_10, 0) = ((MR_Box) (Context_7));
        }
        TreatAsFirst_11 = (MR_Integer) 1;
        ExtraIndent_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_19;
        MR_Word Pieces0_23 = ((MR_Word) ((MR_hl_field(1, Msg0_5, (MR_Integer) 0))));

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (Pieces0_23));
        }
        {
          Components0_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components0_9, 0) = ((MR_Box) (Var_19));
          MR_hl_field(1, Components0_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeContext_10 = (MR_Word) ((MR_Unsigned) 0U);
        TreatAsFirst_11 = (MR_Integer) 1;
        ExtraIndent_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Context_24 = ((MR_Word) ((MR_hl_field(2, Msg0_5, (MR_Integer) 0))));

        Components0_9 = ((MR_Word) ((MR_hl_field(2, Msg0_5, (MR_Integer) 1))));
        {
          MaybeContext_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeContext_10, 0) = ((MR_Box) (Context_24));
        }
        TreatAsFirst_11 = (MR_Integer) 1;
        ExtraIndent_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      {
        MaybeContext_10 = ((MR_Word) ((MR_hl_field(3, Msg0_5, (MR_Integer) 0))));
        TreatAsFirst_11 = ((MR_Unsigned) ((MR_hl_field(3, Msg0_5, (MR_Integer) 1))) & (MR_Integer) 1);
        ExtraIndent_12 = ((MR_Integer) ((MR_hl_field(3, Msg0_5, (MR_Integer) 2))));
        Components0_9 = ((MR_Word) ((MR_hl_field(3, Msg0_5, (MR_Integer) 3))));
      }
      break;
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_3[1]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__error_sort__remove_conditionals_in_msg_3_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Globals_4));
  }
  Var_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), (MR_Word) (&parse_tree__error_sort_scalar_common_1[0]), Var_21, Components0_9, ((MR_Box) (Var_22)), &conv1_ComponentCord_13);
  ComponentCord_13 = ((MR_Word) (conv1_ComponentCord_13));
  Components_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0), ComponentCord_13);
  succeeded = (Components_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Msg_6 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) (MaybeContext_10));
      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (TreatAsFirst_11));
      MR_hl_field(3, base, 2) = ((MR_Box) (ExtraIndent_12));
      MR_hl_field(3, base, 3) = ((MR_Box) (Components_14));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Msg_6;

  succeeded = parse_tree__error_sort__remove_conditionals_in_msg_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Msg_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Msg_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__error_sort__remove_conditionals_in_spec_3_p_0(
  MR_Word Globals_4,
  MR_Word Spec0_5,
  MR_Word * Spec_6)
{
  MR_bool succeeded;
  MR_String Id_7;
  MR_Word Phase_9;
  MR_Word MaybeActualSeverity_11;
  MR_Word Msgs_12;
  MR_Word ActualSeverity_18;
  MR_Word Severity_21;

  switch (MR_tag((MR_Word) Spec0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Severity0_8;
        MR_Word Msgs0_10;
        MR_Word Var_22;

        Id_7 = ((MR_String) ((MR_hl_field(0, Spec0_5, (MR_Integer) 0))));
        Severity0_8 = ((MR_Word) ((MR_hl_field(0, Spec0_5, (MR_Integer) 1))));
        Phase_9 = ((MR_Word) ((MR_hl_field(0, Spec0_5, (MR_Integer) 2))));
        Msgs0_10 = ((MR_Word) ((MR_hl_field(0, Spec0_5, (MR_Integer) 3))));
        MaybeActualSeverity_11 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_4, Severity0_8);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_2[2]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (parse_tree__error_sort__remove_conditionals_in_spec_3_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (Globals_4));
        }
        mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_22, Msgs0_10, &Msgs_12);
        succeeded = (Msgs_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context0_13;
        MR_Word Pieces0_14;
        MR_Word Var_23;
        MR_Word Severity0_27;

        Id_7 = ((MR_String) ((MR_hl_field(1, Spec0_5, (MR_Integer) 0))));
        Severity0_27 = ((MR_Word) ((MR_hl_field(1, Spec0_5, (MR_Integer) 1))));
        Phase_9 = ((MR_Word) ((MR_hl_field(1, Spec0_5, (MR_Integer) 2))));
        Context0_13 = ((MR_Word) ((MR_hl_field(1, Spec0_5, (MR_Integer) 3))));
        Pieces0_14 = ((MR_Word) ((MR_hl_field(1, Spec0_5, (MR_Integer) 4))));
        MaybeActualSeverity_11 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_4, Severity0_27);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (Context0_13));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (Pieces0_14));
        }
        {
          Msgs_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_12, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, Msgs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_25;
        MR_Word Severity0_28;
        MR_Word Pieces0_29;

        Id_7 = ((MR_String) ((MR_hl_field(2, Spec0_5, (MR_Integer) 0))));
        Severity0_28 = ((MR_Word) ((MR_hl_field(2, Spec0_5, (MR_Integer) 1))));
        Phase_9 = ((MR_Word) ((MR_hl_field(2, Spec0_5, (MR_Integer) 2))));
        Pieces0_29 = ((MR_Word) ((MR_hl_field(2, Spec0_5, (MR_Integer) 3))));
        MaybeActualSeverity_11 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_4, Severity0_28);
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Pieces0_29));
        }
        {
          Msgs_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Msgs_12, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, Msgs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Option_15;
        MR_Word MatchValue_16;
        MR_Word OptionValue_17;
        MR_Word Severity0_30;

        Id_7 = ((MR_String) ((MR_hl_field(3, Spec0_5, (MR_Integer) 0))));
        Option_15 = ((((MR_Unsigned) ((MR_hl_field(3, Spec0_5, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
        MatchValue_16 = ((MR_Unsigned) ((MR_hl_field(3, Spec0_5, (MR_Integer) 1))) & (MR_Integer) 1);
        Severity0_30 = ((MR_Word) ((MR_hl_field(3, Spec0_5, (MR_Integer) 2))));
        Phase_9 = ((MR_Word) ((MR_hl_field(3, Spec0_5, (MR_Integer) 3))));
        Msgs_12 = ((MR_Word) ((MR_hl_field(3, Spec0_5, (MR_Integer) 4))));
        libs__globals__lookup_bool_option_3_p_0(Globals_4, Option_15, &OptionValue_17);
        succeeded = (OptionValue_17 == MatchValue_16);
        if (succeeded)
        {
          MaybeActualSeverity_11 = parse_tree__error_util__actual_error_severity_2_f_0(Globals_4, Severity0_30);
          succeeded = (Msgs_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      break;
  }
  if (succeeded)
  {
    succeeded = (MaybeActualSeverity_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActualSeverity_18 = ((MR_Word) ((MR_hl_field(1, MaybeActualSeverity_11, (MR_Integer) 0))));
      switch (ActualSeverity_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Severity_21 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          Severity_21 = (MR_Word) ((MR_Unsigned) 8U);
          break;
        case (MR_Integer) 1:
          Severity_21 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *Spec_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Id_7));
        MR_hl_field(0, base, 1) = ((MR_Box) (Severity_21));
        MR_hl_field(0, base, 2) = ((MR_Box) (Phase_9));
        MR_hl_field(0, base, 3) = ((MR_Box) (Msgs_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__error_sort__sort_error_msgs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  parse_tree__error_sort__compare_error_msgs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

void MR_CALL 
parse_tree__error_sort__sort_error_msgs_2_p_0(
  MR_Word Msgs0_3,
  MR_Word * Msgs_4)
{
  mercury__list__sort_and_remove_dups_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&parse_tree__error_sort_scalar_common_4[0]), Msgs0_3, Msgs_4);
}

static void MR_CALL 
parse_tree__error_sort__sort_error_specs_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Result_8;

  parse_tree__error_sort__compare_error_specs_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Result_8));
}

static MR_bool MR_CALL 
parse_tree__error_sort__sort_error_specs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Spec_6;

  succeeded = parse_tree__error_sort__remove_conditionals_in_spec_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Spec_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Spec_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
parse_tree__error_sort__sort_error_specs_3_p_0(
  MR_Word Globals_4,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word STATE_VARIABLE_Specs_9_9;
  MR_Word Var_10;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_2[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (parse_tree__error_sort__sort_error_specs_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Globals_4));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_8, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_9_9);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&parse_tree__error_sort_scalar_common_3[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (parse_tree__error_sort__sort_error_specs_3_p_0_2));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Globals_4));
  }
  mercury__list__sort_and_remove_dups_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_10, STATE_VARIABLE_Specs_9_9, STATE_VARIABLE_Specs_7);
}

void mercury__parse_tree__error_sort__init(void)
{
}

void mercury__parse_tree__error_sort__init_type_tables(void)
{
}

void mercury__parse_tree__error_sort__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__error_sort__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.error_sort.
