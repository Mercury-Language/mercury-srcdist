/*
** Automatically generated from `parse_tree_out_inst.m'
** by the Mercury compiler,
** version rotd-2026-02-06
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
#include "libs.file_util.mih"
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
#include "parse_tree.parse_tree_output.mih"
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
parse_tree__parse_tree_out_inst__mercury_format_bound_functors_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_user_defined_mode_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word SymName_10,
  MR_Word ArgInsts_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

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

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word SymName_10,
  MR_Word ArgInsts_11,
  MR_Word S_12);

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Word S_6);

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word SymName_10,
  MR_Word ArgInsts_11,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9);

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_U_0_3,
  MR_Word * STATE_VARIABLE_U_4);


static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_inst_scalar_common_4[1][2];


struct parse_tree__parse_tree_out_inst__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_inst__vector_common_type_5_0_s parse_tree__parse_tree_out_inst_vector_common_5[35];



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
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
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
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
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


static /* final */ const struct parse_tree__parse_tree_out_inst__vector_common_type_5_0_s parse_tree__parse_tree_out_inst_vector_common_5[35] = {
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
  /* row  15 */   { (MR_String) "any" },
  /* row  16 */   { (MR_String) "unique_any" },
  /* row  17 */   { (MR_String) "mostly_unique_any" },
  /* row  18 */   { (MR_String) "clobbered_any" },
  /* row  19 */   { (MR_String) "mostly_clobbered_any" },
  /* row  20 */   { (MR_String) "any" },
  /* row  21 */   { (MR_String) "unique_any" },
  /* row  22 */   { (MR_String) "mostly_unique_any" },
  /* row  23 */   { (MR_String) "clobbered_any" },
  /* row  24 */   { (MR_String) "mostly_clobbered_any" },
  /* row  25 */   { (MR_String) "any" },
  /* row  26 */   { (MR_String) "unique_any" },
  /* row  27 */   { (MR_String) "mostly_unique_any" },
  /* row  28 */   { (MR_String) "clobbered_any" },
  /* row  29 */   { (MR_String) "mostly_clobbered_any" },
  /* row  30 */   { (MR_String) "any" },
  /* row  31 */   { (MR_String) "unique_any" },
  /* row  32 */   { (MR_String) "mostly_unique_any" },
  /* row  33 */   { (MR_String) "clobbered_any" },
  /* row  34 */   { (MR_String) "mostly_clobbered_any" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Uniq_5,
  MR_Word S_6)
{
  MR_String Var_10 = ((&parse_tree__parse_tree_out_inst_vector_common_5[30 + Uniq_5]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_9;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Var_10)), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word Uniq_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  MR_String Var_10 = ((&parse_tree__parse_tree_out_inst_vector_common_5[25 + Uniq_5]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_9;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Var_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_9);
  *STATE_VARIABLE_U_9 = ((MR_Word) (conv1_STATE_VARIABLE_U_9));
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_97_108_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Word S_6)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_9;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "fake, ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_9;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "real, ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_114_101_97_108_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_9;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "fake, ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_9);
        *STATE_VARIABLE_U_9 = ((MR_Word) (conv1_STATE_VARIABLE_U_9));
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_9;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "real, ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv3_STATE_VARIABLE_U_9);
        *STATE_VARIABLE_U_9 = ((MR_Word) (conv3_STATE_VARIABLE_U_9));
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_mode_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Mode_10)
{
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Mode_10, Stream_7);
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

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Mode_7, State0_9, &State_10);
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
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Modes_10, Stream_7);
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

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Modes_7, State0_9, &State_10);
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
  MR_String Var_10 = ((&parse_tree__parse_tree_out_inst_vector_common_5[20 + Uniq_5]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_11, 0)), 6))));

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_11)), ((MR_Box) (Var_10)), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_any_uniqueness_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__parse_tree_out_inst_vector_common_5[15 + HeadVar__1_1]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;

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
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "fake, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "real, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_inst__mercury_constrained_inst_vars_to_string_4_f_0(
  MR_Word Lang_6,
  MR_Word InstVarSet_7,
  MR_Word Vars_8,
  MR_Word Inst_9)
{
  MR_String Str_10;
  MR_Word State0_11;
  MR_Word State_12;

  State0_11 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_101_100_95_105_110_115_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_6, InstVarSet_7, Vars_8, Inst_9, State0_11, &State_12);
  Str_10 = mercury__string__builder__to_string_1_f_0(State_12);
  return Str_10;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Inst_10)
{
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Inst_10, Stream_7);
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

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Inst_7, State0_9, &State_10);
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
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));

              func_4(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));

              func_6(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, 1))));

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
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
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
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, 2))));
          MR_Box STATE_VARIABLE_U_4_28;
          MR_Box STATE_VARIABLE_U_5_30;
          MR_Box STATE_VARIABLE_U_6_31;
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, 0))) & (MR_Integer) 7);
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
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_1(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_4_28);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_4_28, &STATE_VARIABLE_U_5_30);
          parse_tree__parse_tree_out_inst__mercury_format_bound_functors_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundFunctors_16, S_10, STATE_VARIABLE_U_5_30, &STATE_VARIABLE_U_6_31);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_6_31, &STATE_VARIABLE_U_22);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));
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
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[10 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));

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
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

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
    MR_Word STATE_VARIABLE_Vars_1_18;
    MR_Box conv7_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv7_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_1_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv7_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_1_20;
      MR_Box STATE_VARIABLE_U_2_22;
      MR_Box STATE_VARIABLE_U_3_24;
      MR_Box STATE_VARIABLE_U_4_25;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_1_20);
      parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, S_12, STATE_VARIABLE_U_1_20, &STATE_VARIABLE_U_2_22);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_9(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), S_12, STATE_VARIABLE_U_2_22, &STATE_VARIABLE_U_3_24);
      parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_1_18, Inst_11, S_12, STATE_VARIABLE_U_3_24, &STATE_VARIABLE_U_4_25);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_4_25, &STATE_VARIABLE_U_17);
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
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));

              func_4(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));

              func_6(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, 1))));

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
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
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
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, 2))));
          MR_Box STATE_VARIABLE_U_4_28;
          MR_Box STATE_VARIABLE_U_5_30;
          MR_Box STATE_VARIABLE_U_6_31;
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, 0))) & (MR_Integer) 7);
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
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_1(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_4_28);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), S_10, STATE_VARIABLE_U_4_28, &STATE_VARIABLE_U_5_30);
          parse_tree__parse_tree_out_inst__mercury_format_bound_functors_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundFunctors_16, S_10, STATE_VARIABLE_U_5_30, &STATE_VARIABLE_U_6_31);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), S_10, STATE_VARIABLE_U_6_31, &STATE_VARIABLE_U_22);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, S_10, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));
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
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[10 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));

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
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

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
    MR_Word STATE_VARIABLE_Vars_1_18;
    MR_Box conv7_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv7_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_1_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv7_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_1_20;
      MR_Box STATE_VARIABLE_U_2_22;
      MR_Box STATE_VARIABLE_U_3_24;
      MR_Box STATE_VARIABLE_U_4_25;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_0_16, &STATE_VARIABLE_U_1_20);
      parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, S_12, STATE_VARIABLE_U_1_20, &STATE_VARIABLE_U_2_22);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_9(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), S_12, STATE_VARIABLE_U_2_22, &STATE_VARIABLE_U_3_24);
      parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_1_18, Inst_11, S_12, STATE_VARIABLE_U_3_24, &STATE_VARIABLE_U_4_25);
      func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_10(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_4_25, &STATE_VARIABLE_U_17);
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
  MR_Word TypeClassInfo_for_pt_output_41,
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
    MR_Word FromInst0_12 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 0))));
    MR_Word ToInst0_13 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 1))));

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_15;

          succeeded = ((MR_tag((MR_Word) FromInst0_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            HOInstInfo_15 = ((MR_Word) ((MR_hl_field(1, FromInst0_12, 1))));
            succeeded = (HOInstInfo_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ToInst0_13, FromInst0_12);
          }
          if (succeeded)
            parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst0_12, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
          else
          {
            MR_Word Mode1_20;

            parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst0_12, ToInst0_13, &Mode1_20);
            if (((MR_tag((MR_Word) Mode1_20)) == (MR_Integer) 0))
            {
              MR_Word FromInst1_21 = ((MR_Word) ((MR_hl_field(0, Mode1_20, 0))));
              MR_Word ToInst1_22 = ((MR_Word) ((MR_hl_field(0, Mode1_20, 1))));
              MR_Word FromInst_23;
              MR_Word ToInst_24;
              MR_Box STATE_VARIABLE_U_1_44;
              MR_Box STATE_VARIABLE_U_2_45;
              MR_Box STATE_VARIABLE_U_3_47;
              MR_Box STATE_VARIABLE_U_4_48;

              parse_tree__prog_mode__strip_module_names_from_inst_4_p_0((MR_Integer) 0, (MR_Integer) 0, FromInst1_21, &FromInst_23);
              parse_tree__prog_mode__strip_module_names_from_inst_4_p_0((MR_Integer) 0, (MR_Integer) 0, ToInst1_22, &ToInst_24);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) "(", S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_1_44);
              parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst_23, S_10, STATE_VARIABLE_U_1_44, &STATE_VARIABLE_U_2_45);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) " >> ", S_10, STATE_VARIABLE_U_2_45, &STATE_VARIABLE_U_3_47);
              parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, ToInst_24, S_10, STATE_VARIABLE_U_3_47, &STATE_VARIABLE_U_4_48);
              parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) ")", S_10, STATE_VARIABLE_U_4_48, STATE_VARIABLE_U_28);
            }
            else
            {
              MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(1, Mode1_20, 0))));
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(1, Mode1_20, 1))));

              if ((ArgInsts_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Name_50;

                Name_50 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, Name_50, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
              }
              else
              {
                MR_Box STATE_VARIABLE_U_3_53;
                MR_Box STATE_VARIABLE_U_5_55;
                MR_Box STATE_VARIABLE_U_6_56;
                MR_String Name_58;

                Name_58 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, Name_58, S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_3_53);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) "(", S_10, STATE_VARIABLE_U_3_53, &STATE_VARIABLE_U_5_55);
                parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, ArgInsts_26, S_10, STATE_VARIABLE_U_5_55, &STATE_VARIABLE_U_6_56);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) ")", S_10, STATE_VARIABLE_U_6_56, STATE_VARIABLE_U_28);
              }
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_U_1_76;
          MR_Box STATE_VARIABLE_U_2_77;
          MR_Box STATE_VARIABLE_U_3_79;
          MR_Box STATE_VARIABLE_U_4_80;

          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) "(", S_10, STATE_VARIABLE_U_0_27, &STATE_VARIABLE_U_1_76);
          parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst0_12, S_10, STATE_VARIABLE_U_1_76, &STATE_VARIABLE_U_2_77);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) " >> ", S_10, STATE_VARIABLE_U_2_77, &STATE_VARIABLE_U_3_79);
          parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, ToInst0_13, S_10, STATE_VARIABLE_U_3_79, &STATE_VARIABLE_U_4_80);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_41, (MR_String) ")", S_10, STATE_VARIABLE_U_4_80, STATE_VARIABLE_U_28);
        }
        break;
    }
  }
  else
  {
    MR_Word SymName_39 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 0))));
    MR_Word ArgInsts_40 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 1))));

    parse_tree__parse_tree_out_inst__mercury_format_user_defined_mode_7_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, SymName_39, ArgInsts_40, S_10, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_bound_functors_6_p_0(
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
      MR_Word BoundFunctor_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_15, 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_15, 1))));
      MR_Box STATE_VARIABLE_U_1_28;

      if ((Args_20 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 0, ConsId_19, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_28);
      else
      {
        MR_Box STATE_VARIABLE_U_2_30;
        MR_Box STATE_VARIABLE_U_3_32;
        MR_Box STATE_VARIABLE_U_4_33;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 1, ConsId_19, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_2_30);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), HeadVar__4_4, STATE_VARIABLE_U_2_30, &STATE_VARIABLE_U_3_32);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, InstVarSet_2, Args_20, HeadVar__4_4, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_4_33);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), HeadVar__4_4, STATE_VARIABLE_U_4_33, &STATE_VARIABLE_U_1_28);
      }
      if ((BoundFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_28;
      else
      {
        MR_Box STATE_VARIABLE_U_6_37;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        MR_Word next_value_of_HeadVar__3_3;
        MR_Box next_value_of_STATE_VARIABLE_U_0_5;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " ; ")), HeadVar__4_4, STATE_VARIABLE_U_1_28, &STATE_VARIABLE_U_6_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = BoundFunctors_16;
        next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_6_37;
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
      MR_Word Mode_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Box STATE_VARIABLE_U_1_23;

      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_15, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_23);
      if ((Modes_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_23;
      else
      {
        MR_Box STATE_VARIABLE_U_2_25;
        MR_Word Mode_34;
        MR_Word Modes_35;
        MR_Box STATE_VARIABLE_U_1_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_2_25);
        Mode_34 = ((MR_Word) ((MR_hl_field(1, Modes_16, 0))));
        Modes_35 = ((MR_Word) ((MR_hl_field(1, Modes_16, 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_34, HeadVar__4_4, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_1_41);
        if ((Modes_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_41;
        else
        {
          MR_Box STATE_VARIABLE_U_2_43;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_5;

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_1_41, &STATE_VARIABLE_U_2_43);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Modes_35;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_43;
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
          MR_Word Name_12 = ((MR_Word) ((MR_hl_field(0, InstName_9, 0))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, 1))));

          if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, S_10, STATE_VARIABLE_U_0_25, STATE_VARIABLE_U_26);
          else
          {
            MR_Box STATE_VARIABLE_U_2_28;
            MR_Box STATE_VARIABLE_U_3_30;
            MR_Box STATE_VARIABLE_U_4_31;

            parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_2_28);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "(", S_10, STATE_VARIABLE_U_2_28, &STATE_VARIABLE_U_3_30);
            parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Args_13, S_10, STATE_VARIABLE_U_3_30, &STATE_VARIABLE_U_4_31);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_4_31, STATE_VARIABLE_U_26);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_16 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_9, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_17 = ((MR_Unsigned) ((MR_hl_field(1, InstName_9, 0))) & (MR_Integer) 1);
          MR_Word InstA_18 = ((MR_Word) ((MR_hl_field(1, InstName_9, 1))));
          MR_Word InstB_19 = ((MR_Word) ((MR_hl_field(1, InstName_9, 2))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_6_37;
                MR_Box STATE_VARIABLE_U_7_38;
                MR_Box STATE_VARIABLE_U_8_39;
                MR_Word Var_40;
                MR_Box STATE_VARIABLE_U_9_41;
                MR_Word Var_42;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044unify(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_6_37);
                parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_16, S_10, STATE_VARIABLE_U_6_37, &STATE_VARIABLE_U_7_38);
                parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_pt_output_132, Real_17, S_10, STATE_VARIABLE_U_7_38, &STATE_VARIABLE_U_8_39);
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
                parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Var_40, S_10, STATE_VARIABLE_U_8_39, &STATE_VARIABLE_U_9_41);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_9_41, STATE_VARIABLE_U_26);
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
          MR_Word InstA_118 = ((MR_Word) ((MR_hl_field(2, InstName_9, 0))));
          MR_Word InstB_119 = ((MR_Word) ((MR_hl_field(2, InstName_9, 1))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_11_49;
                MR_Word Var_50;
                MR_Box STATE_VARIABLE_U_12_51;
                MR_Word Var_52;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044merge_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_11_49);
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
                parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Var_50, S_10, STATE_VARIABLE_U_11_49, &STATE_VARIABLE_U_12_51);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_12_51, STATE_VARIABLE_U_26);
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
        switch (((MR_Integer) ((MR_hl_field(3, InstName_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_20 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));
              MR_Word Uniq_21 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_120 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_121 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) & (MR_Integer) 1);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_14_59;
                    MR_Box STATE_VARIABLE_U_15_60;
                    MR_Box STATE_VARIABLE_U_16_62;
                    MR_Box STATE_VARIABLE_U_17_63;
                    MR_Box STATE_VARIABLE_U_18_65;
                    MR_Box STATE_VARIABLE_U_19_66;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044ground(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_14_59);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_20, S_10, STATE_VARIABLE_U_14_59, &STATE_VARIABLE_U_15_60);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_15_60, &STATE_VARIABLE_U_16_62);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_120, S_10, STATE_VARIABLE_U_16_62, &STATE_VARIABLE_U_17_63);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_21, (MR_String) "shared", S_10, STATE_VARIABLE_U_17_63, &STATE_VARIABLE_U_18_65);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_pt_output_132, Real_121, S_10, STATE_VARIABLE_U_18_65, &STATE_VARIABLE_U_19_66);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_19_66, STATE_VARIABLE_U_26);
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
              MR_Word IsLive_122 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_123 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) & (MR_Integer) 1);
              MR_Word SubInstName_124 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));
              MR_Word Uniq_125 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 2)) & (MR_Integer) 7);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_21_72;
                    MR_Box STATE_VARIABLE_U_22_73;
                    MR_Box STATE_VARIABLE_U_23_75;
                    MR_Box STATE_VARIABLE_U_24_76;
                    MR_Box STATE_VARIABLE_U_25_78;
                    MR_Box STATE_VARIABLE_U_26_79;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044any(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_21_72);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_124, S_10, STATE_VARIABLE_U_21_72, &STATE_VARIABLE_U_22_73);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_22_73, &STATE_VARIABLE_U_23_75);
                    parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_122, S_10, STATE_VARIABLE_U_23_75, &STATE_VARIABLE_U_24_76);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_125, (MR_String) "shared", S_10, STATE_VARIABLE_U_24_76, &STATE_VARIABLE_U_25_78);
                    parse_tree__parse_tree_out_inst__mercury_format_comma_real_4_p_0(TypeClassInfo_for_pt_output_132, Real_123, S_10, STATE_VARIABLE_U_25_78, &STATE_VARIABLE_U_26_79);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_26_79, STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_126 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_28_85;
                    MR_Box STATE_VARIABLE_U_29_86;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044shared_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_28_85);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_126, S_10, STATE_VARIABLE_U_28_85, &STATE_VARIABLE_U_29_86);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_29_86, STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_127 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_31_92;
                    MR_Box STATE_VARIABLE_U_32_93;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044mostly_uniq_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_31_92);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_127, S_10, STATE_VARIABLE_U_31_92, &STATE_VARIABLE_U_32_93);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_32_93, STATE_VARIABLE_U_26);
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
              MR_Word Uniqueness_22 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 1))) & (MR_Integer) 7);
              MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, InstName_9, 2))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeVarSet_24;
                    MR_Box STATE_VARIABLE_U_34_99;
                    MR_Box STATE_VARIABLE_U_35_101;
                    MR_Box STATE_VARIABLE_U_36_103;
                    MR_Box STATE_VARIABLE_U_37_105;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_ground(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_34_99);
                    parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_132, Uniqueness_22, (MR_String) "shared", S_10, STATE_VARIABLE_U_34_99, &STATE_VARIABLE_U_35_101);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_35_101, &STATE_VARIABLE_U_36_103);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_24);
                    parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_24, (MR_Integer) 0, Type_23, S_10, STATE_VARIABLE_U_36_103, &STATE_VARIABLE_U_37_105);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_37_105, STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_130 = ((MR_Word) ((MR_hl_field(3, InstName_9, 2))));
              MR_Word Type_131 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box STATE_VARIABLE_U_40_110;
                    MR_Box STATE_VARIABLE_U_41_112;
                    MR_Box STATE_VARIABLE_U_42_114;
                    MR_Box STATE_VARIABLE_U_43_115;
                    MR_Word TypeVarSet_128;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_inst(", S_10, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_40_110);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_128);
                    parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_128, (MR_Integer) 0, Type_131, S_10, STATE_VARIABLE_U_40_110, &STATE_VARIABLE_U_41_112);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", S_10, STATE_VARIABLE_U_41_112, &STATE_VARIABLE_U_42_114);
                    parse_tree__parse_tree_out_inst__mercury_format_inst_name_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_130, S_10, STATE_VARIABLE_U_42_114, &STATE_VARIABLE_U_43_115);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", S_10, STATE_VARIABLE_U_43_115, STATE_VARIABLE_U_26);
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
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Insts_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Box STATE_VARIABLE_U_1_23;

      parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_15, HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_23);
      if ((Insts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_23;
      else
      {
        MR_Box STATE_VARIABLE_U_2_25;
        MR_Word Inst_34;
        MR_Word Insts_35;
        MR_Box STATE_VARIABLE_U_1_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_2_25);
        Inst_34 = ((MR_Word) ((MR_hl_field(1, Insts_16, 0))));
        Insts_35 = ((MR_Word) ((MR_hl_field(1, Insts_16, 1))));
        parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_34, HeadVar__4_4, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_1_41);
        if ((Insts_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_41;
        else
        {
          MR_Box STATE_VARIABLE_U_2_43;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Word next_value_of_HeadVar__3_3;
          MR_Box next_value_of_STATE_VARIABLE_U_0_5;

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_1_41, &STATE_VARIABLE_U_2_43);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Insts_35;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_43;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_format_user_defined_mode_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
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
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (Name_14)), S_12, STATE_VARIABLE_U_0_17, STATE_VARIABLE_U_18);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_3_21;
        MR_Box STATE_VARIABLE_U_5_24;
        MR_Box STATE_VARIABLE_U_6_25;
        MR_String Name_28;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Name_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (Name_28)), S_12, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_3_21);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_3_21, &STATE_VARIABLE_U_5_24);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, ArgInsts_11, S_12, STATE_VARIABLE_U_5_24, &STATE_VARIABLE_U_6_25);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_6_25, STATE_VARIABLE_U_18);
      }
      break;
    case (MR_Integer) 0:
      if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_pt_output_29, SymName_10, S_12, STATE_VARIABLE_U_0_17, STATE_VARIABLE_U_18);
      else
      {
        MR_Box STATE_VARIABLE_U_3_34;
        MR_Box STATE_VARIABLE_U_5_36;
        MR_Box STATE_VARIABLE_U_6_37;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_29, SymName_10, S_12, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_3_34);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) "(")), S_12, STATE_VARIABLE_U_3_34, &STATE_VARIABLE_U_5_36);
        parse_tree__parse_tree_out_inst__mercury_format_inst_list_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, ArgInsts_11, S_12, STATE_VARIABLE_U_5_36, &STATE_VARIABLE_U_6_37);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_6_37, STATE_VARIABLE_U_18);
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
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 3))) & (MR_Integer) 7);
  MR_Box STATE_VARIABLE_U_3_32;
  MR_Box STATE_VARIABLE_U_6_38;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Box STATE_VARIABLE_U_1_28;
        MR_Box STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_28);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), S_12, STATE_VARIABLE_U_1_28, &STATE_VARIABLE_U_2_30);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_30, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Box STATE_VARIABLE_U_1_92;
        MR_Box STATE_VARIABLE_U_2_93;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_3(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_92);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), S_12, STATE_VARIABLE_U_1_92, &STATE_VARIABLE_U_2_93);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_93, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box STATE_VARIABLE_U_1_97;
        MR_Box STATE_VARIABLE_U_2_98;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_97);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_7(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), S_12, STATE_VARIABLE_U_1_97, &STATE_VARIABLE_U_2_98);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_98, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_1_102;
        MR_Box STATE_VARIABLE_U_2_103;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_9(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_102);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), S_12, STATE_VARIABLE_U_1_102, &STATE_VARIABLE_U_2_103);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_11(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_103, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_U_3_32 = STATE_VARIABLE_U_0_25;
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_Box STATE_VARIABLE_U_12_49;
        MR_Box STATE_VARIABLE_U_16_55;
        MR_Box STATE_VARIABLE_U_17_57;
        MR_String Var_58;
        MR_Box STATE_VARIABLE_U_18_59;
        MR_Box conv12_RetMode_21;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv12_RetMode_21);
        RetMode_21 = ((MR_Word) (conv12_RetMode_21));
        if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));

          func_13(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func = ")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_12_49);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_13_51;
          MR_Box STATE_VARIABLE_U_14_52;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func(")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_13_51);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, ArgModes_20, S_12, STATE_VARIABLE_U_13_51, &STATE_VARIABLE_U_14_52);
          func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          func_15(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), S_12, STATE_VARIABLE_U_14_52, &STATE_VARIABLE_U_12_49);
        }
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, S_12, STATE_VARIABLE_U_12_49, &STATE_VARIABLE_U_16_55);
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), S_12, STATE_VARIABLE_U_16_55, &STATE_VARIABLE_U_17_57);
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_17(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), S_12, STATE_VARIABLE_U_17_57, &STATE_VARIABLE_U_18_59);
        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_18_59, &STATE_VARIABLE_U_6_38);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_4_34;
        MR_String Var_35;
        MR_Box STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_19(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred is ")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_4_34);
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), S_12, STATE_VARIABLE_U_4_34, &STATE_VARIABLE_U_5_36);
        func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_21(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_5_36, &STATE_VARIABLE_U_6_38);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_7_40;
        MR_Box STATE_VARIABLE_U_8_41;
        MR_Box STATE_VARIABLE_U_9_43;
        MR_String Var_44;
        MR_Box STATE_VARIABLE_U_10_45;
        MR_Word Mode_81;
        MR_Word Modes_82;
        MR_Box STATE_VARIABLE_U_1_88;
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred(")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_7_40);
        Mode_81 = ((MR_Word) ((MR_hl_field(1, Modes_15, 0))));
        Modes_82 = ((MR_Word) ((MR_hl_field(1, Modes_15, 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, S_12, STATE_VARIABLE_U_7_40, &STATE_VARIABLE_U_1_88);
        if ((Modes_82 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_8_41 = STATE_VARIABLE_U_1_88;
        else
        {
          MR_Box STATE_VARIABLE_U_2_90;
          void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));

          func_23(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_1_88, &STATE_VARIABLE_U_2_90);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, S_12, STATE_VARIABLE_U_2_90, &STATE_VARIABLE_U_8_41);
        }
        func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_24(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), S_12, STATE_VARIABLE_U_8_41, &STATE_VARIABLE_U_9_43);
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), S_12, STATE_VARIABLE_U_9_43, &STATE_VARIABLE_U_10_45);
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_26(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_10_45, &STATE_VARIABLE_U_6_38);
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_6_38;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, 0))));
    MR_Box STATE_VARIABLE_U_20_63;
    MR_Box STATE_VARIABLE_U_21_64;
    void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), S_12, STATE_VARIABLE_U_6_38, &STATE_VARIABLE_U_20_63);
    parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, S_12, STATE_VARIABLE_U_20_63, &STATE_VARIABLE_U_21_64);
    func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    func_28(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), S_12, STATE_VARIABLE_U_21_64, STATE_VARIABLE_U_26);
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
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 3))) & (MR_Integer) 7);
  MR_Box STATE_VARIABLE_U_3_32;
  MR_Box STATE_VARIABLE_U_6_38;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Box STATE_VARIABLE_U_1_28;
        MR_Box STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_28);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), S_12, STATE_VARIABLE_U_1_28, &STATE_VARIABLE_U_2_30);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_30, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Box STATE_VARIABLE_U_1_109;
        MR_Box STATE_VARIABLE_U_2_110;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_3(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_109);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), S_12, STATE_VARIABLE_U_1_109, &STATE_VARIABLE_U_2_110);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_5(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_110, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box STATE_VARIABLE_U_1_114;
        MR_Box STATE_VARIABLE_U_2_115;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_114);
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_7(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), S_12, STATE_VARIABLE_U_1_114, &STATE_VARIABLE_U_2_115);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_115, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_1_119;
        MR_Box STATE_VARIABLE_U_2_120;
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_9(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), S_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_1_119);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), S_12, STATE_VARIABLE_U_1_119, &STATE_VARIABLE_U_2_120);
        func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_11(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), S_12, STATE_VARIABLE_U_2_120, &STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_U_3_32 = STATE_VARIABLE_U_0_25;
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_Box STATE_VARIABLE_U_12_49;
        MR_Box STATE_VARIABLE_U_16_55;
        MR_Box STATE_VARIABLE_U_17_57;
        MR_String Var_58;
        MR_Box STATE_VARIABLE_U_18_59;
        MR_Box conv12_RetMode_21;
        void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv12_RetMode_21);
        RetMode_21 = ((MR_Word) (conv12_RetMode_21));
        if ((ArgModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));

          func_13(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((func) = ")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_12_49);
        }
        else
        {
          MR_Box STATE_VARIABLE_U_13_51;
          MR_Box STATE_VARIABLE_U_14_52;
          MR_Word Mode_81;
          MR_Word Modes_82;
          MR_Box STATE_VARIABLE_U_1_88;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(func(")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_13_51);
          Mode_81 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, 0))));
          Modes_82 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, 1))));
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, S_12, STATE_VARIABLE_U_13_51, &STATE_VARIABLE_U_1_88);
          if ((Modes_82 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_14_52 = STATE_VARIABLE_U_1_88;
          else
          {
            MR_Box STATE_VARIABLE_U_2_90;
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));

            func_15(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_1_88, &STATE_VARIABLE_U_2_90);
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, S_12, STATE_VARIABLE_U_2_90, &STATE_VARIABLE_U_14_52);
          }
          func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), S_12, STATE_VARIABLE_U_14_52, &STATE_VARIABLE_U_12_49);
        }
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, S_12, STATE_VARIABLE_U_12_49, &STATE_VARIABLE_U_16_55);
        func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_17(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), S_12, STATE_VARIABLE_U_16_55, &STATE_VARIABLE_U_17_57);
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), S_12, STATE_VARIABLE_U_17_57, &STATE_VARIABLE_U_18_59);
        func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_19(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_18_59, &STATE_VARIABLE_U_6_38);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_4_34;
        MR_String Var_35;
        MR_Box STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((pred) is ")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_4_34);
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_21(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), S_12, STATE_VARIABLE_U_4_34, &STATE_VARIABLE_U_5_36);
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_5_36, &STATE_VARIABLE_U_6_38);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_7_40;
        MR_Box STATE_VARIABLE_U_8_41;
        MR_Box STATE_VARIABLE_U_9_43;
        MR_String Var_44;
        MR_Box STATE_VARIABLE_U_10_45;
        MR_Word Mode_98;
        MR_Word Modes_99;
        MR_Box STATE_VARIABLE_U_1_105;
        void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_23(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(pred(")), S_12, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_7_40);
        Mode_98 = ((MR_Word) ((MR_hl_field(1, Modes_15, 0))));
        Modes_99 = ((MR_Word) ((MR_hl_field(1, Modes_15, 1))));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_98, S_12, STATE_VARIABLE_U_7_40, &STATE_VARIABLE_U_1_105);
        if ((Modes_99 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_8_41 = STATE_VARIABLE_U_1_105;
        else
        {
          MR_Box STATE_VARIABLE_U_2_107;
          void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));

          func_24(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), S_12, STATE_VARIABLE_U_1_105, &STATE_VARIABLE_U_2_107);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_99, S_12, STATE_VARIABLE_U_2_107, &STATE_VARIABLE_U_8_41);
        }
        func_25 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), S_12, STATE_VARIABLE_U_8_41, &STATE_VARIABLE_U_9_43);
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_26(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), S_12, STATE_VARIABLE_U_9_43, &STATE_VARIABLE_U_10_45);
        func_27 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), S_12, STATE_VARIABLE_U_10_45, &STATE_VARIABLE_U_6_38);
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_6_38;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, 0))));
    MR_Box STATE_VARIABLE_U_20_63;
    MR_Box STATE_VARIABLE_U_21_64;
    void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_28(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), S_12, STATE_VARIABLE_U_6_38, &STATE_VARIABLE_U_20_63);
    parse_tree__parse_tree_out_inst__mercury_format_arg_reg_list_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, S_12, STATE_VARIABLE_U_20_63, &STATE_VARIABLE_U_21_64);
    func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    func_29(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), S_12, STATE_VARIABLE_U_21_64, STATE_VARIABLE_U_26);
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
      MR_Word Reg_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Regs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Box STATE_VARIABLE_U_1_18;

      switch (Reg_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

            func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_1_18);
          }
          break;
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

            func_1(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), HeadVar__2_2, STATE_VARIABLE_U_0_3, &STATE_VARIABLE_U_1_18);
          }
          break;
      }
      if ((Regs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_1_18;
      else
      {
        MR_Box STATE_VARIABLE_U_3_22;
        MR_Word Reg_27;
        MR_Word Regs_28;
        MR_Box STATE_VARIABLE_U_1_35;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_1_18, &STATE_VARIABLE_U_3_22);
        Reg_27 = ((MR_Word) ((MR_hl_field(1, Regs_10, 0))));
        Regs_28 = ((MR_Word) ((MR_hl_field(1, Regs_10, 1))));
        switch (Reg_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

              func_3(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), HeadVar__2_2, STATE_VARIABLE_U_3_22, &STATE_VARIABLE_U_1_35);
            }
            break;
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

              func_4(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), HeadVar__2_2, STATE_VARIABLE_U_3_22, &STATE_VARIABLE_U_1_35);
            }
            break;
        }
        if ((Regs_28 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_1_35;
        else
        {
          MR_Box STATE_VARIABLE_U_3_38;
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
          MR_Word next_value_of_HeadVar__1_1;
          MR_Box next_value_of_STATE_VARIABLE_U_0_3;

          func_5(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), HeadVar__2_2, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_3_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Regs_28;
          next_value_of_STATE_VARIABLE_U_0_3 = STATE_VARIABLE_U_3_38;
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
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) ", fake")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));

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
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
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
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "dead, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));

        func_1(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "live, ")), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__mercury_output_inst_list_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Insts_10)
{
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[3]), Lang_8, InstVarSet_9, Insts_10, Stream_7);
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_101_100_95_105_110_115_116_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27,
  MR_Word tscc_proc_1_input_2_Lang_8,
  MR_Word tscc_proc_1_input_3_InstVarSet_9,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15,
  MR_Word tscc_proc_1_input_5_Inst_11,
  MR_Word tscc_proc_1_input_6_S_12)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
  MR_Word tscc_proc_2_input_2_Lang_7;
  MR_Word tscc_proc_2_input_3_InstVarSet_8;
  MR_Word tscc_proc_2_input_4_Inst_9;
  MR_Word tscc_proc_2_input_5_S_10;

  // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_constrained_inst_vars__[S = io.text_output_stream, U = io.state]_0_1/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_constrained_inst_vars__[S = io.text_output_stream, U = io.state]_0_1/7-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_inst__[S = io.text_output_stream, U = io.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_27 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
    MR_Word Lang_8 = tscc_proc_1_input_2_Lang_8;
    MR_Word InstVarSet_9 = tscc_proc_1_input_3_InstVarSet_9;
    MR_Word STATE_VARIABLE_Vars_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
    MR_Word Inst_11 = tscc_proc_1_input_5_Inst_11;
    MR_Word S_12 = tscc_proc_1_input_6_S_12;
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_Vars_1_18;
    MR_Box conv0_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv0_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_1_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv0_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      MR_Box conv2_STATE_VARIABLE_U_1_20;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_U_3_24;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_17;

      func_1(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_1_20);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, S_12);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_3(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_3_24);
      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_101_100_95_105_110_115_116_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_1_18, Inst_11, S_12);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_5(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_17);
    }
    else
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = TypeClassInfo_for_pt_output_27;
      MR_Word next_value_of_tscc_proc_2_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_2_input_4_Inst_9 = Inst_11;
      MR_Word next_value_of_tscc_proc_2_input_5_S_10 = S_12;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
      tscc_proc_2_input_2_Lang_7 = next_value_of_tscc_proc_2_input_2_Lang_7;
      tscc_proc_2_input_3_InstVarSet_8 = next_value_of_tscc_proc_2_input_3_InstVarSet_8;
      tscc_proc_2_input_4_Inst_9 = next_value_of_tscc_proc_2_input_4_Inst_9;
      tscc_proc_2_input_5_S_10 = next_value_of_tscc_proc_2_input_5_S_10;
      goto top_of_proc_2;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_48 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
    MR_Word Lang_7 = tscc_proc_2_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_2_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_2_input_4_Inst_9;
    MR_Word S_10 = tscc_proc_2_input_5_S_10;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv16_STATE_VARIABLE_U_22;

              func_15(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv20_STATE_VARIABLE_U_22;

              func_19(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, 1))));

          if ((HOInstInfo_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_57;
            void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv18_STATE_VARIABLE_U_22;

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
            func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
            func_17(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_57)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_22);
          }
          else
          {
            MR_Word PredInstInfo_44 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_47), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_46, PredInstInfo_44, S_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, 2))));
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, 0))) & (MR_Integer) 7);
          MR_String Var_51;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_STATE_VARIABLE_U_4_28;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv12_STATE_VARIABLE_U_5_30;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_U_22;

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
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_9(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_4_28);
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_11(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_5_30);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundFunctors_16, S_10);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_13(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_22);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, S_10);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = TypeClassInfo_for_pt_output_48;
              MR_Word next_value_of_tscc_proc_1_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = Vars_18;
              MR_Word next_value_of_tscc_proc_1_input_5_Inst_11 = CInst_19;
              MR_Word next_value_of_tscc_proc_1_input_6_S_12 = S_10;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
              tscc_proc_1_input_2_Lang_8 = next_value_of_tscc_proc_1_input_2_Lang_8;
              tscc_proc_1_input_3_InstVarSet_9 = next_value_of_tscc_proc_1_input_3_InstVarSet_9;
              tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_1_input_5_Inst_11 = next_value_of_tscc_proc_1_input_5_Inst_11;
              tscc_proc_1_input_6_S_12 = next_value_of_tscc_proc_1_input_6_S_12;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[5 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
                MR_Box conv8_STATE_VARIABLE_U_22;

                func_7(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_50)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_22);
              }
              else
              {
                MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, S_10);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_48, InstVarSet_8, (MR_Integer) 0, Var_17, S_10);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48,
  MR_Word tscc_proc_2_input_2_Lang_7,
  MR_Word tscc_proc_2_input_3_InstVarSet_8,
  MR_Word tscc_proc_2_input_4_Inst_9,
  MR_Word tscc_proc_2_input_5_S_10)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
  MR_Word tscc_proc_1_input_2_Lang_8;
  MR_Word tscc_proc_1_input_3_InstVarSet_9;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
  MR_Word tscc_proc_1_input_5_Inst_11;
  MR_Word tscc_proc_1_input_6_S_12;

  // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_inst__[S = io.text_output_stream, U = io.state]_0_1/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_constrained_inst_vars__[S = io.text_output_stream, U = io.state]_0_1/7-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_inst__[S = io.text_output_stream, U = io.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_27 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
    MR_Word Lang_8 = tscc_proc_1_input_2_Lang_8;
    MR_Word InstVarSet_9 = tscc_proc_1_input_3_InstVarSet_9;
    MR_Word STATE_VARIABLE_Vars_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
    MR_Word Inst_11 = tscc_proc_1_input_5_Inst_11;
    MR_Word S_12 = tscc_proc_1_input_6_S_12;
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_Vars_1_18;
    MR_Box conv0_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv0_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_1_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv0_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      MR_Box conv2_STATE_VARIABLE_U_1_20;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_U_3_24;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_17;

      func_1(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_1_20);
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, S_12);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_3(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_3_24);
      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_101_100_95_105_110_115_116_95_118_97_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_1_18, Inst_11, S_12);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_5(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_17);
    }
    else
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = TypeClassInfo_for_pt_output_27;
      MR_Word next_value_of_tscc_proc_2_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_2_input_4_Inst_9 = Inst_11;
      MR_Word next_value_of_tscc_proc_2_input_5_S_10 = S_12;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
      tscc_proc_2_input_2_Lang_7 = next_value_of_tscc_proc_2_input_2_Lang_7;
      tscc_proc_2_input_3_InstVarSet_8 = next_value_of_tscc_proc_2_input_3_InstVarSet_8;
      tscc_proc_2_input_4_Inst_9 = next_value_of_tscc_proc_2_input_4_Inst_9;
      tscc_proc_2_input_5_S_10 = next_value_of_tscc_proc_2_input_5_S_10;
      goto top_of_proc_2;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_48 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
    MR_Word Lang_7 = tscc_proc_2_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_2_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_2_input_4_Inst_9;
    MR_Word S_10 = tscc_proc_2_input_5_S_10;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv16_STATE_VARIABLE_U_22;

              func_15(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv20_STATE_VARIABLE_U_22;

              func_19(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, 1))));

          if ((HOInstInfo_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_57;
            void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv18_STATE_VARIABLE_U_22;

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
            func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
            func_17(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_57)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_22);
          }
          else
          {
            MR_Word PredInstInfo_44 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_47), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_46, PredInstInfo_44, S_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, 2))));
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, 0))) & (MR_Integer) 7);
          MR_String Var_51;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_STATE_VARIABLE_U_4_28;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv12_STATE_VARIABLE_U_5_30;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_U_22;

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
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_9(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_4_28);
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_11(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_5_30);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundFunctors_16, S_10);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_13(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_22);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, S_10);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = TypeClassInfo_for_pt_output_48;
              MR_Word next_value_of_tscc_proc_1_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = Vars_18;
              MR_Word next_value_of_tscc_proc_1_input_5_Inst_11 = CInst_19;
              MR_Word next_value_of_tscc_proc_1_input_6_S_12 = S_10;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
              tscc_proc_1_input_2_Lang_8 = next_value_of_tscc_proc_1_input_2_Lang_8;
              tscc_proc_1_input_3_InstVarSet_9 = next_value_of_tscc_proc_1_input_3_InstVarSet_9;
              tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_1_input_5_Inst_11 = next_value_of_tscc_proc_1_input_5_Inst_11;
              tscc_proc_1_input_6_S_12 = next_value_of_tscc_proc_1_input_6_S_12;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[5 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
                MR_Box conv8_STATE_VARIABLE_U_22;

                func_7(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_50)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_22);
              }
              else
              {
                MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, S_10);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_48, InstVarSet_8, (MR_Integer) 0, Var_17, S_10);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_41,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word Mode0_9,
  MR_Word S_10)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Mode0_9)) == (MR_Integer) 0))
  {
    MR_Word FromInst0_12 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 0))));
    MR_Word ToInst0_13 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 1))));

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_15;

          succeeded = ((MR_tag((MR_Word) FromInst0_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            HOInstInfo_15 = ((MR_Word) ((MR_hl_field(1, FromInst0_12, 1))));
            succeeded = (HOInstInfo_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ToInst0_13, FromInst0_12);
          }
          if (succeeded)
            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst0_12, S_10);
          else
          {
            MR_Word Mode1_20;

            parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst0_12, ToInst0_13, &Mode1_20);
            if (((MR_tag((MR_Word) Mode1_20)) == (MR_Integer) 0))
            {
              MR_Word FromInst1_21 = ((MR_Word) ((MR_hl_field(0, Mode1_20, 0))));
              MR_Word ToInst1_22 = ((MR_Word) ((MR_hl_field(0, Mode1_20, 1))));
              MR_Word FromInst_23;
              MR_Word ToInst_24;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv1_STATE_VARIABLE_U_1_44;
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv3_STATE_VARIABLE_U_3_47;
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv5_STATE_VARIABLE_U_28;

              parse_tree__prog_mode__strip_module_names_from_inst_4_p_0((MR_Integer) 0, (MR_Integer) 0, FromInst1_21, &FromInst_23);
              parse_tree__prog_mode__strip_module_names_from_inst_4_p_0((MR_Integer) 0, (MR_Integer) 0, ToInst1_22, &ToInst_24);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
              func_0(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_44);
              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst_23, S_10);
              func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
              func_2(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) " >> ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_3_47);
              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, ToInst_24, S_10);
              func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
              func_4(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_28);
            }
            else
            {
              MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(1, Mode1_20, 0))));
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(1, Mode1_20, 1))));

              if ((ArgInsts_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Name_50;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv7_STATE_VARIABLE_U_28;

                Name_50 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_6(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) (Name_50)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_28);
              }
              else
              {
                MR_String Name_58;
                MR_Word Inst_89;
                MR_Word Insts_90;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv9_STATE_VARIABLE_U_3_53;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_5_55;
                void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv15_STATE_VARIABLE_U_28;

                Name_58 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_8(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) (Name_58)), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_3_53);
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_5_55);
                Inst_89 = ((MR_Word) ((MR_hl_field(1, ArgInsts_26, 0))));
                Insts_90 = ((MR_Word) ((MR_hl_field(1, ArgInsts_26, 1))));
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, Inst_89, S_10);
                if (!((Insts_90 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                  MR_Box conv13_STATE_VARIABLE_U_2_98;

                  func_12(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_2_98);
                  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, Insts_90, S_10);
                }
                func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_14(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_28);
              }
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
          MR_Box conv17_STATE_VARIABLE_U_1_76;
          void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv19_STATE_VARIABLE_U_3_79;
          void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv21_STATE_VARIABLE_U_28;

          func_16(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_1_76);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst0_12, S_10);
          func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
          func_18(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) " >> ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_3_79);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, ToInst0_13, S_10);
          func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
          func_20(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_28);
        }
        break;
    }
  }
  else
  {
    MR_Word SymName_39 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 0))));
    MR_Word ArgInsts_40 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 1))));

    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, SymName_39, ArgInsts_40, S_10);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word BoundFunctor_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_15, 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_15, 1))));

      if ((Args_20 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 0, ConsId_19, HeadVar__4_4);
      else
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_3_32;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_1_28;

        parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 1, ConsId_19, HeadVar__4_4);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_3_32);
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, InstVarSet_2, Args_20, HeadVar__4_4);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_1_28);
      }
      if (!((BoundFunctors_16 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        MR_Box conv5_STATE_VARIABLE_U_6_37;
        MR_Word next_value_of_HeadVar__3_3;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " ; ")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_6_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = BoundFunctors_16;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Insts_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));

      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_15, HeadVar__4_4);
      if (!((Insts_16 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Inst_34;
        MR_Word Insts_35;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_2_25;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_25);
        Inst_34 = ((MR_Word) ((MR_hl_field(1, Insts_16, 0))));
        Insts_35 = ((MR_Word) ((MR_hl_field(1, Insts_16, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_34, HeadVar__4_4);
        if (!((Insts_35 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Box conv3_STATE_VARIABLE_U_2_43;
          MR_Word next_value_of_HeadVar__3_3;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_43);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Insts_35;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_132,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word InstName_9,
  MR_Word S_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_12 = ((MR_Word) ((MR_hl_field(0, InstName_9, 0))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, 1))));

          if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, S_10);
          else
          {
            MR_Word Inst_210;
            MR_Word Insts_211;
            MR_Box conv24_STATE_VARIABLE_U_3_30;
            MR_Box conv27_STATE_VARIABLE_U_26;

            parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, S_10);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_U_3_30);
            Inst_210 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
            Insts_211 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Inst_210, S_10);
            if (!((Insts_211 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_132, 0)), 6))));
              MR_Box conv26_STATE_VARIABLE_U_2_219;

              func_25(((MR_Box) (TypeClassInfo_for_pt_output_132)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_2_219);
              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Insts_211, S_10);
            }
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_26);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_16 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_9, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_17 = ((MR_Unsigned) ((MR_hl_field(1, InstName_9, 0))) & (MR_Integer) 1);
          MR_Word InstA_18 = ((MR_Word) ((MR_hl_field(1, InstName_9, 1))));
          MR_Word InstB_19 = ((MR_Word) ((MR_hl_field(1, InstName_9, 2))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Insts_177;
                MR_Word Inst_193;
                MR_Box conv20_STATE_VARIABLE_U_6_37;
                void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv22_STATE_VARIABLE_U_2_185;
                MR_Box conv23_STATE_VARIABLE_U_26;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044unify(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_U_6_37);
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_16, S_10);
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Real_17, S_10);
                {
                  Insts_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Insts_177, 0) = ((MR_Box) (InstB_19));
                  MR_hl_field(1, Insts_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, InstA_18, S_10);
                func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_132, 0)), 6))));
                func_21(((MR_Box) (TypeClassInfo_for_pt_output_132)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_U_2_185);
                Inst_193 = ((MR_Word) ((MR_hl_field(1, Insts_177, 0))));
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Inst_193, S_10);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_26);
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
          MR_Word InstA_118 = ((MR_Word) ((MR_hl_field(2, InstName_9, 0))));
          MR_Word InstB_119 = ((MR_Word) ((MR_hl_field(2, InstName_9, 1))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Insts_143;
                MR_Word Inst_159;
                MR_Box conv6_STATE_VARIABLE_U_11_49;
                void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv8_STATE_VARIABLE_U_2_151;
                MR_Box conv9_STATE_VARIABLE_U_26;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044merge_inst(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_11_49);
                {
                  Insts_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Insts_143, 0) = ((MR_Box) (InstB_119));
                  MR_hl_field(1, Insts_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, InstA_118, S_10);
                func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_132, 0)), 6))));
                func_7(((MR_Box) (TypeClassInfo_for_pt_output_132)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_2_151);
                Inst_159 = ((MR_Word) ((MR_hl_field(1, Insts_143, 0))));
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Inst_159, S_10);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_26);
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
        switch (((MR_Integer) ((MR_hl_field(3, InstName_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_20 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));
              MR_Word Uniq_21 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_120 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_121 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) & (MR_Integer) 1);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box conv3_STATE_VARIABLE_U_14_59;
                    MR_Box conv4_STATE_VARIABLE_U_16_62;
                    MR_Box conv5_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044ground(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_14_59);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_20, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_16_62);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_120, S_10);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_21, (MR_String) "shared", S_10);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Real_121, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_26);
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
              MR_Word IsLive_122 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_123 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) & (MR_Integer) 1);
              MR_Word SubInstName_124 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));
              MR_Word Uniq_125 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 2)) & (MR_Integer) 7);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box conv0_STATE_VARIABLE_U_21_72;
                    MR_Box conv1_STATE_VARIABLE_U_23_75;
                    MR_Box conv2_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044any(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_21_72);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_124, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_23_75);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_122, S_10);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_125, (MR_String) "shared", S_10);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Real_123, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_126 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box conv12_STATE_VARIABLE_U_28_85;
                    MR_Box conv13_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044shared_inst(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_28_85);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_126, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_127 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box conv10_STATE_VARIABLE_U_31_92;
                    MR_Box conv11_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044mostly_uniq_inst(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_31_92);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_127, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_26);
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
              MR_Word Uniqueness_22 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 1))) & (MR_Integer) 7);
              MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, InstName_9, 2))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeVarSet_24;
                    MR_Box conv14_STATE_VARIABLE_U_34_99;
                    MR_Box conv15_STATE_VARIABLE_U_36_103;
                    MR_Box conv16_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_ground(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_U_34_99);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_132, Uniqueness_22, (MR_String) "shared", S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_36_103);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_24);
                    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_24, (MR_Integer) 0, Type_23, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_26);
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
              MR_Word SubInstName_130 = ((MR_Word) ((MR_hl_field(3, InstName_9, 2))));
              MR_Word Type_131 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeVarSet_128;
                    MR_Box conv17_STATE_VARIABLE_U_40_110;
                    MR_Box conv18_STATE_VARIABLE_U_42_114;
                    MR_Box conv19_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_inst(", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_40_110);
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_128);
                    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_128, (MR_Integer) 0, Type_131, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_42_114);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_130, S_10);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) (S_10)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_26);
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
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Mode_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));

      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_15, HeadVar__4_4);
      if (!((Modes_16 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Mode_34;
        MR_Word Modes_35;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_2_25;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_25);
        Mode_34 = ((MR_Word) ((MR_hl_field(1, Modes_16, 0))));
        Modes_35 = ((MR_Word) ((MR_hl_field(1, Modes_16, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_34, HeadVar__4_4);
        if (!((Modes_35 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Box conv3_STATE_VARIABLE_U_2_43;
          MR_Word next_value_of_HeadVar__3_3;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__4_4)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_43);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Modes_35;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_66,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Word S_12)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 3))) & (MR_Integer) 7);

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_1_28;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_3_32;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_28);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_30);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 4:
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv7_STATE_VARIABLE_U_1_92;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_2_93;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv11_STATE_VARIABLE_U_3_32;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_1_92);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_2_93);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv13_STATE_VARIABLE_U_1_97;
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv15_STATE_VARIABLE_U_2_98;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv17_STATE_VARIABLE_U_3_32;

        func_12(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_1_97);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_2_98);
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv19_STATE_VARIABLE_U_1_102;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv21_STATE_VARIABLE_U_2_103;
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv23_STATE_VARIABLE_U_3_32;

        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_1_102);
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_2_103);
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_String Var_58;
        MR_Box conv24_RetMode_21;
        void MR_CALL (* func_31)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv32_STATE_VARIABLE_U_17_57;
        void MR_CALL (* func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv34_STATE_VARIABLE_U_18_59;
        void MR_CALL (* func_35)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv36_STATE_VARIABLE_U_6_38;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv24_RetMode_21);
        RetMode_21 = ((MR_Word) (conv24_RetMode_21));
        if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv26_STATE_VARIABLE_U_12_49;

          func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func = ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_12_49);
        }
        else
        {
          void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv28_STATE_VARIABLE_U_13_51;
          void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv30_STATE_VARIABLE_U_12_49;

          func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_U_13_51);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, ArgModes_20, S_12);
          func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          func_29(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_U_12_49);
        }
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, S_12);
        func_31 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_31(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_U_17_57);
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_33 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_33(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_U_18_59);
        func_35 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_35(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_U_6_38);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_35;
        void MR_CALL (* func_37)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv38_STATE_VARIABLE_U_4_34;
        void MR_CALL (* func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv40_STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_41)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv42_STATE_VARIABLE_U_6_38;

        func_37(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred is ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_U_4_34);
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_39 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_39(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_U_5_36);
        func_41 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_41(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv42_STATE_VARIABLE_U_6_38);
      }
      else
      {
        MR_String Var_44;
        MR_Word Mode_81;
        MR_Word Modes_82;
        void MR_CALL (* func_43)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv44_STATE_VARIABLE_U_7_40;
        void MR_CALL (* func_47)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv48_STATE_VARIABLE_U_9_43;
        void MR_CALL (* func_49)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv50_STATE_VARIABLE_U_10_45;
        void MR_CALL (* func_51)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv52_STATE_VARIABLE_U_6_38;

        func_43(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv44_STATE_VARIABLE_U_7_40);
        Mode_81 = ((MR_Word) ((MR_hl_field(1, Modes_15, 0))));
        Modes_82 = ((MR_Word) ((MR_hl_field(1, Modes_15, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, S_12);
        if (!((Modes_82 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_45)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv46_STATE_VARIABLE_U_2_90;

          func_45(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv46_STATE_VARIABLE_U_2_90);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, S_12);
        }
        func_47 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_47(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv48_STATE_VARIABLE_U_9_43);
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_49 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_49(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv50_STATE_VARIABLE_U_10_45);
        func_51 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_51(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv52_STATE_VARIABLE_U_6_38);
      }
      break;
  }
  if (!((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, 0))));
    void MR_CALL (* func_53)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    MR_Box conv54_STATE_VARIABLE_U_20_63;
    void MR_CALL (* func_55)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv56_STATE_VARIABLE_U_26;

    func_53(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv54_STATE_VARIABLE_U_20_63);
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, S_12);
    func_55 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    func_55(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv56_STATE_VARIABLE_U_26);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_66,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Word S_12)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 3))) & (MR_Integer) 7);

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_1_28;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_3_32;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_28);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_30);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 4:
      {
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv7_STATE_VARIABLE_U_1_109;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_2_110;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv11_STATE_VARIABLE_U_3_32;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_1_109);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_2_110);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 2:
      {
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv13_STATE_VARIABLE_U_1_114;
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv15_STATE_VARIABLE_U_2_115;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv17_STATE_VARIABLE_U_3_32;

        func_12(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_1_114);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_2_115);
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv19_STATE_VARIABLE_U_1_119;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv21_STATE_VARIABLE_U_2_120;
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv23_STATE_VARIABLE_U_3_32;

        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_1_119);
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_2_120);
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_3_32);
      }
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_String Var_58;
        MR_Box conv24_RetMode_21;
        void MR_CALL (* func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv34_STATE_VARIABLE_U_17_57;
        void MR_CALL (* func_35)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv36_STATE_VARIABLE_U_18_59;
        void MR_CALL (* func_37)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv38_STATE_VARIABLE_U_6_38;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv24_RetMode_21);
        RetMode_21 = ((MR_Word) (conv24_RetMode_21));
        if ((ArgModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv26_STATE_VARIABLE_U_12_49;

          func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((func) = ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_U_12_49);
        }
        else
        {
          MR_Word Mode_81;
          MR_Word Modes_82;
          void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv28_STATE_VARIABLE_U_13_51;
          void MR_CALL (* func_31)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv32_STATE_VARIABLE_U_12_49;

          func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(func(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv28_STATE_VARIABLE_U_13_51);
          Mode_81 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, 0))));
          Modes_82 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, 1))));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, S_12);
          if (!((Modes_82 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
            MR_Box conv30_STATE_VARIABLE_U_2_90;

            func_29(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv30_STATE_VARIABLE_U_2_90);
            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, S_12);
          }
          func_31 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          func_31(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv32_STATE_VARIABLE_U_12_49);
        }
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, S_12);
        func_33 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_33(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv34_STATE_VARIABLE_U_17_57);
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_35 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_35(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_U_18_59);
        func_37 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_37(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv38_STATE_VARIABLE_U_6_38);
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_35;
        void MR_CALL (* func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv40_STATE_VARIABLE_U_4_34;
        void MR_CALL (* func_41)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv42_STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_43)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv44_STATE_VARIABLE_U_6_38;

        func_39(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((pred) is ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv40_STATE_VARIABLE_U_4_34);
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_41 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_41(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv42_STATE_VARIABLE_U_5_36);
        func_43 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_43(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv44_STATE_VARIABLE_U_6_38);
      }
      else
      {
        MR_String Var_44;
        MR_Word Mode_98;
        MR_Word Modes_99;
        void MR_CALL (* func_45)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv46_STATE_VARIABLE_U_7_40;
        void MR_CALL (* func_49)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv50_STATE_VARIABLE_U_9_43;
        void MR_CALL (* func_51)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv52_STATE_VARIABLE_U_10_45;
        void MR_CALL (* func_53)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv54_STATE_VARIABLE_U_6_38;

        func_45(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(pred(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv46_STATE_VARIABLE_U_7_40);
        Mode_98 = ((MR_Word) ((MR_hl_field(1, Modes_15, 0))));
        Modes_99 = ((MR_Word) ((MR_hl_field(1, Modes_15, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_98, S_12);
        if (!((Modes_99 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_47)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv48_STATE_VARIABLE_U_2_107;

          func_47(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv48_STATE_VARIABLE_U_2_107);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_99, S_12);
        }
        func_49 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_49(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv50_STATE_VARIABLE_U_9_43);
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_51 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_51(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv52_STATE_VARIABLE_U_10_45);
        func_53 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_53(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv54_STATE_VARIABLE_U_6_38);
      }
      break;
  }
  if (!((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, 0))));
    void MR_CALL (* func_55)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    MR_Box conv56_STATE_VARIABLE_U_20_63;
    void MR_CALL (* func_57)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv58_STATE_VARIABLE_U_26;

    func_55(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv56_STATE_VARIABLE_U_20_63);
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, S_12);
    func_57 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    func_57(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv58_STATE_VARIABLE_U_26);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word SymName_10,
  MR_Word ArgInsts_11,
  MR_Word S_12)
{
  switch (Lang_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Name_14;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_18;

        Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (Name_14)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_18);
      }
      else
      {
        MR_String Name_28;
        MR_Word Inst_53;
        MR_Word Insts_54;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_3_21;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_5_24;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_18;

        Name_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (Name_28)), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_3_21);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_5_24);
        Inst_53 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 0))));
        Insts_54 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Inst_53, S_12);
        if (!((Insts_54 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
          MR_Box conv7_STATE_VARIABLE_U_2_62;

          func_6(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_2_62);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Insts_54, S_12);
        }
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_18);
      }
      break;
    case (MR_Integer) 0:
      if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_29, SymName_10, S_12);
      else
      {
        MR_Word Inst_70;
        MR_Word Insts_71;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv11_STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv15_STATE_VARIABLE_U_18;

        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_29, SymName_10, S_12);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_5_36);
        Inst_70 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 0))));
        Insts_71 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Inst_70, S_12);
        if (!((Insts_71 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
          MR_Box conv13_STATE_VARIABLE_U_2_79;

          func_12(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_2_79);
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Insts_71, S_12);
        }
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_12)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_18);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Word S_6)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_9;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) ", fake")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_9;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) ", real")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word IsLive_5,
  MR_Word S_6)
{
  switch (IsLive_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_9;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "dead, ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_9);
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_9;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "live, ")), ((MR_Box) (S_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Uniq_6,
  MR_String SharedStr_7,
  MR_Word S_8)
{
  MR_String Var_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_11;

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
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) (Var_12)), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_11);
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Reg_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Regs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      switch (Reg_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
            MR_Box conv1_STATE_VARIABLE_U_1_18;

            func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), ((MR_Box) (HeadVar__2_2)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_18);
          }
          break;
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
            MR_Box conv3_STATE_VARIABLE_U_1_18;

            func_2(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), ((MR_Box) (HeadVar__2_2)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_1_18);
          }
          break;
      }
      if (!((Regs_10 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Reg_27;
        MR_Word Regs_28;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
        MR_Box conv5_STATE_VARIABLE_U_3_22;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__2_2)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_3_22);
        Reg_27 = ((MR_Word) ((MR_hl_field(1, Regs_10, 0))));
        Regs_28 = ((MR_Word) ((MR_hl_field(1, Regs_10, 1))));
        switch (Reg_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
              MR_Box conv7_STATE_VARIABLE_U_1_35;

              func_6(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), ((MR_Box) (HeadVar__2_2)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_1_35);
            }
            break;
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
              MR_Box conv9_STATE_VARIABLE_U_1_35;

              func_8(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), ((MR_Box) (HeadVar__2_2)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_1_35);
            }
            break;
        }
        if (!((Regs_28 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
          MR_Box conv11_STATE_VARIABLE_U_3_38;
          MR_Word next_value_of_HeadVar__1_1;

          func_10(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (HeadVar__2_2)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_3_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Regs_28;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    break;
  }
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

  State0_9 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_2[1]), Lang_5, InstVarSet_6, Insts_7, State0_9, &State_10);
  Str_8 = mercury__string__builder__to_string_1_f_0(State_10);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_101_100_95_105_110_115_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27,
  MR_Word tscc_proc_1_input_2_Lang_8,
  MR_Word tscc_proc_1_input_3_InstVarSet_9,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15,
  MR_Word tscc_proc_1_input_5_Inst_11,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_U_0_16,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_U_17)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
  MR_Word tscc_proc_2_input_2_Lang_7;
  MR_Word tscc_proc_2_input_3_InstVarSet_8;
  MR_Word tscc_proc_2_input_4_Inst_9;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_U_0_21;
  MR_Word tscc_output_1_STATE_VARIABLE_U_17;

  // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_constrained_inst_vars__[S = string.builder.handle, U = string.builder.state]_0_1/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_constrained_inst_vars__[S = string.builder.handle, U = string.builder.state]_0_1/7-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_inst__[S = string.builder.handle, U = string.builder.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_27 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
    MR_Word Lang_8 = tscc_proc_1_input_2_Lang_8;
    MR_Word InstVarSet_9 = tscc_proc_1_input_3_InstVarSet_9;
    MR_Word STATE_VARIABLE_Vars_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
    MR_Word Inst_11 = tscc_proc_1_input_5_Inst_11;
    MR_Word STATE_VARIABLE_U_0_16 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_16;
    MR_Word STATE_VARIABLE_U_17;
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_Vars_1_18;
    MR_Box conv0_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv0_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_1_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv0_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_1_20;
      MR_Word STATE_VARIABLE_U_2_22;
      MR_Word STATE_VARIABLE_U_3_24;
      MR_Word STATE_VARIABLE_U_4_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      MR_Box conv2_STATE_VARIABLE_U_1_20;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_U_3_24;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_17;

      func_1(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_16)), &conv2_STATE_VARIABLE_U_1_20);
      STATE_VARIABLE_U_1_20 = ((MR_Word) (conv2_STATE_VARIABLE_U_1_20));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, STATE_VARIABLE_U_1_20, &STATE_VARIABLE_U_2_22);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_3(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_22)), &conv4_STATE_VARIABLE_U_3_24);
      STATE_VARIABLE_U_3_24 = ((MR_Word) (conv4_STATE_VARIABLE_U_3_24));
      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_101_100_95_105_110_115_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_1_18, Inst_11, STATE_VARIABLE_U_3_24, &STATE_VARIABLE_U_4_25);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_5(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_25)), &conv6_STATE_VARIABLE_U_17);
      STATE_VARIABLE_U_17 = ((MR_Word) (conv6_STATE_VARIABLE_U_17));
    }
    else
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = TypeClassInfo_for_pt_output_27;
      MR_Word next_value_of_tscc_proc_2_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_2_input_4_Inst_9 = Inst_11;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_21 = STATE_VARIABLE_U_0_16;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
      tscc_proc_2_input_2_Lang_7 = next_value_of_tscc_proc_2_input_2_Lang_7;
      tscc_proc_2_input_3_InstVarSet_8 = next_value_of_tscc_proc_2_input_3_InstVarSet_8;
      tscc_proc_2_input_4_Inst_9 = next_value_of_tscc_proc_2_input_4_Inst_9;
      tscc_proc_2_input_5_STATE_VARIABLE_U_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_21;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_U_17 = STATE_VARIABLE_U_17;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_48 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
    MR_Word Lang_7 = tscc_proc_2_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_2_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_2_input_4_Inst_9;
    MR_Word STATE_VARIABLE_U_0_21 = tscc_proc_2_input_5_STATE_VARIABLE_U_0_21;
    MR_Word STATE_VARIABLE_U_22;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv16_STATE_VARIABLE_U_22;

              func_15(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv16_STATE_VARIABLE_U_22);
              STATE_VARIABLE_U_22 = ((MR_Word) (conv16_STATE_VARIABLE_U_22));
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv20_STATE_VARIABLE_U_22;

              func_19(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv20_STATE_VARIABLE_U_22);
              STATE_VARIABLE_U_22 = ((MR_Word) (conv20_STATE_VARIABLE_U_22));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, 1))));

          if ((HOInstInfo_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_57;
            void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv18_STATE_VARIABLE_U_22;

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
            func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
            func_17(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_57)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv18_STATE_VARIABLE_U_22);
            STATE_VARIABLE_U_22 = ((MR_Word) (conv18_STATE_VARIABLE_U_22));
          }
          else
          {
            MR_Word PredInstInfo_44 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_47), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_46, PredInstInfo_44, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, 2))));
          MR_Word STATE_VARIABLE_U_4_28;
          MR_Word STATE_VARIABLE_U_5_30;
          MR_Word STATE_VARIABLE_U_6_31;
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, 0))) & (MR_Integer) 7);
          MR_String Var_51;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_STATE_VARIABLE_U_4_28;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv12_STATE_VARIABLE_U_5_30;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_U_22;

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
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_9(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv10_STATE_VARIABLE_U_4_28);
          STATE_VARIABLE_U_4_28 = ((MR_Word) (conv10_STATE_VARIABLE_U_4_28));
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_11(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_28)), &conv12_STATE_VARIABLE_U_5_30);
          STATE_VARIABLE_U_5_30 = ((MR_Word) (conv12_STATE_VARIABLE_U_5_30));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundFunctors_16, STATE_VARIABLE_U_5_30, &STATE_VARIABLE_U_6_31);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_13(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_31)), &conv14_STATE_VARIABLE_U_22);
          STATE_VARIABLE_U_22 = ((MR_Word) (conv14_STATE_VARIABLE_U_22));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = TypeClassInfo_for_pt_output_48;
              MR_Word next_value_of_tscc_proc_1_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = Vars_18;
              MR_Word next_value_of_tscc_proc_1_input_5_Inst_11 = CInst_19;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_0_21;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
              tscc_proc_1_input_2_Lang_8 = next_value_of_tscc_proc_1_input_2_Lang_8;
              tscc_proc_1_input_3_InstVarSet_9 = next_value_of_tscc_proc_1_input_3_InstVarSet_9;
              tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_1_input_5_Inst_11 = next_value_of_tscc_proc_1_input_5_Inst_11;
              tscc_proc_1_input_6_STATE_VARIABLE_U_0_16 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_16;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[0 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
                MR_Box conv8_STATE_VARIABLE_U_22;

                func_7(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_50)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv8_STATE_VARIABLE_U_22);
                STATE_VARIABLE_U_22 = ((MR_Word) (conv8_STATE_VARIABLE_U_22));
              }
              else
              {
                MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_48, InstVarSet_8, (MR_Integer) 0, Var_17, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_17 = STATE_VARIABLE_U_22;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_17 = tscc_output_1_STATE_VARIABLE_U_17;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48,
  MR_Word tscc_proc_2_input_2_Lang_7,
  MR_Word tscc_proc_2_input_3_InstVarSet_8,
  MR_Word tscc_proc_2_input_4_Inst_9,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_U_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_U_17)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
  MR_Word tscc_proc_1_input_2_Lang_8;
  MR_Word tscc_proc_1_input_3_InstVarSet_9;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
  MR_Word tscc_proc_1_input_5_Inst_11;
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_U_0_16;
  MR_Word tscc_output_1_STATE_VARIABLE_U_17;

  // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_inst__[S = string.builder.handle, U = string.builder.state]_0_1/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_constrained_inst_vars__[S = string.builder.handle, U = string.builder.state]_0_1/7-0
  ;
  // proc 2 in TSCC: pred parse_tree.parse_tree_out_inst.TypeSpecOf__pred__mercury_format_inst__[S = string.builder.handle, U = string.builder.state]_0_1/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_pt_output_27 = tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
    MR_Word Lang_8 = tscc_proc_1_input_2_Lang_8;
    MR_Word InstVarSet_9 = tscc_proc_1_input_3_InstVarSet_9;
    MR_Word STATE_VARIABLE_Vars_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
    MR_Word Inst_11 = tscc_proc_1_input_5_Inst_11;
    MR_Word STATE_VARIABLE_U_0_16 = tscc_proc_1_input_6_STATE_VARIABLE_U_0_16;
    MR_Word STATE_VARIABLE_U_17;
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_Vars_1_18;
    MR_Box conv0_Var_14;

    succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&parse_tree__parse_tree_out_inst_scalar_common_4[0]), &conv0_Var_14, STATE_VARIABLE_Vars_0_15, &STATE_VARIABLE_Vars_1_18);
    if (succeeded)
    {
      Var_14 = ((MR_Word) (conv0_Var_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_U_1_20;
      MR_Word STATE_VARIABLE_U_2_22;
      MR_Word STATE_VARIABLE_U_3_24;
      MR_Word STATE_VARIABLE_U_4_25;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      MR_Box conv2_STATE_VARIABLE_U_1_20;
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_U_3_24;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_17;

      func_1(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_16)), &conv2_STATE_VARIABLE_U_1_20);
      STATE_VARIABLE_U_1_20 = ((MR_Word) (conv2_STATE_VARIABLE_U_1_20));
      parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_27, InstVarSet_9, (MR_Integer) 0, Var_14, STATE_VARIABLE_U_1_20, &STATE_VARIABLE_U_2_22);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_3(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) " =< ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_22)), &conv4_STATE_VARIABLE_U_3_24);
      STATE_VARIABLE_U_3_24 = ((MR_Word) (conv4_STATE_VARIABLE_U_3_24));
      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_116_114_97_105_110_101_100_95_105_110_115_116_95_118_97_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_27, Lang_8, InstVarSet_9, STATE_VARIABLE_Vars_1_18, Inst_11, STATE_VARIABLE_U_3_24, &STATE_VARIABLE_U_4_25);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_27, 0)), 6))));
      func_5(((MR_Box) (TypeClassInfo_for_pt_output_27)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_25)), &conv6_STATE_VARIABLE_U_17);
      STATE_VARIABLE_U_17 = ((MR_Word) (conv6_STATE_VARIABLE_U_17));
    }
    else
    {
      MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = TypeClassInfo_for_pt_output_27;
      MR_Word next_value_of_tscc_proc_2_input_2_Lang_7 = Lang_8;
      MR_Word next_value_of_tscc_proc_2_input_3_InstVarSet_8 = InstVarSet_9;
      MR_Word next_value_of_tscc_proc_2_input_4_Inst_9 = Inst_11;
      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_21 = STATE_VARIABLE_U_0_16;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
      tscc_proc_2_input_2_Lang_7 = next_value_of_tscc_proc_2_input_2_Lang_7;
      tscc_proc_2_input_3_InstVarSet_8 = next_value_of_tscc_proc_2_input_3_InstVarSet_8;
      tscc_proc_2_input_4_Inst_9 = next_value_of_tscc_proc_2_input_4_Inst_9;
      tscc_proc_2_input_5_STATE_VARIABLE_U_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_U_0_21;
      goto top_of_proc_2;
    }
    tscc_output_1_STATE_VARIABLE_U_17 = STATE_VARIABLE_U_17;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_pt_output_48 = tscc_proc_2_input_1_TypeClassInfo_for_pt_output_48;
    MR_Word Lang_7 = tscc_proc_2_input_2_Lang_7;
    MR_Word InstVarSet_8 = tscc_proc_2_input_3_InstVarSet_8;
    MR_Word Inst_9 = tscc_proc_2_input_4_Inst_9;
    MR_Word STATE_VARIABLE_U_0_21 = tscc_proc_2_input_5_STATE_VARIABLE_U_0_21;
    MR_Word STATE_VARIABLE_U_22;

    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv16_STATE_VARIABLE_U_22;

              func_15(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "free")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv16_STATE_VARIABLE_U_22);
              STATE_VARIABLE_U_22 = ((MR_Word) (conv16_STATE_VARIABLE_U_22));
            }
            break;
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
              MR_Box conv20_STATE_VARIABLE_U_22;

              func_19(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "not_reached")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv20_STATE_VARIABLE_U_22);
              STATE_VARIABLE_U_22 = ((MR_Word) (conv20_STATE_VARIABLE_U_22));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_46 = ((MR_Unsigned) ((MR_hl_field(1, Inst_9, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_47 = ((MR_Word) ((MR_hl_field(1, Inst_9, 1))));

          if ((HOInstInfo_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_57;
            void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv18_STATE_VARIABLE_U_22;

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
            func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
            func_17(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_57)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv18_STATE_VARIABLE_U_22);
            STATE_VARIABLE_U_22 = ((MR_Word) (conv18_STATE_VARIABLE_U_22));
          }
          else
          {
            MR_Word PredInstInfo_44 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_47), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_46, PredInstInfo_44, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(2, Inst_9, 2))));
          MR_Word STATE_VARIABLE_U_4_28;
          MR_Word STATE_VARIABLE_U_5_30;
          MR_Word STATE_VARIABLE_U_6_31;
          MR_Word Uniq_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst_9, 0))) & (MR_Integer) 7);
          MR_String Var_51;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv10_STATE_VARIABLE_U_4_28;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv12_STATE_VARIABLE_U_5_30;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_U_22;

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
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_9(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_51)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv10_STATE_VARIABLE_U_4_28);
          STATE_VARIABLE_U_4_28 = ((MR_Word) (conv10_STATE_VARIABLE_U_4_28));
          func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_11(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_28)), &conv12_STATE_VARIABLE_U_5_30);
          STATE_VARIABLE_U_5_30 = ((MR_Word) (conv12_STATE_VARIABLE_U_5_30));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, BoundFunctors_16, STATE_VARIABLE_U_5_30, &STATE_VARIABLE_U_6_31);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
          func_13(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_31)), &conv14_STATE_VARIABLE_U_22);
          STATE_VARIABLE_U_22 = ((MR_Word) (conv14_STATE_VARIABLE_U_22));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_20 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, InstName_20, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));
              MR_Word CInst_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = TypeClassInfo_for_pt_output_48;
              MR_Word next_value_of_tscc_proc_1_input_2_Lang_8 = Lang_7;
              MR_Word next_value_of_tscc_proc_1_input_3_InstVarSet_9 = InstVarSet_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = Vars_18;
              MR_Word next_value_of_tscc_proc_1_input_5_Inst_11 = CInst_19;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_16 = STATE_VARIABLE_U_0_21;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_pt_output_27;
              tscc_proc_1_input_2_Lang_8 = next_value_of_tscc_proc_1_input_2_Lang_8;
              tscc_proc_1_input_3_InstVarSet_9 = next_value_of_tscc_proc_1_input_3_InstVarSet_9;
              tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Vars_0_15;
              tscc_proc_1_input_5_Inst_11 = next_value_of_tscc_proc_1_input_5_Inst_11;
              tscc_proc_1_input_6_STATE_VARIABLE_U_0_16 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_U_0_16;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, Inst_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_13 = ((MR_Word) ((MR_hl_field(3, Inst_9, 2))));

              if ((HOInstInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_50 = ((&parse_tree__parse_tree_out_inst_vector_common_5[0 + Uniq_12]))->parse_tree__parse_tree_out_inst__vector_common_type_5_0__vct_5_f_0;
                void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_48, 0)), 6))));
                MR_Box conv8_STATE_VARIABLE_U_22;

                func_7(((MR_Box) (TypeClassInfo_for_pt_output_48)), ((MR_Box) (Var_50)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_21)), &conv8_STATE_VARIABLE_U_22);
                STATE_VARIABLE_U_22 = ((MR_Word) (conv8_STATE_VARIABLE_U_22));
              }
              else
              {
                MR_Word PredInstInfo_14 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_13), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_48, Lang_7, InstVarSet_8, Uniq_12, PredInstInfo_14, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_9, 1))));

              parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_118_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_48, InstVarSet_8, (MR_Integer) 0, Var_17, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_22);
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_U_17 = STATE_VARIABLE_U_22;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_U_17 = tscc_output_1_STATE_VARIABLE_U_17;
  return;
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_41,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word Mode0_9,
  MR_Word STATE_VARIABLE_U_0_27,
  MR_Word * STATE_VARIABLE_U_28)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Mode0_9)) == (MR_Integer) 0))
  {
    MR_Word FromInst0_12 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 0))));
    MR_Word ToInst0_13 = ((MR_Word) ((MR_hl_field(0, Mode0_9, 1))));

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_15;

          succeeded = ((MR_tag((MR_Word) FromInst0_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            HOInstInfo_15 = ((MR_Word) ((MR_hl_field(1, FromInst0_12, 1))));
            succeeded = (HOInstInfo_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ToInst0_13, FromInst0_12);
          }
          if (succeeded)
            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst0_12, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
          else
          {
            MR_Word Mode1_20;

            parse_tree__prog_mode__insts_to_mode_3_p_0(FromInst0_12, ToInst0_13, &Mode1_20);
            if (((MR_tag((MR_Word) Mode1_20)) == (MR_Integer) 0))
            {
              MR_Word FromInst1_21 = ((MR_Word) ((MR_hl_field(0, Mode1_20, 0))));
              MR_Word ToInst1_22 = ((MR_Word) ((MR_hl_field(0, Mode1_20, 1))));
              MR_Word FromInst_23;
              MR_Word ToInst_24;
              MR_Word STATE_VARIABLE_U_1_44;
              MR_Word STATE_VARIABLE_U_2_45;
              MR_Word STATE_VARIABLE_U_3_47;
              MR_Word STATE_VARIABLE_U_4_48;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv1_STATE_VARIABLE_U_1_44;
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv3_STATE_VARIABLE_U_3_47;
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv5_STATE_VARIABLE_U_28;

              parse_tree__prog_mode__strip_module_names_from_inst_4_p_0((MR_Integer) 0, (MR_Integer) 0, FromInst1_21, &FromInst_23);
              parse_tree__prog_mode__strip_module_names_from_inst_4_p_0((MR_Integer) 0, (MR_Integer) 0, ToInst1_22, &ToInst_24);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
              func_0(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_27)), &conv1_STATE_VARIABLE_U_1_44);
              STATE_VARIABLE_U_1_44 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_44));
              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst_23, STATE_VARIABLE_U_1_44, &STATE_VARIABLE_U_2_45);
              func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
              func_2(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) " >> ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_45)), &conv3_STATE_VARIABLE_U_3_47);
              STATE_VARIABLE_U_3_47 = ((MR_Word) (conv3_STATE_VARIABLE_U_3_47));
              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, ToInst_24, STATE_VARIABLE_U_3_47, &STATE_VARIABLE_U_4_48);
              func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
              func_4(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_48)), &conv5_STATE_VARIABLE_U_28);
              *STATE_VARIABLE_U_28 = ((MR_Word) (conv5_STATE_VARIABLE_U_28));
            }
            else
            {
              MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(1, Mode1_20, 0))));
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(1, Mode1_20, 1))));

              if ((ArgInsts_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Name_50;
                void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv7_STATE_VARIABLE_U_28;

                Name_50 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_6(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) (Name_50)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_27)), &conv7_STATE_VARIABLE_U_28);
                *STATE_VARIABLE_U_28 = ((MR_Word) (conv7_STATE_VARIABLE_U_28));
              }
              else
              {
                MR_Word STATE_VARIABLE_U_3_53;
                MR_Word STATE_VARIABLE_U_5_55;
                MR_Word STATE_VARIABLE_U_6_56;
                MR_String Name_58;
                MR_Word Inst_89;
                MR_Word Insts_90;
                MR_Word STATE_VARIABLE_U_1_96;
                void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv9_STATE_VARIABLE_U_3_53;
                void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv11_STATE_VARIABLE_U_5_55;
                void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv15_STATE_VARIABLE_U_28;

                Name_58 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_25);
                func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_8(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) (Name_58)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_27)), &conv9_STATE_VARIABLE_U_3_53);
                STATE_VARIABLE_U_3_53 = ((MR_Word) (conv9_STATE_VARIABLE_U_3_53));
                func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_10(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_53)), &conv11_STATE_VARIABLE_U_5_55);
                STATE_VARIABLE_U_5_55 = ((MR_Word) (conv11_STATE_VARIABLE_U_5_55));
                Inst_89 = ((MR_Word) ((MR_hl_field(1, ArgInsts_26, 0))));
                Insts_90 = ((MR_Word) ((MR_hl_field(1, ArgInsts_26, 1))));
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, Inst_89, STATE_VARIABLE_U_5_55, &STATE_VARIABLE_U_1_96);
                if ((Insts_90 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_U_6_56 = STATE_VARIABLE_U_1_96;
                else
                {
                  MR_Word STATE_VARIABLE_U_2_98;
                  void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                  MR_Box conv13_STATE_VARIABLE_U_2_98;

                  func_12(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_96)), &conv13_STATE_VARIABLE_U_2_98);
                  STATE_VARIABLE_U_2_98 = ((MR_Word) (conv13_STATE_VARIABLE_U_2_98));
                  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, Insts_90, STATE_VARIABLE_U_2_98, &STATE_VARIABLE_U_6_56);
                }
                func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
                func_14(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_56)), &conv15_STATE_VARIABLE_U_28);
                *STATE_VARIABLE_U_28 = ((MR_Word) (conv15_STATE_VARIABLE_U_28));
              }
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_U_1_76;
          MR_Word STATE_VARIABLE_U_2_77;
          MR_Word STATE_VARIABLE_U_3_79;
          MR_Word STATE_VARIABLE_U_4_80;
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
          MR_Box conv17_STATE_VARIABLE_U_1_76;
          void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv19_STATE_VARIABLE_U_3_79;
          void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv21_STATE_VARIABLE_U_28;

          func_16(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_27)), &conv17_STATE_VARIABLE_U_1_76);
          STATE_VARIABLE_U_1_76 = ((MR_Word) (conv17_STATE_VARIABLE_U_1_76));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, FromInst0_12, STATE_VARIABLE_U_1_76, &STATE_VARIABLE_U_2_77);
          func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
          func_18(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) " >> ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_77)), &conv19_STATE_VARIABLE_U_3_79);
          STATE_VARIABLE_U_3_79 = ((MR_Word) (conv19_STATE_VARIABLE_U_3_79));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, ToInst0_13, STATE_VARIABLE_U_3_79, &STATE_VARIABLE_U_4_80);
          func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_41, 0)), 6))));
          func_20(((MR_Box) (TypeClassInfo_for_pt_output_41)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_80)), &conv21_STATE_VARIABLE_U_28);
          *STATE_VARIABLE_U_28 = ((MR_Word) (conv21_STATE_VARIABLE_U_28));
        }
        break;
    }
  }
  else
  {
    MR_Word SymName_39 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 0))));
    MR_Word ArgInsts_40 = ((MR_Word) ((MR_hl_field(1, Mode0_9, 1))));

    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_41, Lang_7, InstVarSet_8, SymName_39, ArgInsts_40, STATE_VARIABLE_U_0_27, STATE_VARIABLE_U_28);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_111_117_110_100_95_102_117_110_99_116_111_114_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_38,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word BoundFunctor_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_15, 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_15, 1))));
      MR_Word STATE_VARIABLE_U_1_28;

      if ((Args_20 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 0, ConsId_19, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_28);
      else
      {
        MR_Word STATE_VARIABLE_U_2_30;
        MR_Word STATE_VARIABLE_U_3_32;
        MR_Word STATE_VARIABLE_U_4_33;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_3_32;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_1_28;

        parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, (MR_Integer) 1, ConsId_19, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_2_30);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_30)), &conv1_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv1_STATE_VARIABLE_U_3_32));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_38, Lang_1, InstVarSet_2, Args_20, STATE_VARIABLE_U_3_32, &STATE_VARIABLE_U_4_33);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_33)), &conv3_STATE_VARIABLE_U_1_28);
        STATE_VARIABLE_U_1_28 = ((MR_Word) (conv3_STATE_VARIABLE_U_1_28));
      }
      if ((BoundFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_28;
      else
      {
        MR_Word STATE_VARIABLE_U_6_37;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_38, 0)), 6))));
        MR_Box conv5_STATE_VARIABLE_U_6_37;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_U_0_5;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_38)), ((MR_Box) ((MR_String) " ; ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_28)), &conv5_STATE_VARIABLE_U_6_37);
        STATE_VARIABLE_U_6_37 = ((MR_Word) (conv5_STATE_VARIABLE_U_6_37));
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = BoundFunctors_16;
        next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_6_37;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Insts_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_U_1_23;

      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_15, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_23);
      if ((Insts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_23;
      else
      {
        MR_Word STATE_VARIABLE_U_2_25;
        MR_Word Inst_34;
        MR_Word Insts_35;
        MR_Word STATE_VARIABLE_U_1_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_2_25;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_23)), &conv1_STATE_VARIABLE_U_2_25);
        STATE_VARIABLE_U_2_25 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_25));
        Inst_34 = ((MR_Word) ((MR_hl_field(1, Insts_16, 0))));
        Insts_35 = ((MR_Word) ((MR_hl_field(1, Insts_16, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Inst_34, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_1_41);
        if ((Insts_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_41;
        else
        {
          MR_Word STATE_VARIABLE_U_2_43;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Box conv3_STATE_VARIABLE_U_2_43;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_STATE_VARIABLE_U_0_5;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_41)), &conv3_STATE_VARIABLE_U_2_43);
          STATE_VARIABLE_U_2_43 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_43));
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Insts_35;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_43;
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
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_132,
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word InstName_9,
  MR_Word STATE_VARIABLE_U_0_25,
  MR_Word * STATE_VARIABLE_U_26)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_12 = ((MR_Word) ((MR_hl_field(0, InstName_9, 0))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, InstName_9, 1))));

          if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, STATE_VARIABLE_U_0_25, STATE_VARIABLE_U_26);
          else
          {
            MR_Word STATE_VARIABLE_U_2_28;
            MR_Word STATE_VARIABLE_U_3_30;
            MR_Word STATE_VARIABLE_U_4_31;
            MR_Word Inst_210;
            MR_Word Insts_211;
            MR_Word STATE_VARIABLE_U_1_217;
            MR_Box conv24_STATE_VARIABLE_U_3_30;
            MR_Box conv27_STATE_VARIABLE_U_26;

            parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Name_12, STATE_VARIABLE_U_0_25, &STATE_VARIABLE_U_2_28);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_28)), &conv24_STATE_VARIABLE_U_3_30);
            STATE_VARIABLE_U_3_30 = ((MR_Word) (conv24_STATE_VARIABLE_U_3_30));
            Inst_210 = ((MR_Word) ((MR_hl_field(1, Args_13, 0))));
            Insts_211 = ((MR_Word) ((MR_hl_field(1, Args_13, 1))));
            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Inst_210, STATE_VARIABLE_U_3_30, &STATE_VARIABLE_U_1_217);
            if ((Insts_211 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_U_4_31 = STATE_VARIABLE_U_1_217;
            else
            {
              MR_Word STATE_VARIABLE_U_2_219;
              void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_132, 0)), 6))));
              MR_Box conv26_STATE_VARIABLE_U_2_219;

              func_25(((MR_Box) (TypeClassInfo_for_pt_output_132)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_217)), &conv26_STATE_VARIABLE_U_2_219);
              STATE_VARIABLE_U_2_219 = ((MR_Word) (conv26_STATE_VARIABLE_U_2_219));
              parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Insts_211, STATE_VARIABLE_U_2_219, &STATE_VARIABLE_U_4_31);
            }
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_31)), &conv27_STATE_VARIABLE_U_26);
            *STATE_VARIABLE_U_26 = ((MR_Word) (conv27_STATE_VARIABLE_U_26));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_16 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_9, 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_17 = ((MR_Unsigned) ((MR_hl_field(1, InstName_9, 0))) & (MR_Integer) 1);
          MR_Word InstA_18 = ((MR_Word) ((MR_hl_field(1, InstName_9, 1))));
          MR_Word InstB_19 = ((MR_Word) ((MR_hl_field(1, InstName_9, 2))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_U_6_37;
                MR_Word STATE_VARIABLE_U_7_38;
                MR_Word STATE_VARIABLE_U_8_39;
                MR_Word STATE_VARIABLE_U_9_41;
                MR_Word Insts_177;
                MR_Word STATE_VARIABLE_U_1_183;
                MR_Word STATE_VARIABLE_U_2_185;
                MR_Word Inst_193;
                MR_Box conv20_STATE_VARIABLE_U_6_37;
                void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv22_STATE_VARIABLE_U_2_185;
                MR_Box conv23_STATE_VARIABLE_U_26;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044unify(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv20_STATE_VARIABLE_U_6_37);
                STATE_VARIABLE_U_6_37 = ((MR_Word) (conv20_STATE_VARIABLE_U_6_37));
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_16, STATE_VARIABLE_U_6_37, &STATE_VARIABLE_U_7_38);
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Real_17, STATE_VARIABLE_U_7_38, &STATE_VARIABLE_U_8_39);
                {
                  Insts_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Insts_177, 0) = ((MR_Box) (InstB_19));
                  MR_hl_field(1, Insts_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, InstA_18, STATE_VARIABLE_U_8_39, &STATE_VARIABLE_U_1_183);
                func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_132, 0)), 6))));
                func_21(((MR_Box) (TypeClassInfo_for_pt_output_132)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_183)), &conv22_STATE_VARIABLE_U_2_185);
                STATE_VARIABLE_U_2_185 = ((MR_Word) (conv22_STATE_VARIABLE_U_2_185));
                Inst_193 = ((MR_Word) ((MR_hl_field(1, Insts_177, 0))));
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Inst_193, STATE_VARIABLE_U_2_185, &STATE_VARIABLE_U_9_41);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_9_41)), &conv23_STATE_VARIABLE_U_26);
                *STATE_VARIABLE_U_26 = ((MR_Word) (conv23_STATE_VARIABLE_U_26));
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
          MR_Word InstA_118 = ((MR_Word) ((MR_hl_field(2, InstName_9, 0))));
          MR_Word InstB_119 = ((MR_Word) ((MR_hl_field(2, InstName_9, 1))));

          switch (Lang_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_U_11_49;
                MR_Word STATE_VARIABLE_U_12_51;
                MR_Word Insts_143;
                MR_Word STATE_VARIABLE_U_1_149;
                MR_Word STATE_VARIABLE_U_2_151;
                MR_Word Inst_159;
                MR_Box conv6_STATE_VARIABLE_U_11_49;
                void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                MR_Box conv8_STATE_VARIABLE_U_2_151;
                MR_Box conv9_STATE_VARIABLE_U_26;

                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044merge_inst(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv6_STATE_VARIABLE_U_11_49);
                STATE_VARIABLE_U_11_49 = ((MR_Word) (conv6_STATE_VARIABLE_U_11_49));
                {
                  Insts_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Insts_143, 0) = ((MR_Box) (InstB_119));
                  MR_hl_field(1, Insts_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, InstA_118, STATE_VARIABLE_U_11_49, &STATE_VARIABLE_U_1_149);
                func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_132, 0)), 6))));
                func_7(((MR_Box) (TypeClassInfo_for_pt_output_132)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_149)), &conv8_STATE_VARIABLE_U_2_151);
                STATE_VARIABLE_U_2_151 = ((MR_Word) (conv8_STATE_VARIABLE_U_2_151));
                Inst_159 = ((MR_Word) ((MR_hl_field(1, Insts_143, 0))));
                parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, Inst_159, STATE_VARIABLE_U_2_151, &STATE_VARIABLE_U_12_51);
                parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_51)), &conv9_STATE_VARIABLE_U_26);
                *STATE_VARIABLE_U_26 = ((MR_Word) (conv9_STATE_VARIABLE_U_26));
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
        switch (((MR_Integer) ((MR_hl_field(3, InstName_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_20 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));
              MR_Word Uniq_21 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 2)) & (MR_Integer) 7);
              MR_Word IsLive_120 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_121 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) & (MR_Integer) 1);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_U_14_59;
                    MR_Word STATE_VARIABLE_U_15_60;
                    MR_Word STATE_VARIABLE_U_16_62;
                    MR_Word STATE_VARIABLE_U_17_63;
                    MR_Word STATE_VARIABLE_U_18_65;
                    MR_Word STATE_VARIABLE_U_19_66;
                    MR_Box conv3_STATE_VARIABLE_U_14_59;
                    MR_Box conv4_STATE_VARIABLE_U_16_62;
                    MR_Box conv5_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044ground(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv3_STATE_VARIABLE_U_14_59);
                    STATE_VARIABLE_U_14_59 = ((MR_Word) (conv3_STATE_VARIABLE_U_14_59));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_20, STATE_VARIABLE_U_14_59, &STATE_VARIABLE_U_15_60);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_15_60)), &conv4_STATE_VARIABLE_U_16_62);
                    STATE_VARIABLE_U_16_62 = ((MR_Word) (conv4_STATE_VARIABLE_U_16_62));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_120, STATE_VARIABLE_U_16_62, &STATE_VARIABLE_U_17_63);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_21, (MR_String) "shared", STATE_VARIABLE_U_17_63, &STATE_VARIABLE_U_18_65);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Real_121, STATE_VARIABLE_U_18_65, &STATE_VARIABLE_U_19_66);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_19_66)), &conv5_STATE_VARIABLE_U_26);
                    *STATE_VARIABLE_U_26 = ((MR_Word) (conv5_STATE_VARIABLE_U_26));
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
              MR_Word IsLive_122 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_123 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) & (MR_Integer) 1);
              MR_Word SubInstName_124 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));
              MR_Word Uniq_125 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_9, 2))) >> 2)) & (MR_Integer) 7);

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_U_21_72;
                    MR_Word STATE_VARIABLE_U_22_73;
                    MR_Word STATE_VARIABLE_U_23_75;
                    MR_Word STATE_VARIABLE_U_24_76;
                    MR_Word STATE_VARIABLE_U_25_78;
                    MR_Word STATE_VARIABLE_U_26_79;
                    MR_Box conv0_STATE_VARIABLE_U_21_72;
                    MR_Box conv1_STATE_VARIABLE_U_23_75;
                    MR_Box conv2_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044any(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv0_STATE_VARIABLE_U_21_72);
                    STATE_VARIABLE_U_21_72 = ((MR_Word) (conv0_STATE_VARIABLE_U_21_72));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_124, STATE_VARIABLE_U_21_72, &STATE_VARIABLE_U_22_73);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_73)), &conv1_STATE_VARIABLE_U_23_75);
                    STATE_VARIABLE_U_23_75 = ((MR_Word) (conv1_STATE_VARIABLE_U_23_75));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, IsLive_122, STATE_VARIABLE_U_23_75, &STATE_VARIABLE_U_24_76);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_132, Uniq_125, (MR_String) "shared", STATE_VARIABLE_U_24_76, &STATE_VARIABLE_U_25_78);
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_132, Real_123, STATE_VARIABLE_U_25_78, &STATE_VARIABLE_U_26_79);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_26_79)), &conv2_STATE_VARIABLE_U_26);
                    *STATE_VARIABLE_U_26 = ((MR_Word) (conv2_STATE_VARIABLE_U_26));
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
              MR_Word SubInstName_126 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_U_28_85;
                    MR_Word STATE_VARIABLE_U_29_86;
                    MR_Box conv12_STATE_VARIABLE_U_28_85;
                    MR_Box conv13_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044shared_inst(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv12_STATE_VARIABLE_U_28_85);
                    STATE_VARIABLE_U_28_85 = ((MR_Word) (conv12_STATE_VARIABLE_U_28_85));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_126, STATE_VARIABLE_U_28_85, &STATE_VARIABLE_U_29_86);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_29_86)), &conv13_STATE_VARIABLE_U_26);
                    *STATE_VARIABLE_U_26 = ((MR_Word) (conv13_STATE_VARIABLE_U_26));
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
              MR_Word SubInstName_127 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_U_31_92;
                    MR_Word STATE_VARIABLE_U_32_93;
                    MR_Box conv10_STATE_VARIABLE_U_31_92;
                    MR_Box conv11_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044mostly_uniq_inst(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv10_STATE_VARIABLE_U_31_92);
                    STATE_VARIABLE_U_31_92 = ((MR_Word) (conv10_STATE_VARIABLE_U_31_92));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_127, STATE_VARIABLE_U_31_92, &STATE_VARIABLE_U_32_93);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_32_93)), &conv11_STATE_VARIABLE_U_26);
                    *STATE_VARIABLE_U_26 = ((MR_Word) (conv11_STATE_VARIABLE_U_26));
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
              MR_Word Uniqueness_22 = ((MR_Unsigned) ((MR_hl_field(3, InstName_9, 1))) & (MR_Integer) 7);
              MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, InstName_9, 2))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TypeVarSet_24;
                    MR_Word STATE_VARIABLE_U_34_99;
                    MR_Word STATE_VARIABLE_U_35_101;
                    MR_Word STATE_VARIABLE_U_36_103;
                    MR_Word STATE_VARIABLE_U_37_105;
                    MR_Box conv14_STATE_VARIABLE_U_34_99;
                    MR_Box conv15_STATE_VARIABLE_U_36_103;
                    MR_Box conv16_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_ground(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv14_STATE_VARIABLE_U_34_99);
                    STATE_VARIABLE_U_34_99 = ((MR_Word) (conv14_STATE_VARIABLE_U_34_99));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_132, Uniqueness_22, (MR_String) "shared", STATE_VARIABLE_U_34_99, &STATE_VARIABLE_U_35_101);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_35_101)), &conv15_STATE_VARIABLE_U_36_103);
                    STATE_VARIABLE_U_36_103 = ((MR_Word) (conv15_STATE_VARIABLE_U_36_103));
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_24);
                    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_24, (MR_Integer) 0, Type_23, STATE_VARIABLE_U_36_103, &STATE_VARIABLE_U_37_105);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_37_105)), &conv16_STATE_VARIABLE_U_26);
                    *STATE_VARIABLE_U_26 = ((MR_Word) (conv16_STATE_VARIABLE_U_26));
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
              MR_Word SubInstName_130 = ((MR_Word) ((MR_hl_field(3, InstName_9, 2))));
              MR_Word Type_131 = ((MR_Word) ((MR_hl_field(3, InstName_9, 1))));

              switch (Lang_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_U_40_110;
                    MR_Word STATE_VARIABLE_U_41_112;
                    MR_Word STATE_VARIABLE_U_42_114;
                    MR_Word STATE_VARIABLE_U_43_115;
                    MR_Word TypeVarSet_128;
                    MR_Box conv17_STATE_VARIABLE_U_40_110;
                    MR_Box conv18_STATE_VARIABLE_U_42_114;
                    MR_Box conv19_STATE_VARIABLE_U_26;

                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) "\044typed_inst(", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv17_STATE_VARIABLE_U_40_110);
                    STATE_VARIABLE_U_40_110 = ((MR_Word) (conv17_STATE_VARIABLE_U_40_110));
                    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_128);
                    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, TypeVarSet_128, (MR_Integer) 0, Type_131, STATE_VARIABLE_U_40_110, &STATE_VARIABLE_U_41_112);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ", ", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_41_112)), &conv18_STATE_VARIABLE_U_42_114);
                    STATE_VARIABLE_U_42_114 = ((MR_Word) (conv18_STATE_VARIABLE_U_42_114));
                    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_132, Lang_7, InstVarSet_8, SubInstName_130, STATE_VARIABLE_U_42_114, &STATE_VARIABLE_U_43_115);
                    parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_132, (MR_String) ")", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_43_115)), &conv19_STATE_VARIABLE_U_26);
                    *STATE_VARIABLE_U_26 = ((MR_Word) (conv19_STATE_VARIABLE_U_26));
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
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_U_0_5,
  MR_Word * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Mode_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_U_1_23;

      parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_15, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_1_23);
      if ((Modes_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_23;
      else
      {
        MR_Word STATE_VARIABLE_U_2_25;
        MR_Word Mode_34;
        MR_Word Modes_35;
        MR_Word STATE_VARIABLE_U_1_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_2_25;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_23)), &conv1_STATE_VARIABLE_U_2_25);
        STATE_VARIABLE_U_2_25 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_25));
        Mode_34 = ((MR_Word) ((MR_hl_field(1, Modes_16, 0))));
        Modes_35 = ((MR_Word) ((MR_hl_field(1, Modes_16, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_26, Lang_1, InstVarSet_2, Mode_34, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_1_41);
        if ((Modes_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_1_41;
        else
        {
          MR_Word STATE_VARIABLE_U_2_43;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Box conv3_STATE_VARIABLE_U_2_43;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_STATE_VARIABLE_U_0_5;

          func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_41)), &conv3_STATE_VARIABLE_U_2_43);
          STATE_VARIABLE_U_2_43 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_43));
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Modes_35;
          next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_2_43;
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
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_66,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Word STATE_VARIABLE_U_0_25,
  MR_Word * STATE_VARIABLE_U_26)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 3))) & (MR_Integer) 7);
  MR_Word STATE_VARIABLE_U_3_32;
  MR_Word STATE_VARIABLE_U_6_38;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Word STATE_VARIABLE_U_1_28;
        MR_Word STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_1_28;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_3_32;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv1_STATE_VARIABLE_U_1_28);
        STATE_VARIABLE_U_1_28 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_28));
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_28)), &conv3_STATE_VARIABLE_U_2_30);
        STATE_VARIABLE_U_2_30 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_30));
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_30)), &conv5_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv5_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word STATE_VARIABLE_U_1_92;
        MR_Word STATE_VARIABLE_U_2_93;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv7_STATE_VARIABLE_U_1_92;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_2_93;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv11_STATE_VARIABLE_U_3_32;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv7_STATE_VARIABLE_U_1_92);
        STATE_VARIABLE_U_1_92 = ((MR_Word) (conv7_STATE_VARIABLE_U_1_92));
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_92)), &conv9_STATE_VARIABLE_U_2_93);
        STATE_VARIABLE_U_2_93 = ((MR_Word) (conv9_STATE_VARIABLE_U_2_93));
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_93)), &conv11_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv11_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_U_1_97;
        MR_Word STATE_VARIABLE_U_2_98;
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv13_STATE_VARIABLE_U_1_97;
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv15_STATE_VARIABLE_U_2_98;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv17_STATE_VARIABLE_U_3_32;

        func_12(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv13_STATE_VARIABLE_U_1_97);
        STATE_VARIABLE_U_1_97 = ((MR_Word) (conv13_STATE_VARIABLE_U_1_97));
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_97)), &conv15_STATE_VARIABLE_U_2_98);
        STATE_VARIABLE_U_2_98 = ((MR_Word) (conv15_STATE_VARIABLE_U_2_98));
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_98)), &conv17_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv17_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_U_1_102;
        MR_Word STATE_VARIABLE_U_2_103;
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv19_STATE_VARIABLE_U_1_102;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv21_STATE_VARIABLE_U_2_103;
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv23_STATE_VARIABLE_U_3_32;

        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv19_STATE_VARIABLE_U_1_102);
        STATE_VARIABLE_U_1_102 = ((MR_Word) (conv19_STATE_VARIABLE_U_1_102));
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_102)), &conv21_STATE_VARIABLE_U_2_103);
        STATE_VARIABLE_U_2_103 = ((MR_Word) (conv21_STATE_VARIABLE_U_2_103));
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_103)), &conv23_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv23_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_U_3_32 = STATE_VARIABLE_U_0_25;
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_Word STATE_VARIABLE_U_12_49;
        MR_Word STATE_VARIABLE_U_16_55;
        MR_Word STATE_VARIABLE_U_17_57;
        MR_String Var_58;
        MR_Word STATE_VARIABLE_U_18_59;
        MR_Box conv24_RetMode_21;
        void MR_CALL (* func_31)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv32_STATE_VARIABLE_U_17_57;
        void MR_CALL (* func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv34_STATE_VARIABLE_U_18_59;
        void MR_CALL (* func_35)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv36_STATE_VARIABLE_U_6_38;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv24_RetMode_21);
        RetMode_21 = ((MR_Word) (conv24_RetMode_21));
        if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv26_STATE_VARIABLE_U_12_49;

          func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv26_STATE_VARIABLE_U_12_49);
          STATE_VARIABLE_U_12_49 = ((MR_Word) (conv26_STATE_VARIABLE_U_12_49));
        }
        else
        {
          MR_Word STATE_VARIABLE_U_13_51;
          MR_Word STATE_VARIABLE_U_14_52;
          void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv28_STATE_VARIABLE_U_13_51;
          void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv30_STATE_VARIABLE_U_12_49;

          func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_func(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv28_STATE_VARIABLE_U_13_51);
          STATE_VARIABLE_U_13_51 = ((MR_Word) (conv28_STATE_VARIABLE_U_13_51));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, ArgModes_20, STATE_VARIABLE_U_13_51, &STATE_VARIABLE_U_14_52);
          func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          func_29(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_52)), &conv30_STATE_VARIABLE_U_12_49);
          STATE_VARIABLE_U_12_49 = ((MR_Word) (conv30_STATE_VARIABLE_U_12_49));
        }
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, STATE_VARIABLE_U_12_49, &STATE_VARIABLE_U_16_55);
        func_31 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_31(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_16_55)), &conv32_STATE_VARIABLE_U_17_57);
        STATE_VARIABLE_U_17_57 = ((MR_Word) (conv32_STATE_VARIABLE_U_17_57));
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_33 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_33(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_57)), &conv34_STATE_VARIABLE_U_18_59);
        STATE_VARIABLE_U_18_59 = ((MR_Word) (conv34_STATE_VARIABLE_U_18_59));
        func_35 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_35(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_59)), &conv36_STATE_VARIABLE_U_6_38);
        STATE_VARIABLE_U_6_38 = ((MR_Word) (conv36_STATE_VARIABLE_U_6_38));
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_U_4_34;
        MR_String Var_35;
        MR_Word STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_37)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv38_STATE_VARIABLE_U_4_34;
        void MR_CALL (* func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv40_STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_41)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv42_STATE_VARIABLE_U_6_38;

        func_37(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv38_STATE_VARIABLE_U_4_34);
        STATE_VARIABLE_U_4_34 = ((MR_Word) (conv38_STATE_VARIABLE_U_4_34));
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_39 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_39(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_34)), &conv40_STATE_VARIABLE_U_5_36);
        STATE_VARIABLE_U_5_36 = ((MR_Word) (conv40_STATE_VARIABLE_U_5_36));
        func_41 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_41(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_5_36)), &conv42_STATE_VARIABLE_U_6_38);
        STATE_VARIABLE_U_6_38 = ((MR_Word) (conv42_STATE_VARIABLE_U_6_38));
      }
      else
      {
        MR_Word STATE_VARIABLE_U_7_40;
        MR_Word STATE_VARIABLE_U_8_41;
        MR_Word STATE_VARIABLE_U_9_43;
        MR_String Var_44;
        MR_Word STATE_VARIABLE_U_10_45;
        MR_Word Mode_81;
        MR_Word Modes_82;
        MR_Word STATE_VARIABLE_U_1_88;
        void MR_CALL (* func_43)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv44_STATE_VARIABLE_U_7_40;
        void MR_CALL (* func_47)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv48_STATE_VARIABLE_U_9_43;
        void MR_CALL (* func_49)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv50_STATE_VARIABLE_U_10_45;
        void MR_CALL (* func_51)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv52_STATE_VARIABLE_U_6_38;

        func_43(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(any_pred(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv44_STATE_VARIABLE_U_7_40);
        STATE_VARIABLE_U_7_40 = ((MR_Word) (conv44_STATE_VARIABLE_U_7_40));
        Mode_81 = ((MR_Word) ((MR_hl_field(1, Modes_15, 0))));
        Modes_82 = ((MR_Word) ((MR_hl_field(1, Modes_15, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, STATE_VARIABLE_U_7_40, &STATE_VARIABLE_U_1_88);
        if ((Modes_82 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_8_41 = STATE_VARIABLE_U_1_88;
        else
        {
          MR_Word STATE_VARIABLE_U_2_90;
          void MR_CALL (* func_45)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv46_STATE_VARIABLE_U_2_90;

          func_45(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_88)), &conv46_STATE_VARIABLE_U_2_90);
          STATE_VARIABLE_U_2_90 = ((MR_Word) (conv46_STATE_VARIABLE_U_2_90));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, STATE_VARIABLE_U_2_90, &STATE_VARIABLE_U_8_41);
        }
        func_47 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_47(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_8_41)), &conv48_STATE_VARIABLE_U_9_43);
        STATE_VARIABLE_U_9_43 = ((MR_Word) (conv48_STATE_VARIABLE_U_9_43));
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_49 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_49(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_9_43)), &conv50_STATE_VARIABLE_U_10_45);
        STATE_VARIABLE_U_10_45 = ((MR_Word) (conv50_STATE_VARIABLE_U_10_45));
        func_51 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_51(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_10_45)), &conv52_STATE_VARIABLE_U_6_38);
        STATE_VARIABLE_U_6_38 = ((MR_Word) (conv52_STATE_VARIABLE_U_6_38));
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_6_38;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, 0))));
    MR_Word STATE_VARIABLE_U_20_63;
    MR_Word STATE_VARIABLE_U_21_64;
    void MR_CALL (* func_53)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    MR_Box conv54_STATE_VARIABLE_U_20_63;
    void MR_CALL (* func_55)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv56_STATE_VARIABLE_U_26;

    func_53(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_38)), &conv54_STATE_VARIABLE_U_20_63);
    STATE_VARIABLE_U_20_63 = ((MR_Word) (conv54_STATE_VARIABLE_U_20_63));
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, STATE_VARIABLE_U_20_63, &STATE_VARIABLE_U_21_64);
    func_55 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    func_55(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_64)), &conv56_STATE_VARIABLE_U_26);
    *STATE_VARIABLE_U_26 = ((MR_Word) (conv56_STATE_VARIABLE_U_26));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_66,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word Uniq_10,
  MR_Word PredInstInfo_11,
  MR_Word STATE_VARIABLE_U_0_25,
  MR_Word * STATE_VARIABLE_U_26)
{
  MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 0))) & (MR_Integer) 1);
  MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 1))));
  MR_Word MaybeArgRegs_16 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_11, 2))));
  MR_Word Det_17 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_11, 3))) & (MR_Integer) 7);
  MR_Word STATE_VARIABLE_U_3_32;
  MR_Word STATE_VARIABLE_U_6_38;

  switch (Uniq_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Word STATE_VARIABLE_U_1_28;
        MR_Word STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_1_28;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_2_30;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_3_32;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv1_STATE_VARIABLE_U_1_28);
        STATE_VARIABLE_U_1_28 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_28));
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "clobbered")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_28)), &conv3_STATE_VARIABLE_U_2_30);
        STATE_VARIABLE_U_2_30 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_30));
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_30)), &conv5_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv5_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word STATE_VARIABLE_U_1_109;
        MR_Word STATE_VARIABLE_U_2_110;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv7_STATE_VARIABLE_U_1_109;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_2_110;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv11_STATE_VARIABLE_U_3_32;

        func_6(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv7_STATE_VARIABLE_U_1_109);
        STATE_VARIABLE_U_1_109 = ((MR_Word) (conv7_STATE_VARIABLE_U_1_109));
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_clobbered")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_109)), &conv9_STATE_VARIABLE_U_2_110);
        STATE_VARIABLE_U_2_110 = ((MR_Word) (conv9_STATE_VARIABLE_U_2_110));
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_110)), &conv11_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv11_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_U_1_114;
        MR_Word STATE_VARIABLE_U_2_115;
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv13_STATE_VARIABLE_U_1_114;
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv15_STATE_VARIABLE_U_2_115;
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv17_STATE_VARIABLE_U_3_32;

        func_12(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv13_STATE_VARIABLE_U_1_114);
        STATE_VARIABLE_U_1_114 = ((MR_Word) (conv13_STATE_VARIABLE_U_1_114));
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "mostly_unique")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_114)), &conv15_STATE_VARIABLE_U_2_115);
        STATE_VARIABLE_U_2_115 = ((MR_Word) (conv15_STATE_VARIABLE_U_2_115));
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_16(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_115)), &conv17_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv17_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_U_1_119;
        MR_Word STATE_VARIABLE_U_2_120;
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv19_STATE_VARIABLE_U_1_119;
        void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv21_STATE_VARIABLE_U_2_120;
        void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv23_STATE_VARIABLE_U_3_32;

        func_18(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "/* ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_25)), &conv19_STATE_VARIABLE_U_1_119);
        STATE_VARIABLE_U_1_119 = ((MR_Word) (conv19_STATE_VARIABLE_U_1_119));
        func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_20(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "unique")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_119)), &conv21_STATE_VARIABLE_U_2_120);
        STATE_VARIABLE_U_2_120 = ((MR_Word) (conv21_STATE_VARIABLE_U_2_120));
        func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_22(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_120)), &conv23_STATE_VARIABLE_U_3_32);
        STATE_VARIABLE_U_3_32 = ((MR_Word) (conv23_STATE_VARIABLE_U_3_32));
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_U_3_32 = STATE_VARIABLE_U_0_25;
      break;
  }
  switch (PredOrFunc_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_20;
        MR_Word RetMode_21;
        MR_Word STATE_VARIABLE_U_12_49;
        MR_Word STATE_VARIABLE_U_16_55;
        MR_Word STATE_VARIABLE_U_17_57;
        MR_String Var_58;
        MR_Word STATE_VARIABLE_U_18_59;
        MR_Box conv24_RetMode_21;
        void MR_CALL (* func_33)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv34_STATE_VARIABLE_U_17_57;
        void MR_CALL (* func_35)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv36_STATE_VARIABLE_U_18_59;
        void MR_CALL (* func_37)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv38_STATE_VARIABLE_U_6_38;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_20, &conv24_RetMode_21);
        RetMode_21 = ((MR_Word) (conv24_RetMode_21));
        if ((ArgModes_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv26_STATE_VARIABLE_U_12_49;

          func_25(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((func) = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv26_STATE_VARIABLE_U_12_49);
          STATE_VARIABLE_U_12_49 = ((MR_Word) (conv26_STATE_VARIABLE_U_12_49));
        }
        else
        {
          MR_Word STATE_VARIABLE_U_13_51;
          MR_Word STATE_VARIABLE_U_14_52;
          MR_Word Mode_81;
          MR_Word Modes_82;
          MR_Word STATE_VARIABLE_U_1_88;
          void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv28_STATE_VARIABLE_U_13_51;
          void MR_CALL (* func_31)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv32_STATE_VARIABLE_U_12_49;

          func_27(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(func(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv28_STATE_VARIABLE_U_13_51);
          STATE_VARIABLE_U_13_51 = ((MR_Word) (conv28_STATE_VARIABLE_U_13_51));
          Mode_81 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, 0))));
          Modes_82 = ((MR_Word) ((MR_hl_field(1, ArgModes_20, 1))));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_81, STATE_VARIABLE_U_13_51, &STATE_VARIABLE_U_1_88);
          if ((Modes_82 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_U_14_52 = STATE_VARIABLE_U_1_88;
          else
          {
            MR_Word STATE_VARIABLE_U_2_90;
            void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
            MR_Box conv30_STATE_VARIABLE_U_2_90;

            func_29(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_88)), &conv30_STATE_VARIABLE_U_2_90);
            STATE_VARIABLE_U_2_90 = ((MR_Word) (conv30_STATE_VARIABLE_U_2_90));
            parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_82, STATE_VARIABLE_U_2_90, &STATE_VARIABLE_U_14_52);
          }
          func_31 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          func_31(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_52)), &conv32_STATE_VARIABLE_U_12_49);
          STATE_VARIABLE_U_12_49 = ((MR_Word) (conv32_STATE_VARIABLE_U_12_49));
        }
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, RetMode_21, STATE_VARIABLE_U_12_49, &STATE_VARIABLE_U_16_55);
        func_33 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_33(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_16_55)), &conv34_STATE_VARIABLE_U_17_57);
        STATE_VARIABLE_U_17_57 = ((MR_Word) (conv34_STATE_VARIABLE_U_17_57));
        Var_58 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_35 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_35(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_58)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_57)), &conv36_STATE_VARIABLE_U_18_59);
        STATE_VARIABLE_U_18_59 = ((MR_Word) (conv36_STATE_VARIABLE_U_18_59));
        func_37 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_37(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_59)), &conv38_STATE_VARIABLE_U_6_38);
        STATE_VARIABLE_U_6_38 = ((MR_Word) (conv38_STATE_VARIABLE_U_6_38));
      }
      break;
    case (MR_Integer) 0:
      if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_U_4_34;
        MR_String Var_35;
        MR_Word STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_39)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv40_STATE_VARIABLE_U_4_34;
        void MR_CALL (* func_41)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv42_STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_43)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv44_STATE_VARIABLE_U_6_38;

        func_39(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "((pred) is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv40_STATE_VARIABLE_U_4_34);
        STATE_VARIABLE_U_4_34 = ((MR_Word) (conv40_STATE_VARIABLE_U_4_34));
        Var_35 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_41 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_41(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_35)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_34)), &conv42_STATE_VARIABLE_U_5_36);
        STATE_VARIABLE_U_5_36 = ((MR_Word) (conv42_STATE_VARIABLE_U_5_36));
        func_43 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_43(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_5_36)), &conv44_STATE_VARIABLE_U_6_38);
        STATE_VARIABLE_U_6_38 = ((MR_Word) (conv44_STATE_VARIABLE_U_6_38));
      }
      else
      {
        MR_Word STATE_VARIABLE_U_7_40;
        MR_Word STATE_VARIABLE_U_8_41;
        MR_Word STATE_VARIABLE_U_9_43;
        MR_String Var_44;
        MR_Word STATE_VARIABLE_U_10_45;
        MR_Word Mode_98;
        MR_Word Modes_99;
        MR_Word STATE_VARIABLE_U_1_105;
        void MR_CALL (* func_45)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        MR_Box conv46_STATE_VARIABLE_U_7_40;
        void MR_CALL (* func_49)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv50_STATE_VARIABLE_U_9_43;
        void MR_CALL (* func_51)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv52_STATE_VARIABLE_U_10_45;
        void MR_CALL (* func_53)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv54_STATE_VARIABLE_U_6_38;

        func_45(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "(pred(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_32)), &conv46_STATE_VARIABLE_U_7_40);
        STATE_VARIABLE_U_7_40 = ((MR_Word) (conv46_STATE_VARIABLE_U_7_40));
        Mode_98 = ((MR_Word) ((MR_hl_field(1, Modes_15, 0))));
        Modes_99 = ((MR_Word) ((MR_hl_field(1, Modes_15, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Mode_98, STATE_VARIABLE_U_7_40, &STATE_VARIABLE_U_1_105);
        if ((Modes_99 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_8_41 = STATE_VARIABLE_U_1_105;
        else
        {
          MR_Word STATE_VARIABLE_U_2_107;
          void MR_CALL (* func_47)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
          MR_Box conv48_STATE_VARIABLE_U_2_107;

          func_47(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_105)), &conv48_STATE_VARIABLE_U_2_107);
          STATE_VARIABLE_U_2_107 = ((MR_Word) (conv48_STATE_VARIABLE_U_2_107));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_66, Lang_8, InstVarSet_9, Modes_99, STATE_VARIABLE_U_2_107, &STATE_VARIABLE_U_8_41);
        }
        func_49 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_49(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ") is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_8_41)), &conv50_STATE_VARIABLE_U_9_43);
        STATE_VARIABLE_U_9_43 = ((MR_Word) (conv50_STATE_VARIABLE_U_9_43));
        Var_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_17);
        func_51 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_51(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) (Var_44)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_9_43)), &conv52_STATE_VARIABLE_U_10_45);
        STATE_VARIABLE_U_10_45 = ((MR_Word) (conv52_STATE_VARIABLE_U_10_45));
        func_53 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
        func_53(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_10_45)), &conv54_STATE_VARIABLE_U_6_38);
        STATE_VARIABLE_U_6_38 = ((MR_Word) (conv54_STATE_VARIABLE_U_6_38));
      }
      break;
  }
  if ((MaybeArgRegs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_26 = STATE_VARIABLE_U_6_38;
  else
  {
    MR_Word ArgRegs_24 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_16, 0))));
    MR_Word STATE_VARIABLE_U_20_63;
    MR_Word STATE_VARIABLE_U_21_64;
    void MR_CALL (* func_55)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    MR_Box conv56_STATE_VARIABLE_U_20_63;
    void MR_CALL (* func_57)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv58_STATE_VARIABLE_U_26;

    func_55(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) " /* arg regs: [")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_38)), &conv56_STATE_VARIABLE_U_20_63);
    STATE_VARIABLE_U_20_63 = ((MR_Word) (conv56_STATE_VARIABLE_U_20_63));
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_66, ArgRegs_24, STATE_VARIABLE_U_20_63, &STATE_VARIABLE_U_21_64);
    func_57 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_66, 0)), 6))));
    func_57(((MR_Box) (TypeClassInfo_for_pt_output_66)), ((MR_Box) ((MR_String) "] */")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_21_64)), &conv58_STATE_VARIABLE_U_26);
    *STATE_VARIABLE_U_26 = ((MR_Word) (conv58_STATE_VARIABLE_U_26));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_115_101_114_95_100_101_102_105_110_101_100_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_pt_output_29,
  MR_Word Lang_8,
  MR_Word InstVarSet_9,
  MR_Word SymName_10,
  MR_Word ArgInsts_11,
  MR_Word STATE_VARIABLE_U_0_17,
  MR_Word * STATE_VARIABLE_U_18)
{
  switch (Lang_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Name_14;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_U_18;

        Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (Name_14)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv1_STATE_VARIABLE_U_18);
        *STATE_VARIABLE_U_18 = ((MR_Word) (conv1_STATE_VARIABLE_U_18));
      }
      else
      {
        MR_Word STATE_VARIABLE_U_3_21;
        MR_Word STATE_VARIABLE_U_5_24;
        MR_Word STATE_VARIABLE_U_6_25;
        MR_String Name_28;
        MR_Word Inst_53;
        MR_Word Insts_54;
        MR_Word STATE_VARIABLE_U_1_60;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_3_21;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_5_24;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_18;

        Name_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) (Name_28)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_17)), &conv3_STATE_VARIABLE_U_3_21);
        STATE_VARIABLE_U_3_21 = ((MR_Word) (conv3_STATE_VARIABLE_U_3_21));
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_21)), &conv5_STATE_VARIABLE_U_5_24);
        STATE_VARIABLE_U_5_24 = ((MR_Word) (conv5_STATE_VARIABLE_U_5_24));
        Inst_53 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 0))));
        Insts_54 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Inst_53, STATE_VARIABLE_U_5_24, &STATE_VARIABLE_U_1_60);
        if ((Insts_54 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_6_25 = STATE_VARIABLE_U_1_60;
        else
        {
          MR_Word STATE_VARIABLE_U_2_62;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
          MR_Box conv7_STATE_VARIABLE_U_2_62;

          func_6(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_60)), &conv7_STATE_VARIABLE_U_2_62);
          STATE_VARIABLE_U_2_62 = ((MR_Word) (conv7_STATE_VARIABLE_U_2_62));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Insts_54, STATE_VARIABLE_U_2_62, &STATE_VARIABLE_U_6_25);
        }
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_25)), &conv9_STATE_VARIABLE_U_18);
        *STATE_VARIABLE_U_18 = ((MR_Word) (conv9_STATE_VARIABLE_U_18));
      }
      break;
    case (MR_Integer) 0:
      if ((ArgInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_29, SymName_10, STATE_VARIABLE_U_0_17, STATE_VARIABLE_U_18);
      else
      {
        MR_Word STATE_VARIABLE_U_3_34;
        MR_Word STATE_VARIABLE_U_5_36;
        MR_Word STATE_VARIABLE_U_6_37;
        MR_Word Inst_70;
        MR_Word Insts_71;
        MR_Word STATE_VARIABLE_U_1_77;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv11_STATE_VARIABLE_U_5_36;
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv15_STATE_VARIABLE_U_18;

        parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_29, SymName_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_3_34);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_10(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_34)), &conv11_STATE_VARIABLE_U_5_36);
        STATE_VARIABLE_U_5_36 = ((MR_Word) (conv11_STATE_VARIABLE_U_5_36));
        Inst_70 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 0))));
        Insts_71 = ((MR_Word) ((MR_hl_field(1, ArgInsts_11, 1))));
        parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Inst_70, STATE_VARIABLE_U_5_36, &STATE_VARIABLE_U_1_77);
        if ((Insts_71 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_U_6_37 = STATE_VARIABLE_U_1_77;
        else
        {
          MR_Word STATE_VARIABLE_U_2_79;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
          MR_Box conv13_STATE_VARIABLE_U_2_79;

          func_12(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_77)), &conv13_STATE_VARIABLE_U_2_79);
          STATE_VARIABLE_U_2_79 = ((MR_Word) (conv13_STATE_VARIABLE_U_2_79));
          parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_29, Lang_8, InstVarSet_9, Insts_71, STATE_VARIABLE_U_2_79, &STATE_VARIABLE_U_6_37);
        }
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_29, 0)), 6))));
        func_14(((MR_Box) (TypeClassInfo_for_pt_output_29)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_37)), &conv15_STATE_VARIABLE_U_18);
        *STATE_VARIABLE_U_18 = ((MR_Word) (conv15_STATE_VARIABLE_U_18));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_109_109_97_95_114_101_97_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Real_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  switch (Real_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_9;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) ", fake")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_9);
        *STATE_VARIABLE_U_9 = ((MR_Word) (conv1_STATE_VARIABLE_U_9));
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_9;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) ", real")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv3_STATE_VARIABLE_U_9);
        *STATE_VARIABLE_U_9 = ((MR_Word) (conv3_STATE_VARIABLE_U_9));
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_115_95_108_105_118_101_95_99_111_109_109_97_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word IsLive_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  switch (IsLive_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv1_STATE_VARIABLE_U_9;

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "dead, ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv1_STATE_VARIABLE_U_9);
        *STATE_VARIABLE_U_9 = ((MR_Word) (conv1_STATE_VARIABLE_U_9));
      }
      break;
    case (MR_Integer) 0:
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
        MR_Box conv3_STATE_VARIABLE_U_9;

        func_2(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) ((MR_String) "live, ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_8)), &conv3_STATE_VARIABLE_U_9);
        *STATE_VARIABLE_U_9 = ((MR_Word) (conv3_STATE_VARIABLE_U_9));
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_117_110_105_113_117_101_110_101_115_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_13,
  MR_Word Uniq_6,
  MR_String SharedStr_7,
  MR_Word STATE_VARIABLE_U_0_10,
  MR_Word * STATE_VARIABLE_U_11)
{
  MR_String Var_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_11;

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
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_13, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_13)), ((MR_Box) (Var_12)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_10)), &conv1_STATE_VARIABLE_U_11);
  *STATE_VARIABLE_U_11 = ((MR_Word) (conv1_STATE_VARIABLE_U_11));
}

