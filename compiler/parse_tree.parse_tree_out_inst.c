/*
** Automatically generated from `parse_tree_out_inst.m'
** by the Mercury compiler,
** version rotd-2022-05-20
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


// :- module parse_tree.parse_tree_out_inst.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_inst__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_inst.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
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
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(
  MR_Word TypeClassInfo_for_output_39,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_user_defined_mode_7_p_0(
  MR_Word TypeClassInfo_for_output_31,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word SymName_10,
  MR_Word ArgInsts_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word Real_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9);


static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_2[1][2];




static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Mode_7)
{
  MR_String String_8;
  MR_Box conv0_String_8;

  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[1]), Lang_5, InstVarSet_6, Mode_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
  String_8 = ((MR_String) (conv0_String_8));
  return String_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Mode_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[0]), Lang_8, InstVarSet_9, Mode_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Modes_7)
{
  MR_String String_8;
  MR_Box conv0_String_8;

  parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[1]), Lang_5, InstVarSet_6, Modes_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
  String_8 = ((MR_String) (conv0_String_8));
  return String_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_list_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Modes_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[0]), Lang_8, InstVarSet_9, Modes_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(
  MR_Word Uniq_3)
{
  MR_String String_4;
  MR_Box conv0_String_4;

  parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[1]), Uniq_3, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_4);
  String_4 = ((MR_String) (conv0_String_4));
  return String_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(
  MR_Word Uniq_4,
  MR_String Suffix_5)
{
  MR_String String_6;
  MR_Box conv0_String_6;

  parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[1]), Uniq_4, Suffix_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_6);
  String_6 = ((MR_String) (conv0_String_6));
  return String_6;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word Real_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) "fake, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) "real, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_inst_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Inst_7)
{
  MR_String String_8;
  MR_Box conv0_String_8;

  parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[1]), Lang_5, InstVarSet_6, Inst_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
  String_8 = ((MR_String) (conv0_String_8));
  return String_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Inst_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[0]), Lang_8, InstVarSet_9, Inst_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_inst_list_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Insts_7)
{
  MR_String String_8;
  MR_Box conv0_String_8;

  parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[1]), Lang_5, InstVarSet_6, Insts_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
  String_8 = ((MR_String) (conv0_String_8));
  return String_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_list_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Insts_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_1[0]), Lang_8, InstVarSet_9, Insts_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_output_56,
  MR_Word tscc_proc_1_input_2_Lang_7,
  MR_Word tscc_proc_1_input_3_InstVarSet_8,
  MR_Word tscc_proc_1_input_4_Inst_9,
  MR_Box tscc_proc_1_input_5_S_10,
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_U_0_24,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_25)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_output_30;
  MR_Word tscc_proc_2_input_2_Lang_8;
  MR_Word tscc_proc_2_input_3_InstVarSet_9;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
  MR_Word tscc_proc_2_input_5_Inst_11;
  MR_Box tscc_proc_2_input_6_S_12;
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
  MR_Box tscc_output_1_STATE_VARIABLE_U_25;

  // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_inst.mercury_format_inst/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_inst/6-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_constrained_inst_vars/7-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_output_56 = tscc_proc_1_input_1_TypeClassInfo_for_output_56;
    MR_Word Lang_7 = tscc_proc_1_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_1_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_1_input_4_Inst_9;
    MR_Box S_10 = tscc_proc_1_input_5_S_10;
    MR_Box STATE_VARIABLE_U_0_24 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_24;
    MR_Box STATE_VARIABLE_U_25;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

              func_2(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "free")), S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

              func_4(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "not_reached")), S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

          func_3(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "free(with some type)")), S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

          if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0(TypeClassInfo_for_output_56, Uniq_12, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
          else
          {
            MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_33_33;
              MR_Box STATE_VARIABLE_U_35_35;
              MR_Box STATE_VARIABLE_U_36_36;
              MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_56, Uniq_50, (MR_String) "bound", S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_33_33);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
              func_0(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
              parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, BoundInsts_17, S_10, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
              func_1(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_54 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_56, Uniq_53, (MR_String) "ground", S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
              else
              {
                MR_Word PredInstInfo_51 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_54), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, Uniq_53, PredInstInfo_51, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_output_56, InstVarSet_8, (MR_Integer) 0, Var_18, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
              MR_Word CInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30 = TypeClassInfo_for_output_56;
              MR_Word next_value_of_tscc_proc_2_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = Vars_19;
              MR_Word next_value_of_tscc_proc_2_input_5_Inst_11 = CInst_20;
              MR_Box next_value_of_tscc_proc_2_input_6_S_12 = S_10;
              MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_0_24;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_output_30 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30;
              tscc_proc_2_input_2_Lang_8 = next_value_of_tscc_proc_2_input_2_Lang_8;
              tscc_proc_2_input_3_InstVarSet_9 = next_value_of_tscc_proc_2_input_3_InstVarSet_9;
              tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_2_input_5_Inst_11 = next_value_of_tscc_proc_2_input_5_Inst_11;
              tscc_proc_2_input_6_S_12 = next_value_of_tscc_proc_2_input_6_S_12;
              tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, InstName_23, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
              MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Name_21));
                MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Args_22));
              }
              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, Var_45, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_25 = STATE_VARIABLE_U_25;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_output_30 = tscc_proc_2_input_1_TypeClassInfo_for_output_30;
    MR_Word Lang_8 = tscc_proc_2_input_2_Lang_8;
    MR_Word InstVarSet_9 = tscc_proc_2_input_3_InstVarSet_9;
    MR_Word STATE_VARIABLE_Vars_0_15 = tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
    MR_Word Inst_11 = tscc_proc_2_input_5_Inst_11;
    MR_Box S_12 = tscc_proc_2_input_6_S_12;
    MR_Box STATE_VARIABLE_U_0_16 = tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
    MR_Box STATE_VARIABLE_U_17;
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_Vars_18_18;
    MR_Box conv5_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[0]), &conv5_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_18_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv5_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_20_20;
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_25_25;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_6(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_20_20);
      parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_output_30, InstVarSet_9, (MR_Integer) 0, Var_14, S_12, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) ((MR_String) " =< ")), S_12, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
      parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_output_30, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_18_18, Inst_11, S_12, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5))));
      func_8(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_17);
    }
    else
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_56 = TypeClassInfo_for_output_30;
      MR_Word next_value_of_tscc_proc_1_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_1_input_4_Inst_9 = Inst_11;
      MR_Box next_value_of_tscc_proc_1_input_5_S_10 = S_12;
      MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_24 = STATE_VARIABLE_U_0_16;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_output_56 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_56;
      tscc_proc_1_input_2_Lang_7 = next_value_of_tscc_proc_1_input_2_Lang_7;
      tscc_proc_1_input_3_InstVarSet_8 = next_value_of_tscc_proc_1_input_3_InstVarSet_8;
      tscc_proc_1_input_4_Inst_9 = next_value_of_tscc_proc_1_input_4_Inst_9;
      tscc_proc_1_input_5_S_10 = next_value_of_tscc_proc_1_input_5_S_10;
      tscc_proc_1_input_6_STATE_VARIABLE_U_0_24 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_24;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_U_25 = STATE_VARIABLE_U_17;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_25 = tscc_output_1_STATE_VARIABLE_U_25;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_output_30,
  MR_Word tscc_proc_2_input_2_Lang_8,
  MR_Word tscc_proc_2_input_3_InstVarSet_9,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15,
  MR_Word tscc_proc_2_input_5_Inst_11,
  MR_Box tscc_proc_2_input_6_S_12,
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_U_0_16,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_25)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_output_56;
  MR_Word tscc_proc_1_input_2_Lang_7;
  MR_Word tscc_proc_1_input_3_InstVarSet_8;
  MR_Word tscc_proc_1_input_4_Inst_9;
  MR_Box tscc_proc_1_input_5_S_10;
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_U_0_24;
  MR_Box tscc_output_1_STATE_VARIABLE_U_25;

  // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_inst.mercury_format_constrained_inst_vars/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_inst/6-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_constrained_inst_vars/7-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_output_56 = tscc_proc_1_input_1_TypeClassInfo_for_output_56;
    MR_Word Lang_7 = tscc_proc_1_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_1_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_1_input_4_Inst_9;
    MR_Box S_10 = tscc_proc_1_input_5_S_10;
    MR_Box STATE_VARIABLE_U_0_24 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_24;
    MR_Box STATE_VARIABLE_U_25;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

              func_2(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "free")), S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

              func_4(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "not_reached")), S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

          func_3(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "free(with some type)")), S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_9, (MR_Integer) 1))));

          if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0(TypeClassInfo_for_output_56, Uniq_12, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
          else
          {
            MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_33_33;
              MR_Box STATE_VARIABLE_U_35_35;
              MR_Box STATE_VARIABLE_U_36_36;
              MR_Word Uniq_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_56, Uniq_50, (MR_String) "bound", S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_33_33);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
              func_0(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
              parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, BoundInsts_17, S_10, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
              func_1(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_54 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_56, Uniq_53, (MR_String) "ground", S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
              else
              {
                MR_Word PredInstInfo_51 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_54), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, Uniq_53, PredInstInfo_51, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_output_56, InstVarSet_8, (MR_Integer) 0, Var_18, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
              MR_Word CInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30 = TypeClassInfo_for_output_56;
              MR_Word next_value_of_tscc_proc_2_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = Vars_19;
              MR_Word next_value_of_tscc_proc_2_input_5_Inst_11 = CInst_20;
              MR_Box next_value_of_tscc_proc_2_input_6_S_12 = S_10;
              MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_0_24;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_output_30 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30;
              tscc_proc_2_input_2_Lang_8 = next_value_of_tscc_proc_2_input_2_Lang_8;
              tscc_proc_2_input_3_InstVarSet_9 = next_value_of_tscc_proc_2_input_3_InstVarSet_9;
              tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_2_input_5_Inst_11 = next_value_of_tscc_proc_2_input_5_Inst_11;
              tscc_proc_2_input_6_S_12 = next_value_of_tscc_proc_2_input_6_S_12;
              tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, InstName_23, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 1))));
              MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_9, (MR_Integer) 2))));
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Name_21));
                MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Args_22));
              }
              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_56, Lang_7, InstVarSet_8, Var_45, S_10, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_25);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_25 = STATE_VARIABLE_U_25;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_output_30 = tscc_proc_2_input_1_TypeClassInfo_for_output_30;
    MR_Word Lang_8 = tscc_proc_2_input_2_Lang_8;
    MR_Word InstVarSet_9 = tscc_proc_2_input_3_InstVarSet_9;
    MR_Word STATE_VARIABLE_Vars_0_15 = tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
    MR_Word Inst_11 = tscc_proc_2_input_5_Inst_11;
    MR_Box S_12 = tscc_proc_2_input_6_S_12;
    MR_Box STATE_VARIABLE_U_0_16 = tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
    MR_Box STATE_VARIABLE_U_17;
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_Vars_18_18;
    MR_Box conv5_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[0]), &conv5_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_18_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv5_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_20_20;
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_25_25;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_6(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_20_20);
      parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_output_30, InstVarSet_9, (MR_Integer) 0, Var_14, S_12, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) ((MR_String) " =< ")), S_12, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
      parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_output_30, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_18_18, Inst_11, S_12, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
      func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5))));
      func_8(((MR_Box) (TypeClassInfo_for_output_30)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_17);
    }
    else
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_56 = TypeClassInfo_for_output_30;
      MR_Word next_value_of_tscc_proc_1_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_1_input_4_Inst_9 = Inst_11;
      MR_Box next_value_of_tscc_proc_1_input_5_S_10 = S_12;
      MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_24 = STATE_VARIABLE_U_0_16;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_output_56 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_56;
      tscc_proc_1_input_2_Lang_7 = next_value_of_tscc_proc_1_input_2_Lang_7;
      tscc_proc_1_input_3_InstVarSet_8 = next_value_of_tscc_proc_1_input_3_InstVarSet_8;
      tscc_proc_1_input_4_Inst_9 = next_value_of_tscc_proc_1_input_4_Inst_9;
      tscc_proc_1_input_5_S_10 = next_value_of_tscc_proc_1_input_5_S_10;
      tscc_proc_1_input_6_STATE_VARIABLE_U_0_24 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_24;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_U_25 = STATE_VARIABLE_U_17;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_25 = tscc_output_1_STATE_VARIABLE_U_25;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(
  MR_Word TypeClassInfo_for_output_37,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word Mode0_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_27,
  MR_Box * STATE_VARIABLE_U_28)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Mode0_9)) == (MR_Integer) 0))
  {
    MR_Word FromInst0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_9, (MR_Integer) 0))));
    MR_Word ToInst0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_9, (MR_Integer) 1))));

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_15;

          succeeded = ((((MR_tag((MR_Word) FromInst0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FromInst0_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            HOInstInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromInst0_12, (MR_Integer) 2))));
            succeeded = (HOInstInfo_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ToInst0_13, FromInst0_12);
          }
          if (succeeded)
            parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_37, Lang_7, InstVarSet_8, FromInst0_12, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
          else
          {
            MR_Word Mode1_20;

            parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst0_12, ToInst0_13, &Mode1_20);
            if (((MR_tag((MR_Word) Mode1_20)) == (MR_Integer) 0))
            {
              MR_Word FromInst1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode1_20, (MR_Integer) 0))));
              MR_Word ToInst1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode1_20, (MR_Integer) 1))));
              MR_Word FromInst_23;
              MR_Word ToInst_24;
              MR_Box STATE_VARIABLE_U_17_48;
              MR_Box STATE_VARIABLE_U_18_49;
              MR_Box STATE_VARIABLE_U_20_51;
              MR_Box STATE_VARIABLE_U_21_52;

              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(FromInst1_21, &FromInst_23);
              parse_tree__prog_mode__strip_builtin_qualifiers_from_inst_2_p_0(ToInst1_22, &ToInst_24);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_37, (MR_String) "(", S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_17_48);
              parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_37, Lang_7, InstVarSet_8, FromInst_23, S_10, STATE_VARIABLE_U_17_48, &STATE_VARIABLE_U_18_49);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_37, (MR_String) " >> ", S_10, STATE_VARIABLE_U_18_49, &STATE_VARIABLE_U_20_51);
              parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_37, Lang_7, InstVarSet_8, ToInst_24, S_10, STATE_VARIABLE_U_20_51, &STATE_VARIABLE_U_21_52);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_37, (MR_String) ")", S_10, STATE_VARIABLE_U_21_52, STATE_VARIABLE_U_28);
            }
            else
            {
              MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode1_20, (MR_Integer) 0))));
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode1_20, (MR_Integer) 1))));

              parse_tree__parse_tree_out_inst__mercury_format_user_defined_mode_7_p_0(TypeClassInfo_for_output_37, Lang_7, InstVarSet_8, SymName_25, ArgInsts_26, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_U_17_64;
          MR_Box STATE_VARIABLE_U_18_65;
          MR_Box STATE_VARIABLE_U_20_67;
          MR_Box STATE_VARIABLE_U_21_68;

          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_37, (MR_String) "(", S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_17_64);
          parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_37, Lang_7, InstVarSet_8, FromInst0_12, S_10, STATE_VARIABLE_U_17_64, &STATE_VARIABLE_U_18_65);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_37, (MR_String) " >> ", S_10, STATE_VARIABLE_U_18_65, &STATE_VARIABLE_U_20_67);
          parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_37, Lang_7, InstVarSet_8, ToInst0_13, S_10, STATE_VARIABLE_U_20_67, &STATE_VARIABLE_U_21_68);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_37, (MR_String) ")", S_10, STATE_VARIABLE_U_21_68, STATE_VARIABLE_U_28);
        }
        break;
    }
  }
  else
  {
    MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_9, (MR_Integer) 0))));
    MR_Word ArgInsts_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_9, (MR_Integer) 1))));

    parse_tree__parse_tree_out_inst__mercury_format_user_defined_mode_7_p_0(TypeClassInfo_for_output_37, Lang_7, InstVarSet_8, SymName_35, ArgInsts_36, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(
  MR_Word TypeClassInfo_for_output_39,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word BoundInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_15, (MR_Integer) 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_15, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_28_28;

      if ((Args_20 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(TypeClassInfo_for_output_39, Lang_1, (MR_Integer) 0, ConsId_19, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_28_28);
      else
      {
        MR_Box STATE_VARIABLE_U_30_30;
        MR_Box STATE_VARIABLE_U_32_32;
        MR_Box STATE_VARIABLE_U_33_33;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(TypeClassInfo_for_output_39, Lang_1, (MR_Integer) 1, ConsId_19, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_30_30);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_39, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_output_39)), ((MR_Box) ((MR_String) "(")), HeadVar__4_4, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_output_39, Lang_1, InstVarSet_2, Args_20, HeadVar__4_4, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_39, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_39)), ((MR_Box) ((MR_String) ")")), HeadVar__4_4, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_28_28);
      }
      if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_28_28;
      else
      {
        MR_Box STATE_VARIABLE_U_37_37;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_39, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Word next_value_of_HeadVar__3_3;
        MR_Box next_value_of_STATE_VARIABLE_U_0_5;

        func_2(((MR_Box) (TypeClassInfo_for_output_39)), ((MR_Box) ((MR_String) " ; ")), HeadVar__4_4, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_37_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = BoundInsts_16;
        next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_37_37;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_23_23;

      parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_27, Lang_1, InstVarSet_2, Inst_15, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_23_23);
      if ((Insts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_23;
      else
      {
        MR_Box STATE_VARIABLE_U_25_25;
        MR_Word Inst_36;
        MR_Word Insts_37;
        MR_Box STATE_VARIABLE_U_23_44;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
        Inst_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_16, (MR_Integer) 0))));
        Insts_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_16, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_27, Lang_1, InstVarSet_2, Inst_36, HeadVar__4_4, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_23_44);
        if ((Insts_37 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_44;
        else
        {
          MR_Box STATE_VARIABLE_U_25_46;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_5;

          func_1(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_44, &STATE_VARIABLE_U_25_46);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Insts_37;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_25_46;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Mode_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_23_23;

      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_27, Lang_1, InstVarSet_2, Mode_15, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_23_23);
      if ((Modes_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_23;
      else
      {
        MR_Box STATE_VARIABLE_U_25_25;
        MR_Word Mode_36;
        MR_Word Modes_37;
        MR_Box STATE_VARIABLE_U_23_44;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
        Mode_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_16, (MR_Integer) 0))));
        Modes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_16, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_27, Lang_1, InstVarSet_2, Mode_36, HeadVar__4_4, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_23_44);
        if ((Modes_37 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_44;
        else
        {
          MR_Box STATE_VARIABLE_U_25_46;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_5;

          func_1(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_44, &STATE_VARIABLE_U_25_46);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Modes_37;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_25_46;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(
  MR_Word TypeClassInfo_for_output_133,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word InstName_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 0))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_9, (MR_Integer) 1))));

          if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_133, Name_12, S_10, STATE_VARIABLE_U_0_25, STATE_VARIABLE_U_26);
          else
          {
            MR_Box STATE_VARIABLE_U_28_28;
            MR_Box STATE_VARIABLE_U_30_30;
            MR_Box STATE_VARIABLE_U_31_31;

            parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_133, Name_12, S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "(", S_10, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
            parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, Args_13, S_10, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_31_31, STATE_VARIABLE_U_26);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_9, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word InstA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_9, (MR_Integer) 1))));
          MR_Word InstB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_9, (MR_Integer) 2))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_37_37;
                MR_Box STATE_VARIABLE_U_38_38;
                MR_Box STATE_VARIABLE_U_39_39;
                MR_Box STATE_VARIABLE_U_41_41;
                MR_Word Insts_185;
                MR_Box STATE_VARIABLE_U_23_192;
                MR_Box STATE_VARIABLE_U_25_194;
                MR_Word Inst_204;
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044unify(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_37_37);
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_133, IsLive_16, S_10, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
                parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_output_133, Real_17, S_10, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
                {
                  Insts_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Insts_185, 0) = ((MR_Box) (InstB_19));
                  MR_hl_field(MR_mktag(1), Insts_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, InstA_18, S_10, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_23_192);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_133, (MR_Integer) 0)), (MR_Integer) 5))));
                func_1(((MR_Box) (TypeClassInfo_for_output_133)), ((MR_Box) ((MR_String) ", ")), S_10, STATE_VARIABLE_U_23_192, &STATE_VARIABLE_U_25_194);
                Inst_204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_185, (MR_Integer) 0))));
                parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, Inst_204, S_10, STATE_VARIABLE_U_25_194, &STATE_VARIABLE_U_41_41);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_41_41, STATE_VARIABLE_U_26);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/6", (MR_String) "unify_inst");
                return;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_118 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_9, (MR_Integer) 0))));
          MR_Word InstB_119 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_9, (MR_Integer) 1))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_49_49;
                MR_Box STATE_VARIABLE_U_51_51;
                MR_Word Insts_145;
                MR_Box STATE_VARIABLE_U_23_152;
                MR_Box STATE_VARIABLE_U_25_154;
                MR_Word Inst_164;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044merge_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_49_49);
                {
                  Insts_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Insts_145, 0) = ((MR_Box) (InstB_119));
                  MR_hl_field(MR_mktag(1), Insts_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, InstA_118, S_10, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_23_152);
                func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_133, (MR_Integer) 0)), (MR_Integer) 5))));
                func_0(((MR_Box) (TypeClassInfo_for_output_133)), ((MR_Box) ((MR_String) ", ")), S_10, STATE_VARIABLE_U_23_152, &STATE_VARIABLE_U_25_154);
                Inst_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_145, (MR_Integer) 0))));
                parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, Inst_164, S_10, STATE_VARIABLE_U_25_154, &STATE_VARIABLE_U_51_51);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_51_51, STATE_VARIABLE_U_26);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/6", (MR_String) "merge_inst");
                return;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))));
              MR_Word Uniq_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_120 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_121 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))) & (MR_Integer) 1);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_59_59;
                    MR_Box STATE_VARIABLE_U_60_60;
                    MR_Box STATE_VARIABLE_U_62_62;
                    MR_Box STATE_VARIABLE_U_63_63;
                    MR_Box STATE_VARIABLE_U_65_65;
                    MR_Box STATE_VARIABLE_U_66_66;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044ground(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_59_59);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, SubInstName_20, S_10, STATE_VARIABLE_U_59_59, &STATE_VARIABLE_U_60_60);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ", ", S_10, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_62_62);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_133, IsLive_120, S_10, STATE_VARIABLE_U_62_62, &STATE_VARIABLE_U_63_63);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_133, Uniq_21, (MR_String) "shared", S_10, STATE_VARIABLE_U_63_63, &STATE_VARIABLE_U_65_65);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_output_133, Real_121, S_10, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_66_66);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_66_66, STATE_VARIABLE_U_26);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/6", (MR_String) "ground_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsLive_122 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_123 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubInstName_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))));
              MR_Word Uniq_125 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_72_72;
                    MR_Box STATE_VARIABLE_U_73_73;
                    MR_Box STATE_VARIABLE_U_75_75;
                    MR_Box STATE_VARIABLE_U_76_76;
                    MR_Box STATE_VARIABLE_U_78_78;
                    MR_Box STATE_VARIABLE_U_79_79;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044any(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_72_72);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, SubInstName_124, S_10, STATE_VARIABLE_U_72_72, &STATE_VARIABLE_U_73_73);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ", ", S_10, STATE_VARIABLE_U_73_73, &STATE_VARIABLE_U_75_75);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_133, IsLive_122, S_10, STATE_VARIABLE_U_75_75, &STATE_VARIABLE_U_76_76);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_133, Uniq_125, (MR_String) "shared", S_10, STATE_VARIABLE_U_76_76, &STATE_VARIABLE_U_78_78);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_output_133, Real_123, S_10, STATE_VARIABLE_U_78_78, &STATE_VARIABLE_U_79_79);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_79_79, STATE_VARIABLE_U_26);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/6", (MR_String) "any_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_85_85;
                    MR_Box STATE_VARIABLE_U_86_86;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044shared_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_85_85);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, SubInstName_126, S_10, STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_86_86);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_86_86, STATE_VARIABLE_U_26);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/6", (MR_String) "shared_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_92_92;
                    MR_Box STATE_VARIABLE_U_93_93;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044mostly_uniq_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_92_92);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, SubInstName_127, S_10, STATE_VARIABLE_U_92_92, &STATE_VARIABLE_U_93_93);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_93_93, STATE_VARIABLE_U_26);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/6", (MR_String) "mostly_uniq_inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Uniqueness_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeVarSet_24;
                    MR_Box STATE_VARIABLE_U_99_99;
                    MR_Box STATE_VARIABLE_U_101_101;
                    MR_Box STATE_VARIABLE_U_103_103;
                    MR_Box STATE_VARIABLE_U_105_105;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044typed_ground(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_99_99);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_133, Uniqueness_22, (MR_String) "shared", S_10, STATE_VARIABLE_U_99_99, &STATE_VARIABLE_U_101_101);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ", ", S_10, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_103_103);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_24);
                    parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_133, TypeVarSet_24, (MR_Integer) 0, Type_23, S_10, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_105_105);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_105_105, STATE_VARIABLE_U_26);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/6", (MR_String) "typed_ground");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 2))));
              MR_Word Type_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_9, (MR_Integer) 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_110_110;
                    MR_Box STATE_VARIABLE_U_112_112;
                    MR_Box STATE_VARIABLE_U_114_114;
                    MR_Box STATE_VARIABLE_U_115_115;
                    MR_Word TypeVarSet_128;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) "\044typed_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_110_110);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_128);
                    parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_133, TypeVarSet_128, (MR_Integer) 0, Type_131, S_10, STATE_VARIABLE_U_110_110, &STATE_VARIABLE_U_112_112);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ", ", S_10, STATE_VARIABLE_U_112_112, &STATE_VARIABLE_U_114_114);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_output_133, Lang_7, InstVarSet_8, SubInstName_130, S_10, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_133, (MR_String) ")", S_10, STATE_VARIABLE_U_115_115, STATE_VARIABLE_U_26);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_InstName_9 = SubInstName_130;

                    // direct tailcall eliminated
                    ;
                    InstName_9 = next_value_of_InstName_9;
                    continue;
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
parse_tree__parse_tree_out_inst__mercury_format_user_defined_mode_7_p_0(
  MR_Word TypeClassInfo_for_output_31,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word SymName_10,
  MR_Word ArgInsts_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  switch (Lang_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Name_14;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (Name_14)), S_12, STATE_VARIABLE_U_0_17, STATE_VARIABLE_U_18);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_21_21;
        MR_Box STATE_VARIABLE_U_24_24;
        MR_Box STATE_VARIABLE_U_25_25;
        MR_String Name_28;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Name_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (Name_28)), S_12, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_21_21);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_21_21, &STATE_VARIABLE_U_24_24);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_output_31, Lang_8, InstVarSet_9, ArgInsts_11, S_12, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_18);
      }
      break;
    case (MR_Integer) 0:
      if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_31, SymName_10, S_12, STATE_VARIABLE_U_0_17, STATE_VARIABLE_U_18);
      else
      {
        MR_Box STATE_VARIABLE_U_21_36;
        MR_Box STATE_VARIABLE_U_24_38;
        MR_Box STATE_VARIABLE_U_25_39;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_31, SymName_10, S_12, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_21_36);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
        func_4(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_21_36, &STATE_VARIABLE_U_24_38);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_output_31, Lang_8, InstVarSet_9, ArgInsts_11, S_12, STATE_VARIABLE_U_24_38, &STATE_VARIABLE_U_25_39);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
        func_5(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_25_39, STATE_VARIABLE_U_18);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(
  MR_Word TypeClassInfo_for_output_64,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Box STATE_VARIABLE_U_32_32;
  MR_Box STATE_VARIABLE_U_37_37;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_28_28;
        MR_Box STATE_VARIABLE_U_30_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
        parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_64, Uniq_10, (MR_String) "any", S_12, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_U_32_32 = STATE_VARIABLE_U_0_25;
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_Box STATE_VARIABLE_U_47_47;
        MR_Box STATE_VARIABLE_U_53_53;
        MR_Box STATE_VARIABLE_U_55_55;
        MR_Box STATE_VARIABLE_U_56_56;
        MR_Box conv2_RetMode_21;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv2_RetMode_21);
        RetMode_21 = ((MR_Word) (conv2_RetMode_21));
        if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));

          func_3(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "(any_func = ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_47_47);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_49_49;
          MR_Box STATE_VARIABLE_U_50_50;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_4(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "(any_func(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_49_49);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, ArgModes_20, S_12, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_50_50);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
          func_5(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ") = ")), S_12, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_47_47);
        }
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, RetMode_21, S_12, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_53_53);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) " is ")), S_12, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_55_55);
        parse_tree__mercury_to_mercury__mercury_format_det_4_p_0(TypeClassInfo_for_output_64, Det_17, S_12, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_56_56);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_37_37);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_34_34;
        MR_Box STATE_VARIABLE_U_35_35;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_8(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "(any_pred is ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
        parse_tree__mercury_to_mercury__mercury_format_det_4_p_0(TypeClassInfo_for_output_64, Det_17, S_12, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_35_35);
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_9(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_39_39;
        MR_Box STATE_VARIABLE_U_40_40;
        MR_Box STATE_VARIABLE_U_42_42;
        MR_Box STATE_VARIABLE_U_43_43;
        MR_Word Mode_74;
        MR_Word Modes_75;
        MR_Box STATE_VARIABLE_U_23_82;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_10(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "(any_pred(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_39_39);
        Mode_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_15, (MR_Integer) 0))));
        Modes_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_15, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, Mode_74, S_12, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_23_82);
        if ((Modes_75 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_40_40 = STATE_VARIABLE_U_23_82;
        else
        {
          MR_Box STATE_VARIABLE_U_25_84;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));

          func_11(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_23_82, &STATE_VARIABLE_U_25_84);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, Modes_75, S_12, STATE_VARIABLE_U_25_84, &STATE_VARIABLE_U_40_40);
        }
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_12(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ") is ")), S_12, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_42_42);
        parse_tree__mercury_to_mercury__mercury_format_det_4_p_0(TypeClassInfo_for_output_64, Det_17, S_12, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_43_43);
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_13(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_37_37);
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_37_37;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgRegs_16, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_60_60;
    MR_Box STATE_VARIABLE_U_61_61;
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_14(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) " /* arg regs: [")), S_12, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_60_60);
    parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(TypeClassInfo_for_output_64, ArgRegs_24, S_12, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_61_61);
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
    func_15(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "] */")), S_12, STATE_VARIABLE_U_61_61, STATE_VARIABLE_U_26);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(
  MR_Word TypeClassInfo_for_output_64,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo_11, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Box STATE_VARIABLE_U_32_32;
  MR_Box STATE_VARIABLE_U_37_37;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_28_28;
        MR_Box STATE_VARIABLE_U_30_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
        parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_64, Uniq_10, (MR_String) "ground", S_12, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_U_32_32 = STATE_VARIABLE_U_0_25;
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_Box STATE_VARIABLE_U_47_47;
        MR_Box STATE_VARIABLE_U_53_53;
        MR_Box STATE_VARIABLE_U_55_55;
        MR_Box STATE_VARIABLE_U_56_56;
        MR_Box conv2_RetMode_21;
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv2_RetMode_21);
        RetMode_21 = ((MR_Word) (conv2_RetMode_21));
        if ((ArgModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));

          func_3(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "((func) = ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_47_47);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_49_49;
          MR_Box STATE_VARIABLE_U_50_50;
          MR_Word Mode_74;
          MR_Word Modes_75;
          MR_Box STATE_VARIABLE_U_23_82;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_4(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "(func(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_49_49);
          Mode_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_20, (MR_Integer) 0))));
          Modes_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_20, (MR_Integer) 1))));
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, Mode_74, S_12, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_23_82);
          if ((Modes_75 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_50_50 = STATE_VARIABLE_U_23_82;
          else
          {
            MR_Box STATE_VARIABLE_U_25_84;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));

            func_5(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_23_82, &STATE_VARIABLE_U_25_84);
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, Modes_75, S_12, STATE_VARIABLE_U_25_84, &STATE_VARIABLE_U_50_50);
          }
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ") = ")), S_12, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_47_47);
        }
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, RetMode_21, S_12, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_53_53);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_7(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) " is ")), S_12, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_55_55);
        parse_tree__mercury_to_mercury__mercury_format_det_4_p_0(TypeClassInfo_for_output_64, Det_17, S_12, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_56_56);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_37_37);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_34_34;
        MR_Box STATE_VARIABLE_U_35_35;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_9(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "((pred) is ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
        parse_tree__mercury_to_mercury__mercury_format_det_4_p_0(TypeClassInfo_for_output_64, Det_17, S_12, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_35_35);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_10(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_39_39;
        MR_Box STATE_VARIABLE_U_40_40;
        MR_Box STATE_VARIABLE_U_42_42;
        MR_Box STATE_VARIABLE_U_43_43;
        MR_Word Mode_94;
        MR_Word Modes_95;
        MR_Box STATE_VARIABLE_U_23_102;
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_11(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "(pred(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_39_39);
        Mode_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_15, (MR_Integer) 0))));
        Modes_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_15, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, Mode_94, S_12, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_23_102);
        if ((Modes_95 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_40_40 = STATE_VARIABLE_U_23_102;
        else
        {
          MR_Box STATE_VARIABLE_U_25_104;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));

          func_12(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_23_102, &STATE_VARIABLE_U_25_104);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_64, Lang_8, InstVarSet_9, Modes_95, S_12, STATE_VARIABLE_U_25_104, &STATE_VARIABLE_U_40_40);
        }
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_13(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ") is ")), S_12, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_42_42);
        parse_tree__mercury_to_mercury__mercury_format_det_4_p_0(TypeClassInfo_for_output_64, Det_17, S_12, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_43_43);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
        func_14(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_37_37);
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_37_37;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgRegs_16, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_60_60;
    MR_Box STATE_VARIABLE_U_61_61;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_15(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) " /* arg regs: [")), S_12, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_60_60);
    parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(TypeClassInfo_for_output_64, ArgRegs_24, S_12, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_61_61);
    func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_64, (MR_Integer) 0)), (MR_Integer) 5))));
    func_16(((MR_Box) (TypeClassInfo_for_output_64)), ((MR_Box) ((MR_String) "] */")), S_12, STATE_VARIABLE_U_61_61, STATE_VARIABLE_U_26);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0(
  MR_Word TypeClassInfo_for_output_35,
  MR_Word HeadVar__1_1,
  MR_Box S_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "clobbered_any")), S_2, STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 4:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "mostly_clobbered_any")), S_2, STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "mostly_unique_any")), S_2, STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));

        func_3(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "any")), S_2, STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_35, (MR_Integer) 0)), (MR_Integer) 5))));

        func_4(((MR_Box) (TypeClassInfo_for_output_35)), ((MR_Box) ((MR_String) "unique_any")), S_2, STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_0_3;
    else
    {
      MR_Word Reg_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Regs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_18_18;

      switch (Reg_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));

            func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "reg_f")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_18_18);
          }
          break;
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));

            func_1(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "reg_r")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_18_18);
          }
          break;
      }
      if ((Regs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_18_18;
      else
      {
        MR_Box STATE_VARIABLE_U_22_22;
        MR_Word Reg_29;
        MR_Word Regs_30;
        MR_Box STATE_VARIABLE_U_18_38;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_22_22);
        Reg_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Regs_10, (MR_Integer) 0))));
        Regs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Regs_10, (MR_Integer) 1))));
        switch (Reg_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));

              func_3(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "reg_f")), HeadVar__2_2, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_18_38);
            }
            break;
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));

              func_4(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "reg_r")), HeadVar__2_2, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_18_38);
            }
            break;
        }
        if ((Regs_30 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_18_38;
        else
        {
          MR_Box STATE_VARIABLE_U_22_42;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Word next_value_of_HeadVar__1_1;
          MR_Box next_value_of_STATE_VARIABLE_U_0_3;

          func_5(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_18_38, &STATE_VARIABLE_U_22_42);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Regs_30;
          next_value_of_STATE_VARIABLE_U_0_3 = STATE_VARIABLE_U_22_42;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_U_0_3 = next_value_of_STATE_VARIABLE_U_0_3;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word Real_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) ", fake")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) ", real")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(
  MR_Word TypeClassInfo_for_output_40,
  MR_Word HeadVar__1_1,
  MR_String SharedString_2,
  MR_Box S_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) ((MR_String) "clobbered")), S_3, STATE_VARIABLE_U_0_4, STATE_VARIABLE_U_5);
      }
      break;
    case (MR_Integer) 4:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) ((MR_String) "mostly_clobbered")), S_3, STATE_VARIABLE_U_0_4, STATE_VARIABLE_U_5);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) ((MR_String) "mostly_unique")), S_3, STATE_VARIABLE_U_0_4, STATE_VARIABLE_U_5);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 5))));

        func_3(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) (SharedString_2)), S_3, STATE_VARIABLE_U_0_4, STATE_VARIABLE_U_5);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 5))));

        func_4(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) ((MR_String) "unique")), S_3, STATE_VARIABLE_U_0_4, STATE_VARIABLE_U_5);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word IsLive_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  switch (IsLive_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));

        func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) "dead, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) "live, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
  }
}

void mercury__parse_tree__parse_tree_out_inst__init(void)
{
}

void mercury__parse_tree__parse_tree_out_inst__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_inst__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_inst.
