/*
** Automatically generated from `parse_type_defn.m'
** by the Mercury compiler,
** version rotd-2022-01-03
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


// :- module parse_tree.parse_type_defn.
// :- implementation.

/*
INIT mercury__parse_tree__parse_type_defn__init
ENDINIT
*/

#include "parse_tree.parse_type_defn.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint32.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_class.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_mutable.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0;

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1736__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_50);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__719__1_2_f_0(
  MR_Word GenericVarSet_221,
  MR_Word HeadVar__2_288);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__713__1_2_p_0(
  MR_Word ExistQVars_25,
  MR_Word HeadVar__2_282);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__691__1_2_f_0(
  MR_Word GenericVarSet_216,
  MR_Word HeadVar__2_272);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__684__1_2_p_0(
  MR_Word HeadVar__1_133,
  MR_Word HeadVar__2_266);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__680__1_1_f_0(
  MR_Word LambdaHeadVar__1_130);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__655__1_2_f_0(
  MR_Word GenericVarSet_209,
  MR_Word HeadVar__2_259);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__625__1_2_p_0(
  MR_Word ExistQVarsParams_34,
  MR_Word HeadVar__2_248);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__621__1_1_f_0(
  MR_Word LambdaHeadVar__1_64);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_constructor__428__1_1_f_0(
  MR_Word LambdaHeadVar__1_50);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__386__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__225__1_2_p_0(
  MR_Word SolverTypeDetails_41,
  MR_Word HeadVar__2_105);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1659__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_161);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1643__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_155);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1634__1_2_p_0(
  MR_Word HeadVar__1_149,
  MR_Word * HeadVar__2_150);

static void MR_CALL 
parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeFunctor_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_122,
  MR_Word Var_123,
  MR_String HeadVar__1_32,
  MR_Word HeadVar__3_107);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_122,
  MR_Word Var_123,
  MR_String HeadVar__1_36,
  MR_Word HeadVar__3_113);

static void MR_CALL 
parse_tree__parse_type_defn__parse_abstract_type_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word Context_11,
  MR_Word SeqNum_12,
  MR_Word IsSolverType_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word MaybeSolverTypeDetails_12,
  MR_Word MaybeCanonical_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word BodyTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(
  MR_Word TVarSet_6,
  MR_Word ParamTVars_7,
  MR_Word BodyType_8,
  MR_Word BodyContext_9,
  MR_Word * Specs_10);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word HeadTerm_13,
  MR_Word BodyTerm_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word IsSolverType_17,
  MR_Word * MaybeIOM_18,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

static void MR_CALL 
parse_tree__parse_type_defn__parse_supertype_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word * Result_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_6_p_0(
  MR_Word IsSolverType_7,
  MR_Word ModuleName_8,
  MR_Word SeqNum_9,
  MR_Word VarSet_10,
  MR_Word Term0_11,
  MR_Word * MaybeWhereDetails_12);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_54_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_124,
  MR_String HeadVar__1_37,
  MR_Word HeadVar__3_82);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_48,
  MR_String Name_5,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_57_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_124,
  MR_Word Var_125,
  MR_String HeadVar__1_41,
  MR_Word HeadVar__3_88);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_124,
  MR_Word Var_125,
  MR_String HeadVar__1_45,
  MR_Word HeadVar__3_94);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_String Name_5,
  MR_Word Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_53_95_95_49_95_95_104_111_49_54_95_95_91_53_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_Word Var_125,
  MR_String HeadVar__1_49,
  MR_Word HeadVar__3_99);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_53_93_95_48_3_f_0(
  MR_Word Var_47,
  MR_Word Var_48,
  MR_Word Var_49,
  MR_String Name_5,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0(
  MR_Word ModuleName_6,
  MR_Word SeqNum_7,
  MR_Word VarSet_8,
  MR_Word Term_9);

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_5_p_0(
  MR_Word ModuleName_6,
  MR_Word SeqNum_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeItemMutableInfo_10);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_56_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_String HeadVar__1_53,
  MR_Word HeadVar__3_105);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_49_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_String HeadVar__1_57,
  MR_Word HeadVar__3_111);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_47,
  MR_Word Var_48,
  MR_String Name_5,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_String HeadVar__1_61,
  MR_Word HeadVar__3_116);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_47,
  MR_Word Var_48,
  MR_String Name_5,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
  MR_Word Term_3);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(
  MR_Word IsSolverType_13,
  MR_Word MaybeTypeIsAbstractNoncanonical_14,
  MR_Word MaybeRepresentationIs_15,
  MR_Word MaybeGroundIs_16,
  MR_Word MaybeAnyIs_17,
  MR_Word MaybeCStoreIs_18,
  MR_Word MaybeEqualityIs_19,
  MR_Word MaybeComparisonIs_20,
  MR_Word MaybeDirectArgIs_21,
  MR_Word MaybeWhereEnd_22,
  MR_Word WhereTerm_23);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(
  MR_Word IsSolverType_12,
  MR_Word TypeIsAbstractNoncanonical_13,
  MR_Word RepresentationIs_14,
  MR_Word GroundIs_15,
  MR_Word AnyIs_16,
  MR_Word CStoreIs_17,
  MR_Word EqualityIs_18,
  MR_Word ComparisonIs_19,
  MR_Word DirectArgIs_20,
  MR_Word WhereTerm_21);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word MaybeUniPred_4,
  MR_Word MaybeCmpPred_5);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(
  MR_Word Term_3);

static void MR_CALL 
parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__find_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_7,
  MR_Integer Arity_8,
  MR_Word * NamedCtor_9);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word BodyTerm_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
parse_tree__parse_type_defn__check_supertype_vars_6_p_0(
  MR_Word Params_7,
  MR_Word VarSet_8,
  MR_Word SuperType_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeConstructors_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  uint32_t CurOrdinal_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Word * MaybeConstructors_12);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  uint32_t Ordinal_9,
  MR_Word ExistQVars_10,
  MR_Word Term_11,
  MR_Word * MaybeConstructor_12);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(
  MR_Word ModuleName_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_type_defn__get_existential_constraints_from_term_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word STATE_VARIABLE_PredTypeTerm_0_12,
  MR_Word * STATE_VARIABLE_PredTypeTerm_13,
  MR_Word * MaybeExistentialConstraints_9);

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word Term_4,
  MR_Word * CtorsTerm_5,
  MR_Word * MaybeWhereTerm_6);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_116_111_95_118_97_114_95_108_105_115_116_95_97_110_100_95_110_111_110_118_97_114_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6);


static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[241][2];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[15][1];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[5][5];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_7[1][8];




