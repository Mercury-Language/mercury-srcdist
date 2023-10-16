/*
** Automatically generated from `parse_tree_out_type_repn.m'
** by the Mercury compiler,
** version rotd-2023-10-16
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


// :- module parse_tree.parse_tree_out_type_repn.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_type_repn__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_type_repn.mih"


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
#include "int.mih"
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
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_Word MR_CALL 
parse_tree__parse_tree_out_type_repn__IntroducedFrom__func__mercury_output_item_type_repn__77__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_33);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word NonConstantRepn_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_4_p_0(
  MR_Word CellLocalSectag_5,
  MR_Word Stream_6);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_4_p_0(
  MR_Word CellLocalSectag_5,
  MR_Word Stream_6);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word NonConstantRepn_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_57_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_Integer Var_21,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word RemoteArgRepn_9,
  MR_Word Stream_10);

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_2_f_0(
  MR_Word TypeRepnFor_4,
  MR_Integer Indent_5);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_Integer Var_21,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word LocalArgRepn_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word ConstantRepn_9,
  MR_Word Stream_10);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word DuRepn_12);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word MoreFunctorsRepn_12);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_54_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_Integer Var_21,
  MR_Word Var_22,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word TVarSet_10,
  MR_Word FunctorRepn_11,
  MR_Word Stream_12);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_52_95_95_91_53_93_95_48_6_p_0(
  MR_String Var_40,
  MR_String Var_41,
  MR_Word Var_42,
  MR_Integer Indent_7,
  MR_Word Xs_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_4_p_0(
  MR_String FunctorName_5,
  MR_Word Stream_6);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word OnlyFunctorRepn_12);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_55_95_95_91_52_93_95_48_6_p_0(
  MR_String Var_20,
  MR_String Var_21,
  MR_Word Var_22,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word WriteX_10,
  MR_Word CRepns_11,
  MR_Word Stream_12);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_notag_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word NotagRepn_12);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeCJCsRepn_10);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeTypeRepn_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word EnumRepn_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(
  MR_String Var_40,
  MR_String Var_41,
  MR_Integer Indent_7,
  MR_Word Xs_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_or_enum_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeCJCsRepnOrEnum_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeTypeRepnOrEnum_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_6_p_0(
  MR_String Var_20,
  MR_String Var_21,
  MR_String X_8,
  MR_Word Xs_9,
  MR_Word Stream_10);

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(
  MR_Integer N_3);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word TypeRepn_10);

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__indent_1_f_0(
  MR_Integer N_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_2[5][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_5[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_7[1][7];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_8[6][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_9[1][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_10[1][6];


struct parse_tree__parse_tree_out_type_repn__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_tree_out_type_repn__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_type_repn__vector_common_type_6_0_s parse_tree__parse_tree_out_type_repn_vector_common_6[14];



static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_repn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_8[6][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_only_nonconstant_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_constant_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_more_nonconstant_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_arg_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_10[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_type_repn__vector_common_type_6_0_s parse_tree__parse_tree_out_type_repn_vector_common_6[14] = {
  /* row   0 */   { (MR_String) "" },
  /* row   1 */   { (MR_String) "    " },
  /* row   2 */   { (MR_String) "        " },
  /* row   3 */   { (MR_String) "            " },
  /* row   4 */   { (MR_String) "                " },
  /* row   5 */   { (MR_String) "                    " },
  /* row   6 */   { (MR_String) "                        " },
  /* row   7 */   { (MR_String) "\n" },
  /* row   8 */   { (MR_String) "\n    " },
  /* row   9 */   { (MR_String) "\n        " },
  /* row  10 */   { (MR_String) "\n            " },
  /* row  11 */   { (MR_String) "\n                " },
  /* row  12 */   { (MR_String) "\n                    " },
  /* row  13 */   { (MR_String) "\n                        " },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static MR_Word MR_CALL 
