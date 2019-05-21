/*
** Automatically generated from `parse_type_defn.m'
** by the Mercury compiler,
** version 2017-12-19
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
#include "bag.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0;

static const MR_DuFunctorDesc parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_defn__parse_tree__parse_type_defn__field_types_type_defn_head_parse_context_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_stag_ordered_type_defn_head_parse_context_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_stag_ordered_type_defn_head_parse_context_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_ptag_ordered_type_defn_head_parse_context_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_name_ordered_type_defn_head_parse_context_0[2];

static const MR_Integer parse_tree__parse_type_defn__parse_tree__parse_type_defn__functor_number_map_type_defn_head_parse_context_0[2];

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1464__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_55);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__541__1_2_f_0(
  MR_Word GenericVarSet_231,
  MR_Word HeadVar__2_300);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__535__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word HeadVar__2_294);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__513__1_2_f_0(
  MR_Word GenericVarSet_226,
  MR_Word HeadVar__2_284);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__506__1_2_p_0(
  MR_Word HeadVar__1_127,
  MR_Word HeadVar__2_278);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__502__1_1_f_0(
  MR_Word LambdaHeadVar__1_124);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__487__1_2_f_0(
  MR_Word GenericVarSet_219,
  MR_Word HeadVar__2_271);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word HeadVar__2_260);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__454__1_1_f_0(
  MR_Word LambdaHeadVar__1_58);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__306__1_2_p_0(
  MR_Word HeadVar__1_36,
  MR_Word * HeadVar__2_37);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__196__1_2_p_0(
  MR_Word SolverTypeDetails_29,
  MR_Word HeadVar__2_73);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__2_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_185);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__2_2_p_0(
  MR_Word HeadVar__1_154,
  MR_Word * HeadVar__2_155);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_147);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__1_2_p_0(
  MR_Word HeadVar__1_141,
  MR_Word * HeadVar__2_142);

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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
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
  MR_Word MaybeUserEqComp_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word * MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_String HeadVar__1_47,
  MR_Word HeadVar__3_102);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_String Name_5,
  MR_Word Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Term_5);

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Term_5,
  MR_Word * MaybeItemMutableInfo_6);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
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
  MR_Word MaybeEqPred_4,
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
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word HeadTerm_8,
  MR_Word TailTerms_9,
  MR_Word * MaybeConstructors_10);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeConstructor_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word ExistQVars_8,
  MR_Word Term_9,
  MR_Word * MaybeConstructor_10);

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
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word Term_4,
  MR_Word * CtorsTerm_5,
  MR_Word * MaybeWhereTerm_6);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6);

static MR_bool MR_CALL 
parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[215][2];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[5][5];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[3][6];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[36][1];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[215][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_compare_0))
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
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be followed by a type definition."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "keyword"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be the definition of a type."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of this type definition."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are duplicated in the LHS"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: variable on left hand side of type definition."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "comparison is <<comparison pred name>>"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "equality is <<equality pred name>>"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes have the form"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Recognized"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a solver type"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in first argument of"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in right hand side of type definition."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(explicit type quantifier shadows argument type)."))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "overlapping scopes"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in arguments or constraints of constructor."))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be explicitly existentially quantified"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "=>"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "introduced with"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not 1."))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol whose arity"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with existentially quantified type variables."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to be equivalent to another type."))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a solver type cannot be defined"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type_is_abstract_enum."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid argument for"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes for abstract non-solver type."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Solver type with no solver_type_details."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or contain an unrecognised attribute."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: attributes are either badly ordered"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a ground, unconstrained inst."))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or a list of mutable declarations."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed functors list in"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[102])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for non-solver type."))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type attribute given"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions cannot have"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[101])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions must have a"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[142])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only in the right hand side of this type definition."))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[16])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type name"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables:"))
  },
  /* row 166 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: expected a type name declared"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using a"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration, got"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type variable"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 175 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in existential quantifier"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in class constraints,"))
  },
  /* row 181 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 186 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 187 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 188 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 189 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 190 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 191 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 192 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 193 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the ground inst of a solver type"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the any inst of a solver type"))
  },
  /* row 196 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[23])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 197 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 198 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 199 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[27])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 200 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 201 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[29])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 202 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[30])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 203 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[31])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 204 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[32])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration: error: unrecognized"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_defn_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected functor"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "name/arity for"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[3])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[36][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[42])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[67])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[91])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[156])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[140])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[145])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[149])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[136])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[126])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[134])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[132])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[122])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[59])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[99])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[110])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[116])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[118])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[106])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[34])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[34])))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0
  }
};

static const MR_DuFunctorDesc parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_0 = {
  (MR_String) "tdhpc_type_defn",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_defn__parse_tree__parse_type_defn__field_types_type_defn_head_parse_context_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_defn__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0
};

static const MR_DuFunctorDesc parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_1 = {
  (MR_String) "tdhpc_foreign_type_pragma",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_type_defn__parse_tree__parse_type_defn__field_types_type_defn_head_parse_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_stag_ordered_type_defn_head_parse_context_0_0[1] = {
  &parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_stag_ordered_type_defn_head_parse_context_0_1[1] = {
  &parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_1
};

static const MR_DuPtagLayout parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_ptag_ordered_type_defn_head_parse_context_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_stag_ordered_type_defn_head_parse_context_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_stag_ordered_type_defn_head_parse_context_0_1
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_name_ordered_type_defn_head_parse_context_0[2] = {
  &parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_1,
  &parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_functor_desc_type_defn_head_parse_context_0_0
};

static const MR_Integer parse_tree__parse_type_defn__parse_tree__parse_type_defn__functor_number_map_type_defn_head_parse_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_defn__parse_tree__parse_type_defn__type_ctor_info_type_defn_head_parse_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0_10001)),
  (MR_String) "parse_tree.parse_type_defn",
  (MR_String) "type_defn_head_parse_context",
  {     parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_name_ordered_type_defn_head_parse_context_0 },
  {     parse_tree__parse_type_defn__parse_tree__parse_type_defn__du_ptag_ordered_type_defn_head_parse_context_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_type_defn__parse_tree__parse_type_defn__functor_number_map_type_defn_head_parse_context_0
};

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1464__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_55)
{
  {
    MR_String HeadVar__3_56;

    HeadVar__3_56 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_6, HeadVar__2_55);
    return HeadVar__3_56;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__541__1_2_f_0(
  MR_Word GenericVarSet_231,
  MR_Word HeadVar__2_300)
{
  {
    MR_String HeadVar__3_301;

    HeadVar__3_301 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, GenericVarSet_231, HeadVar__2_300);
    return HeadVar__3_301;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__535__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word HeadVar__2_294)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], ExistQVars_19, ((MR_Box) (HeadVar__2_294)));
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__513__1_2_f_0(
  MR_Word GenericVarSet_226,
  MR_Word HeadVar__2_284)
{
  {
    MR_String HeadVar__3_285;

    HeadVar__3_285 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, GenericVarSet_226, HeadVar__2_284);
    return HeadVar__3_285;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__506__1_2_p_0(
  MR_Word HeadVar__1_127,
  MR_Word HeadVar__2_278)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], HeadVar__1_127, ((MR_Box) (HeadVar__2_278)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__502__1_1_f_0(
  MR_Word LambdaHeadVar__1_124)
{
  {
    MR_Word LambdaHeadVar__2_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_124, (MR_Integer) 1)));
    MR_Word Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_124, (MR_Integer) 0)));
    MR_Word Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_124, (MR_Integer) 2)));
    MR_Word Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_124, (MR_Integer) 3)));

    return LambdaHeadVar__2_125;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__487__1_2_f_0(
  MR_Word GenericVarSet_219,
  MR_Word HeadVar__2_271)
{
  {
    MR_String HeadVar__3_272;

    HeadVar__3_272 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, GenericVarSet_219, HeadVar__2_271);
    return HeadVar__3_272;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word HeadVar__2_260)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], HeadVar__1_61, ((MR_Box) (HeadVar__2_260)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__454__1_1_f_0(
  MR_Word LambdaHeadVar__1_58)
{
  {
    MR_Word LambdaHeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_58, (MR_Integer) 1)));
    MR_Word Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_58, (MR_Integer) 0)));
    MR_Word Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_58, (MR_Integer) 2)));
    MR_Word Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_58, (MR_Integer) 3)));

    return LambdaHeadVar__2_59;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__306__1_2_p_0(
  MR_Word HeadVar__1_36,
  MR_Word * HeadVar__2_37)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, HeadVar__1_36, HeadVar__2_37);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__196__1_2_p_0(
  MR_Word SolverTypeDetails_29,
  MR_Word HeadVar__2_73)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[3], ((MR_Box) (SolverTypeDetails_29)), ((MR_Box) (HeadVar__2_73)));
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__2_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_185)
{
  {
    MR_String HeadVar__3_186;

    HeadVar__3_186 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarSet_8, HeadVar__2_185);
    return HeadVar__3_186;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__2_2_p_0(
  MR_Word HeadVar__1_154,
  MR_Word * HeadVar__2_155)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, HeadVar__1_154, HeadVar__2_155);
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__1_2_f_0(
  MR_Word VarSet_8,
  MR_Word HeadVar__2_147)
{
  {
    MR_String HeadVar__3_148;

    HeadVar__3_148 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarSet_8, HeadVar__2_147);
    return HeadVar__3_148;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__1_2_p_0(
  MR_Word HeadVar__1_141,
  MR_Word * HeadVar__2_142)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, HeadVar__1_141, HeadVar__2_142);
  }
}

void MR_CALL 
parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[15], HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[15];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
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

    succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, ModuleName_5, Term_7, &Name_9, &Arity_10);
    if (succeeded)
    {
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Name_9));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Arity_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFunctor_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
      }
    }
    else
    {
      MR_Word TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_String TermStr_11;
      MR_Word Pieces_12;
      MR_Word Spec_13;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_43;

      TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_46_46, VarSet_6, Term_7);
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (TermStr_11));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[214])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[213])));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_17));
      }
      Var_38 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_46_46, Term_7);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_12));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_36));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFunctor_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_where_unify_compare_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term0_7,
  MR_Word * MaybeUnifyCompare_8)
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
      STATE_VARIABLE_MaybeTerm_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_27_27, 0) = ((MR_Box) (Term0_7));
    }
    parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&MaybeTypeIsAbstractNoncanonical_10, STATE_VARIABLE_MaybeTerm_27_27, &STATE_VARIABLE_MaybeTerm_29_29);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", ModuleName_5, VarSet_6, &MaybeEqualityIs_11, STATE_VARIABLE_MaybeTerm_29_29, &STATE_VARIABLE_MaybeTerm_31_31);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", ModuleName_5, VarSet_6, &MaybeComparisonIs_12, STATE_VARIABLE_MaybeTerm_31_31, &STATE_VARIABLE_MaybeTerm_35_35);
    if ((STATE_VARIABLE_MaybeTerm_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeWhereEnd_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[9]);
    }
    else
    {
      MR_Word TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_Word EndTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_35_35, (MR_Integer) 0)));
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

      EndTermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_117_117, VarSet_6, EndTerm_14);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (EndTermStr_15));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[173])));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[209])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[208])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[207])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[206])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[205])));
        MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_40));
      }
      Var_83 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_117_117, EndTerm_14);
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_16));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[211])));
      }
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        EndSpec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EndSpec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), EndSpec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), EndSpec_18, 2) = ((MR_Box) (Var_81));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (EndSpec_18));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MaybeWhereEnd_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeWhereEnd_13, 0) = ((MR_Box) (Var_91));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeWhereEnd_13)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeTypeIsAbstractNoncanonical_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        TypeIsAbstractNoncanonical_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeIsAbstractNoncanonical_10, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) MaybeEqualityIs_11)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          EqualityIs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeEqualityIs_11, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeComparisonIs_12)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            ComparisonIs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeComparisonIs_12, (MR_Integer) 0)));
        }
      }
    }
    if (succeeded)
      if ((TypeIsAbstractNoncanonical_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word MaybeUC_25;

        MaybeUC_25 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(EqualityIs_20, ComparisonIs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeUnifyCompare_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeUC_25));
        }
      }
      else
      {
        succeeded = (EqualityIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (ComparisonIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          *MaybeUnifyCompare_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[35]);
        }
        else
        {
          MR_Word Spec_24;
          MR_Word Var_97;

          Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(Term0_7);
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeUnifyCompare_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
          }
        }
      }
    else
    {
      MR_Word TypeCtorInfo_118_118 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word TypeInfo_119_119 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[2];
      MR_Word Specs_26;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;

      Var_99 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_119_119, MaybeEqualityIs_11);
      Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_119_119, MaybeComparisonIs_12);
      Var_102 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, MaybeWhereEnd_13);
      Var_100 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_118_118, Var_101, Var_102);
      Specs_26 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_118_118, Var_99, Var_100);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeUnifyCompare_8 = base;
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
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
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word SubArgTerms_14;
    MR_Word SubContext_15;
    MR_Word ArgTerm_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_String Var_20;

    if (succeeded)
    {
      ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1)));
      succeeded = (Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 0)));
          SubArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 1)));
          SubContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTerm_13, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
            succeeded = (strcmp(Var_20, (MR_String) "type") == 0);
          }
        }
      }
    }
    if (succeeded)
    {
      parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(ModuleName_7, VarSet_8, SubArgTerms_14, SubContext_15, SeqNum_11, (MR_Integer) 1, MaybeIOM_12);
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_44;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[204])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_38));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word TypeDefnTerm_15;
    MR_Word Var_23;

    if (succeeded)
    {
      TypeDefnTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0)));
      Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1)));
      succeeded = (Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_18;

      succeeded = ((MR_tag((MR_Word) TypeDefnTerm_15)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeDefnTerm_15, (MR_Integer) 0)));
        TypeDefnArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeDefnTerm_15, (MR_Integer) 1)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeDefnTerm_15, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0)));
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
            succeeded = ((MR_tag((MR_Word) TypeDefnArgTerms_17)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnArgTerms_17, (MR_Integer) 0)));
              Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnArgTerms_17, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                BodyTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
                Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
                succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        MR_Word MaybeTypeCtorAndArgs_61;

        parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ModuleName_8, VarSet_9, TypeDefnTerm_15, &MaybeTypeCtorAndArgs_61);
        if (((MR_tag((MR_Word) MaybeTypeCtorAndArgs_61)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word Specs_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_62));
          }
        }
        else
        {
          MR_Word Name_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));
          MR_Word Params_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_61, (MR_Integer) 1)));
          MR_Word TypeVarSet_65;
          MR_Word AbstractTypeDetails_66;
          MR_Word TypeDefn_67;
          MR_Word ItemTypeDefn_68;
          MR_Word Item_69;
          MR_Word Var_71;

          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_9, &TypeVarSet_65);
          switch (IsSolverType_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          {
            TypeDefn_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TypeDefn_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), TypeDefn_67, 1) = ((MR_Box) (AbstractTypeDetails_66));
          }
          {
            ItemTypeDefn_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemTypeDefn_68, 0) = ((MR_Box) (Name_63));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_68, 1) = ((MR_Box) (Params_64));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_68, 2) = ((MR_Box) (TypeDefn_67));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_68, 3) = ((MR_Box) (TypeVarSet_65));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_68, 4) = ((MR_Box) (Context_11));
            MR_hl_field(MR_mktag(0), ItemTypeDefn_68, 5) = ((MR_Box) (SeqNum_12));
          }
          Item_69 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ItemTypeDefn_68);
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Item_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_71));
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
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[203])));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_46));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
      parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(ModuleName_9, VarSet_10, HeadTerm_11, BodyTerm_12, Context_13, SeqNum_14, MaybeIOM_16);
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeWhere_17;

        parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 1, ModuleName_9, VarSet_10, BodyTerm_12, &MaybeWhere_17);
        if (((MR_tag((MR_Word) MaybeWhere_17)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeWhere_17, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_18));
          }
        }
        else
        {
          MR_Word MaybeSolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWhere_17, (MR_Integer) 0)));
          MR_Word MaybeUserEqComp_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWhere_17, (MR_Integer) 1)));
          MR_Word MaybeDirectArgCtors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWhere_17, (MR_Integer) 2)));

          if ((MaybeDirectArgCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(ModuleName_9, VarSet_10, HeadTerm_11, MaybeSolverTypeDetails_19, MaybeUserEqComp_20, Context_13, SeqNum_14, MaybeIOM_16);
          else
          {
            MR_Word Spec_24;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_49;

            Var_44 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadTerm_11);
            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[202])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_42));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
  MR_Word MaybeUserEqComp_13,
  MR_Word Context_14,
  MR_Integer SeqNum_15,
  MR_Word * MaybeIOM_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_58_58 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word TVarSet_17;
    MR_Word MaybeNameParams_18;
    MR_Word SolverSpecs_20;
    MR_Word FreeSpecs_27;
    MR_Word ParamTVars0_24;
    MR_Word SolverTypeDetails0_25;
    MR_Word _SymName_23;
    MR_Word SymName_28;
    MR_Word ParamTVars_29;
    MR_Word SolverTypeDetails_30;

    mercury__varset__coerce_2_p_0(TypeCtorInfo_58_58, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_10, &TVarSet_17);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameParams_18);
    if ((MaybeSolverTypeDetails_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word SolverSpec_22;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;

      Var_46 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_58_58, HeadTerm_11);
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[201])));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        SolverSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SolverSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), SolverSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), SolverSpec_22, 2) = ((MR_Box) (Var_44));
      }
      {
        SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SolverSpecs_20, 0) = ((MR_Box) (SolverSpec_22));
        MR_hl_field(MR_mktag(1), SolverSpecs_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = ((MR_tag((MR_Word) MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      _SymName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameParams_18, (MR_Integer) 0)));
      ParamTVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameParams_18, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        SolverTypeDetails0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_12, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word RepType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails0_25, (MR_Integer) 0)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails0_25, (MR_Integer) 1)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails0_25, (MR_Integer) 2)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails0_25, (MR_Integer) 3)));

      parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(TVarSet_17, ParamTVars0_24, RepType_26, Context_14, &FreeSpecs_27);
    }
    else
      FreeSpecs_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameParams_18, (MR_Integer) 0)));
        ParamTVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameParams_18, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          SolverTypeDetails_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_12, (MR_Integer) 0)));
      }
    }
    if (succeeded)
    {
      MR_Word TypeDefn_31;
      MR_Word DetailsSolver_32;
      MR_Word ItemTypeDefn_33;
      MR_Word Item_34;
      MR_Word Var_52;

      {
        DetailsSolver_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DetailsSolver_32, 0) = ((MR_Box) (SolverTypeDetails_30));
        MR_hl_field(MR_mktag(0), DetailsSolver_32, 1) = ((MR_Box) (MaybeUserEqComp_13));
      }
      TypeDefn_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) DetailsSolver_32);
      {
        ItemTypeDefn_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_33, 0) = ((MR_Box) (SymName_28));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_33, 1) = ((MR_Box) (ParamTVars_29));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_33, 2) = ((MR_Box) (TypeDefn_31));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_33, 3) = ((MR_Box) (TVarSet_17));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_33, 4) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_33, 5) = ((MR_Box) (SeqNum_15));
      }
      Item_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ItemTypeDefn_33);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Item_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
      }
    }
    else
    {
      MR_Word TypeCtorInfo_60_60 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word Specs_35;
      MR_Word Var_53;
      MR_Word Var_54;

      Var_54 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], MaybeNameParams_18);
      Var_53 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_60_60, Var_54, FreeSpecs_27);
      Specs_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_60_60, SolverSpecs_20, Var_53);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_35));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(
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
    MR_Word TypeCtorInfo_80_80 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word TypeVarSet_15;
    MR_Word MaybeNameParams_16;
    MR_Word MaybeTypeDefn_22;
    MR_Word Args_17;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_18;
    MR_Word Name_25;
    MR_Word Params_26;
    MR_Word TypeDefn_27;

    mercury__varset__coerce_2_p_0(TypeCtorInfo_80_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_9, &TypeVarSet_15);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ModuleName_8, VarSet_9, HeadTerm_10, &MaybeNameParams_16);
    succeeded = ((MR_tag((MR_Word) BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 0)));
      Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 1)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), BodyTerm_11, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0)));
        succeeded = (strcmp(Var_33, (MR_String) "type_is_abstract_enum") == 0);
      }
    }
    if (succeeded)
    {
      MR_Integer NumBits_20;
      MR_Word Arg_19;
      MR_Word Var_34;

      succeeded = ((MR_tag((MR_Word) Args_17)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0)));
        Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1)));
        succeeded = (Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_80_80, Arg_19, &NumBits_20);
      }
      if (succeeded)
      {
        MR_Word TypeDefn0_21;
        MR_Word Var_35;

        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (NumBits_20));
        }
        {
          TypeDefn0_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeDefn0_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), TypeDefn0_21, 1) = ((MR_Box) (Var_35));
        }
        {
          MaybeTypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTypeDefn_22, 0) = ((MR_Box) (TypeDefn0_21));
        }
      }
      else
      {
        MR_Word Spec_24;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_52;

        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[199])));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_46));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MaybeTypeDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeTypeDefn_22, 0) = ((MR_Box) (Var_52));
        }
      }
    }
    else
    {
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_73;
      MR_Word Spec_79;

      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[200])));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_79, 2) = ((MR_Box) (Var_67));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Spec_79));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MaybeTypeDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeTypeDefn_22, 0) = ((MR_Box) (Var_73));
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeNameParams_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Name_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameParams_16, (MR_Integer) 0)));
      Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameParams_16, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) MaybeTypeDefn_22)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        TypeDefn_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeDefn_22, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word ItemTypeDefn_28;
      MR_Word Item_29;
      MR_Word Var_75;

      {
        ItemTypeDefn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 0) = ((MR_Box) (Name_25));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 1) = ((MR_Box) (Params_26));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 2) = ((MR_Box) (TypeDefn_27));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 3) = ((MR_Box) (TypeVarSet_15));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 4) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 5) = ((MR_Box) (SeqNum_13));
      }
      Item_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ItemTypeDefn_28);
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Item_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_75));
      }
    }
    else
    {
      MR_Word Specs_30;
      MR_Word Var_76;
      MR_Word Var_77;

      Var_76 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], MaybeNameParams_16);
      Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0, MaybeTypeDefn_22);
      Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, Var_76, Var_77);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_30));
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
    MR_Word MaybeNameAndParams_20;
    MR_Word ContextPieces_21;
    MR_Word MaybeType_22;
    MR_Word Name_23;
    MR_Word ParamTVars_24;
    MR_Word Type_25;

    switch (IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word SolverSpec_19;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;

          Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadTerm_11);
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[198])));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            SolverSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), SolverSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), SolverSpec_19, 2) = ((MR_Box) (Var_45));
          }
          {
            SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpecs_17, 0) = ((MR_Box) (SolverSpec_19));
            MR_hl_field(MR_mktag(1), SolverSpecs_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameAndParams_20);
    ContextPieces_21 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[26]), VarSet_10, ContextPieces_21, BodyTerm_12, &MaybeType_22);
    succeeded = (SolverSpecs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeNameAndParams_20)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndParams_20, (MR_Integer) 0)));
        ParamTVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndParams_20, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) MaybeType_22)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_22, (MR_Integer) 0)));
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_Word TVarSet_26;
      MR_Word FreeSpecs_27;
      MR_Word Var_56;

      mercury__varset__coerce_2_p_0(TypeCtorInfo_63_63, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_10, &TVarSet_26);
      Var_56 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_63_63, BodyTerm_12);
      parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(TVarSet_26, ParamTVars_24, Type_25, Var_56, &FreeSpecs_27);
      if ((FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word TypeDefn_28;
        MR_Word DetailsEqv_29 = (MR_Word) Type_25;
        MR_Word ItemTypeDefn_30;
        MR_Word Item_31;
        MR_Word Var_57;

        {
          TypeDefn_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeDefn_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), TypeDefn_28, 1) = ((MR_Box) (DetailsEqv_29));
        }
        {
          ItemTypeDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 0) = ((MR_Box) (Name_23));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 1) = ((MR_Box) (ParamTVars_24));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 2) = ((MR_Box) (TypeDefn_28));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 3) = ((MR_Box) (TVarSet_26));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 4) = ((MR_Box) (Context_13));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_30, 5) = ((MR_Box) (SeqNum_14));
        }
        Item_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ItemTypeDefn_30);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Item_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_57));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FreeSpecs_27));
        }
    }
    else
    {
      MR_Word TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word Specs_34;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;

      Var_59 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], MaybeNameAndParams_20);
      Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, MaybeType_22);
      Var_58 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_65_65, Var_59, Var_60);
      Specs_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_65_65, SolverSpecs_17, Var_58);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_34));
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

    conv0_HeadVar__3_56 = parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1464__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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
    MR_Word TypeInfo_53_53;
    MR_Word BodyTVars_11;
    MR_Word ParamTVarSet_12;
    MR_Word BodyTVarSet_13;
    MR_Word OnlyBodyTVarSet_14;
    MR_Word OnlyBodyTVars_15;

    parse_tree__prog_type__type_vars_2_p_0(BodyType_8, &BodyTVars_11);
    TypeInfo_53_53 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
    mercury__set__list_to_set_2_p_0(TypeInfo_53_53, ParamTVars_7, &ParamTVarSet_12);
    mercury__set__list_to_set_2_p_0(TypeInfo_53_53, BodyTVars_11, &BodyTVarSet_13);
    mercury__set__difference_3_p_0(TypeInfo_53_53, BodyTVarSet_13, ParamTVarSet_12, &OnlyBodyTVarSet_14);
    mercury__set__to_sorted_list_2_p_0(TypeInfo_53_53, OnlyBodyTVarSet_14, &OnlyBodyTVars_15);
    if ((OnlyBodyTVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word TypeCtorInfo_58_58;
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
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TVarSet_6));
      }
      OnlyBodyTVarNames_18 = mercury__list__map_2_f_0(TypeInfo_53_53, TypeCtorInfo_54_54, Var_23, OnlyBodyTVars_15);
      conv1_VarWord_19 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_53_53, TypeCtorInfo_54_54, OnlyBodyTVars_15, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
      VarWord_19 = ((MR_String) conv1_VarWord_19);
      conv2_OccurWord_20 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_53_53, TypeCtorInfo_54_54, OnlyBodyTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
      OccurWord_20 = ((MR_String) conv2_OccurWord_20);
      TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (VarWord_19));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      Var_35 = parse_tree__error_util__list_to_pieces_1_f_0(OnlyBodyTVarNames_18);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (OccurWord_20));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[160])));
      }
      Var_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_58_58, Var_35, Var_36);
      Pieces_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_58_58, Var_28, Var_34);
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_21));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (BodyContext_9));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__196__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
    MR_Word MaybeTypeCtorAndArgs_20;
    MR_Word CtorsTerm_21;
    MR_Word MaybeWhereTerm_22;
    MR_Word MaybeOneOrMoreCtors_23;
    MR_Word MaybeWhere_24;
    MR_Word Name_26;
    MR_Word Params_27;
    MR_Word OneOrMoreCtors_28;
    MR_Word SolverTypeDetails_29;
    MR_Word MaybeUserEqComp_30;
    MR_Word MaybeDirectArgIs_31;

    switch (IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word SolverSpec_18;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;

          Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadTerm_11);
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[197])));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            SolverSpec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverSpec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), SolverSpec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), SolverSpec_18, 2) = ((MR_Box) (Var_56));
          }
          {
            SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SolverSpecs_19, 0) = ((MR_Box) (SolverSpec_18));
            MR_hl_field(MR_mktag(1), SolverSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ModuleName_9, VarSet_10, HeadTerm_11, &MaybeTypeCtorAndArgs_20);
    parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(BodyTerm_12, &CtorsTerm_21, &MaybeWhereTerm_22);
    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(ModuleName_9, VarSet_10, CtorsTerm_21, &MaybeOneOrMoreCtors_23);
    if ((MaybeWhereTerm_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeWhere_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_3[6]);
    }
    else
    {
      MR_Word WhereTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWhereTerm_22, (MR_Integer) 0)));

      parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 0, ModuleName_9, VarSet_10, WhereTerm_25, &MaybeWhere_24);
    }
    succeeded = (SolverSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeTypeCtorAndArgs_20)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_20, (MR_Integer) 0)));
        Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeCtorAndArgs_20, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) MaybeOneOrMoreCtors_23)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          OneOrMoreCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOneOrMoreCtors_23, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeWhere_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWhere_24, (MR_Integer) 0)));
            MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWhere_24, (MR_Integer) 1)));
            MaybeDirectArgIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeWhere_24, (MR_Integer) 2)));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadCtor_32;
      MR_Word TailCtors_33;
      MR_Word Ctors_34;
      MR_Word CtorsSpecs_35;
      MR_Word ErrorSpecs_37;
      MR_Word Var_69;

      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[4]));
        MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (SolverTypeDetails_29));
        MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(Var_69, (MR_String) "parse_tree.parse_type_defn", (MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8", (MR_String) "discriminated union type has solver type details");
      HeadCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OneOrMoreCtors_28, (MR_Integer) 0)));
      TailCtors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), OneOrMoreCtors_28, (MR_Integer) 1)));
      {
        Ctors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Ctors_34, 0) = ((MR_Box) (HeadCtor_32));
        MR_hl_field(MR_mktag(1), Ctors_34, 1) = ((MR_Box) (TailCtors_33));
      }
      parse_tree__parse_type_defn__process_du_ctors_6_p_0(Params_27, VarSet_10, BodyTerm_12, Ctors_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &CtorsSpecs_35);
      if ((MaybeDirectArgIs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ErrorSpecs_37 = CtorsSpecs_35;
      else
      {
        MR_Word DirectArgCtors_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDirectArgIs_31, (MR_Integer) 0)));

        parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(Ctors_34, DirectArgCtors_36, BodyTerm_12, CtorsSpecs_35, &ErrorSpecs_37);
      }
      if ((ErrorSpecs_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word TypeVarSet_38;
        MR_Word DetailsDu_39;
        MR_Word TypeDefn_40;
        MR_Word ItemTypeDefn_41;
        MR_Word Item_42;
        MR_Word Var_75;

        mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_10, &TypeVarSet_38);
        {
          DetailsDu_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsDu_39, 0) = ((MR_Box) (Ctors_34));
          MR_hl_field(MR_mktag(0), DetailsDu_39, 1) = ((MR_Box) (MaybeUserEqComp_30));
          MR_hl_field(MR_mktag(0), DetailsDu_39, 2) = ((MR_Box) (MaybeDirectArgIs_31));
        }
        TypeDefn_40 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) DetailsDu_39);
        {
          ItemTypeDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_41, 0) = ((MR_Box) (Name_26));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_41, 1) = ((MR_Box) (Params_27));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_41, 2) = ((MR_Box) (TypeDefn_40));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_41, 3) = ((MR_Box) (TypeVarSet_38));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_41, 4) = ((MR_Box) (Context_13));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_41, 5) = ((MR_Box) (SeqNum_14));
        }
        Item_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ItemTypeDefn_41);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Item_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_75));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ErrorSpecs_37));
        }
    }
    else
    {
      MR_Word TypeCtorInfo_85_85 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word Specs_45;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;

      Var_77 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], MaybeTypeCtorAndArgs_20);
      Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[5], MaybeOneOrMoreCtors_23);
      Var_80 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[3], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[6], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[8], MaybeWhere_24);
      Var_78 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_85_85, Var_79, Var_80);
      Var_76 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_85_85, Var_77, Var_78);
      Specs_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_85_85, SolverSpecs_19, Var_76);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_45));
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
    MR_Word TypeCtorInfo_81_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
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

    GroundContextPieces_11 = mercury__cord__singleton_1_f_0(TypeCtorInfo_81_81, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[194]))));
    AnyContextPieces_12 = mercury__cord__singleton_1_f_0(TypeCtorInfo_81_81, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[195]))));
    {
      STATE_VARIABLE_MaybeTerm_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_30_30, 0) = ((MR_Box) (Term0_9));
    }
    parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&MaybeTypeIsAbstractNoncanonical_14, STATE_VARIABLE_MaybeTerm_30_30, &STATE_VARIABLE_MaybeTerm_32_32);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", VarSet_8, &MaybeRepresentationIs_15, STATE_VARIABLE_MaybeTerm_32_32, &STATE_VARIABLE_MaybeTerm_34_34);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "ground", VarSet_8, GroundContextPieces_11, &MaybeGroundIs_16, STATE_VARIABLE_MaybeTerm_34_34, &STATE_VARIABLE_MaybeTerm_38_38);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "any", VarSet_8, AnyContextPieces_12, &MaybeAnyIs_17, STATE_VARIABLE_MaybeTerm_38_38, &STATE_VARIABLE_MaybeTerm_42_42);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", ModuleName_7, &MaybeCStoreIs_18, STATE_VARIABLE_MaybeTerm_42_42, &STATE_VARIABLE_MaybeTerm_46_46);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", ModuleName_7, VarSet_8, &MaybeEqualityIs_19, STATE_VARIABLE_MaybeTerm_46_46, &STATE_VARIABLE_MaybeTerm_50_50);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", ModuleName_7, VarSet_8, &MaybeComparisonIs_20, STATE_VARIABLE_MaybeTerm_50_50, &STATE_VARIABLE_MaybeTerm_54_54);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", ModuleName_7, VarSet_8, &MaybeDirectArgIs_21, STATE_VARIABLE_MaybeTerm_54_54, &STATE_VARIABLE_MaybeTerm_58_58);
    if ((STATE_VARIABLE_MaybeTerm_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybeEndSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[9]);
    }
    else
    {
      MR_Word EndTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTerm_58_58, (MR_Integer) 0)));
      MR_Word EndSpec_25;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_78;

      Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, EndTerm_23);
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[196])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        EndSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EndSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), EndSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), EndSpec_25, 2) = ((MR_Box) (Var_71));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (EndSpec_25));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MaybeEndSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[22]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 2)));
        succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;
        MR_Word ContextPieces_58;

        ContextPieces_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[21]), Var_53, ContextPieces_58, RHS_10, &RHSResult_13);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          Result_8 = (MR_Word) RHSResult_13;
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0)));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
      {
        Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[22]);
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(Var_29, Var_30, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 2)));
        succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(Var_53, Var_54, RHS_10);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          Result_8 = (MR_Word) RHSResult_13;
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0)));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
      {
        Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]);
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[19]), VarSet_7, ContextPieces_8, Term_9, &MaybeInst0_11);
    if (((MR_tag((MR_Word) MaybeInst0_11)) == (MR_mktag((MR_Integer) 0))))
      MaybeInst_10 = MaybeInst0_11;
    else
    {
      MR_Word Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst0_11, (MR_Integer) 0)));

      succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(Inst_13);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_44_44 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word TypeCtorInfo_45_45;
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

        TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_44_44, VarSet_7, Term_9);
        TypeCtorInfo_45_45 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        Var_19 = mercury__cord__list_1_f_0(TypeCtorInfo_45_45, ContextPieces_8);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (TermStr_14));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[128])));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
        }
        Pieces_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_45_45, Var_19, Var_20);
        Var_37 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_44_44, Term_9);
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Pieces_15));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_35));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  {
    MR_bool succeeded;

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[18]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(Var_28, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(Var_28, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
  MR_Word Var_126,
  MR_String HeadVar__1_47,
  MR_Word HeadVar__3_102)
{
  {
    MR_Word HeadVar__4_103;

    HeadVar__4_103 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(Var_126, HeadVar__1_47, HeadVar__3_102);
    return HeadVar__4_103;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(
  MR_Word Var_52,
  MR_String Name_5,
  MR_Word Term_7)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 2)));
        succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(Var_52, RHS_10);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          Result_8 = (MR_Word) RHSResult_13;
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0)));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
      {
        Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[18]);
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_8, 0) = ((MR_Box) (Var_47));
      }
    }
    return Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeItemMutableInfo_6;

    parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_MaybeItemMutableInfo_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeItemMutableInfo_6));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(
  MR_Word ModuleName_4,
  MR_Word Term_5)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word MaybeItems_6;
    MR_Word Var_15;
    MR_String Var_16;
    MR_Word Var_7;
    MR_Word Var_8;

    if (succeeded)
    {
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1)));
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
        succeeded = (strcmp(Var_16, (MR_String) "mutable") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word MaybeItem_9;

      parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(ModuleName_4, Term_5, &MaybeItem_9);
      if (((MR_tag((MR_Word) MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
        MaybeItems_6 = (MR_Word) MaybeItem_9;
      else
      {
        MR_Word Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeItem_9, (MR_Integer) 0)));
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Mutable_10));
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeItems_6, 0) = ((MR_Box) (Var_17));
        }
      }
    }
    else
    {
      MR_Word Terms_12;

      succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(Term_5, &Terms_12);
      if (succeeded)
      {
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleName_4));
        }
        parse_tree__parse_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, Var_19, Terms_12, &MaybeItems_6);
      }
      else
      {
        MR_Word Spec_14;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_37;

        Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_5);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[193])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_30));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeItems_6, 0) = ((MR_Box) (Var_37));
        }
      }
    }
    return MaybeItems_6;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Term_5,
  MR_Word * MaybeItemMutableInfo_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ArgTerms_7;
    MR_Word Context_8;
    MR_Word Var_13;
    MR_String Var_14;

    if (succeeded)
    {
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0)));
      ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1)));
      Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
        succeeded = (strcmp(Var_14, (MR_String) "mutable") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_9;

      mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &VarSet_9);
      parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(ModuleName_4, VarSet_9, ArgTerms_7, Context_8, (MR_Integer) -1, (MR_Integer) 1, MaybeItemMutableInfo_6);
    }
    else
    {
      MR_Word Spec_12;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_30;

      Var_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_5);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[192])));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_23));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Spec_12));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemMutableInfo_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 2)));
        succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(Var_52, Var_53, RHS_10, &RHSResult_13);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          Result_8 = (MR_Word) RHSResult_13;
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0)));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
      {
        Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[13]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *MaybeTailTerm_8 = MaybeTerm_7;
        else
          *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Result_8;
    MR_Word LHS_9;
    MR_Word RHS_10;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
        succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
              succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 0)));
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LHS_9, (MR_Integer) 2)));
        succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
            succeeded = (strcmp(Name_5, Var_51) == 0);
          }
        }
      }
      if (succeeded)
      {
        MR_Word RHSResult_13;

        RHSResult_13 = parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(Var_52, Var_53, RHS_10);
        if (((MR_tag((MR_Word) RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          Result_8 = (MR_Word) RHSResult_13;
        else
        {
          MR_Word ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSResult_13, (MR_Integer) 0)));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParsedRHS_14));
          }
          {
            Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result_8, 0) = ((MR_Box) (Var_25));
          }
        }
      }
      else
      {
        Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[13]);
      }
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;

      Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_MaybeFunctor_8);
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
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleName_5));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (VarSet_6));
      }
      parse_tree__parse_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, Var_12, FunctorsTerms_9, &MaybeDirectArgCtors_8);
    }
    else
    {
      MR_Word Spec_11;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_33;

      Var_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[190])));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_11, 2) = ((MR_Box) (Var_26));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Spec_11));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    if ((MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[11]);
    }
    else
    {
      MR_Word Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTerm_7, (MR_Integer) 0)));
      MR_Word MaybeTailTermIfYes_13;
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_16;
      MR_String Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_12;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
          succeeded = (strcmp(Var_17, (MR_String) ",") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
                succeeded = (Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(HeadTerm_10);
        {
          MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
        }
      }
      else
      {
        *Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(Term_9);
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *Result_6)) == (MR_mktag((MR_Integer) 0))))
        *MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *Result_6, (MR_Integer) 0)));

        if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word HeadVar__2_2;
    MR_Word Var_5;
    MR_String Var_6;
    MR_Word Var_7;
    MR_Word Var_4;

    if (succeeded)
    {
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
      Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
      succeeded = (Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
          succeeded = (strcmp(Var_6, (MR_String) "type_is_abstract_noncanonical") == 0);
        }
      }
    }
    if (succeeded)
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[10]);
    }
    else
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[11]);
    }
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
    MR_bool succeeded = ((MR_tag((MR_Word) MaybeWhereEnd_22)) == (MR_mktag((MR_Integer) 1)));
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
      succeeded = ((MR_tag((MR_Word) MaybeTypeIsAbstractNoncanonical_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        TypeIsAbstractNoncanonical_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTypeIsAbstractNoncanonical_14, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) MaybeRepresentationIs_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          RepresentationIs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepresentationIs_15, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeGroundIs_16)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            GroundIs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeGroundIs_16, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) MaybeAnyIs_17)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              AnyIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAnyIs_17, (MR_Integer) 0)));
              succeeded = ((MR_tag((MR_Word) MaybeCStoreIs_18)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                CStoreIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCStoreIs_18, (MR_Integer) 0)));
                succeeded = ((MR_tag((MR_Word) MaybeEqualityIs_19)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  EqualityIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeEqualityIs_19, (MR_Integer) 0)));
                  succeeded = ((MR_tag((MR_Word) MaybeComparisonIs_20)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ComparisonIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeComparisonIs_20, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) MaybeDirectArgIs_21)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                      DirectArgIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDirectArgIs_21, (MR_Integer) 0)));
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
      MR_Word TypeCtorInfo_51_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word TypeInfo_54_54;
      MR_Word TypeInfo_56_56;
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

      Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[11], MaybeTypeIsAbstractNoncanonical_14);
      Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[12], MaybeRepresentationIs_15);
      TypeInfo_54_54 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[13];
      Var_39 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_54_54, MaybeGroundIs_16);
      Var_41 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_54_54, MaybeAnyIs_17);
      Var_43 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[14], MaybeCStoreIs_18);
      TypeInfo_56_56 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[2];
      Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_56_56, MaybeEqualityIs_19);
      Var_47 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_56_56, MaybeComparisonIs_20);
      Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[8], MaybeDirectArgIs_21);
      Var_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, MaybeWhereEnd_22);
      Var_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_49, Var_50);
      Var_46 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_47, Var_48);
      Var_44 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_45, Var_46);
      Var_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_43, Var_44);
      Var_40 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_41, Var_42);
      Var_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_39, Var_40);
      Var_36 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_37, Var_38);
      Specs_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_51_51, Var_35, Var_36);
      {
        MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    if ((TypeIsAbstractNoncanonical_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (IsSolverType_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word Var_39;

              succeeded = ((MR_tag((MR_Word) RepresentationIs_14)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), RepresentationIs_14, (MR_Integer) 0)));
            }
            if (!(succeeded))
            {
              {
                MR_Word Var_40;

                succeeded = ((MR_tag((MR_Word) GroundIs_15)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), GroundIs_15, (MR_Integer) 0)));
              }
              if (!(succeeded))
              {
                {
                  MR_Word Var_41;

                  succeeded = ((MR_tag((MR_Word) AnyIs_16)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), AnyIs_16, (MR_Integer) 0)));
                }
                if (!(succeeded))
                {
                  MR_Word Var_42;

                  succeeded = ((MR_tag((MR_Word) CStoreIs_17)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), CStoreIs_17, (MR_Integer) 0)));
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_61;
              MR_Word Spec_130;

              Var_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, WhereTerm_21);
              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[187])));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Spec_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), Spec_130, 2) = ((MR_Box) (Var_54));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_130));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_61));
              }
            }
            else
            {
              MR_Word MaybeUC_43;

              MaybeUC_43 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(EqualityIs_18, ComparisonIs_19);
              {
                MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (MaybeUC_43));
                MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 2) = ((MR_Box) (DirectArgIs_20));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_25;

            succeeded = ((MR_tag((MR_Word) DirectArgIs_20)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), DirectArgIs_20, (MR_Integer) 0)));
              {
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_84;
                MR_Word Spec_121;

                Var_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, WhereTerm_21);
                {
                  Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[188])));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), Spec_121, 2) = ((MR_Box) (Var_77));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Spec_121));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_84));
                }
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

              succeeded = ((MR_tag((MR_Word) RepresentationIs_14)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                RepnType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), RepresentationIs_14, (MR_Integer) 0)));
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
                MR_Word MaybeUnifyCompare_38;

                if ((MaybeGroundInst_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  GroundInst_33 = parse_tree__prog_mode__ground_inst_0_f_0();
                else
                  GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeGroundInst_28, (MR_Integer) 0)));
                if ((MaybeAnyInst_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  AnyInst_34 = parse_tree__prog_mode__ground_inst_0_f_0();
                else
                  AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAnyInst_29, (MR_Integer) 0)));
                if ((MaybeMutableInfos_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  MutableInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  MutableInfos_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMutableInfos_32, (MR_Integer) 0)));
                {
                  SolverTypeDetails_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 0) = ((MR_Box) (RepnType_27));
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 1) = ((MR_Box) (GroundInst_33));
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 2) = ((MR_Box) (AnyInst_34));
                  MR_hl_field(MR_mktag(0), SolverTypeDetails_36, 3) = ((MR_Box) (MutableInfos_35));
                }
                {
                  MaybeSolverTypeDetails_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeSolverTypeDetails_37, 0) = ((MR_Box) (SolverTypeDetails_36));
                }
                succeeded = (MaybeEqPred_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                  succeeded = (MaybeCmpPred_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                  MaybeUnifyCompare_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                {
                  MR_Word Var_86;

                  {
                    Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (MaybeEqPred_30));
                    MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (MaybeCmpPred_31));
                  }
                  {
                    MaybeUnifyCompare_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeUnifyCompare_38, 0) = ((MR_Box) (Var_86));
                  }
                }
                {
                  MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) (MaybeSolverTypeDetails_37));
                  MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (MaybeUnifyCompare_38));
                  MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              else
              {
                succeeded = (RepresentationIs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  MR_Word Var_101;
                  MR_Word Var_102;
                  MR_Word Var_103;
                  MR_Word Var_108;
                  MR_Word Spec_122;

                  Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, WhereTerm_21);
                  {
                    Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
                    MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[189])));
                  }
                  {
                    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
                    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Spec_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), Spec_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), Spec_122, 2) = ((MR_Box) (Var_101));
                  }
                  {
                    Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Spec_122));
                    MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_108));
                  }
                }
                else
                {
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_type_defn", (MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                }
              }
            }
          }
          break;
      }
    else
    {
      succeeded = (RepresentationIs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (GroundIs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (AnyIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = (EqualityIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = (ComparisonIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = (CStoreIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                  succeeded = (DirectArgIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_116;
        MR_Word Var_117;

        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (IsSolverType_12));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
        }
        {
          MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 1) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(1), MaybeWhereDetails_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word Spec_24;
        MR_Word Var_119;

        Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(WhereTerm_21);
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeWhereDetails_22, 0) = ((MR_Box) (Var_119));
        }
      }
    }
    return MaybeWhereDetails_22;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word MaybeEqPred_4,
  MR_Word MaybeCmpPred_5)
{
  {
    MR_bool succeeded = (MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word HeadVar__3_3;

    if (succeeded)
      succeeded = (MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_6;

      {
        Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (MaybeEqPred_4));
        MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (MaybeCmpPred_5));
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      }
    }
    return HeadVar__3_3;
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

    Var_27 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_3);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[186])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), DirectArgCtor_12, (MR_Integer) 0)));
      MR_Integer Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DirectArgCtor_12, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word Ctor_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      succeeded = parse_tree__parse_type_defn__find_constructor_4_p_0(HeadVar__1_1, SymName_16, Arity_17, &Ctor_18);
      if (succeeded)
      {
        MR_Word ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 0)));
        MR_Word _Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 1)));
        MR_Word _SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 2)));
        MR_Word _Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 3)));
        MR_Integer _Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 4)));
        MR_Word _Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 5)));

        succeeded = (Arity_17 == (MR_Integer) 1);
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word Spec_26;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;

          Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadVar__3_3);
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[181])));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_47));
          }
          {
            STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
        else
        if ((ExistQVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_4;
        else
        {
          MR_Word Var_57;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Pieces_108;
          MR_Word Spec_109;

          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (DirectArgCtor_12));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[93])));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
          }
          {
            Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[182])));
            MR_hl_field(MR_mktag(1), Pieces_108, 1) = ((MR_Box) (Var_57));
          }
          Var_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadVar__3_3);
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Pieces_108));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (Var_76));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_109, 2) = ((MR_Box) (Var_73));
          }
          {
            STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (Spec_109));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
      }
      else
      {
        MR_Word Var_83;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Pieces_112;
        MR_Word Spec_113;

        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (DirectArgCtor_12));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[95])));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[185])));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
        }
        {
          Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[182])));
          MR_hl_field(MR_mktag(1), Pieces_112, 1) = ((MR_Box) (Var_83));
        }
        Var_101 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, HeadVar__3_3);
        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Pieces_112));
        }
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (Var_102));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_113, 2) = ((MR_Box) (Var_99));
        }
        {
          STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (Spec_113));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = DirectArgCtors_13;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_54_54;
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
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Ctor_5;
    MR_Word Ctors_6;
    MR_Word Var_14;
    MR_Integer Var_15;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word _Args_12;
    MR_Word Var_13;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Ctor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Ctors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 0)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 1)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 2)));
      _Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 3)));
      Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 4)));
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 5)));
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
    MR_String conv10_HeadVar__3_301;

    conv10_HeadVar__3_301 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__541__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__3_301));
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

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__535__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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

    conv9_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) wrapper_arg_1));
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
    MR_String conv6_HeadVar__3_285;

    conv6_HeadVar__3_285 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__513__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_285));
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

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__506__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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
    MR_Word conv5_LambdaHeadVar__2_125;

    conv5_LambdaHeadVar__2_125 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__502__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_125));
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
    MR_String conv2_HeadVar__3_272;

    conv2_HeadVar__3_272 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__487__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_272));
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

    succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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
    MR_Word conv0_LambdaHeadVar__2_59;

    conv0_LambdaHeadVar__2_59 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__454__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_59));
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
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
      MR_Word Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1)));
      MR_Word CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3)));
      MR_Word STATE_VARIABLE_Specs_86_86;
      MR_Word _CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2)));
      MR_Integer _Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4)));
      MR_Word _Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 5)));
      MR_Word NotExistQOrParamVars_30;
      MR_Word TypeInfo_259_259;
      MR_Word CtorArgTypes_25;
      MR_Word VarsInCtorArgTypes0_27;
      MR_Word VarsInCtorArgTypes_28;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word _ExistQOrParamVars_29;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      CtorArgTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[3], CtorArgs_22);
      parse_tree__prog_type__type_vars_list_2_p_0(CtorArgTypes_25, &VarsInCtorArgTypes0_27);
      TypeInfo_259_259 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
      mercury__list__sort_and_remove_dups_2_p_0(TypeInfo_259_259, VarsInCtorArgTypes0_27, &VarsInCtorArgTypes_28);
      Var_61 = mercury__list__f_43_43_2_f_0(TypeInfo_259_259, ExistQVars_19, HeadVar__1_1);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2]));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Var_61));
      }
      mercury__list__filter_4_p_0(TypeInfo_259_259, Var_60, VarsInCtorArgTypes_28, &_ExistQOrParamVars_29, &NotExistQOrParamVars_30);
      succeeded = ((MR_tag((MR_Word) NotExistQOrParamVars_30)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), NotExistQOrParamVars_30, (MR_Integer) 0)));
        Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), NotExistQOrParamVars_30, (MR_Integer) 1)));
        {
          MR_Word TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_Word TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
          MR_Word GenericVarSet_33;
          MR_String NotExistQOrParamVarsStr_34;
          MR_Word Pieces_35;
          MR_Word Spec_36;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_String Var_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Box conv1_Var_66;

          mercury__varset__coerce_2_p_0(TypeCtorInfo_262_262, TypeCtorInfo_263_263, VarSet_2, &GenericVarSet_33);
          NotExistQOrParamVarsStr_34 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(TypeCtorInfo_263_263, GenericVarSet_33, NotExistQOrParamVars_30);
          conv1_Var_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, NotExistQOrParamVars_30, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
          Var_66 = ((MR_String) conv1_Var_66);
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (NotExistQOrParamVarsStr_34));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_69));
          }
          {
            Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[177])));
            MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_64));
          }
          Var_81 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_262_262, BodyTerm_3);
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_35));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_79));
          }
          {
            STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
          }
        }
      }
      else
      {
        MR_Word ExistQParamsSet_39;
        MR_Word TypeInfo_266_266 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
        MR_Word ExistQVarsSet_37;
        MR_Word ParamsSet_38;

        mercury__set__list_to_set_2_p_0(TypeInfo_266_266, ExistQVars_19, &ExistQVarsSet_37);
        mercury__set__list_to_set_2_p_0(TypeInfo_266_266, HeadVar__1_1, &ParamsSet_38);
        mercury__set__intersect_3_p_0(TypeInfo_266_266, ExistQVarsSet_37, ParamsSet_38, &ExistQParamsSet_39);
        succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo_266_266, ExistQParamsSet_39);
        if (succeeded)
        {
          MR_Word TypeInfo_267_267 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
          MR_Word TypeCtorInfo_268_268;
          MR_Word TypeCtorInfo_270_270;
          MR_Word TypeCtorInfo_274_274;
          MR_Word ExistQParams_40;
          MR_Word ExistQParamVarsStrs_41;
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
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word GenericVarSet_219;
          MR_Word Pieces_220;
          MR_Word Spec_221;
          MR_Box conv3_Var_93;
          MR_Box conv4_Var_101;

          mercury__set__to_sorted_list_2_p_0(TypeInfo_267_267, ExistQParamsSet_39, &ExistQParams_40);
          TypeCtorInfo_268_268 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          mercury__varset__coerce_2_p_0(TypeCtorInfo_268_268, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_2, &GenericVarSet_219);
          TypeCtorInfo_270_270 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (GenericVarSet_219));
          }
          ExistQParamVarsStrs_41 = mercury__list__map_2_f_0(TypeInfo_267_267, TypeCtorInfo_270_270, Var_87, ExistQParams_40);
          TypeCtorInfo_274_274 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          conv3_Var_93 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_267_267, TypeCtorInfo_270_270, ExistQParams_40, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
          Var_93 = ((MR_String) conv3_Var_93);
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
          }
          Var_98 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(ExistQParamVarsStrs_41);
          conv4_Var_101 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_267_267, TypeCtorInfo_270_270, ExistQParams_40, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
          Var_101 = ((MR_String) conv4_Var_101);
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (Var_101));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[73])));
          }
          Var_97 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_98, Var_99);
          Pieces_220 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_274_274, Var_88, Var_97);
          Var_117 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_268_268, BodyTerm_3);
          {
            Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Pieces_220));
          }
          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
            MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Var_117));
            MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Var_118));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
            MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_221, 2) = ((MR_Box) (Var_115));
          }
          {
            STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_221));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
          }
        }
        else
        {
          MR_Word NotOccursExistQVars_44;
          MR_Word TypeInfo_277_277;
          MR_Word ConstraintTVars_42;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word CtorArgTypes_223;
          MR_Word VarsInCtorArgTypes0_224;
          MR_Word VarsInCtorArgTypes_225;
          MR_Word _OccursExistQVars_43;
          MR_Word Var_45;
          MR_Word Var_46;

          CtorArgTypes_223 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[4], CtorArgs_22);
          parse_tree__prog_type__type_vars_list_2_p_0(CtorArgTypes_223, &VarsInCtorArgTypes0_224);
          TypeInfo_277_277 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
          mercury__list__sort_and_remove_dups_2_p_0(TypeInfo_277_277, VarsInCtorArgTypes0_224, &VarsInCtorArgTypes_225);
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_20, &ConstraintTVars_42);
          Var_127 = mercury__list__f_43_43_2_f_0(TypeInfo_277_277, VarsInCtorArgTypes_225, ConstraintTVars_42);
          {
            Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2]));
            MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_5));
            MR_hl_field(MR_mktag(0), Var_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_126, 3) = ((MR_Box) (Var_127));
          }
          mercury__list__filter_4_p_0(TypeInfo_277_277, Var_126, ExistQVars_19, &_OccursExistQVars_43, &NotOccursExistQVars_44);
          succeeded = ((MR_tag((MR_Word) NotOccursExistQVars_44)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), NotOccursExistQVars_44, (MR_Integer) 0)));
            Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), NotOccursExistQVars_44, (MR_Integer) 1)));
            {
              MR_Word TypeCtorInfo_280_280 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_Word TypeInfo_282_282;
              MR_Word TypeCtorInfo_283_283;
              MR_Word TypeCtorInfo_287_287;
              MR_Word NotOccursExistQVarStrs_47;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_String Var_134;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_String Var_145;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word Var_159;
              MR_Word Var_160;
              MR_Word GenericVarSet_226;
              MR_Word Pieces_227;
              MR_Word Spec_228;
              MR_Box conv7_Var_134;
              MR_Box conv8_Var_145;

              mercury__varset__coerce_2_p_0(TypeCtorInfo_280_280, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_2, &GenericVarSet_226);
              TypeInfo_282_282 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
              TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_6));
                MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (GenericVarSet_226));
              }
              NotOccursExistQVarStrs_47 = mercury__list__map_2_f_0(TypeInfo_282_282, TypeCtorInfo_283_283, Var_128, NotOccursExistQVars_44);
              TypeCtorInfo_287_287 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              conv7_Var_134 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_282_282, TypeCtorInfo_283_283, NotOccursExistQVars_44, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
              Var_134 = ((MR_String) conv7_Var_134);
              {
                Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (Var_134));
              }
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
              }
              Var_139 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NotOccursExistQVarStrs_47);
              conv8_Var_145 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_282_282, TypeCtorInfo_283_283, NotOccursExistQVars_44, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
              Var_145 = ((MR_String) conv8_Var_145);
              {
                Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (Var_145));
              }
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
                MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[75])));
              }
              {
                Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[179])));
                MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
              }
              Var_138 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_287_287, Var_139, Var_140);
              Pieces_227 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_287_287, Var_129, Var_138);
              Var_158 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_280_280, BodyTerm_3);
              {
                Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (Pieces_227));
              }
              {
                Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
                MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (Var_158));
                MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (Var_159));
              }
              {
                Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
                MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_228, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Spec_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), Spec_228, 2) = ((MR_Box) (Var_156));
              }
              {
                STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_228));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
          }
          else
          {
            MR_Word NotExistQArgTypes_51;
            MR_Word TypeInfo_293_293;
            MR_Word ConstraintArgTypeLists_48;
            MR_Word ConstraintArgTypes_49;
            MR_Word Var_165;
            MR_Word VarsInCtorArgTypes0_229;
            MR_Word VarsInCtorArgTypes_230;
            MR_Word _ExistQArgTypes_50;
            MR_Word Var_52;
            MR_Word Var_53;

            ConstraintArgTypeLists_48 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[9], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[5], Constraints_20);
            mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ConstraintArgTypeLists_48, &ConstraintArgTypes_49);
            parse_tree__prog_type__type_vars_list_2_p_0(ConstraintArgTypes_49, &VarsInCtorArgTypes0_229);
            TypeInfo_293_293 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
            mercury__list__sort_and_remove_dups_2_p_0(TypeInfo_293_293, VarsInCtorArgTypes0_229, &VarsInCtorArgTypes_230);
            {
              Var_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2]));
              MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_8));
              MR_hl_field(MR_mktag(0), Var_165, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_165, 3) = ((MR_Box) (ExistQVars_19));
            }
            mercury__list__filter_4_p_0(TypeInfo_293_293, Var_165, VarsInCtorArgTypes_230, &_ExistQArgTypes_50, &NotExistQArgTypes_51);
            succeeded = ((MR_tag((MR_Word) NotExistQArgTypes_51)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), NotExistQArgTypes_51, (MR_Integer) 0)));
              Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), NotExistQArgTypes_51, (MR_Integer) 1)));
              {
                MR_Word TypeCtorInfo_296_296 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                MR_Word TypeInfo_298_298;
                MR_Word TypeCtorInfo_299_299;
                MR_Word TypeCtorInfo_303_303;
                MR_Word NotExistQArgTypeStrs_54;
                MR_Word Var_166;
                MR_Word Var_167;
                MR_Word Var_170;
                MR_Word Var_171;
                MR_String Var_172;
                MR_Word Var_176;
                MR_Word Var_177;
                MR_Word Var_178;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_String Var_183;
                MR_Word Var_209;
                MR_Word Var_210;
                MR_Word Var_211;
                MR_Word Var_212;
                MR_Word Var_213;
                MR_Word GenericVarSet_231;
                MR_Word Pieces_232;
                MR_Word Spec_233;
                MR_Box conv11_Var_172;
                MR_Box conv12_Var_183;

                mercury__varset__coerce_2_p_0(TypeCtorInfo_296_296, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, VarSet_2, &GenericVarSet_231);
                TypeInfo_298_298 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                TypeCtorInfo_299_299 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  Var_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_9));
                  MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (GenericVarSet_231));
                }
                NotExistQArgTypeStrs_54 = mercury__list__map_2_f_0(TypeInfo_298_298, TypeCtorInfo_299_299, Var_166, NotExistQArgTypes_51);
                TypeCtorInfo_303_303 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                conv11_Var_172 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_298_298, TypeCtorInfo_299_299, NotExistQArgTypes_51, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                Var_172 = ((MR_String) conv11_Var_172);
                {
                  Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (Var_172));
                }
                {
                  Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
                  MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
                  MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_170));
                }
                Var_177 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(NotExistQArgTypeStrs_54);
                conv12_Var_183 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_298_298, TypeCtorInfo_299_299, NotExistQArgTypes_51, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                Var_183 = ((MR_String) conv12_Var_183);
                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_182, 1) = ((MR_Box) (Var_183));
                }
                {
                  Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Var_182));
                  MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[84])));
                }
                {
                  Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[180])));
                  MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_181));
                }
                Var_176 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_303_303, Var_177, Var_178);
                Pieces_232 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_303_303, Var_167, Var_176);
                Var_211 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_296_296, BodyTerm_3);
                {
                  Var_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_213, 0) = ((MR_Box) (Pieces_232));
                }
                {
                  Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_213));
                  MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_210, 0) = ((MR_Box) (Var_211));
                  MR_hl_field(MR_mktag(0), Var_210, 1) = ((MR_Box) (Var_212));
                }
                {
                  Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (Var_210));
                  MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Spec_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Spec_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), Spec_233, 2) = ((MR_Box) (Var_209));
                }
                {
                  STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_233));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
                }
              }
            }
            else
              STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_5;
          }
        }
      }
      // direct tailcall eliminated
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

    parse_tree__parse_util__disjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, Term_7, &Var_11);
    HeadBodyTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0)));
    TailBodyTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1)));
    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(ModuleName_5, VarSet_6, HeadBodyTerm_9, TailBodyTerms_10, MaybeConstructors_8);
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word HeadTerm_8,
  MR_Word TailTerms_9,
  MR_Word * MaybeConstructors_10)
{
  {
    MR_bool succeeded;
    MR_Word MaybeHeadConstructor_11;

    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(ModuleName_6, VarSet_7, HeadTerm_8, &MaybeHeadConstructor_11);
    if ((TailTerms_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 0))))
        *MaybeConstructors_10 = (MR_Word) MaybeHeadConstructor_11;
      else
      {
        MR_Word HeadConstructor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeHeadConstructor_11, (MR_Integer) 0)));
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (HeadConstructor_12));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeConstructors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
        }
      }
    else
    {
      MR_Word HeadTailTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailTerms_9, (MR_Integer) 0)));
      MR_Word TailTailTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailTerms_9, (MR_Integer) 1)));
      MR_Word MaybeTailConstructors_16;
      MR_Word TailConstructors_17;
      MR_Word HeadConstructor_24;

      parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(ModuleName_6, VarSet_7, HeadTailTerm_14, TailTailTerms_15, &MaybeTailConstructors_16);
      succeeded = ((MR_tag((MR_Word) MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadConstructor_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeHeadConstructor_11, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) MaybeTailConstructors_16)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          TailConstructors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTailConstructors_16, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word Var_18;

        Var_18 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ((MR_Box) (HeadConstructor_24)), TailConstructors_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeConstructors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
        }
      }
      else
      {
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Specs_23;

        Var_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, MaybeHeadConstructor_11);
        Var_20 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[5], MaybeTailConstructors_16);
        Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, Var_19, Var_20);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeConstructors_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_23));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_37;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__306__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_37);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_37));
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeConstructor_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word VarsTerm_9;
    MR_Word SubTerm_10;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_11;

    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
        succeeded = (strcmp(Var_18, (MR_String) "some") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            VarsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              SubTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
              Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
              succeeded = (Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ContextPieces_12;
      MR_Word MaybeExistQVars_13;

      ContextPieces_12 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[65]));
      parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarsTerm_9, VarSet_6, ContextPieces_12, &MaybeExistQVars_13);
      if (((MR_tag((MR_Word) MaybeExistQVars_13)) == (MR_mktag((MR_Integer) 0))))
        *MaybeConstructor_8 = (MR_Word) MaybeExistQVars_13;
      else
      {
        MR_Word ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeExistQVars_13, (MR_Integer) 0)));
        MR_Word ExistQTVars_15;
        MR_Word BeforeConstraintsTerm_47;
        MR_Word MaybeConstraints_48;
        MR_Word ExistentialConstraints_84;
        MR_Word STATE_VARIABLE_PredTypeTerm_17_89;
        MR_Word Var_86;
        MR_String Var_87;
        MR_Word Var_88;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_85;

        mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[2], ExistQVars_14, &ExistQTVars_15);
        succeeded = ((MR_tag((MR_Word) SubTerm_10)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_10, (MR_Integer) 0)));
          Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_10, (MR_Integer) 1)));
          Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubTerm_10, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_86, (MR_Integer) 0)));
            succeeded = (strcmp(Var_87, (MR_String) "=>") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                STATE_VARIABLE_PredTypeTerm_17_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 0)));
                Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  ExistentialConstraints_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0)));
                  Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1)));
                  succeeded = (Var_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          BeforeConstraintsTerm_47 = STATE_VARIABLE_PredTypeTerm_17_89;
          parse_tree__parse_class__parse_class_constraints_4_p_0(ModuleName_5, VarSet_6, ExistentialConstraints_84, &MaybeConstraints_48);
        }
        else
        {
          MaybeConstraints_48 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[3]);
          BeforeConstraintsTerm_47 = SubTerm_10;
        }
        if (((MR_tag((MR_Word) MaybeConstraints_48)) == (MR_mktag((MR_Integer) 0))))
          *MaybeConstructor_8 = (MR_Word) MaybeConstraints_48;
        else
        {
          MR_Word TypeCtorInfo_40_76;
          MR_Word Constraints_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_48, (MR_Integer) 0)));
          MR_Word MainTerm_53;
          MR_Word ContextPieces_54;
          MR_Word MaybeFunctorAndArgTerms_55;
          MR_Word InsideBracesTerm_51;
          MR_Word Var_61;
          MR_String Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word _Context_52;

          succeeded = ((MR_tag((MR_Word) BeforeConstraintsTerm_47)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_47, (MR_Integer) 0)));
            Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_47, (MR_Integer) 1)));
            _Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_47, (MR_Integer) 2)));
            succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
              succeeded = (strcmp(Var_62, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_63)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  InsideBracesTerm_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0)));
                  Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 1)));
                  succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
          if (succeeded)
            MainTerm_53 = InsideBracesTerm_51;
          else
            MainTerm_53 = BeforeConstraintsTerm_47;
          ContextPieces_54 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[176]))));
          TypeCtorInfo_40_76 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_40_76, ModuleName_5, MainTerm_53, VarSet_6, ContextPieces_54, &MaybeFunctorAndArgTerms_55);
          if (((MR_tag((MR_Word) MaybeFunctorAndArgTerms_55)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word Specs_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeConstructor_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_69));
            }
          }
          else
          {
            MR_Word Functor_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));
            MR_Word ArgTerms_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_55, (MR_Integer) 1)));
            MR_Word MaybeConstructorArgs_58;

            MaybeConstructorArgs_58 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_5, VarSet_6, ArgTerms_57);
            if (((MR_tag((MR_Word) MaybeConstructorArgs_58)) == (MR_mktag((MR_Integer) 0))))
              *MaybeConstructor_8 = (MR_Word) MaybeConstructorArgs_58;
            else
            {
              MR_Word ConstructorArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstructorArgs_58, (MR_Integer) 0)));
              MR_Word Ctor_60;
              MR_Integer Var_67;
              MR_Word Var_68;

              Var_67 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ConstructorArgs_59);
              Var_68 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_40_76, MainTerm_53);
              {
                Ctor_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Ctor_60, 0) = ((MR_Box) (ExistQTVars_15));
                MR_hl_field(MR_mktag(0), Ctor_60, 1) = ((MR_Box) (Constraints_50));
                MR_hl_field(MR_mktag(0), Ctor_60, 2) = ((MR_Box) (Functor_56));
                MR_hl_field(MR_mktag(0), Ctor_60, 3) = ((MR_Box) (ConstructorArgs_59));
                MR_hl_field(MR_mktag(0), Ctor_60, 4) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), Ctor_60, 5) = ((MR_Box) (Var_68));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeConstructor_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_60));
              }
            }
          }
        }
      }
    }
    else
    {
      parse_tree__parse_type_defn__parse_constructor_5_p_0(ModuleName_5, VarSet_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Term_7, MaybeConstructor_8);
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word ExistQVars_8,
  MR_Word Term_9,
  MR_Word * MaybeConstructor_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_mktag((MR_Integer) 0)));
    MR_Word BeforeConstraintsTerm_11;
    MR_Word MaybeConstraints_12;
    MR_Word ExistentialConstraints_48;
    MR_Word STATE_VARIABLE_PredTypeTerm_17_53;
    MR_Word Var_50;
    MR_String Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_49;

    if (succeeded)
    {
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0)));
        succeeded = (strcmp(Var_51, (MR_String) "=>") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            STATE_VARIABLE_PredTypeTerm_17_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 0)));
            Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ExistentialConstraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0)));
              Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1)));
              succeeded = (Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      BeforeConstraintsTerm_11 = STATE_VARIABLE_PredTypeTerm_17_53;
      parse_tree__parse_class__parse_class_constraints_4_p_0(ModuleName_6, VarSet_7, ExistentialConstraints_48, &MaybeConstraints_12);
    }
    else
    {
      MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[3]);
      BeforeConstraintsTerm_11 = Term_9;
    }
    if (((MR_tag((MR_Word) MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
      *MaybeConstructor_10 = (MR_Word) MaybeConstraints_12;
    else
    {
      MR_Word TypeCtorInfo_40_40;
      MR_Word Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstraints_12, (MR_Integer) 0)));
      MR_Word MainTerm_17;
      MR_Word ContextPieces_18;
      MR_Word MaybeFunctorAndArgTerms_19;
      MR_Word InsideBracesTerm_15;
      MR_Word Var_25;
      MR_String Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word _Context_16;

      succeeded = ((MR_tag((MR_Word) BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_11, (MR_Integer) 0)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_11, (MR_Integer) 1)));
        _Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), BeforeConstraintsTerm_11, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
          succeeded = (strcmp(Var_26, (MR_String) "{}") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0)));
              Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1)));
              succeeded = (Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
      if (succeeded)
        MainTerm_17 = InsideBracesTerm_15;
      else
        MainTerm_17 = BeforeConstraintsTerm_11;
      ContextPieces_18 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[176]))));
      TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_40_40, ModuleName_6, MainTerm_17, VarSet_7, ContextPieces_18, &MaybeFunctorAndArgTerms_19);
      if (((MR_tag((MR_Word) MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeConstructor_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_33));
        }
      }
      else
      {
        MR_Word Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
        MR_Word ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
        MR_Word MaybeConstructorArgs_22;

        MaybeConstructorArgs_22 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_6, VarSet_7, ArgTerms_21);
        if (((MR_tag((MR_Word) MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
          *MaybeConstructor_10 = (MR_Word) MaybeConstructorArgs_22;
        else
        {
          MR_Word ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConstructorArgs_22, (MR_Integer) 0)));
          MR_Word Ctor_24;
          MR_Integer Var_31;
          MR_Word Var_32;

          Var_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ConstructorArgs_23);
          Var_32 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_40_40, MainTerm_17);
          {
            Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Ctor_24, 0) = ((MR_Box) (ExistQVars_8));
            MR_hl_field(MR_mktag(0), Ctor_24, 1) = ((MR_Box) (Constraints_14));
            MR_hl_field(MR_mktag(0), Ctor_24, 2) = ((MR_Box) (Functor_20));
            MR_hl_field(MR_mktag(0), Ctor_24, 3) = ((MR_Box) (ConstructorArgs_23));
            MR_hl_field(MR_mktag(0), Ctor_24, 4) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), Ctor_24, 5) = ((MR_Box) (Var_32));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeConstructor_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_24));
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

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[1]);
    }
    else
    {
      MR_Word Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word NameTerm_13;
      MR_Word TypeTerm_14;
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_15;

      succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0)));
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
          succeeded = (strcmp(Var_28, (MR_String) "::") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0)));
              Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0)));
                Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1)));
                succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_54_54;
        MR_Word ContextPieces_16;
        MR_Word MaybeSymNameAndArgs_17;

        ContextPieces_16 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[174]))));
        TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_54_54, ModuleName_1, NameTerm_13, VarSet_2, ContextPieces_16, &MaybeSymNameAndArgs_17);
        if (((MR_tag((MR_Word) MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeSymNameAndArgs_17, (MR_Integer) 0)));

          {
            HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (Specs_18));
          }
        }
        else
        {
          MR_Word SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_17, (MR_Integer) 0)));
          MR_Word SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameAndArgs_17, (MR_Integer) 1)));

          if ((SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word NameCtxt_25;
            MR_Word MaybeCtorFieldName_26;
            MR_Word Var_34;
            MR_Word ContextPieces_61;
            MR_Word MaybeType_62;

            NameCtxt_25 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_54_54, NameTerm_13);
            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (SymName_19));
              MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (NameCtxt_25));
            }
            {
              MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeCtorFieldName_26, 0) = ((MR_Box) (Var_34));
            }
            ContextPieces_61 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))));
            parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), VarSet_2, ContextPieces_61, TypeTerm_14, &MaybeType_62);
            if (((MR_tag((MR_Word) MaybeType_62)) == (MR_mktag((MR_Integer) 0))))
              HeadVar__4_4 = (MR_Word) MaybeType_62;
            else
            {
              MR_Word Type_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_62, (MR_Integer) 0)));
              MR_Word Context_64;
              MR_Word Arg_65;
              MR_Word MaybeTailArgs_66;

              Context_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, TypeTerm_14);
              {
                Arg_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Arg_65, 0) = ((MR_Box) (MaybeCtorFieldName_26));
                MR_hl_field(MR_mktag(0), Arg_65, 1) = ((MR_Box) (Type_63));
                MR_hl_field(MR_mktag(0), Arg_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Arg_65, 3) = ((MR_Box) (Context_64));
              }
              MaybeTailArgs_66 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_1, VarSet_2, Terms_11);
              if (((MR_tag((MR_Word) MaybeTailArgs_66)) == (MR_mktag((MR_Integer) 0))))
                HeadVar__4_4 = MaybeTailArgs_66;
              else
              {
                MR_Word Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTailArgs_66, (MR_Integer) 0)));
                MR_Word Var_73;

                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Arg_65));
                  MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Args_68));
                }
                {
                  HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_73));
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

            Var_44 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_54_54, Term_10);
            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[175])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_42));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (Var_49));
            }
          }
        }
      }
      else
      {
        HeadVar__4_4 = parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(ModuleName_1, VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Term_10, Terms_11);
      }
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

    ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), VarSet_8, ContextPieces_13, TypeTerm_10, &MaybeType_14);
    if (((MR_tag((MR_Word) MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
      MaybeArgs_12 = (MR_Word) MaybeType_14;
    else
    {
      MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_14, (MR_Integer) 0)));
      MR_Word Context_16;
      MR_Word Arg_17;
      MR_Word MaybeTailArgs_18;

      Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, TypeTerm_10);
      {
        Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg_17, 0) = ((MR_Box) (MaybeCtorFieldName_9));
        MR_hl_field(MR_mktag(0), Arg_17, 1) = ((MR_Box) (Type_15));
        MR_hl_field(MR_mktag(0), Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Arg_17, 3) = ((MR_Box) (Context_16));
      }
      MaybeTailArgs_18 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_7, VarSet_8, Terms_11);
      if (((MR_tag((MR_Word) MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
        MaybeArgs_12 = MaybeTailArgs_18;
      else
      {
        MR_Word Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTailArgs_18, (MR_Integer) 0)));
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Arg_17));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Args_20));
        }
        {
          MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArgs_12, 0) = ((MR_Box) (Var_25));
        }
      }
    }
    return MaybeArgs_12;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word Term_4,
  MR_Word * CtorsTerm_5,
  MR_Word * MaybeWhereTerm_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word CtorsTermPrime_9;
    MR_Word WhereTerm_10;
    MR_Word Args_7;
    MR_Word Var_11;
    MR_String Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word _Context_8;

    if (succeeded)
    {
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 0)));
      Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1)));
      _Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0)));
        succeeded = (strcmp(Var_12, (MR_String) "where") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Args_7)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            CtorsTermPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0)));
            Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1)));
              succeeded = (Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeWhereTerm_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WhereTerm_10));
      }
    }
    else
    {
      *CtorsTerm_5 = Term_4;
      *MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_HeadVar__3_148;

    conv3_HeadVar__3_148 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_148));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_142;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__1_2_p_0(((MR_Word) wrapper_arg_1), &conv2_HeadVar__2_142);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_142));
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
    MR_String conv1_HeadVar__3_186;

    conv1_HeadVar__3_186 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_186));
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
    MR_Word conv0_HeadVar__2_155;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__2_2_p_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__2_155);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_155));
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(
  MR_Word ParseContext_6,
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word HeadTerm_9,
  MR_Word * MaybeTypeCtorAndArgs_10)
{
  {
    MR_bool succeeded;

    if ((ParseContext_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) HeadTerm_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word TypeCtorInfo_139_519;
        MR_Word HeadContext_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_9, (MR_Integer) 2)));
        MR_Word HeadResult_467;
        MR_Word ContextPieces_518;
        MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_9, (MR_Integer) 0)));
        MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_9, (MR_Integer) 1)));

        ContextPieces_518 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))));
        TypeCtorInfo_139_519 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_139_519, ModuleName_7, HeadTerm_9, VarSet_8, ContextPieces_518, &HeadResult_467);
        if (((MR_tag((MR_Word) HeadResult_467)) == (MR_mktag((MR_Integer) 0))))
          *MaybeTypeCtorAndArgs_10 = (MR_Word) HeadResult_467;
        else
        {
          MR_Word SymName_351 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadResult_467, (MR_Integer) 0)));
          MR_Word ArgTerms_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadResult_467, (MR_Integer) 1)));
          MR_Word NameSpecs_353;
          MR_Word ParamVars_298;

          parse_tree__parse_type_defn__check_user_type_name_3_p_0(SymName_351, HeadContext_466, &NameSpecs_353);
          succeeded = mercury__term__term_list_to_var_list_2_p_0(TypeCtorInfo_139_519, ArgTerms_352, &ParamVars_298);
          if (succeeded)
          {
            MR_Word TypeInfo_140_274 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0];
            MR_Word ParamsBag_246;
            MR_Word DupParamVars_247;

            mercury__bag__from_list_2_p_0(TypeInfo_140_274, ParamVars_298, &ParamsBag_246);
            mercury__bag__to_list_only_duplicates_2_p_0(TypeInfo_140_274, ParamsBag_246, &DupParamVars_247);
            if ((DupParamVars_247 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((NameSpecs_353 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word PrgParamVars_160;

                mercury__list__map_3_p_0(TypeInfo_140_274, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[0], ParamVars_298, &PrgParamVars_160);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_351));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PrgParamVars_160));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NameSpecs_353));
                }
            else
            {
              MR_Word TypeCtorInfo_150_213;
              MR_Word DupParamVarNames_191;
              MR_Word Var_192;
              MR_Word Var_197;
              MR_Word Var_198;
              MR_Word Var_202;
              MR_Word Var_203;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_208;
              MR_Word Pieces_209;
              MR_Word Spec_210;

              {
                Var_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_192, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_192, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_192, 3) = ((MR_Box) (VarSet_8));
              }
              DupParamVarNames_191 = mercury__list__map_2_f_0(TypeInfo_140_274, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_192, DupParamVars_247);
              TypeCtorInfo_150_213 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              Var_198 = parse_tree__error_util__list_to_pieces_1_f_0(DupParamVarNames_191);
              Var_197 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_150_213, Var_198, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[38]));
              Pieces_209 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_150_213, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[164]), Var_197);
              {
                Var_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_205, 0) = ((MR_Box) (Pieces_209));
              }
              {
                Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (Var_205));
                MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_203, 0) = ((MR_Box) (HeadContext_466));
                MR_hl_field(MR_mktag(0), Var_203, 1) = ((MR_Box) (Var_204));
              }
              {
                Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Var_203));
                MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Spec_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), Spec_210, 2) = ((MR_Box) (Var_202));
              }
              {
                Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (Spec_210));
                MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (NameSpecs_353));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeTypeCtorAndArgs_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_208));
              }
            }
          }
          else
          {
            MR_String HeadTermStr_281;
            MR_Word Var_284;
            MR_Word Var_285;
            MR_Word Var_289;
            MR_Word Var_290;
            MR_Word Var_291;
            MR_Word Var_292;
            MR_Word Var_295;
            MR_Word Pieces_296;
            MR_Word Spec_297;

            HeadTermStr_281 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_139_519, VarSet_8, HeadTerm_9);
            {
              Var_285 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_285, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_285, 1) = ((MR_Box) (HeadTermStr_281));
            }
            {
              Var_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_284, 0) = ((MR_Box) (Var_285));
              MR_hl_field(MR_mktag(1), Var_284, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])));
            }
            {
              Pieces_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_296, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[165])));
              MR_hl_field(MR_mktag(1), Pieces_296, 1) = ((MR_Box) (Var_284));
            }
            {
              Var_292 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_292, 0) = ((MR_Box) (Pieces_296));
            }
            {
              Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_291, 0) = ((MR_Box) (Var_292));
              MR_hl_field(MR_mktag(1), Var_291, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_290 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_290, 0) = ((MR_Box) (HeadContext_466));
              MR_hl_field(MR_mktag(0), Var_290, 1) = ((MR_Box) (Var_291));
            }
            {
              Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_289, 0) = ((MR_Box) (Var_290));
              MR_hl_field(MR_mktag(1), Var_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_297 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_297, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_297, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_297, 2) = ((MR_Box) (Var_289));
            }
            {
              Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_295, 0) = ((MR_Box) (Spec_297));
              MR_hl_field(MR_mktag(1), Var_295, 1) = ((MR_Box) (NameSpecs_353));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_295));
            }
          }
        }
      }
      else
      {
        MR_Word Context_529 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTerm_9, (MR_Integer) 1)));
        MR_Word Spec_531;
        MR_Word Var_534;
        MR_Word Var_535;
        MR_Word Var_540;
        MR_Word Var_527 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTerm_9, (MR_Integer) 0)));

        {
          Var_535 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_535, 0) = ((MR_Box) (Context_529));
          MR_hl_field(MR_mktag(0), Var_535, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[166])));
        }
        {
          Var_534 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_534, 0) = ((MR_Box) (Var_535));
          MR_hl_field(MR_mktag(1), Var_534, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_531 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_531, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_531, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_531, 2) = ((MR_Box) (Var_534));
        }
        {
          Var_540 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_540, 0) = ((MR_Box) (Spec_531));
          MR_hl_field(MR_mktag(1), Var_540, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeCtorAndArgs_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_540));
        }
      }
    else
    {
      MR_Word Var_619 = ((MR_Word) (MR_hl_field(MR_mktag(1), ParseContext_6, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadTerm_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word TypeCtorInfo_139_139 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word HeadContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_9, (MR_Integer) 2)));
        MR_Word HeadResult_20;
        MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_9, (MR_Integer) 0)));
        MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadTerm_9, (MR_Integer) 1)));

        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(TypeCtorInfo_139_139, ModuleName_7, HeadTerm_9, VarSet_8, Var_619, &HeadResult_20);
        if (((MR_tag((MR_Word) HeadResult_20)) == (MR_mktag((MR_Integer) 0))))
          *MaybeTypeCtorAndArgs_10 = (MR_Word) HeadResult_20;
        else
        {
          MR_Word SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadResult_20, (MR_Integer) 0)));
          MR_Word ArgTerms_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadResult_20, (MR_Integer) 1)));
          MR_Word NameSpecs_24;
          MR_Word ParamVars_25;

          parse_tree__parse_type_defn__check_user_type_name_3_p_0(SymName_22, HeadContext_19, &NameSpecs_24);
          succeeded = mercury__term__term_list_to_var_list_2_p_0(TypeCtorInfo_139_139, ArgTerms_23, &ParamVars_25);
          if (succeeded)
          {
            MR_Word TypeInfo_140_140 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0];
            MR_Word ParamsBag_26;
            MR_Word DupParamVars_27;

            mercury__bag__from_list_2_p_0(TypeInfo_140_140, ParamVars_25, &ParamsBag_26);
            mercury__bag__to_list_only_duplicates_2_p_0(TypeInfo_140_140, ParamsBag_26, &DupParamVars_27);
            if ((DupParamVars_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((NameSpecs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word PrgParamVars_28;

                mercury__list__map_3_p_0(TypeInfo_140_140, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[1], ParamVars_25, &PrgParamVars_28);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_22));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PrgParamVars_28));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NameSpecs_24));
                }
            else
            {
              MR_Word TypeCtorInfo_150_150;
              MR_Word DupParamVarNames_33;
              MR_Word Var_37;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_61;
              MR_Word Pieces_119;
              MR_Word Spec_120;

              {
                Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_4));
                MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (VarSet_8));
              }
              DupParamVarNames_33 = mercury__list__map_2_f_0(TypeInfo_140_140, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_37, DupParamVars_27);
              TypeCtorInfo_150_150 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              Var_43 = parse_tree__error_util__list_to_pieces_1_f_0(DupParamVarNames_33);
              Var_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_150_150, Var_43, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[38]));
              Pieces_119 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_150_150, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[164]), Var_42);
              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Pieces_119));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (HeadContext_19));
                MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_57));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Spec_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), Spec_120, 2) = ((MR_Box) (Var_55));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_120));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (NameSpecs_24));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeTypeCtorAndArgs_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
              }
            }
          }
          else
          {
            MR_String HeadTermStr_34;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_81;
            MR_Word Pieces_125;
            MR_Word Spec_126;

            HeadTermStr_34 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_139_139, VarSet_8, HeadTerm_9);
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (HeadTermStr_34));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])));
            }
            {
              Pieces_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[165])));
              MR_hl_field(MR_mktag(1), Pieces_125, 1) = ((MR_Box) (Var_65));
            }
            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Pieces_125));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (HeadContext_19));
              MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_77));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_126, 2) = ((MR_Box) (Var_75));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Spec_126));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (NameSpecs_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
            }
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_137_137;
        MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTerm_9, (MR_Integer) 0)));
        MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadTerm_9, (MR_Integer) 1)));
        MR_Word Pieces_13;
        MR_String VarName_15;
        MR_Word Spec_16;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_92;
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_117;

        VarName_15 = mercury__varset__lookup_name_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, VarSet_8, Var_11);
        TypeCtorInfo_137_137 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        Var_82 = mercury__cord__list_1_f_0(TypeCtorInfo_137_137, Var_619);
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (VarName_15));
        }
        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[173])));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[171])));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[170])));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_95));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[169])));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[168])));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[167])));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
        }
        Pieces_13 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_137_137, Var_82, Var_83);
        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Pieces_13));
        }
        {
          Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (Var_113));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_111));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeCtorAndArgs_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_117));
        }
      }
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
        Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Name_7));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[158])));
      }
      {
        NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[161])));
        MR_hl_field(MR_mktag(1), NamePieces_8, 1) = ((MR_Box) (Var_12));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (NamePieces_8));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Context_5));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Var_24));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), NameSpec_9, 2) = ((MR_Box) (Var_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *NameSpecs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameSpec_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      *NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_type_defn__init(void)
{
}

void mercury__parse_tree__parse_type_defn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_type_defn__parse_tree__parse_type_defn__type_ctor_info_type_defn_head_parse_context_0);
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