static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[241][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[11]))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by a type definition."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "keyword"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be the definition of a type."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration: error: unrecognized"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "comparison is <<comparison pred name>>"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "equality is <<equality pred name>>"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attributes have the form"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Recognized"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[50])))
  },
  /* row 53 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_defn_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type parameters must be unique,"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "duplicated."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables,"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a type constructor"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and zero or more type variables as arguments,"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a solver type"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "On the left hand side of type definition:"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "subtype definition:"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the supertype part of a"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the subtype"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "from its supertype."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "equality and comparison predicates"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it must inherit any user-defined"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "user-defined equality or comparison;"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not allowed to have its own"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it must inherit its representation"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[82])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "annotation;"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where direct_arg is"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in first argument of"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "there should be no constraints on them."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "existentially quantified arguments,"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since there are no"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(existentially quantified or otherwise),"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[105])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since there are no arguments,"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in supertype part of subtype definition."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in right hand side of type definition."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "overlapping scopes"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(the explicit existential type quantifier shadows"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the universal quantification implicit in"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")."))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the existentially quantified"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the constructor."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "either in the arguments or in the constraints"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without being explicitly existentially quantified"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a class constraint"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not 1."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol whose arity"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with existentially quantified type variables."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to be equivalent to another type."))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a solver type cannot be defined"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type definitions"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a positive integer."))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a symbol name and arity."))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute for abstract non-solver type."))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "solver type definition:"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[179]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "On the left hand side of"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Solver type with no solver_type_details."))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the ground inst of a solver type"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the any inst of a solver type"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or contain an unrecognised attribute."))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: attributes are either badly ordered"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[192])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a ground, unconstrained inst."))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or a list of mutable declarations, got"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration, got"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: malformed functors list in"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[161])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected functor name/arity for"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for non-solver type."))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type attribute given"))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[205])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[209])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type definitions cannot have"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[210])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[160])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type definitions must have a"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[209])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[217])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[219])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[221])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[223]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[225]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[224])))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[227]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[226])))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[229]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[228])))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the type name must be followed by"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[231]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[230])))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in definitions of equivalence types,"))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[233]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[232])))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type name"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "only in the right hand side of this type definition."))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[238]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a type constructor,"))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[15][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[55])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[0])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 13 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 14 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_constructor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0)
  }
};

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1736__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_50)
{
  {
    MR_String HeadVar__3_51;

    HeadVar__3_51 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_6, HeadVar__2_50);
    return HeadVar__3_51;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__719__1_2_f_0(
  MR_Word GenericVarSet_221,
  MR_Word HeadVar__2_288)
{
  {
    MR_String HeadVar__3_289;

    HeadVar__3_289 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_221, HeadVar__2_288);
    return HeadVar__3_289;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__713__1_2_p_0(
  MR_Word ExistQVars_25,
  MR_Word HeadVar__2_282)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_25, ((MR_Box) (HeadVar__2_282)));
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__691__1_2_f_0(
  MR_Word GenericVarSet_216,
  MR_Word HeadVar__2_272)
{
  {
    MR_String HeadVar__3_273;

    HeadVar__3_273 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_216, HeadVar__2_272);
    return HeadVar__3_273;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__684__1_2_p_0(
  MR_Word HeadVar__1_133,
  MR_Word HeadVar__2_266)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), HeadVar__1_133, ((MR_Box) (HeadVar__2_266)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__680__1_1_f_0(
  MR_Word LambdaHeadVar__1_130)
{
  {
    MR_Word LambdaHeadVar__2_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_130, (MR_Integer) 1))));

    return LambdaHeadVar__2_131;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__655__1_2_f_0(
  MR_Word GenericVarSet_209,
  MR_Word HeadVar__2_259)
{
  {
    MR_String HeadVar__3_260;

    HeadVar__3_260 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_209, HeadVar__2_259);
    return HeadVar__3_260;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__625__1_2_p_0(
  MR_Word ExistQVarsParams_34,
  MR_Word HeadVar__2_248)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVarsParams_34, ((MR_Box) (HeadVar__2_248)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__621__1_1_f_0(
  MR_Word LambdaHeadVar__1_64)
{
  {
    MR_Word LambdaHeadVar__2_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_64, (MR_Integer) 1))));

    return LambdaHeadVar__2_65;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_constructor__428__1_1_f_0(
  MR_Word LambdaHeadVar__1_50)
{
  {
    MR_Word LambdaHeadVar__2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 1))));

    return LambdaHeadVar__2_51;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__386__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_38, HeadVar__2_39);
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__225__1_2_p_0(
  MR_Word SolverTypeDetails_41,
  MR_Word HeadVar__2_105)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[4]), ((MR_Box) (SolverTypeDetails_41)), ((MR_Box) (HeadVar__2_105)));
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1659__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_161)
{
  {
    MR_String HeadVar__3_162;

    HeadVar__3_162 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, HeadVar__2_161);
    return HeadVar__3_162;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1643__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_155)
{
  {
    MR_String HeadVar__3_156;

    HeadVar__3_156 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, HeadVar__2_155);
    return HeadVar__3_156;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1634__1_2_p_0(
  MR_Word HeadVar__1_149,
  MR_Word * HeadVar__2_150)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_149, HeadVar__2_150);
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeFunctor_8)
{
  {
    MR_bool succeeded;
    MR_Word Name_9;
    MR_Integer Arity_10;

    succeeded = parse_tree__parse_util__parse_implicitly_qualified_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_5, Term_7, &Name_9, &Arity_10);
    if (succeeded)
    {
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Name_9));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Arity_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFunctor_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
      }
    }
    else
    {
      MR_String TermStr_11;
      MR_Word Pieces_12;
      MR_Word Spec_13;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_34;
      MR_Word Var_35;

      TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (TermStr_11));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[203])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146])));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[202])));
        MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_17));
      }
      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_direct_arg_functor\'/4"));
        MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFunctor_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_where_unify_compare_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term0_7,
  MR_Word * MaybeMaybeCanonical_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeTypeIsAbstractNoncanonical_10;
    MR_Word MaybeEqualityIs_11;
    MR_Word MaybeComparisonIs_12;
    MR_Word MaybeWhereEnd_13;
    MR_Word STATE_VARIABLE_MaybeTerm_27_27;
    MR_Word STATE_VARIABLE_MaybeTerm_29_29;
    MR_Word STATE_VARIABLE_MaybeTerm_31_31;
    MR_Word STATE_VARIABLE_MaybeTerm_35_35;
    MR_Word TypeIsAbstractNoncanonical_19;
    MR_Word EqualityIs_20;
    MR_Word ComparisonIs_21;

    {
      STATE_VARIABLE_MaybeTerm_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_27_27, 0) = ((MR_Box) (Term0_7));
    }
    parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&MaybeTypeIsAbstractNoncanonical_10, STATE_VARIABLE_MaybeTerm_27_27, &STATE_VARIABLE_MaybeTerm_29_29);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", ModuleName_5, VarSet_6, &MaybeEqualityIs_11, STATE_VARIABLE_MaybeTerm_29_29, &STATE_VARIABLE_MaybeTerm_31_31);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", ModuleName_5, VarSet_6, &MaybeComparisonIs_12, STATE_VARIABLE_MaybeTerm_31_31, &STATE_VARIABLE_MaybeTerm_35_35);
    if ((STATE_VARIABLE_MaybeTerm_35_35 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeWhereEnd_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[0]));
    else
    {
      MR_Word EndTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_35_35, (MR_Integer) 0))));
      MR_String EndTermStr_15;
      MR_Word Pieces_16;
      MR_Word EndSpec_18;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_92;

      EndTermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, EndTerm_14);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (EndTermStr_15));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[41])));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[38])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[36])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[35])));
        MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_40));
      }
      Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), EndTerm_14);
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Pieces_16));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[54])));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_85));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        EndSpec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EndSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_unify_compare\'/4"));
        MR_hl_field(MR_mktag(0), EndSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), EndSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), EndSpec_18, 3) = ((MR_Box) (Var_82));
      }
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (EndSpec_18));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeWhereEnd_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeWhereEnd_13, 0) = ((MR_Box) (Var_92));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeWhereEnd_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeTypeIsAbstractNoncanonical_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeIsAbstractNoncanonical_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeIsAbstractNoncanonical_10, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeEqualityIs_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          EqualityIs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEqualityIs_11, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeComparisonIs_12)) == (MR_Integer) 1);
          if (succeeded)
            ComparisonIs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComparisonIs_12, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
      if ((TypeIsAbstractNoncanonical_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeCanonical_25;

        MaybeCanonical_25 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(EqualityIs_20, ComparisonIs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMaybeCanonical_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeCanonical_25));
        }
      }
      else
      {
        succeeded = (EqualityIs_20 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (ComparisonIs_21 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *MaybeMaybeCanonical_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[2]));
        else
        {
          MR_Word Spec_24;
          MR_Word Var_98;

          Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(Term0_7);
          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMaybeCanonical_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_98));
          }
        }
      }
    else
    {
      MR_Word Specs_26;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;

      Var_100 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeEqualityIs_11);
      Var_102 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeComparisonIs_12);
      Var_103 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeWhereEnd_13);
      Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_102, Var_103);
      Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_100, Var_101);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMaybeCanonical_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_26));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_122,
  MR_Word Var_123,
  MR_String HeadVar__1_32,
  MR_Word HeadVar__3_107)
{
  {
    MR_Word HeadVar__4_108;

    HeadVar__4_108 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_122, Var_123, HeadVar__1_32, HeadVar__3_107);
    return HeadVar__4_108;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_49_52_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_122,
  MR_Word Var_123,
  MR_String HeadVar__1_36,
  MR_Word HeadVar__3_113)
{
  {
    MR_Word HeadVar__4_114;

    HeadVar__4_114 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_122, Var_123, HeadVar__1_36, HeadVar__3_113);
    return HeadVar__4_114;
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_defn_item_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_bool succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubArgTerms_17;
    MR_Word SubContext_18;
    MR_Word ArgTerm_16;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;

    if (succeeded)
    {
      ArgTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 1))));
      succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ArgTerm_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_16, (MR_Integer) 0))));
          SubArgTerms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_16, (MR_Integer) 1))));
          SubContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_16, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
            succeeded = (strcmp(Var_25, (MR_String) "type") == 0);
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_type_defn__parse_type_defn_item_9_p_0(ModuleName_9, VarSet_10, SubArgTerms_17, SubContext_18, SeqNum_13, (MR_Integer) 1, MaybeIOM_14, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
    else
    {
      MR_Word Spec_20;
      MR_Word Var_45;

      {
        Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_solver_type_defn_item\'/8"));
        MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[24])));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_item_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded = (ArgTerms_12 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeDefnTerm_18;
    MR_Word Var_28;

    if (succeeded)
    {
      TypeDefnTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_12, (MR_Integer) 1))));
      succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_String Name_19;
      MR_Word HeadTerm_22;
      MR_Word BodyTerm_23;
      MR_Word TypeDefnArgTerms_20;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      succeeded = ((MR_tag((MR_Word) TypeDefnTerm_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnTerm_18, (MR_Integer) 0))));
        TypeDefnArgTerms_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnTerm_18, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          if ((strcmp(Name_19, (MR_String) "==") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Name_19, (MR_String) "--->") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Name_19, (MR_String) "where") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            succeeded = (TypeDefnArgTerms_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnArgTerms_20, (MR_Integer) 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnArgTerms_20, (MR_Integer) 1))));
              succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
        if ((strcmp(Name_19, (MR_String) "==") == 0))
        {
          parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(ModuleName_10, VarSet_11, HeadTerm_22, BodyTerm_23, Context_13, SeqNum_14, IsSolverType_15, MaybeIOM_16);
          *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        }
        else
        if ((strcmp(Name_19, (MR_String) "--->") == 0))
          parse_tree__parse_type_defn__parse_du_type_defn_10_p_0(ModuleName_10, VarSet_11, HeadTerm_22, BodyTerm_23, Context_13, SeqNum_14, IsSolverType_15, MaybeIOM_16, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
        else
        {
          switch (IsSolverType_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__parse_type_defn__parse_where_type_is_abstract_7_p_0(ModuleName_10, VarSet_11, HeadTerm_22, BodyTerm_23, Context_13, SeqNum_14, MaybeIOM_16);
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeWhere_63;

                parse_tree__parse_type_defn__parse_type_decl_where_term_6_p_0((MR_Integer) 1, ModuleName_10, SeqNum_14, VarSet_11, BodyTerm_23, &MaybeWhere_63);
                if (((MR_tag((MR_Word) MaybeWhere_63)) == (MR_Integer) 0))
                {
                  MR_Word Specs_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeWhere_63, (MR_Integer) 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeIOM_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_64));
                  }
                }
                else
                {
                  MR_Word MaybeSolverTypeDetails_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_63, (MR_Integer) 0))));
                  MR_Word MaybeCanonical_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_63, (MR_Integer) 1))));
                  MR_Word MaybeDirectArgCtors_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_63, (MR_Integer) 2))));

                  if ((MaybeDirectArgCtors_67 == (MR_Word) ((MR_Unsigned) 0U)))
                    parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(ModuleName_10, VarSet_11, HeadTerm_22, MaybeSolverTypeDetails_65, MaybeCanonical_66, Context_13, SeqNum_14, MaybeIOM_16);
                  else
                  {
                    MR_Word Spec_70;
                    MR_Word Var_89;
                    MR_Word Var_90;

                    Var_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_22);
                    {
                      Spec_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_70, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_block_type_defn\'/8"));
                      MR_hl_field(MR_mktag(1), Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(MR_mktag(1), Spec_70, 3) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(1), Spec_70, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[165])));
                    }
                    {
                      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Spec_70));
                      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeIOM_16 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
                    }
                  }
                }
              }
              break;
          }
          *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        }
      else
      {
        parse_tree__parse_type_defn__parse_abstract_type_defn_7_p_0(ModuleName_10, VarSet_11, TypeDefnTerm_18, Context_13, SeqNum_14, IsSolverType_15, MaybeIOM_16);
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      }
    }
    else
    {
      MR_Word Spec_25;
      MR_Word Var_53;

      {
        Spec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_defn_item\'/9"));
        MR_hl_field(MR_mktag(1), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_25, 3) = ((MR_Box) (Context_13));
        MR_hl_field(MR_mktag(1), Spec_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[34])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
      }
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_abstract_type_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word Context_11,
  MR_Word SeqNum_12,
  MR_Word IsSolverType_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_Word ContextPieces_15;
    MR_Word MaybeTypeCtorAndArgs_16;

    ContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[75])));
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_15, ModuleName_8, VarSet_9, HeadTerm_10, &MaybeTypeCtorAndArgs_16);
    if (((MR_tag((MR_Word) MaybeTypeCtorAndArgs_16)) == (MR_Integer) 0))
    {
      MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTypeCtorAndArgs_16, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_17));
      }
    }
    else
    {
      MR_Word Name_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_16, (MR_Integer) 0))));
      MR_Word Params_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_16, (MR_Integer) 1))));
      MR_Word TypeVarSet_20;
      MR_Word AbstractTypeDetails_21;
      MR_Word TypeDefn_22;
      MR_Word ItemTypeDefn_23;
      MR_Word Item_24;
      MR_Word Var_29;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TypeVarSet_20);
      switch (IsSolverType_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          AbstractTypeDetails_21 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          AbstractTypeDetails_21 = (MR_Word) ((MR_Unsigned) 12U);
          break;
      }
      {
        TypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeDefn_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), TypeDefn_22, 1) = ((MR_Box) (AbstractTypeDetails_21));
      }
      {
        ItemTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_23, 0) = ((MR_Box) (Name_18));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_23, 1) = ((MR_Box) (Params_19));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_23, 2) = ((MR_Box) (TypeDefn_22));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_23, 3) = ((MR_Box) (TypeVarSet_20));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_23, 4) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_23, 5) = ((MR_Box) (SeqNum_12));
      }
      {
        Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Item_24, 1) = ((MR_Box) (ItemTypeDefn_23));
      }
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Item_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word MaybeSolverTypeDetails_12,
  MR_Word MaybeCanonical_13,
  MR_Word Context_14,
  MR_Word SeqNum_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;
    MR_Word ContextPieces_17;
    MR_Word TVarSet_18;
    MR_Word MaybeNameParams_19;
    MR_Word SolverSpecs_21;
    MR_Word FreeSpecs_28;
    MR_Word ParamTVars0_25;
    MR_Word SolverTypeDetails0_26;
    MR_Word SymName_29;
    MR_Word ParamTVars_30;
    MR_Word SolverTypeDetails_31;

    ContextPieces_17 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[182])));
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_18);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_17, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameParams_19);
    if ((MaybeSolverTypeDetails_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SolverSpec_23;
      MR_Word Var_52;

      Var_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
      {
        SolverSpec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SolverSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_solver_type_base\'/8"));
        MR_hl_field(MR_mktag(1), SolverSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), SolverSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), SolverSpec_23, 3) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), SolverSpec_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[184])));
      }
      {
        SolverSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SolverSpecs_21, 0) = ((MR_Box) (SolverSpec_23));
        MR_hl_field(MR_mktag(1), SolverSpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      SolverSpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = ((MR_tag((MR_Word) MaybeNameParams_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      ParamTVars0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameParams_19, (MR_Integer) 1))));
      succeeded = (MaybeSolverTypeDetails_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        SolverTypeDetails0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_12, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word RepType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_26, (MR_Integer) 0))));

      parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(TVarSet_18, ParamTVars0_25, RepType_27, Context_14, &FreeSpecs_28);
    }
    else
      FreeSpecs_28 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (FreeSpecs_28 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeNameParams_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        SymName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameParams_19, (MR_Integer) 0))));
        ParamTVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameParams_19, (MR_Integer) 1))));
        succeeded = (MaybeSolverTypeDetails_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          SolverTypeDetails_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_12, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word TypeDefn_32;
      MR_Word DetailsSolver_33;
      MR_Word ItemTypeDefn_34;
      MR_Word Item_35;
      MR_Word Var_54;

      {
        DetailsSolver_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DetailsSolver_33, 0) = ((MR_Box) (SolverTypeDetails_31));
        MR_hl_field(MR_mktag(0), DetailsSolver_33, 1) = ((MR_Box) (MaybeCanonical_13));
      }
      TypeDefn_32 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (DetailsSolver_33)));
      {
        ItemTypeDefn_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 0) = ((MR_Box) (SymName_29));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 1) = ((MR_Box) (ParamTVars_30));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 2) = ((MR_Box) (TypeDefn_32));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 3) = ((MR_Box) (TVarSet_18));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 4) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 5) = ((MR_Box) (SeqNum_15));
      }
      {
        Item_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Item_35, 1) = ((MR_Box) (ItemTypeDefn_34));
      }
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Item_35));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_54));
      }
    }
    else
    {
      MR_Word Specs_36;
      MR_Word Var_55;
      MR_Word Var_56;

      Var_56 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameParams_19);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_56, FreeSpecs_28);
      Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SolverSpecs_21, Var_55);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_36));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word BodyTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded;
    MR_Word ContextPieces_15;
    MR_Word TypeVarSet_16;
    MR_Word MaybeNameParams_17;
    MR_Word MaybeTypeDefn_24;
    MR_String AttrName_18;
    MR_Word Args_19;
    MR_Word Var_41;
    MR_Word Name_31;
    MR_Word Params_32;
    MR_Word TypeDefn_33;

    ContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[75])));
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TypeVarSet_16);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_15, ModuleName_8, VarSet_9, HeadTerm_10, &MaybeNameParams_17);
    succeeded = ((MR_tag((MR_Word) BodyTerm_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 0))));
      Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
      if (succeeded)
      {
        AttrName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
        if ((strcmp(AttrName_18, (MR_String) "type_is_abstract_enum") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(AttrName_18, (MR_String) "type_is_representable_in_n_bits") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
    {
      MR_Word Arg_21;
      MR_Word Var_42;

      succeeded = (Args_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_19, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_19, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Integer NumBits_22;

        succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Arg_21, &NumBits_22);
        if (succeeded)
        {
          MR_Word TypeDefn0_23;
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (NumBits_22));
          }
          {
            TypeDefn0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TypeDefn0_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), TypeDefn0_23, 1) = ((MR_Box) (Var_43));
          }
          {
            MaybeTypeDefn_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTypeDefn_24, 0) = ((MR_Box) (TypeDefn0_23));
          }
        }
        else
        {
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_57;

          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (AttrName_18));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[168])));
          }
          {
            Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[166])));
            MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_46));
          }
          {
            Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
            MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (Pieces_25));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_57));
          }
        }
      }
      else
      {
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_72;
        MR_Word Pieces_126;
        MR_Word Spec_127;

        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (AttrName_18));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[170])));
        }
        {
          Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[124])));
          MR_hl_field(MR_mktag(1), Pieces_126, 1) = ((MR_Box) (Var_61));
        }
        {
          Spec_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_127, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
          MR_hl_field(MR_mktag(1), Spec_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_127, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_127, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_127, 4) = ((MR_Box) (Pieces_126));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_127));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_72));
        }
      }
    }
    else
    {
      MR_String AttrName_142;
      MR_Word Args_143;
      MR_Word Var_74;

      succeeded = ((MR_tag((MR_Word) BodyTerm_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 0))));
        Args_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 0);
        if (succeeded)
        {
          AttrName_142 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_74, (MR_Integer) 0))));
          succeeded = (strcmp(AttrName_142, (MR_String) "type_is_abstract_subtype") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word Arg_136;
        MR_Word Var_75;

        succeeded = (Args_143 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Arg_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_143, (MR_Integer) 0))));
          Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_143, (MR_Integer) 1))));
          succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word SymName_28;
          MR_Integer Arity_29;

          succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Arg_136, &SymName_28, &Arity_29);
          if (succeeded)
          {
            MR_Word TypeCtor_30;
            MR_Word Var_76;
            MR_Word TypeDefn0_128;

            {
              TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_30, 0) = ((MR_Box) (SymName_28));
              MR_hl_field(MR_mktag(0), TypeCtor_30, 1) = ((MR_Box) (Arity_29));
            }
            Var_76 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_30)));
            {
              TypeDefn0_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TypeDefn0_128, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), TypeDefn0_128, 1) = ((MR_Box) (Var_76));
            }
            {
              MaybeTypeDefn_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeTypeDefn_24, 0) = ((MR_Box) (TypeDefn0_128));
            }
          }
          else
          {
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_90;
            MR_Word Pieces_129;
            MR_Word Spec_130;

            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (AttrName_142));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[172])));
            }
            {
              Pieces_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[166])));
              MR_hl_field(MR_mktag(1), Pieces_129, 1) = ((MR_Box) (Var_79));
            }
            {
              Spec_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
              MR_hl_field(MR_mktag(1), Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_130, 3) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(1), Spec_130, 4) = ((MR_Box) (Pieces_129));
            }
            {
              Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Spec_130));
              MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_90));
            }
          }
        }
        else
        {
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_105;
          MR_Word Pieces_134;
          MR_Word Spec_135;

          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (AttrName_142));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[170])));
          }
          {
            Pieces_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[124])));
            MR_hl_field(MR_mktag(1), Pieces_134, 1) = ((MR_Box) (Var_94));
          }
          {
            Spec_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_135, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
            MR_hl_field(MR_mktag(1), Spec_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_135, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_135, 3) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(1), Spec_135, 4) = ((MR_Box) (Pieces_134));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Spec_135));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_105));
          }
        }
      }
      else
      {
        MR_Word Var_121;
        MR_Word Spec_141;

        {
          Spec_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_141, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
          MR_hl_field(MR_mktag(1), Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_141, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_141, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_141, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[178])));
        }
        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Spec_141));
          MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_121));
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeNameParams_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      Name_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameParams_17, (MR_Integer) 0))));
      Params_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameParams_17, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeTypeDefn_24)) == (MR_Integer) 1);
      if (succeeded)
        TypeDefn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_24, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ItemTypeDefn_34;
      MR_Word Item_35;
      MR_Word Var_123;

      {
        ItemTypeDefn_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 0) = ((MR_Box) (Name_31));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 1) = ((MR_Box) (Params_32));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 2) = ((MR_Box) (TypeDefn_33));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 3) = ((MR_Box) (TypeVarSet_16));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 4) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 5) = ((MR_Box) (SeqNum_13));
      }
      {
        Item_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Item_35, 1) = ((MR_Box) (ItemTypeDefn_34));
      }
      {
        Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (Item_35));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_123));
      }
    }
    else
    {
      MR_Word Specs_36;
      MR_Word Var_124;
      MR_Word Var_125;

      Var_124 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameParams_17);
      Var_125 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0), MaybeTypeDefn_24);
      Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_124, Var_125);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_36));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;
    MR_Word SolverSpecs_17;
    MR_Word HeadContextPieces_20;
    MR_Word MaybeNameAndParams_21;
    MR_Word BodyContextPieces_22;
    MR_Word MaybeType_23;
    MR_Word Name_24;
    MR_Word ParamTVars_25;
    MR_Word Type_26;

    switch (IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SolverSpecs_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word SolverSpec_19;
          MR_Word Var_47;

          Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
          {
            SolverSpec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_eqv_type_defn\'/8"));
            MR_hl_field(MR_mktag(1), SolverSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), SolverSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), SolverSpec_19, 3) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), SolverSpec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[158])));
          }
          {
            SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpecs_17, 0) = ((MR_Box) (SolverSpec_19));
            MR_hl_field(MR_mktag(1), SolverSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    HeadContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[75])));
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(HeadContextPieces_20, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameAndParams_21);
    BodyContextPieces_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[8])), VarSet_10, BodyContextPieces_22, BodyTerm_12, &MaybeType_23);
    succeeded = (SolverSpecs_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeNameAndParams_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        Name_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndParams_21, (MR_Integer) 0))));
        ParamTVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndParams_21, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeType_23)) == (MR_Integer) 1);
        if (succeeded)
          Type_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_23, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word TVarSet_27;
      MR_Word FreeSpecs_28;
      MR_Word Var_55;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_27);
      Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_12);
      parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(TVarSet_27, ParamTVars_25, Type_26, Var_55, &FreeSpecs_28);
      if ((FreeSpecs_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeDefn_29;
        MR_Word DetailsEqv_30 = (MR_Word) (Type_26);
        MR_Word ItemTypeDefn_31;
        MR_Word Item_32;
        MR_Word Var_56;

        {
          TypeDefn_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeDefn_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), TypeDefn_29, 1) = ((MR_Box) (DetailsEqv_30));
        }
        {
          ItemTypeDefn_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_31, 0) = ((MR_Box) (Name_24));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_31, 1) = ((MR_Box) (ParamTVars_25));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_31, 2) = ((MR_Box) (TypeDefn_29));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_31, 3) = ((MR_Box) (TVarSet_27));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_31, 4) = ((MR_Box) (Context_13));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_31, 5) = ((MR_Box) (SeqNum_14));
        }
        {
          Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Item_32, 1) = ((MR_Box) (ItemTypeDefn_31));
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Item_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_56));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FreeSpecs_28));
        }
    }
    else
    {
      MR_Word Specs_35;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;

      Var_58 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameAndParams_21);
      Var_59 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeType_23);
      Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_58, Var_59);
      Specs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SolverSpecs_17, Var_57);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_35));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_51;

    conv0_HeadVar__3_51 = parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1736__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_51));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(
  MR_Word TVarSet_6,
  MR_Word ParamTVars_7,
  MR_Word BodyType_8,
  MR_Word BodyContext_9,
  MR_Word * Specs_10)
{
  {
    MR_Word BodyTVars_11;
    MR_Word ParamTVarSet_12;
    MR_Word BodyTVarSet_13;
    MR_Word OnlyBodyTVarSet_14;
    MR_Word OnlyBodyTVars_15;

    parse_tree__prog_type__type_vars_2_p_0(BodyType_8, &BodyTVars_11);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ParamTVars_7, &ParamTVarSet_12);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), BodyTVars_11, &BodyTVarSet_13);
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), BodyTVarSet_13, ParamTVarSet_12, &OnlyBodyTVarSet_14);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), OnlyBodyTVarSet_14, &OnlyBodyTVars_15);
    if ((OnlyBodyTVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OnlyBodyTVarNames_18;
      MR_String VarWord_19;
      MR_String OccurWord_20;
      MR_Word Pieces_21;
      MR_Word Spec_22;
      MR_Word Var_23;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Box conv1_VarWord_19;
      MR_Box conv2_OccurWord_20;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TVarSet_6));
      }
      OnlyBodyTVarNames_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, OnlyBodyTVars_15);
      conv1_VarWord_19 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OnlyBodyTVars_15, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
      VarWord_19 = ((MR_String) (conv1_VarWord_19));
      conv2_OccurWord_20 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OnlyBodyTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
      OccurWord_20 = ((MR_String) (conv2_OccurWord_20));
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (VarWord_19));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[124])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      Var_35 = parse_tree__error_util__list_to_pieces_1_f_0(OnlyBodyTVarNames_18);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (OccurWord_20));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[239])));
      }
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, Var_36);
      Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, Var_34);
      {
        Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_no_free_body_vars\'/5"));
        MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (BodyContext_9));
        MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (Pieces_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__225__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_10_p_0(
  MR_Word ModuleName_11,
  MR_Word VarSet_12,
  MR_Word HeadTerm_13,
  MR_Word BodyTerm_14,
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Word IsSolverType_17,
  MR_Word * MaybeIOM_18,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  {
    MR_bool succeeded;
    MR_Word SolverSpecs_22;
    MR_Word ContextPieces_23;
    MR_Word MaybeTypeCtorAndArgs_28;
    MR_Word MaybeSuperType0_30;
    MR_Word SuperTypeContext_31;
    MR_Word CtorsTerm_32;
    MR_Word MaybeWhereTerm_33;
    MR_Word MaybeOneOrMoreCtors_34;
    MR_Word MaybeWhere_35;
    MR_Word SubTypeTerm_26;
    MR_Word SuperTypeTerm_27;
    MR_Word HeadArgs_24;
    MR_Word Var_86;
    MR_String Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word TypeSymName_37;
    MR_Word Params_38;
    MR_Word MaybeSuperType_39;
    MR_Word OneOrMoreCtors_40;
    MR_Word SolverTypeDetails_41;
    MR_Word MaybeCanonical_42;
    MR_Word MaybeDirectArgIs_43;

    switch (IsSolverType_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SolverSpecs_22 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word SolverSpec_21;
          MR_Word Var_80;

          Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_13);
          {
            SolverSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/10"));
            MR_hl_field(MR_mktag(1), SolverSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), SolverSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), SolverSpec_21, 3) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), SolverSpec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[73])));
          }
          {
            SolverSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpecs_22, 0) = ((MR_Box) (SolverSpec_21));
            MR_hl_field(MR_mktag(1), SolverSpecs_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    ContextPieces_23 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[75])));
    succeeded = ((MR_tag((MR_Word) HeadTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_13, (MR_Integer) 0))));
      HeadArgs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_87 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 0))));
        succeeded = (strcmp(Var_87, (MR_String) "=<") == 0);
        if (succeeded)
        {
          succeeded = (HeadArgs_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTypeTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadArgs_24, (MR_Integer) 0))));
            Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadArgs_24, (MR_Integer) 1))));
            succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SuperTypeTerm_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 0))));
              Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 1))));
              succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word SuperTypeContextPieces_29;

      parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_23, ModuleName_11, VarSet_12, SubTypeTerm_26, &MaybeTypeCtorAndArgs_28);
      SuperTypeContextPieces_29 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[79])));
      parse_tree__parse_type_defn__parse_supertype_4_p_0(VarSet_12, SuperTypeContextPieces_29, SuperTypeTerm_27, &MaybeSuperType0_30);
      SuperTypeContext_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SuperTypeTerm_27);
    }
    else
    {
      parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_23, ModuleName_11, VarSet_12, HeadTerm_13, &MaybeTypeCtorAndArgs_28);
      MaybeSuperType0_30 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[3]));
      SuperTypeContext_31 = mercury__term__dummy_context_init_0_f_0();
    }
    parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(BodyTerm_14, &CtorsTerm_32, &MaybeWhereTerm_33);
    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(ModuleName_11, VarSet_12, CtorsTerm_32, &MaybeOneOrMoreCtors_34);
    if ((MaybeWhereTerm_33 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeWhere_35 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_3[0]));
    else
    {
      MR_Word WhereTerm_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhereTerm_33, (MR_Integer) 0))));

      parse_tree__parse_type_defn__parse_type_decl_where_term_6_p_0((MR_Integer) 0, ModuleName_11, SeqNum_16, VarSet_12, WhereTerm_36, &MaybeWhere_35);
    }
    succeeded = (SolverSpecs_22 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeTypeCtorAndArgs_28)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeSymName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_28, (MR_Integer) 0))));
        Params_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_28, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeSuperType0_30)) == (MR_Integer) 1);
        if (succeeded)
        {
          MaybeSuperType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType0_30, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeOneOrMoreCtors_34)) == (MR_Integer) 1);
          if (succeeded)
          {
            OneOrMoreCtors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOneOrMoreCtors_34, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeWhere_35)) == (MR_Integer) 1);
            if (succeeded)
            {
              SolverTypeDetails_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_35, (MR_Integer) 0))));
              MaybeCanonical_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_35, (MR_Integer) 1))));
              MaybeDirectArgIs_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_35, (MR_Integer) 2))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadCtor_44;
      MR_Word TailCtors_45;
      MR_Word Ctors_46;
      MR_Word ErrorSpecs0_47;
      MR_Word TypeDefn_50;
      MR_Word ErrorSpecs_51;
      MR_Word Var_102;

      {
        Var_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[4]));
        MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_du_type_defn_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (SolverTypeDetails_41));
        MR_hl_field(MR_mktag(0), Var_102, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_102, (MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/10", (MR_String) "discriminated union type has solver type details");
      HeadCtor_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMoreCtors_40, (MR_Integer) 0))));
      TailCtors_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMoreCtors_40, (MR_Integer) 1))));
      {
        Ctors_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Ctors_46, 0) = ((MR_Box) (HeadCtor_44));
        MR_hl_field(MR_mktag(1), Ctors_46, 1) = ((MR_Box) (TailCtors_45));
      }
      parse_tree__parse_type_defn__process_du_ctors_6_p_0(Params_38, VarSet_12, BodyTerm_14, Ctors_46, (MR_Word) ((MR_Unsigned) 0U), &ErrorSpecs0_47);
      if ((MaybeSuperType_39 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word DetailsDu_60;

        {
          DetailsDu_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsDu_60, 0) = ((MR_Box) (OneOrMoreCtors_40));
          MR_hl_field(MR_mktag(0), DetailsDu_60, 1) = ((MR_Box) (MaybeCanonical_42));
          MR_hl_field(MR_mktag(0), DetailsDu_60, 2) = ((MR_Box) (MaybeDirectArgIs_43));
        }
        TypeDefn_50 = (MR_Word) ((MR_Word) (DetailsDu_60));
        if ((MaybeDirectArgIs_43 == (MR_Word) ((MR_Unsigned) 0U)))
          ErrorSpecs_51 = ErrorSpecs0_47;
        else
        {
          MR_Word DirectArgCtors_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgIs_43, (MR_Integer) 0))));

          parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(Ctors_46, DirectArgCtors_61, BodyTerm_14, ErrorSpecs0_47, &ErrorSpecs_51);
        }
        *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_0_67;
      }
      else
      {
        MR_Word SuperType_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_39, (MR_Integer) 0))));
        MR_Word DetailsSub_49;
        MR_Word STATE_VARIABLE_Specs_133_133;

        {
          DetailsSub_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsSub_49, 0) = ((MR_Box) (SuperType_48));
          MR_hl_field(MR_mktag(0), DetailsSub_49, 1) = ((MR_Box) (OneOrMoreCtors_40));
        }
        TypeDefn_50 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSub_49)));
        parse_tree__parse_type_defn__check_supertype_vars_6_p_0(Params_38, VarSet_12, SuperType_48, SuperTypeContext_31, ErrorSpecs0_47, &ErrorSpecs_51);
        if ((MaybeCanonical_42 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_133_133 = STATE_VARIABLE_Specs_0_67;
        else
        {
          MR_Word CanonTypeCtor_53;
          MR_Word CanonPieces_54;
          MR_Word CanonSpec_55;
          MR_Integer Var_107;
          MR_Word Var_110;
          MR_Word Var_111;

          Var_107 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Params_38);
          {
            CanonTypeCtor_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CanonTypeCtor_53, 0) = ((MR_Box) (TypeSymName_37));
            MR_hl_field(MR_mktag(0), CanonTypeCtor_53, 1) = ((MR_Box) (Var_107));
          }
          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (CanonTypeCtor_53));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[90])));
          }
          {
            CanonPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CanonPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[80])));
            MR_hl_field(MR_mktag(1), CanonPieces_54, 1) = ((MR_Box) (Var_110));
          }
          {
            CanonSpec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CanonSpec_55, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/10"));
            MR_hl_field(MR_mktag(1), CanonSpec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CanonSpec_55, 2) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), CanonSpec_55, 3) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(1), CanonSpec_55, 4) = ((MR_Box) (CanonPieces_54));
          }
          {
            STATE_VARIABLE_Specs_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_133_133, 0) = ((MR_Box) (CanonSpec_55));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_133_133, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_67));
          }
        }
        if ((MaybeDirectArgIs_43 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_133_133;
        else
        {
          MR_Word DirectArgTypeCtor_57;
          MR_Word DirectArgPieces_58;
          MR_Word DirectArgSpec_59;
          MR_Integer Var_134;
          MR_Word Var_137;
          MR_Word Var_138;

          Var_134 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Params_38);
          {
            DirectArgTypeCtor_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DirectArgTypeCtor_57, 0) = ((MR_Box) (TypeSymName_37));
            MR_hl_field(MR_mktag(0), DirectArgTypeCtor_57, 1) = ((MR_Box) (Var_134));
          }
          {
            Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (DirectArgTypeCtor_57));
          }
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[97])));
          }
          {
            DirectArgPieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectArgPieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[80])));
            MR_hl_field(MR_mktag(1), DirectArgPieces_58, 1) = ((MR_Box) (Var_137));
          }
          {
            DirectArgSpec_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirectArgSpec_59, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/10"));
            MR_hl_field(MR_mktag(1), DirectArgSpec_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), DirectArgSpec_59, 2) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), DirectArgSpec_59, 3) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(1), DirectArgSpec_59, 4) = ((MR_Box) (DirectArgPieces_58));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_68 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DirectArgSpec_59));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_133_133));
          }
        }
      }
      if ((ErrorSpecs_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeVarSet_62;
        MR_Word ItemTypeDefn_63;
        MR_Word Item_64;
        MR_Word Var_161;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_12, &TypeVarSet_62);
        {
          ItemTypeDefn_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_63, 0) = ((MR_Box) (TypeSymName_37));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_63, 1) = ((MR_Box) (Params_38));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_63, 2) = ((MR_Box) (TypeDefn_50));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_63, 3) = ((MR_Box) (TypeVarSet_62));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_63, 4) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_63, 5) = ((MR_Box) (SeqNum_16));
        }
        {
          Item_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Item_64, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Item_64, 1) = ((MR_Box) (ItemTypeDefn_63));
        }
        {
          Var_161 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (Item_64));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_161));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ErrorSpecs_51));
        }
    }
    else
    {
      MR_Word Specs_19;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;

      Var_163 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeTypeCtorAndArgs_28);
      Var_165 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0), MaybeSuperType0_30);
      Var_167 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[6]), MaybeOneOrMoreCtors_34);
      Var_168 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_canonical_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[8]), MaybeWhere_35);
      Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_167, Var_168);
      Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_165, Var_166);
      Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_163, Var_164);
      Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SolverSpecs_22, Var_162);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
      }
      *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_0_67;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_supertype_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word Term_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeType_9;

    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[14])), VarSet_5, ContextPieces_6, Term_7, &MaybeType_9);
    if (((MR_tag((MR_Word) MaybeType_9)) == (MR_Integer) 0))
      *Result_8 = (MR_Word) (MaybeType_9);
    else
    {
      MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_9, (MR_Integer) 0))));
      MR_Word _TypeCtor_11;
      MR_Word _Args_12;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_10, &_TypeCtor_11, &_Args_12);
      if (succeeded)
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Type_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
        }
      }
      else
      {
        MR_Word Context_13;
        MR_String TermStr_14;
        MR_Word Pieces_15;
        MR_Word Spec_16;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_24;
        MR_Word Var_27;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_41;

        Context_13 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
        Var_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (TermStr_14));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[68])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[240])));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
        }
        Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, Var_22);
        {
          Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_supertype\'/4"));
          MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_13));
          MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_6_p_0(
  MR_Word IsSolverType_7,
  MR_Word ModuleName_8,
  MR_Word SeqNum_9,
  MR_Word VarSet_10,
  MR_Word Term0_11,
  MR_Word * MaybeWhereDetails_12)
{
  {
    MR_Word GroundContextPieces_13;
    MR_Word AnyContextPieces_14;
    MR_Word MaybeTypeIsAbstractNoncanonical_16;
    MR_Word MaybeRepresentationIs_17;
    MR_Word MaybeGroundIs_18;
    MR_Word MaybeAnyIs_19;
    MR_Word MaybeCStoreIs_20;
    MR_Word MaybeEqualityIs_21;
    MR_Word MaybeComparisonIs_22;
    MR_Word MaybeDirectArgIs_23;
    MR_Word MaybeEndSpec_24;
    MR_Word STATE_VARIABLE_MaybeTerm_32_32;
    MR_Word STATE_VARIABLE_MaybeTerm_34_34;
    MR_Word STATE_VARIABLE_MaybeTerm_36_36;
    MR_Word STATE_VARIABLE_MaybeTerm_40_40;
    MR_Word STATE_VARIABLE_MaybeTerm_44_44;
    MR_Word STATE_VARIABLE_MaybeTerm_48_48;
    MR_Word STATE_VARIABLE_MaybeTerm_52_52;
    MR_Word STATE_VARIABLE_MaybeTerm_56_56;
    MR_Word STATE_VARIABLE_MaybeTerm_60_60;

    GroundContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[185]))));
    AnyContextPieces_14 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[186]))));
    {
      STATE_VARIABLE_MaybeTerm_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_32_32, 0) = ((MR_Box) (Term0_11));
    }
    parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&MaybeTypeIsAbstractNoncanonical_16, STATE_VARIABLE_MaybeTerm_32_32, &STATE_VARIABLE_MaybeTerm_34_34);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", VarSet_10, &MaybeRepresentationIs_17, STATE_VARIABLE_MaybeTerm_34_34, &STATE_VARIABLE_MaybeTerm_36_36);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "ground", VarSet_10, GroundContextPieces_13, &MaybeGroundIs_18, STATE_VARIABLE_MaybeTerm_36_36, &STATE_VARIABLE_MaybeTerm_40_40);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "any", VarSet_10, AnyContextPieces_14, &MaybeAnyIs_19, STATE_VARIABLE_MaybeTerm_40_40, &STATE_VARIABLE_MaybeTerm_44_44);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_54_93_95_48_4_p_0((MR_String) "constraint_store", ModuleName_8, SeqNum_9, VarSet_10, &MaybeCStoreIs_20, STATE_VARIABLE_MaybeTerm_44_44, &STATE_VARIABLE_MaybeTerm_48_48);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", ModuleName_8, VarSet_10, &MaybeEqualityIs_21, STATE_VARIABLE_MaybeTerm_48_48, &STATE_VARIABLE_MaybeTerm_52_52);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", ModuleName_8, VarSet_10, &MaybeComparisonIs_22, STATE_VARIABLE_MaybeTerm_52_52, &STATE_VARIABLE_MaybeTerm_56_56);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", ModuleName_8, VarSet_10, &MaybeDirectArgIs_23, STATE_VARIABLE_MaybeTerm_56_56, &STATE_VARIABLE_MaybeTerm_60_60);
    if ((STATE_VARIABLE_MaybeTerm_60_60 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeEndSpec_24 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[0]));
    else
    {
      MR_Word EndTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_60_60, (MR_Integer) 0))));
      MR_Word EndSpec_27;
      MR_Word Var_74;
      MR_Word Var_75;

      Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), EndTerm_25);
      {
        EndSpec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), EndSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_decl_where_term\'/6"));
        MR_hl_field(MR_mktag(1), EndSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), EndSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), EndSpec_27, 3) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), EndSpec_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[190])));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (EndSpec_27));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeEndSpec_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeEndSpec_24, 0) = ((MR_Box) (Var_75));
      }
    }
    *MaybeWhereDetails_12 = parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(IsSolverType_7, MaybeTypeIsAbstractNoncanonical_16, MaybeRepresentationIs_17, MaybeGroundIs_18, MaybeAnyIs_19, MaybeCStoreIs_20, MaybeEqualityIs_21, MaybeComparisonIs_22, MaybeDirectArgIs_23, MaybeEndSpec_24, Term0_11);
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_54_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_54_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_54_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_124,
  MR_String HeadVar__1_37,
  MR_Word HeadVar__3_82)
{
  {
    MR_Word HeadVar__4_83;

    HeadVar__4_83 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_124, HeadVar__1_37, HeadVar__3_82);
    return HeadVar__4_83;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_48,
  MR_String Name_5,
  MR_Word Term_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_String Var_46;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1))));
        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_46) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;
        MR_Word ContextPieces_53;

        ContextPieces_53 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
        parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[13])), Var_48, ContextPieces_53, RHS_10, &RHSResult_13);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_Integer) 0))
          Result_8 = (MR_Word) (RHSResult_13);
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_41;
      MR_Word Var_42;

      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[194])));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_42));
      }
    }
    return Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_57_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_57_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_56_57_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_124,
  MR_Word Var_125,
  MR_String HeadVar__1_41,
  MR_Word HeadVar__3_88)
{
  {
    MR_Word HeadVar__4_89;

    HeadVar__4_89 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_124, Var_125, HeadVar__1_41, HeadVar__3_88);
    return HeadVar__4_89;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_124,
  MR_Word Var_125,
  MR_String HeadVar__1_45,
  MR_Word HeadVar__3_94)
{
  {
    MR_Word HeadVar__4_95;

    HeadVar__4_95 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_124, Var_125, HeadVar__1_45, HeadVar__3_94);
    return HeadVar__4_95;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_String Name_5,
  MR_Word Term_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_String Var_46;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1))));
        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_46) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(Var_48, Var_49, RHS_10);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_Integer) 0))
          Result_8 = (MR_Word) (RHSResult_13);
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_41;
      MR_Word Var_42;

      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[194])));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_42));
      }
    }
    return Result_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9)
{
  {
    MR_bool succeeded;
    MR_Word MaybeInst_10;
    MR_Word MaybeInst0_11;

    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[12])), VarSet_7, ContextPieces_8, Term_9, &MaybeInst0_11);
    if (((MR_tag((MR_Word) MaybeInst0_11)) == (MR_Integer) 0))
      MaybeInst_10 = MaybeInst0_11;
    else
    {
      MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst0_11, (MR_Integer) 0))));

      succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(Inst_13);
      if (succeeded)
      {
        MR_String TermStr_14;
        MR_Word Pieces_15;
        MR_Word Spec_16;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_36;
        MR_Word Var_37;

        TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
        Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (TermStr_14));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[196])));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[124])));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
        }
        Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, Var_20);
        Var_36 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_inst_is\'/4"));
          MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeInst_10, 0) = ((MR_Box) (Var_37));
        }
      }
      else
        MaybeInst_10 = MaybeInst0_11;
    }
    return MaybeInst_10;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_53_95_95_49_95_95_104_111_49_54_95_95_91_53_93_95_48_3_f_0(Var_28, Var_29, Var_30, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_53_95_95_49_95_95_104_111_49_54_95_95_91_53_93_95_48_3_f_0(Var_28, Var_29, Var_30, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_53_95_95_49_95_95_104_111_49_54_95_95_91_53_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_Word Var_125,
  MR_String HeadVar__1_49,
  MR_Word HeadVar__3_99)
{
  {
    MR_Word HeadVar__4_100;

    HeadVar__4_100 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_53_93_95_48_3_f_0(Var_123, Var_124, Var_125, HeadVar__1_49, HeadVar__3_99);
    return HeadVar__4_100;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_53_93_95_48_3_f_0(
  MR_Word Var_47,
  MR_Word Var_48,
  MR_Word Var_49,
  MR_String Name_5,
  MR_Word Term_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_String Var_46;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1))));
        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_46) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0(Var_47, Var_48, Var_49, RHS_10);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_Integer) 0))
          Result_8 = (MR_Word) (RHSResult_13);
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_41;
      MR_Word Var_42;

      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[194])));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_42));
      }
    }
    return Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeItemMutableInfo_10;

    parse_tree__parse_type_defn__parse_mutable_decl_term_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeItemMutableInfo_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeItemMutableInfo_10));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0(
  MR_Word ModuleName_6,
  MR_Word SeqNum_7,
  MR_Word VarSet_8,
  MR_Word Term_9)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word MaybeItems_10;
    MR_Word Var_20;
    MR_String Var_21;

    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        succeeded = (strcmp(Var_21, (MR_String) "mutable") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word MaybeItem_13;

      parse_tree__parse_type_defn__parse_mutable_decl_term_5_p_0(ModuleName_6, SeqNum_7, VarSet_8, Term_9, &MaybeItem_13);
      if (((MR_tag((MR_Word) MaybeItem_13)) == (MR_Integer) 0))
        MaybeItems_10 = (MR_Word) (MaybeItem_13);
      else
      {
        MR_Word Mutable_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItem_13, (MR_Integer) 0))));
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Mutable_14));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeItems_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeItems_10, 0) = ((MR_Box) (Var_22));
        }
      }
    }
    else
    {
      MR_Word Terms_16;

      succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_9, &Terms_16);
      if (succeeded)
      {
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0_1));
          MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (ModuleName_6));
          MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (SeqNum_7));
          MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (VarSet_8));
        }
        parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), Var_24, Terms_16, &MaybeItems_10);
      }
      else
      {
        MR_String TermStr_17;
        MR_Word Pieces_18;
        MR_Word Spec_19;
        MR_Word Var_27;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_41;
        MR_Word Var_42;

        TermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (TermStr_17));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[198])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[197])));
          MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_27));
        }
        Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_mutable_is\'/4"));
          MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeItems_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeItems_10, 0) = ((MR_Box) (Var_42));
        }
      }
    }
    return MaybeItems_10;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_5_p_0(
  MR_Word ModuleName_6,
  MR_Word SeqNum_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeItemMutableInfo_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word ArgTerms_11;
    MR_Word Context_12;
    MR_Word Var_16;
    MR_String Var_17;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      ArgTerms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp(Var_17, (MR_String) "mutable") == 0);
      }
    }
    if (succeeded)
      parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(ModuleName_6, VarSet_8, ArgTerms_11, Context_12, SeqNum_7, (MR_Integer) 1, MaybeItemMutableInfo_10);
    else
    {
      MR_String TermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_32;
      MR_Word Var_33;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[199])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_21));
      }
      Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_mutable_decl_term\'/5"));
        MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_14));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemMutableInfo_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_56_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_56_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_48_57_56_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_String HeadVar__1_53,
  MR_Word HeadVar__3_105)
{
  {
    MR_Word HeadVar__4_106;

    HeadVar__4_106 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_123, Var_124, HeadVar__1_53, HeadVar__3_105);
    return HeadVar__4_106;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_49_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_49_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_49_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_String HeadVar__1_57,
  MR_Word HeadVar__3_111)
{
  {
    MR_Word HeadVar__4_112;

    HeadVar__4_112 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_123, Var_124, HeadVar__1_57, HeadVar__3_111);
    return HeadVar__4_112;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_47,
  MR_Word Var_48,
  MR_String Name_5,
  MR_Word Term_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_String Var_46;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1))));
        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_46) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(Var_47, Var_48, RHS_10, &RHSResult_13);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_Integer) 0))
          Result_8 = (MR_Word) (RHSResult_13);
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_41;
      MR_Word Var_42;

      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[194])));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_42));
      }
    }
    return Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_49_49_48_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_123,
  MR_Word Var_124,
  MR_String HeadVar__1_61,
  MR_Word HeadVar__3_116)
{
  {
    MR_Word HeadVar__4_117;

    HeadVar__4_117 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(Var_123, Var_124, HeadVar__1_61, HeadVar__3_116);
    return HeadVar__4_117;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_47,
  MR_Word Var_48,
  MR_String Name_5,
  MR_Word Term_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_String Var_46;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1))));
        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_46) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(Var_47, Var_48, RHS_10);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_Integer) 0))
          Result_8 = (MR_Word) (RHSResult_13);
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_41;
      MR_Word Var_42;

      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[194])));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_42));
      }
    }
    return Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeFunctor_8;

    parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeFunctor_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeFunctor_8));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7)
{
  {
    MR_bool succeeded;
    MR_Word MaybeDirectArgCtors_8;
    MR_Word FunctorsTerms_9;

    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_7, &FunctorsTerms_9);
    if (succeeded)
    {
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleName_5));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (VarSet_6));
      }
      parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_12, FunctorsTerms_9, &MaybeDirectArgCtors_8);
    }
    else
    {
      MR_Word Spec_11;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_27 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_direct_arg_is\'/3"));
        MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[201])));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Spec_11));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeDirectArgCtors_8, 0) = ((MR_Box) (Var_28));
      }
    }
    return MaybeDirectArgCtors_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]));
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0))));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0))));

        if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
  MR_Word Term_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word HeadVar__2_2;
    MR_Word Var_5;
    MR_String Var_6;
    MR_Word Var_7;

    if (succeeded)
    {
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
          succeeded = (strcmp(Var_6, (MR_String) "type_is_abstract_noncanonical") == 0);
        }
      }
    }
    if (succeeded)
      HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[10]));
    else
      HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[11]));
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(
  MR_Word IsSolverType_13,
  MR_Word MaybeTypeIsAbstractNoncanonical_14,
  MR_Word MaybeRepresentationIs_15,
  MR_Word MaybeGroundIs_16,
  MR_Word MaybeAnyIs_17,
  MR_Word MaybeCStoreIs_18,
  MR_Word MaybeEqualityIs_19,
  MR_Word MaybeComparisonIs_20,
  MR_Word MaybeDirectArgIs_21,
  MR_Word MaybeWhereEnd_22,
  MR_Word WhereTerm_23)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) MaybeWhereEnd_22)) == (MR_Integer) 1);
    MR_Word MaybeWhereDetails_24;
    MR_Word TypeIsAbstractNoncanonical_25;
    MR_Word RepresentationIs_26;
    MR_Word GroundIs_27;
    MR_Word AnyIs_28;
    MR_Word CStoreIs_29;
    MR_Word EqualityIs_30;
    MR_Word ComparisonIs_31;
    MR_Word DirectArgIs_32;

    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeTypeIsAbstractNoncanonical_14)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeIsAbstractNoncanonical_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeIsAbstractNoncanonical_14, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeRepresentationIs_15)) == (MR_Integer) 1);
        if (succeeded)
        {
          RepresentationIs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepresentationIs_15, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeGroundIs_16)) == (MR_Integer) 1);
          if (succeeded)
          {
            GroundIs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGroundIs_16, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeAnyIs_17)) == (MR_Integer) 1);
            if (succeeded)
            {
              AnyIs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAnyIs_17, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeCStoreIs_18)) == (MR_Integer) 1);
              if (succeeded)
              {
                CStoreIs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCStoreIs_18, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeEqualityIs_19)) == (MR_Integer) 1);
                if (succeeded)
                {
                  EqualityIs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEqualityIs_19, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeComparisonIs_20)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ComparisonIs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComparisonIs_20, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeDirectArgIs_21)) == (MR_Integer) 1);
                    if (succeeded)
                      DirectArgIs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgIs_21, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      MaybeWhereDetails_24 = parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(IsSolverType_13, TypeIsAbstractNoncanonical_25, RepresentationIs_26, GroundIs_27, AnyIs_28, CStoreIs_29, EqualityIs_30, ComparisonIs_31, DirectArgIs_32, WhereTerm_23);
    else
    {
      MR_Word Specs_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;

      Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[12]), MaybeTypeIsAbstractNoncanonical_14);
      Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[13]), MaybeRepresentationIs_15);
      Var_39 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[14]), MaybeGroundIs_16);
      Var_41 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[14]), MaybeAnyIs_17);
      Var_43 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[15]), MaybeCStoreIs_18);
      Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeEqualityIs_19);
      Var_47 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeComparisonIs_20);
      Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[8]), MaybeDirectArgIs_21);
      Var_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeWhereEnd_22);
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_49, Var_50);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_47, Var_48);
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_45, Var_46);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_43, Var_44);
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_41, Var_42);
      Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_39, Var_40);
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_37, Var_38);
      Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_35, Var_36);
      {
        MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeWhereDetails_24, 0) = ((MR_Box) (Specs_34));
      }
    }
    return MaybeWhereDetails_24;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(
  MR_Word IsSolverType_12,
  MR_Word TypeIsAbstractNoncanonical_13,
  MR_Word RepresentationIs_14,
  MR_Word GroundIs_15,
  MR_Word AnyIs_16,
  MR_Word CStoreIs_17,
  MR_Word EqualityIs_18,
  MR_Word ComparisonIs_19,
  MR_Word DirectArgIs_20,
  MR_Word WhereTerm_21)
{
  {
    MR_bool succeeded;
    MR_Word MaybeWhereDetails_22;

    if ((TypeIsAbstractNoncanonical_13 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (IsSolverType_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = (RepresentationIs_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              succeeded = (GroundIs_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
              if (!(succeeded))
              {
                succeeded = (AnyIs_16 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
                if (!(succeeded))
                {
                  succeeded = (CStoreIs_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Spec_110;

              Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
              {
                Spec_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_110, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10"));
                MR_hl_field(MR_mktag(1), Spec_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_110, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), Spec_110, 3) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(1), Spec_110, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[207])));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Spec_110));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_55));
              }
            }
            else
            {
              MR_Word MaybeCanonical_112;

              MaybeCanonical_112 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(EqualityIs_18, ComparisonIs_19);
              {
                MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (MaybeCanonical_112));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 2) = ((MR_Box) (DirectArgIs_20));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (DirectArgIs_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Spec_101;

              Var_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
              {
                Spec_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_101, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10"));
                MR_hl_field(MR_mktag(1), Spec_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_101, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), Spec_101, 3) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(1), Spec_101, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[212])));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Spec_101));
                MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_73));
              }
            }
            else
            {
              MR_Word RepnType_27;
              MR_Word MaybeGroundInst_28;
              MR_Word MaybeAnyInst_29;
              MR_Word MaybeEqPred_30;
              MR_Word MaybeCmpPred_31;
              MR_Word MaybeMutableInfos_32;

              succeeded = (RepresentationIs_14 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RepnType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepresentationIs_14, (MR_Integer) 0))));
                MaybeGroundInst_28 = GroundIs_15;
                MaybeAnyInst_29 = AnyIs_16;
                MaybeEqPred_30 = EqualityIs_18;
                MaybeCmpPred_31 = ComparisonIs_19;
                MaybeMutableInfos_32 = CStoreIs_17;
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word GroundInst_33;
                MR_Word AnyInst_34;
                MR_Word MutableInfos_35;
                MR_Word SolverTypeDetails_36;
                MR_Word MaybeSolverTypeDetails_37;
                MR_Word MaybeCanonical_38;

                if ((MaybeGroundInst_28 == (MR_Word) ((MR_Unsigned) 0U)))
                  GroundInst_33 = parse_tree__prog_mode__ground_inst_0_f_0();
                else
                  GroundInst_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGroundInst_28, (MR_Integer) 0))));
                if ((MaybeAnyInst_29 == (MR_Word) ((MR_Unsigned) 0U)))
                  AnyInst_34 = parse_tree__prog_mode__ground_inst_0_f_0();
                else
                  AnyInst_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAnyInst_29, (MR_Integer) 0))));
                if ((MaybeMutableInfos_32 == (MR_Word) ((MR_Unsigned) 0U)))
                  MutableInfos_35 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  MutableInfos_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMutableInfos_32, (MR_Integer) 0))));
                {
                  SolverTypeDetails_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 0) = ((MR_Box) (RepnType_27));
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 1) = ((MR_Box) (GroundInst_33));
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 2) = ((MR_Box) (AnyInst_34));
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 3) = ((MR_Box) (MutableInfos_35));
                }
                {
                  MaybeSolverTypeDetails_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_37, 0) = ((MR_Box) (SolverTypeDetails_36));
                }
                MaybeCanonical_38 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(MaybeEqPred_30, MaybeCmpPred_31);
                {
                  MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) (MaybeSolverTypeDetails_37));
                  MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (MaybeCanonical_38));
                  MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
              {
                succeeded = (RepresentationIs_14 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Spec_102;

                  Var_90 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
                  {
                    Spec_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_102, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10"));
                    MR_hl_field(MR_mktag(1), Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(MR_mktag(1), Spec_102, 3) = ((MR_Box) (Var_90));
                    MR_hl_field(MR_mktag(1), Spec_102, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[216])));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Spec_102));
                    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_91));
                  }
                }
                else
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10", (MR_String) "shouldn\'t have reached this point! (1)");
              }
            }
          }
          break;
      }
    else
    {
      succeeded = (RepresentationIs_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (GroundIs_15 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (AnyIs_16 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (EqualityIs_18 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (ComparisonIs_19 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (CStoreIs_17 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  succeeded = (DirectArgIs_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_96;
        MR_Word Var_97;

        {
          Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_97, 1) = (MR_Box) ((MR_Unsigned) (IsSolverType_12));
        }
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
        }
        {
          MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) (DirectArgIs_20));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 2) = ((MR_Box) (DirectArgIs_20));
        }
      }
      else
      {
        MR_Word Spec_24;
        MR_Word Var_99;

        Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(WhereTerm_21);
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_99));
        }
      }
    }
    return MaybeWhereDetails_22;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word MaybeUniPred_4,
  MR_Word MaybeCmpPred_5)
{
  {
    MR_Word MaybeCanonical_6;

    if ((MaybeUniPred_4 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeCmpPred_5 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeCanonical_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word CmpPred_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCmpPred_5, (MR_Integer) 0))));
        MR_Word Var_11;

        {
          Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (CmpPred_7));
        }
        {
          MaybeCanonical_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCanonical_6, 0) = ((MR_Box) (Var_11));
        }
      }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUniPred_4, (MR_Integer) 0))));

      if ((MaybeCmpPred_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_9;

        {
          Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Var_14));
        }
        {
          MaybeCanonical_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCanonical_6, 0) = ((MR_Box) (Var_9));
        }
      }
      else
      {
        MR_Word Var_10;
        MR_Word CmpPred_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCmpPred_5, (MR_Integer) 0))));

        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (CmpPred_12));
        }
        {
          MaybeCanonical_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCanonical_6, 0) = ((MR_Box) (Var_10));
        }
      }
    }
    return MaybeCanonical_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(
  MR_Word Term_3)
{
  {
    MR_Word Spec_4;
    MR_Word Var_26;

    Var_26 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
    {
      Spec_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_4, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.abstract_noncanonical_excludes_others\'/1"));
      MR_hl_field(MR_mktag(1), Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_4, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Spec_4, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[222])));
    }
    return Spec_4;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word DirectArgCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word DirectArgCtors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectArgCtor_12, (MR_Integer) 0))));
      MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DirectArgCtor_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_48_48;
      MR_Word Ctor_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      succeeded = parse_tree__parse_type_defn__find_constructor_4_p_0(HeadVar__1_1, SymName_16, Arity_17, &Ctor_18);
      if (succeeded)
      {
        MR_Word MaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 1))));

        succeeded = (Arity_17 != (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word Spec_26;
          MR_Word Var_47;

          Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
          {
            Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_direct_arg_ctors\'/5"));
            MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[148])));
          }
          {
            STATE_VARIABLE_Specs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_48_48, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
        else
        if ((MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_48_48 = STATE_VARIABLE_Specs_0_4;
        else
        {
          MR_Word Var_51;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_68;
          MR_Word Pieces_92;
          MR_Word Spec_93;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (DirectArgCtor_12));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[151])));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[149])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146])));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Pieces_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[23])));
            MR_hl_field(MR_mktag(1), Pieces_92, 1) = ((MR_Box) (Var_51));
          }
          Var_68 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
          {
            Spec_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_direct_arg_ctors\'/5"));
            MR_hl_field(MR_mktag(1), Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_93, 3) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Spec_93, 4) = ((MR_Box) (Pieces_92));
          }
          {
            STATE_VARIABLE_Specs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_48_48, 0) = ((MR_Box) (Spec_93));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
      }
      else
      {
        MR_Word Var_72;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_89;
        MR_Word Pieces_96;
        MR_Word Spec_97;

        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (DirectArgCtor_12));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[154])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[152])));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146])));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
        }
        {
          Pieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[23])));
          MR_hl_field(MR_mktag(1), Pieces_96, 1) = ((MR_Box) (Var_72));
        }
        Var_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
        {
          Spec_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_97, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_direct_arg_ctors\'/5"));
          MR_hl_field(MR_mktag(1), Spec_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_97, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_97, 3) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Spec_97, 4) = ((MR_Box) (Pieces_96));
        }
        {
          STATE_VARIABLE_Specs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_48_48, 0) = ((MR_Box) (Spec_97));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = DirectArgCtors_13;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_48_48;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__find_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_7,
  MR_Integer Arity_8,
  MR_Word * NamedCtor_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Ctor_5;
    MR_Word Ctors_6;
    MR_Word Var_14;
    MR_Integer Var_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Ctor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Ctors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 2))));
      Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 4))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_7, Var_14);
      if (succeeded)
        succeeded = (Arity_8 == Var_15);
      if (succeeded)
      {
        *NamedCtor_9 = Ctor_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Ctors_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv11_HeadVar__3_289;

    conv11_HeadVar__3_289 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__719__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__3_289));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__713__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_2;

    conv10_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_HeadVar__3_273;

    conv7_HeadVar__3_273 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__691__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__3_273));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__684__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_131;

    conv6_LambdaHeadVar__2_131 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__680__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_131));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__3_260;

    conv2_HeadVar__3_260 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__655__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_260));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__625__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_65;

    conv0_LambdaHeadVar__2_65 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__621__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_65));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word BodyTerm_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word Ctor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1))));
      MR_Word CtorArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3))));
      MR_Word ExistQVars_25;
      MR_Word Constraints_26;
      MR_Word STATE_VARIABLE_Specs_86_86;
      MR_Word NotExistQOrParamVars_36;
      MR_Word CtorArgTypes_30;
      MR_Word VarsInCtorArgTypes0_32;
      MR_Word VarsInCtorArgTypes_33;
      MR_Word ExistQVarsParams_34;
      MR_Word Var_66;
      MR_Word _ExistQOrParamVars_35;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      if ((MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ExistQVars_25 = (MR_Word) ((MR_Unsigned) 0U);
        Constraints_26 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word ExistConstraints_27 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_20), (MR_Integer) 1));

        ExistQVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_27, (MR_Integer) 0))));
        Constraints_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_27, (MR_Integer) 1))));
      }
      CtorArgTypes_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[4]), CtorArgs_22);
      parse_tree__prog_type__type_vars_list_2_p_0(CtorArgTypes_30, &VarsInCtorArgTypes0_32);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes0_32, &VarsInCtorArgTypes_33);
      ExistQVarsParams_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_25, HeadVar__1_1);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (ExistQVarsParams_34));
      }
      mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Var_66, VarsInCtorArgTypes_33, &_ExistQOrParamVars_35, &NotExistQOrParamVars_36);
      succeeded = (NotExistQOrParamVars_36 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word GenericVarSet_39;
        MR_String NotExistQOrParamVarsStr_40;
        MR_Word Pieces_41;
        MR_Word Spec_42;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_String Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_85;
        MR_Box conv1_Var_71;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_39);
        NotExistQOrParamVarsStr_40 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_39, NotExistQOrParamVars_36);
        conv1_Var_71 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQOrParamVars_36, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
        Var_71 = ((MR_String) (conv1_Var_71));
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (NotExistQOrParamVarsStr_40));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[123])));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_74));
        }
        {
          Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[119])));
          MR_hl_field(MR_mktag(1), Pieces_41, 1) = ((MR_Box) (Var_69));
        }
        Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
        {
          Spec_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
          MR_hl_field(MR_mktag(1), Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_42, 3) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Spec_42, 4) = ((MR_Box) (Pieces_41));
        }
        {
          STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_42));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
        }
      }
      else
      {
        MR_Word ExistQParamsSet_45;
        MR_Word ExistQVarsSet_43;
        MR_Word ParamsSet_44;

        mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_25, &ExistQVarsSet_43);
        mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), HeadVar__1_1, &ParamsSet_44);
        mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVarsSet_43, ParamsSet_44, &ExistQParamsSet_45);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQParamsSet_45);
        if (succeeded)
        {
          MR_Word ExistQParams_46;
          MR_Word ExistQParamVarsStrs_47;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_String Var_93;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_String Var_101;
          MR_Word Var_104;
          MR_Word Var_107;
          MR_Word Var_110;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_String Var_115;
          MR_Word Var_127;
          MR_Word GenericVarSet_209;
          MR_Word Pieces_210;
          MR_Word Spec_211;
          MR_Box conv3_Var_93;
          MR_Box conv4_Var_101;
          MR_Box conv5_Var_115;

          mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQParamsSet_45, &ExistQParams_46);
          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_209);
          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (GenericVarSet_209));
          }
          ExistQParamVarsStrs_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_87, ExistQParams_46);
          conv3_Var_93 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
          Var_93 = ((MR_String) (conv3_Var_93));
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[124])));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
          }
          Var_98 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(ExistQParamVarsStrs_47);
          conv4_Var_101 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
          Var_101 = ((MR_String) (conv4_Var_101));
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (Var_101));
          }
          conv5_Var_115 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "it being a type parameter")), ((MR_Box) ((MR_String) "them being type parameters")));
          Var_115 = ((MR_String) (conv5_Var_115));
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (Var_115));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[129])));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[127])));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[126])));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_110));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[125])));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_107));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_104));
          }
          Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_98, Var_99);
          Pieces_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_88, Var_97);
          Var_127 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
          {
            Spec_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_211, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
            MR_hl_field(MR_mktag(1), Spec_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_211, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_211, 3) = ((MR_Box) (Var_127));
            MR_hl_field(MR_mktag(1), Spec_211, 4) = ((MR_Box) (Pieces_210));
          }
          {
            STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_211));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
          }
        }
        else
        {
          MR_Word NotOccursExistQVars_50;
          MR_Word ConstraintTVars_48;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word CtorArgTypes_213;
          MR_Word VarsInCtorArgTypes0_214;
          MR_Word VarsInCtorArgTypes_215;
          MR_Word _OccursExistQVars_49;

          CtorArgTypes_213 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[5]), CtorArgs_22);
          parse_tree__prog_type__type_vars_list_2_p_0(CtorArgTypes_213, &VarsInCtorArgTypes0_214);
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes0_214, &VarsInCtorArgTypes_215);
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_26, &ConstraintTVars_48);
          Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes_215, ConstraintTVars_48);
          {
            Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_5));
            MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (Var_133));
          }
          mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Var_132, ExistQVars_25, &_OccursExistQVars_49, &NotOccursExistQVars_50);
          succeeded = (NotOccursExistQVars_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word NotOccursExistQVarStrs_53;
            MR_Word Var_134;
            MR_Word Var_135;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_String Var_140;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_String Var_148;
            MR_Word Var_163;
            MR_Word GenericVarSet_216;
            MR_Word Pieces_217;
            MR_Word Spec_218;
            MR_Box conv8_Var_140;
            MR_Box conv9_Var_148;

            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_216);
            {
              Var_134 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[2]));
              MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_6));
              MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (GenericVarSet_216));
            }
            NotOccursExistQVarStrs_53 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_134, NotOccursExistQVars_50);
            conv8_Var_140 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotOccursExistQVars_50, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
            Var_140 = ((MR_String) (conv8_Var_140));
            {
              Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (Var_140));
            }
            {
              Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
              MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[130])));
              MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
            }
            Var_145 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NotOccursExistQVarStrs_53);
            conv9_Var_148 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotOccursExistQVars_50, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
            Var_148 = ((MR_String) (conv9_Var_148));
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (Var_148));
            }
            {
              Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[134])));
            }
            Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_145, Var_146);
            Pieces_217 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_135, Var_144);
            Var_163 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
            {
              Spec_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_218, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
              MR_hl_field(MR_mktag(1), Spec_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_218, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_218, 3) = ((MR_Box) (Var_163));
              MR_hl_field(MR_mktag(1), Spec_218, 4) = ((MR_Box) (Pieces_217));
            }
            {
              STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_218));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
            }
          }
          else
          {
            MR_Word NotExistQArgTypes_57;
            MR_Word ConstraintArgTypeLists_54;
            MR_Word ConstraintArgTypes_55;
            MR_Word Var_166;
            MR_Word VarsInCtorArgTypes0_219;
            MR_Word VarsInCtorArgTypes_220;
            MR_Word _ExistQArgTypes_56;

            ConstraintArgTypeLists_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[6]), Constraints_26);
            mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstraintArgTypeLists_54, &ConstraintArgTypes_55);
            parse_tree__prog_type__type_vars_list_2_p_0(ConstraintArgTypes_55, &VarsInCtorArgTypes0_219);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes0_219, &VarsInCtorArgTypes_220);
            {
              Var_166 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[3]));
              MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_8));
              MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (ExistQVars_25));
            }
            mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Var_166, VarsInCtorArgTypes_220, &_ExistQArgTypes_56, &NotExistQArgTypes_57);
            succeeded = (NotExistQArgTypes_57 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word NotExistQArgTypeStrs_60;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_String Var_173;
              MR_Word Var_177;
              MR_Word Var_178;
              MR_Word Var_179;
              MR_Word Var_180;
              MR_String Var_181;
              MR_Word Var_205;
              MR_Word GenericVarSet_221;
              MR_Word Pieces_222;
              MR_Word Spec_223;
              MR_Box conv12_Var_173;
              MR_Box conv13_Var_181;

              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_221);
              {
                Var_167 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_9));
                MR_hl_field(MR_mktag(0), Var_167, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_167, 3) = ((MR_Box) (GenericVarSet_221));
              }
              NotExistQArgTypeStrs_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_167, NotExistQArgTypes_57);
              conv12_Var_173 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQArgTypes_57, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
              Var_173 = ((MR_String) (conv12_Var_173));
              {
                Var_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_172, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_172, 1) = ((MR_Box) (Var_173));
              }
              {
                Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Var_172));
                MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[23])));
                MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_171));
              }
              Var_178 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NotExistQArgTypeStrs_60);
              conv13_Var_181 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQArgTypeStrs_60, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
              Var_181 = ((MR_String) (conv13_Var_181));
              {
                Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (Var_181));
              }
              {
                Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
                MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[141])));
              }
              Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_178, Var_179);
              Pieces_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_168, Var_177);
              Var_205 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
              {
                Spec_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_223, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
                MR_hl_field(MR_mktag(1), Spec_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_223, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), Spec_223, 3) = ((MR_Box) (Var_205));
                MR_hl_field(MR_mktag(1), Spec_223, 4) = ((MR_Box) (Pieces_222));
              }
              {
                STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_223));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
            else
              STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_5;
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Ctors_17;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_86_86;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_supertype_vars_6_p_0(
  MR_Word Params_7,
  MR_Word VarSet_8,
  MR_Word SuperType_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word VarsInSuperType0_12;
    MR_Word VarsInSuperType_13;
    MR_Word FreeVars_14;

    parse_tree__prog_type__type_vars_2_p_0(SuperType_9, &VarsInSuperType0_12);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInSuperType0_12, &VarsInSuperType_13);
    mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInSuperType_13, Params_7, &FreeVars_14);
    if ((FreeVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    else
    {
      MR_Word GenericVarSet_17;
      MR_String FreeVarsStr_18;
      MR_Word Pieces_19;
      MR_Word Spec_20;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_String Var_27;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Box conv0_Var_27;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &GenericVarSet_17);
      FreeVarsStr_18 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_17, FreeVars_14);
      conv0_Var_27 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FreeVars_14, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
      Var_27 = ((MR_String) (conv0_Var_27));
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (FreeVarsStr_18));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[121])));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_30));
      }
      {
        Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[119])));
        MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_25));
      }
      {
        Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_supertype_vars\'/6"));
        MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_22 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeConstructors_8)
{
  {
    MR_Word HeadBodyTerm_9;
    MR_Word TailBodyTerms_10;
    MR_Word Var_11;

    parse_tree__parse_util__disjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7, &Var_11);
    HeadBodyTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
    TailBodyTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0(ModuleName_5, VarSet_6, UINT32_C(0), HeadBodyTerm_9, TailBodyTerms_10, MaybeConstructors_8);
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_39;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__386__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_39);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_39));
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  uint32_t CurOrdinal_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Word * MaybeConstructors_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
    MR_Word MaybeHeadConstructor_13;
    MR_Word VarsTerm_41;
    MR_Word SubTerm_42;
    MR_Word Var_49;
    MR_String Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;

    if (succeeded)
    {
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_10, (MR_Integer) 0))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
        succeeded = (strcmp(Var_50, (MR_String) "some") == 0);
        if (succeeded)
        {
          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarsTerm_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0))));
            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 1))));
            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 0))));
              Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 1))));
              succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ContextPieces_44;
      MR_Word MaybeExistQVars_45;

      ContextPieces_44 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[103])));
      parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_41, VarSet_8, ContextPieces_44, &MaybeExistQVars_45);
      if (((MR_tag((MR_Word) MaybeExistQVars_45)) == (MR_Integer) 0))
        MaybeHeadConstructor_13 = (MR_Word) (MaybeExistQVars_45);
      else
      {
        MR_Word ExistQVars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExistQVars_45, (MR_Integer) 0))));
        MR_Word ExistQTVars_47;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[3]), ExistQVars_46, &ExistQTVars_47);
        parse_tree__parse_type_defn__parse_constructor_6_p_0(ModuleName_7, VarSet_8, CurOrdinal_9, ExistQTVars_47, SubTerm_42, &MaybeHeadConstructor_13);
      }
    }
    else
      parse_tree__parse_type_defn__parse_constructor_6_p_0(ModuleName_7, VarSet_8, CurOrdinal_9, (MR_Word) ((MR_Unsigned) 0U), HeadTerm_10, &MaybeHeadConstructor_13);
    if ((TailTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
      if (((MR_tag((MR_Word) MaybeHeadConstructor_13)) == (MR_Integer) 0))
        *MaybeConstructors_12 = (MR_Word) (MaybeHeadConstructor_13);
      else
      {
        MR_Word HeadConstructor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadConstructor_13, (MR_Integer) 0))));
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (HeadConstructor_14));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeConstructors_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
        }
      }
    else
    {
      MR_Word HeadTailTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTerms_11, (MR_Integer) 0))));
      MR_Word TailTailTerms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailTerms_11, (MR_Integer) 1))));
      MR_Word MaybeTailConstructors_18;
      uint32_t Var_20 = (CurOrdinal_9 + UINT32_C(1));
      MR_Word TailConstructors_19;
      MR_Word HeadConstructor_28;

      parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0(ModuleName_7, VarSet_8, Var_20, HeadTailTerm_16, TailTailTerms_17, &MaybeTailConstructors_18);
      succeeded = ((MR_tag((MR_Word) MaybeHeadConstructor_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadConstructor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadConstructor_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailConstructors_18)) == (MR_Integer) 1);
        if (succeeded)
          TailConstructors_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailConstructors_18, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_22;

        Var_22 = mercury__one_or_more__cons_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), ((MR_Box) (HeadConstructor_28)), TailConstructors_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeConstructors_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
        }
      }
      else
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Specs_27;

        Var_23 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), MaybeHeadConstructor_13);
        Var_24 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[6]), MaybeTailConstructors_18);
        Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_23, Var_24);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeConstructors_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_27));
        }
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_51;

    conv0_LambdaHeadVar__2_51 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_constructor__428__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_51));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  uint32_t Ordinal_9,
  MR_Word ExistQVars_10,
  MR_Word Term_11,
  MR_Word * MaybeConstructor_12)
{
  {
    MR_bool succeeded;
    MR_Word BeforeConstraintsTerm_13;
    MR_Word MaybeConstraints_14;

    parse_tree__parse_type_defn__get_existential_constraints_from_term_5_p_0(ModuleName_7, VarSet_8, Term_11, &BeforeConstraintsTerm_13, &MaybeConstraints_14);
    if (((MR_tag((MR_Word) MaybeConstraints_14)) == (MR_Integer) 0))
      *MaybeConstructor_12 = (MR_Word) (MaybeConstraints_14);
    else
    {
      MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstraints_14, (MR_Integer) 0))));
      MR_Word MaybeMaybeExistConstraints_17;
      MR_Word MainTerm_35;
      MR_Word ContextPieces_36;
      MR_Word MaybeFunctorAndArgTerms_37;
      MR_Word Functor_39;
      MR_Word MaybeConstructorArgs_40;
      MR_Word MainTermContext_42;
      MR_Word NoArgsSpecs_45;
      MR_Word InsideBracesTerm_33;
      MR_Word Var_71;
      MR_String Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word MaybeExistConstraints_46;
      MR_Word ConstructorArgs_47;

      if ((ExistQVars_10 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((Constraints_16 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeMaybeExistConstraints_17 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[4]));
        else
        {
          MR_Word MCSpec_21;
          MR_Word Var_67;
          MR_Word Var_68;

          Var_67 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
          {
            MCSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MCSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_constructor\'/6"));
            MR_hl_field(MR_mktag(1), MCSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), MCSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), MCSpec_21, 3) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(1), MCSpec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[109])));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MCSpec_21));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeMaybeExistConstraints_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeMaybeExistConstraints_17, 0) = ((MR_Box) (Var_68));
          }
        }
      else
      {
        MR_Word ConstrainedTypeLists_27;
        MR_Word ConstrainedTypes_28;
        MR_Word ConstrainedQVars0_29;
        MR_Word UnconstrainedQVars_30;
        MR_Word ConstrainedQVars_31;
        MR_Word ExistConstraints_32;
        MR_Word Var_52;

        ConstrainedTypeLists_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[2]), Constraints_16);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstrainedTypeLists_27, &ConstrainedTypes_28);
        parse_tree__prog_type__type_vars_list_2_p_0(ConstrainedTypes_28, &ConstrainedQVars0_29);
        mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_10, ConstrainedQVars0_29, &UnconstrainedQVars_30);
        mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_10, UnconstrainedQVars_30, &ConstrainedQVars_31);
        {
          ExistConstraints_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 0) = ((MR_Box) (ExistQVars_10));
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 1) = ((MR_Box) (Constraints_16));
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 2) = ((MR_Box) (UnconstrainedQVars_30));
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 3) = ((MR_Box) (ConstrainedQVars_31));
        }
        Var_52 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_32)));
        {
          MaybeMaybeExistConstraints_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMaybeExistConstraints_17, 0) = ((MR_Box) (Var_52));
        }
      }
      succeeded = ((MR_tag((MR_Word) BeforeConstraintsTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_13, (MR_Integer) 0))));
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_72 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
          succeeded = (strcmp(Var_72, (MR_String) "{}") == 0);
          if (succeeded)
          {
            succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InsideBracesTerm_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 0))));
              Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 1))));
              succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
        MainTerm_35 = InsideBracesTerm_33;
      else
        MainTerm_35 = BeforeConstraintsTerm_13;
      ContextPieces_36 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[110]))));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, MainTerm_35, VarSet_8, ContextPieces_36, &MaybeFunctorAndArgTerms_37);
      if (((MR_tag((MR_Word) MaybeFunctorAndArgTerms_37)) == (MR_Integer) 0))
      {
        MR_Word FAASpecs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFunctorAndArgTerms_37, (MR_Integer) 0))));

        Functor_39 = (MR_Word) (&parse_tree__parse_type_defn_scalar_common_2[5]);
        {
          MaybeConstructorArgs_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeConstructorArgs_40, 0) = ((MR_Box) (FAASpecs_38));
        }
      }
      else
      {
        MR_Word ArgTerms_41;

        Functor_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_37, (MR_Integer) 0))));
        ArgTerms_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_37, (MR_Integer) 1))));
        MaybeConstructorArgs_40 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_7, VarSet_8, ArgTerms_41);
      }
      MainTermContext_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MainTerm_35);
      succeeded = ((MR_tag((MR_Word) MaybeMaybeExistConstraints_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeExistConstraints_17, (MR_Integer) 0))));
        succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeConstructorArgs_40)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstructorArgs_40, (MR_Integer) 0))));
            succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_91;
        MR_Word Var_95;

        Var_95 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MainTerm_35);
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_constructor\'/6"));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_91, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Var_91, 3) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(1), Var_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[114])));
        }
        {
          NoArgsSpecs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NoArgsSpecs_45, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(1), NoArgsSpecs_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        NoArgsSpecs_45 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = (NoArgsSpecs_45 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeMaybeExistConstraints_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          MaybeExistConstraints_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeExistConstraints_17, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeConstructorArgs_40)) == (MR_Integer) 1);
          if (succeeded)
            ConstructorArgs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstructorArgs_40, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Arity_48;
        MR_Word Ctor_49;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), ConstructorArgs_47, &Arity_48);
        {
          Ctor_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Ctor_49, 0) = ((MR_Box) (MR_Word) (Ordinal_9));
          MR_hl_field(MR_mktag(0), Ctor_49, 1) = ((MR_Box) (MaybeExistConstraints_46));
          MR_hl_field(MR_mktag(0), Ctor_49, 2) = ((MR_Box) (Functor_39));
          MR_hl_field(MR_mktag(0), Ctor_49, 3) = ((MR_Box) (ConstructorArgs_47));
          MR_hl_field(MR_mktag(0), Ctor_49, 4) = ((MR_Box) (Arity_48));
          MR_hl_field(MR_mktag(0), Ctor_49, 5) = ((MR_Box) (MainTermContext_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeConstructor_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_49));
        }
      }
      else
      {
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Specs_103;

        Var_97 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0), MaybeMaybeExistConstraints_17);
        Var_99 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[10]), MaybeConstructorArgs_40);
        Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_99, NoArgsSpecs_45);
        Specs_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_97, Var_98);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeConstructor_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_103));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(
  MR_Word ModuleName_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[7]));
    else
    {
      MR_Word Term_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Terms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word NameTerm_13;
      MR_Word TypeTerm_14;
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
          succeeded = (strcmp(Var_28, (MR_String) "::") == 0);
          if (succeeded)
          {
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
              succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ContextPieces_16;
        MR_Word MaybeSymNameAndArgs_17;

        ContextPieces_16 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[115]))));
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_1, NameTerm_13, VarSet_2, ContextPieces_16, &MaybeSymNameAndArgs_17);
        if (((MR_tag((MR_Word) MaybeSymNameAndArgs_17)) == (MR_Integer) 0))
        {
          MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSymNameAndArgs_17, (MR_Integer) 0))));

          {
            HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (Specs_18));
          }
        }
        else
        {
          MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_17, (MR_Integer) 0))));
          MR_Word SymNameArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_17, (MR_Integer) 1))));

          if ((SymNameArgs_20 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word NameCtxt_25;
            MR_Word MaybeCtorFieldName_26;
            MR_Word Var_34;
            MR_Word ContextPieces_56;
            MR_Word MaybeType_57;

            NameCtxt_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_13);
            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (SymName_19));
              MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (NameCtxt_25));
            }
            {
              MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeCtorFieldName_26, 0) = ((MR_Box) (Var_34));
            }
            ContextPieces_56 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[118]))));
            parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_2, ContextPieces_56, TypeTerm_14, &MaybeType_57);
            if (((MR_tag((MR_Word) MaybeType_57)) == (MR_Integer) 0))
              HeadVar__4_4 = (MR_Word) (MaybeType_57);
            else
            {
              MR_Word Type_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_57, (MR_Integer) 0))));
              MR_Word Context_59;
              MR_Word Arg_60;
              MR_Word MaybeTailArgs_61;

              Context_59 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeTerm_14);
              {
                Arg_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Arg_60, 0) = ((MR_Box) (MaybeCtorFieldName_26));
                MR_hl_field(MR_mktag(0), Arg_60, 1) = ((MR_Box) (Type_58));
                MR_hl_field(MR_mktag(0), Arg_60, 2) = ((MR_Box) (Context_59));
              }
              MaybeTailArgs_61 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_1, VarSet_2, Terms_11);
              if (((MR_tag((MR_Word) MaybeTailArgs_61)) == (MR_Integer) 0))
                HeadVar__4_4 = MaybeTailArgs_61;
              else
              {
                MR_Word Args_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailArgs_61, (MR_Integer) 0))));
                MR_Word Var_67;

                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Arg_60));
                  MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Args_63));
                }
                {
                  HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_67));
                }
              }
            }
          }
          else
          {
            MR_Word Spec_24;
            MR_Word Var_43;
            MR_Word Var_44;

            Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
            {
              Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.convert_constructor_arg_list\'/3"));
              MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[117])));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (Var_44));
            }
          }
        }
      }
      else
      {
        MR_Word ContextPieces_77;
        MR_Word MaybeType_78;

        ContextPieces_77 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[118]))));
        parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_2, ContextPieces_77, Term_10, &MaybeType_78);
        if (((MR_tag((MR_Word) MaybeType_78)) == (MR_Integer) 0))
          HeadVar__4_4 = (MR_Word) (MaybeType_78);
        else
        {
          MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_78, (MR_Integer) 0))));
          MR_Word Context_80;
          MR_Word Arg_81;
          MR_Word MaybeTailArgs_82;

          Context_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
          {
            Arg_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Arg_81, 1) = ((MR_Box) (Type_79));
            MR_hl_field(MR_mktag(0), Arg_81, 2) = ((MR_Box) (Context_80));
          }
          MaybeTailArgs_82 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_1, VarSet_2, Terms_11);
          if (((MR_tag((MR_Word) MaybeTailArgs_82)) == (MR_Integer) 0))
            HeadVar__4_4 = MaybeTailArgs_82;
          else
          {
            MR_Word Args_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailArgs_82, (MR_Integer) 0))));
            MR_Word Var_88;

            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Arg_81));
              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Args_84));
            }
            {
              HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_88));
            }
          }
        }
      }
    }
    return HeadVar__4_4;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__get_existential_constraints_from_term_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word STATE_VARIABLE_PredTypeTerm_0_12,
  MR_Word * STATE_VARIABLE_PredTypeTerm_13,
  MR_Word * MaybeExistentialConstraints_9)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_PredTypeTerm_0_12)) == (MR_Integer) 0);
    MR_Word ExistentialConstraints_10;
    MR_Word STATE_VARIABLE_PredTypeTerm_17_17;
    MR_Word Var_14;
    MR_String Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;

    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredTypeTerm_0_12, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PredTypeTerm_0_12, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
        succeeded = (strcmp(Var_15, (MR_String) "=>") == 0);
        if (succeeded)
        {
          succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            STATE_VARIABLE_PredTypeTerm_17_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ExistentialConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PredTypeTerm_13 = STATE_VARIABLE_PredTypeTerm_17_17;
      parse_tree__parse_class__parse_class_constraints_4_p_0(ModuleName_6, VarSet_7, ExistentialConstraints_10, MaybeExistentialConstraints_9);
    }
    else
    {
      *MaybeExistentialConstraints_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[6]));
      *STATE_VARIABLE_PredTypeTerm_13 = STATE_VARIABLE_PredTypeTerm_0_12;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word Term_4,
  MR_Word * CtorsTerm_5,
  MR_Word * MaybeWhereTerm_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0);
    MR_Word CtorsTermPrime_9;
    MR_Word WhereTerm_10;
    MR_Word Args_7;
    MR_Word Var_11;
    MR_String Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 0))));
      Args_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
        succeeded = (strcmp(Var_12, (MR_String) "where") == 0);
        if (succeeded)
        {
          succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CtorsTermPrime_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0))));
            Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1))));
            succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              WhereTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
              Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1))));
              succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *CtorsTerm_5 = CtorsTermPrime_9;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeWhereTerm_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WhereTerm_10));
      }
    }
    else
    {
      *CtorsTerm_5 = Term_4;
      *MaybeWhereTerm_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_HeadVar__3_162;

    conv3_HeadVar__3_162 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1659__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_162));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__3_156;

    conv1_HeadVar__3_156 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1643__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_156));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_150;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1634__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_150);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_150));
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeTypeCtorAndArgs_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
    {
      MR_Word MaybeSymNameArgs_18;
      MR_Word Context_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, Term_9, VarSet_8, ContextPieces_6, &MaybeSymNameArgs_18);
      if (((MR_tag((MR_Word) MaybeSymNameArgs_18)) == (MR_Integer) 0))
        *MaybeTypeCtorAndArgs_10 = (MR_Word) (MaybeSymNameArgs_18);
      else
      {
        MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameArgs_18, (MR_Integer) 0))));
        MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameArgs_18, (MR_Integer) 1))));
        MR_Word NameSpecs_22;
        MR_Word TypeInfo_147_147;
        MR_String Var_38;
        MR_Integer Var_39;
        MR_Integer Var_165;

        parse_tree__parse_type_defn__check_user_type_name_3_p_0(SymName_20, Context_141, &NameSpecs_22);
        Var_38 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_20);
        succeeded = (strcmp(Var_38, (MR_String) "=<") == 0);
        if (succeeded)
        {
          Var_39 = (MR_Integer) 2;
          TypeInfo_147_147 = (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]);
          mercury__list__length_2_p_0(TypeInfo_147_147, ArgTerms_21, &Var_165);
          succeeded = (Var_39 == Var_165);
        }
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTypeCtorAndArgs_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NameSpecs_22));
          }
        else
        {
          MR_Word ParamVars_23;
          MR_Word NonVarArgTerms_24;

          parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_116_111_95_118_97_114_95_108_105_115_116_95_97_110_100_95_110_111_110_118_97_114_115_95_95_91_49_93_95_48_3_p_0(ArgTerms_21, &ParamVars_23, &NonVarArgTerms_24);
          if ((NonVarArgTerms_24 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ParamsBag_25;
            MR_Word DupParamVars_26;

            mercury__bag__from_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ParamVars_23, &ParamsBag_25);
            mercury__bag__to_list_only_duplicates_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ParamsBag_25, &DupParamVars_26);
            if ((DupParamVars_26 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((NameSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word PrgParamVars_27;

                mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[1]), ParamVars_23, &PrgParamVars_27);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PrgParamVars_27));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NameSpecs_22));
                }
            else
            {
              MR_Word DupParamVarNames_32;
              MR_String Params_33;
              MR_String IsOrAre_34;
              MR_Word Var_66;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_73;
              MR_Word Var_76;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_95;
              MR_Word Pieces_122;
              MR_Word Spec_123;
              MR_Box conv2_Params_33;

              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (VarSet_8));
              }
              DupParamVarNames_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_66, DupParamVars_26);
              conv2_Params_33 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DupParamVars_26, ((MR_Box) ((MR_String) "the parameter")), ((MR_Box) ((MR_String) "the parameters")));
              Params_33 = ((MR_String) (conv2_Params_33));
              IsOrAre_34 = parse_tree__error_util__is_or_are_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), DupParamVars_26);
              Var_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Params_33));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[57])));
                MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[56])));
                MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
              }
              Var_83 = parse_tree__error_util__list_to_pieces_1_f_0(DupParamVarNames_32);
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (IsOrAre_34));
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[59])));
              }
              Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_83, Var_84);
              Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71, Var_82);
              Pieces_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_70);
              {
                Spec_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_123, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_defn_head\'/5"));
                MR_hl_field(MR_mktag(1), Spec_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_123, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), Spec_123, 3) = ((MR_Box) (Context_141));
                MR_hl_field(MR_mktag(1), Spec_123, 4) = ((MR_Box) (Pieces_122));
              }
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Spec_123));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (NameSpecs_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeTypeCtorAndArgs_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_95));
              }
            }
          }
          else
          {
            MR_Word NonVarArgTermStrs_37;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_65;
            MR_Word Pieces_128;
            MR_Word Spec_129;
            MR_String IsOrAre_130;

            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3));
              MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (VarSet_8));
            }
            NonVarArgTermStrs_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, NonVarArgTerms_24);
            IsOrAre_130 = parse_tree__error_util__is_or_are_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonVarArgTermStrs_37);
            Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
            Var_53 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NonVarArgTermStrs_37);
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (IsOrAre_130));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[65])));
            }
            Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_53, Var_54);
            Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[63])), Var_52);
            Pieces_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, Var_42);
            {
              Spec_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_129, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_defn_head\'/5"));
              MR_hl_field(MR_mktag(1), Spec_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_129, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_129, 3) = ((MR_Box) (Context_141));
              MR_hl_field(MR_mktag(1), Spec_129, 4) = ((MR_Box) (Pieces_128));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_129));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (NameSpecs_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_9, (MR_Integer) 1))));
      MR_String TermStr_13;
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_100;
      MR_Word Var_103;
      MR_Word Var_106;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_120;

      TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      Var_97 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (TermStr_13));
      }
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[68])));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
      }
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[67])));
        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_106));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[66])));
        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_103));
      }
      {
        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
      }
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_97, Var_98);
      {
        Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_defn_head\'/5"));
        MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_14));
      }
      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTypeCtorAndArgs_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_120));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_116_111_95_118_97_114_95_108_105_115_116_95_97_110_100_95_110_111_110_118_97_114_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Term_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Terms_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailVars_8;
    MR_Word TailNonVars_9;

    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_116_111_95_118_97_114_95_108_105_115_116_95_97_110_100_95_110_111_110_118_97_114_115_95_95_91_49_93_95_48_3_p_0(Terms_5, &TailVars_8, &TailNonVars_9);
    if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
    {
      *HeadVar__2_2 = TailVars_8;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_4));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailNonVars_9));
      }
    }
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_4, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVars_8));
      }
      *HeadVar__3_3 = TailNonVars_9;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6)
{
  {
    MR_bool succeeded;
    MR_String Name_7;

    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
    succeeded = (strcmp(Name_7, (MR_String) "=") == 0);
    if (succeeded)
    {
      MR_Word NameSpec_9;

      {
        NameSpec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NameSpec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_user_type_name\'/3"));
        MR_hl_field(MR_mktag(1), NameSpec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), NameSpec_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), NameSpec_9, 3) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(1), NameSpec_9, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[234])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *NameSpecs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameSpec_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      succeeded = parse_tree__parse_type_name__is_known_type_name_1_p_0(Name_7);
      if (succeeded)
      {
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word NamePieces_51;
        MR_Word NameSpec_52;

        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (Name_7));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[237])));
        }
        {
          NamePieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NamePieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[235])));
          MR_hl_field(MR_mktag(1), NamePieces_51, 1) = ((MR_Box) (Var_39));
        }
        {
          NameSpec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NameSpec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_user_type_name\'/3"));
          MR_hl_field(MR_mktag(1), NameSpec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), NameSpec_52, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), NameSpec_52, 3) = ((MR_Box) (Context_5));
          MR_hl_field(MR_mktag(1), NameSpec_52, 4) = ((MR_Box) (NamePieces_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *NameSpecs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameSpec_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        *NameSpecs_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

void mercury__parse_tree__parse_type_defn__init(void)
{
}

void mercury__parse_tree__parse_type_defn__init_type_tables(void)
{
}

void mercury__parse_tree__parse_type_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_type_defn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_type_defn.
