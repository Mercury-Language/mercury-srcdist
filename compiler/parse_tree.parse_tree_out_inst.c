/*
** Automatically generated from `parse_tree_out_inst.m'
** by the Mercury compiler,
** version 2018-01-03
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_5_p_0(
  MR_Word TypeClassInfo_for_output_36,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_2,
  MR_Box * STATE_VARIABLE_U_3);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word Real_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7);


static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[3][2];




static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Modes_7)
{
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], Lang_5, InstVarSet_6, Modes_7, ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) conv0_String_8);
    return String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0(
  MR_Word Lang_6,
  MR_Word InstVarSet_7,
  MR_Word Modes_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], Lang_6, InstVarSet_7, Modes_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Mode_7)
{
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], Lang_5, InstVarSet_6, Mode_7, ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) conv0_String_8);
    return String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_5_p_0(
  MR_Word Lang_6,
  MR_Word InstVarSet_7,
  MR_Word Mode_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], Lang_6, InstVarSet_7, Mode_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word Real_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  switch (Real_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

        func_0(((MR_Box) TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "fake, ")), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "real, ")), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
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
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], Lang_5, InstVarSet_6, Inst_7, ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) conv0_String_8);
    return String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0(
  MR_Word Lang_6,
  MR_Word InstVarSet_7,
  MR_Word Inst_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], Lang_6, InstVarSet_7, Inst_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_inst_list_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Insts_7)
{
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[1], Lang_5, InstVarSet_6, Insts_7, ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) conv0_String_8);
    return String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_list_5_p_0(
  MR_Word Lang_6,
  MR_Word InstVarSet_7,
  MR_Word Insts_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[0], Lang_6, InstVarSet_7, Insts_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_output_54,
  MR_Word tscc_proc_1_input_2_Lang_6,
  MR_Word tscc_proc_1_input_3_InstVarSet_7,
  MR_Word tscc_proc_1_input_4_Inst_8,
  MR_Box tscc_proc_1_input_5_STATE_VARIABLE_U_0_22,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_23)
{
  {
    MR_Word tscc_proc_2_input_1_TypeClassInfo_for_output_30;
    MR_Word tscc_proc_2_input_2_Lang_7;
    MR_Word tscc_proc_2_input_3_InstVarSet_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13;
    MR_Word tscc_proc_2_input_5_Inst_10;
    MR_Box tscc_proc_2_input_6_STATE_VARIABLE_U_0_14;
    MR_Box tscc_output_1_STATE_VARIABLE_U_23;

    // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_inst.mercury_format_inst/5-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_inst/5-0
    // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_constrained_inst_vars/6-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_output_54 = tscc_proc_1_input_1_TypeClassInfo_for_output_54;
      MR_Word Lang_6 = tscc_proc_1_input_2_Lang_6;
      MR_Word InstVarSet_7 = tscc_proc_1_input_3_InstVarSet_7;
      MR_Word Inst_8 = tscc_proc_1_input_4_Inst_8;
      MR_Box STATE_VARIABLE_U_0_22 = tscc_proc_1_input_5_STATE_VARIABLE_U_0_22;
      MR_Box STATE_VARIABLE_U_23;

      switch (MR_tag((MR_Word) Inst_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

                func_2(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "free")), STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 1:
              {
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

                func_4(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "not_reached")), STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

            func_3(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "free(with some type)")), STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 0)));
            MR_Word HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 1)));

            if ((HOInstInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(TypeClassInfo_for_output_54, Uniq_10, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
            else
            {
              MR_Word PredInstInfo_12 = (MR_Word) MR_body(((MR_Word) HOInstInfo_11), (MR_Integer) 1);

              parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, Uniq_10, PredInstInfo_12, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 3)));
                MR_Box STATE_VARIABLE_U_36_36;
                MR_Box STATE_VARIABLE_U_38_38;
                MR_Box STATE_VARIABLE_U_39_39;
                MR_Word Uniq_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_54, Uniq_48, (MR_String) "bound", STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_36_36);
                func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
                func_0(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
                parse_tree__parse_tree_out_inst__mercury_format_bound_insts_5_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, BoundInsts_15, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
                func_1(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Uniq_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word HOInstInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));

                if ((HOInstInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_54, Uniq_51, (MR_String) "ground", STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
                }
                else
                {
                  MR_Word PredInstInfo_49 = (MR_Word) MR_body(((MR_Word) HOInstInfo_52), (MR_Integer) 1);

                  parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, Uniq_51, PredInstInfo_49, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));

                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, TypeClassInfo_for_output_54, InstVarSet_7, (MR_Integer) 0, Var_16, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word CInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30 = TypeClassInfo_for_output_54;
                MR_Word next_value_of_tscc_proc_2_input_2_Lang_7 = Lang_6;
                MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_8 = InstVarSet_7;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13 = Vars_17;
                MR_Word next_value_of_tscc_proc_2_input_5_Inst_10 = CInst_18;
                MR_Box next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_U_0_14 = STATE_VARIABLE_U_0_22;

                // direct tailcall eliminated
                tscc_proc_2_input_1_TypeClassInfo_for_output_30 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30;
                tscc_proc_2_input_2_Lang_7 = next_value_of_tscc_proc_2_input_2_Lang_7;
                tscc_proc_2_input_3_InstVarSet_8 = next_value_of_tscc_proc_2_input_3_InstVarSet_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13;
                tscc_proc_2_input_5_Inst_10 = next_value_of_tscc_proc_2_input_5_Inst_10;
                tscc_proc_2_input_6_STATE_VARIABLE_U_0_14 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_U_0_14;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));

                parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, InstName_21, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));
                MR_Word Var_27;

                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Name_19));
                  MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Args_20));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, Var_27, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_U_23 = STATE_VARIABLE_U_23;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_output_30 = tscc_proc_2_input_1_TypeClassInfo_for_output_30;
      MR_Word Lang_7 = tscc_proc_2_input_2_Lang_7;
      MR_Word InstVarSet_8 = tscc_proc_2_input_3_InstVarSet_8;
      MR_Word STATE_VARIABLE_Vars_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13;
      MR_Word Inst_10 = tscc_proc_2_input_5_Inst_10;
      MR_Box STATE_VARIABLE_U_0_14 = tscc_proc_2_input_6_STATE_VARIABLE_U_0_14;
      MR_Box STATE_VARIABLE_U_15;
      MR_bool succeeded;
      MR_Word Var_12;
      MR_Word STATE_VARIABLE_Vars_16_16;
      MR_Box conv5_Var_12;

      succeeded = mercury__set__remove_least_3_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[2], &conv5_Var_12, STATE_VARIABLE_Vars_0_13, &STATE_VARIABLE_Vars_16_16);
      if (succeeded)
      {
        Var_12 = ((MR_Word) conv5_Var_12);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_U_18_18;
        MR_Box STATE_VARIABLE_U_20_20;
        MR_Box STATE_VARIABLE_U_22_22;
        MR_Box STATE_VARIABLE_U_23_23;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_18_18);
        parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, TypeClassInfo_for_output_30, InstVarSet_8, (MR_Integer) 0, Var_12, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        func_7(((MR_Box) TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) " =< ")), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
        parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(TypeClassInfo_for_output_30, Lang_7, InstVarSet_8, STATE_VARIABLE_Vars_16_16, Inst_10, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        func_8(((MR_Box) TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_15);
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_54 = TypeClassInfo_for_output_30;
        MR_Word next_value_of_tscc_proc_1_input_2_Lang_6 = Lang_7;
        MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_7 = InstVarSet_8;
        MR_Word next_value_of_tscc_proc_1_input_4_Inst_8 = Inst_10;
        MR_Box next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_U_0_22 = STATE_VARIABLE_U_0_14;

        // direct tailcall eliminated
        tscc_proc_1_input_1_TypeClassInfo_for_output_54 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_54;
        tscc_proc_1_input_2_Lang_6 = next_value_of_tscc_proc_1_input_2_Lang_6;
        tscc_proc_1_input_3_InstVarSet_7 = next_value_of_tscc_proc_1_input_3_InstVarSet_7;
        tscc_proc_1_input_4_Inst_8 = next_value_of_tscc_proc_1_input_4_Inst_8;
        tscc_proc_1_input_5_STATE_VARIABLE_U_0_22 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_U_0_22;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_U_23 = STATE_VARIABLE_U_15;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_U_23 = tscc_output_1_STATE_VARIABLE_U_23;
    return;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_output_30,
  MR_Word tscc_proc_2_input_2_Lang_7,
  MR_Word tscc_proc_2_input_3_InstVarSet_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13,
  MR_Word tscc_proc_2_input_5_Inst_10,
  MR_Box tscc_proc_2_input_6_STATE_VARIABLE_U_0_14,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_23)
{
  {
    MR_Word tscc_proc_1_input_1_TypeClassInfo_for_output_54;
    MR_Word tscc_proc_1_input_2_Lang_6;
    MR_Word tscc_proc_1_input_3_InstVarSet_7;
    MR_Word tscc_proc_1_input_4_Inst_8;
    MR_Box tscc_proc_1_input_5_STATE_VARIABLE_U_0_22;
    MR_Box tscc_output_1_STATE_VARIABLE_U_23;

    // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_inst.mercury_format_constrained_inst_vars/6-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_inst/5-0
    // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.mercury_format_constrained_inst_vars/6-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_output_54 = tscc_proc_1_input_1_TypeClassInfo_for_output_54;
      MR_Word Lang_6 = tscc_proc_1_input_2_Lang_6;
      MR_Word InstVarSet_7 = tscc_proc_1_input_3_InstVarSet_7;
      MR_Word Inst_8 = tscc_proc_1_input_4_Inst_8;
      MR_Box STATE_VARIABLE_U_0_22 = tscc_proc_1_input_5_STATE_VARIABLE_U_0_22;
      MR_Box STATE_VARIABLE_U_23;

      switch (MR_tag((MR_Word) Inst_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

                func_2(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "free")), STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 1:
              {
                void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

                func_4(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "not_reached")), STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

            func_3(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "free(with some type)")), STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 0)));
            MR_Word HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 1)));

            if ((HOInstInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(TypeClassInfo_for_output_54, Uniq_10, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
            else
            {
              MR_Word PredInstInfo_12 = (MR_Word) MR_body(((MR_Word) HOInstInfo_11), (MR_Integer) 1);

              parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, Uniq_10, PredInstInfo_12, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 3)));
                MR_Box STATE_VARIABLE_U_36_36;
                MR_Box STATE_VARIABLE_U_38_38;
                MR_Box STATE_VARIABLE_U_39_39;
                MR_Word Uniq_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_54, Uniq_48, (MR_String) "bound", STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_36_36);
                func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
                func_0(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
                parse_tree__parse_tree_out_inst__mercury_format_bound_insts_5_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, BoundInsts_15, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
                func_1(((MR_Box) TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Uniq_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word HOInstInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));

                if ((HOInstInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_54, Uniq_51, (MR_String) "ground", STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
                }
                else
                {
                  MR_Word PredInstInfo_49 = (MR_Word) MR_body(((MR_Word) HOInstInfo_52), (MR_Integer) 1);

                  parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, Uniq_51, PredInstInfo_49, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));

                parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, TypeClassInfo_for_output_54, InstVarSet_7, (MR_Integer) 0, Var_16, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word CInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));
                MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30 = TypeClassInfo_for_output_54;
                MR_Word next_value_of_tscc_proc_2_input_2_Lang_7 = Lang_6;
                MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_8 = InstVarSet_7;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13 = Vars_17;
                MR_Word next_value_of_tscc_proc_2_input_5_Inst_10 = CInst_18;
                MR_Box next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_U_0_14 = STATE_VARIABLE_U_0_22;

                // direct tailcall eliminated
                tscc_proc_2_input_1_TypeClassInfo_for_output_30 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_output_30;
                tscc_proc_2_input_2_Lang_7 = next_value_of_tscc_proc_2_input_2_Lang_7;
                tscc_proc_2_input_3_InstVarSet_8 = next_value_of_tscc_proc_2_input_3_InstVarSet_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13;
                tscc_proc_2_input_5_Inst_10 = next_value_of_tscc_proc_2_input_5_Inst_10;
                tscc_proc_2_input_6_STATE_VARIABLE_U_0_14 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_U_0_14;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));

                parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, InstName_21, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1)));
                MR_Word Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2)));
                MR_Word Var_27;

                {
                  Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Name_19));
                  MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Args_20));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_54, Lang_6, InstVarSet_7, Var_27, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_U_23 = STATE_VARIABLE_U_23;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_output_30 = tscc_proc_2_input_1_TypeClassInfo_for_output_30;
      MR_Word Lang_7 = tscc_proc_2_input_2_Lang_7;
      MR_Word InstVarSet_8 = tscc_proc_2_input_3_InstVarSet_8;
      MR_Word STATE_VARIABLE_Vars_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_13;
      MR_Word Inst_10 = tscc_proc_2_input_5_Inst_10;
      MR_Box STATE_VARIABLE_U_0_14 = tscc_proc_2_input_6_STATE_VARIABLE_U_0_14;
      MR_Box STATE_VARIABLE_U_15;
      MR_bool succeeded;
      MR_Word Var_12;
      MR_Word STATE_VARIABLE_Vars_16_16;
      MR_Box conv5_Var_12;

      succeeded = mercury__set__remove_least_3_p_0((MR_Word) &parse_tree__parse_tree_out_inst_scalar_common_1[2], &conv5_Var_12, STATE_VARIABLE_Vars_0_13, &STATE_VARIABLE_Vars_16_16);
      if (succeeded)
      {
        Var_12 = ((MR_Word) conv5_Var_12);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_U_18_18;
        MR_Box STATE_VARIABLE_U_20_20;
        MR_Box STATE_VARIABLE_U_22_22;
        MR_Box STATE_VARIABLE_U_23_23;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_18_18);
        parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, TypeClassInfo_for_output_30, InstVarSet_8, (MR_Integer) 0, Var_12, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        func_7(((MR_Box) TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) " =< ")), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
        parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(TypeClassInfo_for_output_30, Lang_7, InstVarSet_8, STATE_VARIABLE_Vars_16_16, Inst_10, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_30, (MR_Integer) 0)), (MR_Integer) 5)));
        func_8(((MR_Box) TypeClassInfo_for_output_30), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_15);
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_54 = TypeClassInfo_for_output_30;
        MR_Word next_value_of_tscc_proc_1_input_2_Lang_6 = Lang_7;
        MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_7 = InstVarSet_8;
        MR_Word next_value_of_tscc_proc_1_input_4_Inst_8 = Inst_10;
        MR_Box next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_U_0_22 = STATE_VARIABLE_U_0_14;

        // direct tailcall eliminated
        tscc_proc_1_input_1_TypeClassInfo_for_output_54 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_output_54;
        tscc_proc_1_input_2_Lang_6 = next_value_of_tscc_proc_1_input_2_Lang_6;
        tscc_proc_1_input_3_InstVarSet_7 = next_value_of_tscc_proc_1_input_3_InstVarSet_7;
        tscc_proc_1_input_4_Inst_8 = next_value_of_tscc_proc_1_input_4_Inst_8;
        tscc_proc_1_input_5_STATE_VARIABLE_U_0_22 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_U_0_22;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_U_23 = STATE_VARIABLE_U_15;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_U_23 = tscc_output_1_STATE_VARIABLE_U_23;
    return;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(
  MR_Word TypeClassInfo_for_output_41,
  MR_Word Lang_6,
  MR_Word InstVarSet_7,
  MR_Word Mode_8,
  MR_Box STATE_VARIABLE_U_0_21,
  MR_Box * STATE_VARIABLE_U_22)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Mode_8)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word InstA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Mode_8, (MR_Integer) 0)));
      MR_Word InstB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Mode_8, (MR_Integer) 1)));
      MR_Word Var_30;
      MR_Word _Uniq_12;
      MR_Word Var_31;

      succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        _Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 1)));
        Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_31 = (MR_Word) MR_body(((MR_Word) Var_30), (MR_Integer) 1);
          succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstB_11, InstA_10);
        }
      }
      if (succeeded)
        parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_41, Lang_6, InstVarSet_7, InstA_10, STATE_VARIABLE_U_0_21, STATE_VARIABLE_U_22);
      else
      {
        MR_Box STATE_VARIABLE_U_34_34;
        MR_Box STATE_VARIABLE_U_35_35;
        MR_Box STATE_VARIABLE_U_37_37;
        MR_Box STATE_VARIABLE_U_38_38;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_34_34);
        parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_41, Lang_6, InstVarSet_7, InstA_10, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_35_35);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
        func_1(((MR_Box) TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) " >> ")), STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
        parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_41, Lang_6, InstVarSet_7, InstB_11, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
        func_2(((MR_Box) TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_38_38, STATE_VARIABLE_U_22);
      }
    }
    else
    {
      MR_Word Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Mode_8, (MR_Integer) 0)));
      MR_Word Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Mode_8, (MR_Integer) 1)));

      if ((Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_41, Name_17, STATE_VARIABLE_U_0_21, STATE_VARIABLE_U_22);
      else
      {
        MR_Box STATE_VARIABLE_U_23_23;
        MR_Box STATE_VARIABLE_U_25_25;
        MR_Box STATE_VARIABLE_U_26_26;
        MR_Word Inst_50;
        MR_Word Insts_51;
        MR_Box STATE_VARIABLE_U_20_57;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_41, Name_17, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_23_23);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
        func_3(((MR_Box) TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
        Inst_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));
        Insts_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
        parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_41, Lang_6, InstVarSet_7, Inst_50, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_20_57);
        if ((Insts_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          STATE_VARIABLE_U_26_26 = STATE_VARIABLE_U_20_57;
        else
        {
          MR_Box STATE_VARIABLE_U_22_59;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));

          func_4(((MR_Box) TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_57, &STATE_VARIABLE_U_22_59);
          parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(TypeClassInfo_for_output_41, Lang_6, InstVarSet_7, Insts_51, STATE_VARIABLE_U_22_59, &STATE_VARIABLE_U_26_26);
        }
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_41, (MR_Integer) 0)), (MR_Integer) 5)));
        func_5(((MR_Box) TypeClassInfo_for_output_41), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_26_26, STATE_VARIABLE_U_22);
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_5_p_0(
  MR_Word TypeClassInfo_for_output_36,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_0_4;
    else
    {
      MR_Word BoundInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst_13, (MR_Integer) 0)));
      MR_Word Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst_13, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_U_32_32;

      if ((Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(TypeClassInfo_for_output_36, (MR_Integer) 0, ConsId_16, STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_32_32);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_25_25;
        MR_Box STATE_VARIABLE_U_27_27;
        MR_Box STATE_VARIABLE_U_28_28;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(TypeClassInfo_for_output_36, (MR_Integer) 1, ConsId_16, STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_25_25);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
        func_0(((MR_Box) TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_27_27);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(TypeClassInfo_for_output_36, Lang_1, InstVarSet_2, Args_17, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_28_28);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
        func_1(((MR_Box) TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_32_32);
      }
      if ((BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_32_32;
      else
      {
        MR_Box STATE_VARIABLE_U_34_34;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Word next_value_of_HeadVar__3_3;
        MR_Box next_value_of_STATE_VARIABLE_U_0_4;

        func_2(((MR_Box) TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) " ; ")), STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
        // direct tailcall eliminated
        next_value_of_HeadVar__3_3 = BoundInsts_14;
        next_value_of_STATE_VARIABLE_U_0_4 = STATE_VARIABLE_U_34_34;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_U_0_4 = next_value_of_STATE_VARIABLE_U_0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_0_4;
    else
    {
      MR_Word Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Insts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_U_20_20;

      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_24, Lang_1, InstVarSet_2, Inst_13, STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_20_20);
      if ((Insts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_20_20;
      else
      {
        MR_Box STATE_VARIABLE_U_22_22;
        MR_Word Inst_32;
        MR_Word Insts_33;
        MR_Box STATE_VARIABLE_U_20_39;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));

        func_0(((MR_Box) TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
        Inst_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_14, (MR_Integer) 0)));
        Insts_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_14, (MR_Integer) 1)));
        parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_24, Lang_1, InstVarSet_2, Inst_32, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_20_39);
        if ((Insts_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_20_39;
        else
        {
          MR_Box STATE_VARIABLE_U_22_41;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_4;

          func_1(((MR_Box) TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_39, &STATE_VARIABLE_U_22_41);
          // direct tailcall eliminated
          next_value_of_HeadVar__3_3 = Insts_33;
          next_value_of_STATE_VARIABLE_U_0_4 = STATE_VARIABLE_U_22_41;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_U_0_4 = next_value_of_STATE_VARIABLE_U_0_4;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_0_4;
    else
    {
      MR_Word Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_U_20_20;

      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_24, Lang_1, InstVarSet_2, Mode_13, STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_20_20);
      if ((Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_20_20;
      else
      {
        MR_Box STATE_VARIABLE_U_22_22;
        MR_Word Mode_32;
        MR_Word Modes_33;
        MR_Box STATE_VARIABLE_U_20_39;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));

        func_0(((MR_Box) TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
        Mode_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 0)));
        Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 1)));
        parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_24, Lang_1, InstVarSet_2, Mode_32, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_20_39);
        if ((Modes_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_20_39;
        else
        {
          MR_Box STATE_VARIABLE_U_22_41;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_4;

          func_1(((MR_Box) TypeClassInfo_for_output_24), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_39, &STATE_VARIABLE_U_22_41);
          // direct tailcall eliminated
          next_value_of_HeadVar__3_3 = Modes_33;
          next_value_of_STATE_VARIABLE_U_0_4 = STATE_VARIABLE_U_22_41;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_U_0_4 = next_value_of_STATE_VARIABLE_U_0_4;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(
  MR_Word TypeClassInfo_for_output_138,
  MR_Word Lang_6,
  MR_Word InstVarSet_7,
  MR_Word InstName_8,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) InstName_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstName_8, (MR_Integer) 0)));
          MR_Word Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstName_8, (MR_Integer) 1)));

          if ((Args_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_138, Name_10, STATE_VARIABLE_U_0_23, STATE_VARIABLE_U_24);
          else
          {
            MR_Box STATE_VARIABLE_U_116_116;
            MR_Box STATE_VARIABLE_U_118_118;
            MR_Box STATE_VARIABLE_U_119_119;

            parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_138, Name_10, STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_116_116);
            parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "(", STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_118_118);
            parse_tree__parse_tree_out_inst__mercury_format_inst_list_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, Args_11, STATE_VARIABLE_U_118_118, &STATE_VARIABLE_U_119_119);
            parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_119_119, STATE_VARIABLE_U_24);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_8, (MR_Integer) 0)));
          MR_Word Real_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_8, (MR_Integer) 1)));
          MR_Word InstA_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_8, (MR_Integer) 2)));
          MR_Word InstB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstName_8, (MR_Integer) 3)));

          switch (Lang_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_104_104;
                MR_Box STATE_VARIABLE_U_105_105;
                MR_Box STATE_VARIABLE_U_106_106;
                MR_Box STATE_VARIABLE_U_108_108;
                MR_Word Insts_185;
                MR_Box STATE_VARIABLE_U_20_191;
                MR_Box STATE_VARIABLE_U_22_193;
                MR_Word Inst_202;
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Word Insts_203;

                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044unify(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_104_104);
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(TypeClassInfo_for_output_138, IsLive_14, STATE_VARIABLE_U_104_104, &STATE_VARIABLE_U_105_105);
                parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(TypeClassInfo_for_output_138, Real_15, STATE_VARIABLE_U_105_105, &STATE_VARIABLE_U_106_106);
                {
                  Insts_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Insts_185, 0) = ((MR_Box) (InstB_17));
                  MR_hl_field(MR_mktag(1), Insts_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, InstA_16, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_20_191);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_138, (MR_Integer) 0)), (MR_Integer) 5)));
                func_1(((MR_Box) TypeClassInfo_for_output_138), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_191, &STATE_VARIABLE_U_22_193);
                Inst_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_185, (MR_Integer) 0)));
                Insts_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_185, (MR_Integer) 1)));
                parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, Inst_202, STATE_VARIABLE_U_22_193, &STATE_VARIABLE_U_108_108);
                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_108_108, STATE_VARIABLE_U_24);
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "unify_inst");
                  return;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), InstName_8, (MR_Integer) 0)));
          MR_Word InstB_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), InstName_8, (MR_Integer) 1)));

          switch (Lang_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_93_93;
                MR_Box STATE_VARIABLE_U_95_95;
                MR_Word Insts_149;
                MR_Box STATE_VARIABLE_U_20_155;
                MR_Box STATE_VARIABLE_U_22_157;
                MR_Word Inst_166;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Word Insts_167;

                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044merge_inst(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_93_93);
                {
                  Insts_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Insts_149, 0) = ((MR_Box) (InstB_124));
                  MR_hl_field(MR_mktag(1), Insts_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, InstA_123, STATE_VARIABLE_U_93_93, &STATE_VARIABLE_U_20_155);
                func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_138, (MR_Integer) 0)), (MR_Integer) 5)));
                func_0(((MR_Box) TypeClassInfo_for_output_138), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_155, &STATE_VARIABLE_U_22_157);
                Inst_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_149, (MR_Integer) 0)));
                Insts_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_149, (MR_Integer) 1)));
                parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, Inst_166, STATE_VARIABLE_U_22_157, &STATE_VARIABLE_U_95_95);
                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_95_95, STATE_VARIABLE_U_24);
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "merge_inst");
                  return;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 1)));
              MR_Word Uniq_19 = ((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word IsLive_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Real_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

              switch (Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_79_79;
                    MR_Box STATE_VARIABLE_U_80_80;
                    MR_Box STATE_VARIABLE_U_82_82;
                    MR_Box STATE_VARIABLE_U_83_83;
                    MR_Box STATE_VARIABLE_U_85_85;
                    MR_Box STATE_VARIABLE_U_86_86;

                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044ground(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_79_79);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, SubInstName_18, STATE_VARIABLE_U_79_79, &STATE_VARIABLE_U_80_80);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ", ", STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_82_82);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(TypeClassInfo_for_output_138, IsLive_125, STATE_VARIABLE_U_82_82, &STATE_VARIABLE_U_83_83);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_138, Uniq_19, (MR_String) "shared", STATE_VARIABLE_U_83_83, &STATE_VARIABLE_U_85_85);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(TypeClassInfo_for_output_138, Real_126, STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_86_86);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_86_86, STATE_VARIABLE_U_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "ground_inst");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsLive_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Real_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word SubInstName_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 1)));
              MR_Word Uniq_130 = ((((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)))) & (MR_Integer) 7);

              switch (Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_65_65;
                    MR_Box STATE_VARIABLE_U_66_66;
                    MR_Box STATE_VARIABLE_U_68_68;
                    MR_Box STATE_VARIABLE_U_69_69;
                    MR_Box STATE_VARIABLE_U_71_71;
                    MR_Box STATE_VARIABLE_U_72_72;

                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044any(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_65_65);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, SubInstName_129, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_66_66);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ", ", STATE_VARIABLE_U_66_66, &STATE_VARIABLE_U_68_68);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(TypeClassInfo_for_output_138, IsLive_127, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_69_69);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_138, Uniq_130, (MR_String) "shared", STATE_VARIABLE_U_69_69, &STATE_VARIABLE_U_71_71);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(TypeClassInfo_for_output_138, Real_128, STATE_VARIABLE_U_71_71, &STATE_VARIABLE_U_72_72);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_72_72, STATE_VARIABLE_U_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "any_inst");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 1)));

              switch (Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_57_57;
                    MR_Box STATE_VARIABLE_U_58_58;

                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044shared_inst(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_57_57);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, SubInstName_131, STATE_VARIABLE_U_57_57, &STATE_VARIABLE_U_58_58);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_58_58, STATE_VARIABLE_U_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "shared_inst");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 1)));

              switch (Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_49_49;
                    MR_Box STATE_VARIABLE_U_50_50;

                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044mostly_uniq_inst(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_49_49);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, SubInstName_132, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_50_50);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_50_50, STATE_VARIABLE_U_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "mostly_uniq_inst");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Uniqueness_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 1)));
              MR_Word Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)));

              switch (Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeVarSet_22;
                    MR_Box STATE_VARIABLE_U_36_36;
                    MR_Box STATE_VARIABLE_U_38_38;
                    MR_Box STATE_VARIABLE_U_40_40;
                    MR_Box STATE_VARIABLE_U_42_42;

                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044typed_ground(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_36_36);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_138, Uniqueness_20, (MR_String) "shared", STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ", ", STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
                    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &TypeVarSet_22);
                    parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(TypeClassInfo_for_output_138, TypeVarSet_22, (MR_Integer) 0, Type_21, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_42_42);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_42_42, STATE_VARIABLE_U_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_tree_out_inst", (MR_String) "predicate \140parse_tree.parse_tree_out_inst.mercury_format_inst_name\'/5", (MR_String) "typed_ground");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 2)));
              MR_Word Type_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), InstName_8, (MR_Integer) 1)));

              switch (Lang_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_26_26;
                    MR_Box STATE_VARIABLE_U_28_28;
                    MR_Box STATE_VARIABLE_U_30_30;
                    MR_Box STATE_VARIABLE_U_31_31;
                    MR_Word TypeVarSet_133;

                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) "\044typed_inst(", STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_26_26);
                    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &TypeVarSet_133);
                    parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(TypeClassInfo_for_output_138, TypeVarSet_133, (MR_Integer) 0, Type_136, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ", ", STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_5_p_0(TypeClassInfo_for_output_138, Lang_6, InstVarSet_7, SubInstName_135, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_138, (MR_String) ")", STATE_VARIABLE_U_31_31, STATE_VARIABLE_U_24);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_InstName_8 = SubInstName_135;

                    // direct tailcall eliminated
                    InstName_8 = next_value_of_InstName_8;
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

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(
  MR_Word TypeClassInfo_for_output_62,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word Uniq_9,
  MR_Word PredInstInfo_10,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24)
{
  {
    MR_Word PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 0)));
    MR_Word Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 1)));
    MR_Word MaybeArgRegs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 2)));
    MR_Word Det_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 3)));
    MR_Box STATE_VARIABLE_U_30_30;
    MR_Box STATE_VARIABLE_U_56_56;

    switch (Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_26_26;
          MR_Box STATE_VARIABLE_U_28_28;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_0(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "/* ")), STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_26_26);
          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_62, Uniq_9, (MR_String) "any", STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_1(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " */")), STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_U_30_30 = STATE_VARIABLE_U_0_23;
        break;
    }
    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ArgModes_18;
          MR_Word RetMode_19;
          MR_Box STATE_VARIABLE_U_37_37;
          MR_Box STATE_VARIABLE_U_38_38;
          MR_Box STATE_VARIABLE_U_40_40;
          MR_Box STATE_VARIABLE_U_41_41;
          MR_Box conv2_RetMode_19;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_13, &ArgModes_18, &conv2_RetMode_19);
          RetMode_19 = ((MR_Word) conv2_RetMode_19);
          if ((Modes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

            func_3(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_func = ")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_37_37);
          }
          else
          {
            MR_Box STATE_VARIABLE_U_32_32;
            MR_Box STATE_VARIABLE_U_33_33;
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

            func_4(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_func(")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, ArgModes_18, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            func_5(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") = ")), STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_37_37);
          }
          parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, RetMode_19, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_6(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
          parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(TypeClassInfo_for_output_62, Det_15, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_41_41);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_7(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_56_56);
        }
        break;
      case (MR_Integer) 0:
        if ((Modes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Box STATE_VARIABLE_U_53_53;
          MR_Box STATE_VARIABLE_U_54_54;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_8(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_pred is ")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_53_53);
          parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(TypeClassInfo_for_output_62, Det_15, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_54_54);
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_9(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_56_56);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_45_45;
          MR_Box STATE_VARIABLE_U_46_46;
          MR_Box STATE_VARIABLE_U_48_48;
          MR_Box STATE_VARIABLE_U_49_49;
          MR_Word Mode_71;
          MR_Word Modes_72;
          MR_Box STATE_VARIABLE_U_20_78;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_10(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(any_pred(")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_45_45);
          Mode_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0)));
          Modes_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1)));
          parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, Mode_71, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_20_78);
          if ((Modes_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            STATE_VARIABLE_U_46_46 = STATE_VARIABLE_U_20_78;
          else
          {
            MR_Box STATE_VARIABLE_U_22_80;
            void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

            func_11(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_78, &STATE_VARIABLE_U_22_80);
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, Modes_72, STATE_VARIABLE_U_22_80, &STATE_VARIABLE_U_46_46);
          }
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_12(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") is ")), STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
          parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(TypeClassInfo_for_output_62, Det_15, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_49_49);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_13(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_56_56);
        }
        break;
    }
    if ((MaybeArgRegs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_U_24 = STATE_VARIABLE_U_56_56;
    else
    {
      MR_Word ArgRegs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgRegs_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_U_58_58;
      MR_Box STATE_VARIABLE_U_59_59;
      void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
      void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_14(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " /* arg regs: [")), STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_58_58);
      parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(TypeClassInfo_for_output_62, ArgRegs_22, STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_59_59);
      func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
      func_15(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "] */")), STATE_VARIABLE_U_59_59, STATE_VARIABLE_U_24);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(
  MR_Word TypeClassInfo_for_output_62,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word Uniq_9,
  MR_Word PredInstInfo_10,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24)
{
  {
    MR_Word PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 0)));
    MR_Word Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 1)));
    MR_Word MaybeArgRegs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 2)));
    MR_Word Det_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredInstInfo_10, (MR_Integer) 3)));
    MR_Box STATE_VARIABLE_U_30_30;
    MR_Box STATE_VARIABLE_U_56_56;

    switch (Uniq_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_26_26;
          MR_Box STATE_VARIABLE_U_28_28;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_0(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "/* ")), STATE_VARIABLE_U_0_23, &STATE_VARIABLE_U_26_26);
          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_62, Uniq_9, (MR_String) "ground", STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_1(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " */")), STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_U_30_30 = STATE_VARIABLE_U_0_23;
        break;
    }
    switch (PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ArgModes_18;
          MR_Word RetMode_19;
          MR_Box STATE_VARIABLE_U_37_37;
          MR_Box STATE_VARIABLE_U_38_38;
          MR_Box STATE_VARIABLE_U_40_40;
          MR_Box STATE_VARIABLE_U_41_41;
          MR_Box conv2_RetMode_19;
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_13, &ArgModes_18, &conv2_RetMode_19);
          RetMode_19 = ((MR_Word) conv2_RetMode_19);
          if ((ArgModes_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

            func_3(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "((func) = ")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_37_37);
          }
          else
          {
            MR_Box STATE_VARIABLE_U_32_32;
            MR_Box STATE_VARIABLE_U_33_33;
            MR_Word Mode_71;
            MR_Word Modes_72;
            MR_Box STATE_VARIABLE_U_20_78;
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

            func_4(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(func(")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
            Mode_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 0)));
            Modes_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 1)));
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, Mode_71, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_20_78);
            if ((Modes_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_U_33_33 = STATE_VARIABLE_U_20_78;
            else
            {
              MR_Box STATE_VARIABLE_U_22_80;
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

              func_5(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_78, &STATE_VARIABLE_U_22_80);
              parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, Modes_72, STATE_VARIABLE_U_22_80, &STATE_VARIABLE_U_33_33);
            }
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
            func_6(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") = ")), STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_37_37);
          }
          parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, RetMode_19, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_7(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
          parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(TypeClassInfo_for_output_62, Det_15, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_41_41);
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_8(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_56_56);
        }
        break;
      case (MR_Integer) 0:
        if ((Modes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Box STATE_VARIABLE_U_53_53;
          MR_Box STATE_VARIABLE_U_54_54;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_9(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "((pred) is ")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_53_53);
          parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(TypeClassInfo_for_output_62, Det_15, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_54_54);
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_10(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_56_56);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_45_45;
          MR_Box STATE_VARIABLE_U_46_46;
          MR_Box STATE_VARIABLE_U_48_48;
          MR_Box STATE_VARIABLE_U_49_49;
          MR_Word Mode_89;
          MR_Word Modes_90;
          MR_Box STATE_VARIABLE_U_20_96;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_11(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "(pred(")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_45_45);
          Mode_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0)));
          Modes_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1)));
          parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, Mode_89, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_20_96);
          if ((Modes_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            STATE_VARIABLE_U_46_46 = STATE_VARIABLE_U_20_96;
          else
          {
            MR_Box STATE_VARIABLE_U_22_98;
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));

            func_12(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_20_96, &STATE_VARIABLE_U_22_98);
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_62, Lang_7, InstVarSet_8, Modes_90, STATE_VARIABLE_U_22_98, &STATE_VARIABLE_U_46_46);
          }
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_13(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ") is ")), STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
          parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(TypeClassInfo_for_output_62, Det_15, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_49_49);
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
          func_14(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_56_56);
        }
        break;
    }
    if ((MaybeArgRegs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_U_24 = STATE_VARIABLE_U_56_56;
    else
    {
      MR_Word ArgRegs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgRegs_14, (MR_Integer) 0)));
      MR_Box STATE_VARIABLE_U_58_58;
      MR_Box STATE_VARIABLE_U_59_59;
      void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
      void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_15(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) " /* arg regs: [")), STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_58_58);
      parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(TypeClassInfo_for_output_62, ArgRegs_22, STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_59_59);
      func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_62, (MR_Integer) 0)), (MR_Integer) 5)));
      func_16(((MR_Box) TypeClassInfo_for_output_62), ((MR_Box) ((MR_String) "] */")), STATE_VARIABLE_U_59_59, STATE_VARIABLE_U_24);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(
  MR_Word TypeClassInfo_for_output_29,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_2,
  MR_Box * STATE_VARIABLE_U_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

        func_0(((MR_Box) TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "clobbered_any")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 4:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "mostly_clobbered_any")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

        func_2(((MR_Box) TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "mostly_unique_any")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

        func_3(((MR_Box) TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "any")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));

        func_4(((MR_Box) TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "unique_any")), STATE_VARIABLE_U_0_2, STATE_VARIABLE_U_3);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_3_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_2,
  MR_Box * STATE_VARIABLE_U_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_U_3 = STATE_VARIABLE_U_0_2;
    else
    {
      MR_Word Reg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Regs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Box STATE_VARIABLE_U_17_17;

      switch (Reg_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

            func_0(((MR_Box) TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_f")), STATE_VARIABLE_U_0_2, &STATE_VARIABLE_U_17_17);
          }
          break;
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

            func_1(((MR_Box) TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_r")), STATE_VARIABLE_U_0_2, &STATE_VARIABLE_U_17_17);
          }
          break;
      }
      if ((Regs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_U_3 = STATE_VARIABLE_U_17_17;
      else
      {
        MR_Box STATE_VARIABLE_U_19_19;
        MR_Word Reg_25;
        MR_Word Regs_26;
        MR_Box STATE_VARIABLE_U_17_35;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

        func_2(((MR_Box) TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
        Reg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Regs_8, (MR_Integer) 0)));
        Regs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Regs_8, (MR_Integer) 1)));
        switch (Reg_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

              func_3(((MR_Box) TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_f")), STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_17_35);
            }
            break;
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));

              func_4(((MR_Box) TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "reg_r")), STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_17_35);
            }
            break;
        }
        if ((Regs_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *STATE_VARIABLE_U_3 = STATE_VARIABLE_U_17_35;
        else
        {
          MR_Box STATE_VARIABLE_U_19_37;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Word next_value_of_HeadVar__1_1;
          MR_Box next_value_of_STATE_VARIABLE_U_0_2;

          func_5(((MR_Box) TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_17_35, &STATE_VARIABLE_U_19_37);
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Regs_26;
          next_value_of_STATE_VARIABLE_U_0_2 = STATE_VARIABLE_U_19_37;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_U_0_2 = next_value_of_STATE_VARIABLE_U_0_2;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_comma_real_3_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word Real_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  switch (Real_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

        func_0(((MR_Box) TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) ", fake")), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) ", real")), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(
  MR_Word TypeClassInfo_for_output_34,
  MR_Word HeadVar__1_1,
  MR_String SharedString_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

        func_0(((MR_Box) TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "clobbered")), STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 4:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "mostly_clobbered")), STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

        func_2(((MR_Box) TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "mostly_unique")), STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

        func_3(((MR_Box) TypeClassInfo_for_output_34), ((MR_Box) (SharedString_2)), STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_34, (MR_Integer) 0)), (MR_Integer) 5)));

        func_4(((MR_Box) TypeClassInfo_for_output_34), ((MR_Box) ((MR_String) "unique")), STATE_VARIABLE_U_0_3, STATE_VARIABLE_U_4);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(
  MR_Word TypeClassInfo_for_output_12,
  MR_Word IsLive_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  switch (IsLive_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

        func_0(((MR_Box) TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "dead, ")), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_12, (MR_Integer) 0)), (MR_Integer) 5)));

        func_1(((MR_Box) TypeClassInfo_for_output_12), ((MR_Box) ((MR_String) "live, ")), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
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