parse_tree__parse_tree_out_type_repn__IntroducedFrom__func__mercury_output_item_type_repn__77__1_2_f_0(
  MR_Word Context_14,
  MR_Word LambdaHeadVar__1_33)
{
  MR_Word LambdaHeadVar__2_34;

  {
    LambdaHeadVar__2_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_34, 0) = ((MR_Box) (LambdaHeadVar__1_33));
    MR_hl_field(1, LambdaHeadVar__2_34, 1) = ((MR_Box) (Context_14));
  }
  return LambdaHeadVar__2_34;
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word NonConstantRepn_9,
  MR_Word Stream_10)
{
  switch (MR_tag((MR_Word) NonConstantRepn_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalRepn_12 = (MR_Word) ((MR_Word) (NonConstantRepn_9));
        MR_Word CellLocalSectag_13 = ((MR_Word) ((MR_hl_field(0, LocalRepn_12, (MR_Integer) 0))));
        MR_Word OoMLocalArgRepns_14 = ((MR_Word) ((MR_hl_field(0, LocalRepn_12, (MR_Integer) 1))));

        switch (TypeRepnFor_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String I_17;
              MR_Integer Var_49;
              MR_Word Var_51;
              MR_Integer Var_54;
              MR_Word HeadLocalArgRepn_110;
              MR_Word TailLocalArgRepns_111;
              MR_String NlI_204;
              MR_Word HeadX_205;
              MR_Word TailXs_206;

              I_17 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
              mercury__io__write_string_4_p_0(Stream_10, I_17);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "local_cell(");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_4_p_0(CellLocalSectag_13, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
              HeadLocalArgRepn_110 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_14, (MR_Integer) 0))));
              TailLocalArgRepns_111 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_14, (MR_Integer) 1))));
              Var_49 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              Var_54 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
              {
                Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_51, 0) = ((MR_Box) (HeadLocalArgRepn_110));
                MR_hl_field(1, Var_51, 1) = ((MR_Box) (TailLocalArgRepns_111));
              }
              NlI_204 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_49);
              HeadX_205 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
              TailXs_206 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
              mercury__io__write_string_4_p_0(Stream_10, NlI_204);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[");
              parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(TypeRepnFor_7, Var_54, HeadX_205, TailXs_206, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, NlI_204);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "]");
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
              mercury__io__write_string_4_p_0(Stream_10, I_17);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word HeadLocalArgRepn_15;
              MR_Word TailLocalArgRepns_16;
              MR_Word Var_34;
              MR_Word Var_36;

              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "local_cell(");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_4_p_0(CellLocalSectag_13, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", [");
              HeadLocalArgRepn_15 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_14, (MR_Integer) 0))));
              TailLocalArgRepns_16 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_14, (MR_Integer) 1))));
              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[4]));
                MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0_1));
                MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeRepnFor_7));
                MR_hl_field(0, Var_34, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_36, 0) = ((MR_Box) (HeadLocalArgRepn_15));
                MR_hl_field(1, Var_36, 1) = ((MR_Box) (TailLocalArgRepns_16));
              }
              parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_arg_repn_0), Var_34, (MR_String) ", ", Var_36, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "])");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RemoteRepn_18 = (MR_Word) (MR_body((MR_Word) (NonConstantRepn_9), (MR_Integer) 1));
        MR_Word Ptag_19 = ((MR_Word) ((MR_hl_field(0, RemoteRepn_18, (MR_Integer) 0))));
        MR_Word CellRemoteSectag_20 = ((MR_Word) ((MR_hl_field(0, RemoteRepn_18, (MR_Integer) 1))));
        MR_Word OoMRemoteArgRepns_21 = ((MR_Word) ((MR_hl_field(0, RemoteRepn_18, (MR_Integer) 2))));
        uint8_t PtagUint8_22 = (uint8_t) (Ptag_19);
        MR_Unsigned PtagUint_23;

        PtagUint_23 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_22);
        switch (TypeRepnFor_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Var_86;
              MR_Word Var_88;
              MR_Integer Var_91;
              MR_String I_112;
              MR_Word HeadRemoteArgRepn_113;
              MR_Word TailRemoteArgRepns_114;
              MR_String Var_159;
              MR_String NlI_228;
              MR_Word HeadX_229;
              MR_Word TailXs_230;

              I_112 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
              mercury__io__write_string_4_p_0(Stream_10, I_112);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "remote_cell(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, PtagUint_23, &Var_159);
              mercury__io__write_string_4_p_0(Stream_10, Var_159);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_4_p_0(CellRemoteSectag_20, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
              HeadRemoteArgRepn_113 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_21, (MR_Integer) 0))));
              TailRemoteArgRepns_114 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_21, (MR_Integer) 1))));
              Var_86 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              Var_91 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (HeadRemoteArgRepn_113));
                MR_hl_field(1, Var_88, 1) = ((MR_Box) (TailRemoteArgRepns_114));
              }
              NlI_228 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_86);
              HeadX_229 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
              TailXs_230 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
              mercury__io__write_string_4_p_0(Stream_10, NlI_228);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[");
              parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_57_95_95_91_51_93_95_48_6_p_0(TypeRepnFor_7, Var_91, HeadX_229, TailXs_230, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, NlI_228);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "]");
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
              mercury__io__write_string_4_p_0(Stream_10, I_112);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word HeadRemoteArgRepn_24;
              MR_Word TailRemoteArgRepns_25;
              MR_Word Var_69;
              MR_Word Var_71;
              MR_String Var_144;

              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "remote_cell(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, PtagUint_23, &Var_144);
              mercury__io__write_string_4_p_0(Stream_10, Var_144);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_4_p_0(CellRemoteSectag_20, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", [");
              HeadRemoteArgRepn_24 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_21, (MR_Integer) 0))));
              TailRemoteArgRepns_25 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_21, (MR_Integer) 1))));
              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[5]));
                MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0_2));
                MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_69, 3) = ((MR_Box) (TypeRepnFor_7));
                MR_hl_field(0, Var_69, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_71, 0) = ((MR_Box) (HeadRemoteArgRepn_24));
                MR_hl_field(1, Var_71, 1) = ((MR_Box) (TailRemoteArgRepns_25));
              }
              parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), Var_69, (MR_String) ", ", Var_71, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "])");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Ptag_117 = ((MR_Word) ((MR_hl_field(2, NonConstantRepn_9, (MR_Integer) 0))));
        uint8_t PtagUint8_118 = (uint8_t) (Ptag_117);
        MR_Unsigned PtagUint_119;

        PtagUint_119 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_118);
        switch (TypeRepnFor_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String NlI_26;
              MR_String Var_196;

              NlI_26 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_8);
              mercury__io__write_string_4_p_0(Stream_10, NlI_26);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "direct_arg(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, PtagUint_119, &Var_196);
              mercury__io__write_string_4_p_0(Stream_10, Var_196);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_183;

              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "direct_arg(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, PtagUint_119, &Var_183);
              mercury__io__write_string_4_p_0(Stream_10, Var_183);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_4_p_0(
  MR_Word CellLocalSectag_5,
  MR_Word Stream_6)
{
  if ((CellLocalSectag_5 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "remote_no_sectag");
  else
  {
    MR_Unsigned Sectag_8 = ((MR_Unsigned) ((MR_hl_field(1, CellLocalSectag_5, (MR_Integer) 0))));
    MR_Word SectagWordOrSize_9 = ((MR_Word) ((MR_hl_field(1, CellLocalSectag_5, (MR_Integer) 1))));
    MR_String Var_26;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "remote_sectag(");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Sectag_8, &Var_26);
    mercury__io__write_string_4_p_0(Stream_6, Var_26);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    if ((SectagWordOrSize_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "rst_full");
    else
    {
      uint8_t NumBits_35 = ((uint8_t) (MR_Word) (MR_hl_field(1, SectagWordOrSize_9, (MR_Integer) 0)));
      MR_Unsigned Var_45;
      MR_String Var_46;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "rst_part(");
      mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumBits_35, &Var_45);
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Var_45, &Var_46);
      mercury__io__write_string_4_p_0(Stream_6, Var_46);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_4_p_0(
  MR_Word CellLocalSectag_5,
  MR_Word Stream_6)
{
  MR_Unsigned Sectag_8 = ((MR_Unsigned) ((MR_hl_field(0, CellLocalSectag_5, (MR_Integer) 0))));
  uint8_t SectagNumBits_9 = ((uint8_t) (MR_Word) (MR_hl_field(0, CellLocalSectag_5, (MR_Integer) 1)));
  MR_String Var_23;
  MR_Unsigned Var_34;
  MR_String Var_35;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "local_sectag(");
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Sectag_8, &Var_23);
  mercury__io__write_string_4_p_0(Stream_6, Var_23);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__string__format__format_cast_uint8_to_uint_2_p_0(SectagNumBits_9, &Var_34);
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Var_34, &Var_35);
  mercury__io__write_string_4_p_0(Stream_6, Var_35);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word NonConstantRepn_9,
  MR_Word Stream_10)
{
  switch (TypeRepnFor_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if (((MR_tag((MR_Word) NonConstantRepn_9)) == (MR_Integer) 0))
      {
        MR_Word LocalRepn_12 = ((MR_Word) ((MR_hl_field(0, NonConstantRepn_9, (MR_Integer) 0))));
        MR_Word OoMLocalArgRepns_13 = (MR_Word) (LocalRepn_12);
        MR_String I_16;
        MR_Integer Var_37;
        MR_Word Var_39;
        MR_Integer Var_42;
        MR_Word HeadLocalArgRepn_72;
        MR_Word TailLocalArgRepns_73;
        MR_String NlI_117;
        MR_Word HeadX_118;
        MR_Word TailXs_119;

        I_16 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_10, I_16);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "only_local_cell([");
        HeadLocalArgRepn_72 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_13, (MR_Integer) 0))));
        TailLocalArgRepns_73 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_13, (MR_Integer) 1))));
        Var_37 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
        Var_42 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (HeadLocalArgRepn_72));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (TailLocalArgRepns_73));
        }
        NlI_117 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_37);
        HeadX_118 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
        TailXs_119 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Stream_10, NlI_117);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[");
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(TypeRepnFor_7, Var_42, HeadX_118, TailXs_119, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, NlI_117);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "]");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_10, I_16);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_Word RemoteRepn_17 = ((MR_Word) ((MR_hl_field(1, NonConstantRepn_9, (MR_Integer) 0))));
        MR_Word OoMRemoteArgRepns_18 = (MR_Word) (RemoteRepn_17);
        MR_Integer Var_60;
        MR_Word Var_62;
        MR_Integer Var_65;
        MR_String I_74;
        MR_Word HeadRemoteArgRepn_75;
        MR_Word TailRemoteArgRepns_76;
        MR_String NlI_141;
        MR_Word HeadX_142;
        MR_Word TailXs_143;

        I_74 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n%sonly_remote_cell([");
        HeadRemoteArgRepn_75 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_18, (MR_Integer) 0))));
        TailRemoteArgRepns_76 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_18, (MR_Integer) 1))));
        Var_60 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
        Var_65 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (HeadRemoteArgRepn_75));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (TailRemoteArgRepns_76));
        }
        NlI_141 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_60);
        HeadX_142 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
        TailXs_143 = ((MR_Word) ((MR_hl_field(1, Var_62, (MR_Integer) 1))));
        mercury__io__write_string_4_p_0(Stream_10, NlI_141);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[");
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_57_95_95_91_51_93_95_48_6_p_0(TypeRepnFor_7, Var_65, HeadX_142, TailXs_143, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, NlI_141);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "]");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_10, I_74);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      if (((MR_tag((MR_Word) NonConstantRepn_9)) == (MR_Integer) 0))
      {
        MR_Word HeadLocalArgRepn_14;
        MR_Word TailLocalArgRepns_15;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word LocalRepn_97 = ((MR_Word) ((MR_hl_field(0, NonConstantRepn_9, (MR_Integer) 0))));
        MR_Word OoMLocalArgRepns_98 = (MR_Word) (LocalRepn_97);

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "only_local_cell([");
        HeadLocalArgRepn_14 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_98, (MR_Integer) 0))));
        TailLocalArgRepns_15 = ((MR_Word) ((MR_hl_field(0, OoMLocalArgRepns_98, (MR_Integer) 1))));
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[4]));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0_1));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_25, 3) = ((MR_Box) (TypeRepnFor_7));
          MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (HeadLocalArgRepn_14));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (TailLocalArgRepns_15));
        }
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_arg_repn_0), Var_25, (MR_String) ", ", Var_27, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "])");
      }
      else
      {
        MR_Word HeadRemoteArgRepn_19;
        MR_Word TailRemoteArgRepns_20;
        MR_Word Var_51;
        MR_Word Var_53;
        MR_Word RemoteRepn_99 = ((MR_Word) ((MR_hl_field(1, NonConstantRepn_9, (MR_Integer) 0))));
        MR_Word OoMRemoteArgRepns_100 = (MR_Word) (RemoteRepn_99);

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "only_remote_cell([");
        HeadRemoteArgRepn_19 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_100, (MR_Integer) 0))));
        TailRemoteArgRepns_20 = ((MR_Word) ((MR_hl_field(0, OoMRemoteArgRepns_100, (MR_Integer) 1))));
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[5]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0_2));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeRepnFor_7));
          MR_hl_field(0, Var_51, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (HeadRemoteArgRepn_19));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (TailRemoteArgRepns_20));
        }
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), Var_51, (MR_String) ", ", Var_53, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "])");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_57_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_Integer Var_21,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_6_p_0(Var_20, Var_21, X_8, Stream_10);
    if (!((Xs_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_12 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 0))));
      MR_Word TailXs_13 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 1))));
      MR_Word next_value_of_X_8;
      MR_Word next_value_of_Xs_9;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_8 = HeadX_12;
      next_value_of_Xs_9 = TailXs_13;
      X_8 = next_value_of_X_8;
      Xs_9 = next_value_of_Xs_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word RemoteArgRepn_9,
  MR_Word Stream_10)
{
  MR_String NlI_12;

  NlI_12 = parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_2_f_0(TypeRepnFor_7, Indent_8);
  switch (MR_tag((MR_Word) RemoteArgRepn_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_4_p_0(Stream_10, NlI_12);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none_nowhere");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgOnlyOffset_13 = ((MR_Word) ((MR_hl_field(1, RemoteArgRepn_9, (MR_Integer) 0))));
        MR_Word CellOffset_14 = ((MR_Word) ((MR_hl_field(1, RemoteArgRepn_9, (MR_Integer) 1))));
        MR_Integer ArgOnlyOffsetInt_15 = (MR_Integer) (ArgOnlyOffset_13);
        MR_Integer CellOffsetInt_16 = (MR_Integer) (CellOffset_14);
        MR_String Var_216;
        MR_String Var_226;

        mercury__io__write_string_4_p_0(Stream_10, NlI_12);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "full(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), ArgOnlyOffsetInt_15, &Var_216);
        mercury__io__write_string_4_p_0(Stream_10, Var_216);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), CellOffsetInt_16, &Var_226);
        mercury__io__write_string_4_p_0(Stream_10, Var_226);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DoubleKind_17 = ((MR_Unsigned) ((MR_hl_field(2, RemoteArgRepn_9, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_String DKStr_18;
        MR_Word ArgOnlyOffset_74 = ((MR_Word) ((MR_hl_field(2, RemoteArgRepn_9, (MR_Integer) 0))));
        MR_Word CellOffset_75 = ((MR_Word) ((MR_hl_field(2, RemoteArgRepn_9, (MR_Integer) 1))));
        MR_Integer ArgOnlyOffsetInt_76 = (MR_Integer) (ArgOnlyOffset_74);
        MR_Integer CellOffsetInt_77 = (MR_Integer) (CellOffset_75);
        MR_String Var_238;
        MR_String Var_248;

        parse_tree__prog_data__double_word_kind_string_2_p_0(DoubleKind_17, &DKStr_18);
        mercury__io__write_string_4_p_0(Stream_10, NlI_12);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "double(");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), ArgOnlyOffsetInt_76, &Var_238);
        mercury__io__write_string_4_p_0(Stream_10, Var_238);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), CellOffsetInt_77, &Var_248);
        mercury__io__write_string_4_p_0(Stream_10, Var_248);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
        mercury__io__write_string_4_p_0(Stream_10, DKStr_18);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t Shift_19 = ((uint8_t) (MR_Word) (MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 3)));
            MR_Word FillKindSize_20 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 4))));
            MR_String Var_58;
            MR_Word ArgOnlyOffset_78 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 1))));
            MR_Word CellOffset_79 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 2))));
            MR_Integer ArgOnlyOffsetInt_80 = (MR_Integer) (ArgOnlyOffset_78);
            MR_Integer CellOffsetInt_81 = (MR_Integer) (CellOffset_79);
            MR_String Var_155;
            MR_String Var_165;
            MR_Unsigned Var_176;
            MR_String Var_177;

            Var_58 = parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(FillKindSize_20);
            mercury__io__write_string_4_p_0(Stream_10, NlI_12);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "partial_");
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "first");
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), ArgOnlyOffsetInt_80, &Var_155);
            mercury__io__write_string_4_p_0(Stream_10, Var_155);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), CellOffsetInt_81, &Var_165);
            mercury__io__write_string_4_p_0(Stream_10, Var_165);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(Shift_19, &Var_176);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Var_176, &Var_177);
            mercury__io__write_string_4_p_0(Stream_10, Var_177);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
            mercury__io__write_string_4_p_0(Stream_10, Var_58);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            uint8_t Shift_86 = ((uint8_t) (MR_Word) (MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 3)));
            MR_Word FillKindSize_87 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 4))));
            MR_String Var_102;
            MR_Word ArgOnlyOffset_104 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 1))));
            MR_Word CellOffset_105 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 2))));
            MR_Integer ArgOnlyOffsetInt_106 = (MR_Integer) (ArgOnlyOffset_104);
            MR_Integer CellOffsetInt_107 = (MR_Integer) (CellOffset_105);
            MR_String Var_115;
            MR_String Var_125;
            MR_Unsigned Var_136;
            MR_String Var_137;

            Var_102 = parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(FillKindSize_87);
            mercury__io__write_string_4_p_0(Stream_10, NlI_12);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "partial_");
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "shifted");
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), ArgOnlyOffsetInt_106, &Var_115);
            mercury__io__write_string_4_p_0(Stream_10, Var_115);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), CellOffsetInt_107, &Var_125);
            mercury__io__write_string_4_p_0(Stream_10, Var_125);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(Shift_86, &Var_136);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Var_136, &Var_137);
            mercury__io__write_string_4_p_0(Stream_10, Var_137);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
            mercury__io__write_string_4_p_0(Stream_10, Var_102);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgOnlyOffset_82 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 1))));
            MR_Word CellOffset_83 = ((MR_Word) ((MR_hl_field(3, RemoteArgRepn_9, (MR_Integer) 2))));
            MR_Integer ArgOnlyOffsetInt_84 = (MR_Integer) (ArgOnlyOffset_82);
            MR_Integer CellOffsetInt_85 = (MR_Integer) (CellOffset_83);
            MR_String Var_192;
            MR_String Var_202;

            mercury__io__write_string_4_p_0(Stream_10, NlI_12);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none_shifted(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), ArgOnlyOffsetInt_84, &Var_192);
            mercury__io__write_string_4_p_0(Stream_10, Var_192);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), CellOffsetInt_85, &Var_202);
            mercury__io__write_string_4_p_0(Stream_10, Var_202);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
          }
          break;
      }
      break;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_2_f_0(
  MR_Word TypeRepnFor_4,
  MR_Integer Indent_5)
{
  MR_String Str_6;

  switch (TypeRepnFor_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Str_6 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_5);
      break;
    case (MR_Integer) 0:
      Str_6 = (MR_String) "";
      break;
  }
  return Str_6;
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_Integer Var_21,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_6_p_0(Var_20, Var_21, X_8, Stream_10);
    if (!((Xs_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_12 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 0))));
      MR_Word TailXs_13 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 1))));
      MR_Word next_value_of_X_8;
      MR_Word next_value_of_Xs_9;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_8 = HeadX_12;
      next_value_of_Xs_9 = TailXs_13;
      X_8 = next_value_of_X_8;
      Xs_9 = next_value_of_Xs_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word LocalArgRepn_9,
  MR_Word Stream_10)
{
  MR_String NlI_12;

  switch (TypeRepnFor_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      NlI_12 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_8);
      break;
    case (MR_Integer) 0:
      NlI_12 = (MR_String) "";
      break;
  }
  if ((LocalArgRepn_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "local_none");
  }
  else
  {
    MR_Unsigned Shift_13 = ((MR_Unsigned) ((MR_hl_field(1, LocalArgRepn_9, (MR_Integer) 0))));
    MR_Word FillKindSize_14 = ((MR_Word) ((MR_hl_field(1, LocalArgRepn_9, (MR_Integer) 1))));
    MR_String Var_25;
    MR_String Var_37;

    Var_25 = parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(FillKindSize_14);
    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "local_partial(");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Shift_13, &Var_37);
    mercury__io__write_string_4_p_0(Stream_10, Var_37);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_10, Var_25);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word ConstantRepn_9,
  MR_Word Stream_10)
{
  MR_String NlI_12;
  MR_Unsigned Sectag_13;
  MR_Word SectagWordOrSize_14;
  MR_String Var_31;

  switch (TypeRepnFor_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      NlI_12 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_8);
      break;
    case (MR_Integer) 0:
      NlI_12 = (MR_String) " ";
      break;
  }
  Sectag_13 = ((MR_Unsigned) ((MR_hl_field(0, ConstantRepn_9, (MR_Integer) 0))));
  SectagWordOrSize_14 = ((MR_Word) ((MR_hl_field(0, ConstantRepn_9, (MR_Integer) 1))));
  mercury__io__write_string_4_p_0(Stream_10, NlI_12);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "constant(");
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Sectag_13, &Var_31);
  mercury__io__write_string_4_p_0(Stream_10, Var_31);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
  if (((MR_tag((MR_Word) SectagWordOrSize_14)) == (MR_Integer) 1))
  {
    uint8_t NumBits_48 = ((uint8_t) (MR_Word) (MR_hl_field(1, SectagWordOrSize_14, (MR_Integer) 0)));
    MR_Unsigned Var_66;
    MR_String Var_67;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "lst_part(");
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumBits_48, &Var_66);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Var_66, &Var_67);
    mercury__io__write_string_4_p_0(Stream_10, Var_67);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
  }
  else
  {
    uint8_t NumBits_39 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagWordOrSize_14, (MR_Integer) 0)));
    MR_Unsigned Var_53;
    MR_String Var_54;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "lst_rest(");
    mercury__string__format__format_cast_uint8_to_uint_2_p_0(NumBits_39, &Var_53);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, Var_53, &Var_54);
    mercury__io__write_string_4_p_0(Stream_10, Var_54);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
  }
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
}

MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__foreign_type_assertion_to_string_1_f_0(
  MR_Word Assertion_3)
{
  MR_String Str_4;

  switch (Assertion_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Str_4 = (MR_String) "can_pass_as_mercury_type";
      break;
    case (MR_Integer) 1:
      Str_4 = (MR_String) "stable";
      break;
    case (MR_Integer) 2:
      Str_4 = (MR_String) "word_aligned_pointer";
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(
  MR_Word FillKindSize_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) FillKindSize_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(FillKindSize_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "int8";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "int16";
          break;
        case (MR_Integer) 2:
          Str_4 = (MR_String) "int32";
          break;
        case (MR_Integer) 3:
          Str_4 = (MR_String) "uint8";
          break;
        case (MR_Integer) 4:
          Str_4 = (MR_String) "uint16";
          break;
        case (MR_Integer) 5:
          Str_4 = (MR_String) "uint32";
          break;
        case (MR_Integer) 6:
          Str_4 = (MR_String) "char21";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned NumBits_5 = ((MR_Unsigned) ((MR_hl_field(1, FillKindSize_3, (MR_Integer) 0))));
        MR_String Var_12;
        MR_String Var_19;

        mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]), (MR_Integer) 1, NumBits_5, &Var_12);
        Var_19 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) ")");
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_19);
      }
      break;
  }
  return Str_4;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_34;

  conv0_LambdaHeadVar__2_34 = parse_tree__parse_tree_out_type_repn__IntroducedFrom__func__mercury_output_item_type_repn__77__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ItemTypeRepn_8)
{
  MR_Word TypeCtorSymName0_10 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepn_8, (MR_Integer) 0))));
  MR_Word TypeParams_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepn_8, (MR_Integer) 1))));
  MR_Word RepnInfo_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepn_8, (MR_Integer) 2))));
  MR_Word TVarSet_13 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepn_8, (MR_Integer) 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeRepn_8, (MR_Integer) 4))));
  MR_Word TypeCtorSymName_16;
  MR_Word Args_17;
  MR_Word TypeTerm_19;
  MR_Word Var_32;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":- type_representation(");
  parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_6, TypeCtorSymName0_10, &TypeCtorSymName_16);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_10[0]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_5_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Context_14));
  }
  Args_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_1[1]), Var_32, TypeParams_11);
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeCtorSymName_16, Args_17, Context_14, &TypeTerm_19);
  parse_tree__parse_tree_out_term__mercury_output_term_nq_vs_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_13, (MR_Integer) 2, (MR_Integer) 0, TypeTerm_19, Stream_7);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
  switch (MR_tag((MR_Word) RepnInfo_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " is_word_aligned_ptr");
      break;
    case (MR_Integer) 1:
      {
        MR_Word EqvType_20 = ((MR_Word) ((MR_hl_field(1, RepnInfo_12, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " is_eqv_to(");
        parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_13, (MR_Integer) 2, EqvType_20, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SuperTypeCtor_21 = ((MR_Word) ((MR_hl_field(2, RepnInfo_12, (MR_Integer) 0))));
        MR_Word SuperTypeCtorSymName_22;
        MR_Integer SuperTypeArity_23;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " is_subtype_of(");
        SuperTypeCtorSymName_22 = ((MR_Word) ((MR_hl_field(0, SuperTypeCtor_21, (MR_Integer) 0))));
        SuperTypeArity_23 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor_21, (MR_Integer) 1))));
        parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(SuperTypeCtorSymName_22, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "/");
        mercury__io__write_int_4_p_0(Stream_7, SuperTypeArity_23);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, RepnInfo_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DuRepn_24 = ((MR_Word) ((MR_hl_field(3, RepnInfo_12, (MR_Integer) 1))));
            MR_Word TypeRepnFor_25;

            TypeRepnFor_25 = parse_tree__parse_tree_out_info__get_type_repn_for_1_f_0(Info_6);
            switch (TypeRepnFor_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String I_26;

                  I_26 = parse_tree__parse_tree_out_type_repn__indent_1_f_0((MR_Integer) 1);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(Stream_7, I_26);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "du_repn(");
                  parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_7_p_0(Stream_7, TypeRepnFor_25, (MR_Integer) 2, TVarSet_13, DuRepn_24);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(Stream_7, I_26);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " du_repn(");
                  parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_7_p_0(Stream_7, TypeRepnFor_25, (MR_Integer) 2, TVarSet_13, DuRepn_24);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeCJCsRepn_27 = ((MR_Word) ((MR_hl_field(3, RepnInfo_12, (MR_Integer) 1))));
            MR_Word TypeRepnFor_99;

            TypeRepnFor_99 = parse_tree__parse_tree_out_info__get_type_repn_for_1_f_0(Info_6);
            switch (TypeRepnFor_99) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String I_97;

                  I_97 = parse_tree__parse_tree_out_type_repn__indent_1_f_0((MR_Integer) 1);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(Stream_7, I_97);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "foreign_type_repn(\n");
                  parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_7, TypeRepnFor_99, (MR_Integer) 2, MaybeCJCsRepn_27);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(Stream_7, I_97);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " foreign_type_repn(");
                  parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_7, TypeRepnFor_99, (MR_Integer) 2, MaybeCJCsRepn_27);
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                }
                break;
            }
          }
          break;
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ").\n");
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word DuRepn_12)
{
  switch (MR_tag((MR_Word) DuRepn_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DummyRepn_14 = (MR_Word) ((MR_Word) (DuRepn_12));
        MR_String FunctorName_21 = ((MR_String) ((MR_hl_field(0, DummyRepn_14, (MR_Integer) 0))));
        MR_Word MaybeCJCsRepnOrEnum_22 = ((MR_Word) ((MR_hl_field(0, DummyRepn_14, (MR_Integer) 1))));

        switch (TypeRepnFor_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String I_23;
              MR_Integer Var_41;
              MR_Box conv0_STATE_VARIABLE_IO_32_38;

              I_23 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_10);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              mercury__io__write_string_4_p_0(Stream_8, I_23);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "direct_dummy(");
              mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_8)), FunctorName_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_32_38);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
              Var_41 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_or_enum_6_p_0(Stream_8, TypeRepnFor_9, Var_41, MaybeCJCsRepnOrEnum_22);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              mercury__io__write_string_4_p_0(Stream_8, I_23);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Var_29;
              MR_Box conv1_STATE_VARIABLE_IO_19_26;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "direct_dummy(");
              mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_8)), FunctorName_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19_26);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              Var_29 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_or_enum_6_p_0(Stream_8, TypeRepnFor_9, Var_29, MaybeCJCsRepnOrEnum_22);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word EnumRepn_15 = (MR_Word) (MR_body((MR_Word) (DuRepn_12), (MR_Integer) 1));

        parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_6_p_0(Stream_8, TypeRepnFor_9, Indent_10, EnumRepn_15);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NotagRepn_16 = (MR_Word) (MR_body((MR_Word) (DuRepn_12), (MR_Integer) 2));

        parse_tree__parse_tree_out_type_repn__mercury_output_du_notag_7_p_0(Stream_8, TypeRepnFor_9, Indent_10, TVarSet_11, NotagRepn_16);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DuRepn_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OnlyFunctorRepn_17 = ((MR_Word) ((MR_hl_field(3, DuRepn_12, (MR_Integer) 1))));

            parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0(Stream_8, TypeRepnFor_9, Indent_10, TVarSet_11, OnlyFunctorRepn_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MoreFunctorsRepn_18 = ((MR_Word) ((MR_hl_field(3, DuRepn_12, (MR_Integer) 1))));

            parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_7_p_0(Stream_8, TypeRepnFor_9, Indent_10, TVarSet_11, MoreFunctorsRepn_18);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word MoreFunctorsRepn_12)
{
  MR_Word Functor1_14 = ((MR_Word) ((MR_hl_field(0, MoreFunctorsRepn_12, (MR_Integer) 0))));
  MR_Word Functor2_15 = ((MR_Word) ((MR_hl_field(0, MoreFunctorsRepn_12, (MR_Integer) 1))));
  MR_Word OtherFunctors_16 = ((MR_Word) ((MR_hl_field(0, MoreFunctorsRepn_12, (MR_Integer) 2))));
  MR_Word MaybeCJCsRepn_17 = ((MR_Word) ((MR_hl_field(0, MoreFunctorsRepn_12, (MR_Integer) 3))));

  switch (TypeRepnFor_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Indent1_20 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
        MR_String I_21;
        MR_Integer Var_67;
        MR_String NlI_99;

        I_21 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_10);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, I_21);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "gen_du_more_functors(");
        parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(TypeRepnFor_9, Indent1_20, TVarSet_11, Functor1_14, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
        parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(TypeRepnFor_9, Indent1_20, TVarSet_11, Functor2_15, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
        Var_67 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 2);
        NlI_99 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent1_20);
        if ((OtherFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_8, NlI_99);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[]");
        }
        else
        {
          MR_Word HeadX_100 = ((MR_Word) ((MR_hl_field(1, OtherFunctors_16, (MR_Integer) 0))));
          MR_Word TailXs_101 = ((MR_Word) ((MR_hl_field(1, OtherFunctors_16, (MR_Integer) 1))));

          mercury__io__write_string_4_p_0(Stream_8, NlI_99);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_54_95_95_91_52_93_95_48_6_p_0(TypeRepnFor_9, Var_67, TVarSet_11, HeadX_100, TailXs_101, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, NlI_99);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_8, TypeRepnFor_9, Indent1_20, MaybeCJCsRepn_17);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, I_21);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "gen_du_more_functors(");
        parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(TypeRepnFor_9, (MR_Integer) 0, TVarSet_11, Functor1_14, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(TypeRepnFor_9, (MR_Integer) 0, TVarSet_11, Functor2_15, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        if ((OtherFunctors_16 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[]");
        else
        {
          MR_Word Var_38;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_9[0]));
            MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_7_p_0_1));
            MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_38, 3) = ((MR_Box) (TypeRepnFor_9));
            MR_hl_field(0, Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, Var_38, 5) = ((MR_Box) (TVarSet_11));
          }
          parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_repn_0), Var_38, (MR_String) ", ", OtherFunctors_16, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_8, TypeRepnFor_9, (MR_Integer) 0, MaybeCJCsRepn_17);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_54_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_Integer Var_21,
  MR_Word Var_22,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(Var_20, Var_21, Var_22, X_8, Stream_10);
    if (!((Xs_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_12 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 0))));
      MR_Word TailXs_13 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 1))));
      MR_Word next_value_of_X_8;
      MR_Word next_value_of_Xs_9;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_8 = HeadX_12;
      next_value_of_Xs_9 = TailXs_13;
      X_8 = next_value_of_X_8;
      Xs_9 = next_value_of_Xs_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_more_nonconstant_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0(
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word TVarSet_10,
  MR_Word FunctorRepn_11,
  MR_Word Stream_12)
{
  switch (TypeRepnFor_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if (((MR_tag((MR_Word) FunctorRepn_11)) == (MR_Integer) 0))
      {
        MR_String FunctorName_14 = ((MR_String) ((MR_hl_field(0, FunctorRepn_11, (MR_Integer) 0))));
        MR_Word ConstantRepns_15 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_11, (MR_Integer) 1))));
        MR_String I_16;
        MR_Integer Indent1_17;
        MR_Word Var_45;
        MR_Integer Var_47;
        MR_Box conv0_STATE_VARIABLE_IO_40_40;

        I_16 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_12, I_16);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "constant_functor(");
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_12)), FunctorName_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_40_40);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",");
        Indent1_17 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        Var_47 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[2]));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_1));
          MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_45, 3) = ((MR_Box) (TypeRepnFor_8));
          MR_hl_field(0, Var_45, 4) = ((MR_Box) (Var_47));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(TypeRepnFor_8, Indent1_17, Var_45, ConstantRepns_15, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_12, I_16);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
      }
      else
      {
        MR_Word ArgTypes_18 = ((MR_Word) ((MR_hl_field(1, FunctorRepn_11, (MR_Integer) 1))));
        MR_Word NonConstantRepns_19 = ((MR_Word) ((MR_hl_field(1, FunctorRepn_11, (MR_Integer) 2))));
        MR_Integer Indent2_20;
        MR_String NlI2_21;
        MR_Word Var_88;
        MR_String I_95;
        MR_Integer Indent1_96;
        MR_String FunctorName_99 = ((MR_String) ((MR_hl_field(1, FunctorRepn_11, (MR_Integer) 0))));
        MR_Box conv1_STATE_VARIABLE_IO_76_76;

        I_95 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_12, I_95);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "nonconstant_functor(");
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_12)), FunctorName_99, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_76_76);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",");
        Indent1_96 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        Indent2_20 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
        NlI2_21 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent2_20);
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_52_95_95_91_53_93_95_48_6_p_0(NlI2_21, (MR_String) "", TVarSet_10, Indent1_96, ArgTypes_18, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",");
        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_88, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[3]));
          MR_hl_field(0, Var_88, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_2));
          MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_88, 3) = ((MR_Box) (TypeRepnFor_8));
          MR_hl_field(0, Var_88, 4) = ((MR_Box) (Indent2_20));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(TypeRepnFor_8, Indent1_96, Var_88, NonConstantRepns_19, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_12, I_95);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      if (((MR_tag((MR_Word) FunctorRepn_11)) == (MR_Integer) 0))
      {
        MR_Word Var_30;
        MR_String FunctorName_130 = ((MR_String) ((MR_hl_field(0, FunctorRepn_11, (MR_Integer) 0))));
        MR_Word ConstantRepns_131 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_11, (MR_Integer) 1))));
        MR_Box conv2_STATE_VARIABLE_IO_26_26;

        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "constant_functor(");
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_12)), FunctorName_130, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_26_26);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[2]));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_3));
          MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_30, 3) = ((MR_Box) (TypeRepnFor_8));
          MR_hl_field(0, Var_30, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(TypeRepnFor_8, (MR_Integer) 0, Var_30, ConstantRepns_131, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
      }
      else
      {
        MR_Word Var_59;
        MR_Word Var_66;
        MR_Word ArgTypes_132 = ((MR_Word) ((MR_hl_field(1, FunctorRepn_11, (MR_Integer) 1))));
        MR_Word NonConstantRepns_133 = ((MR_Word) ((MR_hl_field(1, FunctorRepn_11, (MR_Integer) 2))));
        MR_String FunctorName_134 = ((MR_String) ((MR_hl_field(1, FunctorRepn_11, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "nonconstant_functor(");
        parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_4_p_0(FunctorName_134, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", [");
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[1]));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_4));
          MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_59, 3) = ((MR_Box) (TVarSet_10));
          MR_hl_field(0, Var_59, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_59, (MR_String) ", ", ArgTypes_132, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "], ");
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_66, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[3]));
          MR_hl_field(0, Var_66, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_7_p_0_5));
          MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_66, 3) = ((MR_Box) (TypeRepnFor_8));
          MR_hl_field(0, Var_66, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(TypeRepnFor_8, (MR_Integer) 0, Var_66, NonConstantRepns_133, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_52_95_95_91_53_93_95_48_6_p_0(
  MR_String Var_40,
  MR_String Var_41,
  MR_Word Var_42,
  MR_Integer Indent_7,
  MR_Word Xs_9,
  MR_Word Stream_10)
{
  MR_String NlI_12;

  NlI_12 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_7);
  if ((Xs_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[]");
  }
  else
  {
    MR_Word HeadX_13 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 0))));
    MR_Word TailXs_14 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 1))));

    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[");
    parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_55_95_95_91_52_93_95_48_6_p_0(Var_40, Var_41, Var_42, HeadX_13, TailXs_14, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "]");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_4_p_0(
  MR_String FunctorName_5,
  MR_Word Stream_6)
{
  MR_Box conv0_STATE_VARIABLE_IO_9;

  mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_6)), FunctorName_5, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_only_nonconstant_repn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word OnlyFunctorRepn_12)
{
  MR_String FunctorName_14 = ((MR_String) ((MR_hl_field(0, OnlyFunctorRepn_12, (MR_Integer) 0))));
  MR_Word ArgTypes_15 = ((MR_Word) ((MR_hl_field(0, OnlyFunctorRepn_12, (MR_Integer) 1))));
  MR_Word CRepns_16 = ((MR_Word) ((MR_hl_field(0, OnlyFunctorRepn_12, (MR_Integer) 2))));
  MR_Word MaybeCJCsRepn_17 = ((MR_Word) ((MR_hl_field(0, OnlyFunctorRepn_12, (MR_Integer) 3))));

  switch (TypeRepnFor_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Indent1_18 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
        MR_Integer Indent2_19 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 2);
        MR_String I_20;
        MR_String I1_21;
        MR_String NlI2_22;
        MR_Word Var_65;
        MR_String NlI_109;
        MR_Box conv0_STATE_VARIABLE_IO_55_55;

        I_20 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_10);
        I1_21 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent1_18);
        NlI2_22 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent2_19);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, I_20);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "gen_du_only_functor(\n");
        mercury__io__write_string_4_p_0(Stream_8, I1_21);
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_8)), FunctorName_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_55_55);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
        NlI_109 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent1_18);
        if ((ArgTypes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_8, NlI_109);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[]");
        }
        else
        {
          MR_Word HeadX_110 = ((MR_Word) ((MR_hl_field(1, ArgTypes_15, (MR_Integer) 0))));
          MR_Word TailXs_111 = ((MR_Word) ((MR_hl_field(1, ArgTypes_15, (MR_Integer) 1))));

          mercury__io__write_string_4_p_0(Stream_8, NlI_109);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_55_95_95_91_52_93_95_48_6_p_0(NlI2_22, (MR_String) "", TVarSet_11, HeadX_110, TailXs_111, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, NlI_109);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[0]));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_1));
          MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_65, 3) = ((MR_Box) (TypeRepnFor_9));
          MR_hl_field(0, Var_65, 4) = ((MR_Box) (Indent2_19));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(TypeRepnFor_9, Indent1_18, Var_65, CRepns_16, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_8, TypeRepnFor_9, Indent1_18, MaybeCJCsRepn_17);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, I_20);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_30;
        MR_Word Var_37;
        MR_Box conv1_STATE_VARIABLE_IO_27_27;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "gen_du_only_functor(");
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_8)), FunctorName_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_27);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", [");
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[1]));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_2));
          MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_30, 3) = ((MR_Box) (TVarSet_11));
          MR_hl_field(0, Var_30, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, (MR_String) ", ", ArgTypes_15, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "],");
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_8[0]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_7_p_0_3));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (TypeRepnFor_9));
          MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(TypeRepnFor_9, (MR_Integer) 0, Var_37, CRepns_16, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_8, TypeRepnFor_9, (MR_Integer) 0, MaybeCJCsRepn_17);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_55_95_95_91_52_93_95_48_6_p_0(
  MR_String Var_20,
  MR_String Var_21,
  MR_Word Var_22,
  MR_Word X_8,
  MR_Word Xs_9,
  MR_Word Stream_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(Stream_10, Var_20);
    parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(Var_22, (MR_Integer) 2, X_8, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, Var_21);
    if (!((Xs_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_12 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 0))));
      MR_Word TailXs_13 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 1))));
      MR_Word next_value_of_X_8;
      MR_Word next_value_of_Xs_9;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_8 = HeadX_12;
      next_value_of_Xs_9 = TailXs_13;
      X_8 = next_value_of_X_8;
      Xs_9 = next_value_of_Xs_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word WriteX_10,
  MR_Word CRepns_11,
  MR_Word Stream_12)
{
  MR_String NlI_14;

  switch (TypeRepnFor_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      NlI_14 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_9);
      break;
    case (MR_Integer) 0:
      NlI_14 = (MR_String) " ";
      break;
  }
  switch (MR_tag((MR_Word) CRepns_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X1_15 = (MR_hl_field(0, CRepns_11, (MR_Integer) 0));
        void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv17_STATE_VARIABLE_IO_28_28;

        mercury__io__write_string_4_p_0(Stream_12, NlI_14);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "c_repns_same(");
        func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_16(((MR_Box) (WriteX_10)), X1_15, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_28_28);
        mercury__io__write_string_4_p_0(Stream_12, NlI_14);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box X2_16 = (MR_hl_field(1, CRepns_11, (MR_Integer) 1));
        MR_Box X1_80 = (MR_hl_field(1, CRepns_11, (MR_Integer) 0));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_STATE_VARIABLE_IO_39_39;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv3_STATE_VARIABLE_IO_43_43;

        mercury__io__write_string_4_p_0(Stream_12, NlI_14);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "c_repns_64_32(");
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_0(((MR_Box) (WriteX_10)), X1_80, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39_39);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_2(((MR_Box) (WriteX_10)), X2_16, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_43_43);
        mercury__io__write_string_4_p_0(Stream_12, NlI_14);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box X3_17 = (MR_hl_field(2, CRepns_11, (MR_Integer) 2));
        MR_Box X4_18 = (MR_hl_field(2, CRepns_11, (MR_Integer) 3));
        MR_Box X5_19 = (MR_hl_field(2, CRepns_11, (MR_Integer) 4));
        MR_Box X6_20 = (MR_hl_field(2, CRepns_11, (MR_Integer) 5));
        MR_Box X1_81 = (MR_hl_field(2, CRepns_11, (MR_Integer) 0));
        MR_Box X2_82 = (MR_hl_field(2, CRepns_11, (MR_Integer) 1));
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv5_STATE_VARIABLE_IO_54_54;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_IO_58_58;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_IO_62_62;
        void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv11_STATE_VARIABLE_IO_66_66;
        void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv13_STATE_VARIABLE_IO_70_70;
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv15_STATE_VARIABLE_IO_74_74;

        mercury__io__write_string_4_p_0(Stream_12, NlI_14);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "c_repns_all(");
        func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_4(((MR_Box) (WriteX_10)), X1_81, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_54_54);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_6(((MR_Box) (WriteX_10)), X2_82, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_58_58);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_8(((MR_Box) (WriteX_10)), X3_17, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_62_62);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_10(((MR_Box) (WriteX_10)), X4_18, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_66_66);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
        func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_12(((MR_Box) (WriteX_10)), X5_19, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_70_70);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", ");
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, WriteX_10, (MR_Integer) 1))));
        func_14(((MR_Box) (WriteX_10)), X6_20, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_74_74);
        mercury__io__write_string_4_p_0(Stream_12, NlI_14);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_notag_7_p_0(
  MR_Word Stream_8,
  MR_Word TypeRepnFor_9,
  MR_Integer Indent_10,
  MR_Word TVarSet_11,
  MR_Word NotagRepn_12)
{
  MR_String FunctorName_14 = ((MR_String) ((MR_hl_field(0, NotagRepn_12, (MR_Integer) 0))));
  MR_Word ArgType_15 = ((MR_Word) ((MR_hl_field(0, NotagRepn_12, (MR_Integer) 1))));
  MR_Word MaybeCJCsRepn_16 = ((MR_Word) ((MR_hl_field(0, NotagRepn_12, (MR_Integer) 2))));

  switch (TypeRepnFor_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String I_17;
        MR_String I1_18;
        MR_Integer Var_34;
        MR_Integer Var_54;
        MR_Box conv0_STATE_VARIABLE_IO_43_43;

        I_17 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_10);
        Var_34 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
        I1_18 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_34);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, I_17);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "notag(\n");
        mercury__io__write_string_4_p_0(Stream_8, I1_18);
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_8)), FunctorName_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43_43);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
        mercury__io__write_string_4_p_0(Stream_8, I1_18);
        parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_11, (MR_Integer) 2, ArgType_15, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
        Var_54 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_8, TypeRepnFor_9, Var_54, MaybeCJCsRepn_16);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, I_17);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box conv1_STATE_VARIABLE_IO_23_23;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "notag(");
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_8)), FunctorName_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_11, (MR_Integer) 2, ArgType_15, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(Stream_8, TypeRepnFor_9, (MR_Integer) 0, MaybeCJCsRepn_16);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeCJCsRepn_10)
{
  MR_bool succeeded;
  MR_Word MaybeRepnC_12 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsRepn_10, (MR_Integer) 0))));
  MR_Word MaybeRepnJava_13 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsRepn_10, (MR_Integer) 1))));
  MR_Word MaybeRepnCsharp_14 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsRepn_10, (MR_Integer) 2))));

  succeeded = (MaybeRepnC_12 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (MaybeRepnJava_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (MaybeRepnCsharp_14 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String I_15;

          I_15 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
          mercury__io__write_string_4_p_0(Stream_7, I_15);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "no_c_j_cs");
        }
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " no_c_j_cs");
        break;
    }
  else
  {
    MR_Integer Indent1_16 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String I_55;

          I_55 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
          mercury__io__write_string_4_p_0(Stream_7, I_55);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "c_j_cs(\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_16, MaybeRepnC_12);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_16, MaybeRepnJava_13);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_16, MaybeRepnCsharp_14);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
          mercury__io__write_string_4_p_0(Stream_7, I_55);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " c_j_cs(");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_16, MaybeRepnC_12);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_16, MaybeRepnJava_13);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_16, MaybeRepnCsharp_14);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  conv0_Str_4 = parse_tree__parse_tree_out_type_repn__foreign_type_assertion_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeTypeRepn_10)
{
  if ((MaybeTypeRepn_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String I_12;

    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        I_12 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
        break;
      case (MR_Integer) 0:
        I_12 = (MR_String) "";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, I_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "no_foreign");
  }
  else
  {
    MR_Word TypeRepn_13 = ((MR_Word) ((MR_hl_field(1, MaybeTypeRepn_10, (MR_Integer) 0))));
    MR_String ForeignTypeName_23 = ((MR_String) ((MR_hl_field(0, TypeRepn_13, (MR_Integer) 0))));
    MR_Word ForeignTypeAssertions_24 = ((MR_Word) ((MR_hl_field(0, TypeRepn_13, (MR_Integer) 1))));
    MR_String I_25;
    MR_Word Assertions_26;
    MR_Word AssertionsList_27;
    MR_Word AssertionStrs_28;
    MR_String AssertionsStr_29;

    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        I_25 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
        break;
      case (MR_Integer) 0:
        I_25 = (MR_String) "";
        break;
    }
    Assertions_26 = (MR_Word) (ForeignTypeAssertions_24);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_26, &AssertionsList_27);
    mercury__io__write_string_4_p_0(Stream_7, I_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "foreign_type(\"");
    mercury__io__write_string_4_p_0(Stream_7, ForeignTypeName_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\",");
    AssertionStrs_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_2[4]), AssertionsList_27);
    AssertionsStr_29 = mercury__string__join_list_2_f_0((MR_String) ", ", AssertionStrs_28);
    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String I1_30;
          MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

          I1_30 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_34);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
          mercury__io__write_string_4_p_0(Stream_7, I1_30);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
          mercury__io__write_string_4_p_0(Stream_7, AssertionsStr_29);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]\n");
          mercury__io__write_string_4_p_0(Stream_7, I_25);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " [");
          mercury__io__write_string_4_p_0(Stream_7, AssertionsStr_29);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "])");
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word EnumRepn_10)
{
  MR_String Functor1_12 = ((MR_String) ((MR_hl_field(0, EnumRepn_10, (MR_Integer) 0))));
  MR_String Functor2_13 = ((MR_String) ((MR_hl_field(0, EnumRepn_10, (MR_Integer) 1))));
  MR_Word OtherFunctors_14 = ((MR_Word) ((MR_hl_field(0, EnumRepn_10, (MR_Integer) 2))));
  MR_Word MaybeCJCsRepnOrEnum_15 = ((MR_Word) ((MR_hl_field(0, EnumRepn_10, (MR_Integer) 3))));

  switch (TypeRepnFor_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Indent1_18 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
        MR_String I_19;
        MR_String NlI1_20;
        MR_String Var_63;
        MR_Integer Var_64;
        MR_Box conv0_STATE_VARIABLE_IO_15_96;
        MR_Box conv1_STATE_VARIABLE_IO_15_99;

        I_19 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
        NlI1_20 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent1_18);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_7, I_19);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "enum(");
        mercury__io__write_string_4_p_0(Stream_7, NlI1_20);
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_7)), Functor1_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15_96);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "");
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
        mercury__io__write_string_4_p_0(Stream_7, NlI1_20);
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_7)), Functor2_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15_99);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "");
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
        Var_64 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
        Var_63 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_64);
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(Var_63, (MR_String) "", Indent1_18, OtherFunctors_14, Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n");
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_or_enum_6_p_0(Stream_7, TypeRepnFor_8, Indent1_18, MaybeCJCsRepnOrEnum_15);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_7, I_19);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box conv2_STATE_VARIABLE_IO_25_25;
        MR_Box conv3_STATE_VARIABLE_IO_28_28;

        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "enum(");
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_7)), Functor1_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25_25);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
        mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_7)), Functor2_13, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_28_28);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
        if ((OtherFunctors_14 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[]");
        else
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
          parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_2[3]), (MR_String) ", ", OtherFunctors_14, Stream_7);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
        }
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
        parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_or_enum_6_p_0(Stream_7, TypeRepnFor_8, (MR_Integer) 0, MaybeCJCsRepnOrEnum_15);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(
  MR_String Var_40,
  MR_String Var_41,
  MR_Integer Indent_7,
  MR_Word Xs_9,
  MR_Word Stream_10)
{
  MR_String NlI_12;

  NlI_12 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_7);
  if ((Xs_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[]");
  }
  else
  {
    MR_String HeadX_13 = ((MR_String) ((MR_hl_field(1, Xs_9, (MR_Integer) 0))));
    MR_Word TailXs_14 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 1))));

    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "[");
    parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_6_p_0(Var_40, Var_41, HeadX_13, TailXs_14, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, NlI_12);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "]");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_repn_or_enum_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeCJCsRepnOrEnum_10)
{
  MR_bool succeeded;
  MR_Word MaybeRepnOrEnumC_12 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsRepnOrEnum_10, (MR_Integer) 0))));
  MR_Word MaybeRepnOrEnumJava_13 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsRepnOrEnum_10, (MR_Integer) 1))));
  MR_Word MaybeRepnOrEnumCsharp_14 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsRepnOrEnum_10, (MR_Integer) 2))));
  MR_Integer Indent1_15 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  MR_String I_16;

  I_16 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
  succeeded = (MaybeRepnOrEnumC_12 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (MaybeRepnOrEnumJava_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (MaybeRepnOrEnumCsharp_14 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_7, I_16);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "no_c_j_cs");
        }
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " no_c_j_cs");
        break;
    }
  else
    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
          mercury__io__write_string_4_p_0(Stream_7, I_16);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "c_j_cs(\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_15, MaybeRepnOrEnumC_12);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_15, MaybeRepnOrEnumJava_13);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_15, MaybeRepnOrEnumCsharp_14);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
          mercury__io__write_string_4_p_0(Stream_7, I_16);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) " c_j_cs(");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_15, MaybeRepnOrEnumC_12);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_15, MaybeRepnOrEnumJava_13);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent1_15, MaybeRepnOrEnumCsharp_14);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
        break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word MaybeTypeRepnOrEnum_10)
{
  if ((MaybeTypeRepnOrEnum_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String I_12;

    switch (TypeRepnFor_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        I_12 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
        break;
      case (MR_Integer) 0:
        I_12 = (MR_String) "";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, I_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "no_foreign");
  }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, MaybeTypeRepnOrEnum_10, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1))
    {
      MR_Word EnumRepn_13 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
      MR_String HeadEnum_28 = ((MR_String) ((MR_hl_field(0, EnumRepn_13, (MR_Integer) 0))));
      MR_Word TailEnums_29 = ((MR_Word) ((MR_hl_field(0, EnumRepn_13, (MR_Integer) 1))));

      switch (TypeRepnFor_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String I_30;
            MR_Integer Var_37;
            MR_Word Var_39;
            MR_String Var_42;
            MR_Integer Var_43;
            MR_String NlI_56;
            MR_String HeadX_57;
            MR_Word TailXs_58;

            I_30 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
            mercury__io__write_string_4_p_0(Stream_7, I_30);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "foreign_enum(");
            Var_37 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
            Var_43 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 2);
            Var_42 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_43);
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (HeadEnum_28));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (TailEnums_29));
            }
            NlI_56 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_37);
            HeadX_57 = ((MR_String) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
            TailXs_58 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
            mercury__io__write_string_4_p_0(Stream_7, NlI_56);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
            parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_6_p_0(Var_42, (MR_String) "", HeadX_57, TailXs_58, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, NlI_56);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
            mercury__io__write_string_4_p_0(Stream_7, I_30);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_34;

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "foreign_enum([");
            {
              Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_34, 0) = ((MR_Box) (HeadEnum_28));
              MR_hl_field(1, Var_34, 1) = ((MR_Box) (TailEnums_29));
            }
            parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_2[2]), (MR_String) ", ", Var_34, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "])");
          }
          break;
      }
    }
    else
    {
      MR_Word TypeRepn_14 = (MR_Word) ((MR_Word) (Var_25));

      parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_repn_6_p_0(Stream_7, TypeRepnFor_8, Indent_9, TypeRepn_14);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_6_p_0(
  MR_String Var_20,
  MR_String Var_21,
  MR_String X_8,
  MR_Word Xs_9,
  MR_Word Stream_10)
{
  while (MR_TRUE)
  {
    MR_Box conv0_STATE_VARIABLE_IO_15_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(Stream_10, Var_20);
    mercury__term_io__format_quoted_string_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]), ((MR_Box) (Stream_10)), X_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15_23);
    mercury__io__write_string_4_p_0(Stream_10, Var_21);
    if (!((Xs_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String HeadX_12 = ((MR_String) ((MR_hl_field(1, Xs_9, (MR_Integer) 0))));
      MR_Word TailXs_13 = ((MR_Word) ((MR_hl_field(1, Xs_9, (MR_Integer) 1))));
      MR_String next_value_of_X_8;
      MR_Word next_value_of_Xs_9;

      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_8 = HeadX_12;
      next_value_of_Xs_9 = TailXs_13;
      X_8 = next_value_of_X_8;
      Xs_9 = next_value_of_Xs_9;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String StrPrime_5;

  if ((((MR_Unsigned) N_3) <= ((MR_Unsigned) 6)))
  {
    StrPrime_5 = ((&parse_tree__parse_tree_out_type_repn_vector_common_6[7 + N_3]))->parse_tree__parse_tree_out_type_repn__vector_common_type_6_0__vct_6_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Str_4 = StrPrime_5;
  else
  {
    MR_String Var_7;
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 6);

    Var_7 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_8);
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "\n                        ", Var_7);
  }
  return Str_4;
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  conv0_Str_4 = parse_tree__parse_tree_out_type_repn__foreign_type_assertion_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_repn_6_p_0(
  MR_Word Stream_7,
  MR_Word TypeRepnFor_8,
  MR_Integer Indent_9,
  MR_Word TypeRepn_10)
{
  MR_String ForeignTypeName_12 = ((MR_String) ((MR_hl_field(0, TypeRepn_10, (MR_Integer) 0))));
  MR_Word ForeignTypeAssertions_13 = ((MR_Word) ((MR_hl_field(0, TypeRepn_10, (MR_Integer) 1))));
  MR_String I_14;
  MR_Word Assertions_15;
  MR_Word AssertionsList_16;
  MR_Word AssertionStrs_17;
  MR_String AssertionsStr_18;

  switch (TypeRepnFor_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      I_14 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_9);
      break;
    case (MR_Integer) 0:
      I_14 = (MR_String) "";
      break;
  }
  Assertions_15 = (MR_Word) (ForeignTypeAssertions_13);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_15, &AssertionsList_16);
  mercury__io__write_string_4_p_0(Stream_7, I_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "foreign_type(\"");
  mercury__io__write_string_4_p_0(Stream_7, ForeignTypeName_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\",");
  AssertionStrs_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_2[1]), AssertionsList_16);
  AssertionsStr_18 = mercury__string__join_list_2_f_0((MR_String) ", ", AssertionStrs_17);
  switch (TypeRepnFor_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String I1_19;
        MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

        I1_19 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_36);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_7, I1_19);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
        mercury__io__write_string_4_p_0(Stream_7, AssertionsStr_18);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]\n");
        mercury__io__write_string_4_p_0(Stream_7, I_14);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " [");
        mercury__io__write_string_4_p_0(Stream_7, AssertionsStr_18);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "])");
      }
      break;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__indent_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String StrPrime_5;

  if ((((MR_Unsigned) N_3) <= ((MR_Unsigned) 6)))
  {
    StrPrime_5 = ((&parse_tree__parse_tree_out_type_repn_vector_common_6[0 + N_3]))->parse_tree__parse_tree_out_type_repn__vector_common_type_6_0__vct_6_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Str_4 = StrPrime_5;
  else
  {
    MR_String Var_7;
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 6);

    Var_7 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_8);
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "                        ", Var_7);
  }
  return Str_4;
}

void mercury__parse_tree__parse_tree_out_type_repn__init(void)
{
}

void mercury__parse_tree__parse_tree_out_type_repn__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_type_repn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_type_repn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_type_repn.