static void MR_CALL 
parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_97_114_103_95_114_101_103_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_U_0_3,
  MR_Word * STATE_VARIABLE_U_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_0_3;
    else
    {
      MR_Word Reg_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Regs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_U_1_18;

      switch (Reg_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
            MR_Box conv1_STATE_VARIABLE_U_1_18;

            func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_3)), &conv1_STATE_VARIABLE_U_1_18);
            STATE_VARIABLE_U_1_18 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_18));
          }
          break;
        case (MR_Integer) 0:
          {
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
            MR_Box conv3_STATE_VARIABLE_U_1_18;

            func_2(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_3)), &conv3_STATE_VARIABLE_U_1_18);
            STATE_VARIABLE_U_1_18 = ((MR_Word) (conv3_STATE_VARIABLE_U_1_18));
          }
          break;
      }
      if ((Regs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_1_18;
      else
      {
        MR_Word STATE_VARIABLE_U_3_22;
        MR_Word Reg_27;
        MR_Word Regs_28;
        MR_Word STATE_VARIABLE_U_1_35;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
        MR_Box conv5_STATE_VARIABLE_U_3_22;

        func_4(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_18)), &conv5_STATE_VARIABLE_U_3_22);
        STATE_VARIABLE_U_3_22 = ((MR_Word) (conv5_STATE_VARIABLE_U_3_22));
        Reg_27 = ((MR_Word) ((MR_hl_field(1, Regs_10, 0))));
        Regs_28 = ((MR_Word) ((MR_hl_field(1, Regs_10, 1))));
        switch (Reg_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
              MR_Box conv7_STATE_VARIABLE_U_1_35;

              func_6(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_f")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_22)), &conv7_STATE_VARIABLE_U_1_35);
              STATE_VARIABLE_U_1_35 = ((MR_Word) (conv7_STATE_VARIABLE_U_1_35));
            }
            break;
          case (MR_Integer) 0:
            {
              void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
              MR_Box conv9_STATE_VARIABLE_U_1_35;

              func_8(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) "reg_r")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_22)), &conv9_STATE_VARIABLE_U_1_35);
              STATE_VARIABLE_U_1_35 = ((MR_Word) (conv9_STATE_VARIABLE_U_1_35));
            }
            break;
        }
        if ((Regs_28 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_4 = STATE_VARIABLE_U_1_35;
        else
        {
          MR_Word STATE_VARIABLE_U_3_38;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
          MR_Box conv11_STATE_VARIABLE_U_3_38;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_U_0_3;

          func_10(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_35)), &conv11_STATE_VARIABLE_U_3_38);
          STATE_VARIABLE_U_3_38 = ((MR_Word) (conv11_STATE_VARIABLE_U_3_38));
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Regs_28;
          next_value_of_STATE_VARIABLE_U_0_3 = STATE_VARIABLE_U_3_38;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_U_0_3 = next_value_of_STATE_VARIABLE_U_0_3;
          continue;
        }
      }
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
