/*
** Automatically generated from `parse_type_defn.m'
** by the Mercury compiler,
** version rotd-2024-12-15
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
#include "term_int.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint32.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_class.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_mutable.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0;

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1834__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_63);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__766__1_2_f_0(
  MR_Word GenericVarSet_283,
  MR_Word HeadVar__2_337);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__760__1_2_p_0(
  MR_Word ExistQVars_25,
  MR_Word HeadVar__2_331);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__732__1_2_f_0(
  MR_Word GenericVarSet_278,
  MR_Word HeadVar__2_321);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__725__1_2_p_0(
  MR_Word HeadVar__1_161,
  MR_Word HeadVar__2_315);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__721__1_1_f_0(
  MR_Word LambdaHeadVar__1_158);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__693__1_2_f_0(
  MR_Word GenericVarSet_271,
  MR_Word HeadVar__2_308);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__666__1_2_f_0(
  MR_Word GenericVarSet_39,
  MR_Word HeadVar__2_299);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__659__1_2_p_0(
  MR_Word ExistQVarsParams_34,
  MR_Word HeadVar__2_293);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__655__1_1_f_0(
  MR_Word LambdaHeadVar__1_65);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_supertype_vars__622__1_2_f_0(
  MR_Word GenericVarSet_17,
  MR_Word HeadVar__2_69);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_constructor__477__1_1_f_0(
  MR_Word LambdaHeadVar__1_101);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__399__1_2_p_0(
  MR_Word HeadVar__1_29,
  MR_Word * HeadVar__2_30);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__226__1_2_p_0(
  MR_Word SolverTypeDetails_38,
  MR_Word HeadVar__2_114);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1739__1_2_p_0(
  MR_Word HeadVar__1_131,
  MR_Word * HeadVar__2_132);

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

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IsSolverType_15,
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
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16);

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

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

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

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8);

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
parse_tree__parse_type_defn__process_du_ctors_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
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

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_supertype_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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


static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[296][2];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[14][1];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[5][5];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[1][6];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_7[1][8];




static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[296][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[3]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[7]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[11]))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "keyword"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be followed by a type definition."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be the definition of a type."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration: error:"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "unrecognized"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attributes have the form"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Recognized"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "equality is <<equality pred name>>"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[47])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "comparison is <<comparison pred name>>"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the first constructor"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in a type definition,"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--->"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be preceded"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not by a semicolon."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and zero or more type variables as arguments,"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a solver type"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "On the left hand side of type definition:"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "subtype definition:"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the supertype part of a"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "subtype"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "user-defined equality or comparison;"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not allowed to have its own"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "from its supertype."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "equality and comparison predicates"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it must inherit any user-defined"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "annotation;"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[109]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where direct_arg is"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it must inherit its representation"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[104])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: since"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments,"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[119]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has no existentially quantified"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "no constraints on them."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it should have"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(existentially quantified or otherwise),"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has no arguments,"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "free type"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[136]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not appear"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[138]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the supertype of a subtype definition."))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the right hand side of a type definition."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "overlapping scopes."))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[144]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(The explicit existential type quantifier shadows"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the universal quantification implicit in"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "existentially quantified"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the constructor"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[151]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "either in the arguments or in the constraints"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in a class constraint"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[155]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "without being explicitly existentially quantified"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains a function symbol"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[166]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "whose arity is not 1."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[168]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains a function symbol,"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[170]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type variables."))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[172]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with existentially quantified"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "lists the function symbol"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[176]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[178]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to be equivalent to another type."))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[181]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be defined"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[182])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a solver type definition"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[185]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[187]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[189])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a positive integer."))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[193]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have exactly one argument."))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[195]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a symbol name and arity."))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[197]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[163])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "invalid"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[201]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[200])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for abstract non-solver type."))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "solver type definition:"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[205]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "On the left hand side of"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[206])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Solver type with"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[209]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "no solver_type_details."))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[211]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the ground inst of a solver type"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the any inst of a solver type"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: attributes are either"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[215]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "badly ordered"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[217]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[219]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contain an unrecognised attribute."))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[221]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[223])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[226]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[225])))
  },
  /* row 228 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a ground, unconstrained inst."))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[229]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[226]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a mutable declaration"))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[232]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a list of mutable declarations,"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[234]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mutable declaration,"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[236]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "malformed functors list"))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[238]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[240])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[242]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[241])))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute,"))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[244]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[245])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functor name/arity for"))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[247]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[246])))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "solver type attribute given"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[249]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for a"))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[251]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "non-solver type."))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[253]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "solver type definitions"))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[255]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[257]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[258])))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot have"))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[260]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[259])))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[262]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[188])))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have a"))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[264]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[263])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[266]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[267])))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[258])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in definitions of equivalence types,"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[272]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "=="))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[274]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[68])))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type name must be followed by"))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[276]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[275])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[278]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[280]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the type name"))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[282]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[284]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "reserved"))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[286]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the Mercury implementation."))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[288]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of this type definition."))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[290]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "only on the right hand side"))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[292]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[291])))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type constructor,"))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[294]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[14][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[62]))) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[1]))) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   9 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[0]))) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  11 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row  12 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row  13 */
  { (MR_Box) ((MR_Unsigned) 6U) },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[7][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_constructor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_type_defn__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_type_defn__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0) }
};

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1834__1_2_f_0(
  MR_Word TVarSet_6,
  MR_Word HeadVar__2_63)
{
  MR_Word HeadVar__3_64;

  HeadVar__3_64 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_6, HeadVar__2_63);
  return HeadVar__3_64;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__766__1_2_f_0(
  MR_Word GenericVarSet_283,
  MR_Word HeadVar__2_337)
{
  MR_Word HeadVar__3_338;

  HeadVar__3_338 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_283, HeadVar__2_337);
  return HeadVar__3_338;
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__760__1_2_p_0(
  MR_Word ExistQVars_25,
  MR_Word HeadVar__2_331)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_25, ((MR_Box) (HeadVar__2_331)));
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__732__1_2_f_0(
  MR_Word GenericVarSet_278,
  MR_Word HeadVar__2_321)
{
  MR_Word HeadVar__3_322;

  HeadVar__3_322 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_278, HeadVar__2_321);
  return HeadVar__3_322;
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__725__1_2_p_0(
  MR_Word HeadVar__1_161,
  MR_Word HeadVar__2_315)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), HeadVar__1_161, ((MR_Box) (HeadVar__2_315)));
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__721__1_1_f_0(
  MR_Word LambdaHeadVar__1_158)
{
  MR_Word LambdaHeadVar__2_159 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_158, (MR_Integer) 1))));

  return LambdaHeadVar__2_159;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__693__1_2_f_0(
  MR_Word GenericVarSet_271,
  MR_Word HeadVar__2_308)
{
  MR_Word HeadVar__3_309;

  HeadVar__3_309 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_271, HeadVar__2_308);
  return HeadVar__3_309;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__666__1_2_f_0(
  MR_Word GenericVarSet_39,
  MR_Word HeadVar__2_299)
{
  MR_Word HeadVar__3_300;

  HeadVar__3_300 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_39, HeadVar__2_299);
  return HeadVar__3_300;
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__659__1_2_p_0(
  MR_Word ExistQVarsParams_34,
  MR_Word HeadVar__2_293)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVarsParams_34, ((MR_Box) (HeadVar__2_293)));
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__655__1_1_f_0(
  MR_Word LambdaHeadVar__1_65)
{
  MR_Word LambdaHeadVar__2_66 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_65, (MR_Integer) 1))));

  return LambdaHeadVar__2_66;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_supertype_vars__622__1_2_f_0(
  MR_Word GenericVarSet_17,
  MR_Word HeadVar__2_69)
{
  MR_Word HeadVar__3_70;

  HeadVar__3_70 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), GenericVarSet_17, HeadVar__2_69);
  return HeadVar__3_70;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_constructor__477__1_1_f_0(
  MR_Word LambdaHeadVar__1_101)
{
  MR_Word LambdaHeadVar__2_102 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_101, (MR_Integer) 1))));

  return LambdaHeadVar__2_102;
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__399__1_2_p_0(
  MR_Word HeadVar__1_29,
  MR_Word * HeadVar__2_30)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_29, HeadVar__2_30);
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__226__1_2_p_0(
  MR_Word SolverTypeDetails_38,
  MR_Word HeadVar__2_114)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[4]), ((MR_Box) (SolverTypeDetails_38)), ((MR_Box) (HeadVar__2_114)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1739__1_2_p_0(
  MR_Word HeadVar__1_131,
  MR_Word * HeadVar__2_132)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), HeadVar__1_131, HeadVar__2_132);
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeFunctor_8)
{
  MR_bool succeeded;
  MR_Word SymName0_9;
  MR_Integer Arity_10;

  succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7, &SymName0_9, &Arity_10);
  if (succeeded)
  {
    MR_Word MaybeSymName_11;

    parse_tree__parse_sym_name__implicitly_qualify_sym_name_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_5, Term_7, SymName0_9, &MaybeSymName_11);
    if (((MR_tag((MR_Word) MaybeSymName_11)) == (MR_Integer) 0))
      *MaybeFunctor_8 = (MR_Word) (MaybeSymName_11);
    else
    {
      MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_11, (MR_Integer) 0))));
      MR_Word Var_17;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (SymName_12));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (Arity_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFunctor_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
      }
    }
  }
  else
  {
    MR_String TermStr_14;
    MR_Word Pieces_15;
    MR_Word Spec_16;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_53;
    MR_Word Var_54;

    TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
    Var_23 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[248])));
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])));
    }
    Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_41);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[85])), Var_39);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_34);
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[231])), Var_22);
    Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_direct_arg_functor\'/4"));
      MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_53));
      MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFunctor_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
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
    STATE_VARIABLE_MaybeTerm_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_MaybeTerm_27_27, 0) = ((MR_Box) (Term0_7));
  }
  parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&MaybeTypeIsAbstractNoncanonical_10, STATE_VARIABLE_MaybeTerm_27_27, &STATE_VARIABLE_MaybeTerm_29_29);
  parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", ModuleName_5, VarSet_6, &MaybeEqualityIs_11, STATE_VARIABLE_MaybeTerm_29_29, &STATE_VARIABLE_MaybeTerm_31_31);
  parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", ModuleName_5, VarSet_6, &MaybeComparisonIs_12, STATE_VARIABLE_MaybeTerm_31_31, &STATE_VARIABLE_MaybeTerm_35_35);
  if ((STATE_VARIABLE_MaybeTerm_35_35 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeWhereEnd_13 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[0]));
  else
  {
    MR_Word EndTerm_14 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeTerm_35_35, (MR_Integer) 0))));
    MR_String EndTermStr_15;
    MR_Word Pieces_16;
    MR_Word VerbosePieces_17;
    MR_Word EndSpec_18;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_88;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_125;

    EndTermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, EndTerm_14);
    {
      Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_61, 1) = ((MR_Box) (EndTermStr_15));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[43])));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[42])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[41])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_51);
    Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[40])), Var_49);
    Var_83 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[54])));
    Var_100 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[60])));
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[61])));
    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[58])), Var_99);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_88);
    VerbosePieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[52])), Var_82);
    Var_117 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), EndTerm_14);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_119, 0) = ((MR_Box) (Pieces_16));
    }
    {
      Var_121 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_121, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(2, Var_121, 1) = ((MR_Box) (VerbosePieces_17));
    }
    {
      Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
      MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
      MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_116, 0) = ((MR_Box) (Var_117));
      MR_hl_field(2, Var_116, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
      MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      EndSpec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, EndSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_unify_compare\'/4"));
      MR_hl_field(2, EndSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, EndSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(2, EndSpec_18, 3) = ((MR_Box) (Var_115));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (EndSpec_18));
      MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeWhereEnd_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeWhereEnd_13, 0) = ((MR_Box) (Var_125));
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeWhereEnd_13)) == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) MaybeTypeIsAbstractNoncanonical_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeIsAbstractNoncanonical_19 = ((MR_Word) ((MR_hl_field(1, MaybeTypeIsAbstractNoncanonical_10, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeEqualityIs_11)) == (MR_Integer) 1);
      if (succeeded)
      {
        EqualityIs_20 = ((MR_Word) ((MR_hl_field(1, MaybeEqualityIs_11, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeComparisonIs_12)) == (MR_Integer) 1);
        if (succeeded)
          ComparisonIs_21 = ((MR_Word) ((MR_hl_field(1, MaybeComparisonIs_12, (MR_Integer) 0))));
      }
    }
  }
  if (succeeded)
    if ((TypeIsAbstractNoncanonical_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeCanonical_25;

      if ((EqualityIs_20 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ComparisonIs_21 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeCanonical_25 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word CmpPred_155 = ((MR_Word) ((MR_hl_field(1, ComparisonIs_21, (MR_Integer) 0))));
          MR_Word Var_157;

          {
            Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_157, 1) = ((MR_Box) (CmpPred_155));
          }
          {
            MaybeCanonical_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeCanonical_25, 0) = ((MR_Box) (Var_157));
          }
        }
      else
      {
        MR_Word Var_162 = ((MR_Word) ((MR_hl_field(1, EqualityIs_20, (MR_Integer) 0))));

        if ((ComparisonIs_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_159;

          {
            Var_159 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_159, 0) = ((MR_Box) (Var_162));
          }
          {
            MaybeCanonical_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeCanonical_25, 0) = ((MR_Box) (Var_159));
          }
        }
        else
        {
          MR_Word Var_158;
          MR_Word CmpPred_160 = ((MR_Word) ((MR_hl_field(1, ComparisonIs_21, (MR_Integer) 0))));

          {
            Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_158, 0) = ((MR_Box) (Var_162));
            MR_hl_field(1, Var_158, 1) = ((MR_Box) (CmpPred_160));
          }
          {
            MaybeCanonical_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeCanonical_25, 0) = ((MR_Box) (Var_158));
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMaybeCanonical_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MaybeCanonical_25));
      }
    }
    else
    {
      succeeded = (EqualityIs_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (ComparisonIs_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *MaybeMaybeCanonical_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[2]));
      else
      {
        MR_Word Spec_24;
        MR_Word Var_130;

        Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(Term0_7);
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMaybeCanonical_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
        }
      }
    }
  else
  {
    MR_Word Specs_26;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;

    Var_132 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeEqualityIs_11);
    Var_134 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[0]), MaybeComparisonIs_12);
    Var_135 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeWhereEnd_13);
    Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_134, Var_135);
    Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_132, Var_133);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMaybeCanonical_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_26));
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word MaybeTailTermIfYes_13;
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
    }
    else
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
      MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));

      if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeTailTerm_8 = MaybeTerm_7;
      else
        *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
    }
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word MaybeTailTermIfYes_13;
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
    }
    else
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
      MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));

      if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeTailTerm_8 = MaybeTerm_7;
      else
        *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
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
    ArgTerm_13 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ArgTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 0))));
        SubArgTerms_14 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 1))));
        SubContext_15 = ((MR_Word) ((MR_hl_field(0, ArgTerm_13, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_20 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
          succeeded = (strcmp(Var_20, (MR_String) "type") == 0);
        }
      }
    }
  }
  if (succeeded)
    parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(ModuleName_7, VarSet_8, SubArgTerms_14, SubContext_15, SeqNum_11, (MR_Integer) 1, MaybeIOM_12);
  else
  {
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_47;

    Var_27 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[21])));
    Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[23])));
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_35);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_26);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_solver_type_defn_item\'/6"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Word SeqNum_12,
  MR_Word IsSolverType_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded = (ArgTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeDefnTerm_15;
  MR_Word Var_23;

  if (succeeded)
  {
    TypeDefnTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(1, ArgTerms_10, (MR_Integer) 1))));
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
      Var_24 = ((MR_Word) ((MR_hl_field(0, TypeDefnTerm_15, (MR_Integer) 0))));
      TypeDefnArgTerms_17 = ((MR_Word) ((MR_hl_field(0, TypeDefnTerm_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        Name_16 = ((MR_String) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
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
            HeadTerm_19 = ((MR_Word) ((MR_hl_field(1, TypeDefnArgTerms_17, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(1, TypeDefnArgTerms_17, (MR_Integer) 1))));
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              BodyTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
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
      MR_Word ContextPieces_58;
      MR_Word MaybeTypeCtorAndArgs_59;

      ContextPieces_58 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[93])));
      parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_58, ModuleName_8, VarSet_9, TypeDefnTerm_15, &MaybeTypeCtorAndArgs_59);
      if (((MR_tag((MR_Word) MaybeTypeCtorAndArgs_59)) == (MR_Integer) 0))
      {
        MR_Word Specs_60 = ((MR_Word) ((MR_hl_field(0, MaybeTypeCtorAndArgs_59, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_60));
        }
      }
      else
      {
        MR_Word Name_61 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtorAndArgs_59, (MR_Integer) 0))));
        MR_Word Params_62 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtorAndArgs_59, (MR_Integer) 1))));
        MR_Word TypeVarSet_63;
        MR_Word AbstractTypeDetails_64;
        MR_Word TypeDefn_65;
        MR_Word ItemTypeDefn_66;
        MR_Word Item_67;
        MR_Word Var_72;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TypeVarSet_63);
        switch (IsSolverType_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            AbstractTypeDetails_64 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            AbstractTypeDetails_64 = (MR_Word) ((MR_Unsigned) 12U);
            break;
        }
        {
          TypeDefn_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeDefn_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeDefn_65, 1) = ((MR_Box) (AbstractTypeDetails_64));
        }
        {
          ItemTypeDefn_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemTypeDefn_66, 0) = ((MR_Box) (Name_61));
          MR_hl_field(0, ItemTypeDefn_66, 1) = ((MR_Box) (Params_62));
          MR_hl_field(0, ItemTypeDefn_66, 2) = ((MR_Box) (TypeDefn_65));
          MR_hl_field(0, ItemTypeDefn_66, 3) = ((MR_Box) (TypeVarSet_63));
          MR_hl_field(0, ItemTypeDefn_66, 4) = ((MR_Box) (Context_11));
          MR_hl_field(0, ItemTypeDefn_66, 5) = ((MR_Box) (SeqNum_12));
        }
        {
          Item_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Item_67, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Item_67, 1) = ((MR_Box) (ItemTypeDefn_66));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (Item_67));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeIOM_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_72));
        }
      }
    }
  }
  else
  {
    MR_Word Pieces_21;
    MR_Word Spec_22;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_55;

    Var_32 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[30])));
    Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[32])));
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[34])));
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_40);
    Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[26])), Var_31);
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_defn_item\'/7"));
      MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
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
  MR_Word SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16)
{
  MR_bool succeeded;

  switch (IsSolverType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__parse_type_defn__parse_where_type_is_abstract_7_p_0(ModuleName_9, VarSet_10, HeadTerm_11, BodyTerm_12, Context_13, SeqNum_14, MaybeIOM_16);
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeWhere_17;

        parse_tree__parse_type_defn__parse_type_decl_where_term_6_p_0((MR_Integer) 1, ModuleName_9, SeqNum_14, VarSet_10, BodyTerm_12, &MaybeWhere_17);
        if (((MR_tag((MR_Word) MaybeWhere_17)) == (MR_Integer) 0))
        {
          MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(0, MaybeWhere_17, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_16 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_18));
          }
        }
        else
        {
          MR_Word MaybeSolverTypeDetails_19 = ((MR_Word) ((MR_hl_field(1, MaybeWhere_17, (MR_Integer) 0))));
          MR_Word MaybeCanonical_20 = ((MR_Word) ((MR_hl_field(1, MaybeWhere_17, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_21 = ((MR_Word) ((MR_hl_field(1, MaybeWhere_17, (MR_Integer) 2))));

          if ((MaybeDirectArgCtors_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ContextPieces_59;
            MR_Word TVarSet_60;
            MR_Word MaybeNameParams_61;
            MR_Word SolverSpecs_63;
            MR_Word FreeSpecs_70;
            MR_Word ParamTVars0_67;
            MR_Word SolverTypeDetails0_68;
            MR_Word SymName_71;
            MR_Word ParamTVars_72;
            MR_Word SolverTypeDetails_73;

            ContextPieces_59 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[208])));
            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_60);
            parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_59, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameParams_61);
            if ((MaybeSolverTypeDetails_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Pieces_64;
              MR_Word SolverSpec_65;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_96;

              Var_85 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[212])));
              Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
              Pieces_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[210])), Var_84);
              Var_96 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
              {
                SolverSpec_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SolverSpec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_solver_type_base\'/8"));
                MR_hl_field(0, SolverSpec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, SolverSpec_65, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(0, SolverSpec_65, 3) = ((MR_Box) (Var_96));
                MR_hl_field(0, SolverSpec_65, 4) = ((MR_Box) (Pieces_64));
              }
              {
                SolverSpecs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SolverSpecs_63, 0) = ((MR_Box) (SolverSpec_65));
                MR_hl_field(1, SolverSpecs_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              SolverSpecs_63 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = ((MR_tag((MR_Word) MaybeNameParams_61)) == (MR_Integer) 1);
            if (succeeded)
            {
              ParamTVars0_67 = ((MR_Word) ((MR_hl_field(1, MaybeNameParams_61, (MR_Integer) 1))));
              succeeded = (MaybeSolverTypeDetails_19 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                SolverTypeDetails0_68 = ((MR_Word) ((MR_hl_field(1, MaybeSolverTypeDetails_19, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word RepType_69 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails0_68, (MR_Integer) 0))));

              parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(TVarSet_60, ParamTVars0_67, RepType_69, Context_13, &FreeSpecs_70);
            }
            else
              FreeSpecs_70 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = (FreeSpecs_70 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeNameParams_61)) == (MR_Integer) 1);
              if (succeeded)
              {
                SymName_71 = ((MR_Word) ((MR_hl_field(1, MaybeNameParams_61, (MR_Integer) 0))));
                ParamTVars_72 = ((MR_Word) ((MR_hl_field(1, MaybeNameParams_61, (MR_Integer) 1))));
                succeeded = (MaybeSolverTypeDetails_19 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  SolverTypeDetails_73 = ((MR_Word) ((MR_hl_field(1, MaybeSolverTypeDetails_19, (MR_Integer) 0))));
              }
            }
            if (succeeded)
            {
              MR_Word TypeDefn_74;
              MR_Word DetailsSolver_75;
              MR_Word ItemTypeDefn_76;
              MR_Word Item_77;
              MR_Word Var_98;

              {
                DetailsSolver_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DetailsSolver_75, 0) = ((MR_Box) (SolverTypeDetails_73));
                MR_hl_field(0, DetailsSolver_75, 1) = ((MR_Box) (MaybeCanonical_20));
              }
              TypeDefn_74 = (MR_Word) (MR_mkword(2, (MR_Word) (DetailsSolver_75)));
              {
                ItemTypeDefn_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ItemTypeDefn_76, 0) = ((MR_Box) (SymName_71));
                MR_hl_field(0, ItemTypeDefn_76, 1) = ((MR_Box) (ParamTVars_72));
                MR_hl_field(0, ItemTypeDefn_76, 2) = ((MR_Box) (TypeDefn_74));
                MR_hl_field(0, ItemTypeDefn_76, 3) = ((MR_Box) (TVarSet_60));
                MR_hl_field(0, ItemTypeDefn_76, 4) = ((MR_Box) (Context_13));
                MR_hl_field(0, ItemTypeDefn_76, 5) = ((MR_Box) (SeqNum_14));
              }
              {
                Item_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Item_77, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, Item_77, 1) = ((MR_Box) (ItemTypeDefn_76));
              }
              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (Item_77));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_98));
              }
            }
            else
            {
              MR_Word Specs_78;
              MR_Word Var_99;
              MR_Word Var_100;

              Var_100 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameParams_61);
              Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_100, FreeSpecs_70);
              Specs_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SolverSpecs_63, Var_99);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Specs_78));
              }
            }
          }
          else
          {
            MR_Word Pieces_23;
            MR_Word Spec_24;
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_54;
            MR_Word Var_55;

            Var_31 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[186])));
            Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[191])));
            Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
            Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_36);
            Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_30);
            Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
            {
              Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_block_type_defn\'/8"));
              MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Var_54));
              MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
            }
            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_24));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
            }
          }
        }
      }
      break;
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

  ContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[93])));
  mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_9, &TypeVarSet_16);
  parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_15, ModuleName_8, VarSet_9, HeadTerm_10, &MaybeNameParams_17);
  succeeded = ((MR_tag((MR_Word) BodyTerm_11)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_41 = ((MR_Word) ((MR_hl_field(0, BodyTerm_11, (MR_Integer) 0))));
    Args_19 = ((MR_Word) ((MR_hl_field(0, BodyTerm_11, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
    if (succeeded)
    {
      AttrName_18 = ((MR_String) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
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
      Arg_21 = ((MR_Word) ((MR_hl_field(1, Args_19, (MR_Integer) 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(1, Args_19, (MR_Integer) 1))));
      succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Integer NumBits_22;

      succeeded = mercury__term_int__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Arg_21, &NumBits_22);
      if (succeeded)
      {
        MR_Word TypeDefn0_23;
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_43, 0) = ((MR_Box) (NumBits_22));
        }
        {
          TypeDefn0_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeDefn0_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, TypeDefn0_23, 1) = ((MR_Box) (Var_43));
        }
        {
          MaybeTypeDefn_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTypeDefn_24, 0) = ((MR_Box) (TypeDefn0_23));
        }
      }
      else
      {
        MR_Word Pieces_25;
        MR_Word Spec_26;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_68;

        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (AttrName_18));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[192])));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        Var_49 = parse_tree__error_spec__color_as_subject_1_f_0(Var_50);
        Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[194])));
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_56);
        Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_48);
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
          MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_12));
          MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeTypeDefn_24, 0) = ((MR_Box) (Var_68));
        }
      }
    }
    else
    {
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_91;
      MR_Word Pieces_175;
      MR_Word Spec_176;

      {
        Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_77, 1) = ((MR_Box) (AttrName_18));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_75 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
      Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[196])));
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_79);
      Pieces_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_74);
      {
        Spec_176 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_176, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
        MR_hl_field(0, Spec_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_176, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_176, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_176, 4) = ((MR_Box) (Pieces_175));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Spec_176));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeTypeDefn_24, 0) = ((MR_Box) (Var_91));
      }
    }
  }
  else
  {
    MR_String AttrName_191;
    MR_Word Args_192;
    MR_Word Var_93;

    succeeded = ((MR_tag((MR_Word) BodyTerm_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_93 = ((MR_Word) ((MR_hl_field(0, BodyTerm_11, (MR_Integer) 0))));
      Args_192 = ((MR_Word) ((MR_hl_field(0, BodyTerm_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_93)) == (MR_Integer) 0);
      if (succeeded)
      {
        AttrName_191 = ((MR_String) ((MR_hl_field(0, Var_93, (MR_Integer) 0))));
        succeeded = (strcmp(AttrName_191, (MR_String) "type_is_abstract_subtype") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word Arg_185;
      MR_Word Var_94;

      succeeded = (Args_192 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg_185 = ((MR_Word) ((MR_hl_field(1, Args_192, (MR_Integer) 0))));
        Var_94 = ((MR_Word) ((MR_hl_field(1, Args_192, (MR_Integer) 1))));
        succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word SymName_28;
        MR_Integer Arity_29;

        succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Arg_185, &SymName_28, &Arity_29);
        if (succeeded)
        {
          MR_Word TypeCtor_30;
          MR_Word Var_95;
          MR_Word TypeDefn0_177;

          {
            TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_30, 0) = ((MR_Box) (SymName_28));
            MR_hl_field(0, TypeCtor_30, 1) = ((MR_Box) (Arity_29));
          }
          Var_95 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_30)));
          {
            TypeDefn0_177 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TypeDefn0_177, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, TypeDefn0_177, 1) = ((MR_Box) (Var_95));
          }
          {
            MaybeTypeDefn_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeTypeDefn_24, 0) = ((MR_Box) (TypeDefn0_177));
          }
        }
        else
        {
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_120;
          MR_Word Pieces_178;
          MR_Word Spec_179;

          {
            Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_106, 1) = ((MR_Box) (AttrName_191));
          }
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
            MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[192])));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
          }
          Var_101 = parse_tree__error_spec__color_as_subject_1_f_0(Var_102);
          Var_109 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[198])));
          Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
          Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_108);
          Pieces_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_100);
          {
            Spec_179 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_179, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
            MR_hl_field(0, Spec_179, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_179, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_179, 3) = ((MR_Box) (Context_12));
            MR_hl_field(0, Spec_179, 4) = ((MR_Box) (Pieces_178));
          }
          {
            Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_120, 0) = ((MR_Box) (Spec_179));
            MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeTypeDefn_24, 0) = ((MR_Box) (Var_120));
          }
        }
      }
      else
      {
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_143;
        MR_Word Pieces_183;
        MR_Word Spec_184;

        {
          Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_129, 1) = ((MR_Box) (AttrName_191));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_127 = parse_tree__error_spec__color_as_subject_1_f_0(Var_128);
        Var_132 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[196])));
        Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
        Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_127, Var_131);
        Pieces_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_126);
        {
          Spec_184 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_184, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
          MR_hl_field(0, Spec_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_184, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_184, 3) = ((MR_Box) (Context_12));
          MR_hl_field(0, Spec_184, 4) = ((MR_Box) (Pieces_183));
        }
        {
          Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_143, 0) = ((MR_Box) (Spec_184));
          MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeTypeDefn_24, 0) = ((MR_Box) (Var_143));
        }
      }
    }
    else
    {
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_170;
      MR_Word Pieces_189;
      MR_Word Spec_190;

      Var_150 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[202])));
      Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[204])));
      Pieces_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_149);
      {
        Spec_190 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_190, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_where_type_is_abstract\'/7"));
        MR_hl_field(0, Spec_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_190, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_190, 3) = ((MR_Box) (Context_12));
        MR_hl_field(0, Spec_190, 4) = ((MR_Box) (Pieces_189));
      }
      {
        Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_170, 0) = ((MR_Box) (Spec_190));
        MR_hl_field(1, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeTypeDefn_24, 0) = ((MR_Box) (Var_170));
      }
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeNameParams_17)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_31 = ((MR_Word) ((MR_hl_field(1, MaybeNameParams_17, (MR_Integer) 0))));
    Params_32 = ((MR_Word) ((MR_hl_field(1, MaybeNameParams_17, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) MaybeTypeDefn_24)) == (MR_Integer) 1);
    if (succeeded)
      TypeDefn_33 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_24, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ItemTypeDefn_34;
    MR_Word Item_35;
    MR_Word Var_172;

    {
      ItemTypeDefn_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeDefn_34, 0) = ((MR_Box) (Name_31));
      MR_hl_field(0, ItemTypeDefn_34, 1) = ((MR_Box) (Params_32));
      MR_hl_field(0, ItemTypeDefn_34, 2) = ((MR_Box) (TypeDefn_33));
      MR_hl_field(0, ItemTypeDefn_34, 3) = ((MR_Box) (TypeVarSet_16));
      MR_hl_field(0, ItemTypeDefn_34, 4) = ((MR_Box) (Context_12));
      MR_hl_field(0, ItemTypeDefn_34, 5) = ((MR_Box) (SeqNum_13));
    }
    {
      Item_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Item_35, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Item_35, 1) = ((MR_Box) (ItemTypeDefn_34));
    }
    {
      Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_172, 0) = ((MR_Box) (Item_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_172));
    }
  }
  else
  {
    MR_Word Specs_36;
    MR_Word Var_173;
    MR_Word Var_174;

    Var_173 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameParams_17);
    Var_174 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0), MaybeTypeDefn_24);
    Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_173, Var_174);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_36));
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
        MR_Word SolverPieces_18;
        MR_Word SolverSpec_19;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_61;

        Var_41 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[180])));
        Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[184])));
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
        Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
        SolverPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_40);
        Var_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
        {
          SolverSpec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SolverSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_eqv_type_defn\'/8"));
          MR_hl_field(0, SolverSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SolverSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, SolverSpec_19, 3) = ((MR_Box) (Var_61));
          MR_hl_field(0, SolverSpec_19, 4) = ((MR_Box) (SolverPieces_18));
        }
        {
          SolverSpecs_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SolverSpecs_17, 0) = ((MR_Box) (SolverSpec_19));
          MR_hl_field(1, SolverSpecs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  HeadContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[93])));
  parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(HeadContextPieces_20, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeNameAndParams_21);
  BodyContextPieces_22 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
  parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_10, BodyContextPieces_22, BodyTerm_12, &MaybeType_23);
  succeeded = (SolverSpecs_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) MaybeNameAndParams_21)) == (MR_Integer) 1);
    if (succeeded)
    {
      Name_24 = ((MR_Word) ((MR_hl_field(1, MaybeNameAndParams_21, (MR_Integer) 0))));
      ParamTVars_25 = ((MR_Word) ((MR_hl_field(1, MaybeNameAndParams_21, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeType_23)) == (MR_Integer) 1);
      if (succeeded)
        Type_26 = ((MR_Word) ((MR_hl_field(1, MaybeType_23, (MR_Integer) 0))));
    }
  }
  if (succeeded)
  {
    MR_Word TVarSet_27;
    MR_Word FreeSpecs_28;
    MR_Word Var_68;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_27);
    Var_68 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_12);
    parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(TVarSet_27, ParamTVars_25, Type_26, Var_68, &FreeSpecs_28);
    if ((FreeSpecs_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeDefn_29;
      MR_Word DetailsEqv_30 = (MR_Word) (Type_26);
      MR_Word ItemTypeDefn_31;
      MR_Word Item_32;
      MR_Word Var_69;

      {
        TypeDefn_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, TypeDefn_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, TypeDefn_29, 1) = ((MR_Box) (DetailsEqv_30));
      }
      {
        ItemTypeDefn_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemTypeDefn_31, 0) = ((MR_Box) (Name_24));
        MR_hl_field(0, ItemTypeDefn_31, 1) = ((MR_Box) (ParamTVars_25));
        MR_hl_field(0, ItemTypeDefn_31, 2) = ((MR_Box) (TypeDefn_29));
        MR_hl_field(0, ItemTypeDefn_31, 3) = ((MR_Box) (TVarSet_27));
        MR_hl_field(0, ItemTypeDefn_31, 4) = ((MR_Box) (Context_13));
        MR_hl_field(0, ItemTypeDefn_31, 5) = ((MR_Box) (SeqNum_14));
      }
      {
        Item_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_32, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Item_32, 1) = ((MR_Box) (ItemTypeDefn_31));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Item_32));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_69));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (FreeSpecs_28));
      }
  }
  else
  {
    MR_Word Specs_35;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;

    Var_71 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeNameAndParams_21);
    Var_72 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeType_23);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_71, Var_72);
    Specs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SolverSpecs_17, Var_70);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_35));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_64;

  conv0_HeadVar__3_64 = parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1834__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_64));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(
  MR_Word TVarSet_6,
  MR_Word ParamTVars_7,
  MR_Word BodyType_8,
  MR_Word BodyContext_9,
  MR_Word * Specs_10)
{
  MR_Word BodyTVarSet_11;
  MR_Word ParamTVarSet_12;
  MR_Word OnlyBodyTVarSet_13;
  MR_Word OnlyBodyTVars_14;

  parse_tree__prog_type_scan__set_of_type_vars_in_type_2_p_0(BodyType_8, &BodyTVarSet_11);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ParamTVars_7, &ParamTVarSet_12);
  mercury__set__difference_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), BodyTVarSet_11, ParamTVarSet_12, &OnlyBodyTVarSet_13);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), OnlyBodyTVarSet_13, &OnlyBodyTVars_14);
  if ((OnlyBodyTVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OnlyBodyTVarPieces_17;
    MR_String VarWords_18;
    MR_String OccurWord_19;
    MR_Word Pieces_20;
    MR_Word Spec_21;
    MR_Word Var_22;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Box conv1_VarWords_18;
    MR_Box conv2_OccurWord_19;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (TVarSet_6));
    }
    OnlyBodyTVarPieces_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, OnlyBodyTVars_14);
    conv1_VarWords_18 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OnlyBodyTVars_14, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    VarWords_18 = ((MR_String) (conv1_VarWords_18));
    conv2_OccurWord_19 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OnlyBodyTVars_14, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    OccurWord_19 = ((MR_String) (conv2_OccurWord_19));
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (VarWords_18));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
    Var_37 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), OnlyBodyTVarPieces_17);
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (OccurWord_19));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_46 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[293])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_45);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_36);
    Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_31);
    {
      Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_no_free_body_vars\'/5"));
      MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_21, 3) = ((MR_Box) (BodyContext_9));
      MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__226__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word HeadTerm_11,
  MR_Word BodyTerm_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word IsSolverType_15,
  MR_Word * MaybeIOM_16)
{
  MR_bool succeeded;
  MR_Word SolverSpecs_19;
  MR_Word ContextPieces_20;
  MR_Word MaybeTypeCtorAndArgs_25;
  MR_Word MaybeSuperType0_27;
  MR_Word SuperTypeContext_28;
  MR_Word CtorsTerm_29;
  MR_Word MaybeWhereTerm_30;
  MR_Word MaybeOneOrMoreCtors_31;
  MR_Word MaybeWhere_32;
  MR_Word SubTypeTerm_23;
  MR_Word SuperTypeTerm_24;
  MR_Word HeadArgs_21;
  MR_Word Var_95;
  MR_String Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word TypeSymName_34;
  MR_Word Params_35;
  MR_Word MaybeSuperType_36;
  MR_Word OneOrMoreCtors_37;
  MR_Word SolverTypeDetails_38;
  MR_Word MaybeCanonical_39;
  MR_Word MaybeDirectArgIs_40;

  switch (IsSolverType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SolverSpecs_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word SolverPieces_17;
        MR_Word SolverSpec_18;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_89;

        Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[91])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
        SolverPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_74);
        Var_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_11);
        {
          SolverSpec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SolverSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8"));
          MR_hl_field(0, SolverSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SolverSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, SolverSpec_18, 3) = ((MR_Box) (Var_89));
          MR_hl_field(0, SolverSpec_18, 4) = ((MR_Box) (SolverPieces_17));
        }
        {
          SolverSpecs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SolverSpecs_19, 0) = ((MR_Box) (SolverSpec_18));
          MR_hl_field(1, SolverSpecs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  ContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[93])));
  succeeded = ((MR_tag((MR_Word) HeadTerm_11)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_95 = ((MR_Word) ((MR_hl_field(0, HeadTerm_11, (MR_Integer) 0))));
    HeadArgs_21 = ((MR_Word) ((MR_hl_field(0, HeadTerm_11, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_95)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_96 = ((MR_String) ((MR_hl_field(0, Var_95, (MR_Integer) 0))));
      succeeded = (strcmp(Var_96, (MR_String) "=<") == 0);
      if (succeeded)
      {
        succeeded = (HeadArgs_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTypeTerm_23 = ((MR_Word) ((MR_hl_field(1, HeadArgs_21, (MR_Integer) 0))));
          Var_97 = ((MR_Word) ((MR_hl_field(1, HeadArgs_21, (MR_Integer) 1))));
          succeeded = (Var_97 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SuperTypeTerm_24 = ((MR_Word) ((MR_hl_field(1, Var_97, (MR_Integer) 0))));
            Var_98 = ((MR_Word) ((MR_hl_field(1, Var_97, (MR_Integer) 1))));
            succeeded = (Var_98 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word SuperTypeContextPieces_26;

    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_20, ModuleName_9, VarSet_10, SubTypeTerm_23, &MaybeTypeCtorAndArgs_25);
    SuperTypeContextPieces_26 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[97])));
    parse_tree__parse_type_defn__parse_supertype_4_p_0(VarSet_10, SuperTypeContextPieces_26, SuperTypeTerm_24, &MaybeSuperType0_27);
    SuperTypeContext_28 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SuperTypeTerm_24);
  }
  else
  {
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(ContextPieces_20, ModuleName_9, VarSet_10, HeadTerm_11, &MaybeTypeCtorAndArgs_25);
    MaybeSuperType0_27 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[3]));
    SuperTypeContext_28 = mercury__term_context__dummy_context_0_f_0();
  }
  parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(BodyTerm_12, &CtorsTerm_29, &MaybeWhereTerm_30);
  parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(ModuleName_9, VarSet_10, CtorsTerm_29, &MaybeOneOrMoreCtors_31);
  if ((MaybeWhereTerm_30 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeWhere_32 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_3[0]));
  else
  {
    MR_Word WhereTerm_33 = ((MR_Word) ((MR_hl_field(1, MaybeWhereTerm_30, (MR_Integer) 0))));

    parse_tree__parse_type_defn__parse_type_decl_where_term_6_p_0((MR_Integer) 0, ModuleName_9, SeqNum_14, VarSet_10, WhereTerm_33, &MaybeWhere_32);
  }
  succeeded = (SolverSpecs_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) MaybeTypeCtorAndArgs_25)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeSymName_34 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtorAndArgs_25, (MR_Integer) 0))));
      Params_35 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtorAndArgs_25, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeSuperType0_27)) == (MR_Integer) 1);
      if (succeeded)
      {
        MaybeSuperType_36 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType0_27, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeOneOrMoreCtors_31)) == (MR_Integer) 1);
        if (succeeded)
        {
          OneOrMoreCtors_37 = ((MR_Word) ((MR_hl_field(1, MaybeOneOrMoreCtors_31, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeWhere_32)) == (MR_Integer) 1);
          if (succeeded)
          {
            SolverTypeDetails_38 = ((MR_Word) ((MR_hl_field(1, MaybeWhere_32, (MR_Integer) 0))));
            MaybeCanonical_39 = ((MR_Word) ((MR_hl_field(1, MaybeWhere_32, (MR_Integer) 1))));
            MaybeDirectArgIs_40 = ((MR_Word) ((MR_hl_field(1, MaybeWhere_32, (MR_Integer) 2))));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word HeadCtor_41;
    MR_Word TailCtors_42;
    MR_Word Ctors_43;
    MR_Word ErrorSpecs0_44;
    MR_Word TypeDefn_47;
    MR_Word ErrorSpecs_48;
    MR_Word RecoverableSpecs_54;
    MR_Word Var_111;

    {
      Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_111, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[4]));
      MR_hl_field(0, Var_111, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1));
      MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_111, 3) = ((MR_Box) (SolverTypeDetails_38));
      MR_hl_field(0, Var_111, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_111, (MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8", (MR_String) "discriminated union type has solver type details");
    HeadCtor_41 = ((MR_Word) ((MR_hl_field(0, OneOrMoreCtors_37, (MR_Integer) 0))));
    TailCtors_42 = ((MR_Word) ((MR_hl_field(0, OneOrMoreCtors_37, (MR_Integer) 1))));
    {
      Ctors_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Ctors_43, 0) = ((MR_Box) (HeadCtor_41));
      MR_hl_field(1, Ctors_43, 1) = ((MR_Box) (TailCtors_42));
    }
    parse_tree__parse_type_defn__process_du_ctors_6_p_0(Params_35, VarSet_10, BodyTerm_12, Ctors_43, (MR_Word) ((MR_Unsigned) 0U), &ErrorSpecs0_44);
    if ((MaybeSuperType_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DetailsDu_59;

      {
        DetailsDu_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetailsDu_59, 0) = ((MR_Box) (OneOrMoreCtors_37));
        MR_hl_field(0, DetailsDu_59, 1) = ((MR_Box) (MaybeCanonical_39));
        MR_hl_field(0, DetailsDu_59, 2) = ((MR_Box) (MaybeDirectArgIs_40));
      }
      TypeDefn_47 = (MR_Word) ((MR_Word) (DetailsDu_59));
      if ((MaybeDirectArgIs_40 == (MR_Word) ((MR_Unsigned) 0U)))
        ErrorSpecs_48 = ErrorSpecs0_44;
      else
      {
        MR_Word DirectArgCtors_60 = ((MR_Word) ((MR_hl_field(1, MaybeDirectArgIs_40, (MR_Integer) 0))));

        parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(Ctors_43, DirectArgCtors_60, BodyTerm_12, ErrorSpecs0_44, &ErrorSpecs_48);
      }
      RecoverableSpecs_54 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word SuperType_45 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_36, (MR_Integer) 0))));
      MR_Word DetailsSub_46;
      MR_Word RecoverableSpecs0_49;

      {
        DetailsSub_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetailsSub_46, 0) = ((MR_Box) (SuperType_45));
        MR_hl_field(0, DetailsSub_46, 1) = ((MR_Box) (OneOrMoreCtors_37));
      }
      TypeDefn_47 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_46)));
      parse_tree__parse_type_defn__check_supertype_vars_6_p_0(Params_35, VarSet_10, SuperType_45, SuperTypeContext_28, ErrorSpecs0_44, &ErrorSpecs_48);
      if ((MaybeCanonical_39 == (MR_Word) ((MR_Unsigned) 0U)))
        RecoverableSpecs0_49 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word CanonTypeCtor_51;
        MR_Word CanonPieces_52;
        MR_Word CanonSpec_53;
        MR_Integer Var_116;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_129;
        MR_Word Var_130;

        Var_116 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Params_35);
        {
          CanonTypeCtor_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CanonTypeCtor_51, 0) = ((MR_Box) (TypeSymName_34));
          MR_hl_field(0, CanonTypeCtor_51, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_127, 1) = ((MR_Box) (CanonTypeCtor_51));
        }
        {
          Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[98])));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_126));
        }
        Var_122 = parse_tree__error_spec__color_as_subject_1_f_0(Var_123);
        Var_130 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[102])));
        Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[108])));
        Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, Var_129);
        CanonPieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_121);
        {
          CanonSpec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CanonSpec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8"));
          MR_hl_field(0, CanonSpec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, CanonSpec_53, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, CanonSpec_53, 3) = ((MR_Box) (Context_13));
          MR_hl_field(0, CanonSpec_53, 4) = ((MR_Box) (CanonPieces_52));
        }
        {
          RecoverableSpecs0_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RecoverableSpecs0_49, 0) = ((MR_Box) (CanonSpec_53));
          MR_hl_field(1, RecoverableSpecs0_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      if ((MaybeDirectArgIs_40 == (MR_Word) ((MR_Unsigned) 0U)))
        RecoverableSpecs_54 = RecoverableSpecs0_49;
      else
      {
        MR_Word DirectArgTypeCtor_56;
        MR_Word DirectArgPieces_57;
        MR_Word DirectArgSpec_58;
        MR_Integer Var_154;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_167;
        MR_Word Var_168;

        Var_154 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Params_35);
        {
          DirectArgTypeCtor_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DirectArgTypeCtor_56, 0) = ((MR_Box) (TypeSymName_34));
          MR_hl_field(0, DirectArgTypeCtor_56, 1) = ((MR_Box) (Var_154));
        }
        {
          Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_165, 1) = ((MR_Box) (DirectArgTypeCtor_56));
        }
        {
          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
          MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[98])));
          MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
        }
        Var_160 = parse_tree__error_spec__color_as_subject_1_f_0(Var_161);
        Var_168 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[113])));
        Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_168, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[115])));
        Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, Var_167);
        DirectArgPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_159);
        {
          DirectArgSpec_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DirectArgSpec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8"));
          MR_hl_field(0, DirectArgSpec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, DirectArgSpec_58, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, DirectArgSpec_58, 3) = ((MR_Box) (Context_13));
          MR_hl_field(0, DirectArgSpec_58, 4) = ((MR_Box) (DirectArgPieces_57));
        }
        {
          RecoverableSpecs_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RecoverableSpecs_54, 0) = ((MR_Box) (DirectArgSpec_58));
          MR_hl_field(1, RecoverableSpecs_54, 1) = ((MR_Box) (RecoverableSpecs0_49));
        }
      }
    }
    if ((ErrorSpecs_48 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeVarSet_61;
      MR_Word ItemTypeDefn_62;
      MR_Word Item_63;
      MR_Word IOM_64;

      mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TypeVarSet_61);
      {
        ItemTypeDefn_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemTypeDefn_62, 0) = ((MR_Box) (TypeSymName_34));
        MR_hl_field(0, ItemTypeDefn_62, 1) = ((MR_Box) (Params_35));
        MR_hl_field(0, ItemTypeDefn_62, 2) = ((MR_Box) (TypeDefn_47));
        MR_hl_field(0, ItemTypeDefn_62, 3) = ((MR_Box) (TypeVarSet_61));
        MR_hl_field(0, ItemTypeDefn_62, 4) = ((MR_Box) (Context_13));
        MR_hl_field(0, ItemTypeDefn_62, 5) = ((MR_Box) (SeqNum_14));
      }
      {
        Item_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_63, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Item_63, 1) = ((MR_Box) (ItemTypeDefn_62));
      }
      if ((RecoverableSpecs_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          IOM_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IOM_64, 0) = ((MR_Box) (Item_63));
        }
      else
        {
          IOM_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, IOM_64, 0) = ((MR_Box) (Item_63));
          MR_hl_field(2, IOM_64, 1) = ((MR_Box) (RecoverableSpecs_54));
        }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (IOM_64));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ErrorSpecs_48));
      }
  }
  else
  {
    MR_Word Specs_69;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_196;
    MR_Word Var_197;

    Var_192 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[5]), MaybeTypeCtorAndArgs_25);
    Var_194 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0), MaybeSuperType0_27);
    Var_196 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[6]), MaybeOneOrMoreCtors_31);
    Var_197 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_canonical_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[8]), MaybeWhere_32);
    Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_196, Var_197);
    Var_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_194, Var_195);
    Var_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_192, Var_193);
    Specs_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SolverSpecs_19, Var_191);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_69));
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
  MR_bool succeeded;
  MR_Word MaybeType_9;

  parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[13])), VarSet_5, ContextPieces_6, Term_7, &MaybeType_9);
  if (((MR_tag((MR_Word) MaybeType_9)) == (MR_Integer) 0))
    *Result_8 = (MR_Word) (MaybeType_9);
  else
  {
    MR_Word Type_10 = ((MR_Word) ((MR_hl_field(1, MaybeType_9, (MR_Integer) 0))));
    MR_Word _TypeCtor_11;
    MR_Word _Args_12;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_10, &_TypeCtor_11, &_Args_12);
    if (succeeded)
    {
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_20, 0) = ((MR_Box) (Type_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
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
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_35;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_54;

      Context_13 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      Var_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
      Var_30 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[295])));
      {
        Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_43, 1) = ((MR_Box) (TermStr_14));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])));
      }
      Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_42);
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[85])), Var_40);
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_35);
      Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[79])), Var_29);
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_22);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_supertype\'/4"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_13));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
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

  GroundContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[213]))));
  AnyContextPieces_14 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[214]))));
  {
    STATE_VARIABLE_MaybeTerm_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_MaybeTerm_32_32, 0) = ((MR_Box) (Term0_11));
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
    MaybeEndSpec_24 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[0]));
  else
  {
    MR_Word EndTerm_25 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeTerm_60_60, (MR_Integer) 0))));
    MR_Word Pieces_26;
    MR_Word EndSpec_27;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_74;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_91;
    MR_Word Var_92;

    Var_69 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[218])));
    Var_80 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[222])));
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[220])), Var_79);
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_74);
    Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[216])), Var_68);
    Var_91 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), EndTerm_25);
    {
      EndSpec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, EndSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_decl_where_term\'/6"));
      MR_hl_field(0, EndSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, EndSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, EndSpec_27, 3) = ((MR_Box) (Var_91));
      MR_hl_field(0, EndSpec_27, 4) = ((MR_Box) (Pieces_26));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (EndSpec_27));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeEndSpec_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeEndSpec_24, 0) = ((MR_Box) (Var_92));
    }
  }
  *MaybeWhereDetails_12 = parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(IsSolverType_7, MaybeTypeIsAbstractNoncanonical_16, MaybeRepresentationIs_17, MaybeGroundIs_18, MaybeAnyIs_19, MaybeCStoreIs_20, MaybeEqualityIs_21, MaybeComparisonIs_22, MaybeDirectArgIs_23, MaybeEndSpec_24, Term0_11);
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String Var_26,
  MR_Word Var_29,
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_21;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTailTermIfYes_13;
      MR_Word LHS_32;
      MR_Word RHS_33;
      MR_Word Var_41;
      MR_String Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
      succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        Var_43 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_42 = ((MR_String) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
          succeeded = (strcmp(Var_42, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_32 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
              Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
              succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_33 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
                Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
                succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_46;
        MR_Word Var_47;
        MR_String Var_58;

        succeeded = ((MR_tag((MR_Word) LHS_32)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(0, LHS_32, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(0, LHS_32, (MR_Integer) 1))));
          succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_58 = ((MR_String) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_58) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_36;
          MR_Word ContextPieces_59;

          ContextPieces_59 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
          parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[12])), Var_29, ContextPieces_59, RHS_33, &RHSResult_36);
          if (((MR_tag((MR_Word) RHSResult_36)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_36);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_37 = ((MR_Word) ((MR_hl_field(1, RHSResult_36, (MR_Integer) 0))));
            MR_Word Var_48;

            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (ParsedRHS_37));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_48));
            }
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
          }
        }
        else
        {
          MR_Word Var_100;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_100 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_100 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
        }
      }
      else
      {
        MR_Word Spec_40;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
        {
          Spec_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_40, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_40, 3) = ((MR_Box) (Var_53));
          MR_hl_field(0, Spec_40, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_40));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MR_Word LHS_65;
      MR_Word RHS_66;
      MR_Word Var_74;
      MR_String Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_74 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
        Var_76 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_75 = ((MR_String) ((MR_hl_field(0, Var_74, (MR_Integer) 0))));
          succeeded = (strcmp(Var_75, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_65 = ((MR_Word) ((MR_hl_field(1, Var_76, (MR_Integer) 0))));
              Var_77 = ((MR_Word) ((MR_hl_field(1, Var_76, (MR_Integer) 1))));
              succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_66 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 0))));
                Var_78 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 1))));
                succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_79;
        MR_Word Var_80;
        MR_String Var_91;

        succeeded = ((MR_tag((MR_Word) LHS_65)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_79 = ((MR_Word) ((MR_hl_field(0, LHS_65, (MR_Integer) 0))));
          Var_80 = ((MR_Word) ((MR_hl_field(0, LHS_65, (MR_Integer) 1))));
          succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_91 = ((MR_String) ((MR_hl_field(0, Var_79, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_91) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_69;
          MR_Word ContextPieces_92;

          ContextPieces_92 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
          parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[12])), Var_29, ContextPieces_92, RHS_66, &RHSResult_69);
          if (((MR_tag((MR_Word) RHSResult_69)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_69);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_70 = ((MR_Word) ((MR_hl_field(1, RHSResult_69, (MR_Integer) 0))));
            MR_Word Var_81;

            {
              Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_81, 0) = ((MR_Box) (ParsedRHS_70));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_81));
            }
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          MR_Word Var_101;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_101 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_101 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        MR_Word Spec_73;
        MR_Word Var_86;
        MR_Word Var_87;

        Var_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_73, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_73, 3) = ((MR_Box) (Var_86));
          MR_hl_field(0, Spec_73, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Spec_73));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_21;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTailTermIfYes_13;
      MR_Word LHS_33;
      MR_Word RHS_34;
      MR_Word Var_42;
      MR_String Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
      succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
          succeeded = (strcmp(Var_43, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_33 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
              succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_34 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
                Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));
                succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_47;
        MR_Word Var_48;
        MR_String Var_59;

        succeeded = ((MR_tag((MR_Word) LHS_33)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_47 = ((MR_Word) ((MR_hl_field(0, LHS_33, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(0, LHS_33, (MR_Integer) 1))));
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_59 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_59) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_37;

          RHSResult_37 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(Var_29, Var_30, RHS_34);
          if (((MR_tag((MR_Word) RHSResult_37)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_37);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_38 = ((MR_Word) ((MR_hl_field(1, RHSResult_37, (MR_Integer) 0))));
            MR_Word Var_49;

            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (ParsedRHS_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
            }
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
          }
        }
        else
        {
          MR_Word Var_93;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_93 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
        }
      }
      else
      {
        MR_Word Spec_41;
        MR_Word Var_54;
        MR_Word Var_55;

        Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
        {
          Spec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_41, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_41, 3) = ((MR_Box) (Var_54));
          MR_hl_field(0, Spec_41, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_41));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MR_Word LHS_62;
      MR_Word RHS_63;
      MR_Word Var_71;
      MR_String Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_72 = ((MR_String) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
          succeeded = (strcmp(Var_72, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_62 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
              Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
              succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_63 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
                Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
                succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_76;
        MR_Word Var_77;
        MR_String Var_88;

        succeeded = ((MR_tag((MR_Word) LHS_62)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_76 = ((MR_Word) ((MR_hl_field(0, LHS_62, (MR_Integer) 0))));
          Var_77 = ((MR_Word) ((MR_hl_field(0, LHS_62, (MR_Integer) 1))));
          succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_88 = ((MR_String) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_88) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_66;

          RHSResult_66 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(Var_29, Var_30, RHS_63);
          if (((MR_tag((MR_Word) RHSResult_66)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_66);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_67 = ((MR_Word) ((MR_hl_field(1, RHSResult_66, (MR_Integer) 0))));
            MR_Word Var_78;

            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (ParsedRHS_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
            }
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          MR_Word Var_94;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_94 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        MR_Word Spec_70;
        MR_Word Var_83;
        MR_Word Var_84;

        Var_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_70, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_70, 3) = ((MR_Box) (Var_83));
          MR_hl_field(0, Spec_70, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Spec_70));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_21;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTailTermIfYes_13;
      MR_Word LHS_33;
      MR_Word RHS_34;
      MR_Word Var_42;
      MR_String Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
      succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
          succeeded = (strcmp(Var_43, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_33 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
              succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_34 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
                Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));
                succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_47;
        MR_Word Var_48;
        MR_String Var_59;

        succeeded = ((MR_tag((MR_Word) LHS_33)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_47 = ((MR_Word) ((MR_hl_field(0, LHS_33, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(0, LHS_33, (MR_Integer) 1))));
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_59 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_59) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_37;

          RHSResult_37 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(Var_29, Var_30, RHS_34);
          if (((MR_tag((MR_Word) RHSResult_37)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_37);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_38 = ((MR_Word) ((MR_hl_field(1, RHSResult_37, (MR_Integer) 0))));
            MR_Word Var_49;

            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (ParsedRHS_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
            }
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
          }
        }
        else
        {
          MR_Word Var_93;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_93 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
        }
      }
      else
      {
        MR_Word Spec_41;
        MR_Word Var_54;
        MR_Word Var_55;

        Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
        {
          Spec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_41, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_41, 3) = ((MR_Box) (Var_54));
          MR_hl_field(0, Spec_41, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_41));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MR_Word LHS_62;
      MR_Word RHS_63;
      MR_Word Var_71;
      MR_String Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_72 = ((MR_String) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
          succeeded = (strcmp(Var_72, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_62 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
              Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
              succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_63 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
                Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
                succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_76;
        MR_Word Var_77;
        MR_String Var_88;

        succeeded = ((MR_tag((MR_Word) LHS_62)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_76 = ((MR_Word) ((MR_hl_field(0, LHS_62, (MR_Integer) 0))));
          Var_77 = ((MR_Word) ((MR_hl_field(0, LHS_62, (MR_Integer) 1))));
          succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_88 = ((MR_String) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_88) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_66;

          RHSResult_66 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(Var_29, Var_30, RHS_63);
          if (((MR_tag((MR_Word) RHSResult_66)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_66);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_67 = ((MR_Word) ((MR_hl_field(1, RHSResult_66, (MR_Integer) 0))));
            MR_Word Var_78;

            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (ParsedRHS_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
            }
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          MR_Word Var_94;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_94 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        MR_Word Spec_70;
        MR_Word Var_83;
        MR_Word Var_84;

        Var_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_70, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_70, 3) = ((MR_Box) (Var_83));
          MR_hl_field(0, Spec_70, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Spec_70));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9)
{
  MR_bool succeeded;
  MR_Word MaybeInst_10;
  MR_Word MaybeInst0_11;

  parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[11])), VarSet_7, ContextPieces_8, Term_9, &MaybeInst0_11);
  if (((MR_tag((MR_Word) MaybeInst0_11)) == (MR_Integer) 0))
    MaybeInst_10 = MaybeInst0_11;
  else
  {
    MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(1, MaybeInst0_11, (MR_Integer) 0))));

    succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(Inst_13);
    if (succeeded)
    {
      MR_String TermStr_14;
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_44;
      MR_Word Var_45;

      TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
      Var_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
      {
        Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_30, 1) = ((MR_Box) (TermStr_14));
      }
      {
        Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_28 = parse_tree__error_spec__color_as_subject_1_f_0(Var_29);
      Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[230])));
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
      Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_32);
      Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[228])), Var_27);
      Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
      Var_44 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_inst_is\'/4"));
        MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_44));
        MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeInst_10, 0) = ((MR_Box) (Var_45));
      }
    }
    else
      MaybeInst_10 = MaybeInst0_11;
  }
  return MaybeInst_10;
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_21;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTailTermIfYes_13;
      MR_Word LHS_33;
      MR_Word RHS_34;
      MR_Word Var_42;
      MR_String Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;

      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
      succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
          succeeded = (strcmp(Var_43, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_33 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
              succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_34 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
                Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));
                succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_47;
        MR_Word Var_48;
        MR_String Var_59;

        succeeded = ((MR_tag((MR_Word) LHS_33)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_47 = ((MR_Word) ((MR_hl_field(0, LHS_33, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(0, LHS_33, (MR_Integer) 1))));
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_59 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_59) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_37;

          RHSResult_37 = parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0(Var_28, Var_29, Var_30, RHS_34);
          if (((MR_tag((MR_Word) RHSResult_37)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_37);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_38 = ((MR_Word) ((MR_hl_field(1, RHSResult_37, (MR_Integer) 0))));
            MR_Word Var_49;

            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (ParsedRHS_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
            }
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
          }
        }
        else
        {
          MR_Word Var_93;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_93 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
        }
      }
      else
      {
        MR_Word Spec_41;
        MR_Word Var_54;
        MR_Word Var_55;

        Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
        {
          Spec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_41, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_41, 3) = ((MR_Box) (Var_54));
          MR_hl_field(0, Spec_41, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_41));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MR_Word LHS_62;
      MR_Word RHS_63;
      MR_Word Var_71;
      MR_String Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_72 = ((MR_String) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
          succeeded = (strcmp(Var_72, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_62 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
              Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
              succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_63 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
                Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
                succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_76;
        MR_Word Var_77;
        MR_String Var_88;

        succeeded = ((MR_tag((MR_Word) LHS_62)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_76 = ((MR_Word) ((MR_hl_field(0, LHS_62, (MR_Integer) 0))));
          Var_77 = ((MR_Word) ((MR_hl_field(0, LHS_62, (MR_Integer) 1))));
          succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_88 = ((MR_String) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_88) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_66;

          RHSResult_66 = parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0(Var_28, Var_29, Var_30, RHS_63);
          if (((MR_tag((MR_Word) RHSResult_66)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_66);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_67 = ((MR_Word) ((MR_hl_field(1, RHSResult_66, (MR_Integer) 0))));
            MR_Word Var_78;

            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (ParsedRHS_67));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
            }
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          MR_Word Var_94;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_94 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_94 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        MR_Word Spec_70;
        MR_Word Var_83;
        MR_Word Var_84;

        Var_83 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_70, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_70, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_70, 3) = ((MR_Box) (Var_83));
          MR_hl_field(0, Spec_70, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Spec_70));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeItemMutableInfo_10;

  parse_tree__parse_type_defn__parse_mutable_decl_term_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeItemMutableInfo_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeItemMutableInfo_10));
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0(
  MR_Word ModuleName_6,
  MR_Word SeqNum_7,
  MR_Word VarSet_8,
  MR_Word Term_9)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_Word MaybeItems_10;
  MR_Word Var_20;
  MR_String Var_21;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
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
      MR_Word Mutable_14 = ((MR_Word) ((MR_hl_field(1, MaybeItem_13, (MR_Integer) 0))));
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (Mutable_14));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeItems_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeItems_10, 0) = ((MR_Box) (Var_22));
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
        MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_7[0]));
        MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_mutable_is_4_f_0_1));
        MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_24, 3) = ((MR_Box) (ModuleName_6));
        MR_hl_field(0, Var_24, 4) = ((MR_Box) (SeqNum_7));
        MR_hl_field(0, Var_24, 5) = ((MR_Box) (VarSet_8));
      }
      parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), Var_24, Terms_16, &MaybeItems_10);
    }
    else
    {
      MR_String TermStr_17;
      MR_Word Pieces_18;
      MR_Word Spec_19;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_35;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_46;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_65;
      MR_Word Var_66;

      TermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      Var_30 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[233])));
      Var_41 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[235])));
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (TermStr_17));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])));
      }
      Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_53);
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[85])), Var_51);
      Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[220])), Var_40);
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_35);
      Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[231])), Var_29);
      Var_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_mutable_is\'/4"));
        MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Var_65));
        MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeItems_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeItems_10, 0) = ((MR_Box) (Var_66));
      }
    }
  }
  return MaybeItems_10;
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_5_p_0(
  MR_Word ModuleName_6,
  MR_Word SeqNum_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeItemMutableInfo_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_Word ArgTerms_11;
  MR_Word Context_12;
  MR_Word Var_16;
  MR_String Var_17;

  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
    Context_12 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_String) ((MR_hl_field(0, Var_16, (MR_Integer) 0))));
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
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_48;
    MR_Word Var_49;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_24 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[237])));
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])));
    }
    Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_36);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[85])), Var_34);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_29);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[78])), Var_23);
    Var_48 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_mutable_decl_term\'/5"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Var_48));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemMutableInfo_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word MaybeTailTermIfYes_13;
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
    }
    else
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
      MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));

      if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeTailTerm_8 = MaybeTerm_7;
      else
        *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
    }
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word MaybeTailTermIfYes_13;
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, HeadTerm_10);
      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
    }
    else
    {
      *Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(Var_28, Var_29, Var_26, Term_9);
      MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if (((MR_tag((MR_Word) *Result_6)) == (MR_Integer) 0))
      *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));

      if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeTailTerm_8 = MaybeTerm_7;
      else
        *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_47,
  MR_Word Var_48,
  MR_String Name_5,
  MR_Word Term_7)
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
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = (strcmp(Var_19, (MR_String) "is") == 0);
      if (succeeded)
      {
        succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LHS_9 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RHS_10 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
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
      Var_23 = ((MR_Word) ((MR_hl_field(0, LHS_9, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(0, LHS_9, (MR_Integer) 1))));
      succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_46 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
          succeeded = (strcmp(Name_5, Var_46) == 0);
        }
      }
    }
    if (succeeded)
    {
      MR_Word RHSResult_13;

      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_4_p_0(Var_47, Var_48, RHS_10, &RHSResult_13);
      if (((MR_tag((MR_Word) RHSResult_13)) == (MR_Integer) 0))
        Result_8 = (MR_Word) (RHSResult_13);
      else
      {
        MR_Word ParsedRHS_14 = ((MR_Word) ((MR_hl_field(1, RHSResult_13, (MR_Integer) 0))));
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (ParsedRHS_14));
        }
        {
          Result_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Result_8, 0) = ((MR_Box) (Var_25));
        }
      }
    }
    else
      Result_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Spec_17;
    MR_Word Var_41;
    MR_Word Var_42;

    Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
      MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Var_41));
      MR_hl_field(0, Spec_17, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Result_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_8, 0) = ((MR_Box) (Var_42));
    }
  }
  return Result_8;
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
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_21;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTailTermIfYes_13;
      MR_Word LHS_32;
      MR_Word RHS_33;
      MR_Word Var_41;
      MR_String Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
      succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        Var_43 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_42 = ((MR_String) ((MR_hl_field(0, Var_41, (MR_Integer) 0))));
          succeeded = (strcmp(Var_42, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_32 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
              Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
              succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_33 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
                Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
                succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_46;
        MR_Word Var_47;
        MR_String Var_58;

        succeeded = ((MR_tag((MR_Word) LHS_32)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(0, LHS_32, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(0, LHS_32, (MR_Integer) 1))));
          succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_58 = ((MR_String) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_58) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_36;

          RHSResult_36 = parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(Var_28, Var_29, RHS_33);
          if (((MR_tag((MR_Word) RHSResult_36)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_36);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_37 = ((MR_Word) ((MR_hl_field(1, RHSResult_36, (MR_Integer) 0))));
            MR_Word Var_48;

            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (ParsedRHS_37));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_48));
            }
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
          }
        }
        else
        {
          MR_Word Var_92;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_92 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_92 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
        }
      }
      else
      {
        MR_Word Spec_40;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_10);
        {
          Spec_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_40, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_40, 3) = ((MR_Box) (Var_53));
          MR_hl_field(0, Spec_40, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_40));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MR_Word LHS_61;
      MR_Word RHS_62;
      MR_Word Var_70;
      MR_String Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_70 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_71 = ((MR_String) ((MR_hl_field(0, Var_70, (MR_Integer) 0))));
          succeeded = (strcmp(Var_71, (MR_String) "is") == 0);
          if (succeeded)
          {
            succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LHS_61 = ((MR_Word) ((MR_hl_field(1, Var_72, (MR_Integer) 0))));
              Var_73 = ((MR_Word) ((MR_hl_field(1, Var_72, (MR_Integer) 1))));
              succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                RHS_62 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
                Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
                succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_75;
        MR_Word Var_76;
        MR_String Var_87;

        succeeded = ((MR_tag((MR_Word) LHS_61)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_75 = ((MR_Word) ((MR_hl_field(0, LHS_61, (MR_Integer) 0))));
          Var_76 = ((MR_Word) ((MR_hl_field(0, LHS_61, (MR_Integer) 1))));
          succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_87 = ((MR_String) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
              succeeded = (strcmp(Var_26, Var_87) == 0);
            }
          }
        }
        if (succeeded)
        {
          MR_Word RHSResult_65;

          RHSResult_65 = parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(Var_28, Var_29, RHS_62);
          if (((MR_tag((MR_Word) RHSResult_65)) == (MR_Integer) 0))
          {
            *Result_6 = (MR_Word) (RHSResult_65);
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ParsedRHS_66 = ((MR_Word) ((MR_hl_field(1, RHSResult_65, (MR_Integer) 0))));
            MR_Word Var_77;

            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (ParsedRHS_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_77));
            }
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          MR_Word Var_93;

          *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
          Var_93 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
          if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeTailTerm_8 = MaybeTerm_7;
          else
            *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        MR_Word Spec_69;
        MR_Word Var_82;
        MR_Word Var_83;

        Var_82 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
        {
          Spec_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_69, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_is\'/3"));
          MR_hl_field(0, Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_69, 3) = ((MR_Box) (Var_82));
          MR_hl_field(0, Spec_69, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[227])));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Spec_69));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_83));
        }
        *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeFunctor_8;

  parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeFunctor_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeFunctor_8));
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(
  MR_Word ModuleName_5,
  MR_Word VarSet_6,
  MR_Word Term_7)
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
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_6[0]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleName_5));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (VarSet_6));
    }
    parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), Var_12, FunctorsTerms_9, &MaybeDirectArgCtors_8);
  }
  else
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_38;
    MR_Word Var_39;

    Var_18 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[239])));
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[243])));
    Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_17);
    Var_38 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.parse_where_direct_arg_is\'/3"));
      MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Var_38));
      MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeDirectArgCtors_8, 0) = ((MR_Box) (Var_39));
    }
  }
  return MaybeDirectArgCtors_8;
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(
  MR_Word * Result_6,
  MR_Word MaybeTerm_7,
  MR_Word * MaybeTailTerm_8)
{
  MR_bool succeeded;

  if ((MaybeTerm_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTailTerm_8 = (MR_Word) ((MR_Unsigned) 0U);
    *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[8]));
  }
  else
  {
    MR_Word Term_9 = ((MR_Word) ((MR_hl_field(1, MaybeTerm_7, (MR_Integer) 0))));
    MR_Word MaybeTailTermIfYes_13;
    MR_Word Var_25;
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, (MR_Integer) 0))));
            succeeded = (strcmp(Var_28, (MR_String) "type_is_abstract_noncanonical") == 0);
          }
        }
      }
      if (succeeded)
        *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[9]));
      else
        *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[10]));
      {
        MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTailTermIfYes_13, 0) = ((MR_Box) (TailTerm_11));
      }
    }
    else
    {
      MR_Word Var_34;
      MR_String Var_35;
      MR_Word Var_36;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_34 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
        Var_36 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
        succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_35 = ((MR_String) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
            succeeded = (strcmp(Var_35, (MR_String) "type_is_abstract_noncanonical") == 0);
          }
        }
      }
      if (succeeded)
        *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[9]));
      else
        *Result_6 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[10]));
      MaybeTailTermIfYes_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_25 = ((MR_Word) ((MR_hl_field(1, *Result_6, (MR_Integer) 0))));
    if ((Var_25 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeTailTerm_8 = MaybeTerm_7;
    else
      *MaybeTailTerm_8 = MaybeTailTermIfYes_13;
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
      TypeIsAbstractNoncanonical_25 = ((MR_Word) ((MR_hl_field(1, MaybeTypeIsAbstractNoncanonical_14, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeRepresentationIs_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        RepresentationIs_26 = ((MR_Word) ((MR_hl_field(1, MaybeRepresentationIs_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeGroundIs_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          GroundIs_27 = ((MR_Word) ((MR_hl_field(1, MaybeGroundIs_16, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeAnyIs_17)) == (MR_Integer) 1);
          if (succeeded)
          {
            AnyIs_28 = ((MR_Word) ((MR_hl_field(1, MaybeAnyIs_17, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeCStoreIs_18)) == (MR_Integer) 1);
            if (succeeded)
            {
              CStoreIs_29 = ((MR_Word) ((MR_hl_field(1, MaybeCStoreIs_18, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeEqualityIs_19)) == (MR_Integer) 1);
              if (succeeded)
              {
                EqualityIs_30 = ((MR_Word) ((MR_hl_field(1, MaybeEqualityIs_19, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeComparisonIs_20)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ComparisonIs_31 = ((MR_Word) ((MR_hl_field(1, MaybeComparisonIs_20, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeDirectArgIs_21)) == (MR_Integer) 1);
                  if (succeeded)
                    DirectArgIs_32 = ((MR_Word) ((MR_hl_field(1, MaybeDirectArgIs_21, (MR_Integer) 0))));
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
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_49, Var_50);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_47, Var_48);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_45, Var_46);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_43, Var_44);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_41, Var_42);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_39, Var_40);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_37, Var_38);
    Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_35, Var_36);
    {
      MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeWhereDetails_24, 0) = ((MR_Box) (Specs_34));
    }
  }
  return MaybeWhereDetails_24;
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
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_124;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word Var_141;
            MR_Word Var_142;
            MR_Word Spec_154;
            MR_Word Pieces_155;

            Var_119 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[250])));
            Var_130 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[254])));
            Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
            Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[252])), Var_129);
            Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_119, Var_124);
            Pieces_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_118);
            Var_141 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
            {
              Spec_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_154, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10"));
              MR_hl_field(0, Spec_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_154, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_154, 3) = ((MR_Box) (Var_141));
              MR_hl_field(0, Spec_154, 4) = ((MR_Box) (Pieces_155));
            }
            {
              Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_142, 0) = ((MR_Box) (Spec_154));
              MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeWhereDetails_22, 0) = ((MR_Box) (Var_142));
            }
          }
          else
          {
            MR_Word MaybeCanonical_156;

            MaybeCanonical_156 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(EqualityIs_18, ComparisonIs_19);
            {
              MaybeWhereDetails_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeWhereDetails_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, MaybeWhereDetails_22, 1) = ((MR_Box) (MaybeCanonical_156));
              MR_hl_field(1, MaybeWhereDetails_22, 2) = ((MR_Box) (DirectArgIs_20));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = (DirectArgIs_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word Pieces_26;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Spec_145;

            Var_54 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[256])));
            Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[261])));
            Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
            Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_59);
            Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_53);
            Var_77 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
            {
              Spec_145 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_145, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10"));
              MR_hl_field(0, Spec_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_145, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_145, 3) = ((MR_Box) (Var_77));
              MR_hl_field(0, Spec_145, 4) = ((MR_Box) (Pieces_26));
            }
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (Spec_145));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeWhereDetails_22, 0) = ((MR_Box) (Var_78));
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
              RepnType_27 = ((MR_Word) ((MR_hl_field(1, RepresentationIs_14, (MR_Integer) 0))));
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
                GroundInst_33 = ((MR_Word) ((MR_hl_field(1, MaybeGroundInst_28, (MR_Integer) 0))));
              if ((MaybeAnyInst_29 == (MR_Word) ((MR_Unsigned) 0U)))
                AnyInst_34 = parse_tree__prog_mode__ground_inst_0_f_0();
              else
                AnyInst_34 = ((MR_Word) ((MR_hl_field(1, MaybeAnyInst_29, (MR_Integer) 0))));
              if ((MaybeMutableInfos_32 == (MR_Word) ((MR_Unsigned) 0U)))
                MutableInfos_35 = (MR_Word) ((MR_Unsigned) 0U);
              else
                MutableInfos_35 = ((MR_Word) ((MR_hl_field(1, MaybeMutableInfos_32, (MR_Integer) 0))));
              {
                SolverTypeDetails_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SolverTypeDetails_36, 0) = ((MR_Box) (RepnType_27));
                MR_hl_field(0, SolverTypeDetails_36, 1) = ((MR_Box) (GroundInst_33));
                MR_hl_field(0, SolverTypeDetails_36, 2) = ((MR_Box) (AnyInst_34));
                MR_hl_field(0, SolverTypeDetails_36, 3) = ((MR_Box) (MutableInfos_35));
              }
              {
                MaybeSolverTypeDetails_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeSolverTypeDetails_37, 0) = ((MR_Box) (SolverTypeDetails_36));
              }
              MaybeCanonical_38 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(MaybeEqPred_30, MaybeCmpPred_31);
              {
                MaybeWhereDetails_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeWhereDetails_22, 0) = ((MR_Box) (MaybeSolverTypeDetails_37));
                MR_hl_field(1, MaybeWhereDetails_22, 1) = ((MR_Box) (MaybeCanonical_38));
                MR_hl_field(1, MaybeWhereDetails_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              succeeded = (RepresentationIs_14 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_109;
                MR_Word Var_110;
                MR_Word Spec_146;
                MR_Word Pieces_147;

                Var_86 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[256])));
                Var_92 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[265])));
                Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
                Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, Var_91);
                Pieces_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_85);
                Var_109 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WhereTerm_21);
                {
                  Spec_146 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_146, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10"));
                  MR_hl_field(0, Spec_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, Spec_146, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                  MR_hl_field(0, Spec_146, 3) = ((MR_Box) (Var_109));
                  MR_hl_field(0, Spec_146, 4) = ((MR_Box) (Pieces_147));
                }
                {
                  Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_110, 0) = ((MR_Box) (Spec_146));
                  MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeWhereDetails_22, 0) = ((MR_Box) (Var_110));
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
      MR_Word Var_44;
      MR_Word Var_45;

      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_45, 1) = (MR_Box) ((MR_Unsigned) (IsSolverType_12));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
      }
      {
        MaybeWhereDetails_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeWhereDetails_22, 0) = ((MR_Box) (DirectArgIs_20));
        MR_hl_field(1, MaybeWhereDetails_22, 1) = ((MR_Box) (Var_44));
        MR_hl_field(1, MaybeWhereDetails_22, 2) = ((MR_Box) (DirectArgIs_20));
      }
    }
    else
    {
      MR_Word Spec_24;
      MR_Word Var_47;

      Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(WhereTerm_21);
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeWhereDetails_22, 0) = ((MR_Box) (Var_47));
      }
    }
  }
  return MaybeWhereDetails_22;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word MaybeUniPred_4,
  MR_Word MaybeCmpPred_5)
{
  MR_Word MaybeCanonical_6;

  if ((MaybeUniPred_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeCmpPred_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeCanonical_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CmpPred_7 = ((MR_Word) ((MR_hl_field(1, MaybeCmpPred_5, (MR_Integer) 0))));
      MR_Word Var_9;

      {
        Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_9, 1) = ((MR_Box) (CmpPred_7));
      }
      {
        MaybeCanonical_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCanonical_6, 0) = ((MR_Box) (Var_9));
      }
    }
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, MaybeUniPred_4, (MR_Integer) 0))));

    if ((MaybeCmpPred_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_11, 0) = ((MR_Box) (Var_14));
      }
      {
        MaybeCanonical_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCanonical_6, 0) = ((MR_Box) (Var_11));
      }
    }
    else
    {
      MR_Word Var_10;
      MR_Word CmpPred_12 = ((MR_Word) ((MR_hl_field(1, MaybeCmpPred_5, (MR_Integer) 0))));

      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (CmpPred_12));
      }
      {
        MaybeCanonical_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCanonical_6, 0) = ((MR_Box) (Var_10));
      }
    }
  }
  return MaybeCanonical_6;
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(
  MR_Word Term_3)
{
  MR_Word Spec_4;
  MR_Word Pieces_5;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_31;

  Var_14 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[271])));
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
  Pieces_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[268])), Var_13);
  Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3);
  {
    Spec_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_4, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.abstract_noncanonical_excludes_others\'/1"));
    MR_hl_field(0, Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_4, 3) = ((MR_Box) (Var_31));
    MR_hl_field(0, Spec_4, 4) = ((MR_Box) (Pieces_5));
  }
  return Spec_4;
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
      MR_Word DirectArgCtor_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word DirectArgCtors_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, DirectArgCtor_12, (MR_Integer) 0))));
      MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(0, DirectArgCtor_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_61_61;
      MR_Word Ctor_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      succeeded = parse_tree__parse_type_defn__find_constructor_4_p_0(HeadVar__1_1, SymName_16, Arity_17, &Ctor_18);
      if (succeeded)
      {
        MR_Word MaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(0, Ctor_18, (MR_Integer) 1))));

        succeeded = (Arity_17 != (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_43;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_60;

          Var_35 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[165])));
          Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[169])));
          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
          Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[167])), Var_48);
          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_43);
          Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_34);
          Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_direct_arg_ctors\'/5"));
            MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Var_60));
            MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
          }
          {
            STATE_VARIABLE_Specs_61_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
        else
        if ((MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_61_61 = STATE_VARIABLE_Specs_0_4;
        else
        {
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_75;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_103;
          MR_Word Pieces_146;
          MR_Word Spec_147;

          Var_67 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[165])));
          {
            Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(3, Var_83, 1) = ((MR_Box) (DirectArgCtor_12));
          }
          {
            Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[68])));
          }
          Var_81 = parse_tree__error_spec__color_as_subject_1_f_0(Var_82);
          Var_89 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[175])));
          Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
          Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_88);
          Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[171])), Var_80);
          Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_75);
          Pieces_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_66);
          Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
          {
            Spec_147 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_147, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_direct_arg_ctors\'/5"));
            MR_hl_field(0, Spec_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_147, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_147, 3) = ((MR_Box) (Var_103));
            MR_hl_field(0, Spec_147, 4) = ((MR_Box) (Pieces_146));
          }
          {
            STATE_VARIABLE_Specs_61_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 0) = ((MR_Box) (Spec_147));
            MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
          }
        }
      }
      else
      {
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_118;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_143;
        MR_Word Pieces_150;
        MR_Word Spec_151;

        Var_110 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[165])));
        {
          Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_126, 1) = ((MR_Box) (DirectArgCtor_12));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[68])));
        }
        Var_124 = parse_tree__error_spec__color_as_subject_1_f_0(Var_125);
        Var_132 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[179])));
        Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_124, Var_131);
        Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[177])), Var_123);
        Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, Var_118);
        Pieces_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_109);
        Var_143 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__3_3);
        {
          Spec_151 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_151, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_direct_arg_ctors\'/5"));
          MR_hl_field(0, Spec_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_151, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_151, 3) = ((MR_Box) (Var_143));
          MR_hl_field(0, Spec_151, 4) = ((MR_Box) (Pieces_150));
        }
        {
          STATE_VARIABLE_Specs_61_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 0) = ((MR_Box) (Spec_151));
          MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = DirectArgCtors_13;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_61_61;
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
      Ctor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Ctors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Var_14 = ((MR_Word) ((MR_hl_field(0, Ctor_5, (MR_Integer) 2))));
      Var_15 = ((MR_Integer) ((MR_hl_field(0, Ctor_5, (MR_Integer) 4))));
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
parse_tree__parse_type_defn__process_du_ctors_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_338;

  conv12_HeadVar__3_338 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__766__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_338));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__760__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__2_2;

  conv11_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_322;

  conv8_HeadVar__3_322 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__732__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__3_322));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__725__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__2_159;

  conv7_LambdaHeadVar__2_159 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__721__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_159));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_309;

  conv3_HeadVar__3_309 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__693__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_309));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_300;

  conv1_HeadVar__3_300 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__666__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_300));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__659__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_66;

  conv0_LambdaHeadVar__2_66 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__655__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_66));
  return wrapper_arg_2;
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
      MR_Word Ctor_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(0, Ctor_16, (MR_Integer) 1))));
      MR_Word CtorSymName_21 = ((MR_Word) ((MR_hl_field(0, Ctor_16, (MR_Integer) 2))));
      MR_Word CtorArgs_22 = ((MR_Word) ((MR_hl_field(0, Ctor_16, (MR_Integer) 3))));
      MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(0, Ctor_16, (MR_Integer) 4))));
      MR_Word ExistQVars_25;
      MR_Word Constraints_26;
      MR_Word STATE_VARIABLE_Specs_105_105;
      MR_Word NotExistQOrParamVars_36;
      MR_Word CtorArgTypes_30;
      MR_Word VarsInCtorArgTypes0_32;
      MR_Word VarsInCtorArgTypes_33;
      MR_Word ExistQVarsParams_34;
      MR_Word Var_67;
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

        ExistQVars_25 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_27, (MR_Integer) 0))));
        Constraints_26 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_27, (MR_Integer) 1))));
      }
      CtorArgTypes_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[4]), CtorArgs_22);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(CtorArgTypes_30, &VarsInCtorArgTypes0_32);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes0_32, &VarsInCtorArgTypes_33);
      ExistQVarsParams_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_25, HeadVar__1_1);
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[3]));
        MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_2));
        MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_67, 3) = ((MR_Box) (ExistQVarsParams_34));
      }
      mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Var_67, VarsInCtorArgTypes_33, &_ExistQOrParamVars_35, &NotExistQOrParamVars_36);
      succeeded = (NotExistQOrParamVars_36 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word GenericVarSet_39;
        MR_Word NotExistVarPieces_40;
        MR_Word Pieces_41;
        MR_Word Spec_42;
        MR_Word Var_68;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_String Var_78;
        MR_Word Var_85;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_104;
        MR_Box conv2_Var_78;

        mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_39);
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
          MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_3));
          MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_68, 3) = ((MR_Box) (GenericVarSet_39));
        }
        NotExistVarPieces_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, NotExistQOrParamVars_36);
        conv2_Var_78 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQOrParamVars_36, ((MR_Box) ((MR_String) "a free type parameter")), ((MR_Box) ((MR_String) "free type parameters")));
        Var_78 = ((MR_String) (conv2_Var_78));
        {
          Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[137])));
        }
        Var_85 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), NotExistVarPieces_40);
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, Var_85);
        Var_74 = parse_tree__error_spec__color_as_subject_1_f_0(Var_75);
        Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[139])));
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[143])));
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_89);
        Pieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_73);
        Var_104 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
        {
          Spec_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
          MR_hl_field(0, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_42, 3) = ((MR_Box) (Var_104));
          MR_hl_field(0, Spec_42, 4) = ((MR_Box) (Pieces_41));
        }
        {
          STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (Spec_42));
          MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
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
          MR_Word ExistQParamPieces_47;
          MR_Word Var_106;
          MR_Word Var_111;
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_String Var_116;
          MR_Word Var_120;
          MR_Word Var_124;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_String Var_128;
          MR_Word Var_135;
          MR_Word Var_138;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_String Var_143;
          MR_Word Var_155;
          MR_Word GenericVarSet_271;
          MR_Word Pieces_272;
          MR_Word Spec_273;
          MR_Box conv4_Var_116;
          MR_Box conv5_Var_128;
          MR_Box conv6_Var_143;

          mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQParamsSet_45, &ExistQParams_46);
          mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_271);
          {
            Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_106, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
            MR_hl_field(0, Var_106, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_4));
            MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_106, 3) = ((MR_Box) (GenericVarSet_271));
          }
          ExistQParamPieces_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, ExistQParams_46);
          conv4_Var_116 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
          Var_116 = ((MR_String) (conv4_Var_116));
          {
            Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_115, 1) = ((MR_Box) (Var_116));
          }
          {
            Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
            MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_120 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), ExistQParamPieces_47);
          Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_120);
          Var_112 = parse_tree__error_spec__color_as_subject_1_f_0(Var_113);
          conv5_Var_128 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
          Var_128 = ((MR_String) (conv5_Var_128));
          {
            Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_127, 1) = ((MR_Box) (Var_128));
          }
          {
            Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
            MR_hl_field(1, Var_126, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[145])));
          }
          Var_125 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_126);
          conv6_Var_143 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExistQParams_46, ((MR_Box) ((MR_String) "it being a type parameter")), ((MR_Box) ((MR_String) "them being type parameters")));
          Var_143 = ((MR_String) (conv6_Var_143));
          {
            Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_142, 1) = ((MR_Box) (Var_143));
          }
          {
            Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_141, 0) = ((MR_Box) (Var_142));
            MR_hl_field(1, Var_141, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[149])));
          }
          {
            Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_138, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[147])));
            MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_141));
          }
          {
            Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_135, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[146])));
            MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_138));
          }
          Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_135);
          Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_124);
          Pieces_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_111);
          Var_155 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
          {
            Spec_273 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_273, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
            MR_hl_field(0, Spec_273, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_273, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_273, 3) = ((MR_Box) (Var_155));
            MR_hl_field(0, Spec_273, 4) = ((MR_Box) (Pieces_272));
          }
          {
            STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (Spec_273));
            MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
          }
        }
        else
        {
          MR_Word NotOccursExistQVars_50;
          MR_Word ConstraintTVars_48;
          MR_Word Var_160;
          MR_Word Var_161;
          MR_Word CtorArgTypes_275;
          MR_Word VarsInCtorArgTypes0_276;
          MR_Word VarsInCtorArgTypes_277;
          MR_Word _OccursExistQVars_49;

          CtorArgTypes_275 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[5]), CtorArgs_22);
          parse_tree__prog_type_scan__type_vars_in_types_2_p_0(CtorArgTypes_275, &VarsInCtorArgTypes0_276);
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes0_276, &VarsInCtorArgTypes_277);
          parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(Constraints_26, &ConstraintTVars_48);
          Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes_277, ConstraintTVars_48);
          {
            Var_160 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_160, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[3]));
            MR_hl_field(0, Var_160, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_6));
            MR_hl_field(0, Var_160, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_160, 3) = ((MR_Box) (Var_161));
          }
          mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Var_160, ExistQVars_25, &_OccursExistQVars_49, &NotOccursExistQVars_50);
          succeeded = (NotOccursExistQVars_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word NotOccursVarPieces_53;
            MR_Word NA_54;
            MR_Word Var_162;
            MR_String Var_163;
            MR_Word Var_168;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Word Var_171;
            MR_Word Var_174;
            MR_Word Var_175;
            MR_String Var_176;
            MR_Word Var_180;
            MR_Word Var_184;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Word Var_187;
            MR_String Var_188;
            MR_Word Var_192;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word Var_214;
            MR_Word GenericVarSet_278;
            MR_Word Pieces_279;
            MR_Word Spec_280;
            MR_Box conv9_Var_176;
            MR_Box conv10_Var_188;

            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_278);
            {
              Var_162 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_162, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
              MR_hl_field(0, Var_162, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_7));
              MR_hl_field(0, Var_162, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_162, 3) = ((MR_Box) (GenericVarSet_278));
            }
            NotOccursVarPieces_53 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_162, NotOccursExistQVars_50);
            Var_163 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_21);
            {
              NA_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NA_54, 0) = ((MR_Box) (Var_163));
              MR_hl_field(0, NA_54, 1) = ((MR_Box) (Arity_23));
            }
            conv9_Var_176 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotOccursExistQVars_50, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
            Var_176 = ((MR_String) (conv9_Var_176));
            {
              Var_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_175, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_175, 1) = ((MR_Box) (Var_176));
            }
            {
              Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_174, 0) = ((MR_Box) (Var_175));
              MR_hl_field(1, Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_171, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[150])));
              MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_174));
            }
            Var_180 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), NotOccursVarPieces_53);
            Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_171, Var_180);
            Var_169 = parse_tree__error_spec__color_as_subject_1_f_0(Var_170);
            conv10_Var_188 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotOccursExistQVars_50, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
            Var_188 = ((MR_String) (conv10_Var_188));
            {
              Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_187, 1) = ((MR_Box) (Var_188));
            }
            {
              Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
              MR_hl_field(1, Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_185 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_186);
            {
              Var_203 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_203, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, Var_203, 1) = ((MR_Box) (NA_54));
            }
            {
              Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_202, 0) = ((MR_Box) (Var_203));
              MR_hl_field(1, Var_202, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])));
            }
            Var_201 = parse_tree__error_spec__color_as_subject_1_f_0(Var_202);
            Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_201, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
            Var_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[154])), Var_200);
            Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_185, Var_192);
            Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_169, Var_184);
            Pieces_279 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_168);
            Var_214 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
            {
              Spec_280 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_280, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
              MR_hl_field(0, Spec_280, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_280, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_280, 3) = ((MR_Box) (Var_214));
              MR_hl_field(0, Spec_280, 4) = ((MR_Box) (Pieces_279));
            }
            {
              STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (Spec_280));
              MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
            }
          }
          else
          {
            MR_Word NotExistQArgTypeVars_58;
            MR_Word ConstraintArgTypeLists_55;
            MR_Word ConstraintArgTypes_56;
            MR_Word Var_217;
            MR_Word VarsInCtorArgTypes0_281;
            MR_Word VarsInCtorArgTypes_282;
            MR_Word _ExistQArgTypeVars_57;

            ConstraintArgTypeLists_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[6]), Constraints_26);
            mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstraintArgTypeLists_55, &ConstraintArgTypes_56);
            parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ConstraintArgTypes_56, &VarsInCtorArgTypes0_281);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInCtorArgTypes0_281, &VarsInCtorArgTypes_282);
            {
              Var_217 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_217, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[3]));
              MR_hl_field(0, Var_217, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_9));
              MR_hl_field(0, Var_217, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_217, 3) = ((MR_Box) (ExistQVars_25));
            }
            mercury__list__filter_4_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), Var_217, VarsInCtorArgTypes_282, &_ExistQArgTypeVars_57, &NotExistQArgTypeVars_58);
            succeeded = (NotExistQArgTypeVars_58 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word NotExistQVarPieces_61;
              MR_Word Var_218;
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_225;
              MR_Word Var_226;
              MR_Word Var_227;
              MR_String Var_228;
              MR_Word Var_232;
              MR_Word Var_236;
              MR_Word Var_237;
              MR_Word Var_238;
              MR_String Var_239;
              MR_Word Var_246;
              MR_Word Var_247;
              MR_Word Var_267;
              MR_Word GenericVarSet_283;
              MR_Word Pieces_284;
              MR_Word Spec_285;
              MR_Box conv13_Var_228;
              MR_Box conv14_Var_239;

              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_2, &GenericVarSet_283);
              {
                Var_218 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_218, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
                MR_hl_field(0, Var_218, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_10));
                MR_hl_field(0, Var_218, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_218, 3) = ((MR_Box) (GenericVarSet_283));
              }
              NotExistQVarPieces_61 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_218, NotExistQArgTypeVars_58);
              conv13_Var_228 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQArgTypeVars_58, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
              Var_228 = ((MR_String) (conv13_Var_228));
              {
                Var_227 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_227, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_227, 1) = ((MR_Box) (Var_228));
              }
              {
                Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_226, 0) = ((MR_Box) (Var_227));
                MR_hl_field(1, Var_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_232 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), NotExistQVarPieces_61);
              Var_225 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_226, Var_232);
              Var_224 = parse_tree__error_spec__color_as_subject_1_f_0(Var_225);
              conv14_Var_239 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NotExistQArgTypeVars_58, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
              Var_239 = ((MR_String) (conv14_Var_239));
              {
                Var_238 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_238, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_238, 1) = ((MR_Box) (Var_239));
              }
              {
                Var_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_237, 0) = ((MR_Box) (Var_238));
                MR_hl_field(1, Var_237, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[156])));
              }
              Var_247 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[162])));
              Var_246 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_247, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
              Var_236 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_237, Var_246);
              Var_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, Var_236);
              Pieces_284 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[17])), Var_223);
              Var_267 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BodyTerm_3);
              {
                Spec_285 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_285, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.process_du_ctors\'/6"));
                MR_hl_field(0, Spec_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_285, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(0, Spec_285, 3) = ((MR_Box) (Var_267));
                MR_hl_field(0, Spec_285, 4) = ((MR_Box) (Pieces_284));
              }
              {
                STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (Spec_285));
                MR_hl_field(1, STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_5));
              }
            }
            else
              STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_0_5;
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Ctors_17;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_105_105;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_supertype_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_70;

  conv0_HeadVar__3_70 = parse_tree__parse_type_defn__IntroducedFrom__func__check_supertype_vars__622__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_70));
  return wrapper_arg_2;
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
  MR_Word VarsInSuperType0_12;
  MR_Word VarsInSuperType_13;
  MR_Word FreeVars_14;

  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(SuperType_9, &VarsInSuperType0_12);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInSuperType0_12, &VarsInSuperType_13);
  mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), VarsInSuperType_13, Params_7, &FreeVars_14);
  if ((FreeVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
  else
  {
    MR_Word GenericVarSet_17;
    MR_Word FreeVarPieces_18;
    MR_Word Pieces_19;
    MR_Word Spec_20;
    MR_Word Var_23;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_String Var_35;
    MR_Word Var_39;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Box conv1_Var_35;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_8, &GenericVarSet_17);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__check_supertype_vars_6_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (GenericVarSet_17));
    }
    FreeVarPieces_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, FreeVars_14);
    conv1_Var_35 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FreeVars_14, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
    Var_35 = ((MR_String) (conv1_Var_35));
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[135])));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
    }
    Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
    Var_46 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), FreeVarPieces_18);
    Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
    Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[139])));
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[141])));
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_50);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[137])), Var_44);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_39);
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[87])), Var_28);
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_supertype_vars\'/6"));
      MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_22 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
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
  MR_Word HeadBodyTerm_9;
  MR_Word TailBodyTerms_10;
  MR_Word Var_11;

  parse_tree__parse_util__disjunction_to_one_or_more_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7, &Var_11);
  HeadBodyTerm_9 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
  TailBodyTerms_10 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
  parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0(ModuleName_5, VarSet_6, UINT32_C(0), HeadBodyTerm_9, TailBodyTerms_10, MaybeConstructors_8);
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_30;

  parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__399__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_30);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_30));
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
  MR_bool succeeded = ((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0);
  MR_Word MaybeHeadConstructor_13;
  MR_Word VarsTerm_33;
  MR_Word SubTerm_34;
  MR_Word Var_39;
  MR_String Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;

  if (succeeded)
  {
    Var_39 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_40 = ((MR_String) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
      succeeded = (strcmp(Var_40, (MR_String) "some") == 0);
      if (succeeded)
      {
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarsTerm_33 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_34 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
            Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
            succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeExistQVars_36;
    MR_Word Var_46;

    Var_46 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
    parse_tree__parse_vars__parse_and_check_quant_vars_6_p_0((MR_Integer) 0, (MR_Integer) 1, Var_46, VarSet_8, VarsTerm_33, &MaybeExistQVars_36);
    if (((MR_tag((MR_Word) MaybeExistQVars_36)) == (MR_Integer) 0))
      MaybeHeadConstructor_13 = (MR_Word) (MaybeExistQVars_36);
    else
    {
      MR_Word ExistQVars_37 = ((MR_Word) ((MR_hl_field(1, MaybeExistQVars_36, (MR_Integer) 0))));
      MR_Word ExistQTVars_38;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[3]), ExistQVars_37, &ExistQTVars_38);
      parse_tree__parse_type_defn__parse_constructor_6_p_0(ModuleName_7, VarSet_8, CurOrdinal_9, ExistQTVars_38, SubTerm_34, &MaybeHeadConstructor_13);
    }
  }
  else
    parse_tree__parse_type_defn__parse_constructor_6_p_0(ModuleName_7, VarSet_8, CurOrdinal_9, (MR_Word) ((MR_Unsigned) 0U), HeadTerm_10, &MaybeHeadConstructor_13);
  if ((TailTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
    if (((MR_tag((MR_Word) MaybeHeadConstructor_13)) == (MR_Integer) 0))
      *MaybeConstructors_12 = (MR_Word) (MaybeHeadConstructor_13);
    else
    {
      MR_Word HeadConstructor_14 = ((MR_Word) ((MR_hl_field(1, MaybeHeadConstructor_13, (MR_Integer) 0))));
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (HeadConstructor_14));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConstructors_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      }
    }
  else
  {
    MR_Word HeadTailTerm_16 = ((MR_Word) ((MR_hl_field(1, TailTerms_11, (MR_Integer) 0))));
    MR_Word TailTailTerms_17 = ((MR_Word) ((MR_hl_field(1, TailTerms_11, (MR_Integer) 1))));
    MR_Word MaybeTailConstructors_18;
    uint32_t Var_22 = (CurOrdinal_9 + UINT32_C(1));
    MR_Word TailConstructors_19;
    MR_Word HeadConstructor_28;

    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_6_p_0(ModuleName_7, VarSet_8, Var_22, HeadTailTerm_16, TailTailTerms_17, &MaybeTailConstructors_18);
    succeeded = ((MR_tag((MR_Word) MaybeHeadConstructor_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadConstructor_28 = ((MR_Word) ((MR_hl_field(1, MaybeHeadConstructor_13, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTailConstructors_18)) == (MR_Integer) 1);
      if (succeeded)
        TailConstructors_19 = ((MR_Word) ((MR_hl_field(1, MaybeTailConstructors_18, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_24;

      Var_24 = mercury__one_or_more__cons_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), ((MR_Box) (HeadConstructor_28)), TailConstructors_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConstructors_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
      }
    }
    else
    {
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Specs_27;

      Var_25 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), MaybeHeadConstructor_13);
      Var_26 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[6]), MaybeTailConstructors_18);
      Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_25, Var_26);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConstructors_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_27));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_102;

  conv0_LambdaHeadVar__2_102 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_constructor__477__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_102));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Word BeforeConstraintsTerm_13;
  MR_Word MaybeConstraints_14;

  parse_tree__parse_type_defn__get_existential_constraints_from_term_5_p_0(ModuleName_7, VarSet_8, Term_11, &BeforeConstraintsTerm_13, &MaybeConstraints_14);
  if (((MR_tag((MR_Word) MaybeConstraints_14)) == (MR_Integer) 0))
    *MaybeConstructor_12 = (MR_Word) (MaybeConstraints_14);
  else
  {
    MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(1, MaybeConstraints_14, (MR_Integer) 0))));
    MR_Word MainTerm_19;
    MR_Word ContextPieces_20;
    MR_Word MaybeFunctorAndArgTerms_21;
    MR_Word MaybeFunctor_23;
    MR_Word MaybeConstructorArgs_24;
    MR_Word MaybeMaybeExistConstraints_27;
    MR_Word MainTermContext_46;
    MR_Word NoArgsSpecs_51;
    MR_Word InsideBracesTerm_17;
    MR_Word Var_57;
    MR_String Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Functor2_48;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word MaybeExistConstraints_52;
    MR_Word ConstructorArgs_53;
    MR_Word Functor_54;

    succeeded = ((MR_tag((MR_Word) BeforeConstraintsTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(0, BeforeConstraintsTerm_13, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, BeforeConstraintsTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = ((MR_String) ((MR_hl_field(0, Var_57, (MR_Integer) 0))));
        succeeded = (strcmp(Var_58, (MR_String) "{}") == 0);
        if (succeeded)
        {
          succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InsideBracesTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
            succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
      MainTerm_19 = InsideBracesTerm_17;
    else
      MainTerm_19 = BeforeConstraintsTerm_13;
    ContextPieces_20 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[116]))));
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_8, ContextPieces_20, MainTerm_19, &MaybeFunctorAndArgTerms_21);
    if (((MR_tag((MR_Word) MaybeFunctorAndArgTerms_21)) == (MR_Integer) 0))
    {
      MR_Word FAASpecs_22 = ((MR_Word) ((MR_hl_field(0, MaybeFunctorAndArgTerms_21, (MR_Integer) 0))));

      MaybeFunctor_23 = (MR_Word) (&parse_tree__parse_type_defn_scalar_common_2[4]);
      {
        MaybeConstructorArgs_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeConstructorArgs_24, 0) = ((MR_Box) (FAASpecs_22));
      }
    }
    else
    {
      MR_Word Functor0_25 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorAndArgTerms_21, (MR_Integer) 0))));
      MR_Word ArgTerms_26 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorAndArgTerms_21, (MR_Integer) 1))));

      {
        MaybeFunctor_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeFunctor_23, 0) = ((MR_Box) (Functor0_25));
      }
      MaybeConstructorArgs_24 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_7, VarSet_8, ArgTerms_26);
    }
    if ((ExistQVars_10 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((Constraints_16 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeMaybeExistConstraints_27 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[5]));
      else
      if (((MR_tag((MR_Word) MaybeFunctor_23)) == (MR_Integer) 0))
        MaybeMaybeExistConstraints_27 = (MR_Word) (&parse_tree__parse_type_defn_scalar_common_2[4]);
      else
      {
        MR_Word Functor1_30 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_23, (MR_Integer) 0))));
        MR_String FunctorName1_31;
        MR_Word MCPieces_32;
        MR_Word MCSpec_33;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_74;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_97;
        MR_Word Var_98;

        FunctorName1_31 = mdbcomp__sym_name__unqualify_name_1_f_0(Functor1_30);
        {
          Var_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_72, 0) = ((MR_Box) (FunctorName1_31));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_70 = parse_tree__error_spec__color_as_subject_1_f_0(Var_71);
        Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[126])));
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[122])), Var_82);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_74);
        MCPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[118])), Var_69);
        Var_97 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
        {
          MCSpec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MCSpec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_constructor\'/6"));
          MR_hl_field(0, MCSpec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, MCSpec_33, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, MCSpec_33, 3) = ((MR_Box) (Var_97));
          MR_hl_field(0, MCSpec_33, 4) = ((MR_Box) (MCPieces_32));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (MCSpec_33));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeMaybeExistConstraints_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeMaybeExistConstraints_27, 0) = ((MR_Box) (Var_98));
        }
      }
    else
    {
      MR_Word ConstrainedTypeLists_40;
      MR_Word ConstrainedTypes_41;
      MR_Word ConstrainedQVars0_42;
      MR_Word UnconstrainedQVars_43;
      MR_Word ConstrainedQVars_44;
      MR_Word ExistConstraints_45;
      MR_Word Var_103;

      ConstrainedTypeLists_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[9]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[2]), Constraints_16);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstrainedTypeLists_40, &ConstrainedTypes_41);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ConstrainedTypes_41, &ConstrainedQVars0_42);
      mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_10, ConstrainedQVars0_42, &UnconstrainedQVars_43);
      mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), ExistQVars_10, UnconstrainedQVars_43, &ConstrainedQVars_44);
      {
        ExistConstraints_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExistConstraints_45, 0) = ((MR_Box) (ExistQVars_10));
        MR_hl_field(0, ExistConstraints_45, 1) = ((MR_Box) (Constraints_16));
        MR_hl_field(0, ExistConstraints_45, 2) = ((MR_Box) (UnconstrainedQVars_43));
        MR_hl_field(0, ExistConstraints_45, 3) = ((MR_Box) (ConstrainedQVars_44));
      }
      Var_103 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_45)));
      {
        MaybeMaybeExistConstraints_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeExistConstraints_27, 0) = ((MR_Box) (Var_103));
      }
    }
    MainTermContext_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MainTerm_19);
    succeeded = ((MR_tag((MR_Word) MaybeMaybeExistConstraints_27)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeExistConstraints_27, (MR_Integer) 0))));
      succeeded = (Var_104 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeConstructorArgs_24)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_105 = ((MR_Word) ((MR_hl_field(1, MaybeConstructorArgs_24, (MR_Integer) 0))));
          succeeded = (Var_105 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeFunctor_23)) == (MR_Integer) 1);
            if (succeeded)
              Functor2_48 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_23, (MR_Integer) 0))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String FunctorName2_49;
      MR_Word NoArgsPieces_50;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_115;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_135;

      FunctorName2_49 = mdbcomp__sym_name__unqualify_name_1_f_0(Functor2_48);
      {
        Var_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_113, 0) = ((MR_Box) (FunctorName2_49));
      }
      {
        Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
        MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_111 = parse_tree__error_spec__color_as_subject_1_f_0(Var_112);
      Var_124 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[126])));
      Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_124, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
      Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[130])), Var_123);
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_115);
      NoArgsPieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[118])), Var_110);
      {
        Var_135 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_135, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_constructor\'/6"));
        MR_hl_field(0, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_135, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Var_135, 3) = ((MR_Box) (MainTermContext_46));
        MR_hl_field(0, Var_135, 4) = ((MR_Box) (NoArgsPieces_50));
      }
      {
        NoArgsSpecs_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NoArgsSpecs_51, 0) = ((MR_Box) (Var_135));
        MR_hl_field(1, NoArgsSpecs_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      NoArgsSpecs_51 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (NoArgsSpecs_51 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeMaybeExistConstraints_27)) == (MR_Integer) 1);
      if (succeeded)
      {
        MaybeExistConstraints_52 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeExistConstraints_27, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeConstructorArgs_24)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConstructorArgs_53 = ((MR_Word) ((MR_hl_field(1, MaybeConstructorArgs_24, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeFunctor_23)) == (MR_Integer) 1);
          if (succeeded)
            Functor_54 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_23, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Arity_55;
      MR_Word Ctor_56;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), ConstructorArgs_53, &Arity_55);
      {
        Ctor_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Ctor_56, 0) = ((MR_Box) (MR_Word) (Ordinal_9));
        MR_hl_field(0, Ctor_56, 1) = ((MR_Box) (MaybeExistConstraints_52));
        MR_hl_field(0, Ctor_56, 2) = ((MR_Box) (Functor_54));
        MR_hl_field(0, Ctor_56, 3) = ((MR_Box) (ConstructorArgs_53));
        MR_hl_field(0, Ctor_56, 4) = ((MR_Box) (Arity_55));
        MR_hl_field(0, Ctor_56, 5) = ((MR_Box) (MainTermContext_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeConstructor_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Ctor_56));
      }
    }
    else
    {
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Specs_148;

      Var_140 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0), MaybeMaybeExistConstraints_27);
      Var_142 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeFunctor_23);
      Var_144 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[10]), MaybeConstructorArgs_24);
      Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_144, NoArgsSpecs_51);
      Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_142, Var_143);
      Specs_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_140, Var_141);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeConstructor_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_148));
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
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[7]));
  else
  {
    MR_Word Term_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Terms_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
      Var_27 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, (MR_Integer) 0))));
        succeeded = (strcmp(Var_28, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
            Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));
            succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
              Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
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

      ContextPieces_16 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[131]))));
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_1, VarSet_2, ContextPieces_16, NameTerm_13, &MaybeSymNameAndArgs_17);
      if (((MR_tag((MR_Word) MaybeSymNameAndArgs_17)) == (MR_Integer) 0))
      {
        MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(0, MaybeSymNameAndArgs_17, (MR_Integer) 0))));

        {
          HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Specs_18));
        }
      }
      else
      {
        MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_17, (MR_Integer) 0))));
        MR_Word SymNameArgs_20 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameAndArgs_17, (MR_Integer) 1))));

        if ((SymNameArgs_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word NameCtxt_25;
          MR_Word MaybeCtorFieldName_26;
          MR_Word Var_45;
          MR_Word ContextPieces_50;
          MR_Word MaybeType_51;

          NameCtxt_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_13);
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (SymName_19));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (NameCtxt_25));
          }
          {
            MaybeCtorFieldName_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeCtorFieldName_26, 0) = ((MR_Box) (Var_45));
          }
          ContextPieces_50 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[134]))));
          parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_2, ContextPieces_50, TypeTerm_14, &MaybeType_51);
          if (((MR_tag((MR_Word) MaybeType_51)) == (MR_Integer) 0))
            HeadVar__4_4 = (MR_Word) (MaybeType_51);
          else
          {
            MR_Word Type_52 = ((MR_Word) ((MR_hl_field(1, MaybeType_51, (MR_Integer) 0))));
            MR_Word Context_53;
            MR_Word Arg_54;
            MR_Word MaybeTailArgs_55;

            Context_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeTerm_14);
            {
              Arg_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Arg_54, 0) = ((MR_Box) (MaybeCtorFieldName_26));
              MR_hl_field(0, Arg_54, 1) = ((MR_Box) (Type_52));
              MR_hl_field(0, Arg_54, 2) = ((MR_Box) (Context_53));
            }
            MaybeTailArgs_55 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_1, VarSet_2, Terms_11);
            if (((MR_tag((MR_Word) MaybeTailArgs_55)) == (MR_Integer) 0))
              HeadVar__4_4 = MaybeTailArgs_55;
            else
            {
              MR_Word Args_57 = ((MR_Word) ((MR_hl_field(1, MaybeTailArgs_55, (MR_Integer) 0))));
              MR_Word Var_61;

              {
                Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_61, 0) = ((MR_Box) (Arg_54));
                MR_hl_field(1, Var_61, 1) = ((MR_Box) (Args_57));
              }
              {
                HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (Var_61));
              }
            }
          }
        }
        else
        {
          MR_Word Spec_24;
          MR_Word Var_42;
          MR_Word Var_43;

          Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
          {
            Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_defn.convert_constructor_arg_list\'/3"));
            MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Var_42));
            MR_hl_field(0, Spec_24, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[133])));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_43));
          }
        }
      }
    }
    else
    {
      MR_Word ContextPieces_65;
      MR_Word MaybeType_66;

      ContextPieces_65 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_defn_scalar_common_1[134]))));
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_2, ContextPieces_65, Term_10, &MaybeType_66);
      if (((MR_tag((MR_Word) MaybeType_66)) == (MR_Integer) 0))
        HeadVar__4_4 = (MR_Word) (MaybeType_66);
      else
      {
        MR_Word Type_67 = ((MR_Word) ((MR_hl_field(1, MaybeType_66, (MR_Integer) 0))));
        MR_Word Context_68;
        MR_Word Arg_69;
        MR_Word MaybeTailArgs_70;

        Context_68 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
        {
          Arg_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Arg_69, 1) = ((MR_Box) (Type_67));
          MR_hl_field(0, Arg_69, 2) = ((MR_Box) (Context_68));
        }
        MaybeTailArgs_70 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(ModuleName_1, VarSet_2, Terms_11);
        if (((MR_tag((MR_Word) MaybeTailArgs_70)) == (MR_Integer) 0))
          HeadVar__4_4 = MaybeTailArgs_70;
        else
        {
          MR_Word Args_72 = ((MR_Word) ((MR_hl_field(1, MaybeTailArgs_70, (MR_Integer) 0))));
          MR_Word Var_76;

          {
            Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_76, 0) = ((MR_Box) (Arg_69));
            MR_hl_field(1, Var_76, 1) = ((MR_Box) (Args_72));
          }
          {
            HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (Var_76));
          }
        }
      }
    }
  }
  return HeadVar__4_4;
}

