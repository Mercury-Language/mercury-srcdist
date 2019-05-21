/*
** Automatically generated from `parse_type_defn.m'
** by the Mercury compiler,
** version rotd-2017-08-07
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module parse_tree.parse_type_defn. */
/* :- implementation. */

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
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_55);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__541__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_231,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_300);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__535__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__ExistQVars_19,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_294);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__513__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_226,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_284);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__506__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_127,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_278);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__502__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_124);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__487__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_219,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_271);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_61,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_260);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__454__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_58);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__306__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_36,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_37);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__196__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__SolverTypeDetails_29,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_73);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__2_2_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_185);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__2_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_154,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_155);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_147);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_141,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_142);

static void MR_CALL 
parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeFunctor_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_121,
  MR_Word parse_tree__parse_type_defn__Var_122,
  MR_String parse_tree__parse_type_defn__HeadVar__1_32,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_106);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_121,
  MR_Word parse_tree__parse_type_defn__Var_122,
  MR_String parse_tree__parse_type_defn__HeadVar__1_36,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_112);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_12,
  MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_13,
  MR_Word parse_tree__parse_type_defn__Context_14,
  MR_Integer parse_tree__parse_type_defn__SeqNum_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_8,
  MR_Word parse_tree__parse_type_defn__VarSet_9,
  MR_Word parse_tree__parse_type_defn__HeadTerm_10,
  MR_Word parse_tree__parse_type_defn__BodyTerm_11,
  MR_Word parse_tree__parse_type_defn__Context_12,
  MR_Integer parse_tree__parse_type_defn__SeqNum_13,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__ParamTVars_7,
  MR_Word parse_tree__parse_type_defn__BodyType_8,
  MR_Word parse_tree__parse_type_defn__BodyContext_9,
  MR_Word * parse_tree__parse_type_defn__Specs_10);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg);

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_6,
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__Term0_9,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereDetails_10);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_35,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_85);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word parse_tree__parse_type_defn__Var_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_Word parse_tree__parse_type_defn__Var_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_39,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_91);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word parse_tree__parse_type_defn__Var_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_Word parse_tree__parse_type_defn__Var_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_43,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_97);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_Word parse_tree__parse_type_defn__Var_54,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ContextPieces_8,
  MR_Word parse_tree__parse_type_defn__Term_9);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_String parse_tree__parse_type_defn__HeadVar__1_47,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_102);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_52,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5);

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5,
  MR_Word * parse_tree__parse_type_defn__MaybeItemMutableInfo_6);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_51,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_108);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_55,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_114);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_52,
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_59,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_119);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_52,
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_13,
  MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14,
  MR_Word parse_tree__parse_type_defn__MaybeRepresentationIs_15,
  MR_Word parse_tree__parse_type_defn__MaybeGroundIs_16,
  MR_Word parse_tree__parse_type_defn__MaybeAnyIs_17,
  MR_Word parse_tree__parse_type_defn__MaybeCStoreIs_18,
  MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_19,
  MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_20,
  MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_21,
  MR_Word parse_tree__parse_type_defn__MaybeWhereEnd_22,
  MR_Word parse_tree__parse_type_defn__WhereTerm_23);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_12,
  MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_13,
  MR_Word parse_tree__parse_type_defn__RepresentationIs_14,
  MR_Word parse_tree__parse_type_defn__GroundIs_15,
  MR_Word parse_tree__parse_type_defn__AnyIs_16,
  MR_Word parse_tree__parse_type_defn__CStoreIs_17,
  MR_Word parse_tree__parse_type_defn__EqualityIs_18,
  MR_Word parse_tree__parse_type_defn__ComparisonIs_19,
  MR_Word parse_tree__parse_type_defn__DirectArgIs_20,
  MR_Word parse_tree__parse_type_defn__WhereTerm_21);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word parse_tree__parse_type_defn__MaybeEqPred_4,
  MR_Word parse_tree__parse_type_defn__MaybeCmpPred_5);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3);

static void MR_CALL 
parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_5);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__find_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__SymName_7,
  MR_Integer parse_tree__parse_type_defn__Arity_8,
  MR_Word * parse_tree__parse_type_defn__NamedCtor_9);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_5(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_4(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_3(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__BodyTerm_3,
  MR_Word parse_tree__parse_type_defn__HeadVar__4_4,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_6);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__HeadTerm_8,
  MR_Word parse_tree__parse_type_defn__TailTerms_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_10);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ExistQVars_8,
  MR_Word parse_tree__parse_type_defn__Term_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_10);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__MaybeCtorFieldName_9,
  MR_Word parse_tree__parse_type_defn__TypeTerm_10,
  MR_Word parse_tree__parse_type_defn__Terms_11);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word parse_tree__parse_type_defn__Term_4,
  MR_Word * parse_tree__parse_type_defn__CtorsTerm_5,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereTerm_6);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_4(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word parse_tree__parse_type_defn__SymName_4,
  MR_Word parse_tree__parse_type_defn__Context_5,
  MR_Word * parse_tree__parse_type_defn__NameSpecs_6);

static MR_bool MR_CALL 
parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0_10001(
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0_10001(
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_2,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_3);


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
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_55)
{
  {
    MR_String parse_tree__parse_type_defn__HeadVar__3_56;

    parse_tree__parse_type_defn__HeadVar__3_56 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__TVarSet_6, parse_tree__parse_type_defn__HeadVar__2_55);
    return parse_tree__parse_type_defn__HeadVar__3_56;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__541__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_231,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_300)
{
  {
    MR_String parse_tree__parse_type_defn__HeadVar__3_301;

    parse_tree__parse_type_defn__HeadVar__3_301 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__GenericVarSet_231, parse_tree__parse_type_defn__HeadVar__2_300);
    return parse_tree__parse_type_defn__HeadVar__3_301;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__535__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__ExistQVars_19,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_294)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    parse_tree__parse_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], parse_tree__parse_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_294)));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__513__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_226,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_284)
{
  {
    MR_String parse_tree__parse_type_defn__HeadVar__3_285;

    parse_tree__parse_type_defn__HeadVar__3_285 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__GenericVarSet_226, parse_tree__parse_type_defn__HeadVar__2_284);
    return parse_tree__parse_type_defn__HeadVar__3_285;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__506__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_127,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_278)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    parse_tree__parse_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], parse_tree__parse_type_defn__HeadVar__1_127, ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_278)));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__502__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_124)
{
  {
    MR_Word parse_tree__parse_type_defn__LambdaHeadVar__2_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 2)));
    MR_Word parse_tree__parse_type_defn__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 3)));

    return parse_tree__parse_type_defn__LambdaHeadVar__2_125;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__487__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_219,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_271)
{
  {
    MR_String parse_tree__parse_type_defn__HeadVar__3_272;

    parse_tree__parse_type_defn__HeadVar__3_272 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__GenericVarSet_219, parse_tree__parse_type_defn__HeadVar__2_271);
    return parse_tree__parse_type_defn__HeadVar__3_272;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_61,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_260)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    parse_tree__parse_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], parse_tree__parse_type_defn__HeadVar__1_61, ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_260)));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__454__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_58)
{
  {
    MR_Word parse_tree__parse_type_defn__LambdaHeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 2)));
    MR_Word parse_tree__parse_type_defn__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 3)));

    return parse_tree__parse_type_defn__LambdaHeadVar__2_59;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__306__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_36,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_37)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__HeadVar__1_36, parse_tree__parse_type_defn__HeadVar__2_37);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__196__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__SolverTypeDetails_29,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_73)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    parse_tree__parse_type_defn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[3], ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_29)), ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_73)));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__2_2_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_185)
{
  {
    MR_String parse_tree__parse_type_defn__HeadVar__3_186;

    parse_tree__parse_type_defn__HeadVar__3_186 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__HeadVar__2_185);
    return parse_tree__parse_type_defn__HeadVar__3_186;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__2_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_154,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_155)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__HeadVar__1_154, parse_tree__parse_type_defn__HeadVar__2_155);
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_147)
{
  {
    MR_String parse_tree__parse_type_defn__HeadVar__3_148;

    parse_tree__parse_type_defn__HeadVar__3_148 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__HeadVar__2_147);
    return parse_tree__parse_type_defn__HeadVar__3_148;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_141,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_142)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__HeadVar__1_141, parse_tree__parse_type_defn__HeadVar__2_142);
  }
}

