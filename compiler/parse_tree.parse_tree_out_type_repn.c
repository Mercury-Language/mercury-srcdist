/*
** Automatically generated from `parse_tree_out_type_repn.m'
** by the Mercury compiler,
** version rotd-2020-06-04
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
#include "bimap.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_Word MR_CALL 
parse_tree__parse_tree_out_type_repn__IntroducedFrom__func__mercury_output_item_type_repn__77__1_2_f_0(
  MR_Word Context_12,
  MR_Word LambdaHeadVar__1_28);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word NonConstantRepn_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer Var_20,
  MR_Word X_7,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word LocalArgRepn_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_50_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_38,
  MR_Integer Var_39,
  MR_Integer Indent_6,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_57_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer Var_20,
  MR_Word X_7,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word RemoteArgRepn_8);

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_2_f_0(
  MR_Word TypeRepnFor_4,
  MR_Integer Indent_5);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_3_p_0(
  MR_Word CellLocalSectag_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_3_p_0(
  MR_Word CellLocalSectag_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word ConstantRepn_8);

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word DuRepn_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word MoreFunctorsRepn_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_53_95_95_91_53_93_95_48_5_p_0(
  MR_Word Var_38,
  MR_Integer Var_39,
  MR_Word Var_40,
  MR_Integer Indent_6,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_54_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer Var_20,
  MR_Word Var_21,
  MR_Word X_7,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word FunctorRepn_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word OnlyFunctorRepn_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_52_95_95_91_53_93_95_48_5_p_0(
  MR_String Var_38,
  MR_String Var_39,
  MR_Word Var_40,
  MR_Integer Indent_6,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_55_95_95_91_52_93_95_48_5_p_0(
  MR_String Var_19,
  MR_String Var_20,
  MR_Word Var_21,
  MR_Word X_7,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word WriteX_9,
  MR_Word CRepns_10);

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_space_for_machines_2_f_0(
  MR_Word TypeRepnFor_4,
  MR_Integer Indent_5);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_notag_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word NotagRepn_10);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeCJCsERepn_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeTypeRepn_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word EnumRepn_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_49_95_95_91_52_93_95_48_5_p_0(
  MR_String Var_38,
  MR_String Var_39,
  MR_Integer Indent_6,
  MR_Word Xs_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_one_functor_name_5_p_0(
  MR_String Prefix_6,
  MR_String Suffix_7,
  MR_String FunctorName_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(
  MR_String FunctorName_4);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_or_enum_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeCJCsERepnOrEnum_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeTypeRepnOrEnum_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_enum_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_enum_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word EnumRepn_8);

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_5_p_0(
  MR_String Var_19,
  MR_String Var_20,
  MR_String X_7,
  MR_Word Xs_8);

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(
  MR_Integer N_3);

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__indent_1_f_0(
  MR_Integer N_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_3[3][6];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_5[5][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_6[1][9];

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_7[1][1];


/* sealed */ struct parse_tree__parse_tree_out_type_repn__vector_common_type_2_0_s {
  const MR_String parse_tree__parse_tree_out_type_repn__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_type_repn__vector_common_type_2_0_s parse_tree__parse_tree_out_type_repn_vector_common_2[14];



static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_4[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_foreign_enum_repn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_5[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_nonconstant_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_constant_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_arg_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_type_repn_for_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_type_repn_scalar_common_7[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_type_repn__vector_common_type_2_0_s parse_tree__parse_tree_out_type_repn_vector_common_2[14] = {
  /* row 0 */   {     (MR_String) "" },
  /* row 1 */   {     (MR_String) "    " },
  /* row 2 */   {     (MR_String) "        " },
  /* row 3 */   {     (MR_String) "            " },
  /* row 4 */   {     (MR_String) "                " },
  /* row 5 */   {     (MR_String) "                    " },
  /* row 6 */   {     (MR_String) "                        " },
  /* row 7 */   {     (MR_String) "\n" },
  /* row 8 */   {     (MR_String) "\n    " },
  /* row 9 */   {     (MR_String) "\n        " },
  /* row 10 */   {     (MR_String) "\n            " },
  /* row 11 */   {     (MR_String) "\n                " },
  /* row 12 */   {     (MR_String) "\n                    " },
  /* row 13 */   {     (MR_String) "\n                        " },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_type_repn__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static MR_Word MR_CALL 
parse_tree__parse_tree_out_type_repn__IntroducedFrom__func__mercury_output_item_type_repn__77__1_2_f_0(
  MR_Word Context_12,
  MR_Word LambdaHeadVar__1_28)
{
  {
    MR_Word LambdaHeadVar__2_29;

    {
      LambdaHeadVar__2_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_29, 0) = ((MR_Box) (LambdaHeadVar__1_28));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_29, 1) = ((MR_Box) (Context_12));
    }
    return LambdaHeadVar__2_29;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word NonConstantRepn_8)
{
  switch (MR_tag((MR_Word) NonConstantRepn_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CellLocalSectag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonConstantRepn_8, (MR_Integer) 0))));
        MR_Word OoMLocalArgRepns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NonConstantRepn_8, (MR_Integer) 1))));

        switch (TypeRepnFor_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String I_14;
              MR_Integer Var_82;
              MR_Word Var_84;
              MR_Integer Var_87;
              MR_Word HeadLocalArgRepn_106;
              MR_Word TailLocalArgRepns_107;
              MR_String NlI_202;
              MR_Word HeadX_203;
              MR_Word TailXs_204;

              I_14 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(I_14);
              mercury__io__write_string_3_p_0((MR_String) "local_cell(");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_3_p_0(CellLocalSectag_10);
              mercury__io__write_string_3_p_0((MR_String) ",");
              HeadLocalArgRepn_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMLocalArgRepns_11, (MR_Integer) 0))));
              TailLocalArgRepns_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMLocalArgRepns_11, (MR_Integer) 1))));
              Var_82 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
              Var_87 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (HeadLocalArgRepn_106));
                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (TailLocalArgRepns_107));
              }
              NlI_202 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_82);
              HeadX_203 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 0))));
              TailXs_204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 1))));
              mercury__io__write_string_3_p_0(NlI_202);
              mercury__io__write_string_3_p_0((MR_String) "[");
              parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_5_p_0(TypeRepnFor_6, Var_87, HeadX_203, TailXs_204);
              mercury__io__write_string_3_p_0(NlI_202);
              mercury__io__write_string_3_p_0((MR_String) "]");
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(I_14);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word HeadLocalArgRepn_12;
              MR_Word TailLocalArgRepns_13;
              MR_Word Var_99;
              MR_Word Var_101;

              mercury__io__write_string_3_p_0((MR_String) "local_cell(");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_3_p_0(CellLocalSectag_10);
              mercury__io__write_string_3_p_0((MR_String) ", [");
              HeadLocalArgRepn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMLocalArgRepns_11, (MR_Integer) 0))));
              TailLocalArgRepns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMLocalArgRepns_11, (MR_Integer) 1))));
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (HeadLocalArgRepn_12));
                MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (TailLocalArgRepns_13));
              }
              {
                Var_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (TypeRepnFor_6));
                MR_hl_field(MR_mktag(0), Var_101, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_arg_repn_0), Var_99, (MR_String) ", ", Var_101);
              mercury__io__write_string_3_p_0((MR_String) "])");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Ptag_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonConstantRepn_8, (MR_Integer) 0))));
        MR_Word CellRemoteSectag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonConstantRepn_8, (MR_Integer) 1))));
        MR_Word OoMRemoteArgRepns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonConstantRepn_8, (MR_Integer) 2))));
        uint8_t PtagUint8_18 = (uint8_t) (Ptag_15);
        MR_Unsigned PtagUint_19;

        PtagUint_19 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_18);
        switch (TypeRepnFor_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Var_47;
              MR_Word Var_49;
              MR_Integer Var_52;
              MR_String I_108;
              MR_Word HeadRemoteArgRepn_109;
              MR_Word TailRemoteArgRepns_110;
              MR_String Var_150;

              I_108 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(I_108);
              mercury__io__write_string_3_p_0((MR_String) "remote_cell(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, PtagUint_19, &Var_150);
              mercury__io__write_string_3_p_0(Var_150);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_3_p_0(CellRemoteSectag_16);
              mercury__io__write_string_3_p_0((MR_String) ",");
              HeadRemoteArgRepn_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMRemoteArgRepns_17, (MR_Integer) 0))));
              TailRemoteArgRepns_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMRemoteArgRepns_17, (MR_Integer) 1))));
              Var_47 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
              Var_52 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (HeadRemoteArgRepn_109));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (TailRemoteArgRepns_110));
              }
              parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_50_95_95_91_52_93_95_48_5_p_0(TypeRepnFor_6, Var_52, Var_47, Var_49);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(I_108);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word HeadRemoteArgRepn_20;
              MR_Word TailRemoteArgRepns_21;
              MR_Word Var_67;
              MR_Word Var_69;
              MR_String Var_135;

              mercury__io__write_string_3_p_0((MR_String) "remote_cell(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, PtagUint_19, &Var_135);
              mercury__io__write_string_3_p_0(Var_135);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_3_p_0(CellRemoteSectag_16);
              mercury__io__write_string_3_p_0((MR_String) ", [");
              HeadRemoteArgRepn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMRemoteArgRepns_17, (MR_Integer) 0))));
              TailRemoteArgRepns_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMRemoteArgRepns_17, (MR_Integer) 1))));
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (HeadRemoteArgRepn_20));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (TailRemoteArgRepns_21));
              }
              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[4]));
                MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (TypeRepnFor_6));
                MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), Var_67, (MR_String) ", ", Var_69);
              mercury__io__write_string_3_p_0((MR_String) "])");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Ptag_113 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonConstantRepn_8, (MR_Integer) 0))));
        uint8_t PtagUint8_114 = (uint8_t) (Ptag_113);
        MR_Unsigned PtagUint_115;

        PtagUint_115 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_114);
        switch (TypeRepnFor_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String NlI_22;
              MR_String Var_187;

              NlI_22 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_7);
              mercury__io__write_string_3_p_0(NlI_22);
              mercury__io__write_string_3_p_0((MR_String) "direct_arg(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, PtagUint_115, &Var_187);
              mercury__io__write_string_3_p_0(Var_187);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_174;

              mercury__io__write_string_3_p_0((MR_String) "direct_arg(");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, PtagUint_115, &Var_174);
              mercury__io__write_string_3_p_0(Var_174);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_56_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer Var_20,
  MR_Word X_7,
  MR_Word Xs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_5_p_0(Var_19, Var_20, X_7);
    if (!((Xs_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));
      MR_Word next_value_of_X_7;
      MR_Word next_value_of_Xs_8;

      mercury__io__write_string_3_p_0((MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_7 = HeadX_10;
      next_value_of_Xs_8 = TailXs_11;
      X_7 = next_value_of_X_7;
      Xs_8 = next_value_of_Xs_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_local_arg_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word LocalArgRepn_8)
{
  {
    MR_String NlI_10;

    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        NlI_10 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_7);
        break;
      case (MR_Integer) 0:
        NlI_10 = (MR_String) "";
        break;
    }
    if ((LocalArgRepn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "local_none");
    }
    else
    {
      MR_Unsigned Shift_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), LocalArgRepn_8, (MR_Integer) 0))));
      MR_Word FillKindSize_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgRepn_8, (MR_Integer) 1))));
      MR_String Var_28;
      MR_String Var_34;

      Var_28 = parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(FillKindSize_12);
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "local_partial(");
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, Shift_11, &Var_34);
      mercury__io__write_string_3_p_0(Var_34);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_string_3_p_0(Var_28);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_50_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_38,
  MR_Integer Var_39,
  MR_Integer Indent_6,
  MR_Word Xs_8)
{
  {
    MR_String NlI_10;

    NlI_10 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_6);
    if ((Xs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[]");
    }
    else
    {
      MR_Word HeadX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));

      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[");
      parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_57_95_95_91_51_93_95_48_5_p_0(Var_38, Var_39, HeadX_11, TailXs_12);
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_57_95_95_91_51_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer Var_20,
  MR_Word X_7,
  MR_Word Xs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_5_p_0(Var_19, Var_20, X_7);
    if (!((Xs_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));
      MR_Word next_value_of_X_7;
      MR_Word next_value_of_Xs_8;

      mercury__io__write_string_3_p_0((MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_7 = HeadX_10;
      next_value_of_Xs_8 = TailXs_11;
      X_7 = next_value_of_X_7;
      Xs_8 = next_value_of_Xs_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_remote_arg_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word RemoteArgRepn_8)
{
  {
    MR_String NlI_10;

    NlI_10 = parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_2_f_0(TypeRepnFor_6, Indent_7);
    switch (MR_tag((MR_Word) RemoteArgRepn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0(NlI_10);
          mercury__io__write_string_3_p_0((MR_String) "none_nowhere");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgOnlyOffset_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgRepn_8, (MR_Integer) 0))));
          MR_Word CellOffset_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgRepn_8, (MR_Integer) 1))));
          MR_Integer ArgOnlyOffsetInt_13 = (MR_Integer) (ArgOnlyOffset_11);
          MR_Integer CellOffsetInt_14 = (MR_Integer) (CellOffset_12);
          MR_String Var_212;
          MR_String Var_222;

          mercury__io__write_string_3_p_0(NlI_10);
          mercury__io__write_string_3_p_0((MR_String) "full(");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), ArgOnlyOffsetInt_13, &Var_212);
          mercury__io__write_string_3_p_0(Var_212);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), CellOffsetInt_14, &Var_222);
          mercury__io__write_string_3_p_0(Var_222);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DoubleKind_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RemoteArgRepn_8, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_String DKStr_16;
          MR_Word ArgOnlyOffset_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgRepn_8, (MR_Integer) 0))));
          MR_Word CellOffset_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgRepn_8, (MR_Integer) 1))));
          MR_Integer ArgOnlyOffsetInt_74 = (MR_Integer) (ArgOnlyOffset_72);
          MR_Integer CellOffsetInt_75 = (MR_Integer) (CellOffset_73);
          MR_String Var_234;
          MR_String Var_244;

          parse_tree__prog_data__double_word_kind_string_2_p_0(DoubleKind_15, &DKStr_16);
          mercury__io__write_string_3_p_0(NlI_10);
          mercury__io__write_string_3_p_0((MR_String) "double(");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), ArgOnlyOffsetInt_74, &Var_234);
          mercury__io__write_string_3_p_0(Var_234);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), CellOffsetInt_75, &Var_244);
          mercury__io__write_string_3_p_0(Var_244);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__io__write_string_3_p_0(DKStr_16);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned Shift_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 3))));
              MR_Word FillKindSize_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 4))));
              MR_String Var_50;
              MR_Word ArgOnlyOffset_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 1))));
              MR_Word CellOffset_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 2))));
              MR_Integer ArgOnlyOffsetInt_78 = (MR_Integer) (ArgOnlyOffset_76);
              MR_Integer CellOffsetInt_79 = (MR_Integer) (CellOffset_77);
              MR_String Var_152;
              MR_String Var_162;
              MR_String Var_172;

              Var_50 = parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(FillKindSize_18);
              mercury__io__write_string_3_p_0(NlI_10);
              mercury__io__write_string_3_p_0((MR_String) "partial_");
              mercury__io__write_string_3_p_0((MR_String) "first");
              mercury__io__write_string_3_p_0((MR_String) "(");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), ArgOnlyOffsetInt_78, &Var_152);
              mercury__io__write_string_3_p_0(Var_152);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), CellOffsetInt_79, &Var_162);
              mercury__io__write_string_3_p_0(Var_162);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, Shift_17, &Var_172);
              mercury__io__write_string_3_p_0(Var_172);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__io__write_string_3_p_0(Var_50);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned Shift_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 3))));
              MR_Word FillKindSize_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 4))));
              MR_String Var_100;
              MR_Word ArgOnlyOffset_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 1))));
              MR_Word CellOffset_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 2))));
              MR_Integer ArgOnlyOffsetInt_104 = (MR_Integer) (ArgOnlyOffset_102);
              MR_Integer CellOffsetInt_105 = (MR_Integer) (CellOffset_103);
              MR_String Var_113;
              MR_String Var_123;
              MR_String Var_133;

              Var_100 = parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(FillKindSize_85);
              mercury__io__write_string_3_p_0(NlI_10);
              mercury__io__write_string_3_p_0((MR_String) "partial_");
              mercury__io__write_string_3_p_0((MR_String) "shifted");
              mercury__io__write_string_3_p_0((MR_String) "(");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), ArgOnlyOffsetInt_104, &Var_113);
              mercury__io__write_string_3_p_0(Var_113);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), CellOffsetInt_105, &Var_123);
              mercury__io__write_string_3_p_0(Var_123);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, Shift_84, &Var_133);
              mercury__io__write_string_3_p_0(Var_133);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__io__write_string_3_p_0(Var_100);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgOnlyOffset_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 1))));
              MR_Word CellOffset_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RemoteArgRepn_8, (MR_Integer) 2))));
              MR_Integer ArgOnlyOffsetInt_82 = (MR_Integer) (ArgOnlyOffset_80);
              MR_Integer CellOffsetInt_83 = (MR_Integer) (CellOffset_81);
              MR_String Var_188;
              MR_String Var_198;

              mercury__io__write_string_3_p_0(NlI_10);
              mercury__io__write_string_3_p_0((MR_String) "none_shifted(");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), ArgOnlyOffsetInt_82, &Var_188);
              mercury__io__write_string_3_p_0(Var_188);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), CellOffsetInt_83, &Var_198);
              mercury__io__write_string_3_p_0(Var_198);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
        break;
    }
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_2_f_0(
  MR_Word TypeRepnFor_4,
  MR_Integer Indent_5)
{
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
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_remote_sectag_3_p_0(
  MR_Word CellLocalSectag_4)
{
  if ((CellLocalSectag_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "remote_no_sectag");
  else
  {
    MR_Unsigned Sectag_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CellLocalSectag_4, (MR_Integer) 0))));
    MR_Word SectagWordOrSize_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CellLocalSectag_4, (MR_Integer) 1))));
    MR_String Var_24;

    mercury__io__write_string_3_p_0((MR_String) "remote_sectag(");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, Sectag_6, &Var_24);
    mercury__io__write_string_3_p_0(Var_24);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((SectagWordOrSize_7 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "rest");
    else
    {
      MR_Unsigned NumBits_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SectagWordOrSize_7, (MR_Integer) 0))));
      MR_String Var_49;

      mercury__io__write_string_3_p_0((MR_String) "part(");
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, NumBits_38, &Var_49);
      mercury__io__write_string_3_p_0(Var_49);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_cell_local_sectag_3_p_0(
  MR_Word CellLocalSectag_4)
{
  if ((CellLocalSectag_4 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "local_no_sectag");
  else
  {
    MR_Unsigned Sectag_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CellLocalSectag_4, (MR_Integer) 0))));
    MR_Unsigned SectagNumBits_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CellLocalSectag_4, (MR_Integer) 1))));
    MR_String Var_22;
    MR_String Var_33;

    mercury__io__write_string_3_p_0((MR_String) "local_sectag(");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, Sectag_6, &Var_22);
    mercury__io__write_string_3_p_0(Var_22);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, SectagNumBits_7, &Var_33);
    mercury__io__write_string_3_p_0(Var_33);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word ConstantRepn_8)
{
  {
    MR_String NlI_10;
    MR_Unsigned Sectag_11;
    MR_Word SectagWordOrSize_12;
    MR_String Var_29;

    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        NlI_10 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_7);
        break;
      case (MR_Integer) 0:
        NlI_10 = (MR_String) " ";
        break;
    }
    Sectag_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ConstantRepn_8, (MR_Integer) 0))));
    SectagWordOrSize_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstantRepn_8, (MR_Integer) 1))));
    mercury__io__write_string_3_p_0(NlI_10);
    mercury__io__write_string_3_p_0((MR_String) "constant(");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, Sectag_11, &Var_29);
    mercury__io__write_string_3_p_0(Var_29);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((SectagWordOrSize_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "rest");
    else
    {
      MR_Unsigned NumBits_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SectagWordOrSize_12, (MR_Integer) 0))));
      MR_String Var_56;

      mercury__io__write_string_3_p_0((MR_String) "part(");
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, NumBits_45, &Var_56);
      mercury__io__write_string_3_p_0(Var_56);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_assertion_3_p_0(
  MR_Word Assertion_4)
{
  switch (Assertion_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) "can_pass_as_mercury_type");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) "stable");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_3_p_0((MR_String) "word_aligned_pointer");
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__fill_kind_size_to_string_1_f_0(
  MR_Word FillKindSize_3)
{
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
          MR_Unsigned NumBits_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FillKindSize_3, (MR_Integer) 0))));
          MR_String Var_11;
          MR_String Var_19;

          mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_7[0]), (MR_Integer) 1, NumBits_5, &Var_11);
          Var_19 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) ")");
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_19);
        }
        break;
    }
    return Str_4;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_29;

    conv0_LambdaHeadVar__2_29 = parse_tree__parse_tree_out_type_repn__IntroducedFrom__func__mercury_output_item_type_repn__77__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_29));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0(
  MR_Word Info_5,
  MR_Word ItemTypeRepn_6)
{
  {
    MR_Word TypeCtorSymName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 0))));
    MR_Word TypeParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 1))));
    MR_Word RepnInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 2))));
    MR_Word TVarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 3))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepn_6, (MR_Integer) 4))));
    MR_Word TypeCtorSymName_14;
    MR_Word Args_15;
    MR_Word TypeTerm_17;
    MR_Word Var_27;

    mercury__io__write_string_3_p_0((MR_String) ":- type_representation(");
    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, TypeCtorSymName0_8, &TypeCtorSymName_14);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_item_type_repn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Context_12));
    }
    Args_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_1[1]), Var_27, TypeParams_9);
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeCtorSymName_14, Args_15, Context_12, &TypeTerm_17);
    parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_11, (MR_Integer) 2, (MR_Integer) 0, TypeTerm_17);
    mercury__io__write_string_3_p_0((MR_String) ",");
    switch (MR_tag((MR_Word) RepnInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) " is_word_aligned_ptr");
        break;
      case (MR_Integer) 1:
        {
          MR_Word EqvType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnInfo_10, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) " is_eqv_to(");
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_11, (MR_Integer) 2, EqvType_18);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuRepn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RepnInfo_10, (MR_Integer) 0))));
          MR_Word TypeRepnFor_20;

          TypeRepnFor_20 = parse_tree__parse_tree_out_info__get_type_repn_for_1_f_0(Info_5);
          switch (TypeRepnFor_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String I_21;

                I_21 = parse_tree__parse_tree_out_type_repn__indent_1_f_0((MR_Integer) 1);
                mercury__io__write_string_3_p_0((MR_String) "\n");
                mercury__io__write_string_3_p_0(I_21);
                mercury__io__write_string_3_p_0((MR_String) "du_repn(");
                parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_6_p_0(TypeRepnFor_20, (MR_Integer) 2, TVarSet_11, DuRepn_19);
                mercury__io__write_string_3_p_0((MR_String) "\n");
                mercury__io__write_string_3_p_0(I_21);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) " du_repn(");
                parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_6_p_0(TypeRepnFor_20, (MR_Integer) 2, TVarSet_11, DuRepn_19);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word MaybeCJCsERepn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RepnInfo_10, (MR_Integer) 0))));
          MR_Word TypeRepnFor_86;

          TypeRepnFor_86 = parse_tree__parse_tree_out_info__get_type_repn_for_1_f_0(Info_5);
          switch (TypeRepnFor_86) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String I_84;

                I_84 = parse_tree__parse_tree_out_type_repn__indent_1_f_0((MR_Integer) 1);
                mercury__io__write_string_3_p_0((MR_String) "\n");
                mercury__io__write_string_3_p_0(I_84);
                mercury__io__write_string_3_p_0((MR_String) "foreign_type_repn(\n");
                parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_86, (MR_Integer) 2, MaybeCJCsERepn_22);
                mercury__io__write_string_3_p_0((MR_String) "\n");
                mercury__io__write_string_3_p_0(I_84);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) " foreign_type_repn(");
                parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_86, (MR_Integer) 2, MaybeCJCsERepn_22);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_type_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word DuRepn_10)
{
  switch (MR_tag((MR_Word) DuRepn_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DummyRepn_12 = (MR_Word) ((MR_Word) (DuRepn_10));
        MR_String FunctorName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), DummyRepn_12, (MR_Integer) 0))));
        MR_Word MaybeCJCsERepnOrEnum_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DummyRepn_12, (MR_Integer) 1))));

        switch (TypeRepnFor_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String I_32;
              MR_Integer Var_41;

              I_32 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(I_32);
              mercury__io__write_string_3_p_0((MR_String) "direct_dummy(");
              mercury__term_io__quote_string_3_p_0(FunctorName_30);
              mercury__io__write_string_3_p_0((MR_String) ",\n");
              Var_41 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_or_enum_5_p_0(TypeRepnFor_7, Var_41, MaybeCJCsERepnOrEnum_31);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(I_32);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Var_54;

              mercury__io__write_string_3_p_0((MR_String) "direct_dummy(");
              mercury__term_io__quote_string_3_p_0(FunctorName_30);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              Var_54 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
              parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_or_enum_5_p_0(TypeRepnFor_7, Var_54, MaybeCJCsERepnOrEnum_31);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word EnumRepn_13 = (MR_Word) (MR_body((MR_Word) (DuRepn_10), (MR_Integer) 1));

        parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_5_p_0(TypeRepnFor_7, Indent_8, EnumRepn_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NotagRepn_14 = (MR_Word) (MR_body((MR_Word) (DuRepn_10), (MR_Integer) 2));

        parse_tree__parse_tree_out_type_repn__mercury_output_du_notag_6_p_0(TypeRepnFor_7, Indent_8, TVarSet_9, NotagRepn_14);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DuRepn_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OnlyFunctorRepn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DuRepn_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0(TypeRepnFor_7, Indent_8, TVarSet_9, OnlyFunctorRepn_15);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MoreFunctorsRepn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DuRepn_10, (MR_Integer) 1))));

            parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_6_p_0(TypeRepnFor_7, Indent_8, TVarSet_9, MoreFunctorsRepn_16);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word MoreFunctorsRepn_10)
{
  {
    MR_Word Functor1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctorsRepn_10, (MR_Integer) 0))));
    MR_Word Functor2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctorsRepn_10, (MR_Integer) 1))));
    MR_Word OtherFunctors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctorsRepn_10, (MR_Integer) 2))));
    MR_Word MaybeCJCsERepn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MoreFunctorsRepn_10, (MR_Integer) 3))));

    switch (TypeRepnFor_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Indent1_18 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          MR_String I_19;
          MR_Integer Var_38;

          I_19 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_19);
          mercury__io__write_string_3_p_0((MR_String) "gen_du_more_functors(");
          parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(TypeRepnFor_7, Indent1_18, TVarSet_9, Functor1_12);
          mercury__io__write_string_3_p_0((MR_String) ",");
          parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(TypeRepnFor_7, Indent1_18, TVarSet_9, Functor2_13);
          mercury__io__write_string_3_p_0((MR_String) ",");
          Var_38 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_53_95_95_91_53_93_95_48_5_p_0(TypeRepnFor_7, Var_38, TVarSet_9, Indent1_18, OtherFunctors_14);
          mercury__io__write_string_3_p_0((MR_String) ",\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_7, Indent1_18, MaybeCJCsERepn_15);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_19);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "gen_du_more_functors(");
          parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(TypeRepnFor_7, (MR_Integer) 0, TVarSet_9, Functor1_12);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(TypeRepnFor_7, (MR_Integer) 0, TVarSet_9, Functor2_13);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          if ((OtherFunctors_14 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__io__write_string_3_p_0((MR_String) "[]");
          else
          {
            MR_Word Var_63;

            mercury__io__write_string_3_p_0((MR_String) "[");
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_more_functors_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (TypeRepnFor_7));
              MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_63, 5) = ((MR_Box) (TVarSet_9));
            }
            mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_du_functor_repn_0), OtherFunctors_14, (MR_String) ", ", Var_63);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_7, (MR_Integer) 0, MaybeCJCsERepn_15);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_53_95_95_91_53_93_95_48_5_p_0(
  MR_Word Var_38,
  MR_Integer Var_39,
  MR_Word Var_40,
  MR_Integer Indent_6,
  MR_Word Xs_8)
{
  {
    MR_String NlI_10;

    NlI_10 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_6);
    if ((Xs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[]");
    }
    else
    {
      MR_Word HeadX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));

      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[");
      parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_54_95_95_91_52_93_95_48_5_p_0(Var_38, Var_39, Var_40, HeadX_11, TailXs_12);
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_54_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_19,
  MR_Integer Var_20,
  MR_Word Var_21,
  MR_Word X_7,
  MR_Word Xs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(Var_19, Var_20, Var_21, X_7);
    if (!((Xs_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));
      MR_Word next_value_of_X_7;
      MR_Word next_value_of_Xs_8;

      mercury__io__write_string_3_p_0((MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_7 = HeadX_10;
      next_value_of_Xs_8 = TailXs_11;
      X_7 = next_value_of_X_7;
      Xs_8 = next_value_of_Xs_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_constant_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word FunctorRepn_10)
{
  switch (TypeRepnFor_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if (((MR_tag((MR_Word) FunctorRepn_10)) == (MR_Integer) 0))
      {
        MR_String FunctorName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), FunctorRepn_10, (MR_Integer) 0))));
        MR_Word ConstantRepns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_10, (MR_Integer) 1))));
        MR_String I_14;
        MR_Integer Indent1_15;
        MR_Word Var_73;
        MR_Integer Var_75;

        I_14 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mercury__io__write_string_3_p_0(I_14);
        mercury__io__write_string_3_p_0((MR_String) "constant_functor(");
        parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(FunctorName_12);
        mercury__io__write_string_3_p_0((MR_String) ",");
        Indent1_15 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
        Var_75 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (TypeRepnFor_7));
          MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Var_75));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(TypeRepnFor_7, Indent1_15, Var_73, ConstantRepns_13);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mercury__io__write_string_3_p_0(I_14);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      else
      {
        MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorRepn_10, (MR_Integer) 1))));
        MR_Word NonConstantRepns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorRepn_10, (MR_Integer) 2))));
        MR_Integer Indent2_18;
        MR_String NlI2_19;
        MR_Word Var_39;
        MR_String I_93;
        MR_Integer Indent1_94;
        MR_String FunctorName_97 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctorRepn_10, (MR_Integer) 0))));

        I_93 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mercury__io__write_string_3_p_0(I_93);
        mercury__io__write_string_3_p_0((MR_String) "nonconstant_functor(");
        parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(FunctorName_97);
        mercury__io__write_string_3_p_0((MR_String) ",");
        Indent1_94 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
        Indent2_18 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
        NlI2_19 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent2_18);
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_52_95_95_91_53_93_95_48_5_p_0(NlI2_19, (MR_String) "", TVarSet_9, Indent1_94, ArgTypes_16);
        mercury__io__write_string_3_p_0((MR_String) ",");
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (TypeRepnFor_7));
          MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Indent2_18));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(TypeRepnFor_7, Indent1_94, Var_39, NonConstantRepns_17);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        mercury__io__write_string_3_p_0(I_93);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 0:
      if (((MR_tag((MR_Word) FunctorRepn_10)) == (MR_Integer) 0))
      {
        MR_Word Var_88;
        MR_String FunctorName_124 = ((MR_String) ((MR_hl_field(MR_mktag(0), FunctorRepn_10, (MR_Integer) 0))));
        MR_Word ConstantRepns_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_10, (MR_Integer) 1))));

        mercury__io__write_string_3_p_0((MR_String) "constant_functor(");
        parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(FunctorName_124);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_3));
          MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (TypeRepnFor_7));
          MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(TypeRepnFor_7, (MR_Integer) 0, Var_88, ConstantRepns_125);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      else
      {
        MR_Word Var_52;
        MR_Word Var_58;
        MR_Word ArgTypes_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorRepn_10, (MR_Integer) 1))));
        MR_Word NonConstantRepns_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctorRepn_10, (MR_Integer) 2))));
        MR_String FunctorName_128 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctorRepn_10, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "nonconstant_functor(");
        parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(FunctorName_128);
        mercury__io__write_string_3_p_0((MR_String) ", [");
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_4));
          MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (TVarSet_9));
          MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_126, (MR_String) ", ", Var_52);
        mercury__io__write_string_3_p_0((MR_String) "], ");
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_gen_du_functor_repn_6_p_0_5));
          MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (TypeRepnFor_7));
          MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(TypeRepnFor_7, (MR_Integer) 0, Var_58, NonConstantRepns_127);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_nonconstant_repn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word OnlyFunctorRepn_10)
{
  {
    MR_String FunctorName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), OnlyFunctorRepn_10, (MR_Integer) 0))));
    MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OnlyFunctorRepn_10, (MR_Integer) 1))));
    MR_Word CRepns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OnlyFunctorRepn_10, (MR_Integer) 2))));
    MR_Word MaybeCJCsERepn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OnlyFunctorRepn_10, (MR_Integer) 3))));

    switch (TypeRepnFor_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Indent1_16 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          MR_Integer Indent2_17 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 2);
          MR_String I_18;
          MR_String I1_19;
          MR_String NlI2_20;
          MR_Word Var_42;

          I_18 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
          I1_19 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent1_16);
          NlI2_20 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent2_17);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_18);
          mercury__io__write_string_3_p_0((MR_String) "gen_du_only_functor(\n");
          mercury__io__write_string_3_p_0(I1_19);
          parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(FunctorName_12);
          mercury__io__write_string_3_p_0((MR_String) ",");
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_52_95_95_91_53_93_95_48_5_p_0(NlI2_20, (MR_String) "", TVarSet_9, Indent1_16, ArgTypes_13);
          mercury__io__write_string_3_p_0((MR_String) ",");
          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (TypeRepnFor_7));
            MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Indent2_17));
          }
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(TypeRepnFor_7, Indent1_16, Var_42, CRepns_14);
          mercury__io__write_string_3_p_0((MR_String) ",\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_7, Indent1_16, MaybeCJCsERepn_15);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_18);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_59;
          MR_Word Var_65;

          mercury__io__write_string_3_p_0((MR_String) "gen_du_only_functor(");
          parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(FunctorName_12);
          mercury__io__write_string_3_p_0((MR_String) ", [");
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (TVarSet_9));
            MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) ((MR_Integer) 2));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_13, (MR_String) ", ", Var_59);
          mercury__io__write_string_3_p_0((MR_String) "], ");
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__parse_tree_out_type_repn_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__parse_tree_out_type_repn__mercury_output_du_only_functor_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (TypeRepnFor_7));
            MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(TypeRepnFor_7, (MR_Integer) 0, Var_65, CRepns_14);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_7, (MR_Integer) 0, MaybeCJCsERepn_15);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_52_95_95_91_53_93_95_48_5_p_0(
  MR_String Var_38,
  MR_String Var_39,
  MR_Word Var_40,
  MR_Integer Indent_6,
  MR_Word Xs_8)
{
  {
    MR_String NlI_10;

    NlI_10 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_6);
    if ((Xs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[]");
    }
    else
    {
      MR_Word HeadX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));

      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[");
      parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_55_95_95_91_52_93_95_48_5_p_0(Var_38, Var_39, Var_40, HeadX_11, TailXs_12);
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_55_95_95_91_52_93_95_48_5_p_0(
  MR_String Var_19,
  MR_String Var_20,
  MR_Word Var_21,
  MR_Word X_7,
  MR_Word Xs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_3_p_0(Var_19);
    parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(Var_21, (MR_Integer) 2, X_7);
    mercury__io__write_string_3_p_0(Var_20);
    if (!((Xs_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));
      MR_Word next_value_of_X_7;
      MR_Word next_value_of_Xs_8;

      mercury__io__write_string_3_p_0((MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_7 = HeadX_10;
      next_value_of_Xs_8 = TailXs_11;
      X_7 = next_value_of_X_7;
      Xs_8 = next_value_of_Xs_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_99_95_114_101_112_110_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word WriteX_9,
  MR_Word CRepns_10)
{
  {
    MR_String NlI_12;

    NlI_12 = parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_space_for_machines_2_f_0(TypeRepnFor_7, Indent_8);
    switch (MR_tag((MR_Word) CRepns_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X1_13 = (MR_hl_field(MR_mktag(0), CRepns_10, (MR_Integer) 0));
          void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv17_STATE_VARIABLE_IO_72_72;

          mercury__io__write_string_3_p_0(NlI_12);
          mercury__io__write_string_3_p_0((MR_String) "c_repns_same(");
          func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_16(((MR_Box) (WriteX_9)), X1_13, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_72_72);
          mercury__io__write_string_3_p_0(NlI_12);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box X2_14 = (MR_hl_field(MR_mktag(1), CRepns_10, (MR_Integer) 1));
          MR_Box X1_78 = (MR_hl_field(MR_mktag(1), CRepns_10, (MR_Integer) 0));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv1_STATE_VARIABLE_IO_57_57;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_IO_61_61;

          mercury__io__write_string_3_p_0(NlI_12);
          mercury__io__write_string_3_p_0((MR_String) "c_repns_64_32(");
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_0(((MR_Box) (WriteX_9)), X1_78, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_57_57);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_2(((MR_Box) (WriteX_9)), X2_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_61_61);
          mercury__io__write_string_3_p_0(NlI_12);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box X3_15 = (MR_hl_field(MR_mktag(2), CRepns_10, (MR_Integer) 2));
          MR_Box X4_16 = (MR_hl_field(MR_mktag(2), CRepns_10, (MR_Integer) 3));
          MR_Box X5_17 = (MR_hl_field(MR_mktag(2), CRepns_10, (MR_Integer) 4));
          MR_Box X6_18 = (MR_hl_field(MR_mktag(2), CRepns_10, (MR_Integer) 5));
          MR_Box X1_79 = (MR_hl_field(MR_mktag(2), CRepns_10, (MR_Integer) 0));
          MR_Box X2_80 = (MR_hl_field(MR_mktag(2), CRepns_10, (MR_Integer) 1));
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_IO_26_26;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_IO_30_30;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv9_STATE_VARIABLE_IO_34_34;
          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv11_STATE_VARIABLE_IO_38_38;
          void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv13_STATE_VARIABLE_IO_42_42;
          void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv15_STATE_VARIABLE_IO_46_46;

          mercury__io__write_string_3_p_0(NlI_12);
          mercury__io__write_string_3_p_0((MR_String) "c_repns_all(");
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_4(((MR_Box) (WriteX_9)), X1_79, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_26_26);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_6(((MR_Box) (WriteX_9)), X2_80, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_30_30);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_8(((MR_Box) (WriteX_9)), X3_15, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_34_34);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_10(((MR_Box) (WriteX_9)), X4_16, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_38_38);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_12(((MR_Box) (WriteX_9)), X5_17, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_42_42);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), WriteX_9, (MR_Integer) 1))));
          func_14(((MR_Box) (WriteX_9)), X6_18, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_46_46);
          mercury__io__write_string_3_p_0(NlI_12);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
    }
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_for_humans_space_for_machines_2_f_0(
  MR_Word TypeRepnFor_4,
  MR_Integer Indent_5)
{
  {
    MR_String Str_6;

    switch (TypeRepnFor_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Str_6 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_5);
        break;
      case (MR_Integer) 0:
        Str_6 = (MR_String) " ";
        break;
    }
    return Str_6;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_notag_6_p_0(
  MR_Word TypeRepnFor_7,
  MR_Integer Indent_8,
  MR_Word TVarSet_9,
  MR_Word NotagRepn_10)
{
  {
    MR_String FunctorName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), NotagRepn_10, (MR_Integer) 0))));
    MR_Word ArgType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotagRepn_10, (MR_Integer) 1))));
    MR_Word MaybeCJCsERepn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotagRepn_10, (MR_Integer) 2))));

    switch (TypeRepnFor_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String I_15;
          MR_String I1_16;
          MR_Integer Var_19;
          MR_Integer Var_39;

          I_15 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_8);
          Var_19 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          I1_16 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_19);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_15);
          mercury__io__write_string_3_p_0((MR_String) "notag(\n");
          mercury__io__write_string_3_p_0(I1_16);
          mercury__term_io__quote_string_3_p_0(FunctorName_12);
          mercury__io__write_string_3_p_0((MR_String) ",\n");
          mercury__io__write_string_3_p_0(I1_16);
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_9, (MR_Integer) 2, ArgType_13);
          mercury__io__write_string_3_p_0((MR_String) ",\n");
          Var_39 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_7, Var_39, MaybeCJCsERepn_14);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_15);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "notag(");
          mercury__term_io__quote_string_3_p_0(FunctorName_12);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_9, (MR_Integer) 2, ArgType_13);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(TypeRepnFor_7, (MR_Integer) 0, MaybeCJCsERepn_14);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeCJCsERepn_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeRepnC_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_8, (MR_Integer) 0))));
    MR_Word MaybeRepnJava_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_8, (MR_Integer) 1))));
    MR_Word MaybeRepnCsharp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_8, (MR_Integer) 2))));
    MR_Word MaybeRepnErlang_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_8, (MR_Integer) 3))));

    succeeded = (MaybeRepnC_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeRepnJava_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeRepnCsharp_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeRepnErlang_13 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      switch (TypeRepnFor_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String I_14;

            I_14 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
            mercury__io__write_string_3_p_0(I_14);
            mercury__io__write_string_3_p_0((MR_String) "no_c_j_cs_e");
          }
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) " no_c_j_cs_e");
          break;
      }
    else
    {
      MR_Integer Indent1_15 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);

      switch (TypeRepnFor_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String I_60;

            I_60 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
            mercury__io__write_string_3_p_0(I_60);
            mercury__io__write_string_3_p_0((MR_String) "c_j_cs_e(\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnC_10);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnJava_11);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnCsharp_12);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnErlang_13);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0(I_60);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) " c_j_cs_e(");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnC_10);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnJava_11);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnCsharp_12);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(TypeRepnFor_6, Indent1_15, MaybeRepnErlang_13);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_foreign_type_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeTypeRepn_8)
{
  if ((MaybeTypeRepn_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String I_10;

    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        I_10 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
        break;
      case (MR_Integer) 0:
        I_10 = (MR_String) "";
        break;
    }
    mercury__io__write_string_3_p_0(I_10);
    mercury__io__write_string_3_p_0((MR_String) "no_foreign");
  }
  else
  {
    MR_Word TypeRepn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeRepn_8, (MR_Integer) 0))));
    MR_String ForeignTypeName_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeRepn_11, (MR_Integer) 0))));
    MR_Word ForeignTypeAssertions_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepn_11, (MR_Integer) 1))));
    MR_String I_33;
    MR_Word Assertions_34;
    MR_Word AssertionsList_35;

    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        I_33 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
        break;
      case (MR_Integer) 0:
        I_33 = (MR_String) "";
        break;
    }
    Assertions_34 = (MR_Word) (ForeignTypeAssertions_32);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_34, &AssertionsList_35);
    mercury__io__write_string_3_p_0(I_33);
    mercury__io__write_string_3_p_0((MR_String) "foreign_type(\"");
    mercury__io__write_string_3_p_0(ForeignTypeName_31);
    mercury__io__write_string_3_p_0((MR_String) "\",");
    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String I1_36;
          MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);

          I1_36 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_44);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I1_36);
          mercury__io__write_string_3_p_0((MR_String) "[");
          mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_35, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[4]));
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) " [");
          mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_35, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[5]));
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0(I_33);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_du_enum_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word EnumRepn_8)
{
  {
    MR_String Functor1_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), EnumRepn_8, (MR_Integer) 0))));
    MR_String Functor2_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), EnumRepn_8, (MR_Integer) 1))));
    MR_Word OtherFunctors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn_8, (MR_Integer) 2))));
    MR_Word MaybeCJCsERepnOrEnum_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn_8, (MR_Integer) 3))));

    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Indent1_16 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
          MR_String I_17;
          MR_String NlI1_18;
          MR_String Var_37;
          MR_Integer Var_38;

          I_17 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
          NlI1_18 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent1_16);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_17);
          mercury__io__write_string_3_p_0((MR_String) "enum(");
          parse_tree__parse_tree_out_type_repn__mercury_output_one_functor_name_5_p_0(NlI1_18, (MR_String) "", Functor1_10);
          mercury__io__write_string_3_p_0((MR_String) ",");
          parse_tree__parse_tree_out_type_repn__mercury_output_one_functor_name_5_p_0(NlI1_18, (MR_String) "", Functor2_11);
          mercury__io__write_string_3_p_0((MR_String) ",");
          Var_38 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
          Var_37 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_38);
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_49_95_95_91_52_93_95_48_5_p_0(Var_37, (MR_String) "", Indent1_16, OtherFunctors_12);
          mercury__io__write_string_3_p_0((MR_String) ",\n");
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_or_enum_5_p_0(TypeRepnFor_6, Indent1_16, MaybeCJCsERepnOrEnum_13);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_17);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "enum(");
          mercury__term_io__quote_string_3_p_0(Functor1_10);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(Functor2_11);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          if ((OtherFunctors_12 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__io__write_string_3_p_0((MR_String) "[]");
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherFunctors_12, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[3]));
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          mercury__io__write_string_3_p_0((MR_String) ", ");
          parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_or_enum_5_p_0(TypeRepnFor_6, (MR_Integer) 0, MaybeCJCsERepnOrEnum_13);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_95_104_111_49_95_95_91_52_93_95_48_5_p_0(
  MR_String Var_38,
  MR_String Var_39,
  MR_Integer Indent_6,
  MR_Word Xs_8)
{
  {
    MR_String NlI_10;

    NlI_10 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Indent_6);
    if ((Xs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[]");
    }
    else
    {
      MR_String HeadX_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));

      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "[");
      parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_5_p_0(Var_38, Var_39, HeadX_11, TailXs_12);
      mercury__io__write_string_3_p_0(NlI_10);
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_one_functor_name_5_p_0(
  MR_String Prefix_6,
  MR_String Suffix_7,
  MR_String FunctorName_8)
{
  {
    mercury__io__write_string_3_p_0(Prefix_6);
    mercury__term_io__quote_string_3_p_0(FunctorName_8);
    mercury__io__write_string_3_p_0(Suffix_7);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(
  MR_String FunctorName_4)
{
  mercury__term_io__quote_string_3_p_0(FunctorName_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_c_j_cs_e_repn_or_enum_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeCJCsERepnOrEnum_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeRepnOrEnumC_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_8, (MR_Integer) 0))));
    MR_Word MaybeRepnOrEnumJava_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_8, (MR_Integer) 1))));
    MR_Word MaybeRepnOrEnumCsharp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_8, (MR_Integer) 2))));
    MR_Word MaybeRepnOrEnumErlang_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepnOrEnum_8, (MR_Integer) 3))));
    MR_Integer Indent1_14 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    MR_String I_15;

    I_15 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
    succeeded = (MaybeRepnOrEnumC_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeRepnOrEnumJava_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeRepnOrEnumCsharp_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (MaybeRepnOrEnumErlang_13 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      switch (TypeRepnFor_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0(I_15);
            mercury__io__write_string_3_p_0((MR_String) "no_c_j_cs_e");
          }
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) " no_c_j_cs_e");
          break;
      }
    else
      switch (TypeRepnFor_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0(I_15);
            mercury__io__write_string_3_p_0((MR_String) "c_j_cs_e(\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumC_10);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumJava_11);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumCsharp_12);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumErlang_13);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0(I_15);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) " c_j_cs_e(");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumC_10);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumJava_11);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumCsharp_12);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(TypeRepnFor_6, Indent1_14, MaybeRepnOrEnumErlang_13);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_foreign_type_assertion_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_maybe_enum_foreign_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word MaybeTypeRepnOrEnum_8)
{
  if ((MaybeTypeRepnOrEnum_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String I_10;

    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        I_10 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
        break;
      case (MR_Integer) 0:
        I_10 = (MR_String) "";
        break;
    }
    mercury__io__write_string_3_p_0(I_10);
    mercury__io__write_string_3_p_0((MR_String) "no_foreign");
  }
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeRepnOrEnum_8, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_24)) == (MR_Integer) 1))
    {
      MR_Word EnumRepn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));

      parse_tree__parse_tree_out_type_repn__mercury_output_foreign_enum_repn_5_p_0(TypeRepnFor_6, Indent_7, EnumRepn_11);
    }
    else
    {
      MR_Word TypeRepn_12 = (MR_Word) ((MR_Word) (Var_24));
      MR_String ForeignTypeName_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeRepn_12, (MR_Integer) 0))));
      MR_Word ForeignTypeAssertions_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepn_12, (MR_Integer) 1))));
      MR_String I_38;
      MR_Word Assertions_39;
      MR_Word AssertionsList_40;

      switch (TypeRepnFor_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          I_38 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
          break;
        case (MR_Integer) 0:
          I_38 = (MR_String) "";
          break;
      }
      Assertions_39 = (MR_Word) (ForeignTypeAssertions_37);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), Assertions_39, &AssertionsList_40);
      mercury__io__write_string_3_p_0(I_38);
      mercury__io__write_string_3_p_0((MR_String) "foreign_type(\"");
      mercury__io__write_string_3_p_0(ForeignTypeName_36);
      mercury__io__write_string_3_p_0((MR_String) "\",");
      switch (TypeRepnFor_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String I1_41;
            MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);

            I1_41 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Var_49);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0(I1_41);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_40, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[1]));
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) " [");
            mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), AssertionsList_40, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[2]));
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0(I_38);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_enum_repn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_type_repn__mercury_output_functor_name_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__mercury_output_foreign_enum_repn_5_p_0(
  MR_Word TypeRepnFor_6,
  MR_Integer Indent_7,
  MR_Word EnumRepn_8)
{
  {
    MR_String HeadEnum_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), EnumRepn_8, (MR_Integer) 0))));
    MR_Word TailEnums_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn_8, (MR_Integer) 1))));

    switch (TypeRepnFor_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String I_12;
          MR_Integer Var_20;
          MR_Word Var_22;
          MR_String Var_25;
          MR_Integer Var_26;
          MR_String NlI_66;
          MR_String HeadX_67;
          MR_Word TailXs_68;

          I_12 = parse_tree__parse_tree_out_type_repn__indent_1_f_0(Indent_7);
          mercury__io__write_string_3_p_0(I_12);
          mercury__io__write_string_3_p_0((MR_String) "foreign_enum(");
          Var_20 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
          Var_26 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
          Var_25 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_26);
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (HeadEnum_10));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (TailEnums_11));
          }
          NlI_66 = parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(Var_20);
          HeadX_67 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
          TailXs_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
          mercury__io__write_string_3_p_0(NlI_66);
          mercury__io__write_string_3_p_0((MR_String) "[");
          parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_5_p_0(Var_25, (MR_String) "", HeadX_67, TailXs_68);
          mercury__io__write_string_3_p_0(NlI_66);
          mercury__io__write_string_3_p_0((MR_String) "]");
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(I_12);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_37;

          mercury__io__write_string_3_p_0((MR_String) "foreign_enum([");
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (HeadEnum_10));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (TailEnums_11));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, (MR_String) ", ", (MR_Word) (&parse_tree__parse_tree_out_type_repn_scalar_common_4[0]));
          mercury__io__write_string_3_p_0((MR_String) "])");
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_111_117_116_112_117_116_95_108_105_115_116_95_102_111_114_95_104_117_109_97_110_115_95_108_111_111_112_95_95_104_111_49_48_95_95_91_51_93_95_48_5_p_0(
  MR_String Var_19,
  MR_String Var_20,
  MR_String X_7,
  MR_Word Xs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_3_p_0(Var_19);
    mercury__term_io__quote_string_3_p_0(X_7);
    mercury__io__write_string_3_p_0(Var_20);
    if (!((Xs_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String HeadX_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 0))));
      MR_Word TailXs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_8, (MR_Integer) 1))));
      MR_String next_value_of_X_7;
      MR_Word next_value_of_Xs_8;

      mercury__io__write_string_3_p_0((MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_X_7 = HeadX_10;
      next_value_of_Xs_8 = TailXs_11;
      X_7 = next_value_of_X_7;
      Xs_8 = next_value_of_Xs_8;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__nl_indent_1_f_0(
  MR_Integer N_3)
{
  {
    MR_bool succeeded;
    MR_String Str_4;
    MR_String StrPrime_5;

    if ((((MR_Unsigned) N_3) <= ((MR_Unsigned) 6)))
    {
      StrPrime_5 = ((&parse_tree__parse_tree_out_type_repn_vector_common_2[7 + N_3]))->parse_tree__parse_tree_out_type_repn__vector_common_type_2_0__vct_2_f_0;
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
}

static MR_String MR_CALL 
parse_tree__parse_tree_out_type_repn__indent_1_f_0(
  MR_Integer N_3)
{
  {
    MR_bool succeeded;
    MR_String Str_4;
    MR_String StrPrime_5;

    if ((((MR_Unsigned) N_3) <= ((MR_Unsigned) 6)))
    {
      StrPrime_5 = ((&parse_tree__parse_tree_out_type_repn_vector_common_2[0 + N_3]))->parse_tree__parse_tree_out_type_repn__vector_common_type_2_0__vct_2_f_0;
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
