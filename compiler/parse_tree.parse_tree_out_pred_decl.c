/*
** Automatically generated from `parse_tree_out_pred_decl.m'
** by the Mercury compiler,
** version rotd-2025-09-17
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


// :- module parse_tree.parse_tree_out_pred_decl.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_pred_decl__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_pred_decl.mih"


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
#include "recompilation.mih"
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
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0(
  MR_Word TypeClassInfo_for_pt_output_58,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Word S_26);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0(
  MR_Word TypeClassInfo_for_pt_output_58,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Word STATE_VARIABLE_U_0_33,
  MR_Word * STATE_VARIABLE_U_34);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0(
  MR_Word TypeClassInfo_for_pt_output_70,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Word S_28);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0(
  MR_Word TypeClassInfo_for_pt_output_70,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Word STATE_VARIABLE_U_0_37,
  MR_Word * STATE_VARIABLE_U_38);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_pt_output_58,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Box S_26,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0(
  MR_Word TypeClassInfo_for_pt_output_70,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Box S_28,
  MR_Box STATE_VARIABLE_U_0_37,
  MR_Box * STATE_VARIABLE_U_38);


static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_4[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_5[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_6[3][10];




static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][3] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_4[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_5[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_6[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word FuncName_12,
  MR_Word Modes_13,
  MR_Word RetMode_14,
  MR_Word MaybeDet_15,
  MR_Word S_16)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_23;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_25;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_19;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_23);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_25);
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_22, Lang_10, VarSet_11, FuncName_12, Modes_13, RetMode_14, MaybeDet_15, S_16);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_19);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word FuncName_12,
  MR_Word Modes_13,
  MR_Word RetMode_14,
  MR_Word MaybeDet_15,
  MR_Word STATE_VARIABLE_U_0_18,
  MR_Word * STATE_VARIABLE_U_19)
{
  MR_Word STATE_VARIABLE_U_1_23;
  MR_Word STATE_VARIABLE_U_2_25;
  MR_Word STATE_VARIABLE_U_3_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_23;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_25;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_19;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv1_STATE_VARIABLE_U_1_23);
  STATE_VARIABLE_U_1_23 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_23));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_23)), &conv3_STATE_VARIABLE_U_2_25);
  STATE_VARIABLE_U_2_25 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_25));
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_22, Lang_10, VarSet_11, FuncName_12, Modes_13, RetMode_14, MaybeDet_15, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_3_26);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_26)), &conv5_STATE_VARIABLE_U_19);
  *STATE_VARIABLE_U_19 = ((MR_Word) (conv5_STATE_VARIABLE_U_19));
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word Lang_10,
  MR_Word PredOrFunc_11,
  MR_Word InstVarSet_12,
  MR_Word Name_13,
  MR_Word Modes_14,
  MR_Word MaybeDet_15,
  MR_Word S_16)
{
  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_18;
        MR_Word RetMode_19;
        MR_Box conv0_RetMode_19;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_14, &ArgModes_18, &conv0_RetMode_19);
        RetMode_19 = ((MR_Word) (conv0_RetMode_19));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_23, Lang_10, InstVarSet_12, Name_13, ArgModes_18, RetMode_19, MaybeDet_15, S_16);
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_23, Lang_10, InstVarSet_12, Name_13, Modes_14, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_15, S_16);
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word Lang_10,
  MR_Word PredOrFunc_11,
  MR_Word InstVarSet_12,
  MR_Word Name_13,
  MR_Word Modes_14,
  MR_Word MaybeDet_15,
  MR_Word STATE_VARIABLE_U_0_20,
  MR_Word * STATE_VARIABLE_U_21)
{
  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_18;
        MR_Word RetMode_19;
        MR_Box conv0_RetMode_19;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_14, &ArgModes_18, &conv0_RetMode_19);
        RetMode_19 = ((MR_Word) (conv0_RetMode_19));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_23, Lang_10, InstVarSet_12, Name_13, ArgModes_18, RetMode_19, MaybeDet_15, STATE_VARIABLE_U_0_20, STATE_VARIABLE_U_21);
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_23, Lang_10, InstVarSet_12, Name_13, Modes_14, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_15, STATE_VARIABLE_U_0_20, STATE_VARIABLE_U_21);
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_109_111_100_101_95_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Word S_16)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_23;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_25;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_19;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_23);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_25);
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_22, Lang_10, VarSet_11, PredName_12, Modes_13, MaybeWithInst_14, MaybeDet_15, S_16);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_19);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_109_111_100_101_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Word STATE_VARIABLE_U_0_18,
  MR_Word * STATE_VARIABLE_U_19)
{
  MR_Word STATE_VARIABLE_U_1_23;
  MR_Word STATE_VARIABLE_U_2_25;
  MR_Word STATE_VARIABLE_U_3_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_23;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_25;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_19;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_18)), &conv1_STATE_VARIABLE_U_1_23);
  STATE_VARIABLE_U_1_23 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_23));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_23)), &conv3_STATE_VARIABLE_U_2_25);
  STATE_VARIABLE_U_2_25 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_25));
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_22, Lang_10, VarSet_11, PredName_12, Modes_13, MaybeWithInst_14, MaybeDet_15, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_3_26);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_26)), &conv5_STATE_VARIABLE_U_19);
  *STATE_VARIABLE_U_19 = ((MR_Word) (conv5_STATE_VARIABLE_U_19));
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_100_101_99_108_95_103_101_110_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word FuncName_14,
  MR_Word Modes_15,
  MR_Word RetMode_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Word S_20)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_24;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_26;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_23;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (StartString_18)), ((MR_Box) (S_20)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_24);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (S_20)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_26);
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_28, Lang_12, VarSet_13, FuncName_14, Modes_15, RetMode_16, MaybeDet_17, S_20);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (Separator_19)), ((MR_Box) (S_20)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_23);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_100_101_99_108_95_103_101_110_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word FuncName_14,
  MR_Word Modes_15,
  MR_Word RetMode_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Word STATE_VARIABLE_U_0_22,
  MR_Word * STATE_VARIABLE_U_23)
{
  MR_Word STATE_VARIABLE_U_1_24;
  MR_Word STATE_VARIABLE_U_2_26;
  MR_Word STATE_VARIABLE_U_3_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_24;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_26;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_23;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (StartString_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_22)), &conv1_STATE_VARIABLE_U_1_24);
  STATE_VARIABLE_U_1_24 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_24));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_24)), &conv3_STATE_VARIABLE_U_2_26);
  STATE_VARIABLE_U_2_26 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_26));
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_28, Lang_12, VarSet_13, FuncName_14, Modes_15, RetMode_16, MaybeDet_17, STATE_VARIABLE_U_2_26, &STATE_VARIABLE_U_3_27);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (Separator_19)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_27)), &conv5_STATE_VARIABLE_U_23);
  *STATE_VARIABLE_U_23 = ((MR_Word) (conv5_STATE_VARIABLE_U_23));
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_100_101_99_108_95_103_101_110_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word PredName_14,
  MR_Word Modes_15,
  MR_Word MaybeWithInst_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Word S_20)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_24;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_26;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_23;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (StartString_18)), ((MR_Box) (S_20)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_24);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (S_20)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_26);
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_28, Lang_12, VarSet_13, PredName_14, Modes_15, MaybeWithInst_16, MaybeDet_17, S_20);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (Separator_19)), ((MR_Box) (S_20)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_23);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_100_101_99_108_95_103_101_110_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word PredName_14,
  MR_Word Modes_15,
  MR_Word MaybeWithInst_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Word STATE_VARIABLE_U_0_22,
  MR_Word * STATE_VARIABLE_U_23)
{
  MR_Word STATE_VARIABLE_U_1_24;
  MR_Word STATE_VARIABLE_U_2_26;
  MR_Word STATE_VARIABLE_U_3_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_24;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_26;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_23;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (StartString_18)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_22)), &conv1_STATE_VARIABLE_U_1_24);
  STATE_VARIABLE_U_1_24 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_24));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_24)), &conv3_STATE_VARIABLE_U_2_26);
  STATE_VARIABLE_U_2_26 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_26));
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_28, Lang_12, VarSet_13, PredName_14, Modes_15, MaybeWithInst_16, MaybeDet_17, STATE_VARIABLE_U_2_26, &STATE_VARIABLE_U_3_27);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (Separator_19)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_27)), &conv5_STATE_VARIABLE_U_23);
  *STATE_VARIABLE_U_23 = ((MR_Word) (conv5_STATE_VARIABLE_U_23));
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word TypeVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word ExistQVars_14,
  MR_Word PredName_15,
  MR_Word Types_16,
  MR_Word MaybeDet_17,
  MR_Word Purity_18,
  MR_Word ClassContext_19,
  MR_Word S_20)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0(TypeClassInfo_for_pt_output_28, TypeVarSet_12, VarNamePrint_13, (MR_Integer) 0, ExistQVars_14, PredName_15, Types_16, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_17, Purity_18, ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", S_20);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word TypeVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word ExistQVars_14,
  MR_Word PredName_15,
  MR_Word Types_16,
  MR_Word MaybeDet_17,
  MR_Word Purity_18,
  MR_Word ClassContext_19,
  MR_Word STATE_VARIABLE_U_0_23,
  MR_Word * STATE_VARIABLE_U_24)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0(TypeClassInfo_for_pt_output_28, TypeVarSet_12, VarNamePrint_13, (MR_Integer) 0, ExistQVars_14, PredName_15, Types_16, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_17, Purity_18, ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", STATE_VARIABLE_U_0_23, STATE_VARIABLE_U_24);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_12_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word TypeVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Word ExistQVars_15,
  MR_Word FuncName_16,
  MR_Word ArgTypes_17,
  MR_Word RetType_18,
  MR_Word MaybeDet_19,
  MR_Word Purity_20,
  MR_Word ClassContext_21,
  MR_Word S_22)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0(TypeClassInfo_for_pt_output_28, TypeVarSet_13, VarNamePrint_14, ExistQVars_15, FuncName_16, ArgTypes_17, RetType_18, MaybeDet_19, Purity_20, ClassContext_21, (MR_String) ":- ", (MR_String) ".\n", S_22);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_12_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word TypeVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Word ExistQVars_15,
  MR_Word FuncName_16,
  MR_Word ArgTypes_17,
  MR_Word RetType_18,
  MR_Word MaybeDet_19,
  MR_Word Purity_20,
  MR_Word ClassContext_21,
  MR_Word STATE_VARIABLE_U_0_24,
  MR_Word * STATE_VARIABLE_U_25)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0(TypeClassInfo_for_pt_output_28, TypeVarSet_13, VarNamePrint_14, ExistQVars_15, FuncName_16, ArgTypes_17, RetType_18, MaybeDet_19, Purity_20, ClassContext_21, (MR_String) ":- ", (MR_String) ".\n", STATE_VARIABLE_U_0_24, STATE_VARIABLE_U_25);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_16_p_0(
  MR_Word TypeClassInfo_for_pt_output_50,
  MR_Word Lang_17,
  MR_Word VarNamePrint_18,
  MR_Word TypeVarSet_19,
  MR_Word InstVarSet_20,
  MR_Word ExistQVars_21,
  MR_Word FuncName_22,
  MR_Word TypesAndMaybeModes_23,
  MR_Word MaybeDet_24,
  MR_Word Purity_25,
  MR_Word ClassContext_26,
  MR_String StartString_27,
  MR_String Separator_28,
  MR_String Terminator_29,
  MR_Word S_30)
{
  switch (MR_tag((MR_Word) TypesAndMaybeModes_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_pred_decl.mercury_format_func_decl\'/16", (MR_String) "no_types_arity_zero");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Types_32 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes_23, 0))));
        MR_Word ArgTypes_33;
        MR_Word RetType_34;
        MR_Box conv8_RetType_34;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_32, &ArgTypes_33, &conv8_RetType_34);
        RetType_34 = ((MR_Word) (conv8_RetType_34));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0(TypeClassInfo_for_pt_output_50, TypeVarSet_19, VarNamePrint_18, ExistQVars_21, FuncName_22, ArgTypes_33, RetType_34, MaybeDet_24, Purity_25, ClassContext_26, StartString_27, Terminator_29, S_30);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypesAndModes_35 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes_23, 0))));
        MR_Word Modes_36;
        MR_Word ArgModes_37;
        MR_Word RetMode_38;
        MR_Word Types_47;
        MR_Word ArgTypes_48;
        MR_Word RetType_49;
        MR_Box conv0_RetType_49;
        MR_Box conv1_RetMode_38;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_1_54;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_2_56;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_40;

        parse_tree__prog_item__split_types_and_modes_3_p_0(TypesAndModes_35, &Types_47, &Modes_36);
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_47, &ArgTypes_48, &conv0_RetType_49);
        RetType_49 = ((MR_Word) (conv0_RetType_49));
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_36, &ArgModes_37, &conv1_RetMode_38);
        RetMode_38 = ((MR_Word) (conv1_RetMode_38));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0(TypeClassInfo_for_pt_output_50, TypeVarSet_19, VarNamePrint_18, ExistQVars_21, FuncName_22, ArgTypes_48, RetType_49, (MR_Word) ((MR_Unsigned) 0U), Purity_25, ClassContext_26, StartString_27, Separator_28, S_30);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) (StartString_27)), ((MR_Box) (S_30)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_1_54);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (S_30)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_2_56);
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_50, Lang_17, InstVarSet_20, FuncName_22, ArgModes_37, RetMode_38, MaybeDet_24, S_30);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) (Terminator_29)), ((MR_Box) (S_30)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_40);
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_16_p_0(
  MR_Word TypeClassInfo_for_pt_output_50,
  MR_Word Lang_17,
  MR_Word VarNamePrint_18,
  MR_Word TypeVarSet_19,
  MR_Word InstVarSet_20,
  MR_Word ExistQVars_21,
  MR_Word FuncName_22,
  MR_Word TypesAndMaybeModes_23,
  MR_Word MaybeDet_24,
  MR_Word Purity_25,
  MR_Word ClassContext_26,
  MR_String StartString_27,
  MR_String Separator_28,
  MR_String Terminator_29,
  MR_Word STATE_VARIABLE_U_0_39,
  MR_Word * STATE_VARIABLE_U_40)
{
  switch (MR_tag((MR_Word) TypesAndMaybeModes_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_pred_decl.mercury_format_func_decl\'/16", (MR_String) "no_types_arity_zero");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Types_32 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes_23, 0))));
        MR_Word ArgTypes_33;
        MR_Word RetType_34;
        MR_Box conv8_RetType_34;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_32, &ArgTypes_33, &conv8_RetType_34);
        RetType_34 = ((MR_Word) (conv8_RetType_34));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0(TypeClassInfo_for_pt_output_50, TypeVarSet_19, VarNamePrint_18, ExistQVars_21, FuncName_22, ArgTypes_33, RetType_34, MaybeDet_24, Purity_25, ClassContext_26, StartString_27, Terminator_29, STATE_VARIABLE_U_0_39, STATE_VARIABLE_U_40);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypesAndModes_35 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes_23, 0))));
        MR_Word Modes_36;
        MR_Word ArgModes_37;
        MR_Word RetMode_38;
        MR_Word STATE_VARIABLE_U_2_45;
        MR_Word Types_47;
        MR_Word ArgTypes_48;
        MR_Word RetType_49;
        MR_Word STATE_VARIABLE_U_1_54;
        MR_Word STATE_VARIABLE_U_2_56;
        MR_Word STATE_VARIABLE_U_3_57;
        MR_Box conv0_RetType_49;
        MR_Box conv1_RetMode_38;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_U_1_54;
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_U_2_56;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_U_40;

        parse_tree__prog_item__split_types_and_modes_3_p_0(TypesAndModes_35, &Types_47, &Modes_36);
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_47, &ArgTypes_48, &conv0_RetType_49);
        RetType_49 = ((MR_Word) (conv0_RetType_49));
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_36, &ArgModes_37, &conv1_RetMode_38);
        RetMode_38 = ((MR_Word) (conv1_RetMode_38));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0(TypeClassInfo_for_pt_output_50, TypeVarSet_19, VarNamePrint_18, ExistQVars_21, FuncName_22, ArgTypes_48, RetType_49, (MR_Word) ((MR_Unsigned) 0U), Purity_25, ClassContext_26, StartString_27, Separator_28, STATE_VARIABLE_U_0_39, &STATE_VARIABLE_U_2_45);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) (StartString_27)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_45)), &conv3_STATE_VARIABLE_U_1_54);
        STATE_VARIABLE_U_1_54 = ((MR_Word) (conv3_STATE_VARIABLE_U_1_54));
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_54)), &conv5_STATE_VARIABLE_U_2_56);
        STATE_VARIABLE_U_2_56 = ((MR_Word) (conv5_STATE_VARIABLE_U_2_56));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_50, Lang_17, InstVarSet_20, FuncName_22, ArgModes_37, RetMode_38, MaybeDet_24, STATE_VARIABLE_U_2_56, &STATE_VARIABLE_U_3_57);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_6(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) (Terminator_29)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_57)), &conv7_STATE_VARIABLE_U_40);
        *STATE_VARIABLE_U_40 = ((MR_Word) (conv7_STATE_VARIABLE_U_40));
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_19_p_0(
  MR_Word TypeClassInfo_for_pt_output_45,
  MR_Word Lang_20,
  MR_Word VarNamePrint_21,
  MR_Word TypeVarSet_22,
  MR_Word InstVarSet_23,
  MR_Word PredOrFunc_24,
  MR_Word ExistQVars_25,
  MR_Word PredName_26,
  MR_Word TypesAndMaybeModes_27,
  MR_Word MaybeWithType_28,
  MR_Word MaybeWithInst_29,
  MR_Word MaybeDet0_30,
  MR_Word Purity_31,
  MR_Word ClassContext_32,
  MR_String StartString_33,
  MR_String Separator_34,
  MR_String Terminator_35,
  MR_Word S_36)
{
  MR_Word Types_38;
  MR_Word MaybeModes_39;

  parse_tree__prog_item__get_declared_types_and_maybe_modes_5_p_0(TypesAndMaybeModes_27, MaybeWithInst_29, MaybeDet0_30, &Types_38, &MaybeModes_39);
  if ((MaybeModes_39 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0(TypeClassInfo_for_pt_output_45, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, MaybeWithType_28, MaybeDet0_30, Purity_31, ClassContext_32, StartString_33, Terminator_35, S_36);
  else
  {
    MR_Word Modes_40 = ((MR_Word) ((MR_hl_field(1, MaybeModes_39, 0))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_46;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_2_48;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_43;

    parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0(TypeClassInfo_for_pt_output_45, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, MaybeWithType_28, (MR_Word) ((MR_Unsigned) 0U), Purity_31, ClassContext_32, StartString_33, Separator_34, S_36);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) (StartString_33)), ((MR_Box) (S_36)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_46);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (S_36)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_48);
    parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_45, Lang_20, InstVarSet_23, PredName_26, Modes_40, MaybeWithInst_29, MaybeDet0_30, S_36);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) (Terminator_35)), ((MR_Box) (S_36)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_43);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_19_p_0(
  MR_Word TypeClassInfo_for_pt_output_45,
  MR_Word Lang_20,
  MR_Word VarNamePrint_21,
  MR_Word TypeVarSet_22,
  MR_Word InstVarSet_23,
  MR_Word PredOrFunc_24,
  MR_Word ExistQVars_25,
  MR_Word PredName_26,
  MR_Word TypesAndMaybeModes_27,
  MR_Word MaybeWithType_28,
  MR_Word MaybeWithInst_29,
  MR_Word MaybeDet0_30,
  MR_Word Purity_31,
  MR_Word ClassContext_32,
  MR_String StartString_33,
  MR_String Separator_34,
  MR_String Terminator_35,
  MR_Word STATE_VARIABLE_U_0_42,
  MR_Word * STATE_VARIABLE_U_43)
{
  MR_Word Types_38;
  MR_Word MaybeModes_39;

  parse_tree__prog_item__get_declared_types_and_maybe_modes_5_p_0(TypesAndMaybeModes_27, MaybeWithInst_29, MaybeDet0_30, &Types_38, &MaybeModes_39);
  if ((MaybeModes_39 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0(TypeClassInfo_for_pt_output_45, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, MaybeWithType_28, MaybeDet0_30, Purity_31, ClassContext_32, StartString_33, Terminator_35, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
  else
  {
    MR_Word Modes_40 = ((MR_Word) ((MR_hl_field(1, MaybeModes_39, 0))));
    MR_Word STATE_VARIABLE_U_1_44;
    MR_Word STATE_VARIABLE_U_1_46;
    MR_Word STATE_VARIABLE_U_2_48;
    MR_Word STATE_VARIABLE_U_3_49;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_1_46;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_2_48;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv5_STATE_VARIABLE_U_43;

    parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0(TypeClassInfo_for_pt_output_45, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, MaybeWithType_28, (MR_Word) ((MR_Unsigned) 0U), Purity_31, ClassContext_32, StartString_33, Separator_34, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_1_44);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) (StartString_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_44)), &conv1_STATE_VARIABLE_U_1_46);
    STATE_VARIABLE_U_1_46 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_46));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_46)), &conv3_STATE_VARIABLE_U_2_48);
    STATE_VARIABLE_U_2_48 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_48));
    parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(TypeClassInfo_for_pt_output_45, Lang_20, InstVarSet_23, PredName_26, Modes_40, MaybeWithInst_29, MaybeDet0_30, STATE_VARIABLE_U_2_48, &STATE_VARIABLE_U_3_49);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) (Terminator_35)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_49)), &conv5_STATE_VARIABLE_U_43);
    *STATE_VARIABLE_U_43 = ((MR_Word) (conv5_STATE_VARIABLE_U_43));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word FuncName_13,
  MR_Word Modes_14,
  MR_Word RetMode_15,
  MR_Word MaybeDet_16)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), Lang_11, VarSet_12, FuncName_13, Modes_14, RetMode_15, MaybeDet_16, Stream_10);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word VarSet_9,
  MR_Word FuncName_10,
  MR_Word Modes_11,
  MR_Word RetMode_12,
  MR_Word MaybeDet_13)
{
  MR_String Str_14;
  MR_Word State0_15;
  MR_Word State_16;

  State0_15 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), Lang_8, VarSet_9, FuncName_10, Modes_11, RetMode_12, MaybeDet_13, State0_15, &State_16);
  Str_14 = mercury__string__builder__to_string_1_f_0(State_16);
  return Str_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeDet_14)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), Lang_10, VarSet_11, PredName_12, Modes_13, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_14, Stream_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word VarSet_8,
  MR_Word PredName_9,
  MR_Word Modes_10,
  MR_Word MaybeDet_11)
{
  MR_String Str_12;
  MR_Word State0_13;
  MR_Word State_14;

  State0_13 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), Lang_7, VarSet_8, PredName_9, Modes_10, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_11, State0_13, &State_14);
  Str_12 = mercury__string__builder__to_string_1_f_0(State_14);
  return Str_12;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word Lang_10,
  MR_Word PredOrFunc_11,
  MR_Word InstVarSet_12,
  MR_Word Name_13,
  MR_Word Modes_14,
  MR_Word MaybeDet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21)
{
  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_18;
        MR_Word RetMode_19;
        MR_Box conv0_RetMode_19;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_14, &ArgModes_18, &conv0_RetMode_19);
        RetMode_19 = ((MR_Word) (conv0_RetMode_19));
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_23, Lang_10, InstVarSet_12, Name_13, ArgModes_18, RetMode_19, MaybeDet_15, S_16, STATE_VARIABLE_U_0_20, STATE_VARIABLE_U_21);
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_23, Lang_10, InstVarSet_12, Name_13, Modes_14, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_15, S_16, STATE_VARIABLE_U_0_20, STATE_VARIABLE_U_21);
      break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_mode_subdecl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word PredOrFunc_12,
  MR_Word InstVarSet_13,
  MR_Word Name_14,
  MR_Word Modes_15,
  MR_Word MaybeDet_16)
{
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_21;
        MR_Word RetMode_22;
        MR_Box conv0_RetMode_22;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_21, &conv0_RetMode_22);
        RetMode_22 = ((MR_Word) (conv0_RetMode_22));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), Lang_11, InstVarSet_13, Name_14, ArgModes_21, RetMode_22, MaybeDet_16, Stream_10);
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), Lang_11, InstVarSet_13, Name_14, Modes_15, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_16, Stream_10);
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word PredOrFunc_9,
  MR_Word InstVarSet_10,
  MR_Word Name_11,
  MR_Word Modes_12,
  MR_Word MaybeDet_13)
{
  MR_String Str_14;
  MR_Word State0_15;
  MR_Word State_16;

  State0_15 = mercury__string__builder__init_0_f_0();
  switch (PredOrFunc_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_19;
        MR_Word RetMode_20;
        MR_Box conv0_RetMode_20;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_12, &ArgModes_19, &conv0_RetMode_20);
        RetMode_20 = ((MR_Word) (conv0_RetMode_20));
        parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), Lang_8, InstVarSet_10, Name_11, ArgModes_19, RetMode_20, MaybeDet_13, State0_15, &State_16);
      }
      break;
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), Lang_8, InstVarSet_10, Name_11, Modes_12, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_13, State0_15, &State_16);
      break;
  }
  Str_14 = mercury__string__builder__to_string_1_f_0(State_16);
  return Str_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_gen_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word FuncName_14,
  MR_Word Modes_15,
  MR_Word RetMode_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Box S_20,
  MR_Box STATE_VARIABLE_U_0_22,
  MR_Box * STATE_VARIABLE_U_23)
{
  MR_Box STATE_VARIABLE_U_1_24;
  MR_Box STATE_VARIABLE_U_2_26;
  MR_Box STATE_VARIABLE_U_3_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (StartString_18)), S_20, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_1_24);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "mode ")), S_20, STATE_VARIABLE_U_1_24, &STATE_VARIABLE_U_2_26);
  parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_28, Lang_12, VarSet_13, FuncName_14, Modes_15, RetMode_16, MaybeDet_17, S_20, STATE_VARIABLE_U_2_26, &STATE_VARIABLE_U_3_27);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (Separator_19)), S_20, STATE_VARIABLE_U_3_27, STATE_VARIABLE_U_23);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word FuncName_12,
  MR_Word Modes_13,
  MR_Word RetMode_14,
  MR_Word MaybeDet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  MR_Box STATE_VARIABLE_U_1_23;
  MR_Box STATE_VARIABLE_U_2_25;
  MR_Box STATE_VARIABLE_U_3_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ":- ")), S_16, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_1_23);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "mode ")), S_16, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_2_25);
  parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_22, Lang_10, VarSet_11, FuncName_12, Modes_13, RetMode_14, MaybeDet_15, S_16, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_3_26);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".\n")), S_16, STATE_VARIABLE_U_3_26, STATE_VARIABLE_U_19);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word FuncName_13,
  MR_Word Modes_14,
  MR_Word RetMode_15,
  MR_Word MaybeDet_16)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_23;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_25;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_IO_19;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]))), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_23);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), 0)), 6))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]))), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_25);
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), Lang_11, VarSet_12, FuncName_13, Modes_14, RetMode_15, MaybeDet_16, Stream_10);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), 0)), 6))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_19);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_34,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word FuncName_12,
  MR_Word Modes_13,
  MR_Word RetMode_14,
  MR_Word MaybeDet_15,
  MR_Word S_16)
{
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_6_32;

  if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_34, (MR_Integer) 0, FuncName_12, S_16);
  else
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_25;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_4_28;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_34, (MR_Integer) 0, FuncName_12, S_16);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_25);
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_34, Lang_10, InstVarSet_11, Modes_13, S_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_4_28);
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_6_32);
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_34, Lang_10, InstVarSet_11, RetMode_14, S_16);
  if (!((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Det_35 = ((MR_Word) ((MR_hl_field(1, MaybeDet_15, 0))));
    MR_String Var_38;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    MR_Box conv7_STATE_VARIABLE_U_1_37;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv9_STATE_VARIABLE_U_21;

    func_6(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_1_37);
    Var_38 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_35);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_8(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) (Var_38)), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_21);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_decl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word VarSet_9,
  MR_Word FuncName_10,
  MR_Word Modes_11,
  MR_Word RetMode_12,
  MR_Word MaybeDet_13)
{
  MR_String Str_14;
  MR_Word State0_15;
  MR_Word State_16;
  MR_Word STATE_VARIABLE_U_1_21;
  MR_Word STATE_VARIABLE_U_2_23;
  MR_Word STATE_VARIABLE_U_3_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_1_21;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_23;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_State_16;

  State0_15 = mercury__string__builder__init_0_f_0();
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_15)), &conv1_STATE_VARIABLE_U_1_21);
  STATE_VARIABLE_U_1_21 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_21));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), 0)), 6))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]))), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_21)), &conv3_STATE_VARIABLE_U_2_23);
  STATE_VARIABLE_U_2_23 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_23));
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), Lang_8, VarSet_9, FuncName_10, Modes_11, RetMode_12, MaybeDet_13, STATE_VARIABLE_U_2_23, &STATE_VARIABLE_U_3_24);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), 0)), 6))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_24)), &conv5_State_16);
  State_16 = ((MR_Word) (conv5_State_16));
  Str_14 = mercury__string__builder__to_string_1_f_0(State_16);
  return Str_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_34,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word FuncName_12,
  MR_Word Modes_13,
  MR_Word RetMode_14,
  MR_Word MaybeDet_15,
  MR_Word STATE_VARIABLE_U_0_20,
  MR_Word * STATE_VARIABLE_U_21)
{
  MR_Word STATE_VARIABLE_U_4_28;
  MR_Word STATE_VARIABLE_U_6_32;
  MR_Word STATE_VARIABLE_U_7_33;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_6_32;

  if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_34, (MR_Integer) 0, FuncName_12, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_4_28);
  else
  {
    MR_Word STATE_VARIABLE_U_1_23;
    MR_Word STATE_VARIABLE_U_2_25;
    MR_Word STATE_VARIABLE_U_3_26;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_25;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_4_28;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_34, (MR_Integer) 0, FuncName_12, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_1_23);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_23)), &conv1_STATE_VARIABLE_U_2_25);
    STATE_VARIABLE_U_2_25 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_25));
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_34, Lang_10, InstVarSet_11, Modes_13, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_3_26);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_26)), &conv3_STATE_VARIABLE_U_4_28);
    STATE_VARIABLE_U_4_28 = ((MR_Word) (conv3_STATE_VARIABLE_U_4_28));
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_28)), &conv5_STATE_VARIABLE_U_6_32);
  STATE_VARIABLE_U_6_32 = ((MR_Word) (conv5_STATE_VARIABLE_U_6_32));
  parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_34, Lang_10, InstVarSet_11, RetMode_14, STATE_VARIABLE_U_6_32, &STATE_VARIABLE_U_7_33);
  if ((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_21 = STATE_VARIABLE_U_7_33;
  else
  {
    MR_Word Det_35 = ((MR_Word) ((MR_hl_field(1, MaybeDet_15, 0))));
    MR_Word STATE_VARIABLE_U_1_37;
    MR_String Var_38;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    MR_Box conv7_STATE_VARIABLE_U_1_37;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv9_STATE_VARIABLE_U_21;

    func_6(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_7_33)), &conv7_STATE_VARIABLE_U_1_37);
    STATE_VARIABLE_U_1_37 = ((MR_Word) (conv7_STATE_VARIABLE_U_1_37));
    Var_38 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_35);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_8(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) (Var_38)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_37)), &conv9_STATE_VARIABLE_U_21);
    *STATE_VARIABLE_U_21 = ((MR_Word) (conv9_STATE_VARIABLE_U_21));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_gen_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word PredName_14,
  MR_Word Modes_15,
  MR_Word MaybeWithInst_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Box S_20,
  MR_Box STATE_VARIABLE_U_0_22,
  MR_Box * STATE_VARIABLE_U_23)
{
  MR_Box STATE_VARIABLE_U_1_24;
  MR_Box STATE_VARIABLE_U_2_26;
  MR_Box STATE_VARIABLE_U_3_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (StartString_18)), S_20, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_1_24);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) ((MR_String) "mode ")), S_20, STATE_VARIABLE_U_1_24, &STATE_VARIABLE_U_2_26);
  parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_28, Lang_12, VarSet_13, PredName_14, Modes_15, MaybeWithInst_16, MaybeDet_17, S_20, STATE_VARIABLE_U_2_26, &STATE_VARIABLE_U_3_27);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_28, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_28)), ((MR_Box) (Separator_19)), S_20, STATE_VARIABLE_U_3_27, STATE_VARIABLE_U_23);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_mode_decl_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  MR_Box STATE_VARIABLE_U_1_23;
  MR_Box STATE_VARIABLE_U_2_25;
  MR_Box STATE_VARIABLE_U_3_26;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ":- ")), S_16, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_1_23);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) "mode ")), S_16, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_2_25);
  parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_22, Lang_10, VarSet_11, PredName_12, Modes_13, MaybeWithInst_14, MaybeDet_15, S_16, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_3_26);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".\n")), S_16, STATE_VARIABLE_U_3_26, STATE_VARIABLE_U_19);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word PredName_13,
  MR_Word Modes_14,
  MR_Word MaybeWithInst_15,
  MR_Word MaybeDet_16)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_23;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_25;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_IO_19;

  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]))), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_23);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), 0)), 6))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]))), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_2_25);
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), Lang_11, VarSet_12, PredName_13, Modes_14, MaybeWithInst_15, MaybeDet_16, Stream_10);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), 0)), 6))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_19);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_37,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Word S_16)
{
  if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_37, (MR_Integer) 0, PredName_12, S_16);
  else
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_26;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_4_29;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_37, (MR_Integer) 0, PredName_12, S_16);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_26);
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_37, Lang_10, InstVarSet_11, Modes_13, S_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_4_29);
  }
  if (!((MaybeWithInst_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word WithInst_20 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst_14, 0))));
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    MR_Box conv5_STATE_VARIABLE_U_6_33;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv7_STATE_VARIABLE_U_8_36;

    func_4(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) " \140with_inst\140 (")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_6_33);
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_37, Lang_10, InstVarSet_11, WithInst_20, S_16);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_6(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_8_36);
  }
  if (!((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Det_38 = ((MR_Word) ((MR_hl_field(1, MaybeDet_15, 0))));
    MR_String Var_41;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    MR_Box conv9_STATE_VARIABLE_U_1_40;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_22;

    func_8(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_1_40);
    Var_41 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_38);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) (Var_41)), ((MR_Box) (S_16)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_22);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_decl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word VarSet_9,
  MR_Word PredName_10,
  MR_Word Modes_11,
  MR_Word MaybeWithInst_12,
  MR_Word MaybeDet_13)
{
  MR_String Str_14;
  MR_Word State0_15;
  MR_Word State_16;
  MR_Word STATE_VARIABLE_U_1_21;
  MR_Word STATE_VARIABLE_U_2_23;
  MR_Word STATE_VARIABLE_U_3_24;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_1_21;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_2_23;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_State_16;

  State0_15 = mercury__string__builder__init_0_f_0();
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]))), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_15)), &conv1_STATE_VARIABLE_U_1_21);
  STATE_VARIABLE_U_1_21 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_21));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), 0)), 6))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]))), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_21)), &conv3_STATE_VARIABLE_U_2_23);
  STATE_VARIABLE_U_2_23 = ((MR_Word) (conv3_STATE_VARIABLE_U_2_23));
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), Lang_8, VarSet_9, PredName_10, Modes_11, MaybeWithInst_12, MaybeDet_13, STATE_VARIABLE_U_2_23, &STATE_VARIABLE_U_3_24);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), 0)), 6))));
  func_4(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]))), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_24)), &conv5_State_16);
  State_16 = ((MR_Word) (conv5_State_16));
  Str_14 = mercury__string__builder__to_string_1_f_0(State_16);
  return Str_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_109_111_100_101_95_115_117_98_100_101_99_108_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_37,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Word STATE_VARIABLE_U_0_21,
  MR_Word * STATE_VARIABLE_U_22)
{
  MR_Word STATE_VARIABLE_U_4_29;
  MR_Word STATE_VARIABLE_U_8_36;

  if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_37, (MR_Integer) 0, PredName_12, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_4_29);
  else
  {
    MR_Word STATE_VARIABLE_U_1_24;
    MR_Word STATE_VARIABLE_U_2_26;
    MR_Word STATE_VARIABLE_U_3_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_26;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_4_29;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_37, (MR_Integer) 0, PredName_12, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_1_24);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_24)), &conv1_STATE_VARIABLE_U_2_26);
    STATE_VARIABLE_U_2_26 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_26));
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_109_111_100_101_95_108_105_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_37, Lang_10, InstVarSet_11, Modes_13, STATE_VARIABLE_U_2_26, &STATE_VARIABLE_U_3_27);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_27)), &conv3_STATE_VARIABLE_U_4_29);
    STATE_VARIABLE_U_4_29 = ((MR_Word) (conv3_STATE_VARIABLE_U_4_29));
  }
  if ((MaybeWithInst_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_8_36 = STATE_VARIABLE_U_4_29;
  else
  {
    MR_Word WithInst_20 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst_14, 0))));
    MR_Word STATE_VARIABLE_U_6_33;
    MR_Word STATE_VARIABLE_U_7_34;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    MR_Box conv5_STATE_VARIABLE_U_6_33;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv7_STATE_VARIABLE_U_8_36;

    func_4(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) " \140with_inst\140 (")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_29)), &conv5_STATE_VARIABLE_U_6_33);
    STATE_VARIABLE_U_6_33 = ((MR_Word) (conv5_STATE_VARIABLE_U_6_33));
    parse_tree__parse_tree_out_inst__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_37, Lang_10, InstVarSet_11, WithInst_20, STATE_VARIABLE_U_6_33, &STATE_VARIABLE_U_7_34);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_6(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_7_34)), &conv7_STATE_VARIABLE_U_8_36);
    STATE_VARIABLE_U_8_36 = ((MR_Word) (conv7_STATE_VARIABLE_U_8_36));
  }
  if ((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_22 = STATE_VARIABLE_U_8_36;
  else
  {
    MR_Word Det_38 = ((MR_Word) ((MR_hl_field(1, MaybeDet_15, 0))));
    MR_Word STATE_VARIABLE_U_1_40;
    MR_String Var_41;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    MR_Box conv9_STATE_VARIABLE_U_1_40;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_22;

    func_8(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_8_36)), &conv9_STATE_VARIABLE_U_1_40);
    STATE_VARIABLE_U_1_40 = ((MR_Word) (conv9_STATE_VARIABLE_U_1_40));
    Var_41 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_38);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) (Var_41)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_40)), &conv11_STATE_VARIABLE_U_22);
    *STATE_VARIABLE_U_22 = ((MR_Word) (conv11_STATE_VARIABLE_U_22));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_12_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word TypeVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Word ExistQVars_15,
  MR_Word FuncName_16,
  MR_Word ArgTypes_17,
  MR_Word RetType_18,
  MR_Word MaybeDet_19,
  MR_Word Purity_20,
  MR_Word ClassContext_21,
  MR_Box S_22,
  MR_Box STATE_VARIABLE_U_0_24,
  MR_Box * STATE_VARIABLE_U_25)
{
  parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(TypeClassInfo_for_pt_output_28, TypeVarSet_13, VarNamePrint_14, ExistQVars_15, FuncName_16, ArgTypes_17, RetType_18, MaybeDet_19, Purity_20, ClassContext_21, (MR_String) ":- ", (MR_String) ".\n", S_22, STATE_VARIABLE_U_0_24, STATE_VARIABLE_U_25);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_12_p_0(
  MR_Word Stream_13,
  MR_Word VarSet_14,
  MR_Word ExistQVars_15,
  MR_Word FuncName_16,
  MR_Word ArgTypes_17,
  MR_Word RetType_18,
  MR_Word MaybeDet_19,
  MR_Word Purity_20,
  MR_Word ClassContext_21,
  MR_Word VarNamePrint_22)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), VarSet_14, ExistQVars_15, FuncName_16, ArgTypes_17, RetType_18, MaybeDet_19, Purity_20, ClassContext_21, VarNamePrint_22, (MR_String) ":- ", (MR_String) ".\n", Stream_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0(
  MR_Word TypeClassInfo_for_pt_output_58,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Word S_26)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_28;
  MR_Word ExistConstraints_29;
  MR_Word MaybeExistConstraints_30;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_35;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_4_39;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_5_41;
  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv15_STATE_VARIABLE_U_11_54;
  void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv21_STATE_VARIABLE_U_34;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (StartString_24)), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_35);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, ExistQVars_17, S_26);
  UnivConstraints_28 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 0))));
  ExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 1))));
  succeeded = (ExistQVars_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    MaybeExistConstraints_30 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_3_38;

    {
      MaybeExistConstraints_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_30, 0) = ((MR_Box) (ExistConstraints_29));
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_3_38);
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 21))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Purity_22)), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_4_39);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_6(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "func ")), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_5_41);
  if ((Types_19 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_58, (MR_Integer) 0, FuncName_18, S_26);
  else
  {
    MR_Word Var_46;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv9_STATE_VARIABLE_U_7_45;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_8_48;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_9_50;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_58, (MR_Integer) 0, FuncName_18, S_26);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_8(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_7_45);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_6[2]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_14_p_0_1));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_58));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(0, Var_46, 5) = ((MR_Box) (VarNamePrint_16));
    }
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 25))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_46)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_19)), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_8_48);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_12(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_9_50);
  }
  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_14(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_11_54);
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, RetType_20, S_26);
  if (!((MaybeDet_21 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Det_64 = ((MR_Word) ((MR_hl_field(1, MaybeDet_21, 0))));
    MR_String Var_67;
    void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    MR_Box conv17_STATE_VARIABLE_U_1_66;
    void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv19_STATE_VARIABLE_U_13_56;

    func_16(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_1_66);
    Var_67 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_64);
    func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_18(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Var_67)), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_13_56);
  }
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_108_97_115_115_95_99_111_110_116_101_120_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, UnivConstraints_28, MaybeExistConstraints_30, S_26);
  func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_20(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Separator_25)), ((MR_Box) (S_26)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_34);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(
  MR_Word TypeVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word ExistQVars_13,
  MR_Word FuncName_14,
  MR_Word ArgTypes_15,
  MR_Word RetType_16,
  MR_Word MaybeDet_17,
  MR_Word Purity_18,
  MR_Word ClassContext_19)
{
  MR_String Str_20;
  MR_Word State0_21;
  MR_Word State_22;

  State0_21 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), TypeVarSet_11, VarNamePrint_12, ExistQVars_13, FuncName_14, ArgTypes_15, RetType_16, MaybeDet_17, Purity_18, ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", State0_21, &State_22);
  Str_20 = mercury__string__builder__to_string_1_f_0(State_22);
  return Str_20;
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__6_6;

  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv10_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv10_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0(
  MR_Word TypeClassInfo_for_pt_output_58,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Word STATE_VARIABLE_U_0_33,
  MR_Word * STATE_VARIABLE_U_34)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_28;
  MR_Word ExistConstraints_29;
  MR_Word MaybeExistConstraints_30;
  MR_Word STATE_VARIABLE_U_1_35;
  MR_Word STATE_VARIABLE_U_2_36;
  MR_Word STATE_VARIABLE_U_3_38;
  MR_Word STATE_VARIABLE_U_4_39;
  MR_Word STATE_VARIABLE_U_5_41;
  MR_Word STATE_VARIABLE_U_9_50;
  MR_Word STATE_VARIABLE_U_11_54;
  MR_Word STATE_VARIABLE_U_12_55;
  MR_Word STATE_VARIABLE_U_13_56;
  MR_Word STATE_VARIABLE_U_14_57;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_35;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_4_39;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_5_41;
  void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv16_STATE_VARIABLE_U_11_54;
  void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv22_STATE_VARIABLE_U_34;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (StartString_24)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_33)), &conv1_STATE_VARIABLE_U_1_35);
  STATE_VARIABLE_U_1_35 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_35));
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, ExistQVars_17, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_2_36);
  UnivConstraints_28 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 0))));
  ExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 1))));
  succeeded = (ExistQVars_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_30 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_U_3_38 = STATE_VARIABLE_U_2_36;
  }
  else
  {
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_3_38;

    {
      MaybeExistConstraints_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_30, 0) = ((MR_Box) (ExistConstraints_29));
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_36)), &conv3_STATE_VARIABLE_U_3_38);
    STATE_VARIABLE_U_3_38 = ((MR_Word) (conv3_STATE_VARIABLE_U_3_38));
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 21))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Purity_22)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_38)), &conv5_STATE_VARIABLE_U_4_39);
  STATE_VARIABLE_U_4_39 = ((MR_Word) (conv5_STATE_VARIABLE_U_4_39));
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_6(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "func ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_39)), &conv7_STATE_VARIABLE_U_5_41);
  STATE_VARIABLE_U_5_41 = ((MR_Word) (conv7_STATE_VARIABLE_U_5_41));
  if ((Types_19 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_58, (MR_Integer) 0, FuncName_18, STATE_VARIABLE_U_5_41, &STATE_VARIABLE_U_9_50);
  else
  {
    MR_Word STATE_VARIABLE_U_6_43;
    MR_Word STATE_VARIABLE_U_7_45;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_U_8_48;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv9_STATE_VARIABLE_U_7_45;
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv12_STATE_VARIABLE_U_8_48;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_9_50;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_58, (MR_Integer) 0, FuncName_18, STATE_VARIABLE_U_5_41, &STATE_VARIABLE_U_6_43);
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_8(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_6_43)), &conv9_STATE_VARIABLE_U_7_45);
    STATE_VARIABLE_U_7_45 = ((MR_Word) (conv9_STATE_VARIABLE_U_7_45));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_6[1]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_102_117_110_99_95_116_121_112_101_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_14_p_0_1));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_58));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(0, Var_46, 5) = ((MR_Box) (VarNamePrint_16));
    }
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 25))));
    func_11(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_46)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_19)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_7_45)), &conv12_STATE_VARIABLE_U_8_48);
    STATE_VARIABLE_U_8_48 = ((MR_Word) (conv12_STATE_VARIABLE_U_8_48));
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_13(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_8_48)), &conv14_STATE_VARIABLE_U_9_50);
    STATE_VARIABLE_U_9_50 = ((MR_Word) (conv14_STATE_VARIABLE_U_9_50));
  }
  func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_15(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_9_50)), &conv16_STATE_VARIABLE_U_11_54);
  STATE_VARIABLE_U_11_54 = ((MR_Word) (conv16_STATE_VARIABLE_U_11_54));
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, RetType_20, STATE_VARIABLE_U_11_54, &STATE_VARIABLE_U_12_55);
  if ((MaybeDet_21 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_13_56 = STATE_VARIABLE_U_12_55;
  else
  {
    MR_Word Det_64 = ((MR_Word) ((MR_hl_field(1, MaybeDet_21, 0))));
    MR_Word STATE_VARIABLE_U_1_66;
    MR_String Var_67;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    MR_Box conv18_STATE_VARIABLE_U_1_66;
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv20_STATE_VARIABLE_U_13_56;

    func_17(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_55)), &conv18_STATE_VARIABLE_U_1_66);
    STATE_VARIABLE_U_1_66 = ((MR_Word) (conv18_STATE_VARIABLE_U_1_66));
    Var_67 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_64);
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_19(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Var_67)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_66)), &conv20_STATE_VARIABLE_U_13_56);
    STATE_VARIABLE_U_13_56 = ((MR_Word) (conv20_STATE_VARIABLE_U_13_56));
  }
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_108_97_115_115_95_99_111_110_116_101_120_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, UnivConstraints_28, MaybeExistConstraints_30, STATE_VARIABLE_U_13_56, &STATE_VARIABLE_U_14_57);
  func_21 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_21(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Separator_25)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_57)), &conv22_STATE_VARIABLE_U_34);
  *STATE_VARIABLE_U_34 = ((MR_Word) (conv22_STATE_VARIABLE_U_34));
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_type_11_p_0(
  MR_Word TypeClassInfo_for_pt_output_28,
  MR_Word TypeVarSet_12,
  MR_Word VarNamePrint_13,
  MR_Word ExistQVars_14,
  MR_Word PredName_15,
  MR_Word Types_16,
  MR_Word MaybeDet_17,
  MR_Word Purity_18,
  MR_Word ClassContext_19,
  MR_Box S_20,
  MR_Box STATE_VARIABLE_U_0_23,
  MR_Box * STATE_VARIABLE_U_24)
{
  parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0(TypeClassInfo_for_pt_output_28, TypeVarSet_12, VarNamePrint_13, (MR_Integer) 0, ExistQVars_14, PredName_15, Types_16, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_17, Purity_18, ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", S_20, STATE_VARIABLE_U_0_23, STATE_VARIABLE_U_24);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_11_p_0(
  MR_Word Stream_12,
  MR_Word TypeVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Word ExistQVars_15,
  MR_Word PredName_16,
  MR_Word Types_17,
  MR_Word MaybeDet_18,
  MR_Word Purity_19,
  MR_Word ClassContext_20)
{
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[3]), TypeVarSet_13, VarNamePrint_14, (MR_Integer) 0, ExistQVars_15, PredName_16, Types_17, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_18, Purity_19, ClassContext_20, (MR_String) ":- ", (MR_String) ".\n", Stream_12);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0(
  MR_Word TypeClassInfo_for_pt_output_70,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Word S_28)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_30;
  MR_Word ExistConstraints_31;
  MR_Word MaybeExistConstraints_32;
  MR_String PredOrFuncStr_33;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_39;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_4_43;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_5_44;
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv9_STATE_VARIABLE_U_6_46;
  MR_Word TypeCtorInfo_76_76;
  MR_String Var_63;
  MR_Integer Var_64;
  MR_Integer Var_77;
  void MR_CALL (* func_28)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv29_STATE_VARIABLE_U_38;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (StartString_26)), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_39);
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, ExistQVars_19, S_28);
  UnivConstraints_30 = ((MR_Word) ((MR_hl_field(0, Constraints_25, 0))));
  ExistConstraints_31 = ((MR_Word) ((MR_hl_field(0, Constraints_25, 1))));
  succeeded = (ExistQVars_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_31 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    MaybeExistConstraints_32 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_3_42;

    {
      MaybeExistConstraints_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_32, 0) = ((MR_Box) (ExistConstraints_31));
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_3_42);
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 21))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Purity_24)), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_4_43);
  PredOrFuncStr_33 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_18);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_6(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (PredOrFuncStr_33)), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_5_44);
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_8(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " ")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_6_46);
  if ((Types_21 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_70, (MR_Integer) 0, PredName_20, S_28);
  else
  {
    MR_Word Var_51;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_8_50;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_U_9_53;
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv15_STATE_VARIABLE_U_10_55;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_70, (MR_Integer) 0, PredName_20, S_28);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_8_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_6[2]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_15_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_70));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (TypeVarSet_16));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (VarNamePrint_17));
    }
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 25))));
    func_12(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_51)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_21)), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_U_9_53);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_14(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_10_55);
  }
  if (!((MaybeWithType_22 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word WithType_36 = ((MR_Word) ((MR_hl_field(1, MaybeWithType_22, 0))));
    void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    MR_Box conv17_STATE_VARIABLE_U_12_59;
    void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv19_STATE_VARIABLE_U_14_62;

    func_16(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " \140with_type\140 (")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_U_12_59);
    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, WithType_36, S_28);
    func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_18(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_14_62);
  }
  succeeded = (PredOrFunc_18 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_63 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_20);
      succeeded = (strcmp(Var_63, (MR_String) "is") == 0);
      if (succeeded)
      {
        Var_64 = (MR_Integer) 2;
        TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__list__length_2_p_0(TypeCtorInfo_76_76, Types_21, &Var_77);
        succeeded = (Var_64 == Var_77);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Det_78 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pred_decl_scalar_common_4[0])), 0))));
    MR_String Var_81;
    void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    MR_Box conv21_STATE_VARIABLE_U_1_80;
    void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv23_STATE_VARIABLE_U_15_66;

    func_20(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_1_80);
    Var_81 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_78);
    func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_22(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Var_81)), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_15_66);
  }
  else
  if (!((MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Det_82 = ((MR_Word) ((MR_hl_field(1, MaybeDet_23, 0))));
    MR_String Var_85;
    void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    MR_Box conv25_STATE_VARIABLE_U_1_84;
    void MR_CALL (* func_26)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv27_STATE_VARIABLE_U_15_66;

    func_24(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_U_1_84);
    Var_85 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_82);
    func_26 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_26(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Var_85)), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_U_15_66);
  }
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_108_97_115_115_95_99_111_110_116_101_120_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, UnivConstraints_30, MaybeExistConstraints_32, S_28);
  func_28 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_28(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Separator_27)), ((MR_Box) (S_28)), ((MR_Box) ((MR_Integer) 0)), &conv29_STATE_VARIABLE_U_38);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(
  MR_Word TypeVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word ExistQVars_12,
  MR_Word PredName_13,
  MR_Word Types_14,
  MR_Word MaybeDet_15,
  MR_Word Purity_16,
  MR_Word ClassContext_17)
{
  MR_String Str_18;
  MR_Word State0_19;
  MR_Word State_20;

  State0_19 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[1]), TypeVarSet_10, VarNamePrint_11, (MR_Integer) 0, ExistQVars_12, PredName_13, Types_14, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_15, Purity_16, ClassContext_17, (MR_String) ":- ", (MR_String) ".\n", State0_19, &State_20);
  Str_18 = mercury__string__builder__to_string_1_f_0(State_20);
  return Str_18;
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__6_6;

  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv12_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv12_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0(
  MR_Word TypeClassInfo_for_pt_output_70,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Word STATE_VARIABLE_U_0_37,
  MR_Word * STATE_VARIABLE_U_38)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_30;
  MR_Word ExistConstraints_31;
  MR_Word MaybeExistConstraints_32;
  MR_String PredOrFuncStr_33;
  MR_Word STATE_VARIABLE_U_1_39;
  MR_Word STATE_VARIABLE_U_2_40;
  MR_Word STATE_VARIABLE_U_3_42;
  MR_Word STATE_VARIABLE_U_4_43;
  MR_Word STATE_VARIABLE_U_5_44;
  MR_Word STATE_VARIABLE_U_6_46;
  MR_Word STATE_VARIABLE_U_10_55;
  MR_Word STATE_VARIABLE_U_14_62;
  MR_Word STATE_VARIABLE_U_15_66;
  MR_Word STATE_VARIABLE_U_17_69;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  MR_Box conv1_STATE_VARIABLE_U_1_39;
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv5_STATE_VARIABLE_U_4_43;
  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv7_STATE_VARIABLE_U_5_44;
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv9_STATE_VARIABLE_U_6_46;
  MR_Word TypeCtorInfo_76_76;
  MR_String Var_63;
  MR_Integer Var_64;
  MR_Integer Var_77;
  void MR_CALL (* func_29)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv30_STATE_VARIABLE_U_38;

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (StartString_26)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_37)), &conv1_STATE_VARIABLE_U_1_39);
  STATE_VARIABLE_U_1_39 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_39));
  parse_tree__parse_tree_out_misc__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_97_110_116_105_102_105_101_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, ExistQVars_19, STATE_VARIABLE_U_1_39, &STATE_VARIABLE_U_2_40);
  UnivConstraints_30 = ((MR_Word) ((MR_hl_field(0, Constraints_25, 0))));
  ExistConstraints_31 = ((MR_Word) ((MR_hl_field(0, Constraints_25, 1))));
  succeeded = (ExistQVars_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_31 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_32 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_U_3_42 = STATE_VARIABLE_U_2_40;
  }
  else
  {
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_3_42;

    {
      MaybeExistConstraints_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_32, 0) = ((MR_Box) (ExistConstraints_31));
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_40)), &conv3_STATE_VARIABLE_U_3_42);
    STATE_VARIABLE_U_3_42 = ((MR_Word) (conv3_STATE_VARIABLE_U_3_42));
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 21))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Purity_24)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_3_42)), &conv5_STATE_VARIABLE_U_4_43);
  STATE_VARIABLE_U_4_43 = ((MR_Word) (conv5_STATE_VARIABLE_U_4_43));
  PredOrFuncStr_33 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_18);
  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_6(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (PredOrFuncStr_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_43)), &conv7_STATE_VARIABLE_U_5_44);
  STATE_VARIABLE_U_5_44 = ((MR_Word) (conv7_STATE_VARIABLE_U_5_44));
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_8(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_5_44)), &conv9_STATE_VARIABLE_U_6_46);
  STATE_VARIABLE_U_6_46 = ((MR_Word) (conv9_STATE_VARIABLE_U_6_46));
  if ((Types_21 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_70, (MR_Integer) 0, PredName_20, STATE_VARIABLE_U_6_46, &STATE_VARIABLE_U_10_55);
  else
  {
    MR_Word STATE_VARIABLE_U_7_48;
    MR_Word STATE_VARIABLE_U_8_50;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_U_9_53;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv11_STATE_VARIABLE_U_8_50;
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv14_STATE_VARIABLE_U_9_53;
    void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv16_STATE_VARIABLE_U_10_55;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_70, (MR_Integer) 0, PredName_20, STATE_VARIABLE_U_6_46, &STATE_VARIABLE_U_7_48);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_10(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_7_48)), &conv11_STATE_VARIABLE_U_8_50);
    STATE_VARIABLE_U_8_50 = ((MR_Word) (conv11_STATE_VARIABLE_U_8_50));
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_6[1]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_116_121_112_101_95_100_101_99_108_95_50_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_15_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_70));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (TypeVarSet_16));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (VarNamePrint_17));
    }
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 25))));
    func_13(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_51)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_21)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_8_50)), &conv14_STATE_VARIABLE_U_9_53);
    STATE_VARIABLE_U_9_53 = ((MR_Word) (conv14_STATE_VARIABLE_U_9_53));
    func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_15(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_9_53)), &conv16_STATE_VARIABLE_U_10_55);
    STATE_VARIABLE_U_10_55 = ((MR_Word) (conv16_STATE_VARIABLE_U_10_55));
  }
  if ((MaybeWithType_22 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_14_62 = STATE_VARIABLE_U_10_55;
  else
  {
    MR_Word WithType_36 = ((MR_Word) ((MR_hl_field(1, MaybeWithType_22, 0))));
    MR_Word STATE_VARIABLE_U_12_59;
    MR_Word STATE_VARIABLE_U_13_60;
    void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    MR_Box conv18_STATE_VARIABLE_U_12_59;
    void MR_CALL (* func_19)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv20_STATE_VARIABLE_U_14_62;

    func_17(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " \140with_type\140 (")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_10_55)), &conv18_STATE_VARIABLE_U_12_59);
    STATE_VARIABLE_U_12_59 = ((MR_Word) (conv18_STATE_VARIABLE_U_12_59));
    parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, WithType_36, STATE_VARIABLE_U_12_59, &STATE_VARIABLE_U_13_60);
    func_19 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_19(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_60)), &conv20_STATE_VARIABLE_U_14_62);
    STATE_VARIABLE_U_14_62 = ((MR_Word) (conv20_STATE_VARIABLE_U_14_62));
  }
  succeeded = (PredOrFunc_18 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_63 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_20);
      succeeded = (strcmp(Var_63, (MR_String) "is") == 0);
      if (succeeded)
      {
        Var_64 = (MR_Integer) 2;
        TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__list__length_2_p_0(TypeCtorInfo_76_76, Types_21, &Var_77);
        succeeded = (Var_64 == Var_77);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Det_78 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pred_decl_scalar_common_4[0])), 0))));
    MR_Word STATE_VARIABLE_U_1_80;
    MR_String Var_81;
    void MR_CALL (* func_21)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    MR_Box conv22_STATE_VARIABLE_U_1_80;
    void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv24_STATE_VARIABLE_U_15_66;

    func_21(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_62)), &conv22_STATE_VARIABLE_U_1_80);
    STATE_VARIABLE_U_1_80 = ((MR_Word) (conv22_STATE_VARIABLE_U_1_80));
    Var_81 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_78);
    func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_23(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Var_81)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_80)), &conv24_STATE_VARIABLE_U_15_66);
    STATE_VARIABLE_U_15_66 = ((MR_Word) (conv24_STATE_VARIABLE_U_15_66));
  }
  else
  if ((MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_15_66 = STATE_VARIABLE_U_14_62;
  else
  {
    MR_Word Det_82 = ((MR_Word) ((MR_hl_field(1, MaybeDet_23, 0))));
    MR_Word STATE_VARIABLE_U_1_84;
    MR_String Var_85;
    void MR_CALL (* func_25)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    MR_Box conv26_STATE_VARIABLE_U_1_84;
    void MR_CALL (* func_27)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv28_STATE_VARIABLE_U_15_66;

    func_25(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_14_62)), &conv26_STATE_VARIABLE_U_1_84);
    STATE_VARIABLE_U_1_84 = ((MR_Word) (conv26_STATE_VARIABLE_U_1_84));
    Var_85 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_82);
    func_27 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_27(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Var_85)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_84)), &conv28_STATE_VARIABLE_U_15_66);
    STATE_VARIABLE_U_15_66 = ((MR_Word) (conv28_STATE_VARIABLE_U_15_66));
  }
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_108_97_115_115_95_99_111_110_116_101_120_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_7_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, UnivConstraints_30, MaybeExistConstraints_32, STATE_VARIABLE_U_15_66, &STATE_VARIABLE_U_17_69);
  func_29 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_29(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Separator_27)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_17_69)), &conv30_STATE_VARIABLE_U_38);
  *STATE_VARIABLE_U_38 = ((MR_Word) (conv30_STATE_VARIABLE_U_38));
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_16_p_0(
  MR_Word TypeClassInfo_for_pt_output_50,
  MR_Word Lang_17,
  MR_Word VarNamePrint_18,
  MR_Word TypeVarSet_19,
  MR_Word InstVarSet_20,
  MR_Word ExistQVars_21,
  MR_Word FuncName_22,
  MR_Word TypesAndMaybeModes_23,
  MR_Word MaybeDet_24,
  MR_Word Purity_25,
  MR_Word ClassContext_26,
  MR_String StartString_27,
  MR_String Separator_28,
  MR_String Terminator_29,
  MR_Box S_30,
  MR_Box STATE_VARIABLE_U_0_39,
  MR_Box * STATE_VARIABLE_U_40)
{
  switch (MR_tag((MR_Word) TypesAndMaybeModes_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_tree_out_pred_decl.mercury_format_func_decl\'/16", (MR_String) "no_types_arity_zero");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Types_32 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes_23, 0))));
        MR_Word ArgTypes_33;
        MR_Word RetType_34;
        MR_Box conv5_RetType_34;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_32, &ArgTypes_33, &conv5_RetType_34);
        RetType_34 = ((MR_Word) (conv5_RetType_34));
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(TypeClassInfo_for_pt_output_50, TypeVarSet_19, VarNamePrint_18, ExistQVars_21, FuncName_22, ArgTypes_33, RetType_34, MaybeDet_24, Purity_25, ClassContext_26, StartString_27, Terminator_29, S_30, STATE_VARIABLE_U_0_39, STATE_VARIABLE_U_40);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypesAndModes_35 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes_23, 0))));
        MR_Word Modes_36;
        MR_Word ArgModes_37;
        MR_Word RetMode_38;
        MR_Box STATE_VARIABLE_U_2_45;
        MR_Word Types_47;
        MR_Word ArgTypes_48;
        MR_Word RetType_49;
        MR_Box STATE_VARIABLE_U_1_54;
        MR_Box STATE_VARIABLE_U_2_56;
        MR_Box STATE_VARIABLE_U_3_57;
        MR_Box conv0_RetType_49;
        MR_Box conv1_RetMode_38;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_item__split_types_and_modes_3_p_0(TypesAndModes_35, &Types_47, &Modes_36);
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_47, &ArgTypes_48, &conv0_RetType_49);
        RetType_49 = ((MR_Word) (conv0_RetType_49));
        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_36, &ArgModes_37, &conv1_RetMode_38);
        RetMode_38 = ((MR_Word) (conv1_RetMode_38));
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(TypeClassInfo_for_pt_output_50, TypeVarSet_19, VarNamePrint_18, ExistQVars_21, FuncName_22, ArgTypes_48, RetType_49, (MR_Word) ((MR_Unsigned) 0U), Purity_25, ClassContext_26, StartString_27, Separator_28, S_30, STATE_VARIABLE_U_0_39, &STATE_VARIABLE_U_2_45);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) (StartString_27)), S_30, STATE_VARIABLE_U_2_45, &STATE_VARIABLE_U_1_54);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) ((MR_String) "mode ")), S_30, STATE_VARIABLE_U_1_54, &STATE_VARIABLE_U_2_56);
        parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_50, Lang_17, InstVarSet_20, FuncName_22, ArgModes_37, RetMode_38, MaybeDet_24, S_30, STATE_VARIABLE_U_2_56, &STATE_VARIABLE_U_3_57);
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_50, 0)), 6))));
        func_4(((MR_Box) (TypeClassInfo_for_pt_output_50)), ((MR_Box) (Terminator_29)), S_30, STATE_VARIABLE_U_3_57, STATE_VARIABLE_U_40);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_pt_output_58,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Box S_26,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_28;
  MR_Word ExistConstraints_29;
  MR_Word MaybeExistConstraints_30;
  MR_Box STATE_VARIABLE_U_1_35;
  MR_Box STATE_VARIABLE_U_2_36;
  MR_Box STATE_VARIABLE_U_3_38;
  MR_Box STATE_VARIABLE_U_4_39;
  MR_Box STATE_VARIABLE_U_5_41;
  MR_Box STATE_VARIABLE_U_9_50;
  MR_Box STATE_VARIABLE_U_11_54;
  MR_Box STATE_VARIABLE_U_12_55;
  MR_Box STATE_VARIABLE_U_13_56;
  MR_Box STATE_VARIABLE_U_14_57;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (StartString_24)), S_26, STATE_VARIABLE_U_0_33, &STATE_VARIABLE_U_1_35);
  parse_tree__parse_tree_out_misc__mercury_format_quantifier_6_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, ExistQVars_17, S_26, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_2_36);
  UnivConstraints_28 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 0))));
  ExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, Constraints_23, 1))));
  succeeded = (ExistQVars_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_30 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_U_3_38 = STATE_VARIABLE_U_2_36;
  }
  else
  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      MaybeExistConstraints_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_30, 0) = ((MR_Box) (ExistConstraints_29));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "(")), S_26, STATE_VARIABLE_U_2_36, &STATE_VARIABLE_U_3_38);
  }
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 21))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Purity_22)), S_26, STATE_VARIABLE_U_3_38, &STATE_VARIABLE_U_4_39);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_3(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "func ")), S_26, STATE_VARIABLE_U_4_39, &STATE_VARIABLE_U_5_41);
  if ((Types_19 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_58, (MR_Integer) 0, FuncName_18, S_26, STATE_VARIABLE_U_5_41, &STATE_VARIABLE_U_9_50);
  else
  {
    MR_Box STATE_VARIABLE_U_6_43;
    MR_Box STATE_VARIABLE_U_7_45;
    MR_Word Var_46;
    MR_Box STATE_VARIABLE_U_8_48;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_58, (MR_Integer) 0, FuncName_18, S_26, STATE_VARIABLE_U_5_41, &STATE_VARIABLE_U_6_43);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) "(")), S_26, STATE_VARIABLE_U_6_43, &STATE_VARIABLE_U_7_45);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_6[0]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_58));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(0, Var_46, 5) = ((MR_Box) (VarNamePrint_16));
    }
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 25))));
    func_5(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_46)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_19)), S_26, STATE_VARIABLE_U_7_45, &STATE_VARIABLE_U_8_48);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_6(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) ")")), S_26, STATE_VARIABLE_U_8_48, &STATE_VARIABLE_U_9_50);
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_7(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) " = ")), S_26, STATE_VARIABLE_U_9_50, &STATE_VARIABLE_U_11_54);
  parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, RetType_20, S_26, STATE_VARIABLE_U_11_54, &STATE_VARIABLE_U_12_55);
  if ((MaybeDet_21 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_13_56 = STATE_VARIABLE_U_12_55;
  else
  {
    MR_Word Det_64 = ((MR_Word) ((MR_hl_field(1, MaybeDet_21, 0))));
    MR_Box STATE_VARIABLE_U_1_66;
    MR_String Var_67;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_8(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) ((MR_String) " is ")), S_26, STATE_VARIABLE_U_12_55, &STATE_VARIABLE_U_1_66);
    Var_67 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_64);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
    func_9(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Var_67)), S_26, STATE_VARIABLE_U_1_66, &STATE_VARIABLE_U_13_56);
  }
  parse_tree__parse_tree_out_type__mercury_format_class_context_7_p_0(TypeClassInfo_for_pt_output_58, VarSet_15, VarNamePrint_16, UnivConstraints_28, MaybeExistConstraints_30, S_26, STATE_VARIABLE_U_13_56, &STATE_VARIABLE_U_14_57);
  func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_58, 0)), 6))));
  func_10(((MR_Box) (TypeClassInfo_for_pt_output_58)), ((MR_Box) (Separator_25)), S_26, STATE_VARIABLE_U_14_57, STATE_VARIABLE_U_34);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_subdecl_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_34,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word FuncName_12,
  MR_Word Modes_13,
  MR_Word RetMode_14,
  MR_Word MaybeDet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21)
{
  MR_Box STATE_VARIABLE_U_4_28;
  MR_Box STATE_VARIABLE_U_6_32;
  MR_Box STATE_VARIABLE_U_7_33;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_34, (MR_Integer) 0, FuncName_12, S_16, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_4_28);
  else
  {
    MR_Box STATE_VARIABLE_U_1_23;
    MR_Box STATE_VARIABLE_U_2_25;
    MR_Box STATE_VARIABLE_U_3_26;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_34, (MR_Integer) 0, FuncName_12, S_16, STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_1_23);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) "(")), S_16, STATE_VARIABLE_U_1_23, &STATE_VARIABLE_U_2_25);
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_34, Lang_10, InstVarSet_11, Modes_13, S_16, STATE_VARIABLE_U_2_25, &STATE_VARIABLE_U_3_26);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) ")")), S_16, STATE_VARIABLE_U_3_26, &STATE_VARIABLE_U_4_28);
  }
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) " = ")), S_16, STATE_VARIABLE_U_4_28, &STATE_VARIABLE_U_6_32);
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_34, Lang_10, InstVarSet_11, RetMode_14, S_16, STATE_VARIABLE_U_6_32, &STATE_VARIABLE_U_7_33);
  if ((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_21 = STATE_VARIABLE_U_7_33;
  else
  {
    MR_Word Det_35 = ((MR_Word) ((MR_hl_field(1, MaybeDet_15, 0))));
    MR_Box STATE_VARIABLE_U_1_37;
    MR_String Var_38;
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_3(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) ((MR_String) " is ")), S_16, STATE_VARIABLE_U_7_33, &STATE_VARIABLE_U_1_37);
    Var_38 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_35);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_34, 0)), 6))));
    func_4(((MR_Box) (TypeClassInfo_for_pt_output_34)), ((MR_Box) (Var_38)), S_16, STATE_VARIABLE_U_1_37, STATE_VARIABLE_U_21);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_19_p_0(
  MR_Word TypeClassInfo_for_pt_output_45,
  MR_Word Lang_20,
  MR_Word VarNamePrint_21,
  MR_Word TypeVarSet_22,
  MR_Word InstVarSet_23,
  MR_Word PredOrFunc_24,
  MR_Word ExistQVars_25,
  MR_Word PredName_26,
  MR_Word TypesAndMaybeModes_27,
  MR_Word MaybeWithType_28,
  MR_Word MaybeWithInst_29,
  MR_Word MaybeDet0_30,
  MR_Word Purity_31,
  MR_Word ClassContext_32,
  MR_String StartString_33,
  MR_String Separator_34,
  MR_String Terminator_35,
  MR_Box S_36,
  MR_Box STATE_VARIABLE_U_0_42,
  MR_Box * STATE_VARIABLE_U_43)
{
  MR_Word Types_38;
  MR_Word MaybeModes_39;

  parse_tree__prog_item__get_declared_types_and_maybe_modes_5_p_0(TypesAndMaybeModes_27, MaybeWithInst_29, MaybeDet0_30, &Types_38, &MaybeModes_39);
  if ((MaybeModes_39 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0(TypeClassInfo_for_pt_output_45, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, MaybeWithType_28, MaybeDet0_30, Purity_31, ClassContext_32, StartString_33, Terminator_35, S_36, STATE_VARIABLE_U_0_42, STATE_VARIABLE_U_43);
  else
  {
    MR_Word Modes_40 = ((MR_Word) ((MR_hl_field(1, MaybeModes_39, 0))));
    MR_Box STATE_VARIABLE_U_1_44;
    MR_Box STATE_VARIABLE_U_1_46;
    MR_Box STATE_VARIABLE_U_2_48;
    MR_Box STATE_VARIABLE_U_3_49;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0(TypeClassInfo_for_pt_output_45, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, MaybeWithType_28, (MR_Word) ((MR_Unsigned) 0U), Purity_31, ClassContext_32, StartString_33, Separator_34, S_36, STATE_VARIABLE_U_0_42, &STATE_VARIABLE_U_1_44);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) (StartString_33)), S_36, STATE_VARIABLE_U_1_44, &STATE_VARIABLE_U_1_46);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) ((MR_String) "mode ")), S_36, STATE_VARIABLE_U_1_46, &STATE_VARIABLE_U_2_48);
    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0(TypeClassInfo_for_pt_output_45, Lang_20, InstVarSet_23, PredName_26, Modes_40, MaybeWithInst_29, MaybeDet0_30, S_36, STATE_VARIABLE_U_2_48, &STATE_VARIABLE_U_3_49);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_45, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_45)), ((MR_Box) (Terminator_35)), S_36, STATE_VARIABLE_U_3_49, STATE_VARIABLE_U_43);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0(
  MR_Word TypeClassInfo_for_pt_output_70,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Box S_28,
  MR_Box STATE_VARIABLE_U_0_37,
  MR_Box * STATE_VARIABLE_U_38)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_30;
  MR_Word ExistConstraints_31;
  MR_Word MaybeExistConstraints_32;
  MR_String PredOrFuncStr_33;
  MR_Box STATE_VARIABLE_U_1_39;
  MR_Box STATE_VARIABLE_U_2_40;
  MR_Box STATE_VARIABLE_U_3_42;
  MR_Box STATE_VARIABLE_U_4_43;
  MR_Box STATE_VARIABLE_U_5_44;
  MR_Box STATE_VARIABLE_U_6_46;
  MR_Box STATE_VARIABLE_U_10_55;
  MR_Box STATE_VARIABLE_U_14_62;
  MR_Box STATE_VARIABLE_U_15_66;
  MR_Box STATE_VARIABLE_U_17_69;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Word TypeCtorInfo_76_76;
  MR_String Var_63;
  MR_Integer Var_64;
  MR_Integer Var_77;
  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (StartString_26)), S_28, STATE_VARIABLE_U_0_37, &STATE_VARIABLE_U_1_39);
  parse_tree__parse_tree_out_misc__mercury_format_quantifier_6_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, ExistQVars_19, S_28, STATE_VARIABLE_U_1_39, &STATE_VARIABLE_U_2_40);
  UnivConstraints_30 = ((MR_Word) ((MR_hl_field(0, Constraints_25, 0))));
  ExistConstraints_31 = ((MR_Word) ((MR_hl_field(0, Constraints_25, 1))));
  succeeded = (ExistQVars_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_31 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_32 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_U_3_42 = STATE_VARIABLE_U_2_40;
  }
  else
  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      MaybeExistConstraints_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_32, 0) = ((MR_Box) (ExistConstraints_31));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) "(")), S_28, STATE_VARIABLE_U_2_40, &STATE_VARIABLE_U_3_42);
  }
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 21))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Purity_24)), S_28, STATE_VARIABLE_U_3_42, &STATE_VARIABLE_U_4_43);
  PredOrFuncStr_33 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_18);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_3(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (PredOrFuncStr_33)), S_28, STATE_VARIABLE_U_4_43, &STATE_VARIABLE_U_5_44);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_4(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " ")), S_28, STATE_VARIABLE_U_5_44, &STATE_VARIABLE_U_6_46);
  if ((Types_21 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_70, (MR_Integer) 0, PredName_20, S_28, STATE_VARIABLE_U_6_46, &STATE_VARIABLE_U_10_55);
  else
  {
    MR_Box STATE_VARIABLE_U_7_48;
    MR_Box STATE_VARIABLE_U_8_50;
    MR_Word Var_51;
    MR_Box STATE_VARIABLE_U_9_53;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_70, (MR_Integer) 0, PredName_20, S_28, STATE_VARIABLE_U_6_46, &STATE_VARIABLE_U_7_48);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_5(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) "(")), S_28, STATE_VARIABLE_U_7_48, &STATE_VARIABLE_U_8_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_6[0]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_decl_2_15_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeClassInfo_for_pt_output_70));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (TypeVarSet_16));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (VarNamePrint_17));
    }
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 25))));
    func_6(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_51)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_21)), S_28, STATE_VARIABLE_U_8_50, &STATE_VARIABLE_U_9_53);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_7(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) ")")), S_28, STATE_VARIABLE_U_9_53, &STATE_VARIABLE_U_10_55);
  }
  if ((MaybeWithType_22 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_14_62 = STATE_VARIABLE_U_10_55;
  else
  {
    MR_Word WithType_36 = ((MR_Word) ((MR_hl_field(1, MaybeWithType_22, 0))));
    MR_Box STATE_VARIABLE_U_12_59;
    MR_Box STATE_VARIABLE_U_13_60;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_8(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " \140with_type\140 (")), S_28, STATE_VARIABLE_U_10_55, &STATE_VARIABLE_U_12_59);
    parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, WithType_36, S_28, STATE_VARIABLE_U_12_59, &STATE_VARIABLE_U_13_60);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_9(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) ")")), S_28, STATE_VARIABLE_U_13_60, &STATE_VARIABLE_U_14_62);
  }
  succeeded = (PredOrFunc_18 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_63 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_20);
      succeeded = (strcmp(Var_63, (MR_String) "is") == 0);
      if (succeeded)
      {
        Var_64 = (MR_Integer) 2;
        TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__list__length_2_p_0(TypeCtorInfo_76_76, Types_21, &Var_77);
        succeeded = (Var_64 == Var_77);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Det_78 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pred_decl_scalar_common_4[0])), 0))));
    MR_Box STATE_VARIABLE_U_1_80;
    MR_String Var_81;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_10(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " is ")), S_28, STATE_VARIABLE_U_14_62, &STATE_VARIABLE_U_1_80);
    Var_81 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_78);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_11(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Var_81)), S_28, STATE_VARIABLE_U_1_80, &STATE_VARIABLE_U_15_66);
  }
  else
  if ((MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_15_66 = STATE_VARIABLE_U_14_62;
  else
  {
    MR_Word Det_82 = ((MR_Word) ((MR_hl_field(1, MaybeDet_23, 0))));
    MR_Box STATE_VARIABLE_U_1_84;
    MR_String Var_85;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_12(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) ((MR_String) " is ")), S_28, STATE_VARIABLE_U_14_62, &STATE_VARIABLE_U_1_84);
    Var_85 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_82);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
    func_13(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Var_85)), S_28, STATE_VARIABLE_U_1_84, &STATE_VARIABLE_U_15_66);
  }
  parse_tree__parse_tree_out_type__mercury_format_class_context_7_p_0(TypeClassInfo_for_pt_output_70, TypeVarSet_16, VarNamePrint_17, UnivConstraints_30, MaybeExistConstraints_32, S_28, STATE_VARIABLE_U_15_66, &STATE_VARIABLE_U_17_69);
  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_70, 0)), 6))));
  func_14(((MR_Box) (TypeClassInfo_for_pt_output_70)), ((MR_Box) (Separator_27)), S_28, STATE_VARIABLE_U_17_69, STATE_VARIABLE_U_38);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_37,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_21,
  MR_Box * STATE_VARIABLE_U_22)
{
  MR_Box STATE_VARIABLE_U_4_29;
  MR_Box STATE_VARIABLE_U_8_36;

  if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_37, (MR_Integer) 0, PredName_12, S_16, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_4_29);
  else
  {
    MR_Box STATE_VARIABLE_U_1_24;
    MR_Box STATE_VARIABLE_U_2_26;
    MR_Box STATE_VARIABLE_U_3_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_37, (MR_Integer) 0, PredName_12, S_16, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_1_24);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) "(")), S_16, STATE_VARIABLE_U_1_24, &STATE_VARIABLE_U_2_26);
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_pt_output_37, Lang_10, InstVarSet_11, Modes_13, S_16, STATE_VARIABLE_U_2_26, &STATE_VARIABLE_U_3_27);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ")")), S_16, STATE_VARIABLE_U_3_27, &STATE_VARIABLE_U_4_29);
  }
  if ((MaybeWithInst_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_8_36 = STATE_VARIABLE_U_4_29;
  else
  {
    MR_Word WithInst_20 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst_14, 0))));
    MR_Box STATE_VARIABLE_U_6_33;
    MR_Box STATE_VARIABLE_U_7_34;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_2(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) " \140with_inst\140 (")), S_16, STATE_VARIABLE_U_4_29, &STATE_VARIABLE_U_6_33);
    parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_pt_output_37, Lang_10, InstVarSet_11, WithInst_20, S_16, STATE_VARIABLE_U_6_33, &STATE_VARIABLE_U_7_34);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_3(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) ")")), S_16, STATE_VARIABLE_U_7_34, &STATE_VARIABLE_U_8_36);
  }
  if ((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_22 = STATE_VARIABLE_U_8_36;
  else
  {
    MR_Word Det_38 = ((MR_Word) ((MR_hl_field(1, MaybeDet_15, 0))));
    MR_Box STATE_VARIABLE_U_1_40;
    MR_String Var_41;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_4(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) ((MR_String) " is ")), S_16, STATE_VARIABLE_U_8_36, &STATE_VARIABLE_U_1_40);
    Var_41 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_38);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_37, 0)), 6))));
    func_5(((MR_Box) (TypeClassInfo_for_pt_output_37)), ((MR_Box) (Var_41)), S_16, STATE_VARIABLE_U_1_40, STATE_VARIABLE_U_22);
  }
}

void mercury__parse_tree__parse_tree_out_pred_decl__init(void)
{
}

void mercury__parse_tree__parse_tree_out_pred_decl__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_pred_decl__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_pred_decl__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_pred_decl.