void MR_CALL 
parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0(
  MR_Word * parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Integer parse_tree__parse_type_defn__CastX_8 = (MR_Integer) parse_tree__parse_type_defn__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_defn__CastY_9 = (MR_Integer) parse_tree__parse_type_defn__HeadVar__3_3;

    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__CastX_8 == parse_tree__parse_type_defn__CastY_9);
    if (parse_tree__parse_type_defn__succeeded)
      *parse_tree__parse_type_defn__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((parse_tree__parse_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__parse_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_type_defn__HeadVar__1_1 = (MR_Integer) 0;
      else
        *parse_tree__parse_type_defn__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__2_2, (MR_Integer) 0)));

      if ((parse_tree__parse_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_type_defn__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word parse_tree__parse_type_defn__ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[15], parse_tree__parse_type_defn__HeadVar__1_1, ((MR_Box) (parse_tree__parse_type_defn__Var_11)), ((MR_Box) (parse_tree__parse_type_defn__ArgY1_7)));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Integer parse_tree__parse_type_defn__CastX_7 = (MR_Integer) parse_tree__parse_type_defn__HeadVar__1_1;
    MR_Integer parse_tree__parse_type_defn__CastY_8 = (MR_Integer) parse_tree__parse_type_defn__HeadVar__2_2;

    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__CastX_7 == parse_tree__parse_type_defn__CastY_8);
    if (parse_tree__parse_type_defn__succeeded)
      parse_tree__parse_type_defn__succeeded = MR_TRUE;
    else
    if ((parse_tree__parse_type_defn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer parse_tree__parse_type_defn__CastX_3 = (MR_Integer) parse_tree__parse_type_defn__HeadVar__1_1;
      MR_Integer parse_tree__parse_type_defn__CastY_4 = (MR_Integer) parse_tree__parse_type_defn__HeadVar__2_2;

      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__CastY_4 == parse_tree__parse_type_defn__CastX_3);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeInfo_9_9;
      MR_Word parse_tree__parse_type_defn__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__ArgY1_6;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__2_2, (MR_Integer) 0)));
        parse_tree__parse_type_defn__TypeInfo_9_9 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[15];
        parse_tree__parse_type_defn__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_defn__TypeInfo_9_9, ((MR_Box) (parse_tree__parse_type_defn__ArgX1_5)), ((MR_Box) (parse_tree__parse_type_defn__ArgY1_6)));
      }
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeFunctor_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__Name_9;
    MR_Integer parse_tree__parse_type_defn__Arity_10;

    parse_tree__parse_type_defn__succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__Term_7, &parse_tree__parse_type_defn__Name_9, &parse_tree__parse_type_defn__Arity_10);
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__Var_14;

      {
        parse_tree__parse_type_defn__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_14, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_9));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_14, 1) = ((MR_Box) (parse_tree__parse_type_defn__Arity_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_type_defn__MaybeFunctor_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_14));
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_String parse_tree__parse_type_defn__TermStr_11;
      MR_Word parse_tree__parse_type_defn__Pieces_12;
      MR_Word parse_tree__parse_type_defn__Spec_13;
      MR_Word parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_26;
      MR_Word parse_tree__parse_type_defn__Var_27;
      MR_Word parse_tree__parse_type_defn__Var_36;
      MR_Word parse_tree__parse_type_defn__Var_37;
      MR_Word parse_tree__parse_type_defn__Var_38;
      MR_Word parse_tree__parse_type_defn__Var_39;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_43;

      parse_tree__parse_type_defn__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_46_46, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_27, 1) = ((MR_Box) (parse_tree__parse_type_defn__TermStr_11));
      }
      {
        parse_tree__parse_type_defn__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_27));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])));
      }
      {
        parse_tree__parse_type_defn__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[214])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_26));
      }
      {
        parse_tree__parse_type_defn__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_23));
      }
      {
        parse_tree__parse_type_defn__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[213])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_17, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_20));
      }
      {
        parse_tree__parse_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_17));
      }
      parse_tree__parse_type_defn__Var_38 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_46_46, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_12));
      }
      {
        parse_tree__parse_type_defn__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_40));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_37, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_38));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_37, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_39));
      }
      {
        parse_tree__parse_type_defn__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_37));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_36));
      }
      {
        parse_tree__parse_type_defn__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_13));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeFunctor_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_43));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_where_unify_compare_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term0_7,
  MR_Word * parse_tree__parse_type_defn__MaybeUnifyCompare_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10;
    MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_11;
    MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_12;
    MR_Word parse_tree__parse_type_defn__MaybeWhereEnd_13;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_29_29;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_31_31;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_35_35;
    MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_19;
    MR_Word parse_tree__parse_type_defn__EqualityIs_20;
    MR_Word parse_tree__parse_type_defn__ComparisonIs_21;

    {
      parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_27_27, 0) = ((MR_Box) (parse_tree__parse_type_defn__Term0_7));
    }
    parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_29_29);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, &parse_tree__parse_type_defn__MaybeEqualityIs_11, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_29_29, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_31_31);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, &parse_tree__parse_type_defn__MaybeComparisonIs_12, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_31_31, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_35_35);
    if ((parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      parse_tree__parse_type_defn__MaybeWhereEnd_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[9]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_Word parse_tree__parse_type_defn__EndTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_35_35, (MR_Integer) 0)));
      MR_String parse_tree__parse_type_defn__EndTermStr_15;
      MR_Word parse_tree__parse_type_defn__Pieces_16;
      MR_Word parse_tree__parse_type_defn__EndSpec_18;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_43;
      MR_Word parse_tree__parse_type_defn__Var_46;
      MR_Word parse_tree__parse_type_defn__Var_49;
      MR_Word parse_tree__parse_type_defn__Var_52;
      MR_Word parse_tree__parse_type_defn__Var_53;
      MR_Word parse_tree__parse_type_defn__Var_81;
      MR_Word parse_tree__parse_type_defn__Var_82;
      MR_Word parse_tree__parse_type_defn__Var_83;
      MR_Word parse_tree__parse_type_defn__Var_84;
      MR_Word parse_tree__parse_type_defn__Var_85;
      MR_Word parse_tree__parse_type_defn__Var_91;

      parse_tree__parse_type_defn__EndTermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_117_117, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__EndTerm_14);
      {
        parse_tree__parse_type_defn__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_53, 1) = ((MR_Box) (parse_tree__parse_type_defn__EndTermStr_15));
      }
      {
        parse_tree__parse_type_defn__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_53));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[173])));
      }
      {
        parse_tree__parse_type_defn__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[209])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_49, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_52));
      }
      {
        parse_tree__parse_type_defn__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[208])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_49));
      }
      {
        parse_tree__parse_type_defn__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[207])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_43, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_46));
      }
      {
        parse_tree__parse_type_defn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[206])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_43));
      }
      {
        parse_tree__parse_type_defn__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[205])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_16, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_40));
      }
      parse_tree__parse_type_defn__Var_83 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_117_117, parse_tree__parse_type_defn__EndTerm_14);
      {
        parse_tree__parse_type_defn__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_85, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_16));
      }
      {
        parse_tree__parse_type_defn__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_84, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_85));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[211])));
      }
      {
        parse_tree__parse_type_defn__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_82, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_83));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_82, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_84));
      }
      {
        parse_tree__parse_type_defn__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_81, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_82));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__EndSpec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_18, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_81));
      }
      {
        parse_tree__parse_type_defn__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_91, 0) = ((MR_Box) (parse_tree__parse_type_defn__EndSpec_18));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__MaybeWhereEnd_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereEnd_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_91));
      }
    }
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhereEnd_13)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeEqualityIs_11)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__EqualityIs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeEqualityIs_11, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeComparisonIs_12)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
            parse_tree__parse_type_defn__ComparisonIs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeComparisonIs_12, (MR_Integer) 0)));
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
      if ((parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_type_defn__MaybeUC_25;

        parse_tree__parse_type_defn__MaybeUC_25 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(parse_tree__parse_type_defn__EqualityIs_20, parse_tree__parse_type_defn__ComparisonIs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUC_25));
        }
      }
      else
      {
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__EqualityIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__ComparisonIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
        {
          *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[35]);
        }
        else
        {
          MR_Word parse_tree__parse_type_defn__Spec_24;
          MR_Word parse_tree__parse_type_defn__Var_97;

          parse_tree__parse_type_defn__Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(parse_tree__parse_type_defn__Term0_7);
          {
            parse_tree__parse_type_defn__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_97, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_97));
          }
        }
      }
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word parse_tree__parse_type_defn__TypeInfo_119_119 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[2];
      MR_Word parse_tree__parse_type_defn__Specs_26;
      MR_Word parse_tree__parse_type_defn__Var_99;
      MR_Word parse_tree__parse_type_defn__Var_100;
      MR_Word parse_tree__parse_type_defn__Var_101;
      MR_Word parse_tree__parse_type_defn__Var_102;

      parse_tree__parse_type_defn__Var_99 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_119_119, parse_tree__parse_type_defn__MaybeEqualityIs_11);
      parse_tree__parse_type_defn__Var_101 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_119_119, parse_tree__parse_type_defn__MaybeComparisonIs_12);
      parse_tree__parse_type_defn__Var_102 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, parse_tree__parse_type_defn__MaybeWhereEnd_13);
      parse_tree__parse_type_defn__Var_100 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_118_118, parse_tree__parse_type_defn__Var_101, parse_tree__parse_type_defn__Var_102);
      parse_tree__parse_type_defn__Specs_26 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_118_118, parse_tree__parse_type_defn__Var_99, parse_tree__parse_type_defn__Var_100);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_26));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_50_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_121,
  MR_Word parse_tree__parse_type_defn__Var_122,
  MR_String parse_tree__parse_type_defn__HeadVar__1_32,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_106)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_107;

    parse_tree__parse_type_defn__HeadVar__4_107 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_121, parse_tree__parse_type_defn__Var_122, parse_tree__parse_type_defn__HeadVar__1_32, parse_tree__parse_type_defn__HeadVar__3_106);
    return parse_tree__parse_type_defn__HeadVar__4_107;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_49_54_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_121,
  MR_Word parse_tree__parse_type_defn__Var_122,
  MR_String parse_tree__parse_type_defn__HeadVar__1_36,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_112)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_113;

    parse_tree__parse_type_defn__HeadVar__4_113 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_121, parse_tree__parse_type_defn__Var_122, parse_tree__parse_type_defn__HeadVar__1_36, parse_tree__parse_type_defn__HeadVar__3_112);
    return parse_tree__parse_type_defn__HeadVar__4_113;
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__ArgTerms_9,
  MR_Word parse_tree__parse_type_defn__Context_10,
  MR_Integer parse_tree__parse_type_defn__SeqNum_11,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__SubArgTerms_14;
    MR_Word parse_tree__parse_type_defn__SubContext_15;
    MR_Word parse_tree__parse_type_defn__ArgTerm_13;
    MR_Word parse_tree__parse_type_defn__Var_18;
    MR_Word parse_tree__parse_type_defn__Var_19;
    MR_String parse_tree__parse_type_defn__Var_20;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_9, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_9, (MR_Integer) 1)));
      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ArgTerm_13, (MR_Integer) 0)));
          parse_tree__parse_type_defn__SubArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ArgTerm_13, (MR_Integer) 1)));
          parse_tree__parse_type_defn__SubContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ArgTerm_13, (MR_Integer) 2)));
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_20, (MR_String) "type") == 0);
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__SubArgTerms_14, parse_tree__parse_type_defn__SubContext_15, parse_tree__parse_type_defn__SeqNum_11, (MR_Integer) 1, parse_tree__parse_type_defn__MaybeIOM_12);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_17;
      MR_Word parse_tree__parse_type_defn__Var_38;
      MR_Word parse_tree__parse_type_defn__Var_39;
      MR_Word parse_tree__parse_type_defn__Var_44;

      {
        parse_tree__parse_type_defn__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_10));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[204])));
      }
      {
        parse_tree__parse_type_defn__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_38, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_39));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_38));
      }
      {
        parse_tree__parse_type_defn__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_44, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_44));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_8,
  MR_Word parse_tree__parse_type_defn__VarSet_9,
  MR_Word parse_tree__parse_type_defn__ArgTerms_10,
  MR_Word parse_tree__parse_type_defn__Context_11,
  MR_Integer parse_tree__parse_type_defn__SeqNum_12,
  MR_Word parse_tree__parse_type_defn__IsSolverType_13,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_14)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__TypeDefnTerm_15;
    MR_Word parse_tree__parse_type_defn__Var_23;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__TypeDefnTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_10, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_10, (MR_Integer) 1)));
      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_String parse_tree__parse_type_defn__Name_16;
      MR_Word parse_tree__parse_type_defn__HeadTerm_19;
      MR_Word parse_tree__parse_type_defn__BodyTerm_20;
      MR_Word parse_tree__parse_type_defn__TypeDefnArgTerms_17;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_Word parse_tree__parse_type_defn__Var_25;
      MR_Word parse_tree__parse_type_defn__Var_26;
      MR_Word parse_tree__parse_type_defn__Var_18;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__TypeDefnTerm_15)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefnTerm_15, (MR_Integer) 0)));
        parse_tree__parse_type_defn__TypeDefnArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefnTerm_15, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefnTerm_15, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_24)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_24, (MR_Integer) 0)));
          if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "==") == 0))
            parse_tree__parse_type_defn__succeeded = MR_TRUE;
          else
          if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "--->") == 0))
            parse_tree__parse_type_defn__succeeded = MR_TRUE;
          else
          if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "where") == 0))
            parse_tree__parse_type_defn__succeeded = MR_TRUE;
          else
            parse_tree__parse_type_defn__succeeded = MR_FALSE;
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__TypeDefnArgTerms_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TypeDefnArgTerms_17, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TypeDefnArgTerms_17, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_25)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__BodyTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
        if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "==") == 0))
          parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_19, parse_tree__parse_type_defn__BodyTerm_20, parse_tree__parse_type_defn__Context_11, parse_tree__parse_type_defn__SeqNum_12, parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__MaybeIOM_14);
        else
        if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "--->") == 0))
          parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_19, parse_tree__parse_type_defn__BodyTerm_20, parse_tree__parse_type_defn__Context_11, parse_tree__parse_type_defn__SeqNum_12, parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__MaybeIOM_14);
        else
          parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_19, parse_tree__parse_type_defn__BodyTerm_20, parse_tree__parse_type_defn__Context_11, parse_tree__parse_type_defn__SeqNum_12, parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__MaybeIOM_14);
      else
      {
        MR_Word parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61;

        parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__TypeDefnTerm_15, &parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word parse_tree__parse_type_defn__Specs_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_type_defn__MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_62));
          }
        }
        else
        {
          MR_Word parse_tree__parse_type_defn__Name_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__Params_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 1)));
          MR_Word parse_tree__parse_type_defn__TypeVarSet_65;
          MR_Word parse_tree__parse_type_defn__AbstractTypeDetails_66;
          MR_Word parse_tree__parse_type_defn__TypeDefn_67;
          MR_Word parse_tree__parse_type_defn__ItemTypeDefn_68;
          MR_Word parse_tree__parse_type_defn__Item_69;
          MR_Word parse_tree__parse_type_defn__Var_71;

          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_9, &parse_tree__parse_type_defn__TypeVarSet_65);
          switch (parse_tree__parse_type_defn__IsSolverType_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__parse_type_defn__AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              parse_tree__parse_type_defn__AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          {
            parse_tree__parse_type_defn__TypeDefn_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn_67, 1) = ((MR_Box) (parse_tree__parse_type_defn__AbstractTypeDetails_66));
          }
          {
            parse_tree__parse_type_defn__ItemTypeDefn_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_63));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 1) = ((MR_Box) (parse_tree__parse_type_defn__Params_64));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_67));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 3) = ((MR_Box) (parse_tree__parse_type_defn__TypeVarSet_65));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_11));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_12));
          }
          parse_tree__parse_type_defn__Item_69 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_68);
          {
            parse_tree__parse_type_defn__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_71, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_type_defn__MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_71));
          }
        }
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_22;
      MR_Word parse_tree__parse_type_defn__Var_46;
      MR_Word parse_tree__parse_type_defn__Var_47;
      MR_Word parse_tree__parse_type_defn__Var_52;

      {
        parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_11));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[203])));
      }
      {
        parse_tree__parse_type_defn__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_46));
      }
      {
        parse_tree__parse_type_defn__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_22));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_52));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  switch (parse_tree__parse_type_defn__IsSolverType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, parse_tree__parse_type_defn__BodyTerm_12, parse_tree__parse_type_defn__Context_13, parse_tree__parse_type_defn__SeqNum_14, parse_tree__parse_type_defn__MaybeIOM_16);
      break;
    case (MR_Integer) 1:
      {
        MR_Word parse_tree__parse_type_defn__MaybeWhere_17;

        parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 1, parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__BodyTerm_12, &parse_tree__parse_type_defn__MaybeWhere_17);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhere_17)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word parse_tree__parse_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_type_defn__MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_18));
          }
        }
        else
        {
          MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 1)));
          MR_Word parse_tree__parse_type_defn__MaybeDirectArgCtors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 2)));

          if ((parse_tree__parse_type_defn__MaybeDirectArgCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, parse_tree__parse_type_defn__MaybeSolverTypeDetails_19, parse_tree__parse_type_defn__MaybeUserEqComp_20, parse_tree__parse_type_defn__Context_13, parse_tree__parse_type_defn__SeqNum_14, parse_tree__parse_type_defn__MaybeIOM_16);
          else
          {
            MR_Word parse_tree__parse_type_defn__Spec_24;
            MR_Word parse_tree__parse_type_defn__Var_42;
            MR_Word parse_tree__parse_type_defn__Var_43;
            MR_Word parse_tree__parse_type_defn__Var_44;
            MR_Word parse_tree__parse_type_defn__Var_49;

            parse_tree__parse_type_defn__Var_44 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadTerm_11);
            {
              parse_tree__parse_type_defn__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_44));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[202])));
            }
            {
              parse_tree__parse_type_defn__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_42, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_43));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
            }
            {
              parse_tree__parse_type_defn__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_49, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_defn__MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_49));
            }
          }
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_12,
  MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_13,
  MR_Word parse_tree__parse_type_defn__Context_14,
  MR_Integer parse_tree__parse_type_defn__SeqNum_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_58_58 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_type_defn__TVarSet_17;
    MR_Word parse_tree__parse_type_defn__MaybeNameParams_18;
    MR_Word parse_tree__parse_type_defn__SolverSpecs_20;
    MR_Word parse_tree__parse_type_defn__FreeSpecs_27;
    MR_Word parse_tree__parse_type_defn__ParamTVars0_24;
    MR_Word parse_tree__parse_type_defn__SolverTypeDetails0_25;
    MR_Word parse_tree__parse_type_defn___SymName_23;
    MR_Word parse_tree__parse_type_defn__SymName_28;
    MR_Word parse_tree__parse_type_defn__ParamTVars_29;
    MR_Word parse_tree__parse_type_defn__SolverTypeDetails_30;

    mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_10, &parse_tree__parse_type_defn__TVarSet_17);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, &parse_tree__parse_type_defn__MaybeNameParams_18);
    if ((parse_tree__parse_type_defn__MaybeSolverTypeDetails_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word parse_tree__parse_type_defn__SolverSpec_22;
      MR_Word parse_tree__parse_type_defn__Var_44;
      MR_Word parse_tree__parse_type_defn__Var_45;
      MR_Word parse_tree__parse_type_defn__Var_46;

      parse_tree__parse_type_defn__Var_46 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, parse_tree__parse_type_defn__HeadTerm_11);
      {
        parse_tree__parse_type_defn__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_45, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_46));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[201])));
      }
      {
        parse_tree__parse_type_defn__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_44, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_45));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__SolverSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_44));
      }
      {
        parse_tree__parse_type_defn__SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_20, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverSpec_22));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      parse_tree__parse_type_defn__SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn___SymName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 0)));
      parse_tree__parse_type_defn__ParamTVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 1)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
        parse_tree__parse_type_defn__SolverTypeDetails0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSolverTypeDetails_12, (MR_Integer) 0)));
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__RepType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 1)));
      MR_Word parse_tree__parse_type_defn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 2)));
      MR_Word parse_tree__parse_type_defn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 3)));

      parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(parse_tree__parse_type_defn__TVarSet_17, parse_tree__parse_type_defn__ParamTVars0_24, parse_tree__parse_type_defn__RepType_26, parse_tree__parse_type_defn__Context_14, &parse_tree__parse_type_defn__FreeSpecs_27);
    }
    else
      parse_tree__parse_type_defn__FreeSpecs_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 0)));
        parse_tree__parse_type_defn__ParamTVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__SolverTypeDetails_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSolverTypeDetails_12, (MR_Integer) 0)));
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__TypeDefn_31;
      MR_Word parse_tree__parse_type_defn__DetailsSolver_32;
      MR_Word parse_tree__parse_type_defn__ItemTypeDefn_33;
      MR_Word parse_tree__parse_type_defn__Item_34;
      MR_Word parse_tree__parse_type_defn__Var_52;

      {
        parse_tree__parse_type_defn__DetailsSolver_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DetailsSolver_32, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_30));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DetailsSolver_32, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUserEqComp_13));
      }
      parse_tree__parse_type_defn__TypeDefn_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__DetailsSolver_32);
      {
        parse_tree__parse_type_defn__ItemTypeDefn_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_33, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_28));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_33, 1) = ((MR_Box) (parse_tree__parse_type_defn__ParamTVars_29));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_33, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_31));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_33, 3) = ((MR_Box) (parse_tree__parse_type_defn__TVarSet_17));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_33, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_14));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_33, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_15));
      }
      parse_tree__parse_type_defn__Item_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_33);
      {
        parse_tree__parse_type_defn__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_52, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_type_defn__MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_52));
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word parse_tree__parse_type_defn__Specs_35;
      MR_Word parse_tree__parse_type_defn__Var_53;
      MR_Word parse_tree__parse_type_defn__Var_54;

      parse_tree__parse_type_defn__Var_54 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeNameParams_18);
      parse_tree__parse_type_defn__Var_53 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_60_60, parse_tree__parse_type_defn__Var_54, parse_tree__parse_type_defn__FreeSpecs_27);
      parse_tree__parse_type_defn__Specs_35 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_60_60, parse_tree__parse_type_defn__SolverSpecs_20, parse_tree__parse_type_defn__Var_53);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_35));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_8,
  MR_Word parse_tree__parse_type_defn__VarSet_9,
  MR_Word parse_tree__parse_type_defn__HeadTerm_10,
  MR_Word parse_tree__parse_type_defn__BodyTerm_11,
  MR_Word parse_tree__parse_type_defn__Context_12,
  MR_Integer parse_tree__parse_type_defn__SeqNum_13,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_14)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_80_80 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_type_defn__TypeVarSet_15;
    MR_Word parse_tree__parse_type_defn__MaybeNameParams_16;
    MR_Word parse_tree__parse_type_defn__MaybeTypeDefn_22;
    MR_Word parse_tree__parse_type_defn__Args_17;
    MR_Word parse_tree__parse_type_defn__Var_32;
    MR_String parse_tree__parse_type_defn__Var_33;
    MR_Word parse_tree__parse_type_defn__Var_18;
    MR_Word parse_tree__parse_type_defn__Name_25;
    MR_Word parse_tree__parse_type_defn__Params_26;
    MR_Word parse_tree__parse_type_defn__TypeDefn_27;

    mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_80_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_9, &parse_tree__parse_type_defn__TypeVarSet_15);
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_10, &parse_tree__parse_type_defn__MaybeNameParams_16);
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BodyTerm_11, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BodyTerm_11, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BodyTerm_11, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_32)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_32, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_33, (MR_String) "type_is_abstract_enum") == 0);
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Integer parse_tree__parse_type_defn__NumBits_20;
      MR_Word parse_tree__parse_type_defn__Arg_19;
      MR_Word parse_tree__parse_type_defn__Var_34;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Args_17)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_17, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_17, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__succeeded = mercury__term__decimal_term_to_int_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_80_80, parse_tree__parse_type_defn__Arg_19, &parse_tree__parse_type_defn__NumBits_20);
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__TypeDefn0_21;
        MR_Word parse_tree__parse_type_defn__Var_35;

        {
          parse_tree__parse_type_defn__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_35, 0) = ((MR_Box) (parse_tree__parse_type_defn__NumBits_20));
        }
        {
          parse_tree__parse_type_defn__TypeDefn0_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn0_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn0_21, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_35));
        }
        {
          parse_tree__parse_type_defn__MaybeTypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeDefn_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn0_21));
        }
      }
      else
      {
        MR_Word parse_tree__parse_type_defn__Spec_24;
        MR_Word parse_tree__parse_type_defn__Var_46;
        MR_Word parse_tree__parse_type_defn__Var_47;
        MR_Word parse_tree__parse_type_defn__Var_52;

        {
          parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[199])));
        }
        {
          parse_tree__parse_type_defn__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_46));
        }
        {
          parse_tree__parse_type_defn__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeTypeDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTypeDefn_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_52));
        }
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Var_67;
      MR_Word parse_tree__parse_type_defn__Var_68;
      MR_Word parse_tree__parse_type_defn__Var_73;
      MR_Word parse_tree__parse_type_defn__Spec_79;

      {
        parse_tree__parse_type_defn__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_68, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_12));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[200])));
      }
      {
        parse_tree__parse_type_defn__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_67, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_68));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_79, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_67));
      }
      {
        parse_tree__parse_type_defn__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_73, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_79));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__MaybeTypeDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTypeDefn_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_73));
      }
    }
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameParams_16)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Name_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_16, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_16, (MR_Integer) 1)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeDefn_22)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
        parse_tree__parse_type_defn__TypeDefn_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeDefn_22, (MR_Integer) 0)));
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__ItemTypeDefn_28;
      MR_Word parse_tree__parse_type_defn__Item_29;
      MR_Word parse_tree__parse_type_defn__Var_75;

      {
        parse_tree__parse_type_defn__ItemTypeDefn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_28, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_25));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_28, 1) = ((MR_Box) (parse_tree__parse_type_defn__Params_26));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_28, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_27));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_28, 3) = ((MR_Box) (parse_tree__parse_type_defn__TypeVarSet_15));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_28, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_12));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_28, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_13));
      }
      parse_tree__parse_type_defn__Item_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_28);
      {
        parse_tree__parse_type_defn__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_75, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_type_defn__MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_75));
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Specs_30;
      MR_Word parse_tree__parse_type_defn__Var_76;
      MR_Word parse_tree__parse_type_defn__Var_77;

      parse_tree__parse_type_defn__Var_76 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeNameParams_16);
      parse_tree__parse_type_defn__Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0, parse_tree__parse_type_defn__MaybeTypeDefn_22);
      parse_tree__parse_type_defn__Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_defn__Var_76, parse_tree__parse_type_defn__Var_77);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_30));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__SolverSpecs_17;
    MR_Word parse_tree__parse_type_defn__MaybeNameAndParams_20;
    MR_Word parse_tree__parse_type_defn__ContextPieces_21;
    MR_Word parse_tree__parse_type_defn__MaybeType_22;
    MR_Word parse_tree__parse_type_defn__Name_23;
    MR_Word parse_tree__parse_type_defn__ParamTVars_24;
    MR_Word parse_tree__parse_type_defn__Type_25;

    switch (parse_tree__parse_type_defn__IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_type_defn__SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_type_defn__SolverSpec_19;
          MR_Word parse_tree__parse_type_defn__Var_45;
          MR_Word parse_tree__parse_type_defn__Var_46;
          MR_Word parse_tree__parse_type_defn__Var_47;

          parse_tree__parse_type_defn__Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadTerm_11);
          {
            parse_tree__parse_type_defn__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_46, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[198])));
          }
          {
            parse_tree__parse_type_defn__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_45, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_46));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_type_defn__SolverSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_19, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_45));
          }
          {
            parse_tree__parse_type_defn__SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_17, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverSpec_19));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, &parse_tree__parse_type_defn__MaybeNameAndParams_20);
    parse_tree__parse_type_defn__ContextPieces_21 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[26]), parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__ContextPieces_21, parse_tree__parse_type_defn__BodyTerm_12, &parse_tree__parse_type_defn__MaybeType_22);
    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__SolverSpecs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameAndParams_20)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameAndParams_20, (MR_Integer) 0)));
        parse_tree__parse_type_defn__ParamTVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameAndParams_20, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeType_22)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeType_22, (MR_Integer) 0)));
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_Word parse_tree__parse_type_defn__TVarSet_26;
      MR_Word parse_tree__parse_type_defn__FreeSpecs_27;
      MR_Word parse_tree__parse_type_defn__Var_56;

      mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_63_63, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_10, &parse_tree__parse_type_defn__TVarSet_26);
      parse_tree__parse_type_defn__Var_56 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_63_63, parse_tree__parse_type_defn__BodyTerm_12);
      parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(parse_tree__parse_type_defn__TVarSet_26, parse_tree__parse_type_defn__ParamTVars_24, parse_tree__parse_type_defn__Type_25, parse_tree__parse_type_defn__Var_56, &parse_tree__parse_type_defn__FreeSpecs_27);
      if ((parse_tree__parse_type_defn__FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_type_defn__TypeDefn_28;
        MR_Word parse_tree__parse_type_defn__DetailsEqv_29 = (MR_Word) parse_tree__parse_type_defn__Type_25;
        MR_Word parse_tree__parse_type_defn__ItemTypeDefn_30;
        MR_Word parse_tree__parse_type_defn__Item_31;
        MR_Word parse_tree__parse_type_defn__Var_57;

        {
          parse_tree__parse_type_defn__TypeDefn_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn_28, 1) = ((MR_Box) (parse_tree__parse_type_defn__DetailsEqv_29));
        }
        {
          parse_tree__parse_type_defn__ItemTypeDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_30, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_23));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_30, 1) = ((MR_Box) (parse_tree__parse_type_defn__ParamTVars_24));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_30, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_28));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_30, 3) = ((MR_Box) (parse_tree__parse_type_defn__TVarSet_26));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_30, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_13));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_30, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_14));
        }
        parse_tree__parse_type_defn__Item_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_30);
        {
          parse_tree__parse_type_defn__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_57, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_57));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__FreeSpecs_27));
        }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word parse_tree__parse_type_defn__Specs_34;
      MR_Word parse_tree__parse_type_defn__Var_58;
      MR_Word parse_tree__parse_type_defn__Var_59;
      MR_Word parse_tree__parse_type_defn__Var_60;

      parse_tree__parse_type_defn__Var_59 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeNameAndParams_20);
      parse_tree__parse_type_defn__Var_60 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_defn__MaybeType_22);
      parse_tree__parse_type_defn__Var_58 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_65_65, parse_tree__parse_type_defn__Var_59, parse_tree__parse_type_defn__Var_60);
      parse_tree__parse_type_defn__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_65_65, parse_tree__parse_type_defn__SolverSpecs_17, parse_tree__parse_type_defn__Var_58);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_34));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv0_HeadVar__3_56;

    parse_tree__parse_type_defn__conv0_HeadVar__3_56 = parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1464__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_HeadVar__3_56));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__ParamTVars_7,
  MR_Word parse_tree__parse_type_defn__BodyType_8,
  MR_Word parse_tree__parse_type_defn__BodyContext_9,
  MR_Word * parse_tree__parse_type_defn__Specs_10)
{
  {
    MR_Word parse_tree__parse_type_defn__TypeInfo_53_53;
    MR_Word parse_tree__parse_type_defn__BodyTVars_11;
    MR_Word parse_tree__parse_type_defn__ParamTVarSet_12;
    MR_Word parse_tree__parse_type_defn__BodyTVarSet_13;
    MR_Word parse_tree__parse_type_defn__OnlyBodyTVarSet_14;
    MR_Word parse_tree__parse_type_defn__OnlyBodyTVars_15;

    parse_tree__prog_type__type_vars_2_p_0(parse_tree__parse_type_defn__BodyType_8, &parse_tree__parse_type_defn__BodyTVars_11);
    parse_tree__parse_type_defn__TypeInfo_53_53 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
    mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__ParamTVars_7, &parse_tree__parse_type_defn__ParamTVarSet_12);
    mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__BodyTVars_11, &parse_tree__parse_type_defn__BodyTVarSet_13);
    mercury__set__difference_3_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__BodyTVarSet_13, parse_tree__parse_type_defn__ParamTVarSet_12, &parse_tree__parse_type_defn__OnlyBodyTVarSet_14);
    mercury__set__to_sorted_list_2_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__OnlyBodyTVarSet_14, &parse_tree__parse_type_defn__OnlyBodyTVars_15);
    if ((parse_tree__parse_type_defn__OnlyBodyTVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_type_defn__Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_58_58;
      MR_Word parse_tree__parse_type_defn__OnlyBodyTVarNames_18;
      MR_String parse_tree__parse_type_defn__VarWord_19;
      MR_String parse_tree__parse_type_defn__OccurWord_20;
      MR_Word parse_tree__parse_type_defn__Pieces_21;
      MR_Word parse_tree__parse_type_defn__Spec_22;
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_28;
      MR_Word parse_tree__parse_type_defn__Var_31;
      MR_Word parse_tree__parse_type_defn__Var_32;
      MR_Word parse_tree__parse_type_defn__Var_34;
      MR_Word parse_tree__parse_type_defn__Var_35;
      MR_Word parse_tree__parse_type_defn__Var_36;
      MR_Word parse_tree__parse_type_defn__Var_37;
      MR_Word parse_tree__parse_type_defn__Var_46;
      MR_Word parse_tree__parse_type_defn__Var_47;
      MR_Word parse_tree__parse_type_defn__Var_48;
      MR_Word parse_tree__parse_type_defn__Var_49;
      MR_Box parse_tree__parse_type_defn__conv1_VarWord_19;
      MR_Box parse_tree__parse_type_defn__conv2_OccurWord_20;

      {
        parse_tree__parse_type_defn__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, 3) = ((MR_Box) (parse_tree__parse_type_defn__TVarSet_6));
      }
      parse_tree__parse_type_defn__OnlyBodyTVarNames_18 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__Var_23, parse_tree__parse_type_defn__OnlyBodyTVars_15);
      parse_tree__parse_type_defn__conv1_VarWord_19 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
      parse_tree__parse_type_defn__VarWord_19 = ((MR_String) parse_tree__parse_type_defn__conv1_VarWord_19);
      parse_tree__parse_type_defn__conv2_OccurWord_20 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
      parse_tree__parse_type_defn__OccurWord_20 = ((MR_String) parse_tree__parse_type_defn__conv2_OccurWord_20);
      parse_tree__parse_type_defn__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        parse_tree__parse_type_defn__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_32, 1) = ((MR_Box) (parse_tree__parse_type_defn__VarWord_19));
      }
      {
        parse_tree__parse_type_defn__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_31, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_32));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_28, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_31));
      }
      parse_tree__parse_type_defn__Var_35 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_type_defn__OnlyBodyTVarNames_18);
      {
        parse_tree__parse_type_defn__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_37, 1) = ((MR_Box) (parse_tree__parse_type_defn__OccurWord_20));
      }
      {
        parse_tree__parse_type_defn__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_37));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[160])));
      }
      parse_tree__parse_type_defn__Var_34 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, parse_tree__parse_type_defn__Var_35, parse_tree__parse_type_defn__Var_36);
      parse_tree__parse_type_defn__Pieces_21 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_34);
      {
        parse_tree__parse_type_defn__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_49, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_21));
      }
      {
        parse_tree__parse_type_defn__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_48, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_49));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__BodyContext_9));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_48));
      }
      {
        parse_tree__parse_type_defn__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_type_defn__Specs_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__196__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 4))));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__SolverSpecs_19;
    MR_Word parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20;
    MR_Word parse_tree__parse_type_defn__CtorsTerm_21;
    MR_Word parse_tree__parse_type_defn__MaybeWhereTerm_22;
    MR_Word parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23;
    MR_Word parse_tree__parse_type_defn__MaybeWhere_24;
    MR_Word parse_tree__parse_type_defn__Name_26;
    MR_Word parse_tree__parse_type_defn__Params_27;
    MR_Word parse_tree__parse_type_defn__OneOrMoreCtors_28;
    MR_Word parse_tree__parse_type_defn__SolverTypeDetails_29;
    MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_30;
    MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_31;

    switch (parse_tree__parse_type_defn__IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_type_defn__SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_type_defn__SolverSpec_18;
          MR_Word parse_tree__parse_type_defn__Var_56;
          MR_Word parse_tree__parse_type_defn__Var_57;
          MR_Word parse_tree__parse_type_defn__Var_58;

          parse_tree__parse_type_defn__Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadTerm_11);
          {
            parse_tree__parse_type_defn__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_57, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_58));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[197])));
          }
          {
            parse_tree__parse_type_defn__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_56, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_57));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_type_defn__SolverSpec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_18, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_56));
          }
          {
            parse_tree__parse_type_defn__SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_19, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverSpec_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    parse_tree__parse_type_defn__parse_type_defn_head_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, &parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20);
    parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(parse_tree__parse_type_defn__BodyTerm_12, &parse_tree__parse_type_defn__CtorsTerm_21, &parse_tree__parse_type_defn__MaybeWhereTerm_22);
    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__CtorsTerm_21, &parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23);
    if ((parse_tree__parse_type_defn__MaybeWhereTerm_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      parse_tree__parse_type_defn__MaybeWhere_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_3[6]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__WhereTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereTerm_22, (MR_Integer) 0)));

      parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 0, parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__WhereTerm_25, &parse_tree__parse_type_defn__MaybeWhere_24);
    }
    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__SolverSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__OneOrMoreCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhere_24)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_24, (MR_Integer) 0)));
            parse_tree__parse_type_defn__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_24, (MR_Integer) 1)));
            parse_tree__parse_type_defn__MaybeDirectArgIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_24, (MR_Integer) 2)));
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__HeadCtor_32;
      MR_Word parse_tree__parse_type_defn__TailCtors_33;
      MR_Word parse_tree__parse_type_defn__Ctors_34;
      MR_Word parse_tree__parse_type_defn__CtorsSpecs_35;
      MR_Word parse_tree__parse_type_defn__ErrorSpecs_37;
      MR_Word parse_tree__parse_type_defn__Var_69;

      {
        parse_tree__parse_type_defn__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_69, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[4]));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_69, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_69, 3) = ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_29));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(parse_tree__parse_type_defn__Var_69, (MR_String) "parse_tree.parse_type_defn", (MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8", (MR_String) "discriminated union type has solver type details");
      parse_tree__parse_type_defn__HeadCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__OneOrMoreCtors_28, (MR_Integer) 0)));
      parse_tree__parse_type_defn__TailCtors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__OneOrMoreCtors_28, (MR_Integer) 1)));
      {
        parse_tree__parse_type_defn__Ctors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Ctors_34, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadCtor_32));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Ctors_34, 1) = ((MR_Box) (parse_tree__parse_type_defn__TailCtors_33));
      }
      parse_tree__parse_type_defn__process_du_ctors_6_p_0(parse_tree__parse_type_defn__Params_27, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__BodyTerm_12, parse_tree__parse_type_defn__Ctors_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_defn__CtorsSpecs_35);
      if ((parse_tree__parse_type_defn__MaybeDirectArgIs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        parse_tree__parse_type_defn__ErrorSpecs_37 = parse_tree__parse_type_defn__CtorsSpecs_35;
      else
      {
        MR_Word parse_tree__parse_type_defn__DirectArgCtors_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeDirectArgIs_31, (MR_Integer) 0)));

        parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(parse_tree__parse_type_defn__Ctors_34, parse_tree__parse_type_defn__DirectArgCtors_36, parse_tree__parse_type_defn__BodyTerm_12, parse_tree__parse_type_defn__CtorsSpecs_35, &parse_tree__parse_type_defn__ErrorSpecs_37);
      }
      if ((parse_tree__parse_type_defn__ErrorSpecs_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_type_defn__TypeVarSet_38;
        MR_Word parse_tree__parse_type_defn__DetailsDu_39;
        MR_Word parse_tree__parse_type_defn__TypeDefn_40;
        MR_Word parse_tree__parse_type_defn__ItemTypeDefn_41;
        MR_Word parse_tree__parse_type_defn__Item_42;
        MR_Word parse_tree__parse_type_defn__Var_75;

        mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_10, &parse_tree__parse_type_defn__TypeVarSet_38);
        {
          parse_tree__parse_type_defn__DetailsDu_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DetailsDu_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__Ctors_34));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DetailsDu_39, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUserEqComp_30));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DetailsDu_39, 2) = ((MR_Box) (parse_tree__parse_type_defn__MaybeDirectArgIs_31));
        }
        parse_tree__parse_type_defn__TypeDefn_40 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__parse_type_defn__DetailsDu_39);
        {
          parse_tree__parse_type_defn__ItemTypeDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_26));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_41, 1) = ((MR_Box) (parse_tree__parse_type_defn__Params_27));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_41, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_40));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_41, 3) = ((MR_Box) (parse_tree__parse_type_defn__TypeVarSet_38));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_41, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_13));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_41, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_14));
        }
        parse_tree__parse_type_defn__Item_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_41);
        {
          parse_tree__parse_type_defn__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_75, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_75));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__ErrorSpecs_37));
        }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word parse_tree__parse_type_defn__Specs_45;
      MR_Word parse_tree__parse_type_defn__Var_76;
      MR_Word parse_tree__parse_type_defn__Var_77;
      MR_Word parse_tree__parse_type_defn__Var_78;
      MR_Word parse_tree__parse_type_defn__Var_79;
      MR_Word parse_tree__parse_type_defn__Var_80;

      parse_tree__parse_type_defn__Var_77 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20);
      parse_tree__parse_type_defn__Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[5], parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23);
      parse_tree__parse_type_defn__Var_80 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[3], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[6], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[8], parse_tree__parse_type_defn__MaybeWhere_24);
      parse_tree__parse_type_defn__Var_78 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_85_85, parse_tree__parse_type_defn__Var_79, parse_tree__parse_type_defn__Var_80);
      parse_tree__parse_type_defn__Var_76 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_85_85, parse_tree__parse_type_defn__Var_77, parse_tree__parse_type_defn__Var_78);
      parse_tree__parse_type_defn__Specs_45 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_85_85, parse_tree__parse_type_defn__SolverSpecs_19, parse_tree__parse_type_defn__Var_76);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_45));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_6,
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__Term0_9,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereDetails_10)
{
  {
    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_type_defn__GroundContextPieces_11;
    MR_Word parse_tree__parse_type_defn__AnyContextPieces_12;
    MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14;
    MR_Word parse_tree__parse_type_defn__MaybeRepresentationIs_15;
    MR_Word parse_tree__parse_type_defn__MaybeGroundIs_16;
    MR_Word parse_tree__parse_type_defn__MaybeAnyIs_17;
    MR_Word parse_tree__parse_type_defn__MaybeCStoreIs_18;
    MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_19;
    MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_20;
    MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_21;
    MR_Word parse_tree__parse_type_defn__MaybeEndSpec_22;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_32_32;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_34_34;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_38_38;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_42_42;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_46_46;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_50_50;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_54_54;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58;

    parse_tree__parse_type_defn__GroundContextPieces_11 = mercury__cord__singleton_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_81_81, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[194]))));
    parse_tree__parse_type_defn__AnyContextPieces_12 = mercury__cord__singleton_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_81_81, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[195]))));
    {
      parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30, 0) = ((MR_Box) (parse_tree__parse_type_defn__Term0_9));
    }
    parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_32_32);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeRepresentationIs_15, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_32_32, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_34_34);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "ground", parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__GroundContextPieces_11, &parse_tree__parse_type_defn__MaybeGroundIs_16, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_34_34, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_38_38);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "any", parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__AnyContextPieces_12, &parse_tree__parse_type_defn__MaybeAnyIs_17, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_38_38, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_42_42);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__parse_type_defn__ModuleName_7, &parse_tree__parse_type_defn__MaybeCStoreIs_18, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_42_42, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_46_46);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeEqualityIs_19, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_46_46, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_50_50);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeComparisonIs_20, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_50_50, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_54_54);
    parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeDirectArgIs_21, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_54_54, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58);
    if ((parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      parse_tree__parse_type_defn__MaybeEndSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[9]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__EndTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__EndSpec_25;
      MR_Word parse_tree__parse_type_defn__Var_71;
      MR_Word parse_tree__parse_type_defn__Var_72;
      MR_Word parse_tree__parse_type_defn__Var_73;
      MR_Word parse_tree__parse_type_defn__Var_78;

      parse_tree__parse_type_defn__Var_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__EndTerm_23);
      {
        parse_tree__parse_type_defn__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_72, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_73));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[196])));
      }
      {
        parse_tree__parse_type_defn__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_71, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_72));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__EndSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_25, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_71));
      }
      {
        parse_tree__parse_type_defn__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_78, 0) = ((MR_Box) (parse_tree__parse_type_defn__EndSpec_25));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__MaybeEndSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeEndSpec_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_78));
      }
    }
    *parse_tree__parse_type_defn__MaybeWhereDetails_10 = parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(parse_tree__parse_type_defn__IsSolverType_6, parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14, parse_tree__parse_type_defn__MaybeRepresentationIs_15, parse_tree__parse_type_defn__MaybeGroundIs_16, parse_tree__parse_type_defn__MaybeAnyIs_17, parse_tree__parse_type_defn__MaybeCStoreIs_18, parse_tree__parse_type_defn__MaybeEqualityIs_19, parse_tree__parse_type_defn__MaybeComparisonIs_20, parse_tree__parse_type_defn__MaybeDirectArgIs_21, parse_tree__parse_type_defn__MaybeEndSpec_22, parse_tree__parse_type_defn__Term0_9);
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[22]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_53_57_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_35,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_85)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_86;

    parse_tree__parse_type_defn__HeadVar__4_86 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_127, parse_tree__parse_type_defn__HeadVar__1_35, parse_tree__parse_type_defn__HeadVar__3_85);
    return parse_tree__parse_type_defn__HeadVar__4_86;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__Var_18;
    MR_String parse_tree__parse_type_defn__Var_19;
    MR_Word parse_tree__parse_type_defn__Var_20;
    MR_Word parse_tree__parse_type_defn__Var_21;
    MR_Word parse_tree__parse_type_defn__Var_22;
    MR_Word parse_tree__parse_type_defn__Var_11;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_19, (MR_String) "is") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_String parse_tree__parse_type_defn__Var_51;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__Var_51) == 0);
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__RHSResult_13;
        MR_Word parse_tree__parse_type_defn__ContextPieces_58;

        parse_tree__parse_type_defn__ContextPieces_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[21]), parse_tree__parse_type_defn__Var_53, parse_tree__parse_type_defn__ContextPieces_58, parse_tree__parse_type_defn__RHS_10, &parse_tree__parse_type_defn__RHSResult_13);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
        else
        {
          MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__Var_25;

          {
            parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
          }
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
          }
        }
      }
      else
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[22]);
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_17;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_41;
      MR_Word parse_tree__parse_type_defn__Var_42;
      MR_Word parse_tree__parse_type_defn__Var_47;

      parse_tree__parse_type_defn__Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        parse_tree__parse_type_defn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_41));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_40));
      }
      {
        parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
      }
    }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word parse_tree__parse_type_defn__Var_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_30, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_30, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_50_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_Word parse_tree__parse_type_defn__Var_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_39,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_91)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_92;

    parse_tree__parse_type_defn__HeadVar__4_92 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_127, parse_tree__parse_type_defn__Var_128, parse_tree__parse_type_defn__HeadVar__1_39, parse_tree__parse_type_defn__HeadVar__3_91);
    return parse_tree__parse_type_defn__HeadVar__4_92;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word parse_tree__parse_type_defn__Var_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_30, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_30, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_53_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_Word parse_tree__parse_type_defn__Var_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_43,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_97)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_98;

    parse_tree__parse_type_defn__HeadVar__4_98 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_127, parse_tree__parse_type_defn__Var_128, parse_tree__parse_type_defn__HeadVar__1_43, parse_tree__parse_type_defn__HeadVar__3_97);
    return parse_tree__parse_type_defn__HeadVar__4_98;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_Word parse_tree__parse_type_defn__Var_54,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__Var_18;
    MR_String parse_tree__parse_type_defn__Var_19;
    MR_Word parse_tree__parse_type_defn__Var_20;
    MR_Word parse_tree__parse_type_defn__Var_21;
    MR_Word parse_tree__parse_type_defn__Var_22;
    MR_Word parse_tree__parse_type_defn__Var_11;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_19, (MR_String) "is") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_String parse_tree__parse_type_defn__Var_51;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__Var_51) == 0);
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__RHSResult_13;

        parse_tree__parse_type_defn__RHSResult_13 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(parse_tree__parse_type_defn__Var_53, parse_tree__parse_type_defn__Var_54, parse_tree__parse_type_defn__RHS_10);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
        else
        {
          MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__Var_25;

          {
            parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
          }
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
          }
        }
      }
      else
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[20]);
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_17;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_41;
      MR_Word parse_tree__parse_type_defn__Var_42;
      MR_Word parse_tree__parse_type_defn__Var_47;

      parse_tree__parse_type_defn__Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        parse_tree__parse_type_defn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_41));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_40));
      }
      {
        parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
      }
    }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ContextPieces_8,
  MR_Word parse_tree__parse_type_defn__Term_9)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeInst_10;
    MR_Word parse_tree__parse_type_defn__MaybeInst0_11;

    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[19]), parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ContextPieces_8, parse_tree__parse_type_defn__Term_9, &parse_tree__parse_type_defn__MaybeInst0_11);
    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeInst0_11)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__parse_type_defn__MaybeInst_10 = parse_tree__parse_type_defn__MaybeInst0_11;
    else
    {
      MR_Word parse_tree__parse_type_defn__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeInst0_11, (MR_Integer) 0)));

      parse_tree__parse_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__parse_type_defn__Inst_13);
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_44_44 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_45_45;
        MR_String parse_tree__parse_type_defn__TermStr_14;
        MR_Word parse_tree__parse_type_defn__Pieces_15;
        MR_Word parse_tree__parse_type_defn__Spec_16;
        MR_Word parse_tree__parse_type_defn__Var_19;
        MR_Word parse_tree__parse_type_defn__Var_20;
        MR_Word parse_tree__parse_type_defn__Var_22;
        MR_Word parse_tree__parse_type_defn__Var_25;
        MR_Word parse_tree__parse_type_defn__Var_26;
        MR_Word parse_tree__parse_type_defn__Var_35;
        MR_Word parse_tree__parse_type_defn__Var_36;
        MR_Word parse_tree__parse_type_defn__Var_37;
        MR_Word parse_tree__parse_type_defn__Var_38;
        MR_Word parse_tree__parse_type_defn__Var_39;
        MR_Word parse_tree__parse_type_defn__Var_42;

        parse_tree__parse_type_defn__TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_44_44, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        parse_tree__parse_type_defn__Var_19 = mercury__cord__list_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_45_45, parse_tree__parse_type_defn__ContextPieces_8);
        {
          parse_tree__parse_type_defn__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_26, 1) = ((MR_Box) (parse_tree__parse_type_defn__TermStr_14));
        }
        {
          parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_26));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[128])));
        }
        {
          parse_tree__parse_type_defn__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
        }
        {
          parse_tree__parse_type_defn__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_22));
        }
        parse_tree__parse_type_defn__Pieces_15 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_45_45, parse_tree__parse_type_defn__Var_19, parse_tree__parse_type_defn__Var_20);
        parse_tree__parse_type_defn__Var_37 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_44_44, parse_tree__parse_type_defn__Term_9);
        {
          parse_tree__parse_type_defn__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_15));
        }
        {
          parse_tree__parse_type_defn__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_38, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_39));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_37));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_36, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_38));
        }
        {
          parse_tree__parse_type_defn__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_35, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_36));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_35));
        }
        {
          parse_tree__parse_type_defn__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_42, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_16));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeInst_10, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
        }
      }
      else
        parse_tree__parse_type_defn__MaybeInst_10 = parse_tree__parse_type_defn__MaybeInst0_11;
    }
    return parse_tree__parse_type_defn__MaybeInst_10;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[18]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_54_56_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_String parse_tree__parse_type_defn__HeadVar__1_47,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_102)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_103;

    parse_tree__parse_type_defn__HeadVar__4_103 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_126, parse_tree__parse_type_defn__HeadVar__1_47, parse_tree__parse_type_defn__HeadVar__3_102);
    return parse_tree__parse_type_defn__HeadVar__4_103;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_52,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__Var_18;
    MR_String parse_tree__parse_type_defn__Var_19;
    MR_Word parse_tree__parse_type_defn__Var_20;
    MR_Word parse_tree__parse_type_defn__Var_21;
    MR_Word parse_tree__parse_type_defn__Var_22;
    MR_Word parse_tree__parse_type_defn__Var_11;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_19, (MR_String) "is") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_String parse_tree__parse_type_defn__Var_51;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__Var_51) == 0);
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__RHSResult_13;

        parse_tree__parse_type_defn__RHSResult_13 = parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(parse_tree__parse_type_defn__Var_52, parse_tree__parse_type_defn__RHS_10);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
        else
        {
          MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__Var_25;

          {
            parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
          }
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
          }
        }
      }
      else
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[18]);
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_17;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_41;
      MR_Word parse_tree__parse_type_defn__Var_42;
      MR_Word parse_tree__parse_type_defn__Var_47;

      parse_tree__parse_type_defn__Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        parse_tree__parse_type_defn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_41));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_40));
      }
      {
        parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
      }
    }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_MaybeItemMutableInfo_6;

    parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_MaybeItemMutableInfo_6);
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_MaybeItemMutableInfo_6));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__MaybeItems_6;
    MR_Word parse_tree__parse_type_defn__Var_15;
    MR_String parse_tree__parse_type_defn__Var_16;
    MR_Word parse_tree__parse_type_defn__Var_7;
    MR_Word parse_tree__parse_type_defn__Var_8;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_15)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_15, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_16, (MR_String) "mutable") == 0);
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__MaybeItem_9;

      parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__parse_type_defn__ModuleName_4, parse_tree__parse_type_defn__Term_5, &parse_tree__parse_type_defn__MaybeItem_9);
      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
        parse_tree__parse_type_defn__MaybeItems_6 = (MR_Word) parse_tree__parse_type_defn__MaybeItem_9;
      else
      {
        MR_Word parse_tree__parse_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeItem_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Var_17;

        {
          parse_tree__parse_type_defn__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_17, 0) = ((MR_Box) (parse_tree__parse_type_defn__Mutable_10));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_17));
        }
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Terms_12;

      parse_tree__parse_type_defn__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_type_defn__Term_5, &parse_tree__parse_type_defn__Terms_12);
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__Var_19;

        {
          parse_tree__parse_type_defn__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_19, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_19, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_19, 3) = ((MR_Box) (parse_tree__parse_type_defn__ModuleName_4));
        }
        parse_tree__parse_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__parse_type_defn__Var_19, parse_tree__parse_type_defn__Terms_12, &parse_tree__parse_type_defn__MaybeItems_6);
      }
      else
      {
        MR_Word parse_tree__parse_type_defn__Spec_14;
        MR_Word parse_tree__parse_type_defn__Var_30;
        MR_Word parse_tree__parse_type_defn__Var_31;
        MR_Word parse_tree__parse_type_defn__Var_32;
        MR_Word parse_tree__parse_type_defn__Var_37;

        parse_tree__parse_type_defn__Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_5);
        {
          parse_tree__parse_type_defn__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_31, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_32));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[193])));
        }
        {
          parse_tree__parse_type_defn__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_30, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_31));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_30));
        }
        {
          parse_tree__parse_type_defn__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_37, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_14));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_37));
        }
      }
    }
    return parse_tree__parse_type_defn__MaybeItems_6;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5,
  MR_Word * parse_tree__parse_type_defn__MaybeItemMutableInfo_6)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__ArgTerms_7;
    MR_Word parse_tree__parse_type_defn__Context_8;
    MR_Word parse_tree__parse_type_defn__Var_13;
    MR_String parse_tree__parse_type_defn__Var_14;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 0)));
      parse_tree__parse_type_defn__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_13)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_13, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_14, (MR_String) "mutable") == 0);
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__VarSet_9;

      mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &parse_tree__parse_type_defn__VarSet_9);
      parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(parse_tree__parse_type_defn__ModuleName_4, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__ArgTerms_7, parse_tree__parse_type_defn__Context_8, (MR_Integer) -1, (MR_Integer) 1, parse_tree__parse_type_defn__MaybeItemMutableInfo_6);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_12;
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_Word parse_tree__parse_type_defn__Var_25;
      MR_Word parse_tree__parse_type_defn__Var_30;

      parse_tree__parse_type_defn__Var_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_5);
      {
        parse_tree__parse_type_defn__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[192])));
      }
      {
        parse_tree__parse_type_defn__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_24));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_23));
      }
      {
        parse_tree__parse_type_defn__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_30, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_12));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_defn__MaybeItemMutableInfo_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_30));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_51,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_108)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_109;

    parse_tree__parse_type_defn__HeadVar__4_109 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_126, parse_tree__parse_type_defn__Var_127, parse_tree__parse_type_defn__HeadVar__1_51, parse_tree__parse_type_defn__HeadVar__3_108);
    return parse_tree__parse_type_defn__HeadVar__4_109;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_52_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_55,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_114)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_115;

    parse_tree__parse_type_defn__HeadVar__4_115 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_126, parse_tree__parse_type_defn__Var_127, parse_tree__parse_type_defn__HeadVar__1_55, parse_tree__parse_type_defn__HeadVar__3_114);
    return parse_tree__parse_type_defn__HeadVar__4_115;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_52,
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__Var_18;
    MR_String parse_tree__parse_type_defn__Var_19;
    MR_Word parse_tree__parse_type_defn__Var_20;
    MR_Word parse_tree__parse_type_defn__Var_21;
    MR_Word parse_tree__parse_type_defn__Var_22;
    MR_Word parse_tree__parse_type_defn__Var_11;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_19, (MR_String) "is") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_String parse_tree__parse_type_defn__Var_51;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__Var_51) == 0);
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__RHSResult_13;

        parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__parse_type_defn__Var_52, parse_tree__parse_type_defn__Var_53, parse_tree__parse_type_defn__RHS_10, &parse_tree__parse_type_defn__RHSResult_13);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
        else
        {
          MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__Var_25;

          {
            parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
          }
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
          }
        }
      }
      else
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[15]);
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_17;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_41;
      MR_Word parse_tree__parse_type_defn__Var_42;
      MR_Word parse_tree__parse_type_defn__Var_47;

      parse_tree__parse_type_defn__Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        parse_tree__parse_type_defn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_41));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_40));
      }
      {
        parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
      }
    }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__Var_26,
  MR_Word parse_tree__parse_type_defn__Var_28,
  MR_Word parse_tree__parse_type_defn__Var_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[13]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_28, parse_tree__parse_type_defn__Var_29, parse_tree__parse_type_defn__Var_26, parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_55_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_126,
  MR_Word parse_tree__parse_type_defn__Var_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_59,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_119)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadVar__4_120;

    parse_tree__parse_type_defn__HeadVar__4_120 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__Var_126, parse_tree__parse_type_defn__Var_127, parse_tree__parse_type_defn__HeadVar__1_59, parse_tree__parse_type_defn__HeadVar__3_119);
    return parse_tree__parse_type_defn__HeadVar__4_120;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__Var_52,
  MR_Word parse_tree__parse_type_defn__Var_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__Var_18;
    MR_String parse_tree__parse_type_defn__Var_19;
    MR_Word parse_tree__parse_type_defn__Var_20;
    MR_Word parse_tree__parse_type_defn__Var_21;
    MR_Word parse_tree__parse_type_defn__Var_22;
    MR_Word parse_tree__parse_type_defn__Var_11;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_19, (MR_String) "is") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_20)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_21)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_21, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_String parse_tree__parse_type_defn__Var_51;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_23)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__Var_51) == 0);
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__RHSResult_13;

        parse_tree__parse_type_defn__RHSResult_13 = parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__parse_type_defn__Var_52, parse_tree__parse_type_defn__Var_53, parse_tree__parse_type_defn__RHS_10);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
          parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
        else
        {
          MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__Var_25;

          {
            parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
          }
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
          }
        }
      }
      else
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[13]);
      }
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_17;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_41;
      MR_Word parse_tree__parse_type_defn__Var_42;
      MR_Word parse_tree__parse_type_defn__Var_47;

      parse_tree__parse_type_defn__Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[191])));
      }
      {
        parse_tree__parse_type_defn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_41));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_40));
      }
      {
        parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
      }
    }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_MaybeFunctor_8;

    parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_MaybeFunctor_8);
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_MaybeFunctor_8));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeDirectArgCtors_8;
    MR_Word parse_tree__parse_type_defn__FunctorsTerms_9;

    parse_tree__parse_type_defn__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_type_defn__Term_7, &parse_tree__parse_type_defn__FunctorsTerms_9);
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__Var_12;

      {
        parse_tree__parse_type_defn__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_12, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_12, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_12, 3) = ((MR_Box) (parse_tree__parse_type_defn__ModuleName_5));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_12, 4) = ((MR_Box) (parse_tree__parse_type_defn__VarSet_6));
      }
      parse_tree__parse_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__parse_type_defn__Var_12, parse_tree__parse_type_defn__FunctorsTerms_9, &parse_tree__parse_type_defn__MaybeDirectArgCtors_8);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Spec_11;
      MR_Word parse_tree__parse_type_defn__Var_26;
      MR_Word parse_tree__parse_type_defn__Var_27;
      MR_Word parse_tree__parse_type_defn__Var_28;
      MR_Word parse_tree__parse_type_defn__Var_33;

      parse_tree__parse_type_defn__Var_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
      {
        parse_tree__parse_type_defn__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_27, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_28));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[190])));
      }
      {
        parse_tree__parse_type_defn__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_27));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_26));
      }
      {
        parse_tree__parse_type_defn__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_33, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_11));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_33));
      }
    }
    return parse_tree__parse_type_defn__MaybeDirectArgCtors_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[11]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      MR_Word parse_tree__parse_type_defn__HeadTerm_10;
      MR_Word parse_tree__parse_type_defn__TailTerm_11;
      MR_Word parse_tree__parse_type_defn__Var_16;
      MR_String parse_tree__parse_type_defn__Var_17;
      MR_Word parse_tree__parse_type_defn__Var_18;
      MR_Word parse_tree__parse_type_defn__Var_19;
      MR_Word parse_tree__parse_type_defn__Var_20;
      MR_Word parse_tree__parse_type_defn__Var_12;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_16)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_16, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_17, (MR_String) ",") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_18)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_18, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__parse_type_defn__HeadTerm_10);
        {
          parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
        }
      }
      else
      {
        *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__parse_type_defn__Term_9);
        parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

        if ((parse_tree__parse_type_defn__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
        else
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__HeadVar__2_2;
    MR_Word parse_tree__parse_type_defn__Var_5;
    MR_String parse_tree__parse_type_defn__Var_6;
    MR_Word parse_tree__parse_type_defn__Var_7;
    MR_Word parse_tree__parse_type_defn__Var_4;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_3, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_3, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_3, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_5, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_6, (MR_String) "type_is_abstract_noncanonical") == 0);
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      parse_tree__parse_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[10]);
    }
    else
    {
      parse_tree__parse_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[11]);
    }
    return parse_tree__parse_type_defn__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_13,
  MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14,
  MR_Word parse_tree__parse_type_defn__MaybeRepresentationIs_15,
  MR_Word parse_tree__parse_type_defn__MaybeGroundIs_16,
  MR_Word parse_tree__parse_type_defn__MaybeAnyIs_17,
  MR_Word parse_tree__parse_type_defn__MaybeCStoreIs_18,
  MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_19,
  MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_20,
  MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_21,
  MR_Word parse_tree__parse_type_defn__MaybeWhereEnd_22,
  MR_Word parse_tree__parse_type_defn__WhereTerm_23)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhereEnd_22)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__MaybeWhereDetails_24;
    MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_25;
    MR_Word parse_tree__parse_type_defn__RepresentationIs_26;
    MR_Word parse_tree__parse_type_defn__GroundIs_27;
    MR_Word parse_tree__parse_type_defn__AnyIs_28;
    MR_Word parse_tree__parse_type_defn__CStoreIs_29;
    MR_Word parse_tree__parse_type_defn__EqualityIs_30;
    MR_Word parse_tree__parse_type_defn__ComparisonIs_31;
    MR_Word parse_tree__parse_type_defn__DirectArgIs_32;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeRepresentationIs_15)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__RepresentationIs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeRepresentationIs_15, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeGroundIs_16)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__GroundIs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeGroundIs_16, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeAnyIs_17)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__AnyIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeAnyIs_17, (MR_Integer) 0)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeCStoreIs_18)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__CStoreIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeCStoreIs_18, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeEqualityIs_19)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                {
                  parse_tree__parse_type_defn__EqualityIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeEqualityIs_19, (MR_Integer) 0)));
                  parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeComparisonIs_20)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__ComparisonIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeComparisonIs_20, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeDirectArgIs_21)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      parse_tree__parse_type_defn__DirectArgIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeDirectArgIs_21, (MR_Integer) 0)));
                  }
                }
              }
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
      parse_tree__parse_type_defn__MaybeWhereDetails_24 = parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_25, parse_tree__parse_type_defn__RepresentationIs_26, parse_tree__parse_type_defn__GroundIs_27, parse_tree__parse_type_defn__AnyIs_28, parse_tree__parse_type_defn__CStoreIs_29, parse_tree__parse_type_defn__EqualityIs_30, parse_tree__parse_type_defn__ComparisonIs_31, parse_tree__parse_type_defn__DirectArgIs_32, parse_tree__parse_type_defn__WhereTerm_23);
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
      MR_Word parse_tree__parse_type_defn__TypeInfo_54_54;
      MR_Word parse_tree__parse_type_defn__TypeInfo_56_56;
      MR_Word parse_tree__parse_type_defn__Specs_34;
      MR_Word parse_tree__parse_type_defn__Var_35;
      MR_Word parse_tree__parse_type_defn__Var_36;
      MR_Word parse_tree__parse_type_defn__Var_37;
      MR_Word parse_tree__parse_type_defn__Var_38;
      MR_Word parse_tree__parse_type_defn__Var_39;
      MR_Word parse_tree__parse_type_defn__Var_40;
      MR_Word parse_tree__parse_type_defn__Var_41;
      MR_Word parse_tree__parse_type_defn__Var_42;
      MR_Word parse_tree__parse_type_defn__Var_43;
      MR_Word parse_tree__parse_type_defn__Var_44;
      MR_Word parse_tree__parse_type_defn__Var_45;
      MR_Word parse_tree__parse_type_defn__Var_46;
      MR_Word parse_tree__parse_type_defn__Var_47;
      MR_Word parse_tree__parse_type_defn__Var_48;
      MR_Word parse_tree__parse_type_defn__Var_49;
      MR_Word parse_tree__parse_type_defn__Var_50;

      parse_tree__parse_type_defn__Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[11], parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14);
      parse_tree__parse_type_defn__Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[12], parse_tree__parse_type_defn__MaybeRepresentationIs_15);
      parse_tree__parse_type_defn__TypeInfo_54_54 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[13];
      parse_tree__parse_type_defn__Var_39 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_54_54, parse_tree__parse_type_defn__MaybeGroundIs_16);
      parse_tree__parse_type_defn__Var_41 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_54_54, parse_tree__parse_type_defn__MaybeAnyIs_17);
      parse_tree__parse_type_defn__Var_43 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[14], parse_tree__parse_type_defn__MaybeCStoreIs_18);
      parse_tree__parse_type_defn__TypeInfo_56_56 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[2];
      parse_tree__parse_type_defn__Var_45 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_56_56, parse_tree__parse_type_defn__MaybeEqualityIs_19);
      parse_tree__parse_type_defn__Var_47 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_56_56, parse_tree__parse_type_defn__MaybeComparisonIs_20);
      parse_tree__parse_type_defn__Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[8], parse_tree__parse_type_defn__MaybeDirectArgIs_21);
      parse_tree__parse_type_defn__Var_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, parse_tree__parse_type_defn__MaybeWhereEnd_22);
      parse_tree__parse_type_defn__Var_48 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_49, parse_tree__parse_type_defn__Var_50);
      parse_tree__parse_type_defn__Var_46 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_47, parse_tree__parse_type_defn__Var_48);
      parse_tree__parse_type_defn__Var_44 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_45, parse_tree__parse_type_defn__Var_46);
      parse_tree__parse_type_defn__Var_42 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_43, parse_tree__parse_type_defn__Var_44);
      parse_tree__parse_type_defn__Var_40 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_41, parse_tree__parse_type_defn__Var_42);
      parse_tree__parse_type_defn__Var_38 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_39, parse_tree__parse_type_defn__Var_40);
      parse_tree__parse_type_defn__Var_36 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_37, parse_tree__parse_type_defn__Var_38);
      parse_tree__parse_type_defn__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__Var_35, parse_tree__parse_type_defn__Var_36);
      {
        parse_tree__parse_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_34));
      }
    }
    return parse_tree__parse_type_defn__MaybeWhereDetails_24;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_12,
  MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_13,
  MR_Word parse_tree__parse_type_defn__RepresentationIs_14,
  MR_Word parse_tree__parse_type_defn__GroundIs_15,
  MR_Word parse_tree__parse_type_defn__AnyIs_16,
  MR_Word parse_tree__parse_type_defn__CStoreIs_17,
  MR_Word parse_tree__parse_type_defn__EqualityIs_18,
  MR_Word parse_tree__parse_type_defn__ComparisonIs_19,
  MR_Word parse_tree__parse_type_defn__DirectArgIs_20,
  MR_Word parse_tree__parse_type_defn__WhereTerm_21)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeWhereDetails_22;

    if ((parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (parse_tree__parse_type_defn__IsSolverType_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word parse_tree__parse_type_defn__Var_39;

              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__RepresentationIs_14)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
                parse_tree__parse_type_defn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RepresentationIs_14, (MR_Integer) 0)));
            }
            if (!(parse_tree__parse_type_defn__succeeded))
            {
              {
                MR_Word parse_tree__parse_type_defn__Var_40;

                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__GroundIs_15)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  parse_tree__parse_type_defn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__GroundIs_15, (MR_Integer) 0)));
              }
              if (!(parse_tree__parse_type_defn__succeeded))
              {
                {
                  MR_Word parse_tree__parse_type_defn__Var_41;

                  parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__AnyIs_16)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_type_defn__succeeded)
                    parse_tree__parse_type_defn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__AnyIs_16, (MR_Integer) 0)));
                }
                if (!(parse_tree__parse_type_defn__succeeded))
                {
                  MR_Word parse_tree__parse_type_defn__Var_42;

                  parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__CStoreIs_17)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_type_defn__succeeded)
                    parse_tree__parse_type_defn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__CStoreIs_17, (MR_Integer) 0)));
                }
              }
            }
            if (parse_tree__parse_type_defn__succeeded)
            {
              MR_Word parse_tree__parse_type_defn__Var_54;
              MR_Word parse_tree__parse_type_defn__Var_55;
              MR_Word parse_tree__parse_type_defn__Var_56;
              MR_Word parse_tree__parse_type_defn__Var_61;
              MR_Word parse_tree__parse_type_defn__Spec_130;

              parse_tree__parse_type_defn__Var_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__WhereTerm_21);
              {
                parse_tree__parse_type_defn__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_55, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_56));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[187])));
              }
              {
                parse_tree__parse_type_defn__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_55));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_defn__Spec_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_130, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_54));
              }
              {
                parse_tree__parse_type_defn__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_61, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_130));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_61));
              }
            }
            else
            {
              MR_Word parse_tree__parse_type_defn__MaybeUC_43;

              parse_tree__parse_type_defn__MaybeUC_43 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(parse_tree__parse_type_defn__EqualityIs_18, parse_tree__parse_type_defn__ComparisonIs_19);
              {
                parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUC_43));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__DirectArgIs_20));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_type_defn__Var_25;

            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__DirectArgIs_20)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__DirectArgIs_20, (MR_Integer) 0)));
              {
                MR_Word parse_tree__parse_type_defn__Var_77;
                MR_Word parse_tree__parse_type_defn__Var_78;
                MR_Word parse_tree__parse_type_defn__Var_79;
                MR_Word parse_tree__parse_type_defn__Var_84;
                MR_Word parse_tree__parse_type_defn__Spec_121;

                parse_tree__parse_type_defn__Var_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__WhereTerm_21);
                {
                  parse_tree__parse_type_defn__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_78, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_79));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[188])));
                }
                {
                  parse_tree__parse_type_defn__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_77, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_78));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_121, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_77));
                }
                {
                  parse_tree__parse_type_defn__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_84, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_121));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_84));
                }
              }
            }
            else
            {
              MR_Word parse_tree__parse_type_defn__RepnType_27;
              MR_Word parse_tree__parse_type_defn__MaybeGroundInst_28;
              MR_Word parse_tree__parse_type_defn__MaybeAnyInst_29;
              MR_Word parse_tree__parse_type_defn__MaybeEqPred_30;
              MR_Word parse_tree__parse_type_defn__MaybeCmpPred_31;
              MR_Word parse_tree__parse_type_defn__MaybeMutableInfos_32;

              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__RepresentationIs_14)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__RepnType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RepresentationIs_14, (MR_Integer) 0)));
                parse_tree__parse_type_defn__MaybeGroundInst_28 = parse_tree__parse_type_defn__GroundIs_15;
                parse_tree__parse_type_defn__MaybeAnyInst_29 = parse_tree__parse_type_defn__AnyIs_16;
                parse_tree__parse_type_defn__MaybeEqPred_30 = parse_tree__parse_type_defn__EqualityIs_18;
                parse_tree__parse_type_defn__MaybeCmpPred_31 = parse_tree__parse_type_defn__ComparisonIs_19;
                parse_tree__parse_type_defn__MaybeMutableInfos_32 = parse_tree__parse_type_defn__CStoreIs_17;
                parse_tree__parse_type_defn__succeeded = MR_TRUE;
              }
              if (parse_tree__parse_type_defn__succeeded)
              {
                MR_Word parse_tree__parse_type_defn__GroundInst_33;
                MR_Word parse_tree__parse_type_defn__AnyInst_34;
                MR_Word parse_tree__parse_type_defn__MutableInfos_35;
                MR_Word parse_tree__parse_type_defn__SolverTypeDetails_36;
                MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_37;
                MR_Word parse_tree__parse_type_defn__MaybeUnifyCompare_38;

                if ((parse_tree__parse_type_defn__MaybeGroundInst_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  parse_tree__parse_type_defn__GroundInst_33 = parse_tree__prog_mode__ground_inst_0_f_0();
                else
                  parse_tree__parse_type_defn__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeGroundInst_28, (MR_Integer) 0)));
                if ((parse_tree__parse_type_defn__MaybeAnyInst_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  parse_tree__parse_type_defn__AnyInst_34 = parse_tree__prog_mode__ground_inst_0_f_0();
                else
                  parse_tree__parse_type_defn__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeAnyInst_29, (MR_Integer) 0)));
                if ((parse_tree__parse_type_defn__MaybeMutableInfos_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  parse_tree__parse_type_defn__MutableInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  parse_tree__parse_type_defn__MutableInfos_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeMutableInfos_32, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_defn__SolverTypeDetails_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__RepnType_27));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 1) = ((MR_Box) (parse_tree__parse_type_defn__GroundInst_33));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 2) = ((MR_Box) (parse_tree__parse_type_defn__AnyInst_34));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 3) = ((MR_Box) (parse_tree__parse_type_defn__MutableInfos_35));
                }
                {
                  parse_tree__parse_type_defn__MaybeSolverTypeDetails_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSolverTypeDetails_37, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_36));
                }
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeEqPred_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_type_defn__succeeded)
                  parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeCmpPred_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_type_defn__succeeded)
                  parse_tree__parse_type_defn__MaybeUnifyCompare_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                {
                  MR_Word parse_tree__parse_type_defn__Var_86;

                  {
                    parse_tree__parse_type_defn__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeEqPred_30));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeCmpPred_31));
                  }
                  {
                    parse_tree__parse_type_defn__MaybeUnifyCompare_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeUnifyCompare_38, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_86));
                  }
                }
                {
                  parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeSolverTypeDetails_37));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUnifyCompare_38));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              else
              {
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__RepresentationIs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_type_defn__succeeded)
                {
                  MR_Word parse_tree__parse_type_defn__Var_101;
                  MR_Word parse_tree__parse_type_defn__Var_102;
                  MR_Word parse_tree__parse_type_defn__Var_103;
                  MR_Word parse_tree__parse_type_defn__Var_108;
                  MR_Word parse_tree__parse_type_defn__Spec_122;

                  parse_tree__parse_type_defn__Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__WhereTerm_21);
                  {
                    parse_tree__parse_type_defn__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_102, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_103));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[189])));
                  }
                  {
                    parse_tree__parse_type_defn__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_101, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_102));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__Spec_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_122, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_101));
                  }
                  {
                    parse_tree__parse_type_defn__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_108, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_122));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_108));
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
      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__RepresentationIs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__GroundIs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__AnyIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__EqualityIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__ComparisonIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__CStoreIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_type_defn__succeeded)
                  parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__DirectArgIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__Var_116;
        MR_Word parse_tree__parse_type_defn__Var_117;

        {
          parse_tree__parse_type_defn__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_117, 0) = ((MR_Box) (parse_tree__parse_type_defn__IsSolverType_12));
        }
        {
          parse_tree__parse_type_defn__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_116, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_117));
        }
        {
          parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_116));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word parse_tree__parse_type_defn__Spec_24;
        MR_Word parse_tree__parse_type_defn__Var_119;

        parse_tree__parse_type_defn__Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(parse_tree__parse_type_defn__WhereTerm_21);
        {
          parse_tree__parse_type_defn__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_119, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_119));
        }
      }
    }
    return parse_tree__parse_type_defn__MaybeWhereDetails_22;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word parse_tree__parse_type_defn__MaybeEqPred_4,
  MR_Word parse_tree__parse_type_defn__MaybeCmpPred_5)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word parse_tree__parse_type_defn__HeadVar__3_3;

    if (parse_tree__parse_type_defn__succeeded)
      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
      parse_tree__parse_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word parse_tree__parse_type_defn__Var_6;

      {
        parse_tree__parse_type_defn__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_6, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeEqPred_4));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_6, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeCmpPred_5));
      }
      {
        parse_tree__parse_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_6));
      }
    }
    return parse_tree__parse_type_defn__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3)
{
  {
    MR_Word parse_tree__parse_type_defn__Spec_4;
    MR_Word parse_tree__parse_type_defn__Var_25;
    MR_Word parse_tree__parse_type_defn__Var_26;
    MR_Word parse_tree__parse_type_defn__Var_27;

    parse_tree__parse_type_defn__Var_27 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_3);
    {
      parse_tree__parse_type_defn__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_27));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[186])));
    }
    {
      parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_26));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_defn__Spec_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_4, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
    }
    return parse_tree__parse_type_defn__Spec_4;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__parse_type_defn__succeeded;

      if ((parse_tree__parse_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4;
      else
      {
        MR_Word parse_tree__parse_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
        MR_Integer parse_tree__parse_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54;
        MR_Word parse_tree__parse_type_defn__Ctor_18;

        parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__find_constructor_4_p_0(parse_tree__parse_type_defn__HeadVar__1_1, parse_tree__parse_type_defn__SymName_16, parse_tree__parse_type_defn__Arity_17, &parse_tree__parse_type_defn__Ctor_18);
        if (parse_tree__parse_type_defn__succeeded)
        {
          MR_Word parse_tree__parse_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 1)));
          MR_Word parse_tree__parse_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 2)));
          MR_Word parse_tree__parse_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 3)));
          MR_Integer parse_tree__parse_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 4)));
          MR_Word parse_tree__parse_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 5)));

          parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Arity_17 == (MR_Integer) 1);
          parse_tree__parse_type_defn__succeeded = !(parse_tree__parse_type_defn__succeeded);
          if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__Spec_26;
            MR_Word parse_tree__parse_type_defn__Var_47;
            MR_Word parse_tree__parse_type_defn__Var_48;
            MR_Word parse_tree__parse_type_defn__Var_49;

            parse_tree__parse_type_defn__Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadVar__3_3);
            {
              parse_tree__parse_type_defn__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_48, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_49));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[181])));
            }
            {
              parse_tree__parse_type_defn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_48));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_47));
            }
            {
              parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_26));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4));
            }
          }
          else
          if ((parse_tree__parse_type_defn__ExistQVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4;
          else
          {
            MR_Word parse_tree__parse_type_defn__Var_57;
            MR_Word parse_tree__parse_type_defn__Var_60;
            MR_Word parse_tree__parse_type_defn__Var_63;
            MR_Word parse_tree__parse_type_defn__Var_64;
            MR_Word parse_tree__parse_type_defn__Var_73;
            MR_Word parse_tree__parse_type_defn__Var_74;
            MR_Word parse_tree__parse_type_defn__Var_75;
            MR_Word parse_tree__parse_type_defn__Var_76;
            MR_Word parse_tree__parse_type_defn__Var_77;
            MR_Word parse_tree__parse_type_defn__Pieces_108;
            MR_Word parse_tree__parse_type_defn__Spec_109;

            {
              parse_tree__parse_type_defn__Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_64, 1) = ((MR_Box) (parse_tree__parse_type_defn__DirectArgCtor_12));
            }
            {
              parse_tree__parse_type_defn__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_63, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_64));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[93])));
            }
            {
              parse_tree__parse_type_defn__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[184])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_60, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_63));
            }
            {
              parse_tree__parse_type_defn__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_57, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_60));
            }
            {
              parse_tree__parse_type_defn__Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[182])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_108, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_57));
            }
            parse_tree__parse_type_defn__Var_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadVar__3_3);
            {
              parse_tree__parse_type_defn__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_77, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_108));
            }
            {
              parse_tree__parse_type_defn__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_76, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_77));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_74, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_75));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_74, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_76));
            }
            {
              parse_tree__parse_type_defn__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_73, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_74));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_109, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_73));
            }
            {
              parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_109));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4));
            }
          }
        }
        else
        {
          MR_Word parse_tree__parse_type_defn__Var_83;
          MR_Word parse_tree__parse_type_defn__Var_86;
          MR_Word parse_tree__parse_type_defn__Var_89;
          MR_Word parse_tree__parse_type_defn__Var_90;
          MR_Word parse_tree__parse_type_defn__Var_99;
          MR_Word parse_tree__parse_type_defn__Var_100;
          MR_Word parse_tree__parse_type_defn__Var_101;
          MR_Word parse_tree__parse_type_defn__Var_102;
          MR_Word parse_tree__parse_type_defn__Var_103;
          MR_Word parse_tree__parse_type_defn__Pieces_112;
          MR_Word parse_tree__parse_type_defn__Spec_113;

          {
            parse_tree__parse_type_defn__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_90, 1) = ((MR_Box) (parse_tree__parse_type_defn__DirectArgCtor_12));
          }
          {
            parse_tree__parse_type_defn__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_89, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_90));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[95])));
          }
          {
            parse_tree__parse_type_defn__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[185])));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_89));
          }
          {
            parse_tree__parse_type_defn__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_83, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_86));
          }
          {
            parse_tree__parse_type_defn__Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[182])));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_112, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_83));
          }
          parse_tree__parse_type_defn__Var_101 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadVar__3_3);
          {
            parse_tree__parse_type_defn__Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_103, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_112));
          }
          {
            parse_tree__parse_type_defn__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_102, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_103));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_type_defn__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_100, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_101));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_100, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_102));
          }
          {
            parse_tree__parse_type_defn__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_99, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_100));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_type_defn__Spec_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_113, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_99));
          }
          {
            parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_113));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4));
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word parse_tree__parse_type_defn__next_value_of_HeadVar__2_2 = parse_tree__parse_type_defn__DirectArgCtors_13;
          MR_Word parse_tree__parse_type_defn__next_value_of_STATE_VARIABLE_Specs_0_4 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54;

          parse_tree__parse_type_defn__HeadVar__2_2 = parse_tree__parse_type_defn__next_value_of_HeadVar__2_2;
          parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__parse_type_defn__next_value_of_STATE_VARIABLE_Specs_0_4;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__find_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__SymName_7,
  MR_Integer parse_tree__parse_type_defn__Arity_8,
  MR_Word * parse_tree__parse_type_defn__NamedCtor_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word parse_tree__parse_type_defn__Ctor_5;
      MR_Word parse_tree__parse_type_defn__Ctors_6;
      MR_Word parse_tree__parse_type_defn__Var_14;
      MR_Integer parse_tree__parse_type_defn__Var_15;
      MR_Word parse_tree__parse_type_defn__Var_10;
      MR_Word parse_tree__parse_type_defn__Var_11;
      MR_Word parse_tree__parse_type_defn___Args_12;
      MR_Word parse_tree__parse_type_defn__Var_13;

      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Ctor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__1_1, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Ctors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__1_1, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 2)));
        parse_tree__parse_type_defn___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 3)));
        parse_tree__parse_type_defn__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 4)));
        parse_tree__parse_type_defn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 5)));
        parse_tree__parse_type_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_type_defn__SymName_7, parse_tree__parse_type_defn__Var_14);
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Arity_8 == parse_tree__parse_type_defn__Var_15);
        if (parse_tree__parse_type_defn__succeeded)
        {
          *parse_tree__parse_type_defn__NamedCtor_9 = parse_tree__parse_type_defn__Ctor_5;
          parse_tree__parse_type_defn__succeeded = MR_TRUE;
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__parse_type_defn__next_value_of_HeadVar__1_1 = parse_tree__parse_type_defn__Ctors_6;

            parse_tree__parse_type_defn__HeadVar__1_1 = parse_tree__parse_type_defn__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return parse_tree__parse_type_defn__succeeded;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv10_HeadVar__3_301;

    parse_tree__parse_type_defn__conv10_HeadVar__3_301 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__541__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv10_HeadVar__3_301));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__535__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv9_HeadVar__2_2;

    parse_tree__parse_type_defn__conv9_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv9_HeadVar__2_2));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv6_HeadVar__3_285;

    parse_tree__parse_type_defn__conv6_HeadVar__3_285 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__513__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv6_HeadVar__3_285));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_5(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__506__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_4(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv5_LambdaHeadVar__2_125;

    parse_tree__parse_type_defn__conv5_LambdaHeadVar__2_125 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__502__1_1_f_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv5_LambdaHeadVar__2_125));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_3(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv2_HeadVar__3_272;

    parse_tree__parse_type_defn__conv2_HeadVar__3_272 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__487__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv2_HeadVar__3_272));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__457__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_LambdaHeadVar__2_59;

    parse_tree__parse_type_defn__conv0_LambdaHeadVar__2_59 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__454__1_1_f_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_LambdaHeadVar__2_59));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__BodyTerm_3,
  MR_Word parse_tree__parse_type_defn__HeadVar__4_4,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__parse_type_defn__succeeded;

      if ((parse_tree__parse_type_defn__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_type_defn__STATE_VARIABLE_Specs_6 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5;
      else
      {
        MR_Word parse_tree__parse_type_defn__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 3)));
        MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86;
        MR_Word parse_tree__parse_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 2)));
        MR_Integer parse_tree__parse_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 4)));
        MR_Word parse_tree__parse_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 5)));
        MR_Word parse_tree__parse_type_defn__NotExistQOrParamVars_30;
        MR_Word parse_tree__parse_type_defn__TypeInfo_259_259;
        MR_Word parse_tree__parse_type_defn__CtorArgTypes_25;
        MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes0_27;
        MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes_28;
        MR_Word parse_tree__parse_type_defn__Var_60;
        MR_Word parse_tree__parse_type_defn__Var_61;
        MR_Word parse_tree__parse_type_defn___ExistQOrParamVars_29;
        MR_Word parse_tree__parse_type_defn__Var_31;
        MR_Word parse_tree__parse_type_defn__Var_32;

        parse_tree__parse_type_defn__CtorArgTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[3], parse_tree__parse_type_defn__CtorArgs_22);
        parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__parse_type_defn__CtorArgTypes_25, &parse_tree__parse_type_defn__VarsInCtorArgTypes0_27);
        parse_tree__parse_type_defn__TypeInfo_259_259 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
        mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_type_defn__TypeInfo_259_259, parse_tree__parse_type_defn__VarsInCtorArgTypes0_27, &parse_tree__parse_type_defn__VarsInCtorArgTypes_28);
        parse_tree__parse_type_defn__Var_61 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeInfo_259_259, parse_tree__parse_type_defn__ExistQVars_19, parse_tree__parse_type_defn__HeadVar__1_1);
        {
          parse_tree__parse_type_defn__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_60, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_60, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_60, 3) = ((MR_Box) (parse_tree__parse_type_defn__Var_61));
        }
        mercury__list__filter_4_p_0(parse_tree__parse_type_defn__TypeInfo_259_259, parse_tree__parse_type_defn__Var_60, parse_tree__parse_type_defn__VarsInCtorArgTypes_28, &parse_tree__parse_type_defn___ExistQOrParamVars_29, &parse_tree__parse_type_defn__NotExistQOrParamVars_30);
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__NotExistQOrParamVars_30)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQOrParamVars_30, (MR_Integer) 0)));
          parse_tree__parse_type_defn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQOrParamVars_30, (MR_Integer) 1)));
          {
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
            MR_Word parse_tree__parse_type_defn__GenericVarSet_33;
            MR_String parse_tree__parse_type_defn__NotExistQOrParamVarsStr_34;
            MR_Word parse_tree__parse_type_defn__Pieces_35;
            MR_Word parse_tree__parse_type_defn__Spec_36;
            MR_Word parse_tree__parse_type_defn__Var_64;
            MR_Word parse_tree__parse_type_defn__Var_65;
            MR_String parse_tree__parse_type_defn__Var_66;
            MR_Word parse_tree__parse_type_defn__Var_69;
            MR_Word parse_tree__parse_type_defn__Var_70;
            MR_Word parse_tree__parse_type_defn__Var_79;
            MR_Word parse_tree__parse_type_defn__Var_80;
            MR_Word parse_tree__parse_type_defn__Var_81;
            MR_Word parse_tree__parse_type_defn__Var_82;
            MR_Word parse_tree__parse_type_defn__Var_83;
            MR_Box parse_tree__parse_type_defn__conv1_Var_66;

            mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_262_262, parse_tree__parse_type_defn__TypeCtorInfo_263_263, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_33);
            parse_tree__parse_type_defn__NotExistQOrParamVarsStr_34 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_263_263, parse_tree__parse_type_defn__GenericVarSet_33, parse_tree__parse_type_defn__NotExistQOrParamVars_30);
            parse_tree__parse_type_defn__conv1_Var_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_type_defn__NotExistQOrParamVars_30, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
            parse_tree__parse_type_defn__Var_66 = ((MR_String) parse_tree__parse_type_defn__conv1_Var_66);
            {
              parse_tree__parse_type_defn__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_65, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_66));
            }
            {
              parse_tree__parse_type_defn__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_70, 1) = ((MR_Box) (parse_tree__parse_type_defn__NotExistQOrParamVarsStr_34));
            }
            {
              parse_tree__parse_type_defn__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_69, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_70));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[69])));
            }
            {
              parse_tree__parse_type_defn__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_64, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_65));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_64, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_69));
            }
            {
              parse_tree__parse_type_defn__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[177])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_35, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_64));
            }
            parse_tree__parse_type_defn__Var_81 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_262_262, parse_tree__parse_type_defn__BodyTerm_3);
            {
              parse_tree__parse_type_defn__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_83, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_35));
            }
            {
              parse_tree__parse_type_defn__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_82, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_83));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_80, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_81));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_80, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_82));
            }
            {
              parse_tree__parse_type_defn__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_79, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_80));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_36, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_79));
            }
            {
              parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_36));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
            }
          }
        }
        else
        {
          MR_Word parse_tree__parse_type_defn__ExistQParamsSet_39;
          MR_Word parse_tree__parse_type_defn__TypeInfo_266_266 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
          MR_Word parse_tree__parse_type_defn__ExistQVarsSet_37;
          MR_Word parse_tree__parse_type_defn__ParamsSet_38;

          mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__ExistQVars_19, &parse_tree__parse_type_defn__ExistQVarsSet_37);
          mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__HeadVar__1_1, &parse_tree__parse_type_defn__ParamsSet_38);
          mercury__set__intersect_3_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__ExistQVarsSet_37, parse_tree__parse_type_defn__ParamsSet_38, &parse_tree__parse_type_defn__ExistQParamsSet_39);
          parse_tree__parse_type_defn__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__ExistQParamsSet_39);
          if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__TypeInfo_267_267 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_268_268;
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_270_270;
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_274_274;
            MR_Word parse_tree__parse_type_defn__ExistQParams_40;
            MR_Word parse_tree__parse_type_defn__ExistQParamVarsStrs_41;
            MR_Word parse_tree__parse_type_defn__Var_87;
            MR_Word parse_tree__parse_type_defn__Var_88;
            MR_Word parse_tree__parse_type_defn__Var_91;
            MR_Word parse_tree__parse_type_defn__Var_92;
            MR_String parse_tree__parse_type_defn__Var_93;
            MR_Word parse_tree__parse_type_defn__Var_97;
            MR_Word parse_tree__parse_type_defn__Var_98;
            MR_Word parse_tree__parse_type_defn__Var_99;
            MR_Word parse_tree__parse_type_defn__Var_100;
            MR_String parse_tree__parse_type_defn__Var_101;
            MR_Word parse_tree__parse_type_defn__Var_115;
            MR_Word parse_tree__parse_type_defn__Var_116;
            MR_Word parse_tree__parse_type_defn__Var_117;
            MR_Word parse_tree__parse_type_defn__Var_118;
            MR_Word parse_tree__parse_type_defn__Var_119;
            MR_Word parse_tree__parse_type_defn__GenericVarSet_219;
            MR_Word parse_tree__parse_type_defn__Pieces_220;
            MR_Word parse_tree__parse_type_defn__Spec_221;
            MR_Box parse_tree__parse_type_defn__conv3_Var_93;
            MR_Box parse_tree__parse_type_defn__conv4_Var_101;

            mercury__set__to_sorted_list_2_p_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__ExistQParamsSet_39, &parse_tree__parse_type_defn__ExistQParams_40);
            parse_tree__parse_type_defn__TypeCtorInfo_268_268 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_268_268, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_219);
            parse_tree__parse_type_defn__TypeCtorInfo_270_270 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              parse_tree__parse_type_defn__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_87, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_87, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_3));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_87, 3) = ((MR_Box) (parse_tree__parse_type_defn__GenericVarSet_219));
            }
            parse_tree__parse_type_defn__ExistQParamVarsStrs_41 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__TypeCtorInfo_270_270, parse_tree__parse_type_defn__Var_87, parse_tree__parse_type_defn__ExistQParams_40);
            parse_tree__parse_type_defn__TypeCtorInfo_274_274 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            parse_tree__parse_type_defn__conv3_Var_93 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__TypeCtorInfo_270_270, parse_tree__parse_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
            parse_tree__parse_type_defn__Var_93 = ((MR_String) parse_tree__parse_type_defn__conv3_Var_93);
            {
              parse_tree__parse_type_defn__Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_92, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_93));
            }
            {
              parse_tree__parse_type_defn__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_91, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_92));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_88, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_91));
            }
            parse_tree__parse_type_defn__Var_98 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__parse_type_defn__ExistQParamVarsStrs_41);
            parse_tree__parse_type_defn__conv4_Var_101 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__TypeCtorInfo_270_270, parse_tree__parse_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
            parse_tree__parse_type_defn__Var_101 = ((MR_String) parse_tree__parse_type_defn__conv4_Var_101);
            {
              parse_tree__parse_type_defn__Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_100, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_101));
            }
            {
              parse_tree__parse_type_defn__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_99, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_100));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[73])));
            }
            parse_tree__parse_type_defn__Var_97 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_274_274, parse_tree__parse_type_defn__Var_98, parse_tree__parse_type_defn__Var_99);
            parse_tree__parse_type_defn__Pieces_220 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_274_274, parse_tree__parse_type_defn__Var_88, parse_tree__parse_type_defn__Var_97);
            parse_tree__parse_type_defn__Var_117 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_268_268, parse_tree__parse_type_defn__BodyTerm_3);
            {
              parse_tree__parse_type_defn__Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_119, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_220));
            }
            {
              parse_tree__parse_type_defn__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_118, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_119));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_116, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_117));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_116, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_118));
            }
            {
              parse_tree__parse_type_defn__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_115, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_116));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_221, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_115));
            }
            {
              parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_221));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
            }
          }
          else
          {
            MR_Word parse_tree__parse_type_defn__NotOccursExistQVars_44;
            MR_Word parse_tree__parse_type_defn__TypeInfo_277_277;
            MR_Word parse_tree__parse_type_defn__ConstraintTVars_42;
            MR_Word parse_tree__parse_type_defn__Var_126;
            MR_Word parse_tree__parse_type_defn__Var_127;
            MR_Word parse_tree__parse_type_defn__CtorArgTypes_223;
            MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes0_224;
            MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes_225;
            MR_Word parse_tree__parse_type_defn___OccursExistQVars_43;
            MR_Word parse_tree__parse_type_defn__Var_45;
            MR_Word parse_tree__parse_type_defn__Var_46;

            parse_tree__parse_type_defn__CtorArgTypes_223 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[4], parse_tree__parse_type_defn__CtorArgs_22);
            parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__parse_type_defn__CtorArgTypes_223, &parse_tree__parse_type_defn__VarsInCtorArgTypes0_224);
            parse_tree__parse_type_defn__TypeInfo_277_277 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
            mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_type_defn__TypeInfo_277_277, parse_tree__parse_type_defn__VarsInCtorArgTypes0_224, &parse_tree__parse_type_defn__VarsInCtorArgTypes_225);
            parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__parse_type_defn__Constraints_20, &parse_tree__parse_type_defn__ConstraintTVars_42);
            parse_tree__parse_type_defn__Var_127 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeInfo_277_277, parse_tree__parse_type_defn__VarsInCtorArgTypes_225, parse_tree__parse_type_defn__ConstraintTVars_42);
            {
              parse_tree__parse_type_defn__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_126, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_126, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_5));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_126, 3) = ((MR_Box) (parse_tree__parse_type_defn__Var_127));
            }
            mercury__list__filter_4_p_0(parse_tree__parse_type_defn__TypeInfo_277_277, parse_tree__parse_type_defn__Var_126, parse_tree__parse_type_defn__ExistQVars_19, &parse_tree__parse_type_defn___OccursExistQVars_43, &parse_tree__parse_type_defn__NotOccursExistQVars_44);
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__NotOccursExistQVars_44)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotOccursExistQVars_44, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotOccursExistQVars_44, (MR_Integer) 1)));
              {
                MR_Word parse_tree__parse_type_defn__TypeCtorInfo_280_280 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                MR_Word parse_tree__parse_type_defn__TypeInfo_282_282;
                MR_Word parse_tree__parse_type_defn__TypeCtorInfo_283_283;
                MR_Word parse_tree__parse_type_defn__TypeCtorInfo_287_287;
                MR_Word parse_tree__parse_type_defn__NotOccursExistQVarStrs_47;
                MR_Word parse_tree__parse_type_defn__Var_128;
                MR_Word parse_tree__parse_type_defn__Var_129;
                MR_Word parse_tree__parse_type_defn__Var_132;
                MR_Word parse_tree__parse_type_defn__Var_133;
                MR_String parse_tree__parse_type_defn__Var_134;
                MR_Word parse_tree__parse_type_defn__Var_138;
                MR_Word parse_tree__parse_type_defn__Var_139;
                MR_Word parse_tree__parse_type_defn__Var_140;
                MR_Word parse_tree__parse_type_defn__Var_143;
                MR_Word parse_tree__parse_type_defn__Var_144;
                MR_String parse_tree__parse_type_defn__Var_145;
                MR_Word parse_tree__parse_type_defn__Var_156;
                MR_Word parse_tree__parse_type_defn__Var_157;
                MR_Word parse_tree__parse_type_defn__Var_158;
                MR_Word parse_tree__parse_type_defn__Var_159;
                MR_Word parse_tree__parse_type_defn__Var_160;
                MR_Word parse_tree__parse_type_defn__GenericVarSet_226;
                MR_Word parse_tree__parse_type_defn__Pieces_227;
                MR_Word parse_tree__parse_type_defn__Spec_228;
                MR_Box parse_tree__parse_type_defn__conv7_Var_134;
                MR_Box parse_tree__parse_type_defn__conv8_Var_145;

                mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_280_280, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_226);
                parse_tree__parse_type_defn__TypeInfo_282_282 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                parse_tree__parse_type_defn__TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  parse_tree__parse_type_defn__Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_128, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_128, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_6));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_128, 3) = ((MR_Box) (parse_tree__parse_type_defn__GenericVarSet_226));
                }
                parse_tree__parse_type_defn__NotOccursExistQVarStrs_47 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_282_282, parse_tree__parse_type_defn__TypeCtorInfo_283_283, parse_tree__parse_type_defn__Var_128, parse_tree__parse_type_defn__NotOccursExistQVars_44);
                parse_tree__parse_type_defn__TypeCtorInfo_287_287 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                parse_tree__parse_type_defn__conv7_Var_134 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_282_282, parse_tree__parse_type_defn__TypeCtorInfo_283_283, parse_tree__parse_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                parse_tree__parse_type_defn__Var_134 = ((MR_String) parse_tree__parse_type_defn__conv7_Var_134);
                {
                  parse_tree__parse_type_defn__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_133, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_134));
                }
                {
                  parse_tree__parse_type_defn__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_132, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_133));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_129, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_132));
                }
                parse_tree__parse_type_defn__Var_139 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__parse_type_defn__NotOccursExistQVarStrs_47);
                parse_tree__parse_type_defn__conv8_Var_145 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_282_282, parse_tree__parse_type_defn__TypeCtorInfo_283_283, parse_tree__parse_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                parse_tree__parse_type_defn__Var_145 = ((MR_String) parse_tree__parse_type_defn__conv8_Var_145);
                {
                  parse_tree__parse_type_defn__Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_144, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_145));
                }
                {
                  parse_tree__parse_type_defn__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_143, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_144));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[75])));
                }
                {
                  parse_tree__parse_type_defn__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[179])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_140, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_143));
                }
                parse_tree__parse_type_defn__Var_138 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_287_287, parse_tree__parse_type_defn__Var_139, parse_tree__parse_type_defn__Var_140);
                parse_tree__parse_type_defn__Pieces_227 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_287_287, parse_tree__parse_type_defn__Var_129, parse_tree__parse_type_defn__Var_138);
                parse_tree__parse_type_defn__Var_158 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_280_280, parse_tree__parse_type_defn__BodyTerm_3);
                {
                  parse_tree__parse_type_defn__Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_160, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_227));
                }
                {
                  parse_tree__parse_type_defn__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_159, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_160));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_157, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_158));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_157, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_159));
                }
                {
                  parse_tree__parse_type_defn__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_156, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_157));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__Spec_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_228, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_228, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_156));
                }
                {
                  parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_228));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
                }
              }
            }
            else
            {
              MR_Word parse_tree__parse_type_defn__NotExistQArgTypes_51;
              MR_Word parse_tree__parse_type_defn__TypeInfo_293_293;
              MR_Word parse_tree__parse_type_defn__ConstraintArgTypeLists_48;
              MR_Word parse_tree__parse_type_defn__ConstraintArgTypes_49;
              MR_Word parse_tree__parse_type_defn__Var_165;
              MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes0_229;
              MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes_230;
              MR_Word parse_tree__parse_type_defn___ExistQArgTypes_50;
              MR_Word parse_tree__parse_type_defn__Var_52;
              MR_Word parse_tree__parse_type_defn__Var_53;

              parse_tree__parse_type_defn__ConstraintArgTypeLists_48 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[9], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[5], parse_tree__parse_type_defn__Constraints_20);
              mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_defn__ConstraintArgTypeLists_48, &parse_tree__parse_type_defn__ConstraintArgTypes_49);
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__parse_type_defn__ConstraintArgTypes_49, &parse_tree__parse_type_defn__VarsInCtorArgTypes0_229);
              parse_tree__parse_type_defn__TypeInfo_293_293 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_type_defn__TypeInfo_293_293, parse_tree__parse_type_defn__VarsInCtorArgTypes0_229, &parse_tree__parse_type_defn__VarsInCtorArgTypes_230);
              {
                parse_tree__parse_type_defn__Var_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_165, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_165, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_8));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_165, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_165, 3) = ((MR_Box) (parse_tree__parse_type_defn__ExistQVars_19));
              }
              mercury__list__filter_4_p_0(parse_tree__parse_type_defn__TypeInfo_293_293, parse_tree__parse_type_defn__Var_165, parse_tree__parse_type_defn__VarsInCtorArgTypes_230, &parse_tree__parse_type_defn___ExistQArgTypes_50, &parse_tree__parse_type_defn__NotExistQArgTypes_51);
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__NotExistQArgTypes_51)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQArgTypes_51, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQArgTypes_51, (MR_Integer) 1)));
                {
                  MR_Word parse_tree__parse_type_defn__TypeCtorInfo_296_296 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                  MR_Word parse_tree__parse_type_defn__TypeInfo_298_298;
                  MR_Word parse_tree__parse_type_defn__TypeCtorInfo_299_299;
                  MR_Word parse_tree__parse_type_defn__TypeCtorInfo_303_303;
                  MR_Word parse_tree__parse_type_defn__NotExistQArgTypeStrs_54;
                  MR_Word parse_tree__parse_type_defn__Var_166;
                  MR_Word parse_tree__parse_type_defn__Var_167;
                  MR_Word parse_tree__parse_type_defn__Var_170;
                  MR_Word parse_tree__parse_type_defn__Var_171;
                  MR_String parse_tree__parse_type_defn__Var_172;
                  MR_Word parse_tree__parse_type_defn__Var_176;
                  MR_Word parse_tree__parse_type_defn__Var_177;
                  MR_Word parse_tree__parse_type_defn__Var_178;
                  MR_Word parse_tree__parse_type_defn__Var_181;
                  MR_Word parse_tree__parse_type_defn__Var_182;
                  MR_String parse_tree__parse_type_defn__Var_183;
                  MR_Word parse_tree__parse_type_defn__Var_209;
                  MR_Word parse_tree__parse_type_defn__Var_210;
                  MR_Word parse_tree__parse_type_defn__Var_211;
                  MR_Word parse_tree__parse_type_defn__Var_212;
                  MR_Word parse_tree__parse_type_defn__Var_213;
                  MR_Word parse_tree__parse_type_defn__GenericVarSet_231;
                  MR_Word parse_tree__parse_type_defn__Pieces_232;
                  MR_Word parse_tree__parse_type_defn__Spec_233;
                  MR_Box parse_tree__parse_type_defn__conv11_Var_172;
                  MR_Box parse_tree__parse_type_defn__conv12_Var_183;

                  mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_296_296, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_231);
                  parse_tree__parse_type_defn__TypeInfo_298_298 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                  parse_tree__parse_type_defn__TypeCtorInfo_299_299 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  {
                    parse_tree__parse_type_defn__Var_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_166, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[1]));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_166, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_9));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_166, 3) = ((MR_Box) (parse_tree__parse_type_defn__GenericVarSet_231));
                  }
                  parse_tree__parse_type_defn__NotExistQArgTypeStrs_54 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_298_298, parse_tree__parse_type_defn__TypeCtorInfo_299_299, parse_tree__parse_type_defn__Var_166, parse_tree__parse_type_defn__NotExistQArgTypes_51);
                  parse_tree__parse_type_defn__TypeCtorInfo_303_303 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  parse_tree__parse_type_defn__conv11_Var_172 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_298_298, parse_tree__parse_type_defn__TypeCtorInfo_299_299, parse_tree__parse_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                  parse_tree__parse_type_defn__Var_172 = ((MR_String) parse_tree__parse_type_defn__conv11_Var_172);
                  {
                    parse_tree__parse_type_defn__Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_171, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_172));
                  }
                  {
                    parse_tree__parse_type_defn__Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_170, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_171));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[178])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_167, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_170));
                  }
                  parse_tree__parse_type_defn__Var_177 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__parse_type_defn__NotExistQArgTypeStrs_54);
                  parse_tree__parse_type_defn__conv12_Var_183 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_298_298, parse_tree__parse_type_defn__TypeCtorInfo_299_299, parse_tree__parse_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                  parse_tree__parse_type_defn__Var_183 = ((MR_String) parse_tree__parse_type_defn__conv12_Var_183);
                  {
                    parse_tree__parse_type_defn__Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_182, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_183));
                  }
                  {
                    parse_tree__parse_type_defn__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_181, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_182));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[84])));
                  }
                  {
                    parse_tree__parse_type_defn__Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[180])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_178, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_181));
                  }
                  parse_tree__parse_type_defn__Var_176 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_303_303, parse_tree__parse_type_defn__Var_177, parse_tree__parse_type_defn__Var_178);
                  parse_tree__parse_type_defn__Pieces_232 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_303_303, parse_tree__parse_type_defn__Var_167, parse_tree__parse_type_defn__Var_176);
                  parse_tree__parse_type_defn__Var_211 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_296_296, parse_tree__parse_type_defn__BodyTerm_3);
                  {
                    parse_tree__parse_type_defn__Var_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_213, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_232));
                  }
                  {
                    parse_tree__parse_type_defn__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_212, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_213));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__Var_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_210, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_211));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_210, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_212));
                  }
                  {
                    parse_tree__parse_type_defn__Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_209, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_210));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__Spec_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_233, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_209));
                  }
                  {
                    parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_233));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
                  }
                }
              }
              else
                parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5;
            }
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word parse_tree__parse_type_defn__next_value_of_HeadVar__4_4 = parse_tree__parse_type_defn__Ctors_17;
          MR_Word parse_tree__parse_type_defn__next_value_of_STATE_VARIABLE_Specs_0_5 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86;

          parse_tree__parse_type_defn__HeadVar__4_4 = parse_tree__parse_type_defn__next_value_of_HeadVar__4_4;
          parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__parse_type_defn__next_value_of_STATE_VARIABLE_Specs_0_5;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_8)
{
  {
    MR_Word parse_tree__parse_type_defn__HeadBodyTerm_9;
    MR_Word parse_tree__parse_type_defn__TailBodyTerms_10;
    MR_Word parse_tree__parse_type_defn__Var_11;

    parse_tree__parse_util__disjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7, &parse_tree__parse_type_defn__Var_11);
    parse_tree__parse_type_defn__HeadBodyTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_11, (MR_Integer) 0)));
    parse_tree__parse_type_defn__TailBodyTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_11, (MR_Integer) 1)));
    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__HeadBodyTerm_9, parse_tree__parse_type_defn__TailBodyTerms_10, parse_tree__parse_type_defn__MaybeConstructors_8);
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__HeadTerm_8,
  MR_Word parse_tree__parse_type_defn__TailTerms_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_10)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeHeadConstructor_11;

    parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__HeadTerm_8, &parse_tree__parse_type_defn__MaybeHeadConstructor_11);
    if ((parse_tree__parse_type_defn__TailTerms_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeConstructors_10 = (MR_Word) parse_tree__parse_type_defn__MaybeHeadConstructor_11;
      else
      {
        MR_Word parse_tree__parse_type_defn__HeadConstructor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Var_21;

        {
          parse_tree__parse_type_defn__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_21, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadConstructor_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeConstructors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_21));
        }
      }
    else
    {
      MR_Word parse_tree__parse_type_defn__HeadTailTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TailTerms_9, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__TailTailTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TailTerms_9, (MR_Integer) 1)));
      MR_Word parse_tree__parse_type_defn__MaybeTailConstructors_16;
      MR_Word parse_tree__parse_type_defn__TailConstructors_17;
      MR_Word parse_tree__parse_type_defn__HeadConstructor_24;

      parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__HeadTailTerm_14, parse_tree__parse_type_defn__TailTailTerms_15, &parse_tree__parse_type_defn__MaybeTailConstructors_16);
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__HeadConstructor_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTailConstructors_16)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__TailConstructors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailConstructors_16, (MR_Integer) 0)));
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__Var_18;

        parse_tree__parse_type_defn__Var_18 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ((MR_Box) (parse_tree__parse_type_defn__HeadConstructor_24)), parse_tree__parse_type_defn__TailConstructors_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeConstructors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_18));
        }
      }
      else
      {
        MR_Word parse_tree__parse_type_defn__Var_19;
        MR_Word parse_tree__parse_type_defn__Var_20;
        MR_Word parse_tree__parse_type_defn__Specs_23;

        parse_tree__parse_type_defn__Var_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, parse_tree__parse_type_defn__MaybeHeadConstructor_11);
        parse_tree__parse_type_defn__Var_20 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[5], parse_tree__parse_type_defn__MaybeTailConstructors_16);
        parse_tree__parse_type_defn__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_defn__Var_19, parse_tree__parse_type_defn__Var_20);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeConstructors_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_23));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_HeadVar__2_37;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__306__1_2_p_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_HeadVar__2_37);
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_HeadVar__2_37));
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__VarsTerm_9;
    MR_Word parse_tree__parse_type_defn__SubTerm_10;
    MR_Word parse_tree__parse_type_defn__Var_17;
    MR_String parse_tree__parse_type_defn__Var_18;
    MR_Word parse_tree__parse_type_defn__Var_19;
    MR_Word parse_tree__parse_type_defn__Var_20;
    MR_Word parse_tree__parse_type_defn__Var_21;
    MR_Word parse_tree__parse_type_defn__Var_11;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_17)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_17, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_18, (MR_String) "some") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_19)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__VarsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_19, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_20)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__SubTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_20, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__ContextPieces_12;
      MR_Word parse_tree__parse_type_defn__MaybeExistQVars_13;

      parse_tree__parse_type_defn__ContextPieces_12 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[65]));
      parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__VarsTerm_9, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ContextPieces_12, &parse_tree__parse_type_defn__MaybeExistQVars_13);
      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeExistQVars_13)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__parse_type_defn__MaybeExistQVars_13;
      else
      {
        MR_Word parse_tree__parse_type_defn__ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeExistQVars_13, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__ExistQTVars_15;
        MR_Word parse_tree__parse_type_defn__BeforeConstraintsTerm_47;
        MR_Word parse_tree__parse_type_defn__MaybeConstraints_48;
        MR_Word parse_tree__parse_type_defn__ExistentialConstraints_84;
        MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_89;
        MR_Word parse_tree__parse_type_defn__Var_86;
        MR_String parse_tree__parse_type_defn__Var_87;
        MR_Word parse_tree__parse_type_defn__Var_88;
        MR_Word parse_tree__parse_type_defn__Var_90;
        MR_Word parse_tree__parse_type_defn__Var_91;
        MR_Word parse_tree__parse_type_defn__Var_85;

        mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[2], parse_tree__parse_type_defn__ExistQVars_14, &parse_tree__parse_type_defn__ExistQTVars_15);
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__SubTerm_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SubTerm_10, (MR_Integer) 0)));
          parse_tree__parse_type_defn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SubTerm_10, (MR_Integer) 1)));
          parse_tree__parse_type_defn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SubTerm_10, (MR_Integer) 2)));
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_86)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_86, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_87, (MR_String) "=>") == 0);
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_88)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_88, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_88, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_90)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                {
                  parse_tree__parse_type_defn__ExistentialConstraints_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_90, (MR_Integer) 0)));
                  parse_tree__parse_type_defn__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_90, (MR_Integer) 1)));
                  parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
        }
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__BeforeConstraintsTerm_47 = parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_89;
          parse_tree__parse_class__parse_class_constraints_4_p_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ExistentialConstraints_84, &parse_tree__parse_type_defn__MaybeConstraints_48);
        }
        else
        {
          parse_tree__parse_type_defn__MaybeConstraints_48 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[3]);
          parse_tree__parse_type_defn__BeforeConstraintsTerm_47 = parse_tree__parse_type_defn__SubTerm_10;
        }
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstraints_48)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__parse_type_defn__MaybeConstraints_48;
        else
        {
          MR_Word parse_tree__parse_type_defn__TypeCtorInfo_40_76;
          MR_Word parse_tree__parse_type_defn__Constraints_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstraints_48, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__MainTerm_53;
          MR_Word parse_tree__parse_type_defn__ContextPieces_54;
          MR_Word parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55;
          MR_Word parse_tree__parse_type_defn__InsideBracesTerm_51;
          MR_Word parse_tree__parse_type_defn__Var_61;
          MR_String parse_tree__parse_type_defn__Var_62;
          MR_Word parse_tree__parse_type_defn__Var_63;
          MR_Word parse_tree__parse_type_defn__Var_64;
          MR_Word parse_tree__parse_type_defn___Context_52;

          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__BeforeConstraintsTerm_47)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 1)));
            parse_tree__parse_type_defn___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_61)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_61, (MR_Integer) 0)));
              parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_62, (MR_String) "{}") == 0);
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_63)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                {
                  parse_tree__parse_type_defn__InsideBracesTerm_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_63, (MR_Integer) 0)));
                  parse_tree__parse_type_defn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_63, (MR_Integer) 1)));
                  parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
          if (parse_tree__parse_type_defn__succeeded)
            parse_tree__parse_type_defn__MainTerm_53 = parse_tree__parse_type_defn__InsideBracesTerm_51;
          else
            parse_tree__parse_type_defn__MainTerm_53 = parse_tree__parse_type_defn__BeforeConstraintsTerm_47;
          parse_tree__parse_type_defn__ContextPieces_54 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[176]))));
          parse_tree__parse_type_defn__TypeCtorInfo_40_76 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_40_76, parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__MainTerm_53, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ContextPieces_54, &parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55);
          if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_type_defn__Specs_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_defn__MaybeConstructor_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_69));
            }
          }
          else
          {
            MR_Word parse_tree__parse_type_defn__Functor_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__ArgTerms_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__MaybeConstructorArgs_58;

            parse_tree__parse_type_defn__MaybeConstructorArgs_58 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ArgTerms_57);
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_58)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__parse_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_58;
            else
            {
              MR_Word parse_tree__parse_type_defn__ConstructorArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstructorArgs_58, (MR_Integer) 0)));
              MR_Word parse_tree__parse_type_defn__Ctor_60;
              MR_Integer parse_tree__parse_type_defn__Var_67;
              MR_Word parse_tree__parse_type_defn__Var_68;

              parse_tree__parse_type_defn__Var_67 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__parse_type_defn__ConstructorArgs_59);
              parse_tree__parse_type_defn__Var_68 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_40_76, parse_tree__parse_type_defn__MainTerm_53);
              {
                parse_tree__parse_type_defn__Ctor_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 0) = ((MR_Box) (parse_tree__parse_type_defn__ExistQTVars_15));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 1) = ((MR_Box) (parse_tree__parse_type_defn__Constraints_50));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 2) = ((MR_Box) (parse_tree__parse_type_defn__Functor_56));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 3) = ((MR_Box) (parse_tree__parse_type_defn__ConstructorArgs_59));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 4) = ((MR_Box) (parse_tree__parse_type_defn__Var_67));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 5) = ((MR_Box) (parse_tree__parse_type_defn__Var_68));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_type_defn__MaybeConstructor_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Ctor_60));
              }
            }
          }
        }
      }
    }
    else
    {
      parse_tree__parse_type_defn__parse_constructor_5_p_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__Term_7, parse_tree__parse_type_defn__MaybeConstructor_8);
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ExistQVars_8,
  MR_Word parse_tree__parse_type_defn__Term_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_10)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__BeforeConstraintsTerm_11;
    MR_Word parse_tree__parse_type_defn__MaybeConstraints_12;
    MR_Word parse_tree__parse_type_defn__ExistentialConstraints_48;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
    MR_Word parse_tree__parse_type_defn__Var_50;
    MR_String parse_tree__parse_type_defn__Var_51;
    MR_Word parse_tree__parse_type_defn__Var_52;
    MR_Word parse_tree__parse_type_defn__Var_54;
    MR_Word parse_tree__parse_type_defn__Var_55;
    MR_Word parse_tree__parse_type_defn__Var_49;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
      parse_tree__parse_type_defn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_50)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_50, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_51, (MR_String) "=>") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_52)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_52, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_54)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__ExistentialConstraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_54, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_54, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__BeforeConstraintsTerm_11 = parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
      parse_tree__parse_class__parse_class_constraints_4_p_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ExistentialConstraints_48, &parse_tree__parse_type_defn__MaybeConstraints_12);
    }
    else
    {
      parse_tree__parse_type_defn__MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[3]);
      parse_tree__parse_type_defn__BeforeConstraintsTerm_11 = parse_tree__parse_type_defn__Term_9;
    }
    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__parse_type_defn__MaybeConstraints_12;
    else
    {
      MR_Word parse_tree__parse_type_defn__TypeCtorInfo_40_40;
      MR_Word parse_tree__parse_type_defn__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstraints_12, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__MainTerm_17;
      MR_Word parse_tree__parse_type_defn__ContextPieces_18;
      MR_Word parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19;
      MR_Word parse_tree__parse_type_defn__InsideBracesTerm_15;
      MR_Word parse_tree__parse_type_defn__Var_25;
      MR_String parse_tree__parse_type_defn__Var_26;
      MR_Word parse_tree__parse_type_defn__Var_27;
      MR_Word parse_tree__parse_type_defn__Var_28;
      MR_Word parse_tree__parse_type_defn___Context_16;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 1)));
        parse_tree__parse_type_defn___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_25)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_25, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_26, (MR_String) "{}") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_27)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_27, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_27, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
        parse_tree__parse_type_defn__MainTerm_17 = parse_tree__parse_type_defn__InsideBracesTerm_15;
      else
        parse_tree__parse_type_defn__MainTerm_17 = parse_tree__parse_type_defn__BeforeConstraintsTerm_11;
      parse_tree__parse_type_defn__ContextPieces_18 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[176]))));
      parse_tree__parse_type_defn__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_40_40, parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__MainTerm_17, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ContextPieces_18, &parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19);
      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_type_defn__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeConstructor_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_33));
        }
      }
      else
      {
        MR_Word parse_tree__parse_type_defn__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__MaybeConstructorArgs_22;

        parse_tree__parse_type_defn__MaybeConstructorArgs_22 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ArgTerms_21);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_22;
        else
        {
          MR_Word parse_tree__parse_type_defn__ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstructorArgs_22, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__Ctor_24;
          MR_Integer parse_tree__parse_type_defn__Var_31;
          MR_Word parse_tree__parse_type_defn__Var_32;

          parse_tree__parse_type_defn__Var_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__parse_type_defn__ConstructorArgs_23);
          parse_tree__parse_type_defn__Var_32 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_40_40, parse_tree__parse_type_defn__MainTerm_17);
          {
            parse_tree__parse_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__ExistQVars_8));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 1) = ((MR_Box) (parse_tree__parse_type_defn__Constraints_14));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 2) = ((MR_Box) (parse_tree__parse_type_defn__Functor_20));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 3) = ((MR_Box) (parse_tree__parse_type_defn__ConstructorArgs_23));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 4) = ((MR_Box) (parse_tree__parse_type_defn__Var_31));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 5) = ((MR_Box) (parse_tree__parse_type_defn__Var_32));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_type_defn__MaybeConstructor_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Ctor_24));
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__MaybeCtorFieldName_9,
  MR_Word parse_tree__parse_type_defn__TypeTerm_10,
  MR_Word parse_tree__parse_type_defn__Terms_11)
{
  {
    MR_Word parse_tree__parse_type_defn__MaybeArgs_12;
    MR_Word parse_tree__parse_type_defn__ContextPieces_13;
    MR_Word parse_tree__parse_type_defn__MaybeType_14;

    parse_tree__parse_type_defn__ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__ContextPieces_13, parse_tree__parse_type_defn__TypeTerm_10, &parse_tree__parse_type_defn__MaybeType_14);
    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__parse_type_defn__MaybeArgs_12 = (MR_Word) parse_tree__parse_type_defn__MaybeType_14;
    else
    {
      MR_Word parse_tree__parse_type_defn__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeType_14, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__Context_16;
      MR_Word parse_tree__parse_type_defn__Arg_17;
      MR_Word parse_tree__parse_type_defn__MaybeTailArgs_18;

      parse_tree__parse_type_defn__Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__TypeTerm_10);
      {
        parse_tree__parse_type_defn__Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeCtorFieldName_9));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 1) = ((MR_Box) (parse_tree__parse_type_defn__Type_15));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 3) = ((MR_Box) (parse_tree__parse_type_defn__Context_16));
      }
      parse_tree__parse_type_defn__MaybeTailArgs_18 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__Terms_11);
      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
        parse_tree__parse_type_defn__MaybeArgs_12 = parse_tree__parse_type_defn__MaybeTailArgs_18;
      else
      {
        MR_Word parse_tree__parse_type_defn__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailArgs_18, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Var_25;

        {
          parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__Arg_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_25, 1) = ((MR_Box) (parse_tree__parse_type_defn__Args_20));
        }
        {
          parse_tree__parse_type_defn__MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeArgs_12, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
        }
      }
    }
    return parse_tree__parse_type_defn__MaybeArgs_12;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_4;

    if ((parse_tree__parse_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_5[1]);
    }
    else
    {
      MR_Word parse_tree__parse_type_defn__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word parse_tree__parse_type_defn__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word parse_tree__parse_type_defn__NameTerm_13;
      MR_Word parse_tree__parse_type_defn__TypeTerm_14;
      MR_Word parse_tree__parse_type_defn__Var_27;
      MR_String parse_tree__parse_type_defn__Var_28;
      MR_Word parse_tree__parse_type_defn__Var_29;
      MR_Word parse_tree__parse_type_defn__Var_30;
      MR_Word parse_tree__parse_type_defn__Var_31;
      MR_Word parse_tree__parse_type_defn__Var_15;

      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_10, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_10, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_10, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_27)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_27, (MR_Integer) 0)));
          parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_28, (MR_String) "::") == 0);
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_29)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_29, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_29, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_30)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_30, (MR_Integer) 0)));
                parse_tree__parse_type_defn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_30, (MR_Integer) 1)));
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_54_54;
        MR_Word parse_tree__parse_type_defn__ContextPieces_16;
        MR_Word parse_tree__parse_type_defn__MaybeSymNameAndArgs_17;

        parse_tree__parse_type_defn__ContextPieces_16 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[174]))));
        parse_tree__parse_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__ModuleName_1, parse_tree__parse_type_defn__NameTerm_13, parse_tree__parse_type_defn__VarSet_2, parse_tree__parse_type_defn__ContextPieces_16, &parse_tree__parse_type_defn__MaybeSymNameAndArgs_17);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word parse_tree__parse_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));

          {
            parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_18));
          }
        }
        else
        {
          MR_Word parse_tree__parse_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 1)));

          if ((parse_tree__parse_type_defn__SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_type_defn__NameCtxt_25;
            MR_Word parse_tree__parse_type_defn__MaybeCtorFieldName_26;
            MR_Word parse_tree__parse_type_defn__Var_34;
            MR_Word parse_tree__parse_type_defn__ContextPieces_61;
            MR_Word parse_tree__parse_type_defn__MaybeType_62;

            parse_tree__parse_type_defn__NameCtxt_25 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__NameTerm_13);
            {
              parse_tree__parse_type_defn__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_34, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_19));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_34, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameCtxt_25));
            }
            {
              parse_tree__parse_type_defn__MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeCtorFieldName_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_34));
            }
            parse_tree__parse_type_defn__ContextPieces_61 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))));
            parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__VarSet_2, parse_tree__parse_type_defn__ContextPieces_61, parse_tree__parse_type_defn__TypeTerm_14, &parse_tree__parse_type_defn__MaybeType_62);
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeType_62)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) parse_tree__parse_type_defn__MaybeType_62;
            else
            {
              MR_Word parse_tree__parse_type_defn__Type_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeType_62, (MR_Integer) 0)));
              MR_Word parse_tree__parse_type_defn__Context_64;
              MR_Word parse_tree__parse_type_defn__Arg_65;
              MR_Word parse_tree__parse_type_defn__MaybeTailArgs_66;

              parse_tree__parse_type_defn__Context_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__TypeTerm_14);
              {
                parse_tree__parse_type_defn__Arg_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_65, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeCtorFieldName_26));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_65, 1) = ((MR_Box) (parse_tree__parse_type_defn__Type_63));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_65, 3) = ((MR_Box) (parse_tree__parse_type_defn__Context_64));
              }
              parse_tree__parse_type_defn__MaybeTailArgs_66 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__parse_type_defn__ModuleName_1, parse_tree__parse_type_defn__VarSet_2, parse_tree__parse_type_defn__Terms_11);
              if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTailArgs_66)) == (MR_mktag((MR_Integer) 0))))
                parse_tree__parse_type_defn__HeadVar__4_4 = parse_tree__parse_type_defn__MaybeTailArgs_66;
              else
              {
                MR_Word parse_tree__parse_type_defn__Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailArgs_66, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__Var_73;

                {
                  parse_tree__parse_type_defn__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_73, 0) = ((MR_Box) (parse_tree__parse_type_defn__Arg_65));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_73, 1) = ((MR_Box) (parse_tree__parse_type_defn__Args_68));
                }
                {
                  parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_73));
                }
              }
            }
          }
          else
          {
            MR_Word parse_tree__parse_type_defn__Spec_24;
            MR_Word parse_tree__parse_type_defn__Var_42;
            MR_Word parse_tree__parse_type_defn__Var_43;
            MR_Word parse_tree__parse_type_defn__Var_44;
            MR_Word parse_tree__parse_type_defn__Var_49;

            parse_tree__parse_type_defn__Var_44 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__Term_10);
            {
              parse_tree__parse_type_defn__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_44));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[175])));
            }
            {
              parse_tree__parse_type_defn__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_42, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_43));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_42));
            }
            {
              parse_tree__parse_type_defn__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_49, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_49));
            }
          }
        }
      }
      else
      {
        parse_tree__parse_type_defn__HeadVar__4_4 = parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__parse_type_defn__ModuleName_1, parse_tree__parse_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__Term_10, parse_tree__parse_type_defn__Terms_11);
      }
    }
    return parse_tree__parse_type_defn__HeadVar__4_4;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word parse_tree__parse_type_defn__Term_4,
  MR_Word * parse_tree__parse_type_defn__CtorsTerm_5,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereTerm_6)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__CtorsTermPrime_9;
    MR_Word parse_tree__parse_type_defn__WhereTerm_10;
    MR_Word parse_tree__parse_type_defn__Args_7;
    MR_Word parse_tree__parse_type_defn__Var_11;
    MR_String parse_tree__parse_type_defn__Var_12;
    MR_Word parse_tree__parse_type_defn__Var_13;
    MR_Word parse_tree__parse_type_defn__Var_14;
    MR_Word parse_tree__parse_type_defn___Context_8;

    if (parse_tree__parse_type_defn__succeeded)
    {
      parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_4, (MR_Integer) 0)));
      parse_tree__parse_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_4, (MR_Integer) 1)));
      parse_tree__parse_type_defn___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_4, (MR_Integer) 2)));
      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_11)) == (MR_mktag((MR_Integer) 0)));
      if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_11, (MR_Integer) 0)));
        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Var_12, (MR_String) "where") == 0);
        if (parse_tree__parse_type_defn__succeeded)
        {
          parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Args_7)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__CtorsTermPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_7, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_7, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Var_13)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
            {
              parse_tree__parse_type_defn__WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_13, (MR_Integer) 0)));
              parse_tree__parse_type_defn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_13, (MR_Integer) 1)));
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
      }
    }
    if (parse_tree__parse_type_defn__succeeded)
    {
      *parse_tree__parse_type_defn__CtorsTerm_5 = parse_tree__parse_type_defn__CtorsTermPrime_9;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_type_defn__MaybeWhereTerm_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__WhereTerm_10));
      }
    }
    else
    {
      *parse_tree__parse_type_defn__CtorsTerm_5 = parse_tree__parse_type_defn__Term_4;
      *parse_tree__parse_type_defn__MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_4(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv3_HeadVar__3_148;

    parse_tree__parse_type_defn__conv3_HeadVar__3_148 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv3_HeadVar__3_148));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_3(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv2_HeadVar__2_142;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__1_2_p_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv2_HeadVar__2_142);
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv2_HeadVar__2_142));
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv1_HeadVar__3_186;

    parse_tree__parse_type_defn__conv1_HeadVar__3_186 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1408__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv1_HeadVar__3_186));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_HeadVar__2_155;

    parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1399__2_2_p_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_HeadVar__2_155);
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_HeadVar__2_155));
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(
  MR_Word parse_tree__parse_type_defn__ParseContext_6,
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__HeadTerm_9,
  MR_Word * parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__ParseContext_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadTerm_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_139_519;
        MR_Word parse_tree__parse_type_defn__HeadContext_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 2)));
        MR_Word parse_tree__parse_type_defn__HeadResult_467;
        MR_Word parse_tree__parse_type_defn__ContextPieces_518;
        MR_Word parse_tree__parse_type_defn__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 1)));

        parse_tree__parse_type_defn__ContextPieces_518 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162]))));
        parse_tree__parse_type_defn__TypeCtorInfo_139_519 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_139_519, parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__HeadTerm_9, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__ContextPieces_518, &parse_tree__parse_type_defn__HeadResult_467);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadResult_467)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = (MR_Word) parse_tree__parse_type_defn__HeadResult_467;
        else
        {
          MR_Word parse_tree__parse_type_defn__SymName_351 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadResult_467, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__ArgTerms_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadResult_467, (MR_Integer) 1)));
          MR_Word parse_tree__parse_type_defn__NameSpecs_353;
          MR_Word parse_tree__parse_type_defn__ParamVars_298;

          parse_tree__parse_type_defn__check_user_type_name_3_p_0(parse_tree__parse_type_defn__SymName_351, parse_tree__parse_type_defn__HeadContext_466, &parse_tree__parse_type_defn__NameSpecs_353);
          parse_tree__parse_type_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_139_519, parse_tree__parse_type_defn__ArgTerms_352, &parse_tree__parse_type_defn__ParamVars_298);
          if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__TypeInfo_140_274 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0];
            MR_Word parse_tree__parse_type_defn__ParamsBag_246;
            MR_Word parse_tree__parse_type_defn__DupParamVars_247;

            mercury__bag__from_list_2_p_0(parse_tree__parse_type_defn__TypeInfo_140_274, parse_tree__parse_type_defn__ParamVars_298, &parse_tree__parse_type_defn__ParamsBag_246);
            mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__parse_type_defn__TypeInfo_140_274, parse_tree__parse_type_defn__ParamsBag_246, &parse_tree__parse_type_defn__DupParamVars_247);
            if ((parse_tree__parse_type_defn__DupParamVars_247 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((parse_tree__parse_type_defn__NameSpecs_353 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__parse_type_defn__PrgParamVars_160;

                mercury__list__map_3_p_0(parse_tree__parse_type_defn__TypeInfo_140_274, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[0], parse_tree__parse_type_defn__ParamVars_298, &parse_tree__parse_type_defn__PrgParamVars_160);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_351));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_type_defn__PrgParamVars_160));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_353));
                }
            else
            {
              MR_Word parse_tree__parse_type_defn__TypeCtorInfo_150_213;
              MR_Word parse_tree__parse_type_defn__DupParamVarNames_191;
              MR_Word parse_tree__parse_type_defn__Var_192;
              MR_Word parse_tree__parse_type_defn__Var_197;
              MR_Word parse_tree__parse_type_defn__Var_198;
              MR_Word parse_tree__parse_type_defn__Var_202;
              MR_Word parse_tree__parse_type_defn__Var_203;
              MR_Word parse_tree__parse_type_defn__Var_204;
              MR_Word parse_tree__parse_type_defn__Var_205;
              MR_Word parse_tree__parse_type_defn__Var_208;
              MR_Word parse_tree__parse_type_defn__Pieces_209;
              MR_Word parse_tree__parse_type_defn__Spec_210;

              {
                parse_tree__parse_type_defn__Var_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_192, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_192, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_2));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_192, 3) = ((MR_Box) (parse_tree__parse_type_defn__VarSet_8));
              }
              parse_tree__parse_type_defn__DupParamVarNames_191 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_140_274, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_type_defn__Var_192, parse_tree__parse_type_defn__DupParamVars_247);
              parse_tree__parse_type_defn__TypeCtorInfo_150_213 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              parse_tree__parse_type_defn__Var_198 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_type_defn__DupParamVarNames_191);
              parse_tree__parse_type_defn__Var_197 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_150_213, parse_tree__parse_type_defn__Var_198, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[38]));
              parse_tree__parse_type_defn__Pieces_209 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_150_213, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[164]), parse_tree__parse_type_defn__Var_197);
              {
                parse_tree__parse_type_defn__Var_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_205, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_209));
              }
              {
                parse_tree__parse_type_defn__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_204, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_205));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_defn__Var_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_203, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadContext_466));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_203, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_204));
              }
              {
                parse_tree__parse_type_defn__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_202, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_203));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_defn__Spec_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_210, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_202));
              }
              {
                parse_tree__parse_type_defn__Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_208, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_210));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_208, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_353));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_208));
              }
            }
          }
          else
          {
            MR_String parse_tree__parse_type_defn__HeadTermStr_281;
            MR_Word parse_tree__parse_type_defn__Var_284;
            MR_Word parse_tree__parse_type_defn__Var_285;
            MR_Word parse_tree__parse_type_defn__Var_289;
            MR_Word parse_tree__parse_type_defn__Var_290;
            MR_Word parse_tree__parse_type_defn__Var_291;
            MR_Word parse_tree__parse_type_defn__Var_292;
            MR_Word parse_tree__parse_type_defn__Var_295;
            MR_Word parse_tree__parse_type_defn__Pieces_296;
            MR_Word parse_tree__parse_type_defn__Spec_297;

            parse_tree__parse_type_defn__HeadTermStr_281 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_139_519, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__HeadTerm_9);
            {
              parse_tree__parse_type_defn__Var_285 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_285, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_285, 1) = ((MR_Box) (parse_tree__parse_type_defn__HeadTermStr_281));
            }
            {
              parse_tree__parse_type_defn__Var_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_284, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_285));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_284, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])));
            }
            {
              parse_tree__parse_type_defn__Pieces_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_296, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[165])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_296, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_284));
            }
            {
              parse_tree__parse_type_defn__Var_292 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_292, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_296));
            }
            {
              parse_tree__parse_type_defn__Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_291, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_292));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_291, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Var_290 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_290, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadContext_466));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_290, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_291));
            }
            {
              parse_tree__parse_type_defn__Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_289, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_290));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_297 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_297, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_297, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_297, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_289));
            }
            {
              parse_tree__parse_type_defn__Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_295, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_297));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_295, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_353));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_295));
            }
          }
        }
      }
      else
      {
        MR_Word parse_tree__parse_type_defn__Context_529 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__Spec_531;
        MR_Word parse_tree__parse_type_defn__Var_534;
        MR_Word parse_tree__parse_type_defn__Var_535;
        MR_Word parse_tree__parse_type_defn__Var_540;
        MR_Word parse_tree__parse_type_defn__Var_527 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 0)));

        {
          parse_tree__parse_type_defn__Var_535 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_535, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_529));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_535, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[166])));
        }
        {
          parse_tree__parse_type_defn__Var_534 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_534, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_535));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_534, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_531 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_531, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_531, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_531, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_534));
        }
        {
          parse_tree__parse_type_defn__Var_540 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_540, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_531));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_540, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_540));
        }
      }
    else
    {
      MR_Word parse_tree__parse_type_defn__Var_619 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ParseContext_6, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadTerm_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_139_139 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word parse_tree__parse_type_defn__HeadContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 2)));
        MR_Word parse_tree__parse_type_defn__HeadResult_20;
        MR_Word parse_tree__parse_type_defn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 1)));

        parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_139_139, parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__HeadTerm_9, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__Var_619, &parse_tree__parse_type_defn__HeadResult_20);
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadResult_20)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = (MR_Word) parse_tree__parse_type_defn__HeadResult_20;
        else
        {
          MR_Word parse_tree__parse_type_defn__SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadResult_20, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__ArgTerms_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadResult_20, (MR_Integer) 1)));
          MR_Word parse_tree__parse_type_defn__NameSpecs_24;
          MR_Word parse_tree__parse_type_defn__ParamVars_25;

          parse_tree__parse_type_defn__check_user_type_name_3_p_0(parse_tree__parse_type_defn__SymName_22, parse_tree__parse_type_defn__HeadContext_19, &parse_tree__parse_type_defn__NameSpecs_24);
          parse_tree__parse_type_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_139_139, parse_tree__parse_type_defn__ArgTerms_23, &parse_tree__parse_type_defn__ParamVars_25);
          if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__TypeInfo_140_140 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0];
            MR_Word parse_tree__parse_type_defn__ParamsBag_26;
            MR_Word parse_tree__parse_type_defn__DupParamVars_27;

            mercury__bag__from_list_2_p_0(parse_tree__parse_type_defn__TypeInfo_140_140, parse_tree__parse_type_defn__ParamVars_25, &parse_tree__parse_type_defn__ParamsBag_26);
            mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__parse_type_defn__TypeInfo_140_140, parse_tree__parse_type_defn__ParamsBag_26, &parse_tree__parse_type_defn__DupParamVars_27);
            if ((parse_tree__parse_type_defn__DupParamVars_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              if ((parse_tree__parse_type_defn__NameSpecs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__parse_type_defn__PrgParamVars_28;

                mercury__list__map_3_p_0(parse_tree__parse_type_defn__TypeInfo_140_140, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_3[1], parse_tree__parse_type_defn__ParamVars_25, &parse_tree__parse_type_defn__PrgParamVars_28);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_22));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_type_defn__PrgParamVars_28));
                }
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_24));
                }
            else
            {
              MR_Word parse_tree__parse_type_defn__TypeCtorInfo_150_150;
              MR_Word parse_tree__parse_type_defn__DupParamVarNames_33;
              MR_Word parse_tree__parse_type_defn__Var_37;
              MR_Word parse_tree__parse_type_defn__Var_42;
              MR_Word parse_tree__parse_type_defn__Var_43;
              MR_Word parse_tree__parse_type_defn__Var_55;
              MR_Word parse_tree__parse_type_defn__Var_56;
              MR_Word parse_tree__parse_type_defn__Var_57;
              MR_Word parse_tree__parse_type_defn__Var_58;
              MR_Word parse_tree__parse_type_defn__Var_61;
              MR_Word parse_tree__parse_type_defn__Pieces_119;
              MR_Word parse_tree__parse_type_defn__Spec_120;

              {
                parse_tree__parse_type_defn__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_37, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_37, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_5_p_0_4));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_37, 3) = ((MR_Box) (parse_tree__parse_type_defn__VarSet_8));
              }
              parse_tree__parse_type_defn__DupParamVarNames_33 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_140_140, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_type_defn__Var_37, parse_tree__parse_type_defn__DupParamVars_27);
              parse_tree__parse_type_defn__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              parse_tree__parse_type_defn__Var_43 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_type_defn__DupParamVarNames_33);
              parse_tree__parse_type_defn__Var_42 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_150_150, parse_tree__parse_type_defn__Var_43, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[38]));
              parse_tree__parse_type_defn__Pieces_119 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_150_150, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[164]), parse_tree__parse_type_defn__Var_42);
              {
                parse_tree__parse_type_defn__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_58, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_119));
              }
              {
                parse_tree__parse_type_defn__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_57, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_58));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_defn__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_56, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadContext_19));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_56, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_57));
              }
              {
                parse_tree__parse_type_defn__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_55, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_56));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_defn__Spec_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_120, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_55));
              }
              {
                parse_tree__parse_type_defn__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_61, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_120));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_61, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_24));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_61));
              }
            }
          }
          else
          {
            MR_String parse_tree__parse_type_defn__HeadTermStr_34;
            MR_Word parse_tree__parse_type_defn__Var_65;
            MR_Word parse_tree__parse_type_defn__Var_66;
            MR_Word parse_tree__parse_type_defn__Var_75;
            MR_Word parse_tree__parse_type_defn__Var_76;
            MR_Word parse_tree__parse_type_defn__Var_77;
            MR_Word parse_tree__parse_type_defn__Var_78;
            MR_Word parse_tree__parse_type_defn__Var_81;
            MR_Word parse_tree__parse_type_defn__Pieces_125;
            MR_Word parse_tree__parse_type_defn__Spec_126;

            parse_tree__parse_type_defn__HeadTermStr_34 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_139_139, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__HeadTerm_9);
            {
              parse_tree__parse_type_defn__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_66, 1) = ((MR_Box) (parse_tree__parse_type_defn__HeadTermStr_34));
            }
            {
              parse_tree__parse_type_defn__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_65, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_66));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[40])));
            }
            {
              parse_tree__parse_type_defn__Pieces_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[165])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_125, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_65));
            }
            {
              parse_tree__parse_type_defn__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_78, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_125));
            }
            {
              parse_tree__parse_type_defn__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_77, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_78));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_76, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadContext_19));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_76, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_77));
            }
            {
              parse_tree__parse_type_defn__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_75, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_76));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_126, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_75));
            }
            {
              parse_tree__parse_type_defn__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_81, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_126));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_81, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_81));
            }
          }
        }
      }
      else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_137_137;
        MR_Word parse_tree__parse_type_defn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadTerm_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__Pieces_13;
        MR_String parse_tree__parse_type_defn__VarName_15;
        MR_Word parse_tree__parse_type_defn__Spec_16;
        MR_Word parse_tree__parse_type_defn__Var_82;
        MR_Word parse_tree__parse_type_defn__Var_83;
        MR_Word parse_tree__parse_type_defn__Var_86;
        MR_Word parse_tree__parse_type_defn__Var_89;
        MR_Word parse_tree__parse_type_defn__Var_92;
        MR_Word parse_tree__parse_type_defn__Var_95;
        MR_Word parse_tree__parse_type_defn__Var_98;
        MR_Word parse_tree__parse_type_defn__Var_99;
        MR_Word parse_tree__parse_type_defn__Var_111;
        MR_Word parse_tree__parse_type_defn__Var_112;
        MR_Word parse_tree__parse_type_defn__Var_113;
        MR_Word parse_tree__parse_type_defn__Var_114;
        MR_Word parse_tree__parse_type_defn__Var_117;

        parse_tree__parse_type_defn__VarName_15 = mercury__varset__lookup_name_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__Var_11);
        parse_tree__parse_type_defn__TypeCtorInfo_137_137 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        parse_tree__parse_type_defn__Var_82 = mercury__cord__list_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_137_137, parse_tree__parse_type_defn__Var_619);
        {
          parse_tree__parse_type_defn__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_99, 1) = ((MR_Box) (parse_tree__parse_type_defn__VarName_15));
        }
        {
          parse_tree__parse_type_defn__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_98, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_99));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[173])));
        }
        {
          parse_tree__parse_type_defn__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[171])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_95, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_98));
        }
        {
          parse_tree__parse_type_defn__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[170])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_92, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_95));
        }
        {
          parse_tree__parse_type_defn__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[169])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_89, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_92));
        }
        {
          parse_tree__parse_type_defn__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[168])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_89));
        }
        {
          parse_tree__parse_type_defn__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[167])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_83, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_86));
        }
        parse_tree__parse_type_defn__Pieces_13 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_137_137, parse_tree__parse_type_defn__Var_82, parse_tree__parse_type_defn__Var_83);
        {
          parse_tree__parse_type_defn__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_114, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_13));
        }
        {
          parse_tree__parse_type_defn__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_113, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_114));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_112, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_112, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_113));
        }
        {
          parse_tree__parse_type_defn__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_111, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_112));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_111));
        }
        {
          parse_tree__parse_type_defn__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_117, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_16));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_117));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word parse_tree__parse_type_defn__SymName_4,
  MR_Word parse_tree__parse_type_defn__Context_5,
  MR_Word * parse_tree__parse_type_defn__NameSpecs_6)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_String parse_tree__parse_type_defn__Name_7;

    parse_tree__parse_type_defn__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_type_defn__SymName_4);
    parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_name__is_known_type_name_1_p_0(parse_tree__parse_type_defn__Name_7);
    if (parse_tree__parse_type_defn__succeeded)
    {
      MR_Word parse_tree__parse_type_defn__NamePieces_8;
      MR_Word parse_tree__parse_type_defn__NameSpec_9;
      MR_Word parse_tree__parse_type_defn__Var_12;
      MR_Word parse_tree__parse_type_defn__Var_13;
      MR_Word parse_tree__parse_type_defn__Var_22;
      MR_Word parse_tree__parse_type_defn__Var_23;
      MR_Word parse_tree__parse_type_defn__Var_24;
      MR_Word parse_tree__parse_type_defn__Var_25;

      {
        parse_tree__parse_type_defn__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__Var_13, 1) = ((MR_Box) (parse_tree__parse_type_defn__Name_7));
      }
      {
        parse_tree__parse_type_defn__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_12, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_13));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[158])));
      }
      {
        parse_tree__parse_type_defn__NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[161])));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NamePieces_8, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_12));
      }
      {
        parse_tree__parse_type_defn__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__NamePieces_8));
      }
      {
        parse_tree__parse_type_defn__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_25));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_5));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Var_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__Var_24));
      }
      {
        parse_tree__parse_type_defn__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__Var_23));
        MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__parse_type_defn__NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__NameSpec_9, 2) = ((MR_Box) (parse_tree__parse_type_defn__Var_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_type_defn__NameSpecs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__NameSpec_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      *parse_tree__parse_type_defn__NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0_10001(
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn____Unify____type_defn_head_parse_context_0_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_2));
    return parse_tree__parse_type_defn__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0_10001(
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_2,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_type_defn__conv0_HeadVar__1_1;

    parse_tree__parse_type_defn____Compare____type_defn_head_parse_context_0_0(&parse_tree__parse_type_defn__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_3));
    *parse_tree__parse_type_defn__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_type_defn__conv0_HeadVar__1_1));
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

/* :- end_module parse_tree.parse_type_defn. */