static void MR_CALL 
parse_tree__parse_type_defn__get_existential_constraints_from_term_5_p_0(
  MR_Word ModuleName_6,
  MR_Word VarSet_7,
  MR_Word STATE_VARIABLE_PredTypeTerm_0_12,
  MR_Word * STATE_VARIABLE_PredTypeTerm_13,
  MR_Word * MaybeExistentialConstraints_9)
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
    Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredTypeTerm_0_12, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredTypeTerm_0_12, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_15 = ((MR_String) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
      succeeded = (strcmp(Var_15, (MR_String) "=>") == 0);
      if (succeeded)
      {
        succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          STATE_VARIABLE_PredTypeTerm_17_17 = ((MR_Word) ((MR_hl_field(1, Var_16, (MR_Integer) 0))));
          Var_18 = ((MR_Word) ((MR_hl_field(1, Var_16, (MR_Integer) 1))));
          succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ExistentialConstraints_10 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
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
    *MaybeExistentialConstraints_9 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_2[6]));
    *STATE_VARIABLE_PredTypeTerm_13 = STATE_VARIABLE_PredTypeTerm_0_12;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word Term_4,
  MR_Word * CtorsTerm_5,
  MR_Word * MaybeWhereTerm_6)
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
    Var_11 = ((MR_Word) ((MR_hl_field(0, Term_4, (MR_Integer) 0))));
    Args_7 = ((MR_Word) ((MR_hl_field(0, Term_4, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_12 = ((MR_String) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
      succeeded = (strcmp(Var_12, (MR_String) "where") == 0);
      if (succeeded)
      {
        succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CtorsTermPrime_9 = ((MR_Word) ((MR_hl_field(1, Args_7, (MR_Integer) 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(1, Args_7, (MR_Integer) 1))));
          succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            WhereTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 1))));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeWhereTerm_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (WhereTerm_10));
    }
  }
  else
  {
    *CtorsTerm_5 = Term_4;
    *MaybeWhereTerm_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_132;

  parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1739__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_132);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_132));
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_Word * MaybeTypeCtorAndArgs_10)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
  {
    MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    MR_Word MaybeSymNameArgs_18;
    MR_Word Context_126 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 2))));

    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_7, VarSet_8, ContextPieces_6, Term_9, &MaybeSymNameArgs_18);
    if (((MR_tag((MR_Word) MaybeSymNameArgs_18)) == (MR_Integer) 0))
      *MaybeTypeCtorAndArgs_10 = (MR_Word) (MaybeSymNameArgs_18);
    else
    {
      MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameArgs_18, (MR_Integer) 0))));
      MR_Word ArgTerms_21 = ((MR_Word) ((MR_hl_field(1, MaybeSymNameArgs_18, (MR_Integer) 1))));
      MR_Word NameSpecs_22;
      MR_Word TypeInfo_130_130;
      MR_String Var_69;
      MR_Integer Var_70;
      MR_Integer Var_138;

      parse_tree__parse_type_defn__check_user_type_name_3_p_0(SymName_20, Context_126, &NameSpecs_22);
      Var_69 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_20);
      succeeded = (strcmp(Var_69, (MR_String) "=<") == 0);
      if (succeeded)
      {
        Var_70 = (MR_Integer) 2;
        TypeInfo_130_130 = (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[1]);
        mercury__list__length_2_p_0(TypeInfo_130_130, ArgTerms_21, &Var_138);
        succeeded = (Var_70 == Var_138);
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeCtorAndArgs_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (NameSpecs_22));
        }
      else
      {
        MR_Word MaybeParamVars_23;

        parse_tree__parse_util__terms_to_distinct_vars_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, (MR_String) "a", (MR_String) "type definition", ArgTerms_21, &MaybeParamVars_23);
        if (((MR_tag((MR_Word) MaybeParamVars_23)) == (MR_Integer) 0))
        {
          MR_Word ParamsSpecs_28 = ((MR_Word) ((MR_hl_field(0, MaybeParamVars_23, (MR_Integer) 0))));
          MR_String Var_74;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_74 = ((MR_String) ((MR_hl_field(0, Functor_16, (MR_Integer) 0))));
            succeeded = (strcmp(Var_74, (MR_String) ";") == 0);
          }
          if (succeeded)
          {
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_109;
            MR_Word Pieces_110;
            MR_Word Spec_111;

            Var_83 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[74])));
            Var_98 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[76])));
            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_98, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
            Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_97);
            Pieces_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[66])), Var_82);
            {
              Spec_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_111, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_defn_head\'/5"));
              MR_hl_field(0, Spec_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_111, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_111, 3) = ((MR_Box) (Context_126));
              MR_hl_field(0, Spec_111, 4) = ((MR_Box) (Pieces_110));
            }
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (Spec_111));
              MR_hl_field(1, Var_109, 1) = ((MR_Box) (NameSpecs_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
            }
          }
          else
          if ((NameSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (ParamsSpecs_28));
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (NameSpecs_22));
            }
        }
        else
        {
          MR_Word ParamVars_24 = ((MR_Word) ((MR_hl_field(1, MaybeParamVars_23, (MR_Integer) 0))));

          if ((NameSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word PrgParamVars_25;

            mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_type_defn_scalar_common_3[1]), ParamVars_24, &PrgParamVars_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SymName_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (PrgParamVars_25));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (NameSpecs_22));
            }
        }
      }
    }
  }
  else
  {
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(1, Term_9, (MR_Integer) 1))));
    MR_String TermStr_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_48;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_67;

    TermStr_13 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Var_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
    Var_40 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[83])));
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (TermStr_13));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[45])));
    }
    Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_55);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[85])), Var_53);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_48);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[79])), Var_39);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_32);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.parse_type_defn_head\'/5"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_12));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTypeCtorAndArgs_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word SymName_4,
  MR_Word Context_5,
  MR_Word * NameSpecs_6)
{
  MR_bool succeeded;
  MR_String Name_7;

  Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_4);
  succeeded = (strcmp(Name_7, (MR_String) "=") == 0);
  if (succeeded)
  {
    MR_Word NamePieces_8;
    MR_Word NameSpec_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;

    Var_15 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[277])));
    Var_32 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[281])));
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[24])));
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[279])), Var_31);
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_26);
    NamePieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[273])), Var_14);
    {
      NameSpec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NameSpec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_user_type_name\'/3"));
      MR_hl_field(0, NameSpec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, NameSpec_9, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, NameSpec_9, 3) = ((MR_Box) (Context_5));
      MR_hl_field(0, NameSpec_9, 4) = ((MR_Box) (NamePieces_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *NameSpecs_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NameSpec_9));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    succeeded = parse_tree__parse_type_name__is_known_type_name_1_p_0(Name_7);
    if (succeeded)
    {
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word NamePieces_77;
      MR_Word NameSpec_78;

      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (Name_7));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_52 = parse_tree__error_spec__color_as_subject_1_f_0(Var_53);
      Var_62 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[287])));
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[289])));
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[285])), Var_61);
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_56);
      NamePieces_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_defn_scalar_common_1[283])), Var_51);
      {
        NameSpec_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NameSpec_78, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_defn.check_user_type_name\'/3"));
        MR_hl_field(0, NameSpec_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, NameSpec_78, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, NameSpec_78, 3) = ((MR_Box) (Context_5));
        MR_hl_field(0, NameSpec_78, 4) = ((MR_Box) (NamePieces_77));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *NameSpecs_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NameSpec_78));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
