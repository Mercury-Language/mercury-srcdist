/*
** Automatically generated from `parse_type_defn.m'
** by the Mercury compiler,
** version DEV
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0;

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1580__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_55);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__609__1_2_f_0(
  MR_Word GenericVarSet_236,
  MR_Word HeadVar__2_303);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__603__1_2_p_0(
  MR_Word ExistQVars_25,
  MR_Word HeadVar__2_297);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__581__1_2_f_0(
  MR_Word GenericVarSet_231,
  MR_Word HeadVar__2_287);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__574__1_2_p_0(
  MR_Word HeadVar__1_132,
  MR_Word HeadVar__2_281);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__570__1_1_f_0(
  MR_Word LambdaHeadVar__1_129);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__555__1_2_f_0(
  MR_Word GenericVarSet_224,
  MR_Word HeadVar__2_274);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__524__1_2_p_0(
  MR_Word ExistQVarsParams_34,
  MR_Word HeadVar__2_263);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__520__1_1_f_0(
  MR_Word LambdaHeadVar__1_64);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_constructor__345__1_2_p_0(
  MR_Word LambdaHeadVar__1_51,
  MR_Word * LambdaHeadVar__2_52);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__302__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__190__1_2_p_0(
  MR_Word SolverTypeDetails_30,
  MR_Word HeadVar__2_76);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1513__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_163);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1498__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_157);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1489__1_2_p_0(
  MR_Word HeadVar__1_151,
  MR_Word * HeadVar__2_152);

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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_48_56_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_121,
  MR_Word Var_122,
  MR_String HeadVar__1_32,
  MR_Word HeadVar__3_106);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_49_50_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_121,
  MR_Word Var_122,
  MR_String HeadVar__1_36,
  MR_Word HeadVar__3_112);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word MaybeSolverTypeDetails_12,
  MR_Word MaybeCanonical_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word HeadTerm_10,
  MR_Word BodyTerm_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
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
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0(
  MR_Word IsSolverType_6,
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word Term0_9,
  MR_Word * MaybeWhereDetails_10);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_50_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_127,
  MR_String HeadVar__1_35,
  MR_Word HeadVar__3_85);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_53,
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_127,
  MR_Word Var_128,
  MR_String HeadVar__1_39,
  MR_Word HeadVar__3_91);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_127,
  MR_Word Var_128,
  MR_String HeadVar__1_43,
  MR_Word HeadVar__3_97);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_53,
  MR_Word Var_54,
  MR_String Name_5,
  MR_Word Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_49_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_47,
  MR_Word HeadVar__3_102);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_Word Var_53,
  MR_String Name_5,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_3_f_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeItemMutableInfo_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_52_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_51,
  MR_Word HeadVar__3_108);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_55_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_55,
  MR_Word HeadVar__3_114);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_Word Var_53,
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_55_51_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_59,
  MR_Word HeadVar__3_119);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_Word Var_53,
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

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word MaybeCtorFieldName_9,
  MR_Word TypeTerm_10,
  MR_Word Terms_11);

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


static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[225][2];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[5][5];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[3][6];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[35][1];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[2][7];




static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[225][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[10]))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by a type definition."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "keyword"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be the definition of a type."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "comparison is <<comparison pred name>>"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "equality is <<equality pred name>>"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attributes have the form"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Recognized"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "duplicated."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables, but"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a solver type"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in first argument of"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "there should be no constraints on them."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "existentially quantified arguments,"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since there are no"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "no constraints on them."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or otherwise), there should be"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "arguments, (existentially quantified"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[77])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in right hand side of type definition."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(explicit type quantifier shadows argument type)."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "overlapping scopes"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in arguments or constraints of constructor."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be explicitly existentially quantified"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "=>"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "introduced with"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not 1."))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol whose arity"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with existentially quantified type variables."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to be equivalent to another type."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a solver type cannot be defined"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type definitions"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a positive integer."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute for abstract non-solver type."))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "solver type definition:"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[130]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "On the left hand side of"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Solver type with no solver_type_details."))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or contain an unrecognised attribute."))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: attributes are either badly ordered"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a ground, unconstrained inst."))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: malformed functors list in"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[115])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for non-solver type."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type attribute given"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type definitions cannot have"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[114])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: solver type definitions must have a"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[153])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "only in the right hand side of this type definition."))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type name"))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type parameters must be unique, but"))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a type constructor"))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and zero or more type variables as arguments,"))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 179 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 180 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 181 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 182 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 184 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in existential quantifier"))
  },
  /* row 186 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in class constraints,"))
  },
  /* row 187 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 189 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 190 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 191 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 192 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 193 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 194 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 195 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 196 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[14])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 197 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration, got"))
  },
  /* row 199 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration"))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or a list of mutable declarations, got"))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the ground inst of a solver type"))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the any inst of a solver type"))
  },
  /* row 203 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[23])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 204 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[24])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "On the left hand side of type definition:"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[205]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 207 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[25])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 209 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[27])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 210 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[28])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 211 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[29])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 212 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[30])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 213 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[31])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 215 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration: error: unrecognized"))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[219]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[47])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_defn_scalar_common_1[221]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 223 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected functor name/arity for"))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[5][5] = {
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

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_constructor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[3][6] = {
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

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[35][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[80])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[71])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[78])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[104])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[167])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[151])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[156])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[160])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[147])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[143])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[139])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[59])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[112])))
  },
  /* row 26 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[129])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[135])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[119])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[33])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[23])))
  },
  /* row 32 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_5[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[33])))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
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
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1580__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_55)
{
  {
    MR_String HeadVar__3_56;

    HeadVar__3_56 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_6, HeadVar__2_55);
    return HeadVar__3_56;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__609__1_2_f_0(
  MR_Word GenericVarSet_236,
  MR_Word HeadVar__2_303)
{
  {
    MR_String HeadVar__3_304;

    HeadVar__3_304 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_236, HeadVar__2_303);
    return HeadVar__3_304;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__603__1_2_p_0(
  MR_Word ExistQVars_25,
  MR_Word HeadVar__2_297)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQVars_25, ((MR_Box) (HeadVar__2_297)));
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__581__1_2_f_0(
  MR_Word GenericVarSet_231,
  MR_Word HeadVar__2_287)
{
  {
    MR_String HeadVar__3_288;

    HeadVar__3_288 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_231, HeadVar__2_287);
    return HeadVar__3_288;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__574__1_2_p_0(
  MR_Word HeadVar__1_132,
  MR_Word HeadVar__2_281)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), HeadVar__1_132, ((MR_Box) (HeadVar__2_281)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__570__1_1_f_0(
  MR_Word LambdaHeadVar__1_129)
{
  {
    MR_Word LambdaHeadVar__2_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_129, (MR_Integer) 1))));

    return LambdaHeadVar__2_130;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__555__1_2_f_0(
  MR_Word GenericVarSet_224,
  MR_Word HeadVar__2_274)
{
  {
    MR_String HeadVar__3_275;

    HeadVar__3_275 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_224, HeadVar__2_274);
    return HeadVar__3_275;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__524__1_2_p_0(
  MR_Word ExistQVarsParams_34,
  MR_Word HeadVar__2_263)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQVarsParams_34, ((MR_Box) (HeadVar__2_263)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__520__1_1_f_0(
  MR_Word LambdaHeadVar__1_64)
{
  {
    MR_Word LambdaHeadVar__2_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_64, (MR_Integer) 1))));

    return LambdaHeadVar__2_65;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_constructor__345__1_2_p_0(
  MR_Word LambdaHeadVar__1_51,
  MR_Word * LambdaHeadVar__2_52)
{
  *LambdaHeadVar__2_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_51, (MR_Integer) 1))));
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__302__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word * HeadVar__2_39)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_38, HeadVar__2_39);
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__190__1_2_p_0(
  MR_Word SolverTypeDetails_30,
  MR_Word HeadVar__2_76)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[4]), ((MR_Box) (SolverTypeDetails_30)), ((MR_Box) (HeadVar__2_76)));
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1513__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_163)
{
  {
    MR_String HeadVar__3_164;

    HeadVar__3_164 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, HeadVar__2_163);
    return HeadVar__3_164;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1498__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_157)
{
  {
    MR_String HeadVar__3_158;

    HeadVar__3_158 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, HeadVar__2_157);
    return HeadVar__3_158;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1489__1_2_p_0(
  MR_Word HeadVar__1_151,
  MR_Word * HeadVar__2_152)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_151, HeadVar__2_152);
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

    succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_5, Term_7, &Name_9, &Arity_10);
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
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_40;

      TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (TermStr_11));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[224])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[189])));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[223])));
        MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_17));
      }
      Var_35 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Pieces_12));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_33));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFunctor_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
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
      MaybeWhereEnd_13 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[11]));
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
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_91;

      EndTermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, EndTerm_14);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (EndTermStr_15));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[220])));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[218])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[216])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[215])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[214])));
        MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_40));
      }
      Var_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), EndTerm_14);
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_16));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[222])));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        EndSpec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EndSpec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), EndSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), EndSpec_18, 2) = ((MR_Box) (Var_81));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (EndSpec_18));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeWhereEnd_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeWhereEnd_13, 0) = ((MR_Box) (Var_91));
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
          *MaybeMaybeCanonical_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[34]));
        else
        {
          MR_Word Spec_24;
          MR_Word Var_97;

          Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(Term0_7);
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMaybeCanonical_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
          }
        }
      }
    else
    {
      MR_Word Specs_26;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;

      Var_99 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeEqualityIs_11);
      Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeComparisonIs_12);
      Var_102 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeWhereEnd_13);
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_101, Var_102);
      Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_99, Var_100);
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[17]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_48_56_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_48_56_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_48_56_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_121,
  MR_Word Var_122,
  MR_String HeadVar__1_32,
  MR_Word HeadVar__3_106)
{
  {
    MR_Word HeadVar__4_107;

    HeadVar__4_107 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_121, Var_122, HeadVar__1_32, HeadVar__3_106);
    return HeadVar__4_107;
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[17]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_49_50_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_49_50_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_49_48_49_50_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_121,
  MR_Word Var_122,
  MR_String HeadVar__1_36,
  MR_Word HeadVar__3_112)
{
  {
    MR_Word HeadVar__4_113;

    HeadVar__4_113 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_121, Var_122, HeadVar__1_36, HeadVar__3_112);
    return HeadVar__4_113;
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubArgTerms_14;
    MR_Word SubContext_15;
    MR_Word ArgTerm_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_String Var_20;

    if (succeeded)
    {
      ArgTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ArgTerm_13)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 0))));
          SubArgTerms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 1))));
          SubContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
            succeeded = (strcmp(Var_20, (MR_String) "type") == 0);
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(ModuleName_7, VarSet_8, SubArgTerms_14, SubContext_15, SeqNum_11, (MR_Integer) 1, MaybeIOM_12);
    else
    {
      MR_Word Spec_17;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[213])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_38));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Integer SeqNum_12,
  MR_Word IsSolverType_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_bool succeeded = (ArgTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeDefnTerm_15;
    MR_Word Var_23;

    if (succeeded)
    {
      TypeDefnTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
      succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_String Name_16;
      MR_Word HeadTerm_19;
      MR_Word BodyTerm_20;
      MR_Word TypeDefnArgTerms_17;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;

      succeeded = ((MR_tag((MR_Word) TypeDefnTerm_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnTerm_15, (MR_Integer) 0))));
        TypeDefnArgTerms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnTerm_15, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
        if (succeeded)
        {
          Name_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
          if ((strcmp(Name_16, (MR_String) "==") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Name_16, (MR_String) "--->") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Name_16, (MR_String) "where") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            succeeded = (TypeDefnArgTerms_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnArgTerms_17, (MR_Integer) 0))));
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnArgTerms_17, (MR_Integer) 1))));
              succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BodyTerm_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
                Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
                succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
        if ((strcmp(Name_16, (MR_String) "==") == 0))
          parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(ModuleName_8, VarSet_9, HeadTerm_19, BodyTerm_20, Context_11, SeqNum_12, IsSolverType_13, MaybeIOM_14);
        else
        if ((strcmp(Name_16, (MR_String) "--->") == 0))
          parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(ModuleName_8, VarSet_9, HeadTerm_19, BodyTerm_20, Context_11, SeqNum_12, IsSolverType_13, MaybeIOM_14);
        else
          parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(ModuleName_8, VarSet_9, HeadTerm_19, BodyTerm_20, Context_11, SeqNum_12, IsSolverType_13, MaybeIOM_14);
      else
      {
        MR_Word ContextPieces_61;
        MR_Word MaybeTypeCtorAndArgs_62;

        ContextPieces_61 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[206])));
        parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_61, ModuleName_8, VarSet_9, TypeDefnTerm_15, &MaybeTypeCtorAndArgs_62);
        if (((MR_tag((MR_Word) MaybeTypeCtorAndArgs_62)) == (MR_Integer) 0))
        {
          MR_Word Specs_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTypeCtorAndArgs_62, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_63));
          }
        }
        else
        {
          MR_Word Name_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_62, (MR_Integer) 0))));
          MR_Word Params_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_62, (MR_Integer) 1))));
          MR_Word TypeVarSet_66;
          MR_Word AbstractTypeDetails_67;
          MR_Word TypeDefn_68;
          MR_Word ItemTypeDefn_69;
          MR_Word Item_70;
          MR_Word Var_75;

          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TypeVarSet_66);
          switch (IsSolverType_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              AbstractTypeDetails_67 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              AbstractTypeDetails_67 = (MR_Word) ((MR_Unsigned) 12U);
              break;
          }
          {
            TypeDefn_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TypeDefn_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), TypeDefn_68, 1) = ((MR_Box) (AbstractTypeDetails_67));
          }
          {
            ItemTypeDefn_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemTypeDefn_69, 0) = ((MR_Box) (Name_64));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_69, 1) = ((MR_Box) (Params_65));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_69, 2) = ((MR_Box) (TypeDefn_68));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_69, 3) = ((MR_Box) (TypeVarSet_66));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_69, 4) = ((MR_Box) (Context_11));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_69, 5) = ((MR_Box) (SeqNum_12));
          }
          Item_70 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_69)));
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Item_70));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_75));
          }
        }
      }
    }
    else
    {
      MR_Word Spec_22;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_52;

      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[212])));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_46));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16)
{
  switch (IsSolverType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__parse_type_defn__parse_where_type_is_abstract_7_p_0(ModuleName_9, VarSet_10, HeadTerm_11, BodyTerm_12, Context_13, SeqNum_14, MaybeIOM_16);
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeWhere_17;

        parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 1, ModuleName_9, VarSet_10, BodyTerm_12, &MaybeWhere_17);
        if (((MR_tag((MR_Word) MaybeWhere_17)) == (MR_Integer) 0))
        {
          MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeWhere_17, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_18));
          }
        }
        else
        {
          MR_Word MaybeSolverTypeDetails_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_17, (MR_Integer) 0))));
          MR_Word MaybeCanonical_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_17, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_17, (MR_Integer) 2))));

          if ((MaybeDirectArgCtors_21 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(ModuleName_9, VarSet_10, HeadTerm_11, MaybeSolverTypeDetails_19, MaybeCanonical_20, Context_13, SeqNum_14, MaybeIOM_16);
          else
          {
            MR_Word Spec_24;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_49;

            Var_44 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[211])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_42));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
            }
          }
        }
      }
      break;
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
  MR_Integer SeqNum_15,
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

    ContextPieces_17 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[133])));
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_18);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_17, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameParams_19);
    if ((MaybeSolverTypeDetails_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SolverSpec_23;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;

      Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[210])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        SolverSpec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SolverSpec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), SolverSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), SolverSpec_23, 2) = ((MR_Box) (Var_51));
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
      MR_Word Var_59;

      {
        DetailsSolver_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DetailsSolver_33, 0) = ((MR_Box) (SolverTypeDetails_31));
        MR_hl_field(MR_mktag(0), DetailsSolver_33, 1) = ((MR_Box) (MaybeCanonical_13));
      }
      TypeDefn_32 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSolver_33)));
      {
        ItemTypeDefn_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 0) = ((MR_Box) (SymName_29));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 1) = ((MR_Box) (ParamTVars_30));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 2) = ((MR_Box) (TypeDefn_32));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 3) = ((MR_Box) (TVarSet_18));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 4) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_34, 5) = ((MR_Box) (SeqNum_15));
      }
      Item_35 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_34)));
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Item_35));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
      }
    }
    else
    {
      MR_Word Specs_36;
      MR_Word Var_60;
      MR_Word Var_61;

      Var_61 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameParams_19);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_61, FreeSpecs_28);
      Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SolverSpecs_21, Var_60);
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
  MR_Integer SeqNum_13,
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
    MR_Word Var_37;
    MR_Word Name_27;
    MR_Word Params_28;
    MR_Word TypeDefn_29;

    ContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[206])));
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TypeVarSet_16);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_15, ModuleName_8, VarSet_9, HeadTerm_10, &MaybeNameParams_17);
    succeeded = ((MR_tag((MR_Word) BodyTerm_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 0))));
      Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
      if (succeeded)
      {
        AttrName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
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
      MR_Word Var_38;

      succeeded = (Args_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_19, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_19, (MR_Integer) 1))));
        succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Integer NumBits_22;

        succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Arg_21, &NumBits_22);
        if (succeeded)
        {
          MR_Word TypeDefn0_23;
          MR_Word Var_39;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (NumBits_22));
          }
          {
            TypeDefn0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TypeDefn0_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), TypeDefn0_23, 1) = ((MR_Box) (Var_39));
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
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_58;

          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (AttrName_18));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[121])));
          }
          {
            Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[208])));
            MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_42));
          }
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Pieces_25));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_52));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_58));
          }
        }
      }
      else
      {
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Pieces_104;
        MR_Word Spec_105;

        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (AttrName_18));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[123])));
        }
        {
          Pieces_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
          MR_hl_field(MR_mktag(1), Pieces_104, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Pieces_104));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_105 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_105, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_105, 2) = ((MR_Box) (Var_72));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Spec_105));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_78));
        }
      }
    }
    else
    {
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_99;
      MR_Word Spec_107;

      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[209])));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_107 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_107, 2) = ((MR_Box) (Var_93));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Spec_107));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeTypeDefn_24, 0) = ((MR_Box) (Var_99));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeNameParams_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      Name_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameParams_17, (MR_Integer) 0))));
      Params_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameParams_17, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeTypeDefn_24)) == (MR_Integer) 1);
      if (succeeded)
        TypeDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_24, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ItemTypeDefn_30;
      MR_Word Item_31;
      MR_Word Var_101;

      {
        ItemTypeDefn_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 0) = ((MR_Box) (Name_27));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 1) = ((MR_Box) (Params_28));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 2) = ((MR_Box) (TypeDefn_29));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 3) = ((MR_Box) (TypeVarSet_16));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 4) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 5) = ((MR_Box) (SeqNum_13));
      }
      Item_31 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_30)));
      {
        Var_101 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (Item_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_101));
      }
    }
    else
    {
      MR_Word Specs_32;
      MR_Word Var_102;
      MR_Word Var_103;

      Var_102 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameParams_17);
      Var_103 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0), MaybeTypeDefn_24);
      Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_102, Var_103);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_32));
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
  MR_Integer SeqNum_14,
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
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;

          Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[207])));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SolverSpec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverSpec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), SolverSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), SolverSpec_19, 2) = ((MR_Box) (Var_46));
          }
          {
            SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpecs_17, 0) = ((MR_Box) (SolverSpec_19));
            MR_hl_field(MR_mktag(1), SolverSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    HeadContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[206])));
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(HeadContextPieces_20, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameAndParams_21);
    BodyContextPieces_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[26])), VarSet_10, BodyContextPieces_22, BodyTerm_12, &MaybeType_23);
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
      MR_Word Var_60;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_27);
      Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_12);
      parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(TVarSet_27, ParamTVars_25, Type_26, Var_60, &FreeSpecs_28);
      if ((FreeSpecs_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeDefn_29;
        MR_Word DetailsEqv_30 = (MR_Word) (Type_26);
        MR_Word ItemTypeDefn_31;
        MR_Word Item_32;
        MR_Word Var_61;

        {
          TypeDefn_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), TypeDefn_29, 0) = ((MR_Box) (DetailsEqv_30));
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
        Item_32 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_31)));
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Item_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_61));
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
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;

      Var_63 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameAndParams_21);
      Var_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeType_23);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_63, Var_64);
      Specs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SolverSpecs_17, Var_62);
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
    MR_String conv0_HeadVar__3_56;

    conv0_HeadVar__3_56 = parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1580__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_56));
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
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ParamTVars_7, &ParamTVarSet_12);
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), BodyTVars_11, &BodyTVarSet_13);
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), BodyTVarSet_13, ParamTVarSet_12, &OnlyBodyTVarSet_14);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), OnlyBodyTVarSet_14, &OnlyBodyTVars_15);
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
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Box conv1_VarWord_19;
      MR_Box conv2_OccurWord_20;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TVarSet_6));
      }
      OnlyBodyTVarNames_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, OnlyBodyTVars_15);
      conv1_VarWord_19 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OnlyBodyTVars_15, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
      VarWord_19 = ((MR_String) (conv1_VarWord_19));
      conv2_OccurWord_20 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OnlyBodyTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
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
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
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
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[171])));
      }
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, Var_36);
      Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, Var_34);
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_21));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (BodyContext_9));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_46));
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
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__190__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Integer SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;
    MR_Word SolverSpecs_19;
    MR_Word ContextPieces_20;
    MR_Word MaybeTypeCtorAndArgs_21;
    MR_Word CtorsTerm_22;
    MR_Word MaybeWhereTerm_23;
    MR_Word MaybeOneOrMoreCtors_24;
    MR_Word MaybeWhere_25;
    MR_Word Name_27;
    MR_Word Params_28;
    MR_Word OneOrMoreCtors_29;
    MR_Word SolverTypeDetails_30;
    MR_Word MaybeCanonical_31;
    MR_Word MaybeDirectArgIs_32;

    switch (IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SolverSpecs_19 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word SolverSpec_18;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;

          Var_59 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[204])));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SolverSpec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverSpec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), SolverSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), SolverSpec_18, 2) = ((MR_Box) (Var_57));
          }
          {
            SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpecs_19, 0) = ((MR_Box) (SolverSpec_18));
            MR_hl_field(MR_mktag(1), SolverSpecs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[206])));
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_20, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeTypeCtorAndArgs_21);
    parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(BodyTerm_12, &CtorsTerm_22, &MaybeWhereTerm_23);
    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(ModuleName_9, VarSet_10, CtorsTerm_22, &MaybeOneOrMoreCtors_24);
    if ((MaybeWhereTerm_23 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeWhere_25 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_3[6]));
    else
    {
      MR_Word WhereTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhereTerm_23, (MR_Integer) 0))));

      parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 0, ModuleName_9, VarSet_10, WhereTerm_26, &MaybeWhere_25);
    }
    succeeded = (SolverSpecs_19 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeTypeCtorAndArgs_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        Name_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_21, (MR_Integer) 0))));
        Params_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_21, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeOneOrMoreCtors_24)) == (MR_Integer) 1);
        if (succeeded)
        {
          OneOrMoreCtors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOneOrMoreCtors_24, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeWhere_25)) == (MR_Integer) 1);
          if (succeeded)
          {
            SolverTypeDetails_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_25, (MR_Integer) 0))));
            MaybeCanonical_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_25, (MR_Integer) 1))));
            MaybeDirectArgIs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWhere_25, (MR_Integer) 2))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadCtor_33;
      MR_Word TailCtors_34;
      MR_Word Ctors_35;
      MR_Word CtorsSpecs_36;
      MR_Word ErrorSpecs_38;
      MR_Word Var_73;

      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[4]));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (SolverTypeDetails_30));
        MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8", (MR_String) "discriminated union type has solver type details");
      HeadCtor_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMoreCtors_29, (MR_Integer) 0))));
      TailCtors_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneOrMoreCtors_29, (MR_Integer) 1))));
      {
        Ctors_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Ctors_35, 0) = ((MR_Box) (HeadCtor_33));
        MR_hl_field(MR_mktag(1), Ctors_35, 1) = ((MR_Box) (TailCtors_34));
      }
      parse_tree__parse_type_defn__process_du_ctors_6_p_0(Params_28, VarSet_10, BodyTerm_12, Ctors_35, (MR_Word) ((MR_Unsigned) 0U), &CtorsSpecs_36);
      if ((MaybeDirectArgIs_32 == (MR_Word) ((MR_Unsigned) 0U)))
        ErrorSpecs_38 = CtorsSpecs_36;
      else
      {
        MR_Word DirectArgCtors_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgIs_32, (MR_Integer) 0))));

        parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(Ctors_35, DirectArgCtors_37, BodyTerm_12, CtorsSpecs_36, &ErrorSpecs_38);
      }
      if ((ErrorSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeVarSet_39;
        MR_Word DetailsDu_40;
        MR_Word TypeDefn_41;
        MR_Word ItemTypeDefn_42;
        MR_Word Item_43;
        MR_Word Var_78;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TypeVarSet_39);
        {
          DetailsDu_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsDu_40, 0) = ((MR_Box) (OneOrMoreCtors_29));
          MR_hl_field(MR_mktag(0), DetailsDu_40, 1) = ((MR_Box) (MaybeCanonical_31));
          MR_hl_field(MR_mktag(0), DetailsDu_40, 2) = ((MR_Box) (MaybeDirectArgIs_32));
        }
        TypeDefn_41 = (MR_Word) ((MR_Word) (DetailsDu_40));
        {
          ItemTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_42, 0) = ((MR_Box) (Name_27));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_42, 1) = ((MR_Box) (Params_28));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_42, 2) = ((MR_Box) (TypeDefn_41));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_42, 3) = ((MR_Box) (TypeVarSet_39));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_42, 4) = ((MR_Box) (Context_13));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_42, 5) = ((MR_Box) (SeqNum_14));
        }
        Item_43 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_42)));
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Item_43));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_78));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ErrorSpecs_38));
        }
    }
    else
    {
      MR_Word Specs_46;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;

      Var_80 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeTypeCtorAndArgs_21);
      Var_82 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[6]), MaybeOneOrMoreCtors_24);
      Var_83 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_canonical_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[8]), MaybeWhere_25);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_82, Var_83);
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_80, Var_81);
      Specs_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SolverSpecs_19, Var_79);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_46));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0(
  MR_Word IsSolverType_6,
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word Term0_9,
  MR_Word * MaybeWhereDetails_10)
{
  {
    MR_Word GroundContextPieces_11;
    MR_Word AnyContextPieces_12;
    MR_Word MaybeTypeIsAbstractNoncanonical_14;
    MR_Word MaybeRepresentationIs_15;
    MR_Word MaybeGroundIs_16;
    MR_Word MaybeAnyIs_17;
    MR_Word MaybeCStoreIs_18;
    MR_Word MaybeEqualityIs_19;
    MR_Word MaybeComparisonIs_20;
    MR_Word MaybeDirectArgIs_21;
    MR_Word MaybeEndSpec_22;
    MR_Word STATE_VARIABLE_MaybeTerm_30_30;
    MR_Word STATE_VARIABLE_MaybeTerm_32_32;
    MR_Word STATE_VARIABLE_MaybeTerm_34_34;
    MR_Word STATE_VARIABLE_MaybeTerm_38_38;
    MR_Word STATE_VARIABLE_MaybeTerm_42_42;
    MR_Word STATE_VARIABLE_MaybeTerm_46_46;
    MR_Word STATE_VARIABLE_MaybeTerm_50_50;
    MR_Word STATE_VARIABLE_MaybeTerm_54_54;
    MR_Word STATE_VARIABLE_MaybeTerm_58_58;

    GroundContextPieces_11 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[201]))));
    AnyContextPieces_12 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[202]))));
    {
      STATE_VARIABLE_MaybeTerm_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_30_30, 0) = ((MR_Box) (Term0_9));
    }
    parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&MaybeTypeIsAbstractNoncanonical_14, STATE_VARIABLE_MaybeTerm_30_30, &STATE_VARIABLE_MaybeTerm_32_32);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", VarSet_8, &MaybeRepresentationIs_15, STATE_VARIABLE_MaybeTerm_32_32, &STATE_VARIABLE_MaybeTerm_34_34);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "ground", VarSet_8, GroundContextPieces_11, &MaybeGroundIs_16, STATE_VARIABLE_MaybeTerm_34_34, &STATE_VARIABLE_MaybeTerm_38_38);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "any", VarSet_8, AnyContextPieces_12, &MaybeAnyIs_17, STATE_VARIABLE_MaybeTerm_38_38, &STATE_VARIABLE_MaybeTerm_42_42);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "constraint_store", ModuleName_7, VarSet_8, &MaybeCStoreIs_18, STATE_VARIABLE_MaybeTerm_42_42, &STATE_VARIABLE_MaybeTerm_46_46);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", ModuleName_7, VarSet_8, &MaybeEqualityIs_19, STATE_VARIABLE_MaybeTerm_46_46, &STATE_VARIABLE_MaybeTerm_50_50);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", ModuleName_7, VarSet_8, &MaybeComparisonIs_20, STATE_VARIABLE_MaybeTerm_50_50, &STATE_VARIABLE_MaybeTerm_54_54);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", ModuleName_7, VarSet_8, &MaybeDirectArgIs_21, STATE_VARIABLE_MaybeTerm_54_54, &STATE_VARIABLE_MaybeTerm_58_58);
    if ((STATE_VARIABLE_MaybeTerm_58_58 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeEndSpec_22 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[11]));
    else
    {
      MR_Word EndTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_58_58, (MR_Integer) 0))));
      MR_Word EndSpec_25;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_78;

      Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), EndTerm_23);
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[203])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        EndSpec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EndSpec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), EndSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), EndSpec_25, 2) = ((MR_Box) (Var_71));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (EndSpec_25));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeEndSpec_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeEndSpec_22, 0) = ((MR_Box) (Var_78));
      }
    }
    *MaybeWhereDetails_10 = parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(IsSolverType_6, MaybeTypeIsAbstractNoncanonical_14, MaybeRepresentationIs_15, MaybeGroundIs_16, MaybeAnyIs_17, MaybeCStoreIs_18, MaybeEqualityIs_19, MaybeComparisonIs_20, MaybeDirectArgIs_21, MaybeEndSpec_22, Term0_9);
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[22]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_50_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_50_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_29, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_50_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_127,
  MR_String HeadVar__1_35,
  MR_Word HeadVar__3_85)
{
  {
    MR_Word HeadVar__4_86;

    HeadVar__4_86 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_127, HeadVar__1_35, HeadVar__3_85);
    return HeadVar__4_86;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word Var_53,
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
      MR_String Var_51;

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
            Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;
        MR_Word ContextPieces_58;

        ContextPieces_58 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
        parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[21])), Var_53, ContextPieces_58, RHS_10, &RHSResult_13);
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
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[22]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[197])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_47));
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_53_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_127,
  MR_Word Var_128,
  MR_String HeadVar__1_39,
  MR_Word HeadVar__3_91)
{
  {
    MR_Word HeadVar__4_92;

    HeadVar__4_92 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_127, Var_128, HeadVar__1_39, HeadVar__3_91);
    return HeadVar__4_92;
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_53_56_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_127,
  MR_Word Var_128,
  MR_String HeadVar__1_43,
  MR_Word HeadVar__3_97)
{
  {
    MR_Word HeadVar__4_98;

    HeadVar__4_98 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_127, Var_128, HeadVar__1_43, HeadVar__3_97);
    return HeadVar__4_98;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word Var_53,
  MR_Word Var_54,
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
      MR_String Var_51;

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
            Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(Var_53, Var_54, RHS_10);
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
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[197])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_47));
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

    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[19])), VarSet_7, ContextPieces_8, Term_9, &MaybeInst0_11);
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
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_42;

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
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[145])));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
        }
        Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, Var_20);
        Var_37 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Pieces_15));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_35));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeInst_10, 0) = ((MR_Box) (Var_42));
        }
      }
      else
        MaybeInst_10 = MaybeInst0_11;
    }
    return MaybeInst_10;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_53_93_95_48_4_p_0(
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[18]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_49_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_49_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_49_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_47,
  MR_Word HeadVar__3_102)
{
  {
    MR_Word HeadVar__4_103;

    HeadVar__4_103 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_52_93_95_48_3_f_0(Var_126, Var_127, HeadVar__1_47, HeadVar__3_102);
    return HeadVar__4_103;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_Word Var_53,
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
      MR_String Var_51;

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
            Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__parse_where_mutable_is_3_f_0(Var_52, Var_53, RHS_10);
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
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[18]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[197])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_47));
      }
    }
    return Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeItemMutableInfo_8;

    parse_tree__parse_type_defn__parse_mutable_decl_term_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeItemMutableInfo_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeItemMutableInfo_8));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_3_f_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word MaybeItems_8;
    MR_Word Var_18;
    MR_String Var_19;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
        succeeded = (strcmp(Var_19, (MR_String) "mutable") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word MaybeItem_11;

      parse_tree__parse_type_defn__parse_mutable_decl_term_4_p_0(ModuleName_5, VarSet_6, Term_7, &MaybeItem_11);
      if (((MR_tag((MR_Word) MaybeItem_11)) == (MR_Integer) 0))
        MaybeItems_8 = (MR_Word) (MaybeItem_11);
      else
      {
        MR_Word Mutable_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItem_11, (MR_Integer) 0))));
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Mutable_12));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeItems_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeItems_8, 0) = ((MR_Box) (Var_20));
        }
      }
    }
    else
    {
      MR_Word Terms_14;

      succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_7, &Terms_14);
      if (succeeded)
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_mutable_is_3_f_0_1));
          MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleName_5));
          MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (VarSet_6));
        }
        parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), Var_22, Terms_14, &MaybeItems_8);
      }
      else
      {
        MR_String TermStr_15;
        MR_Word Pieces_16;
        MR_Word Spec_17;
        MR_Word Var_25;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_45;

        TermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (TermStr_15));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[200])));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[199])));
          MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_25));
        }
        Var_40 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Pieces_16));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_38));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeItems_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeItems_8, 0) = ((MR_Box) (Var_45));
        }
      }
    }
    return MaybeItems_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeItemMutableInfo_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word ArgTerms_9;
    MR_Word Context_10;
    MR_Word Var_15;
    MR_String Var_16;

    if (succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      ArgTerms_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
        succeeded = (strcmp(Var_16, (MR_String) "mutable") == 0);
      }
    }
    if (succeeded)
      parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(ModuleName_5, VarSet_6, ArgTerms_9, Context_10, (MR_Integer) -1, (MR_Integer) 1, MaybeItemMutableInfo_8);
    else
    {
      MR_String TermStr_12;
      MR_Word Pieces_13;
      MR_Word Spec_14;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_37;

      TermStr_12 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TermStr_12));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])));
      }
      {
        Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[198])));
        MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_20));
      }
      Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_13));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_30));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemMutableInfo_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[17]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_52_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_52_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_52_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_51,
  MR_Word HeadVar__3_108)
{
  {
    MR_Word HeadVar__4_109;

    HeadVar__4_109 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_126, Var_127, HeadVar__1_51, HeadVar__3_108);
    return HeadVar__4_109;
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[17]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_55_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_55_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_54_55_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_55,
  MR_Word HeadVar__3_114)
{
  {
    MR_Word HeadVar__4_115;

    HeadVar__4_115 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_126, Var_127, HeadVar__1_55, HeadVar__3_114);
    return HeadVar__4_115;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_Word Var_53,
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
      MR_String Var_51;

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
            Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(Var_52, Var_53, RHS_10, &RHSResult_13);
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
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[17]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[197])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_47));
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]));
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
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_55_51_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_55_51_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_55_51_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_Word Var_127,
  MR_String HeadVar__1_59,
  MR_Word HeadVar__3_119)
{
  {
    MR_Word HeadVar__4_120;

    HeadVar__4_120 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(Var_126, Var_127, HeadVar__1_59, HeadVar__3_119);
    return HeadVar__4_120;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_Word Var_53,
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
      MR_String Var_51;

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
            Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(Var_52, Var_53, RHS_10);
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
        Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]));
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[197])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_47));
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
      parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), Var_12, FunctorsTerms_9, &MaybeDirectArgCtors_8);
    }
    else
    {
      MR_Word Spec_11;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_33;

      Var_28 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[196])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_26));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Spec_11));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeDirectArgCtors_8, 0) = ((MR_Box) (Var_33));
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
      *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[13]));
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
      HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[12]));
    else
      HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[13]));
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

      Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[11]), MaybeTypeIsAbstractNoncanonical_14);
      Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[12]), MaybeRepresentationIs_15);
      Var_39 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[13]), MaybeGroundIs_16);
      Var_41 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[13]), MaybeAnyIs_17);
      Var_43 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[14]), MaybeCStoreIs_18);
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
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_60;
              MR_Word Spec_125;

              Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[193])));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_125, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_125, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_125, 2) = ((MR_Box) (Var_53));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Spec_125));
                MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_60));
              }
            }
            else
            {
              MR_Word MaybeCanonical_127;

              MaybeCanonical_127 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(EqualityIs_18, ComparisonIs_19);
              {
                MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (MaybeCanonical_127));
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
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_83;
              MR_Word Spec_116;

              Var_78 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[194])));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
                MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_116 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_116, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_116, 2) = ((MR_Box) (Var_76));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Spec_116));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_83));
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
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_101;
                  MR_Word Var_106;
                  MR_Word Spec_117;

                  Var_101 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
                  {
                    Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
                    MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[195])));
                  }
                  {
                    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_117 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_117, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_117, 2) = ((MR_Box) (Var_99));
                  }
                  {
                    Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Spec_117));
                    MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_106));
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
        MR_Word Var_111;
        MR_Word Var_112;

        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_112, 0) = (MR_Box) ((MR_Unsigned) (IsSolverType_12));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
        }
        {
          MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Spec_24;
        MR_Word Var_114;

        Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(WhereTerm_21);
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_114));
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
          Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (CmpPred_7));
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
          Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_14));
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
          Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (CmpPred_12));
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
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    Var_27 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[192])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_4, 2) = ((MR_Box) (Var_25));
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
      MR_Word STATE_VARIABLE_Specs_53_53;
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
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;

          Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[187])));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_46));
          }
          {
            STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
        else
        if ((MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_53_53 = STATE_VARIABLE_Specs_0_4;
        else
        {
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Pieces_107;
          MR_Word Spec_108;

          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (DirectArgCtor_12));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[106])));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[190])));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[189])));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Pieces_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[188])));
            MR_hl_field(MR_mktag(1), Pieces_107, 1) = ((MR_Box) (Var_56));
          }
          Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Pieces_107));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_108 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_108, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_108, 2) = ((MR_Box) (Var_72));
          }
          {
            STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (Spec_108));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
      }
      else
      {
        MR_Word Var_82;
        MR_Word Var_85;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Pieces_111;
        MR_Word Spec_112;

        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (DirectArgCtor_12));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[108])));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[191])));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[189])));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
        }
        {
          Pieces_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[188])));
          MR_hl_field(MR_mktag(1), Pieces_111, 1) = ((MR_Box) (Var_82));
        }
        Var_100 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
        {
          Var_102 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Pieces_111));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_112 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_112, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_112, 2) = ((MR_Box) (Var_98));
        }
        {
          STATE_VARIABLE_Specs_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_53_53, 0) = ((MR_Box) (Spec_112));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_53_53, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = DirectArgCtors_13;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_53_53;
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
    MR_String conv10_HeadVar__3_304;

    conv10_HeadVar__3_304 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__609__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__3_304));
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

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__603__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
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
    MR_String conv6_HeadVar__3_288;

    conv6_HeadVar__3_288 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__581__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_288));
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

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__574__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word conv5_LambdaHeadVar__2_130;

    conv5_LambdaHeadVar__2_130 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__570__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_130));
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
    MR_String conv2_HeadVar__3_275;

    conv2_HeadVar__3_275 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__555__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_275));
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

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__524__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    conv0_LambdaHeadVar__2_65 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__520__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
      MR_Word STATE_VARIABLE_Specs_91_91;
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
      CtorArgTypes_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[3]), CtorArgs_22);
      parse_tree__prog_type__type_vars_list_2_p_0(CtorArgTypes_30, &VarsInCtorArgTypes0_32);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), VarsInCtorArgTypes0_32, &VarsInCtorArgTypes_33);
      ExistQVarsParams_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQVars_25, HeadVar__1_1);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[3]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (ExistQVarsParams_34));
      }
      mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), Var_66, VarsInCtorArgTypes_33, &_ExistQOrParamVars_35, &NotExistQOrParamVars_36);
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
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Box conv1_Var_71;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_39);
        NotExistQOrParamVarsStr_40 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_39, NotExistQOrParamVars_36);
        conv1_Var_71 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQOrParamVars_36, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
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
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[82])));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_74));
        }
        {
          Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
          MR_hl_field(MR_mktag(1), Pieces_41, 1) = ((MR_Box) (Var_69));
        }
        Var_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (Pieces_41));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_42, 2) = ((MR_Box) (Var_84));
        }
        {
          STATE_VARIABLE_Specs_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 0) = ((MR_Box) (Spec_42));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
        }
      }
      else
      {
        MR_Word ExistQParamsSet_45;
        MR_Word ExistQVarsSet_43;
        MR_Word ParamsSet_44;

        mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQVars_25, &ExistQVarsSet_43);
        mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), HeadVar__1_1, &ParamsSet_44);
        mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQVarsSet_43, ParamsSet_44, &ExistQParamsSet_45);
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQParamsSet_45);
        if (succeeded)
        {
          MR_Word ExistQParams_46;
          MR_Word ExistQParamVarsStrs_47;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_String Var_98;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_String Var_106;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word GenericVarSet_224;
          MR_Word Pieces_225;
          MR_Word Spec_226;
          MR_Box conv3_Var_98;
          MR_Box conv4_Var_106;

          mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQParamsSet_45, &ExistQParams_46);
          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_224);
          {
            Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (GenericVarSet_224));
          }
          ExistQParamVarsStrs_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_92, ExistQParams_46);
          conv3_Var_98 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
          Var_98 = ((MR_String) (conv3_Var_98));
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var_98));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
          }
          Var_103 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(ExistQParamVarsStrs_47);
          conv4_Var_106 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
          Var_106 = ((MR_String) (conv4_Var_106));
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (Var_106));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[86])));
          }
          Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_103, Var_104);
          Pieces_225 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_93, Var_102);
          Var_122 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
          {
            Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Pieces_225));
          }
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_123));
          }
          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
            MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_226 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_226, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_226, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_226, 2) = ((MR_Box) (Var_120));
          }
          {
            STATE_VARIABLE_Specs_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 0) = ((MR_Box) (Spec_226));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
          }
        }
        else
        {
          MR_Word NotOccursExistQVars_50;
          MR_Word ConstraintTVars_48;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word CtorArgTypes_228;
          MR_Word VarsInCtorArgTypes0_229;
          MR_Word VarsInCtorArgTypes_230;
          MR_Word _OccursExistQVars_49;

          CtorArgTypes_228 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[4]), CtorArgs_22);
          parse_tree__prog_type__type_vars_list_2_p_0(CtorArgTypes_228, &VarsInCtorArgTypes0_229);
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), VarsInCtorArgTypes0_229, &VarsInCtorArgTypes_230);
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_26, &ConstraintTVars_48);
          Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), VarsInCtorArgTypes_230, ConstraintTVars_48);
          {
            Var_131 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[3]));
            MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_5));
            MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_131, 3) = ((MR_Box) (Var_132));
          }
          mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), Var_131, ExistQVars_25, &_OccursExistQVars_49, &NotOccursExistQVars_50);
          succeeded = (NotOccursExistQVars_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word NotOccursExistQVarStrs_53;
            MR_Word Var_133;
            MR_Word Var_134;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_String Var_139;
            MR_Word Var_143;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_String Var_150;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_164;
            MR_Word Var_165;
            MR_Word GenericVarSet_231;
            MR_Word Pieces_232;
            MR_Word Spec_233;
            MR_Box conv7_Var_139;
            MR_Box conv8_Var_150;

            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_231);
            {
              Var_133 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_6));
              MR_hl_field(MR_mktag(0), Var_133, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_133, 3) = ((MR_Box) (GenericVarSet_231));
            }
            NotOccursExistQVarStrs_53 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_133, NotOccursExistQVars_50);
            conv7_Var_139 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotOccursExistQVars_50, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
            Var_139 = ((MR_String) (conv7_Var_139));
            {
              Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (Var_139));
            }
            {
              Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
              MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
              MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
            }
            Var_144 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NotOccursExistQVarStrs_53);
            conv8_Var_150 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotOccursExistQVars_50, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
            Var_150 = ((MR_String) (conv8_Var_150));
            {
              Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_150));
            }
            {
              Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
              MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[88])));
            }
            {
              Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[185])));
              MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_148));
            }
            Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_144, Var_145);
            Pieces_232 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_134, Var_143);
            Var_163 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
            {
              Var_165 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (Pieces_232));
            }
            {
              Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
              MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
              MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_164));
            }
            {
              Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
              MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_233 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_233, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_233, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_233, 2) = ((MR_Box) (Var_161));
            }
            {
              STATE_VARIABLE_Specs_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 0) = ((MR_Box) (Spec_233));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
            }
          }
          else
          {
            MR_Word NotExistQArgTypes_57;
            MR_Word ConstraintArgTypeLists_54;
            MR_Word ConstraintArgTypes_55;
            MR_Word Var_170;
            MR_Word VarsInCtorArgTypes0_234;
            MR_Word VarsInCtorArgTypes_235;
            MR_Word _ExistQArgTypes_56;

            ConstraintArgTypeLists_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[5]), Constraints_26);
            mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstraintArgTypeLists_54, &ConstraintArgTypes_55);
            parse_tree__prog_type__type_vars_list_2_p_0(ConstraintArgTypes_55, &VarsInCtorArgTypes0_234);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), VarsInCtorArgTypes0_234, &VarsInCtorArgTypes_235);
            {
              Var_170 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[3]));
              MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_8));
              MR_hl_field(MR_mktag(0), Var_170, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_170, 3) = ((MR_Box) (ExistQVars_25));
            }
            mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), Var_170, VarsInCtorArgTypes_235, &_ExistQArgTypes_56, &NotExistQArgTypes_57);
            succeeded = (NotExistQArgTypes_57 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word NotExistQArgTypeStrs_60;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_Word Var_175;
              MR_Word Var_176;
              MR_String Var_177;
              MR_Word Var_181;
              MR_Word Var_182;
              MR_Word Var_183;
              MR_Word Var_186;
              MR_Word Var_187;
              MR_String Var_188;
              MR_Word Var_214;
              MR_Word Var_215;
              MR_Word Var_216;
              MR_Word Var_217;
              MR_Word Var_218;
              MR_Word GenericVarSet_236;
              MR_Word Pieces_237;
              MR_Word Spec_238;
              MR_Box conv11_Var_177;
              MR_Box conv12_Var_188;

              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_236);
              {
                Var_171 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_9));
                MR_hl_field(MR_mktag(0), Var_171, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_171, 3) = ((MR_Box) (GenericVarSet_236));
              }
              NotExistQArgTypeStrs_60 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_171, NotExistQArgTypes_57);
              conv11_Var_177 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQArgTypes_57, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
              Var_177 = ((MR_String) (conv11_Var_177));
              {
                Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_176, 1) = ((MR_Box) (Var_177));
              }
              {
                Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
                MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
                MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
              }
              Var_182 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NotExistQArgTypeStrs_60);
              conv12_Var_188 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQArgTypes_57, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
              Var_188 = ((MR_String) (conv12_Var_188));
              {
                Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (Var_188));
              }
              {
                Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
                MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[97])));
              }
              {
                Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[186])));
                MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_186));
              }
              Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_182, Var_183);
              Pieces_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_172, Var_181);
              Var_216 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
              {
                Var_218 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (Pieces_237));
              }
              {
                Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Var_218));
                MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (Var_216));
                MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_217));
              }
              {
                Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_215));
                MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_238 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_238, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_238, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_238, 2) = ((MR_Box) (Var_214));
              }
              {
                STATE_VARIABLE_Specs_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 0) = ((MR_Box) (Spec_238));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_91_91, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
            else
              STATE_VARIABLE_Specs_91_91 = STATE_VARIABLE_Specs_0_5;
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Ctors_17;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_91_91;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
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

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__302__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_39);
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

      ContextPieces_44 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[65])));
      parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_41, VarSet_8, ContextPieces_44, &MaybeExistQVars_45);
      if (((MR_tag((MR_Word) MaybeExistQVars_45)) == (MR_Integer) 0))
        MaybeHeadConstructor_13 = (MR_Word) (MaybeExistQVars_45);
      else
      {
        MR_Word ExistQVars_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExistQVars_45, (MR_Integer) 0))));
        MR_Word ExistQTVars_47;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[2]), ExistQVars_46, &ExistQTVars_47);
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

        Var_22 = mercury__list__one_or_more_cons_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), ((MR_Box) (HeadConstructor_28)), TailConstructors_19);
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

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_52;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_constructor__345__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_52);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_52));
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
      MR_Word InsideBracesTerm_33;
      MR_Word Var_77;
      MR_String Var_78;
      MR_Word Var_79;
      MR_Word Var_80;

      if ((ExistQVars_10 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((Constraints_16 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeMaybeExistConstraints_17 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[3]));
        else
        {
          MR_Word MCSpec_21;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_74;

          Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[180])));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MCSpec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MCSpec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), MCSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), MCSpec_21, 2) = ((MR_Box) (Var_67));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MCSpec_21));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeMaybeExistConstraints_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeMaybeExistConstraints_17, 0) = ((MR_Box) (Var_74));
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
        MR_Word Var_53;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[1]), Constraints_16, &ConstrainedTypeLists_27);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstrainedTypeLists_27, &ConstrainedTypes_28);
        parse_tree__prog_type__type_vars_list_2_p_0(ConstrainedTypes_28, &ConstrainedQVars0_29);
        mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQVars_10, ConstrainedQVars0_29, &UnconstrainedQVars_30);
        mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), ExistQVars_10, UnconstrainedQVars_30, &ConstrainedQVars_31);
        {
          ExistConstraints_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 0) = ((MR_Box) (ExistQVars_10));
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 1) = ((MR_Box) (Constraints_16));
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 2) = ((MR_Box) (UnconstrainedQVars_30));
          MR_hl_field(MR_mktag(0), ExistConstraints_32, 3) = ((MR_Box) (ConstrainedQVars_31));
        }
        Var_53 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_32)));
        {
          MaybeMaybeExistConstraints_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMaybeExistConstraints_17, 0) = ((MR_Box) (Var_53));
        }
      }
      succeeded = ((MR_tag((MR_Word) BeforeConstraintsTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_13, (MR_Integer) 0))));
        Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_77)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_78 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 0))));
          succeeded = (strcmp(Var_78, (MR_String) "{}") == 0);
          if (succeeded)
          {
            succeeded = (Var_79 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              InsideBracesTerm_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 0))));
              Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 1))));
              succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
        MainTerm_35 = InsideBracesTerm_33;
      else
        MainTerm_35 = BeforeConstraintsTerm_13;
      ContextPieces_36 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[181]))));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, MainTerm_35, VarSet_8, ContextPieces_36, &MaybeFunctorAndArgTerms_37);
      if (((MR_tag((MR_Word) MaybeFunctorAndArgTerms_37)) == (MR_Integer) 0))
      {
        MR_Word MECSpecs_38;
        MR_Word Var_108;
        MR_Word Specs_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFunctorAndArgTerms_37, (MR_Integer) 0))));

        MECSpecs_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0), MaybeMaybeExistConstraints_17);
        Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MECSpecs_38, Specs_111);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeConstructor_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
        }
      }
      else
      {
        MR_Word Functor_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_37, (MR_Integer) 0))));
        MR_Word ArgTerms_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_37, (MR_Integer) 1))));
        MR_Word MaybeConstructorArgs_41;

        MaybeConstructorArgs_41 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_7, VarSet_8, ArgTerms_40);
        if (((MR_tag((MR_Word) MaybeConstructorArgs_41)) == (MR_Integer) 0))
        {
          MR_Word Var_107;
          MR_Word Specs_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeConstructorArgs_41, (MR_Integer) 0))));
          MR_Word MECSpecs_113;

          MECSpecs_113 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0), MaybeMaybeExistConstraints_17);
          Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MECSpecs_113, Specs_112);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeConstructor_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_107));
          }
        }
        else
        {
          MR_Word ConstructorArgs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConstructorArgs_41, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) MaybeMaybeExistConstraints_17)) == (MR_Integer) 0))
            *MaybeConstructor_12 = (MR_Word) (MaybeMaybeExistConstraints_17);
          else
          {
            MR_Word MaybeExistConstraints_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeExistConstraints_17, (MR_Integer) 0))));
            MR_Word MainTermContext_44;

            MainTermContext_44 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MainTerm_35);
            succeeded = (ConstructorArgs_42 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (MaybeExistConstraints_43 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Word ECSpec_47;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_105;

              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (MainTermContext_44));
                MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[182])));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ECSpec_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ECSpec_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ECSpec_47, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), ECSpec_47, 2) = ((MR_Box) (Var_99));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (ECSpec_47));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeConstructor_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_105));
              }
            }
            else
            {
              MR_Integer Arity_48;
              MR_Word Ctor_49;

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), ConstructorArgs_42, &Arity_48);
              {
                Ctor_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Ctor_49, 0) = ((MR_Box) (MR_Word) (Ordinal_9));
                MR_hl_field(MR_mktag(0), Ctor_49, 1) = ((MR_Box) (MaybeExistConstraints_43));
                MR_hl_field(MR_mktag(0), Ctor_49, 2) = ((MR_Box) (Functor_39));
                MR_hl_field(MR_mktag(0), Ctor_49, 3) = ((MR_Box) (ConstructorArgs_42));
                MR_hl_field(MR_mktag(0), Ctor_49, 4) = ((MR_Box) (Arity_48));
                MR_hl_field(MR_mktag(0), Ctor_49, 5) = ((MR_Box) (MainTermContext_44));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeConstructor_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_49));
              }
            }
          }
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
      HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[1]));
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

        ContextPieces_16 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178]))));
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
            MR_Word ContextPieces_61;
            MR_Word MaybeType_62;

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
            ContextPieces_61 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[177]))));
            parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_2, ContextPieces_61, TypeTerm_14, &MaybeType_62);
            if (((MR_tag((MR_Word) MaybeType_62)) == (MR_Integer) 0))
              HeadVar__4_4 = (MR_Word) (MaybeType_62);
            else
            {
              MR_Word Type_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_62, (MR_Integer) 0))));
              MR_Word Context_64;
              MR_Word Arg_65;
              MR_Word MaybeTailArgs_66;

              Context_64 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeTerm_14);
              {
                Arg_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Arg_65, 0) = ((MR_Box) (MaybeCtorFieldName_26));
                MR_hl_field(MR_mktag(0), Arg_65, 1) = ((MR_Box) (Type_63));
                MR_hl_field(MR_mktag(0), Arg_65, 2) = ((MR_Box) (Context_64));
              }
              MaybeTailArgs_66 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_1, VarSet_2, Terms_11);
              if (((MR_tag((MR_Word) MaybeTailArgs_66)) == (MR_Integer) 0))
                HeadVar__4_4 = MaybeTailArgs_66;
              else
              {
                MR_Word Args_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailArgs_66, (MR_Integer) 0))));
                MR_Word Var_72;

                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Arg_65));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Args_68));
                }
                {
                  HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_72));
                }
              }
            }
          }
          else
          {
            MR_Word Spec_24;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_49;

            Var_44 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[179])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_42));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (Var_49));
            }
          }
        }
      }
      else
        HeadVar__4_4 = parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(ModuleName_1, VarSet_2, (MR_Word) ((MR_Unsigned) 0U), Term_10, Terms_11);
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word MaybeCtorFieldName_9,
  MR_Word TypeTerm_10,
  MR_Word Terms_11)
{
  {
    MR_Word MaybeArgs_12;
    MR_Word ContextPieces_13;
    MR_Word MaybeType_14;

    ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[177]))));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_8, ContextPieces_13, TypeTerm_10, &MaybeType_14);
    if (((MR_tag((MR_Word) MaybeType_14)) == (MR_Integer) 0))
      MaybeArgs_12 = (MR_Word) (MaybeType_14);
    else
    {
      MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_14, (MR_Integer) 0))));
      MR_Word Context_16;
      MR_Word Arg_17;
      MR_Word MaybeTailArgs_18;

      Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeTerm_10);
      {
        Arg_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg_17, 0) = ((MR_Box) (MaybeCtorFieldName_9));
        MR_hl_field(MR_mktag(0), Arg_17, 1) = ((MR_Box) (Type_15));
        MR_hl_field(MR_mktag(0), Arg_17, 2) = ((MR_Box) (Context_16));
      }
      MaybeTailArgs_18 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_7, VarSet_8, Terms_11);
      if (((MR_tag((MR_Word) MaybeTailArgs_18)) == (MR_Integer) 0))
        MaybeArgs_12 = MaybeTailArgs_18;
      else
      {
        MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailArgs_18, (MR_Integer) 0))));
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Arg_17));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Args_20));
        }
        {
          MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArgs_12, 0) = ((MR_Box) (Var_24));
        }
      }
    }
    return MaybeArgs_12;
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
      *MaybeExistentialConstraints_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[0]));
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
    MR_String conv3_HeadVar__3_164;

    conv3_HeadVar__3_164 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1513__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_164));
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
    MR_String conv1_HeadVar__3_158;

    conv1_HeadVar__3_158 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1498__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_158));
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
    MR_Word conv0_HeadVar__2_152;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1489__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_152);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_152));
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
  if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
  {
    MR_Word MaybeSymNameArgs_18;
    MR_Word Context_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));

    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, Term_9, VarSet_8, ContextPieces_6, &MaybeSymNameArgs_18);
    if (((MR_tag((MR_Word) MaybeSymNameArgs_18)) == (MR_Integer) 0))
      *MaybeTypeCtorAndArgs_10 = (MR_Word) (MaybeSymNameArgs_18);
    else
    {
      MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameArgs_18, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameArgs_18, (MR_Integer) 1))));
      MR_Word NameSpecs_22;
      MR_Word ParamVars_23;
      MR_Word NonVarArgTerms_24;

      parse_tree__parse_type_defn__check_user_type_name_3_p_0(SymName_20, Context_144, &NameSpecs_22);
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_116_111_95_118_97_114_95_108_105_115_116_95_97_110_100_95_110_111_110_118_97_114_115_95_95_91_49_93_95_48_3_p_0(ArgTerms_21, &ParamVars_23, &NonVarArgTerms_24);
      if ((NonVarArgTerms_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ParamsBag_25;
        MR_Word DupParamVars_26;

        mercury__bag__from_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), ParamVars_23, &ParamsBag_25);
        mercury__bag__to_list_only_duplicates_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), ParamsBag_25, &DupParamVars_26);
        if ((DupParamVars_26 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((NameSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word PrgParamVars_27;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[0]), ParamVars_23, &PrgParamVars_27);
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
          MR_Word Var_77;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_97;
          MR_Word Pieces_129;
          MR_Word Spec_130;
          MR_Box conv2_Params_33;

          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (VarSet_8));
          }
          DupParamVarNames_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_66, DupParamVars_26);
          conv2_Params_33 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DupParamVars_26, ((MR_Box) ((MR_String) "the parameter")), ((MR_Box) ((MR_String) "the parameters")));
          Params_33 = ((MR_String) (conv2_Params_33));
          IsOrAre_34 = parse_tree__error_util__is_or_are_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]), DupParamVars_26);
          Var_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Params_33));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[173])));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
          }
          Var_80 = parse_tree__error_util__list_to_pieces_1_f_0(DupParamVarNames_32);
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (IsOrAre_34));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[49])));
          }
          Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_80, Var_81);
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_71, Var_79);
          Pieces_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_70);
          {
            Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_129));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Context_144));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_130 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_130, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_130, 2) = ((MR_Box) (Var_91));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Spec_130));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (NameSpecs_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTypeCtorAndArgs_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
          }
        }
      }
      else
      {
        MR_Word NonVarArgTermStrs_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Pieces_135;
        MR_Word Spec_136;
        MR_String IsOrAre_137;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (VarSet_8));
        }
        NonVarArgTermStrs_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, NonVarArgTerms_24);
        IsOrAre_137 = parse_tree__error_util__is_or_are_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonVarArgTermStrs_37);
        Var_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
        Var_48 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NonVarArgTermStrs_37);
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (IsOrAre_137));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[54])));
        }
        Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, Var_49);
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[52])), Var_47);
        Pieces_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_39, Var_40);
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Pieces_135));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Context_144));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_136 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_136, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_136, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_136, 2) = ((MR_Box) (Var_59));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_136));
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
  else
  {
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_9, (MR_Integer) 1))));
    MR_String TermStr_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_105;
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_127;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_99 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[176])));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[175])));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[174])));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
    }
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_99, Var_100);
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Pieces_14));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_121));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTypeCtorAndArgs_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
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
    succeeded = parse_tree__parse_type_name__is_known_type_name_1_p_0(Name_7);
    if (succeeded)
    {
      MR_Word NamePieces_8;
      MR_Word NameSpec_9;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Name_7));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[169])));
      }
      {
        NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[172])));
        MR_hl_field(MR_mktag(1), NamePieces_8, 1) = ((MR_Box) (Var_12));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (NamePieces_8));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NameSpec_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NameSpec_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NameSpec_9, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), NameSpec_9, 2) = ((MR_Box) (Var_22));
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
      *NameSpecs_6 = (MR_Word) ((MR_Unsigned) 0U);
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
