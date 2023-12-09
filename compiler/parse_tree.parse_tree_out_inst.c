/*
** Automatically generated from `parse_tree_out_inst.m'
** by the Mercury compiler,
** version rotd-2023-12-09
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "libs.indent.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_3,
  MR_Box * STATE_VARIABLE_U_4);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9);


static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_4[1][2];


struct parse_tree__parse_tree_out_inst__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_inst__vector_common_type_5_0_s parse_tree__parse_tree_out_inst_vector_common_5[15];



static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_inst__vector_common_type_5_0_s parse_tree__parse_tree_out_inst_vector_common_5[15] = {
  /* row   0 */   { (MR_String) "any" },
  /* row   1 */   { (MR_String) "unique_any" },
  /* row   2 */   { (MR_String) "mostly_unique_any" },
  /* row   3 */   { (MR_String) "clobbered_any" },
  /* row   4 */   { (MR_String) "mostly_clobbered_any" },
  /* row   5 */   { (MR_String) "any" },
  /* row   6 */   { (MR_String) "unique_any" },
  /* row   7 */   { (MR_String) "mostly_unique_any" },
  /* row   8 */   { (MR_String) "clobbered_any" },
  /* row   9 */   { (MR_String) "mostly_clobbered_any" },
  /* row  10 */   { (MR_String) "any" },
  /* row  11 */   { (MR_String) "unique_any" },
  /* row  12 */   { (MR_String) "mostly_unique_any" },
  /* row  13 */   { (MR_String) "clobbered_any" },
  /* row  14 */   { (MR_String) "mostly_clobbered_any" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Mode_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Mode_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Mode_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Box conv0_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Mode_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv0_State_10);
  State_10 = ((MR_Word) (conv0_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_list_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Modes_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Modes_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Modes_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Box conv0_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Modes_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv0_State_10);
  State_10 = ((MR_Word) (conv0_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Uniq_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  MR_String Var_10 = ((&parse_tree__parse_tree_out_inst_vector_common_5[10 + Uniq_5]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, (MR_Integer) 0)), (MR_Integer) 6))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Var_10)), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__parse_tree_out_inst_vector_common_5[5 + HeadVar__1_1]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_uniqueness_to_string_2_f_0(
  MR_Word HeadVar__1_1,
  MR_String SharedStr_2)
{
  MR_String HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      HeadVar__3_3 = (MR_String) "clobbered";
      break;
    case (MR_Integer) 4:
      HeadVar__3_3 = (MR_String) "mostly_clobbered";
      break;
    case (MR_Integer) 2:
      HeadVar__3_3 = (MR_String) "mostly_unique";
      break;
    case (MR_Integer) 0:
      HeadVar__3_3 = SharedStr_2;
      break;
    case (MR_Integer) 1:
      HeadVar__3_3 = (MR_String) "unique";
      break;
  }
  return HeadVar__3_3;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, (MR_Integer) 0)), (MR_Integer) 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "fake, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, (MR_Integer) 0)), (MR_Integer) 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "real, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Inst_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Inst_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_inst_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Inst_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Box conv0_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Inst_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv0_State_10);
  State_10 = ((MR_Word) (conv0_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_list_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Insts_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Insts_10, ((MR_Box) (Stream_7)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_inst_list_to_string_3_f_0(
  MR_Word Lang_5,
  MR_Word InstVarSet_6,
  MR_Word Insts_7)
{
  MR_String Str_8;
  MR_Word State0_9;
  MR_Word State_10;
  MR_Box conv0_State_10;

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Insts_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_9)), &conv0_State_10);
  State_10 = ((MR_Word) (conv0_State_10));
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48,
  MR_Word tscc_proc_1_input_2_Lang_7,
  MR_Word tscc_proc_1_input_3_InstVarSet_8,
  MR_Word tscc_proc_1_input_4_Inst_9,
  MR_Box tscc_proc_1_input_5_S_10,
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_U_0_21,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_22)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27;
  MR_Word tscc_proc_2_input_2_Lang_8;
  MR_Word tscc_proc_2_input_3_InstVarSet_9;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
  MR_Word tscc_proc_2_input_5_Inst_11;
  MR_Box tscc_proc_2_input_6_S_12;
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
  MR_Box tscc_output_1_STATE_VARIABLE_U_22;

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
    MR_Word TypeClassInfo_for_pt_output_48 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48;
    MR_Word Lang_7 = tscc_proc_1_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_1_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_1_input_4_Inst_9;
    MR_Box S_10 = tscc_proc_1_input_5_S_10;
    MR_Box STATE_VARIABLE_U_0_21 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_21;
    MR_Box STATE_VARIABLE_U_22;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));

              func_4(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));

              func_6(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, (MR_Integer) 1))));

          if ((HOInstInfo_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_57;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            switch (Uniq_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                Var_57 = (MR_String) "clobbered";
                break;
              case (MR_Integer) 4:
                Var_57 = (MR_String) "mostly_clobbered";
                break;
              case (MR_Integer) 2:
                Var_57 = (MR_String) "mostly_unique";
                break;
              case (MR_Integer) 0:
                Var_57 = (MR_String) "ground";
                break;
              case (MR_Integer) 1:
                Var_57 = (MR_String) "unique";
                break;
            }
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
            func_5(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_57)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
          }
          else
          {
            MR_Word PredInstInfo_44 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_47), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_46, PredInstInfo_44, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_U_28_28;
          MR_Box STATE_VARIABLE_U_30_30;
          MR_Box STATE_VARIABLE_U_31_31;
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_String Var_51;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (Uniq_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              Var_51 = (MR_String) "clobbered";
              break;
            case (MR_Integer) 4:
              Var_51 = (MR_String) "mostly_clobbered";
              break;
            case (MR_Integer) 2:
              Var_51 = (MR_String) "mostly_unique";
              break;
            case (MR_Integer) 0:
              Var_51 = (MR_String) "bound";
              break;
            case (MR_Integer) 1:
              Var_51 = (MR_String) "unique";
              break;
          }
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
          func_1(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_28_28);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
          parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundInsts_16, S_10, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_22);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27 = TypeClassInfo_for_pt_output_48;
              MR_Word next_value_of_tscc_proc_2_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = Vars_18;
              MR_Word next_value_of_tscc_proc_2_input_5_Inst_11 = CInst_19;
              MR_Box next_value_of_tscc_proc_2_input_6_S_12 = S_10;
              MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_0_21;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27;
              tscc_proc_2_input_2_Lang_8 = next_value_of_tscc_proc_2_input_2_Lang_8;
              tscc_proc_2_input_3_InstVarSet_9 = next_value_of_tscc_proc_2_input_3_InstVarSet_9;
              tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_2_input_5_Inst_11 = next_value_of_tscc_proc_2_input_5_Inst_11;
              tscc_proc_2_input_6_S_12 = next_value_of_tscc_proc_2_input_6_S_12;
              tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[0 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));

                func_0(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_50)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
              }
              else
              {
                MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_48, InstVarSet_8, (MR_Integer) 0, Var_17, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_22 = STATE_VARIABLE_U_22;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_27 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27;
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
    MR_Box conv7_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv7_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_18_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv7_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_20_20;
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_25_25;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_20_20);
      parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, S_12, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
      func_9(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), S_12, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
      parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_18_18, Inst_11, S_12, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_17);
    }
    else
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48 = TypeClassInfo_for_pt_output_27;
      MR_Word next_value_of_tscc_proc_1_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_1_input_4_Inst_9 = Inst_11;
      MR_Box next_value_of_tscc_proc_1_input_5_S_10 = S_12;
      MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_21 = STATE_VARIABLE_U_0_16;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48;
      tscc_proc_1_input_2_Lang_7 = next_value_of_tscc_proc_1_input_2_Lang_7;
      tscc_proc_1_input_3_InstVarSet_8 = next_value_of_tscc_proc_1_input_3_InstVarSet_8;
      tscc_proc_1_input_4_Inst_9 = next_value_of_tscc_proc_1_input_4_Inst_9;
      tscc_proc_1_input_5_S_10 = next_value_of_tscc_proc_1_input_5_S_10;
      tscc_proc_1_input_6_STATE_VARIABLE_U_0_21 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_21;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_U_22 = STATE_VARIABLE_U_17;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_22 = tscc_output_1_STATE_VARIABLE_U_22;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27,
  MR_Word tscc_proc_2_input_2_Lang_8,
  MR_Word tscc_proc_2_input_3_InstVarSet_9,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15,
  MR_Word tscc_proc_2_input_5_Inst_11,
  MR_Box tscc_proc_2_input_6_S_12,
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_U_0_16,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_U_22)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48;
  MR_Word tscc_proc_1_input_2_Lang_7;
  MR_Word tscc_proc_1_input_3_InstVarSet_8;
  MR_Word tscc_proc_1_input_4_Inst_9;
  MR_Box tscc_proc_1_input_5_S_10;
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_U_0_21;
  MR_Box tscc_output_1_STATE_VARIABLE_U_22;

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
    MR_Word TypeClassInfo_for_pt_output_48 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48;
    MR_Word Lang_7 = tscc_proc_1_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_1_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_1_input_4_Inst_9;
    MR_Box S_10 = tscc_proc_1_input_5_S_10;
    MR_Box STATE_VARIABLE_U_0_21 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_21;
    MR_Box STATE_VARIABLE_U_22;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));

              func_4(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));

              func_6(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, (MR_Integer) 1))));

          if ((HOInstInfo_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_57;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            switch (Uniq_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                Var_57 = (MR_String) "clobbered";
                break;
              case (MR_Integer) 4:
                Var_57 = (MR_String) "mostly_clobbered";
                break;
              case (MR_Integer) 2:
                Var_57 = (MR_String) "mostly_unique";
                break;
              case (MR_Integer) 0:
                Var_57 = (MR_String) "ground";
                break;
              case (MR_Integer) 1:
                Var_57 = (MR_String) "unique";
                break;
            }
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
            func_5(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_57)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
          }
          else
          {
            MR_Word PredInstInfo_44 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_47), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_46, PredInstInfo_44, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_U_28_28;
          MR_Box STATE_VARIABLE_U_30_30;
          MR_Box STATE_VARIABLE_U_31_31;
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_String Var_51;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          switch (Uniq_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              Var_51 = (MR_String) "clobbered";
              break;
            case (MR_Integer) 4:
              Var_51 = (MR_String) "mostly_clobbered";
              break;
            case (MR_Integer) 2:
              Var_51 = (MR_String) "mostly_unique";
              break;
            case (MR_Integer) 0:
              Var_51 = (MR_String) "bound";
              break;
            case (MR_Integer) 1:
              Var_51 = (MR_String) "unique";
              break;
          }
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
          func_1(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_28_28);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
          parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundInsts_16, S_10, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_22);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27 = TypeClassInfo_for_pt_output_48;
              MR_Word next_value_of_tscc_proc_2_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = Vars_18;
              MR_Word next_value_of_tscc_proc_2_input_5_Inst_11 = CInst_19;
              MR_Box next_value_of_tscc_proc_2_input_6_S_12 = S_10;
              MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_0_21;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27;
              tscc_proc_2_input_2_Lang_8 = next_value_of_tscc_proc_2_input_2_Lang_8;
              tscc_proc_2_input_3_InstVarSet_9 = next_value_of_tscc_proc_2_input_3_InstVarSet_9;
              tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_2_input_5_Inst_11 = next_value_of_tscc_proc_2_input_5_Inst_11;
              tscc_proc_2_input_6_S_12 = next_value_of_tscc_proc_2_input_6_S_12;
              tscc_proc_2_input_7_STATE_VARIABLE_U_0_16 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_U_0_16;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[0 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, (MR_Integer) 0)), (MR_Integer) 6))));

                func_0(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_50)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
              }
              else
              {
                MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));

              parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_48, InstVarSet_8, (MR_Integer) 0, Var_17, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_22 = STATE_VARIABLE_U_22;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_27 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_27;
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
    MR_Box conv7_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv7_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_18_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv7_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_20_20;
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_25_25;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_20_20);
      parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, S_12, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
      func_9(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), S_12, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
      parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_18_18, Inst_11, S_12, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, (MR_Integer) 0)), (MR_Integer) 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_17);
    }
    else
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48 = TypeClassInfo_for_pt_output_27;
      MR_Word next_value_of_tscc_proc_1_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_1_input_4_Inst_9 = Inst_11;
      MR_Box next_value_of_tscc_proc_1_input_5_S_10 = S_12;
      MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_21 = STATE_VARIABLE_U_0_16;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_48;
      tscc_proc_1_input_2_Lang_7 = next_value_of_tscc_proc_1_input_2_Lang_7;
      tscc_proc_1_input_3_InstVarSet_8 = next_value_of_tscc_proc_1_input_3_InstVarSet_8;
      tscc_proc_1_input_4_Inst_9 = next_value_of_tscc_proc_1_input_4_Inst_9;
      tscc_proc_1_input_5_S_10 = next_value_of_tscc_proc_1_input_5_S_10;
      tscc_proc_1_input_6_STATE_VARIABLE_U_0_21 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_21;
      goto top_of_proc_1;
    }
    tscc_output_1_STATE_VARIABLE_U_22 = STATE_VARIABLE_U_17;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_22 = tscc_output_1_STATE_VARIABLE_U_22;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_39,
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
    MR_Word FromInst0_12 = ((MR_Word) ((MR_hl_field(0, Mode0_9, (MR_Integer) 0))));
    MR_Word ToInst0_13 = ((MR_Word) ((MR_hl_field(0, Mode0_9, (MR_Integer) 1))));

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_15;

          succeeded = ((MR_tag((MR_Word) FromInst0_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            HOInstInfo_15 = ((MR_Word) ((MR_hl_field(1, FromInst0_12, (MR_Integer) 1))));
            succeeded = (HOInstInfo_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ToInst0_13, FromInst0_12);
          }
          if (succeeded)
            parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, FromInst0_12, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
          else
          {
            MR_Word Mode1_20;

            parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst0_12, ToInst0_13, &Mode1_20);
            if (((MR_tag((MR_Word) Mode1_20)) == (MR_Integer) 0))
            {
              MR_Word FromInst1_21 = ((MR_Word) ((MR_hl_field(0, Mode1_20, (MR_Integer) 0))));
              MR_Word ToInst1_22 = ((MR_Word) ((MR_hl_field(0, Mode1_20, (MR_Integer) 1))));
              MR_Word FromInst_23;
              MR_Word ToInst_24;
              MR_Box STATE_VARIABLE_U_17_42;
              MR_Box STATE_VARIABLE_U_18_43;
              MR_Box STATE_VARIABLE_U_20_45;
              MR_Box STATE_VARIABLE_U_21_46;

              parse_tree__prog_mode__strip_module_names_from_inst_3_p_0((MR_Integer) 0, FromInst1_21, &FromInst_23);
              parse_tree__prog_mode__strip_module_names_from_inst_3_p_0((MR_Integer) 0, ToInst1_22, &ToInst_24);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) "(", S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_17_42);
              parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, FromInst_23, S_10, STATE_VARIABLE_U_17_42, &STATE_VARIABLE_U_18_43);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) " >> ", S_10, STATE_VARIABLE_U_18_43, &STATE_VARIABLE_U_20_45);
              parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, ToInst_24, S_10, STATE_VARIABLE_U_20_45, &STATE_VARIABLE_U_21_46);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) ")", S_10, STATE_VARIABLE_U_21_46, STATE_VARIABLE_U_28);
            }
            else
            {
              MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(1, Mode1_20, (MR_Integer) 0))));
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(1, Mode1_20, (MR_Integer) 1))));

              if ((ArgInsts_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Name_48;

                Name_48 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, Name_48, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
              }
              else
              {
                MR_Box STATE_VARIABLE_U_21_51;
                MR_Box STATE_VARIABLE_U_24_53;
                MR_Box STATE_VARIABLE_U_25_54;
                MR_String Name_56;

                Name_56 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, Name_56, S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_21_51);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) "(", S_10, STATE_VARIABLE_U_21_51, &STATE_VARIABLE_U_24_53);
                parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, ArgInsts_26, S_10, STATE_VARIABLE_U_24_53, &STATE_VARIABLE_U_25_54);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) ")", S_10, STATE_VARIABLE_U_25_54, STATE_VARIABLE_U_28);
              }
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_U_17_74;
          MR_Box STATE_VARIABLE_U_18_75;
          MR_Box STATE_VARIABLE_U_20_77;
          MR_Box STATE_VARIABLE_U_21_78;

          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) "(", S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_17_74);
          parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, FromInst0_12, S_10, STATE_VARIABLE_U_17_74, &STATE_VARIABLE_U_18_75);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) " >> ", S_10, STATE_VARIABLE_U_18_75, &STATE_VARIABLE_U_20_77);
          parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, ToInst0_13, S_10, STATE_VARIABLE_U_20_77, &STATE_VARIABLE_U_21_78);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) ")", S_10, STATE_VARIABLE_U_21_78, STATE_VARIABLE_U_28);
        }
        break;
    }
  }
  else
  {
    MR_Word SymName_37 = ((MR_Word) ((MR_hl_field(1, Mode0_9, (MR_Integer) 0))));
    MR_Word ArgInsts_38 = ((MR_Word) ((MR_hl_field(1, Mode0_9, (MR_Integer) 1))));

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((ArgInsts_38 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Name_80;

          Name_80 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_37);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, Name_80, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_21_83;
          MR_Box STATE_VARIABLE_U_24_85;
          MR_Box STATE_VARIABLE_U_25_86;
          MR_String Name_88;

          Name_88 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_37);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, Name_88, S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_21_83);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) "(", S_10, STATE_VARIABLE_U_21_83, &STATE_VARIABLE_U_24_85);
          parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, ArgInsts_38, S_10, STATE_VARIABLE_U_24_85, &STATE_VARIABLE_U_25_86);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) ")", S_10, STATE_VARIABLE_U_25_86, STATE_VARIABLE_U_28);
        }
        break;
      case (MR_Integer) 0:
        if ((ArgInsts_38 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_pt_output_39, SymName_37, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
        else
        {
          MR_Box STATE_VARIABLE_U_21_93;
          MR_Box STATE_VARIABLE_U_24_95;
          MR_Box STATE_VARIABLE_U_25_96;

          parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_39, SymName_37, S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_21_93);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) "(", S_10, STATE_VARIABLE_U_21_93, &STATE_VARIABLE_U_24_95);
          parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_39, Lang_7, InstVarSet_8, ArgInsts_38, S_10, STATE_VARIABLE_U_24_95, &STATE_VARIABLE_U_25_96);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_39, (MR_String) ")", S_10, STATE_VARIABLE_U_25_96, STATE_VARIABLE_U_28);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_insts_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_38,
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
      MR_Word BoundInst_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(0, BoundInst_15, (MR_Integer) 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(0, BoundInst_15, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_28_28;

      if ((Args_20 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 0, ConsId_19, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_28_28);
      else
      {
        MR_Box STATE_VARIABLE_U_30_30;
        MR_Box STATE_VARIABLE_U_32_32;
        MR_Box STATE_VARIABLE_U_33_33;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 1, ConsId_19, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_30_30);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), HeadVar__4_4, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, InstVarSet_2, Args_20, HeadVar__4_4, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), HeadVar__4_4, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_28_28);
      }
      if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_28_28;
      else
      {
        MR_Box STATE_VARIABLE_U_37_37;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, (MR_Integer) 0)), (MR_Integer) 6))));
        MR_Word next_value_of_HeadVar__3_3;
        MR_Box next_value_of_STATE_VARIABLE_U_0_5;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " ; ")), HeadVar__4_4, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_37_37);
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

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
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
      MR_Word Mode_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_23_23;

      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_15, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_23_23);
      if ((Modes_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_23;
      else
      {
        MR_Box STATE_VARIABLE_U_25_25;
        MR_Word Mode_34;
        MR_Word Modes_35;
        MR_Box STATE_VARIABLE_U_23_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
        Mode_34 = ((MR_Word) ((MR_hl_field(1, Modes_16, (MR_Integer) 0))));
        Modes_35 = ((MR_Word) ((MR_hl_field(1, Modes_16, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_34, HeadVar__4_4, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_23_41);
        if ((Modes_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_41;
        else
        {
          MR_Box STATE_VARIABLE_U_25_43;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_5;

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_41, &STATE_VARIABLE_U_25_43);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Modes_35;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_25_43;
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
  MR_Word TypeClassInfo_for_pt_output_132,
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
          MR_Word Name_12 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 0))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, (MR_Integer) 1))));

          if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, S_10, STATE_VARIABLE_U_0_25, STATE_VARIABLE_U_26);
          else
          {
            MR_Box STATE_VARIABLE_U_28_28;
            MR_Box STATE_VARIABLE_U_30_30;
            MR_Box STATE_VARIABLE_U_31_31;

            parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "(", S_10, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
            parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Args_13, S_10, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_31_31, STATE_VARIABLE_U_26);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_16 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_17 = ((MR_Unsigned) ((MR_hl_field(1, InstName_9, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word InstA_18 = ((MR_Word) ((MR_hl_field(1, InstName_9, (MR_Integer) 1))));
          MR_Word InstB_19 = ((MR_Word) ((MR_hl_field(1, InstName_9, (MR_Integer) 2))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_37_37;
                MR_Box STATE_VARIABLE_U_38_38;
                MR_Box STATE_VARIABLE_U_39_39;
                MR_Word Var_40;
                MR_Box STATE_VARIABLE_U_41_41;
                MR_Word Var_42;

                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044unify(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_37_37);
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_16, S_10, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
                parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_pt_output_132, Real_17, S_10, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
                {
                  Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_42, 0) = ((MR_Box) (InstB_19));
                  MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_40, 0) = ((MR_Box) (InstA_18));
                  MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Var_40, S_10, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_41_41, STATE_VARIABLE_U_26);
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
          MR_Word InstA_118 = ((MR_Word) ((MR_hl_field(2, InstName_9, (MR_Integer) 0))));
          MR_Word InstB_119 = ((MR_Word) ((MR_hl_field(2, InstName_9, (MR_Integer) 1))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_49_49;
                MR_Word Var_50;
                MR_Box STATE_VARIABLE_U_51_51;
                MR_Word Var_52;

                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044merge_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_49_49);
                {
                  Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_52, 0) = ((MR_Box) (InstB_119));
                  MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_50, 0) = ((MR_Box) (InstA_118));
                  MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
                }
                parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Var_50, S_10, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_51_51);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_51_51, STATE_VARIABLE_U_26);
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
        switch (((MR_Integer) ((MR_hl_field(3, InstName_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_20 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));
              MR_Word Uniq_21 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_120 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_121 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) & (MR_Integer) 1);

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

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044ground(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_59_59);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_20, S_10, STATE_VARIABLE_U_59_59, &STATE_VARIABLE_U_60_60);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_62_62);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_120, S_10, STATE_VARIABLE_U_62_62, &STATE_VARIABLE_U_63_63);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_21, (MR_String) "shared", S_10, STATE_VARIABLE_U_63_63, &STATE_VARIABLE_U_65_65);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_pt_output_132, Real_121, S_10, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_66_66);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_66_66, STATE_VARIABLE_U_26);
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
              MR_Word IsLive_122 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_123 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubInstName_124 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));
              MR_Word Uniq_125 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);

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

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044any(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_72_72);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_124, S_10, STATE_VARIABLE_U_72_72, &STATE_VARIABLE_U_73_73);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_73_73, &STATE_VARIABLE_U_75_75);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_122, S_10, STATE_VARIABLE_U_75_75, &STATE_VARIABLE_U_76_76);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_125, (MR_String) "shared", S_10, STATE_VARIABLE_U_76_76, &STATE_VARIABLE_U_78_78);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_pt_output_132, Real_123, S_10, STATE_VARIABLE_U_78_78, &STATE_VARIABLE_U_79_79);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_79_79, STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_126 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_85_85;
                    MR_Box STATE_VARIABLE_U_86_86;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044shared_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_85_85);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_126, S_10, STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_86_86);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_86_86, STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_127 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_92_92;
                    MR_Box STATE_VARIABLE_U_93_93;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044mostly_uniq_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_92_92);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_127, S_10, STATE_VARIABLE_U_92_92, &STATE_VARIABLE_U_93_93);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_93_93, STATE_VARIABLE_U_26);
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
              MR_Word Uniqueness_22 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeVarSet_24;
                    MR_Box STATE_VARIABLE_U_99_99;
                    MR_Box STATE_VARIABLE_U_101_101;
                    MR_Box STATE_VARIABLE_U_103_103;
                    MR_Box STATE_VARIABLE_U_105_105;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_ground(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_99_99);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_132, Uniqueness_22, (MR_String) "shared", S_10, STATE_VARIABLE_U_99_99, &STATE_VARIABLE_U_101_101);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_103_103);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_24);
                    parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_24, (MR_Integer) 0, Type_23, S_10, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_105_105);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_105_105, STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_130 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 2))));
              MR_Word Type_131 = ((MR_Word) ((MR_hl_field(3, InstName_9, (MR_Integer) 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_110_110;
                    MR_Box STATE_VARIABLE_U_112_112;
                    MR_Box STATE_VARIABLE_U_114_114;
                    MR_Box STATE_VARIABLE_U_115_115;
                    MR_Word TypeVarSet_128;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_110_110);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_128);
                    parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_128, (MR_Integer) 0, Type_131, S_10, STATE_VARIABLE_U_110_110, &STATE_VARIABLE_U_112_112);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_112_112, &STATE_VARIABLE_U_114_114);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_130, S_10, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_115_115);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_115_115, STATE_VARIABLE_U_26);
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

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
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
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_23_23;

      parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_15, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_23_23);
      if ((Insts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_23;
      else
      {
        MR_Box STATE_VARIABLE_U_25_25;
        MR_Word Inst_34;
        MR_Word Insts_35;
        MR_Box STATE_VARIABLE_U_23_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_23, &STATE_VARIABLE_U_25_25);
        Inst_34 = ((MR_Word) ((MR_hl_field(1, Insts_16, (MR_Integer) 0))));
        Insts_35 = ((MR_Word) ((MR_hl_field(1, Insts_16, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_34, HeadVar__4_4, STATE_VARIABLE_U_25_25, &STATE_VARIABLE_U_23_41);
        if ((Insts_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_23_41;
        else
        {
          MR_Box STATE_VARIABLE_U_25_43;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_5;

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_23_41, &STATE_VARIABLE_U_25_43);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Insts_35;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_25_43;
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
parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_66,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Box STATE_VARIABLE_U_32_32;
  MR_Box STATE_VARIABLE_U_38_38;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Box STATE_VARIABLE_U_28_28;
        MR_Box STATE_VARIABLE_U_30_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), S_12, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Box STATE_VARIABLE_U_28_92;
        MR_Box STATE_VARIABLE_U_30_93;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_3(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_92);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), S_12, STATE_VARIABLE_U_28_92, &STATE_VARIABLE_U_30_93);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_93, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box STATE_VARIABLE_U_28_97;
        MR_Box STATE_VARIABLE_U_30_98;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_97);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_7(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), S_12, STATE_VARIABLE_U_28_97, &STATE_VARIABLE_U_30_98);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_98, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_28_102;
        MR_Box STATE_VARIABLE_U_30_103;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_9(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_102);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), S_12, STATE_VARIABLE_U_28_102, &STATE_VARIABLE_U_30_103);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_11(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_103, &STATE_VARIABLE_U_32_32);
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
        MR_Box STATE_VARIABLE_U_49_49;
        MR_Box STATE_VARIABLE_U_55_55;
        MR_Box STATE_VARIABLE_U_57_57;
        MR_String Var_58;
        MR_Box STATE_VARIABLE_U_59_59;
        MR_Box conv12_RetMode_21;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv12_RetMode_21);
        RetMode_21 = ((MR_Word) (conv12_RetMode_21));
        if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));

          func_13(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func = ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_49_49);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_51_51;
          MR_Box STATE_VARIABLE_U_52_52;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_51_51);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, ArgModes_20, S_12, STATE_VARIABLE_U_51_51, &STATE_VARIABLE_U_52_52);
          func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
          func_15(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), S_12, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_49_49);
        }
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, S_12, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_55_55);
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), S_12, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_57_57);
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_17(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), S_12, STATE_VARIABLE_U_57_57, &STATE_VARIABLE_U_59_59);
        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_59_59, &STATE_VARIABLE_U_38_38);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_34_34;
        MR_String Var_35;
        MR_Box STATE_VARIABLE_U_36_36;
        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_19(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred is ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), S_12, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_36_36);
        func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_21(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_40_40;
        MR_Box STATE_VARIABLE_U_41_41;
        MR_Box STATE_VARIABLE_U_43_43;
        MR_String Var_44;
        MR_Box STATE_VARIABLE_U_45_45;
        MR_Word Mode_81;
        MR_Word Modes_82;
        MR_Box STATE_VARIABLE_U_23_88;
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_40_40);
        Mode_81 = ((MR_Word) ((MR_hl_field(1, Modes_15, (MR_Integer) 0))));
        Modes_82 = ((MR_Word) ((MR_hl_field(1, Modes_15, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, S_12, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_23_88);
        if ((Modes_82 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_41_41 = STATE_VARIABLE_U_23_88;
        else
        {
          MR_Box STATE_VARIABLE_U_25_90;
          void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));

          func_23(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_23_88, &STATE_VARIABLE_U_25_90);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, S_12, STATE_VARIABLE_U_25_90, &STATE_VARIABLE_U_41_41);
        }
        func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_24(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), S_12, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), S_12, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_26(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_38_38);
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_38_38;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_63_63;
    MR_Box STATE_VARIABLE_U_64_64;
    void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
    void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), S_12, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_63_63);
    parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, S_12, STATE_VARIABLE_U_63_63, &STATE_VARIABLE_U_64_64);
    func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
    func_28(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), S_12, STATE_VARIABLE_U_64_64, STATE_VARIABLE_U_26);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_66,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_25,
  MR_Box * STATE_VARIABLE_U_26)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, (MR_Integer) 3))) & (MR_Integer) 7);
  MR_Box STATE_VARIABLE_U_32_32;
  MR_Box STATE_VARIABLE_U_38_38;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Box STATE_VARIABLE_U_28_28;
        MR_Box STATE_VARIABLE_U_30_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_28);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), S_12, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Box STATE_VARIABLE_U_28_109;
        MR_Box STATE_VARIABLE_U_30_110;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_3(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_109);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), S_12, STATE_VARIABLE_U_28_109, &STATE_VARIABLE_U_30_110);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_110, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box STATE_VARIABLE_U_28_114;
        MR_Box STATE_VARIABLE_U_30_115;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_114);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_7(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), S_12, STATE_VARIABLE_U_28_114, &STATE_VARIABLE_U_30_115);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_115, &STATE_VARIABLE_U_32_32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_28_119;
        MR_Box STATE_VARIABLE_U_30_120;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_9(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_119);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), S_12, STATE_VARIABLE_U_28_119, &STATE_VARIABLE_U_30_120);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_11(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_30_120, &STATE_VARIABLE_U_32_32);
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
        MR_Box STATE_VARIABLE_U_49_49;
        MR_Box STATE_VARIABLE_U_55_55;
        MR_Box STATE_VARIABLE_U_57_57;
        MR_String Var_58;
        MR_Box STATE_VARIABLE_U_59_59;
        MR_Box conv12_RetMode_21;
        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv12_RetMode_21);
        RetMode_21 = ((MR_Word) (conv12_RetMode_21));
        if ((ArgModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));

          func_13(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((func) = ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_49_49);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_51_51;
          MR_Box STATE_VARIABLE_U_52_52;
          MR_Word Mode_81;
          MR_Word Modes_82;
          MR_Box STATE_VARIABLE_U_23_88;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(func(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_51_51);
          Mode_81 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, (MR_Integer) 0))));
          Modes_82 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, (MR_Integer) 1))));
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, S_12, STATE_VARIABLE_U_51_51, &STATE_VARIABLE_U_23_88);
          if ((Modes_82 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_52_52 = STATE_VARIABLE_U_23_88;
          else
          {
            MR_Box STATE_VARIABLE_U_25_90;
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));

            func_15(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_23_88, &STATE_VARIABLE_U_25_90);
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, S_12, STATE_VARIABLE_U_25_90, &STATE_VARIABLE_U_52_52);
          }
          func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
          func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), S_12, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_49_49);
        }
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, S_12, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_55_55);
        func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_17(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), S_12, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_57_57);
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), S_12, STATE_VARIABLE_U_57_57, &STATE_VARIABLE_U_59_59);
        func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_19(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_59_59, &STATE_VARIABLE_U_38_38);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_34_34;
        MR_String Var_35;
        MR_Box STATE_VARIABLE_U_36_36;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((pred) is ")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_21(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), S_12, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_36_36);
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_40_40;
        MR_Box STATE_VARIABLE_U_41_41;
        MR_Box STATE_VARIABLE_U_43_43;
        MR_String Var_44;
        MR_Box STATE_VARIABLE_U_45_45;
        MR_Word Mode_98;
        MR_Word Modes_99;
        MR_Box STATE_VARIABLE_U_23_105;
        void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_23(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(pred(")), S_12, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_40_40);
        Mode_98 = ((MR_Word) ((MR_hl_field(1, Modes_15, (MR_Integer) 0))));
        Modes_99 = ((MR_Word) ((MR_hl_field(1, Modes_15, (MR_Integer) 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_98, S_12, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_23_105);
        if ((Modes_99 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_41_41 = STATE_VARIABLE_U_23_105;
        else
        {
          MR_Box STATE_VARIABLE_U_25_107;
          void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));

          func_24(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_23_105, &STATE_VARIABLE_U_25_107);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_99, S_12, STATE_VARIABLE_U_25_107, &STATE_VARIABLE_U_41_41);
        }
        func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), S_12, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_26(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), S_12, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
        func_27 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
        func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_38_38);
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_38_38;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_63_63;
    MR_Box STATE_VARIABLE_U_64_64;
    void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
    void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_28(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), S_12, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_63_63);
    parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, S_12, STATE_VARIABLE_U_63_63, &STATE_VARIABLE_U_64_64);
    func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, (MR_Integer) 0)), (MR_Integer) 6))));
    func_29(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), S_12, STATE_VARIABLE_U_64_64, STATE_VARIABLE_U_26);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
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
      MR_Word Reg_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Regs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_18_18;

      switch (Reg_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, (MR_Integer) 0)), (MR_Integer) 6))));

            func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_18_18);
          }
          break;
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, (MR_Integer) 0)), (MR_Integer) 6))));

            func_1(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_18_18);
          }
          break;
      }
      if ((Regs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_18_18;
      else
      {
        MR_Box STATE_VARIABLE_U_22_22;
        MR_Word Reg_27;
        MR_Word Regs_28;
        MR_Box STATE_VARIABLE_U_18_35;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, (MR_Integer) 0)), (MR_Integer) 6))));

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_22_22);
        Reg_27 = ((MR_Word) ((MR_hl_field(1, Regs_10, (MR_Integer) 0))));
        Regs_28 = ((MR_Word) ((MR_hl_field(1, Regs_10, (MR_Integer) 1))));
        switch (Reg_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, (MR_Integer) 0)), (MR_Integer) 6))));

              func_3(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), HeadVar__2_2, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_18_35);
            }
            break;
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, (MR_Integer) 0)), (MR_Integer) 6))));

              func_4(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), HeadVar__2_2, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_18_35);
            }
            break;
        }
        if ((Regs_28 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_18_35;
        else
        {
          MR_Box STATE_VARIABLE_U_22_38;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, (MR_Integer) 0)), (MR_Integer) 6))));
          MR_Word next_value_of_HeadVar__1_1;
          MR_Box next_value_of_STATE_VARIABLE_U_0_3;

          func_5(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_18_35, &STATE_VARIABLE_U_22_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Regs_28;
          next_value_of_STATE_VARIABLE_U_0_3 = STATE_VARIABLE_U_22_38;
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
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, (MR_Integer) 0)), (MR_Integer) 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) ", fake")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, (MR_Integer) 0)), (MR_Integer) 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) ", real")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Uniq_6,
  MR_String SharedStr_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  MR_String Var_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  switch (Uniq_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      Var_12 = (MR_String) "clobbered";
      break;
    case (MR_Integer) 4:
      Var_12 = (MR_String) "mostly_clobbered";
      break;
    case (MR_Integer) 2:
      Var_12 = (MR_String) "mostly_unique";
      break;
    case (MR_Integer) 0:
      Var_12 = SharedStr_7;
      break;
    case (MR_Integer) 1:
      Var_12 = (MR_String) "unique";
      break;
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, (MR_Integer) 0)), (MR_Integer) 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) (Var_12)), S_8, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word IsLive_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  switch (IsLive_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, (MR_Integer) 0)), (MR_Integer) 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "dead, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, (MR_Integer) 0)), (MR_Integer) 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "live, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
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
