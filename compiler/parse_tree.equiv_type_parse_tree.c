/*
** Automatically generated from `equiv_type_parse_tree.m'
** by the Mercury compiler,
** version rotd-2026-08-02
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


// :- module parse_tree.equiv_type_parse_tree.
// :- implementation.

/*
INIT mercury__parse_tree__equiv_type_parse_tree__init
ENDINIT
*/

#include "parse_tree.equiv_type_parse_tree.mih"


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
#include "set_tree234.mih"
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
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type_parse_tree__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type_parse_tree__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type_parse_tree__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0;

static const MR_PseudoTypeInfo parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__field_types_equiv_params_0_0[3];

static const MR_ConstString parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__field_names_equiv_params_0_0[3];

static const MR_DuFunctorDesc parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_functor_desc_equiv_params_0_0;

static const MR_DuFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_stag_ordered_equiv_params_0_0[1];

static const MR_DuPtagLayout parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_ptag_ordered_equiv_params_0[1];

static const MR_DuFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_name_ordered_equiv_params_0[1];

static const MR_Integer parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__functor_number_map_equiv_params_0[1];

static const MR_EnumFunctorDesc parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_0;

static const MR_EnumFunctorDesc parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_ordinal_ordered_pred_or_func_decl_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_name_ordered_pred_or_func_decl_type_0[2];

static const MR_Integer parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__functor_number_map_pred_or_func_decl_type_0[2];

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__check_and_maybe_add_extra_types_and_modes__1839__1_2_p_0(
  MR_Word Types1_23,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__check_and_maybe_add_extra_types_and_modes__1859__1_2_p_0(
  MR_Word TypesAndModes1_29,
  MR_Word HeadVar__2_70);

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____pred_or_func_decl_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____pred_or_func_decl_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____equiv_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____equiv_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_and_mode_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word TypeAndMode0_13,
  MR_Word * TypeAndMode_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_unit_selector_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word MaybeRecord_11,
  MR_Word TVarSet_12,
  MR_Word Sel0_13,
  MR_Word * Sel_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_23,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_structure_sharing_pair_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_structure_sharing_pair_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word MaybeRecord_11,
  MR_Word TVarSet_12,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_19,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_type_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word ConstraintArg0_13,
  MR_Word * ConstraintArg_14,
  MR_Word STATE_VARIABLE_TVarSet_0_25,
  MR_Word * STATE_VARIABLE_TVarSet_26,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_27,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_28,
  MR_Word STATE_VARIABLE_UsedModules_0_29,
  MR_Word * STATE_VARIABLE_UsedModules_30);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_subst_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Subst0_13,
  MR_Word * Subst_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_class_decl_10_p_0(
  MR_Word Params_11,
  MR_Word MaybeRecord_12,
  MR_Word Decl0_13,
  MR_Word * Decl_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_49,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_50,
  MR_Word STATE_VARIABLE_UsedModules_0_51,
  MR_Word * STATE_VARIABLE_UsedModules_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_repn_info_10_p_0(
  MR_Word Params_11,
  MR_Word MaybeRecord_12,
  MR_Word TypeRepnInfo0_13,
  MR_Word * TypeRepnInfo_14,
  MR_Word STATE_VARIABLE_RecompInfo_0_53,
  MR_Word * STATE_VARIABLE_RecompInfo_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58);

static MR_Word MR_CALL 
parse_tree__equiv_type_parse_tree__report_circular_eqv_type_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word Context_5);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecordInt_13,
  MR_Word MaybeRecordImp_14,
  MR_Word CheckedDefn0_15,
  MR_Word * CheckedDefn_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_58,
  MR_Word * STATE_VARIABLE_RecompInfo_59,
  MR_Word STATE_VARIABLE_UsedModules_0_60,
  MR_Word * STATE_VARIABLE_UsedModules_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho8_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho7_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho6_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho5_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_maybe__ho4_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word MaybeItem0_15,
  MR_Word * MaybeItem_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__624__1__ho31_10_p_0(
  MR_Word HeadVar__2_127,
  MR_Word HeadVar__3_128,
  MR_Word HeadVar__4_129,
  MR_Word * HeadVar__5_130,
  MR_Word HeadVar__6_131,
  MR_Word * HeadVar__7_132,
  MR_Word HeadVar__8_133,
  MR_Word * HeadVar__9_134,
  MR_Word * HeadVar__10_135);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_maybe__ho3_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word MaybeItem0_15,
  MR_Word * MaybeItem_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__627__1__ho32_10_p_0(
  MR_Word HeadVar__2_151,
  MR_Word HeadVar__3_152,
  MR_Word HeadVar__4_153,
  MR_Word * HeadVar__5_154,
  MR_Word HeadVar__6_155,
  MR_Word * HeadVar__7_156,
  MR_Word HeadVar__8_157,
  MR_Word * HeadVar__9_158,
  MR_Word * HeadVar__10_159);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho2_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho33_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__677__1__ho36_10_p_0(
  MR_Word HeadVar__2_234,
  MR_Word HeadVar__3_235,
  MR_Word HeadVar__4_236,
  MR_Word * HeadVar__5_237,
  MR_Word HeadVar__6_238,
  MR_Word * HeadVar__7_239,
  MR_Word HeadVar__8_240,
  MR_Word * HeadVar__9_241,
  MR_Word * HeadVar__10_242);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho1_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho34_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__680__1__ho35_10_p_0(
  MR_Word HeadVar__2_258,
  MR_Word HeadVar__3_259,
  MR_Word HeadVar__4_260,
  MR_Word * HeadVar__5_261,
  MR_Word HeadVar__6_262,
  MR_Word * HeadVar__7_263,
  MR_Word HeadVar__8_264,
  MR_Word * HeadVar__9_265,
  MR_Word * HeadVar__10_266);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_trans_opt_9_p_0(
  MR_Word _Params_10,
  MR_Word ParseTreeTransOpt_11,
  MR_Word * ParseTreeTransOpt_3,
  MR_Word RecompInfo_12,
  MR_Word * RecompInfo_5,
  MR_Word UsedModules_13,
  MR_Word * UsedModules_7,
  MR_Word Specs_14,
  MR_Word * Specs_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word ParseTreeTransOpt_11,
  MR_Word * ParseTreeTransOpt_3,
  MR_Word RecompInfo_12,
  MR_Word * RecompInfo_5,
  MR_Word UsedModules_13,
  MR_Word * UsedModules_7,
  MR_Word Specs_14,
  MR_Word * Specs_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_plain_opt_9_p_0(
  MR_Word Params_10,
  MR_Word OrigParseTreePlainOpt_11,
  MR_Word * ParseTreePlainOpt_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_51,
  MR_Word * STATE_VARIABLE_RecompInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho25_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__557__1__ho38_10_p_0(
  MR_Word HeadVar__2_79,
  MR_Word HeadVar__3_80,
  MR_Word HeadVar__4_81,
  MR_Word * HeadVar__5_82,
  MR_Word HeadVar__6_83,
  MR_Word * HeadVar__7_84,
  MR_Word HeadVar__8_85,
  MR_Word * HeadVar__9_86,
  MR_Word * HeadVar__10_87);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtor_16,
  MR_Word Context_17,
  MR_Word TypeDefn0_18,
  MR_Word * TypeDefn_19,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_36,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_23);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_solver_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtor_16,
  MR_Word Context_17,
  MR_Word DetailsSolver0_18,
  MR_Word * DetailsSolver_19,
  MR_Word STATE_VARIABLE_TVarSet_0_40,
  MR_Word * STATE_VARIABLE_TVarSet_41,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_42,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * Specs_23);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_constraint_store_8_p_0(
  MR_Word Params_1,
  MR_Word MaybeRecord_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_5,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_6,
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_eqv_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtor_16,
  MR_Word Context_17,
  MR_Word DetailsEqv0_18,
  MR_Word * DetailsEqv_19,
  MR_Word STATE_VARIABLE_TVarSet_0_32,
  MR_Word * STATE_VARIABLE_TVarSet_33,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_34,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_23);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho9_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho30_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0(
  MR_Word Params_10,
  MR_Word IntForOptSpec0_11,
  MR_Word * IntForOptSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0(
  MR_Word Params_10,
  MR_Word OrigParseTreeInt1_11,
  MR_Word * ParseTreeInt1_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_47,
  MR_Word * STATE_VARIABLE_RecompInfo_48,
  MR_Word STATE_VARIABLE_UsedModules_0_49,
  MR_Word * STATE_VARIABLE_UsedModules_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0(
  MR_Word Params_10,
  MR_Word IndirectIntSpec0_11,
  MR_Word * IndirectIntSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_19,
  MR_Word * STATE_VARIABLE_RecompInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0(
  MR_Word Params_10,
  MR_Word DirectIntSpec0_11,
  MR_Word * DirectIntSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_19,
  MR_Word * STATE_VARIABLE_RecompInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho16_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho23_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_abstract_typeclass_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word TypeClassInfo0_12,
  MR_Word * TypeClassInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_16);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_ancestor_int_spec_9_p_0(
  MR_Word Params_10,
  MR_Word AncestorIntSpec0_11,
  MR_Word * AncestorIntSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_19,
  MR_Word * STATE_VARIABLE_RecompInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int0_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int0_9_p_0(
  MR_Word Params_10,
  MR_Word OrigParseTreeInt0_11,
  MR_Word * ParseTreeInt0_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_55,
  MR_Word * STATE_VARIABLE_RecompInfo_56,
  MR_Word STATE_VARIABLE_UsedModules_0_57,
  MR_Word * STATE_VARIABLE_UsedModules_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho15_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho24_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_abstract_instance_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word InstanceInfo0_12,
  MR_Word * InstanceInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_38,
  MR_Word * STATE_VARIABLE_RecompInfo_39,
  MR_Word STATE_VARIABLE_UsedModules_0_40,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_event_specs_5_p_0(
  MR_Word TypeEqvMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_UsedModules_0_4,
  MR_Word * STATE_VARIABLE_UsedModules_5);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_event_attrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_UsedModules_0_4,
  MR_Word * STATE_VARIABLE_UsedModules_5);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_module_src_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_module_src_9_p_0(
  MR_Word Params_10,
  MR_Word ParseTreeModuleSrc0_11,
  MR_Word * ParseTreeModuleSrc_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_72,
  MR_Word * STATE_VARIABLE_RecompInfo_73,
  MR_Word STATE_VARIABLE_UsedModules_0_74,
  MR_Word * STATE_VARIABLE_UsedModules_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho19_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho20_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_foreign_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_foreign_proc_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word FPInfo0_12,
  MR_Word * FPInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_44,
  MR_Word * STATE_VARIABLE_RecompInfo_45,
  MR_Word STATE_VARIABLE_UsedModules_0_46,
  MR_Word * STATE_VARIABLE_UsedModules_47,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho18_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho21_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_mutable_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word MutableInfo0_12,
  MR_Word * MutableInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_22,
  MR_Word * STATE_VARIABLE_RecompInfo_23,
  MR_Word STATE_VARIABLE_UsedModules_0_24,
  MR_Word * STATE_VARIABLE_UsedModules_25,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho22_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word DeclPragma0_12,
  MR_Word * DeclPragma_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word * Specs_16);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_constraint_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_constraint_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_type_spec_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word TypeSpecInfo0_12,
  MR_Word * TypeSpecInfo_13,
  MR_Word RecompInfo_14,
  MR_Word * RecompInfo_6,
  MR_Word STATE_VARIABLE_UsedModules_0_33,
  MR_Word * STATE_VARIABLE_UsedModules_34,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_tvar_substs_12_p_0(
  MR_Word TypeEqvMap_13,
  MR_Word MaybeRecord_14,
  MR_Word Subst0_15,
  MR_Word * Subst_16,
  MR_Word TailVarsTypes0_17,
  MR_Word * TailVarsTypes_18,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_32,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho13_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_typeclass_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_typeclass_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word TypeClassInfo0_12,
  MR_Word * TypeClassInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_38,
  MR_Word * STATE_VARIABLE_RecompInfo_39,
  MR_Word STATE_VARIABLE_UsedModules_0_40,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word * Specs_16);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho12_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho27_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_instance_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word InstanceInfo0_12,
  MR_Word * InstanceInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word STATE_VARIABLE_UsedModules_0_42,
  MR_Word * STATE_VARIABLE_UsedModules_43,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho28_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_decl_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word PredDeclInfo0_12,
  MR_Word * PredDeclInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_45,
  MR_Word * STATE_VARIABLE_RecompInfo_46,
  MR_Word STATE_VARIABLE_UsedModules_0_47,
  MR_Word * STATE_VARIABLE_UsedModules_48,
  MR_Word * Specs_16);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0(
  MR_Word Params_23,
  MR_Word MaybeRecord_24,
  MR_Word PredSymName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word ClassContext0_28,
  MR_Word * ClassContext_29,
  MR_Word TypesAndMaybeModes0_30,
  MR_Word * TypesAndMaybeModes_31,
  MR_Word STATE_VARIABLE_TVarSet_0_57,
  MR_Word * STATE_VARIABLE_TVarSet_58,
  MR_Word MaybeWithType0_33,
  MR_Word * MaybeWithType_34,
  MR_Word MaybeWithInst0_35,
  MR_Word * MaybeWithInst_36,
  MR_Word STATE_VARIABLE_MaybeDetism_0_59,
  MR_Word * STATE_VARIABLE_MaybeDetism_60,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_61,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_62,
  MR_Word STATE_VARIABLE_UsedModules_0_63,
  MR_Word * STATE_VARIABLE_UsedModules_64,
  MR_Word * STATE_VARIABLE_Specs_65);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_with_type_14_p_0(
  MR_Word TypeEqvMap_15,
  MR_Word MaybeRecord_16,
  MR_Word PredOrFunc_17,
  MR_Word PredSymName_18,
  MR_Word Context_19,
  MR_Word MaybeWithType0_20,
  MR_Word * ExtraTypes_21,
  MR_Word STATE_VARIABLE_TVarSet_0_33,
  MR_Word * STATE_VARIABLE_TVarSet_34,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_35,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_36,
  MR_Word STATE_VARIABLE_UsedModules_0_37,
  MR_Word * STATE_VARIABLE_UsedModules_38,
  MR_Word * Specs_25);

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word PredSymName_11,
  MR_Word Context_12,
  MR_Word ExtraTypes_13,
  MR_Word ExtraModes_14,
  MR_Word TypesAndMaybeModes1_15,
  MR_Word * TypesAndMaybeModes_16,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__try_to_pair_extra_types_and_modes_6_p_0(
  MR_Word PredOrFunc_7,
  MR_Word PredSymName_8,
  MR_Word Context_9,
  MR_Word ExtraTypes_10,
  MR_Word ExtraModes_11,
  MR_Word * MaybeExtraTypesAndModes_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__pair_extra_types_and_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho29_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_mode_decl_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word Info0_12,
  MR_Word * Info_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * Specs_16);

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_with_inst_18_p_0(
  MR_Word Params_19,
  MR_Word MaybeRecord_20,
  MR_Word PredSymName_21,
  MR_Word PredFormArity_22,
  MR_Word Context_23,
  MR_Word DeclType_24,
  MR_Word MaybePredOrFunc0_25,
  MR_Word * MaybePredOrFunc_26,
  MR_Word MaybeWithInst0_27,
  MR_Word * MaybeWithInst_28,
  MR_Word * ExtraModes_29,
  MR_Word STATE_VARIABLE_MaybeDetism_0_53,
  MR_Word * STATE_VARIABLE_MaybeDetism_54,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_55,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_56,
  MR_Word STATE_VARIABLE_UsedModules_0_57,
  MR_Word * STATE_VARIABLE_UsedModules_58,
  MR_Word * Specs_33);

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____equiv_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____equiv_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____pred_or_func_decl_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____pred_or_func_decl_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_1[90][2];

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_4[2][5];

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_5[6][13];

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_6[2][14];

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_7[8][12];




static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_1[90][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: circular type expansion"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the representation of solver type"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the declaration"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a \140with_inst\140 annotation,"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the declaration"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not specify"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the mode of any of the other arguments."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "accompanied by a \140with_type\140 annotation."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the \140with_inst\140 annotation must be"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is missing."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this \140with_type\140 annotation"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "accompanied by a \140with_inst\140 annotation."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[25])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the \140with_type\140 annotation must be"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the mode of each argument, so"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the declaration specifies"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this \140with_inst\140 annotation"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[31])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotations are"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "incompatible,"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because they specify"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the declaration of"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be a"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected the type after"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "higher order"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type,"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is not."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[60])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected the inst after"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inst,"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: equivalence type"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular."))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_5[6][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_6[2][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_parse_tree_scalar_common_7[8][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type_parse_tree__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type_parse_tree__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type_parse_tree__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type_parse_tree__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type_parse_tree__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__field_types_equiv_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type_parse_tree__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0),
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type_parse_tree__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0)
};

static const MR_ConstString parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__field_names_equiv_params_0_0[3] = {
  (MR_String) "ep_module_name",
  (MR_String) "ep_type_eqv_map",
  (MR_String) "ep_inst_eqv_map"
};

static const MR_DuFunctorDesc parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_functor_desc_equiv_params_0_0 = {
  (MR_String) "equiv_params",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__field_types_equiv_params_0_0,
  parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__field_names_equiv_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_stag_ordered_equiv_params_0_0[1] = { &parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_functor_desc_equiv_params_0_0 };

static const MR_DuPtagLayout parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_ptag_ordered_equiv_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_stag_ordered_equiv_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_name_ordered_equiv_params_0[1] = { &parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_functor_desc_equiv_params_0_0 };

static const MR_Integer parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__functor_number_map_equiv_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type_parse_tree____Unify____equiv_params_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type_parse_tree____Compare____equiv_params_0_0_10001)),
  (MR_String) "parse_tree.equiv_type_parse_tree",
  (MR_String) "equiv_params",
  { parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_name_ordered_equiv_params_0 },
  { parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__du_ptag_ordered_equiv_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__functor_number_map_equiv_params_0,

};

static const MR_EnumFunctorDesc parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_and_mode_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_only_decl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_ordinal_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_functor_desc_pred_or_func_decl_type_0_0
};

static const MR_Integer parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_pred_or_func_decl_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type_parse_tree____Unify____pred_or_func_decl_type_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type_parse_tree____Compare____pred_or_func_decl_type_0_0_10001)),
  (MR_String) "parse_tree.equiv_type_parse_tree",
  (MR_String) "pred_or_func_decl_type",
  { parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_name_ordered_pred_or_func_decl_type_0 },
  { parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__enum_ordinal_ordered_pred_or_func_decl_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__functor_number_map_pred_or_func_decl_type_0,

};

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__check_and_maybe_add_extra_types_and_modes__1839__1_2_p_0(
  MR_Word Types1_23,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[7]), ((MR_Box) (Types1_23)), ((MR_Box) (HeadVar__2_38)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__check_and_maybe_add_extra_types_and_modes__1859__1_2_p_0(
  MR_Word TypesAndModes1_29,
  MR_Word HeadVar__2_70)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[8]), ((MR_Box) (TypesAndModes1_29)), ((MR_Box) (HeadVar__2_70)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____pred_or_func_decl_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____pred_or_func_decl_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____equiv_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____equiv_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_and_mode_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word TypeAndMode0_13,
  MR_Word * TypeAndMode_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word Type0_18 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_13, 0))));
  MR_Word Mode_19 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_13, 1))));
  MR_Word Type_20;
  MR_Word Var_21;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_11, MaybeRecord_12, Type0_18, &Type_20, &Var_21, STATE_VARIABLE_TVarSet_0_22, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_ItemRecompDeps_0_24, STATE_VARIABLE_ItemRecompDeps_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeAndMode_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Type_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Mode_19));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_unit_selector_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word MaybeRecord_11,
  MR_Word TVarSet_12,
  MR_Word Sel0_13,
  MR_Word * Sel_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_23,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26)
{
  if (((MR_tag((MR_Word) Sel0_13)) == (MR_Integer) 0))
  {
    *Sel_14 = Sel0_13;
    *STATE_VARIABLE_ItemRecompDeps_24 = STATE_VARIABLE_ItemRecompDeps_0_23;
    *STATE_VARIABLE_UsedModules_26 = STATE_VARIABLE_UsedModules_0_25;
  }
  else
  {
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(1, Sel0_13, 0))));
    MR_Word Type_20;
    MR_Word Var_21;
    MR_Word Var_22;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_10, MaybeRecord_11, Type0_19, &Type_20, &Var_21, TVarSet_12, &Var_22, STATE_VARIABLE_ItemRecompDeps_0_23, STATE_VARIABLE_ItemRecompDeps_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Sel_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_20));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_structure_sharing_pair_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Sel_14;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_24;
  MR_Word conv0_STATE_VARIABLE_UsedModules_26;

  parse_tree__equiv_type_parse_tree__replace_in_unit_selector_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Sel_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ItemRecompDeps_24, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_2 = ((MR_Box) (conv2_Sel_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_24));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_structure_sharing_pair_9_p_0(
  MR_Word TypeEqvMap_10,
  MR_Word MaybeRecord_11,
  MR_Word TVarSet_12,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_19,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22)
{
  MR_Word SSA0_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word SSB0_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word SSA_15;
  MR_Word SSB_16;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_23;
  MR_Word STATE_VARIABLE_UsedModules_1_24;
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, SSA0_13, 0))));
  MR_Word Sel0_26 = ((MR_Word) ((MR_hl_field(0, SSA0_13, 1))));
  MR_Word Sel_27;
  MR_Word Var_28;
  MR_Word Var_32;
  MR_Word Sel0_33;
  MR_Word Sel_34;
  MR_Box conv4_STATE_VARIABLE_ItemRecompDeps_1_23;
  MR_Box conv3_STATE_VARIABLE_UsedModules_1_24;
  MR_Box conv6_STATE_VARIABLE_ItemRecompDeps_20;
  MR_Box conv5_STATE_VARIABLE_UsedModules_22;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[7]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_structure_sharing_pair_9_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeEqvMap_10));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (TVarSet_12));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_28, Sel0_26, &Sel_27, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_19)), &conv4_STATE_VARIABLE_ItemRecompDeps_1_23, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv3_STATE_VARIABLE_UsedModules_1_24);
  STATE_VARIABLE_ItemRecompDeps_1_23 = ((MR_Word) (conv4_STATE_VARIABLE_ItemRecompDeps_1_23));
  STATE_VARIABLE_UsedModules_1_24 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_1_24));
  {
    SSA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SSA_15, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, SSA_15, 1) = ((MR_Box) (Sel_27));
  }
  Var_32 = ((MR_Word) ((MR_hl_field(0, SSB0_14, 0))));
  Sel0_33 = ((MR_Word) ((MR_hl_field(0, SSB0_14, 1))));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_28, Sel0_33, &Sel_34, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_23)), &conv6_STATE_VARIABLE_ItemRecompDeps_20, ((MR_Box) (STATE_VARIABLE_UsedModules_1_24)), &conv5_STATE_VARIABLE_UsedModules_22);
  *STATE_VARIABLE_ItemRecompDeps_20 = ((MR_Word) (conv6_STATE_VARIABLE_ItemRecompDeps_20));
  *STATE_VARIABLE_UsedModules_22 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_22));
  {
    SSB_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SSB_16, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, SSB_16, 1) = ((MR_Box) (Sel_34));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SSA_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (SSB_16));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_type_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word ConstraintArg0_13,
  MR_Word * ConstraintArg_14,
  MR_Word STATE_VARIABLE_TVarSet_0_25,
  MR_Word * STATE_VARIABLE_TVarSet_26,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_27,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_28,
  MR_Word STATE_VARIABLE_UsedModules_0_29,
  MR_Word * STATE_VARIABLE_UsedModules_30)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) ConstraintArg0_13)) == (MR_Integer) 1))
  {
    MR_Word GroundType0_20 = ((MR_Word) ((MR_hl_field(1, ConstraintArg0_13, 0))));
    MR_Word Type0_21 = (MR_Word) (GroundType0_20);
    MR_Word Type_22;
    MR_Word Var_23;
    MR_Word GroundType_24;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_11, MaybeRecord_12, Type0_21, &Type_22, &Var_23, STATE_VARIABLE_TVarSet_0_25, STATE_VARIABLE_TVarSet_26, STATE_VARIABLE_ItemRecompDeps_0_27, STATE_VARIABLE_ItemRecompDeps_28, STATE_VARIABLE_UsedModules_0_29, STATE_VARIABLE_UsedModules_30);
    succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_22, &GroundType_24);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ConstraintArg_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (GroundType_24));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.replace_in_var_or_ground_type_location\'/10", (MR_String) "expanded ground type is not ground");
        return;
      }
  }
  else
  {
    *ConstraintArg_14 = ConstraintArg0_13;
    *STATE_VARIABLE_TVarSet_26 = STATE_VARIABLE_TVarSet_0_25;
    *STATE_VARIABLE_ItemRecompDeps_28 = STATE_VARIABLE_ItemRecompDeps_0_27;
    *STATE_VARIABLE_UsedModules_30 = STATE_VARIABLE_UsedModules_0_29;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_subst_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Subst0_13,
  MR_Word * Subst_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word HeadSubst0_18 = ((MR_Word) ((MR_hl_field(0, Subst0_13, 0))));
  MR_Word TailSubsts0_19 = ((MR_Word) ((MR_hl_field(0, Subst0_13, 1))));
  MR_Word HeadSubst_20;
  MR_Word TailSubsts_21;

  parse_tree__equiv_type_parse_tree__replace_in_tvar_substs_12_p_0(TypeEqvMap_11, MaybeRecord_12, HeadSubst0_18, &HeadSubst_20, TailSubsts0_19, &TailSubsts_21, STATE_VARIABLE_TVarSet_0_22, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_ItemRecompDeps_0_24, STATE_VARIABLE_ItemRecompDeps_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Subst_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadSubst_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailSubsts_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_class_decl_10_p_0(
  MR_Word Params_11,
  MR_Word MaybeRecord_12,
  MR_Word Decl0_13,
  MR_Word * Decl_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_49,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_50,
  MR_Word STATE_VARIABLE_UsedModules_0_51,
  MR_Word * STATE_VARIABLE_UsedModules_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  if (((MR_tag((MR_Word) Decl0_13)) == (MR_Integer) 1))
  {
    MR_Word ModeInfo0_39 = (MR_Word) (MR_body((MR_Word) (Decl0_13), (MR_Integer) 1));
    MR_Word MaybePredOrFunc0_40 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 1))));
    MR_Word Modes0_41 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 2))));
    MR_Word PredFormArity_42;
    MR_Word MaybePredOrFunc_43;
    MR_Word ExtraModes_44;
    MR_Word Modes_45;
    MR_Word ModeInfo_48;
    MR_Word PredSymName_62 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 0))));
    MR_Word WithInst0_63 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 3))));
    MR_Word MaybeDetism0_64 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 4))));
    MR_Word InstVarSet_65 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 5))));
    MR_Word Context_66 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_39, 6))));
    MR_Word WithInst_67;
    MR_Word MaybeDetism_68;
    MR_Word NewSpecs_69;

    PredFormArity_42 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_41);
    parse_tree__equiv_type_parse_tree__replace_in_with_inst_18_p_0(Params_11, MaybeRecord_12, PredSymName_62, PredFormArity_42, Context_66, (MR_Integer) 1, MaybePredOrFunc0_40, &MaybePredOrFunc_43, WithInst0_63, &WithInst_67, &ExtraModes_44, MaybeDetism0_64, &MaybeDetism_68, STATE_VARIABLE_ItemRecompDeps_0_49, STATE_VARIABLE_ItemRecompDeps_50, STATE_VARIABLE_UsedModules_0_51, STATE_VARIABLE_UsedModules_52, &NewSpecs_69);
    if ((ExtraModes_44 == (MR_Word) ((MR_Unsigned) 0U)))
      Modes_45 = Modes0_41;
    else
      Modes_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_41, ExtraModes_44);
    *STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), NewSpecs_69, STATE_VARIABLE_Specs_0_53);
    {
      ModeInfo_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeInfo_48, 0) = ((MR_Box) (PredSymName_62));
      MR_hl_field(0, ModeInfo_48, 1) = ((MR_Box) (MaybePredOrFunc_43));
      MR_hl_field(0, ModeInfo_48, 2) = ((MR_Box) (Modes_45));
      MR_hl_field(0, ModeInfo_48, 3) = ((MR_Box) (WithInst_67));
      MR_hl_field(0, ModeInfo_48, 4) = ((MR_Box) (MaybeDetism_68));
      MR_hl_field(0, ModeInfo_48, 5) = ((MR_Box) (InstVarSet_65));
      MR_hl_field(0, ModeInfo_48, 6) = ((MR_Box) (Context_66));
    }
    *Decl_14 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_48)));
  }
  else
  {
    MR_Word PredOrFuncInfo0_18 = (MR_Word) ((MR_Word) (Decl0_13));
    MR_Word PredSymName_19 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 0))));
    MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_18, 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_21 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 2))));
    MR_Word WithType0_22 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 3))));
    MR_Word WithInst0_23 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 4))));
    MR_Word MaybeDetism0_24 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 5))));
    MR_Word TVarSet0_25 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 6))));
    MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 7))));
    MR_Word ExistQVars_27 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 8))));
    MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_18, 9))) & (MR_Integer) 3);
    MR_Word ClassContext0_29 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 10))));
    MR_Word Context_30 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_18, 11))));
    MR_Word ClassContext_31;
    MR_Word TypesAndModes_32;
    MR_Word TVarSet_33;
    MR_Word WithType_34;
    MR_Word WithInst_35;
    MR_Word MaybeDetism_36;
    MR_Word NewSpecs_37;
    MR_Word PredOrFuncInfo_38;

    parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0(Params_11, MaybeRecord_12, PredSymName_19, PredOrFunc_20, Context_30, ClassContext0_29, &ClassContext_31, TypesAndModes0_21, &TypesAndModes_32, TVarSet0_25, &TVarSet_33, WithType0_22, &WithType_34, WithInst0_23, &WithInst_35, MaybeDetism0_24, &MaybeDetism_36, STATE_VARIABLE_ItemRecompDeps_0_49, STATE_VARIABLE_ItemRecompDeps_50, STATE_VARIABLE_UsedModules_0_51, STATE_VARIABLE_UsedModules_52, &NewSpecs_37);
    *STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), NewSpecs_37, STATE_VARIABLE_Specs_0_53);
    {
      PredOrFuncInfo_38 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredOrFuncInfo_38, 0) = ((MR_Box) (PredSymName_19));
      MR_hl_field(0, PredOrFuncInfo_38, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
      MR_hl_field(0, PredOrFuncInfo_38, 2) = ((MR_Box) (TypesAndModes_32));
      MR_hl_field(0, PredOrFuncInfo_38, 3) = ((MR_Box) (WithType_34));
      MR_hl_field(0, PredOrFuncInfo_38, 4) = ((MR_Box) (WithInst_35));
      MR_hl_field(0, PredOrFuncInfo_38, 5) = ((MR_Box) (MaybeDetism_36));
      MR_hl_field(0, PredOrFuncInfo_38, 6) = ((MR_Box) (TVarSet_33));
      MR_hl_field(0, PredOrFuncInfo_38, 7) = ((MR_Box) (InstVarSet_26));
      MR_hl_field(0, PredOrFuncInfo_38, 8) = ((MR_Box) (ExistQVars_27));
      MR_hl_field(0, PredOrFuncInfo_38, 9) = (MR_Box) ((MR_Unsigned) (Purity_28));
      MR_hl_field(0, PredOrFuncInfo_38, 10) = ((MR_Box) (ClassContext_31));
      MR_hl_field(0, PredOrFuncInfo_38, 11) = ((MR_Box) (Context_30));
    }
    *Decl_14 = (MR_Word) ((MR_Word) (PredOrFuncInfo_38));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_repn_info_10_p_0(
  MR_Word Params_11,
  MR_Word MaybeRecord_12,
  MR_Word TypeRepnInfo0_13,
  MR_Word * TypeRepnInfo_14,
  MR_Word STATE_VARIABLE_RecompInfo_0_53,
  MR_Word * STATE_VARIABLE_RecompInfo_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58)
{
  MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_13, 0))));
  MR_Word ArgTypeVars_19 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_13, 1))));
  MR_Word TypeRepn0_20 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_13, 2))));
  MR_Word TVarSet0_21 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_13, 3))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_13, 4))));
  MR_Word SeqNum_23 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_13, 5))));
  MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(0, Params_11, 0))));
  MR_Integer Arity_25;
  MR_Word ItemName_26;
  MR_Word ItemId_27;
  MR_Word ItemRecompDeps0_28;
  MR_Word TypeEqvMap_29;
  MR_Word TVarSet_35;
  MR_Word ItemRecompDeps_36;
  MR_Word TypeRepn_40;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_19, &Arity_25);
  {
    ItemName_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_26, 0) = ((MR_Box) (SymName_18));
    MR_hl_field(0, ItemName_26, 1) = ((MR_Box) (Arity_25));
  }
  {
    ItemId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_27, 1) = ((MR_Box) (ItemName_26));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_24, ItemId_27, STATE_VARIABLE_RecompInfo_0_53, &ItemRecompDeps0_28);
  TypeEqvMap_29 = ((MR_Word) ((MR_hl_field(0, Params_11, 1))));
  switch (MR_tag((MR_Word) TypeRepn0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        TypeRepn_40 = TypeRepn0_20;
        TVarSet_35 = TVarSet0_21;
        ItemRecompDeps_36 = ItemRecompDeps0_28;
        *STATE_VARIABLE_UsedModules_56 = STATE_VARIABLE_UsedModules_0_55;
        *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type0_30 = ((MR_Word) ((MR_hl_field(1, TypeRepn0_20, 0))));
        MR_Word TypeCtor_31;
        MR_Word Type_32;
        MR_Word Circ_34;
        MR_Word CircTypes_37;
        MR_Word Var_60;
        MR_Word Var_33;

        {
          TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_31, 0) = ((MR_Box) (SymName_18));
          MR_hl_field(0, TypeCtor_31, 1) = ((MR_Box) (Arity_25));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (TypeCtor_31));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_29, MaybeRecord_12, Var_60, Type0_30, &Type_32, &Var_33, &Circ_34, TVarSet0_21, &TVarSet_35, ItemRecompDeps0_28, &ItemRecompDeps_36, STATE_VARIABLE_UsedModules_0_55, STATE_VARIABLE_UsedModules_56);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_34, &CircTypes_37);
        if ((CircTypes_37 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
        else
        {
          MR_Word Var_64;
          MR_Word Pieces_83;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_93;
          MR_Word Var_98;
          MR_Word Var_99;

          {
            Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(3, Var_91, 1) = ((MR_Box) (TypeCtor_31));
          }
          {
            Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
            MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_89 = parse_tree__error_spec__color_as_subject_1_f_0(Var_90);
          Var_99 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[89])));
          Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
          Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[87])), Var_98);
          Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_93);
          Pieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[85])), Var_88);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type_parse_tree.report_circular_eqv_type\'/2"));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Unsigned) 52U));
            MR_hl_field(0, Var_64, 3) = ((MR_Box) (Context_22));
            MR_hl_field(0, Var_64, 4) = ((MR_Box) (Pieces_83));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_58 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_64));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
          }
        }
        {
          TypeRepn_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypeRepn_40, 0) = ((MR_Box) (Type_32));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SuperTypeCtor0_41 = ((MR_Word) ((MR_hl_field(2, TypeRepn0_20, 0))));
        MR_Integer SuperTypeCtorArity_43 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor0_41, 1))));
        MR_Word VoidTypes_44;
        MR_Word SuperType0_45;
        MR_Word SuperType_46;
        MR_Word SuperTypeCtor_48;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word TypeCtor_72;
        MR_Word Circ_73;
        MR_Word CircTypes_74;
        MR_Word Var_47;

        Var_65 = parse_tree__builtin_lib_types__void_type_0_f_0();
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SuperTypeCtorArity_43, ((MR_Box) (Var_65)), &VoidTypes_44);
        parse_tree__prog_type_construct__construct_type_3_p_0(SuperTypeCtor0_41, VoidTypes_44, &SuperType0_45);
        {
          TypeCtor_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_72, 0) = ((MR_Box) (SymName_18));
          MR_hl_field(0, TypeCtor_72, 1) = ((MR_Box) (Arity_25));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (TypeCtor_72));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_29, MaybeRecord_12, Var_66, SuperType0_45, &SuperType_46, &Var_47, &Circ_73, TVarSet0_21, &TVarSet_35, ItemRecompDeps0_28, &ItemRecompDeps_36, STATE_VARIABLE_UsedModules_0_55, STATE_VARIABLE_UsedModules_56);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_46, &SuperTypeCtor_48);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_73, &CircTypes_74);
        if ((CircTypes_74 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
        else
        {
          MR_Word Var_70;

          Var_70 = parse_tree__equiv_type_parse_tree__report_circular_eqv_type_2_f_0(TypeCtor_72, Context_22);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_58 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_70));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
          }
        }
        {
          TypeRepn_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, TypeRepn_40, 0) = ((MR_Box) (SuperTypeCtor_48));
        }
      }
      break;
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_27, ItemRecompDeps_36, STATE_VARIABLE_RecompInfo_0_53, STATE_VARIABLE_RecompInfo_54);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *TypeRepnInfo_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeRepn_40));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_35));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_23));
  }
}

static MR_Word MR_CALL 
parse_tree__equiv_type_parse_tree__report_circular_eqv_type_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word Context_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;

  {
    Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_15, 1) = ((MR_Box) (TypeCtor_4));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_13 = parse_tree__error_spec__color_as_subject_1_f_0(Var_14);
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[89])));
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[87])), Var_22);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_17);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[85])), Var_12);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type_parse_tree.report_circular_eqv_type\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecordInt_13,
  MR_Word MaybeRecordImp_14,
  MR_Word CheckedDefn0_15,
  MR_Word * CheckedDefn_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_58,
  MR_Word * STATE_VARIABLE_RecompInfo_59,
  MR_Word STATE_VARIABLE_UsedModules_0_60,
  MR_Word * STATE_VARIABLE_UsedModules_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
{
  if (((MR_tag((MR_Word) CheckedDefn0_15)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_20 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_15, 0))));
    MR_Word SrcDefns0_21 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_15, 1))));
    MR_Word SolverDefn_24;
    MR_Word MaybeIntDefn0_29;
    MR_Word MaybeImpDefn0_30;
    MR_Word MaybeIntDefn_31;
    MR_Word MaybeImpDefn_32;
    MR_Word SrcDefns_33;
    MR_Word STATE_VARIABLE_RecompInfo_1_65;
    MR_Word STATE_VARIABLE_UsedModules_1_66;
    MR_Word STATE_VARIABLE_Specs_1_67;
    MR_Word STATE_VARIABLE_RecompInfo_2_69;
    MR_Word STATE_VARIABLE_UsedModules_2_70;
    MR_Word STATE_VARIABLE_Specs_2_71;

    if (((MR_tag((MR_Word) SolverDefn0_20)) == (MR_Integer) 0))
    {
      SolverDefn_24 = SolverDefn0_20;
      STATE_VARIABLE_RecompInfo_1_65 = STATE_VARIABLE_RecompInfo_0_58;
      STATE_VARIABLE_UsedModules_1_66 = STATE_VARIABLE_UsedModules_0_60;
      STATE_VARIABLE_Specs_1_67 = STATE_VARIABLE_Specs_0_62;
    }
    else
    {
      MR_Word MaybeAbstractDefn0_25 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_20, 0))));
      MR_Word ItemSolverDefn0_26 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_20, 1))));
      MR_Word ItemSolverDefn_27;
      MR_Word SolverSpecs_28;

      parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho8_10_p_0(Params_12, MaybeRecordImp_14, ItemSolverDefn0_26, &ItemSolverDefn_27, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_1_65, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_1_66, &SolverSpecs_28);
      STATE_VARIABLE_Specs_1_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), SolverSpecs_28, STATE_VARIABLE_Specs_0_62);
      {
        SolverDefn_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SolverDefn_24, 0) = ((MR_Box) (MaybeAbstractDefn0_25));
        MR_hl_field(1, SolverDefn_24, 1) = ((MR_Box) (ItemSolverDefn_27));
      }
    }
    MaybeIntDefn0_29 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_21, 0))));
    MaybeImpDefn0_30 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_21, 1))));
    parse_tree__equiv_type_parse_tree__replace_in_maybe__ho4_11_p_0(Params_12, MaybeRecordInt_13, MaybeIntDefn0_29, &MaybeIntDefn_31, STATE_VARIABLE_RecompInfo_1_65, &STATE_VARIABLE_RecompInfo_2_69, STATE_VARIABLE_UsedModules_1_66, &STATE_VARIABLE_UsedModules_2_70, STATE_VARIABLE_Specs_1_67, &STATE_VARIABLE_Specs_2_71);
    parse_tree__equiv_type_parse_tree__replace_in_maybe__ho3_11_p_0(Params_12, MaybeRecordImp_14, MaybeImpDefn0_30, &MaybeImpDefn_32, STATE_VARIABLE_RecompInfo_2_69, STATE_VARIABLE_RecompInfo_59, STATE_VARIABLE_UsedModules_2_70, STATE_VARIABLE_UsedModules_61, STATE_VARIABLE_Specs_2_71, STATE_VARIABLE_Specs_63);
    {
      SrcDefns_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_33, 0) = ((MR_Box) (MaybeIntDefn_31));
      MR_hl_field(0, SrcDefns_33, 1) = ((MR_Box) (MaybeImpDefn_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CheckedDefn_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SolverDefn_24));
      MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_33));
    }
  }
  else
  {
    MR_Word StdDefn0_34 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_15, 0))));
    MR_Word StdDefn_39;
    MR_Word IntDefns0_53;
    MR_Word ImpDefns0_54;
    MR_Word ImpForeignEnums0_55;
    MR_Word IntDefns_56;
    MR_Word ImpDefns_57;
    MR_Word STATE_VARIABLE_RecompInfo_4_79;
    MR_Word STATE_VARIABLE_UsedModules_4_80;
    MR_Word STATE_VARIABLE_Specs_4_81;
    MR_Word STATE_VARIABLE_RecompInfo_8_95;
    MR_Word STATE_VARIABLE_UsedModules_8_96;
    MR_Word STATE_VARIABLE_Specs_8_97;
    MR_Word SrcDefns0_110 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_15, 1))));
    MR_Word SrcDefns_111;

    switch (MR_tag((MR_Word) StdDefn0_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Status_35 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_34, 0))) & (MR_Integer) 3);
          MR_Word ItemEqvDefn0_36 = ((MR_Word) ((MR_hl_field(0, StdDefn0_34, 1))));
          MR_Word ItemEqvDefn_37;
          MR_Word EqvSpecs_38;

          parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho7_10_p_0(Params_12, MaybeRecordImp_14, ItemEqvDefn0_36, &ItemEqvDefn_37, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &EqvSpecs_38);
          STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), EqvSpecs_38, STATE_VARIABLE_Specs_0_62);
          {
            StdDefn_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StdDefn_39, 0) = (MR_Box) ((MR_Unsigned) (Status_35));
            MR_hl_field(0, StdDefn_39, 1) = ((MR_Box) (ItemEqvDefn_37));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSubDefn0_40 = ((MR_Word) ((MR_hl_field(1, StdDefn0_34, 1))));
          MR_Word ItemSubDefn_41;
          MR_Word SubSpecs_42;
          MR_Word Status_104 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn0_34, 0))) & (MR_Integer) 3);

          parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho6_10_p_0(Params_12, MaybeRecordImp_14, ItemSubDefn0_40, &ItemSubDefn_41, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &SubSpecs_42);
          STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), SubSpecs_42, STATE_VARIABLE_Specs_0_62);
          {
            StdDefn_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, StdDefn_39, 0) = (MR_Box) ((MR_Unsigned) (Status_104));
            MR_hl_field(1, StdDefn_39, 1) = ((MR_Box) (ItemSubDefn_41));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemDuDefn0_43 = ((MR_Word) ((MR_hl_field(2, StdDefn0_34, 1))));
          MR_String HeadCtor_44 = ((MR_String) ((MR_hl_field(2, StdDefn0_34, 2))));
          MR_Word TailCtors_45 = ((MR_Word) ((MR_hl_field(2, StdDefn0_34, 3))));
          MR_Word CJCsMaybeDefnOrEnum_46 = ((MR_Word) ((MR_hl_field(2, StdDefn0_34, 4))));
          MR_Word ItemDuDefn_47;
          MR_Word DuSpecs_48;
          MR_Word Status_105 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn0_34, 0))) & (MR_Integer) 3);

          parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho5_10_p_0(Params_12, MaybeRecordImp_14, ItemDuDefn0_43, &ItemDuDefn_47, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &DuSpecs_48);
          STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), DuSpecs_48, STATE_VARIABLE_Specs_0_62);
          {
            StdDefn_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, StdDefn_39, 0) = (MR_Box) ((MR_Unsigned) (Status_105));
            MR_hl_field(2, StdDefn_39, 1) = ((MR_Box) (ItemDuDefn_47));
            MR_hl_field(2, StdDefn_39, 2) = ((MR_Box) (HeadCtor_44));
            MR_hl_field(2, StdDefn_39, 3) = ((MR_Box) (TailCtors_45));
            MR_hl_field(2, StdDefn_39, 4) = ((MR_Box) (CJCsMaybeDefnOrEnum_46));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn0_34, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CJCsMaybeDefn_49 = ((MR_Word) ((MR_hl_field(3, StdDefn0_34, 3))));
              MR_Word Status_106 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_34, 1))) & (MR_Integer) 3);
              MR_Word ItemDuDefn0_107 = ((MR_Word) ((MR_hl_field(3, StdDefn0_34, 2))));
              MR_Word ItemDuDefn_108;
              MR_Word DuSpecs_109;

              parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho5_10_p_0(Params_12, MaybeRecordImp_14, ItemDuDefn0_107, &ItemDuDefn_108, STATE_VARIABLE_RecompInfo_0_58, &STATE_VARIABLE_RecompInfo_4_79, STATE_VARIABLE_UsedModules_0_60, &STATE_VARIABLE_UsedModules_4_80, &DuSpecs_109);
              STATE_VARIABLE_Specs_4_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), DuSpecs_109, STATE_VARIABLE_Specs_0_62);
              {
                StdDefn_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, StdDefn_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, StdDefn_39, 1) = (MR_Box) ((MR_Unsigned) (Status_106));
                MR_hl_field(3, StdDefn_39, 2) = ((MR_Box) (ItemDuDefn_108));
                MR_hl_field(3, StdDefn_39, 3) = ((MR_Box) (CJCsMaybeDefn_49));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              StdDefn_39 = StdDefn0_34;
              STATE_VARIABLE_RecompInfo_4_79 = STATE_VARIABLE_RecompInfo_0_58;
              STATE_VARIABLE_UsedModules_4_80 = STATE_VARIABLE_UsedModules_0_60;
              STATE_VARIABLE_Specs_4_81 = STATE_VARIABLE_Specs_0_62;
            }
            break;
        }
        break;
    }
    IntDefns0_53 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_110, 0))));
    ImpDefns0_54 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_110, 1))));
    ImpForeignEnums0_55 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_110, 2))));
    parse_tree__equiv_type_parse_tree__replace_in_list__ho2_11_p_0(Params_12, MaybeRecordInt_13, IntDefns0_53, &IntDefns_56, STATE_VARIABLE_RecompInfo_4_79, &STATE_VARIABLE_RecompInfo_8_95, STATE_VARIABLE_UsedModules_4_80, &STATE_VARIABLE_UsedModules_8_96, STATE_VARIABLE_Specs_4_81, &STATE_VARIABLE_Specs_8_97);
    parse_tree__equiv_type_parse_tree__replace_in_list__ho1_11_p_0(Params_12, MaybeRecordImp_14, ImpDefns0_54, &ImpDefns_57, STATE_VARIABLE_RecompInfo_8_95, STATE_VARIABLE_RecompInfo_59, STATE_VARIABLE_UsedModules_8_96, STATE_VARIABLE_UsedModules_61, STATE_VARIABLE_Specs_8_97, STATE_VARIABLE_Specs_63);
    {
      SrcDefns_111 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_111, 0) = ((MR_Box) (IntDefns_56));
      MR_hl_field(0, SrcDefns_111, 1) = ((MR_Box) (ImpDefns_57));
      MR_hl_field(0, SrcDefns_111, 2) = ((MR_Box) (ImpForeignEnums0_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CheckedDefn_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StdDefn_39));
      MR_hl_field(1, base, 1) = ((MR_Box) (SrcDefns_111));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho8_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18)
{
  MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 0))));
  MR_Word ArgTypeVars_20 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 1))));
  MR_Word TypeDefn0_21 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 2))));
  MR_Word TVarSet0_22 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 3))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 4))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 5))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_12, 0))));
  MR_Integer Arity_26;
  MR_Word ItemName_27;
  MR_Word ItemId_28;
  MR_Word ItemRecompDeps0_29;
  MR_Word TypeCtor_30;
  MR_Word TypeDefn_31;
  MR_Word TVarSet_32;
  MR_Word ItemRecompDeps_33;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
  {
    ItemName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_27, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, ItemName_27, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_28, 1) = ((MR_Box) (ItemName_27));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_25, ItemId_28, STATE_VARIABLE_RecompInfo_0_34, &ItemRecompDeps0_29);
  {
    TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_30, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, TypeCtor_30, 1) = ((MR_Box) (Arity_26));
  }
  parse_tree__equiv_type_parse_tree__replace_in_type_defn_solver_13_p_0(Params_12, MaybeRecord_13, TypeCtor_30, Context_23, TypeDefn0_21, &TypeDefn_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37, Specs_18);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_28, ItemRecompDeps_33, STATE_VARIABLE_RecompInfo_0_34, STATE_VARIABLE_RecompInfo_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *TypeDefnInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho7_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18)
{
  MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 0))));
  MR_Word ArgTypeVars_20 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 1))));
  MR_Word TypeDefn0_21 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 2))));
  MR_Word TVarSet0_22 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 3))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 4))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 5))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_12, 0))));
  MR_Integer Arity_26;
  MR_Word ItemName_27;
  MR_Word ItemId_28;
  MR_Word ItemRecompDeps0_29;
  MR_Word TypeCtor_30;
  MR_Word TypeDefn_31;
  MR_Word TVarSet_32;
  MR_Word ItemRecompDeps_33;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
  {
    ItemName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_27, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, ItemName_27, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_28, 1) = ((MR_Box) (ItemName_27));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_25, ItemId_28, STATE_VARIABLE_RecompInfo_0_34, &ItemRecompDeps0_29);
  {
    TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_30, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, TypeCtor_30, 1) = ((MR_Box) (Arity_26));
  }
  parse_tree__equiv_type_parse_tree__replace_in_type_defn_eqv_13_p_0(Params_12, MaybeRecord_13, TypeCtor_30, Context_23, TypeDefn0_21, &TypeDefn_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37, Specs_18);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_28, ItemRecompDeps_33, STATE_VARIABLE_RecompInfo_0_34, STATE_VARIABLE_RecompInfo_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *TypeDefnInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho6_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18)
{
  MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 0))));
  MR_Word ArgTypeVars_20 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 1))));
  MR_Word TypeDefn0_21 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 2))));
  MR_Word TVarSet0_22 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 3))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 4))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 5))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_12, 0))));
  MR_Integer Arity_26;
  MR_Word ItemName_27;
  MR_Word ItemId_28;
  MR_Word ItemRecompDeps0_29;
  MR_Word TypeDefn_31;
  MR_Word TVarSet_32;
  MR_Word ItemRecompDeps_33;
  MR_Word SuperType0_43;
  MR_Word Ctors0_44;
  MR_Word TypeEqvMap_45;
  MR_Word SuperType_46;
  MR_Word Ctors_48;
  MR_Word STATE_VARIABLE_TVarSet_1_49;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_50;
  MR_Word STATE_VARIABLE_UsedModules_1_51;
  MR_Word Var_47;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
  {
    ItemName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_27, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, ItemName_27, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_28, 1) = ((MR_Box) (ItemName_27));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_25, ItemId_28, STATE_VARIABLE_RecompInfo_0_34, &ItemRecompDeps0_29);
  SuperType0_43 = ((MR_Word) ((MR_hl_field(0, TypeDefn0_21, 0))));
  Ctors0_44 = ((MR_Word) ((MR_hl_field(0, TypeDefn0_21, 1))));
  TypeEqvMap_45 = ((MR_Word) ((MR_hl_field(0, Params_12, 1))));
  parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_45, MaybeRecord_13, SuperType0_43, &SuperType_46, &Var_47, TVarSet0_22, &STATE_VARIABLE_TVarSet_1_49, ItemRecompDeps0_29, &STATE_VARIABLE_ItemRecompDeps_1_50, STATE_VARIABLE_UsedModules_0_36, &STATE_VARIABLE_UsedModules_1_51);
  parse_tree__equiv_type__replace_in_ctors_location_10_p_0(TypeEqvMap_45, MaybeRecord_13, Ctors0_44, &Ctors_48, STATE_VARIABLE_TVarSet_1_49, &TVarSet_32, STATE_VARIABLE_ItemRecompDeps_1_50, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_1_51, STATE_VARIABLE_UsedModules_37);
  {
    TypeDefn_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefn_31, 0) = ((MR_Box) (SuperType_46));
    MR_hl_field(0, TypeDefn_31, 1) = ((MR_Box) (Ctors_48));
  }
  *Specs_18 = (MR_Word) ((MR_Unsigned) 0U);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_28, ItemRecompDeps_33, STATE_VARIABLE_RecompInfo_0_34, STATE_VARIABLE_RecompInfo_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *TypeDefnInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_info_general__ho5_10_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeDefnInfo0_14,
  MR_Word * TypeDefnInfo_15,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_18)
{
  MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 0))));
  MR_Word ArgTypeVars_20 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 1))));
  MR_Word TypeDefn0_21 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 2))));
  MR_Word TVarSet0_22 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 3))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 4))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_14, 5))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_12, 0))));
  MR_Integer Arity_26;
  MR_Word ItemName_27;
  MR_Word ItemId_28;
  MR_Word ItemRecompDeps0_29;
  MR_Word TypeDefn_31;
  MR_Word TVarSet_32;
  MR_Word ItemRecompDeps_33;
  MR_Word Ctors0_43;
  MR_Word MaybeCanon_44;
  MR_Word DirectArgFunctors_45;
  MR_Word TypeEqvMap_46;
  MR_Word Ctors_47;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_20, &Arity_26);
  {
    ItemName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_27, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, ItemName_27, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_28, 1) = ((MR_Box) (ItemName_27));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_25, ItemId_28, STATE_VARIABLE_RecompInfo_0_34, &ItemRecompDeps0_29);
  Ctors0_43 = ((MR_Word) ((MR_hl_field(0, TypeDefn0_21, 0))));
  MaybeCanon_44 = ((MR_Word) ((MR_hl_field(0, TypeDefn0_21, 1))));
  DirectArgFunctors_45 = ((MR_Word) ((MR_hl_field(0, TypeDefn0_21, 2))));
  TypeEqvMap_46 = ((MR_Word) ((MR_hl_field(0, Params_12, 1))));
  parse_tree__equiv_type__replace_in_ctors_location_10_p_0(TypeEqvMap_46, MaybeRecord_13, Ctors0_43, &Ctors_47, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37);
  {
    TypeDefn_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeDefn_31, 0) = ((MR_Box) (Ctors_47));
    MR_hl_field(0, TypeDefn_31, 1) = ((MR_Box) (MaybeCanon_44));
    MR_hl_field(0, TypeDefn_31, 2) = ((MR_Box) (DirectArgFunctors_45));
  }
  *Specs_18 = (MR_Word) ((MR_Unsigned) 0U);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_28, ItemRecompDeps_33, STATE_VARIABLE_RecompInfo_0_34, STATE_VARIABLE_RecompInfo_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *TypeDefnInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_maybe__ho4_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word MaybeItem0_15,
  MR_Word * MaybeItem_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  if ((MaybeItem0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeItem_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RecompInfo_26 = STATE_VARIABLE_RecompInfo_0_25;
    *STATE_VARIABLE_UsedModules_28 = STATE_VARIABLE_UsedModules_0_27;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
  }
  else
  {
    MR_Word Item0_20 = ((MR_Word) ((MR_hl_field(1, MaybeItem0_15, 0))));
    MR_Word Item_21;
    MR_Word ItemSpecs_22;

    parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__624__1__ho31_10_p_0(Params_12, MaybeRecord_13, Item0_20, &Item_21, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, &ItemSpecs_22);
    if ((ItemSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItem_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Item_21));
      }
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    }
    else
    {
      *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_22, STATE_VARIABLE_Specs_0_29);
      *MaybeItem_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__624__1__ho31_10_p_0(
  MR_Word HeadVar__2_127,
  MR_Word HeadVar__3_128,
  MR_Word HeadVar__4_129,
  MR_Word * HeadVar__5_130,
  MR_Word HeadVar__6_131,
  MR_Word * HeadVar__7_132,
  MR_Word HeadVar__8_133,
  MR_Word * HeadVar__9_134,
  MR_Word * HeadVar__10_135)
{
  MR_Word SymName_138 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_129, 0))));
  MR_Word ArgTypeVars_139 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_129, 1))));
  MR_Word TypeDefn0_140 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_129, 2))));
  MR_Word TVarSet0_141 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_129, 3))));
  MR_Word Context_142 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_129, 4))));
  MR_Word SeqNum_143 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_129, 5))));
  MR_Word ModuleName_144 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_127, 0))));
  MR_Integer Arity_145;
  MR_Word ItemName_146;
  MR_Word ItemId_147;
  MR_Word ItemRecompDeps0_148;
  MR_Word TypeCtor_149;
  MR_Word TypeDefn_150;
  MR_Word TVarSet_151;
  MR_Word ItemRecompDeps_152;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_139, &Arity_145);
  {
    ItemName_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_146, 0) = ((MR_Box) (SymName_138));
    MR_hl_field(0, ItemName_146, 1) = ((MR_Box) (Arity_145));
  }
  {
    ItemId_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_147, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_147, 1) = ((MR_Box) (ItemName_146));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_144, ItemId_147, HeadVar__6_131, &ItemRecompDeps0_148);
  {
    TypeCtor_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_149, 0) = ((MR_Box) (SymName_138));
    MR_hl_field(0, TypeCtor_149, 1) = ((MR_Box) (Arity_145));
  }
  parse_tree__equiv_type_parse_tree__replace_in_type_defn_13_p_0(HeadVar__2_127, HeadVar__3_128, TypeCtor_149, Context_142, TypeDefn0_140, &TypeDefn_150, TVarSet0_141, &TVarSet_151, ItemRecompDeps0_148, &ItemRecompDeps_152, HeadVar__8_133, HeadVar__9_134, HeadVar__10_135);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_147, ItemRecompDeps_152, HeadVar__6_131, HeadVar__7_132);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_130 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_138));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_139));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_150));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_151));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_142));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_143));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_maybe__ho3_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word MaybeItem0_15,
  MR_Word * MaybeItem_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  if ((MaybeItem0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeItem_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RecompInfo_26 = STATE_VARIABLE_RecompInfo_0_25;
    *STATE_VARIABLE_UsedModules_28 = STATE_VARIABLE_UsedModules_0_27;
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
  }
  else
  {
    MR_Word Item0_20 = ((MR_Word) ((MR_hl_field(1, MaybeItem0_15, 0))));
    MR_Word Item_21;
    MR_Word ItemSpecs_22;

    parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__627__1__ho32_10_p_0(Params_12, MaybeRecord_13, Item0_20, &Item_21, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, &ItemSpecs_22);
    if ((ItemSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItem_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Item_21));
      }
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    }
    else
    {
      *STATE_VARIABLE_Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_22, STATE_VARIABLE_Specs_0_29);
      *MaybeItem_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__627__1__ho32_10_p_0(
  MR_Word HeadVar__2_151,
  MR_Word HeadVar__3_152,
  MR_Word HeadVar__4_153,
  MR_Word * HeadVar__5_154,
  MR_Word HeadVar__6_155,
  MR_Word * HeadVar__7_156,
  MR_Word HeadVar__8_157,
  MR_Word * HeadVar__9_158,
  MR_Word * HeadVar__10_159)
{
  MR_Word SymName_162 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_153, 0))));
  MR_Word ArgTypeVars_163 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_153, 1))));
  MR_Word TypeDefn0_164 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_153, 2))));
  MR_Word TVarSet0_165 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_153, 3))));
  MR_Word Context_166 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_153, 4))));
  MR_Word SeqNum_167 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_153, 5))));
  MR_Word ModuleName_168 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_151, 0))));
  MR_Integer Arity_169;
  MR_Word ItemName_170;
  MR_Word ItemId_171;
  MR_Word ItemRecompDeps0_172;
  MR_Word TypeCtor_173;
  MR_Word TypeDefn_174;
  MR_Word TVarSet_175;
  MR_Word ItemRecompDeps_176;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_163, &Arity_169);
  {
    ItemName_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_170, 0) = ((MR_Box) (SymName_162));
    MR_hl_field(0, ItemName_170, 1) = ((MR_Box) (Arity_169));
  }
  {
    ItemId_171 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_171, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_171, 1) = ((MR_Box) (ItemName_170));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_168, ItemId_171, HeadVar__6_155, &ItemRecompDeps0_172);
  {
    TypeCtor_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_173, 0) = ((MR_Box) (SymName_162));
    MR_hl_field(0, TypeCtor_173, 1) = ((MR_Box) (Arity_169));
  }
  parse_tree__equiv_type_parse_tree__replace_in_type_defn_13_p_0(HeadVar__2_151, HeadVar__3_152, TypeCtor_173, Context_166, TypeDefn0_164, &TypeDefn_174, TVarSet0_165, &TVarSet_175, ItemRecompDeps0_172, &ItemRecompDeps_176, HeadVar__8_157, HeadVar__9_158, HeadVar__10_159);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_171, ItemRecompDeps_176, HeadVar__6_155, HeadVar__7_156);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_154 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_162));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_163));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_174));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_175));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_166));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_167));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho2_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho33_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[4]), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho33_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__677__1__ho36_10_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__677__1__ho36_10_p_0(
  MR_Word HeadVar__2_234,
  MR_Word HeadVar__3_235,
  MR_Word HeadVar__4_236,
  MR_Word * HeadVar__5_237,
  MR_Word HeadVar__6_238,
  MR_Word * HeadVar__7_239,
  MR_Word HeadVar__8_240,
  MR_Word * HeadVar__9_241,
  MR_Word * HeadVar__10_242)
{
  MR_Word SymName_245 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_236, 0))));
  MR_Word ArgTypeVars_246 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_236, 1))));
  MR_Word TypeDefn0_247 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_236, 2))));
  MR_Word TVarSet0_248 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_236, 3))));
  MR_Word Context_249 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_236, 4))));
  MR_Word SeqNum_250 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_236, 5))));
  MR_Word ModuleName_251 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_234, 0))));
  MR_Integer Arity_252;
  MR_Word ItemName_253;
  MR_Word ItemId_254;
  MR_Word ItemRecompDeps0_255;
  MR_Word TypeCtor_256;
  MR_Word TypeDefn_257;
  MR_Word TVarSet_258;
  MR_Word ItemRecompDeps_259;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_246, &Arity_252);
  {
    ItemName_253 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_253, 0) = ((MR_Box) (SymName_245));
    MR_hl_field(0, ItemName_253, 1) = ((MR_Box) (Arity_252));
  }
  {
    ItemId_254 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_254, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_254, 1) = ((MR_Box) (ItemName_253));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_251, ItemId_254, HeadVar__6_238, &ItemRecompDeps0_255);
  {
    TypeCtor_256 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_256, 0) = ((MR_Box) (SymName_245));
    MR_hl_field(0, TypeCtor_256, 1) = ((MR_Box) (Arity_252));
  }
  parse_tree__equiv_type_parse_tree__replace_in_type_defn_13_p_0(HeadVar__2_234, HeadVar__3_235, TypeCtor_256, Context_249, TypeDefn0_247, &TypeDefn_257, TVarSet0_248, &TVarSet_258, ItemRecompDeps0_255, &ItemRecompDeps_259, HeadVar__8_240, HeadVar__9_241, HeadVar__10_242);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_254, ItemRecompDeps_259, HeadVar__6_238, HeadVar__7_239);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_237 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_245));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_246));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_257));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_258));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_249));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_250));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho1_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho34_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[4]), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho34_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__680__1__ho35_10_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__680__1__ho35_10_p_0(
  MR_Word HeadVar__2_258,
  MR_Word HeadVar__3_259,
  MR_Word HeadVar__4_260,
  MR_Word * HeadVar__5_261,
  MR_Word HeadVar__6_262,
  MR_Word * HeadVar__7_263,
  MR_Word HeadVar__8_264,
  MR_Word * HeadVar__9_265,
  MR_Word * HeadVar__10_266)
{
  MR_Word SymName_269 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_260, 0))));
  MR_Word ArgTypeVars_270 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_260, 1))));
  MR_Word TypeDefn0_271 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_260, 2))));
  MR_Word TVarSet0_272 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_260, 3))));
  MR_Word Context_273 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_260, 4))));
  MR_Word SeqNum_274 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_260, 5))));
  MR_Word ModuleName_275 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_258, 0))));
  MR_Integer Arity_276;
  MR_Word ItemName_277;
  MR_Word ItemId_278;
  MR_Word ItemRecompDeps0_279;
  MR_Word TypeCtor_280;
  MR_Word TypeDefn_281;
  MR_Word TVarSet_282;
  MR_Word ItemRecompDeps_283;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_270, &Arity_276);
  {
    ItemName_277 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_277, 0) = ((MR_Box) (SymName_269));
    MR_hl_field(0, ItemName_277, 1) = ((MR_Box) (Arity_276));
  }
  {
    ItemId_278 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_278, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_278, 1) = ((MR_Box) (ItemName_277));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_275, ItemId_278, HeadVar__6_262, &ItemRecompDeps0_279);
  {
    TypeCtor_280 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_280, 0) = ((MR_Box) (SymName_269));
    MR_hl_field(0, TypeCtor_280, 1) = ((MR_Box) (Arity_276));
  }
  parse_tree__equiv_type_parse_tree__replace_in_type_defn_13_p_0(HeadVar__2_258, HeadVar__3_259, TypeCtor_280, Context_273, TypeDefn0_271, &TypeDefn_281, TVarSet0_272, &TVarSet_282, ItemRecompDeps0_279, &ItemRecompDeps_283, HeadVar__8_264, HeadVar__9_265, HeadVar__10_266);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_278, ItemRecompDeps_283, HeadVar__6_262, HeadVar__7_263);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_261 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_269));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_270));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_281));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_282));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_273));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_274));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_trans_opt_9_p_0(
  MR_Word _Params_10,
  MR_Word ParseTreeTransOpt_11,
  MR_Word * ParseTreeTransOpt_3,
  MR_Word RecompInfo_12,
  MR_Word * RecompInfo_5,
  MR_Word UsedModules_13,
  MR_Word * UsedModules_7,
  MR_Word Specs_14,
  MR_Word * Specs_9)
{
  parse_tree__equiv_type_parse_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_9_p_0(ParseTreeTransOpt_11, ParseTreeTransOpt_3, RecompInfo_12, RecompInfo_5, UsedModules_13, UsedModules_7, Specs_14, Specs_9);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_9_p_0(
  MR_Word ParseTreeTransOpt_11,
  MR_Word * ParseTreeTransOpt_3,
  MR_Word RecompInfo_12,
  MR_Word * RecompInfo_5,
  MR_Word UsedModules_13,
  MR_Word * UsedModules_7,
  MR_Word Specs_14,
  MR_Word * Specs_9)
{
  *ParseTreeTransOpt_3 = ParseTreeTransOpt_11;
  *RecompInfo_5 = RecompInfo_12;
  *UsedModules_7 = UsedModules_13;
  *Specs_9 = Specs_14;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_plain_opt_9_p_0(
  MR_Word Params_10,
  MR_Word OrigParseTreePlainOpt_11,
  MR_Word * ParseTreePlainOpt_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_51,
  MR_Word * STATE_VARIABLE_RecompInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_Word OptModuleName_17 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 0))));
  MR_Word OptModuleNameContext_18 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 1))));
  MR_Word UsedModuleNames_19 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 2))));
  MR_Word FIMSpecs_20 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 3))));
  MR_Word TypeDefns0_21 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 4))));
  MR_Word ForeignEnums_22 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 5))));
  MR_Word TypeClasses0_25 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 8))));
  MR_Word Instances0_26 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 9))));
  MR_Word PredDecls0_27 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 10))));
  MR_Word ModeDecls0_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 11))));
  MR_Word Clauses_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 12))));
  MR_Word ForeignProcs_30 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 13))));
  MR_Word Promises_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 14))));
  MR_Word DeclMarkers_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 15))));
  MR_Word ImplMarkers_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 16))));
  MR_Word TypeSpecs0_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 17))));
  MR_Word UnusedArgs_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 18))));
  MR_Word TermInfos_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 19))));
  MR_Word Term2Infos_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 20))));
  MR_Word Exceptions_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 21))));
  MR_Word Trailings_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 22))));
  MR_Word MMTablings_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 23))));
  MR_Word Sharings_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 24))));
  MR_Word Reuses_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 25))));
  MR_Word InstDefns_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 6))));
  MR_Word ModeDefns_44 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_11, 7))));
  MR_Word TypeDefns_45;
  MR_Word TypeClasses_46;
  MR_Word Instances_47;
  MR_Word PredDecls_48;
  MR_Word ModeDecls_49;
  MR_Word TypeSpecs_50;
  MR_Word STATE_VARIABLE_RecompInfo_1_58;
  MR_Word STATE_VARIABLE_UsedModules_1_59;
  MR_Word STATE_VARIABLE_Specs_1_60;
  MR_Word STATE_VARIABLE_RecompInfo_2_63;
  MR_Word STATE_VARIABLE_UsedModules_2_64;
  MR_Word STATE_VARIABLE_Specs_2_65;
  MR_Word STATE_VARIABLE_RecompInfo_3_67;
  MR_Word STATE_VARIABLE_UsedModules_3_68;
  MR_Word STATE_VARIABLE_Specs_3_69;
  MR_Word STATE_VARIABLE_RecompInfo_4_71;
  MR_Word STATE_VARIABLE_UsedModules_4_72;
  MR_Word STATE_VARIABLE_Specs_4_73;
  MR_Word STATE_VARIABLE_RecompInfo_5_75;
  MR_Word STATE_VARIABLE_UsedModules_5_76;
  MR_Word STATE_VARIABLE_Specs_5_77;
  MR_Word RevItems_154;
  MR_Word RevItems_159;
  MR_Word RevItems_163;
  MR_Word RevItems_167;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho25_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), TypeDefns0_21, (MR_Word) ((MR_Unsigned) 0U), &RevItems_154, STATE_VARIABLE_RecompInfo_0_51, &STATE_VARIABLE_RecompInfo_1_58, STATE_VARIABLE_UsedModules_0_53, &STATE_VARIABLE_UsedModules_1_59, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_1_60);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[4]), RevItems_154, &TypeDefns_45);
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), TypeClasses0_25, (MR_Word) ((MR_Unsigned) 0U), &RevItems_159, STATE_VARIABLE_RecompInfo_1_58, &STATE_VARIABLE_RecompInfo_2_63, STATE_VARIABLE_UsedModules_1_59, &STATE_VARIABLE_UsedModules_2_64, STATE_VARIABLE_Specs_1_60, &STATE_VARIABLE_Specs_2_65);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_159, &TypeClasses_46);
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho27_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), Instances0_26, (MR_Word) ((MR_Unsigned) 0U), &RevItems_163, STATE_VARIABLE_RecompInfo_2_63, &STATE_VARIABLE_RecompInfo_3_67, STATE_VARIABLE_UsedModules_2_64, &STATE_VARIABLE_UsedModules_3_68, STATE_VARIABLE_Specs_2_65, &STATE_VARIABLE_Specs_3_69);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevItems_163, &Instances_47);
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho28_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), PredDecls0_27, (MR_Word) ((MR_Unsigned) 0U), &RevItems_167, STATE_VARIABLE_RecompInfo_3_67, &STATE_VARIABLE_RecompInfo_4_71, STATE_VARIABLE_UsedModules_3_68, &STATE_VARIABLE_UsedModules_4_72, STATE_VARIABLE_Specs_3_69, &STATE_VARIABLE_Specs_4_73);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevItems_167, &PredDecls_48);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ModeDecls0_28, &ModeDecls_49, STATE_VARIABLE_RecompInfo_4_71, &STATE_VARIABLE_RecompInfo_5_75, STATE_VARIABLE_UsedModules_4_72, &STATE_VARIABLE_UsedModules_5_76, STATE_VARIABLE_Specs_4_73, &STATE_VARIABLE_Specs_5_77);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho9_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), TypeSpecs0_34, &TypeSpecs_50, STATE_VARIABLE_RecompInfo_5_75, STATE_VARIABLE_RecompInfo_52, STATE_VARIABLE_UsedModules_5_76, STATE_VARIABLE_UsedModules_54, STATE_VARIABLE_Specs_5_77, STATE_VARIABLE_Specs_56);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OptModuleName_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (OptModuleNameContext_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (UsedModuleNames_19));
    MR_hl_field(0, base, 3) = ((MR_Box) (FIMSpecs_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeDefns_45));
    MR_hl_field(0, base, 5) = ((MR_Box) (ForeignEnums_22));
    MR_hl_field(0, base, 6) = ((MR_Box) (InstDefns_43));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModeDefns_44));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClasses_46));
    MR_hl_field(0, base, 9) = ((MR_Box) (Instances_47));
    MR_hl_field(0, base, 10) = ((MR_Box) (PredDecls_48));
    MR_hl_field(0, base, 11) = ((MR_Box) (ModeDecls_49));
    MR_hl_field(0, base, 12) = ((MR_Box) (Clauses_29));
    MR_hl_field(0, base, 13) = ((MR_Box) (ForeignProcs_30));
    MR_hl_field(0, base, 14) = ((MR_Box) (Promises_31));
    MR_hl_field(0, base, 15) = ((MR_Box) (DeclMarkers_32));
    MR_hl_field(0, base, 16) = ((MR_Box) (ImplMarkers_33));
    MR_hl_field(0, base, 17) = ((MR_Box) (TypeSpecs_50));
    MR_hl_field(0, base, 18) = ((MR_Box) (UnusedArgs_35));
    MR_hl_field(0, base, 19) = ((MR_Box) (TermInfos_36));
    MR_hl_field(0, base, 20) = ((MR_Box) (Term2Infos_37));
    MR_hl_field(0, base, 21) = ((MR_Box) (Exceptions_38));
    MR_hl_field(0, base, 22) = ((MR_Box) (Trailings_39));
    MR_hl_field(0, base, 23) = ((MR_Box) (MMTablings_40));
    MR_hl_field(0, base, 24) = ((MR_Box) (Sharings_41));
    MR_hl_field(0, base, 25) = ((MR_Box) (Reuses_42));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho25_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__557__1__ho38_10_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__557__1__ho38_10_p_0(
  MR_Word HeadVar__2_79,
  MR_Word HeadVar__3_80,
  MR_Word HeadVar__4_81,
  MR_Word * HeadVar__5_82,
  MR_Word HeadVar__6_83,
  MR_Word * HeadVar__7_84,
  MR_Word HeadVar__8_85,
  MR_Word * HeadVar__9_86,
  MR_Word * HeadVar__10_87)
{
  MR_Word SymName_90 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_81, 0))));
  MR_Word ArgTypeVars_91 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_81, 1))));
  MR_Word TypeDefn0_92 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_81, 2))));
  MR_Word TVarSet0_93 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_81, 3))));
  MR_Word Context_94 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_81, 4))));
  MR_Word SeqNum_95 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_81, 5))));
  MR_Word ModuleName_96 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_79, 0))));
  MR_Integer Arity_97;
  MR_Word ItemName_98;
  MR_Word ItemId_99;
  MR_Word ItemRecompDeps0_100;
  MR_Word TypeCtor_101;
  MR_Word TypeDefn_102;
  MR_Word TVarSet_103;
  MR_Word ItemRecompDeps_104;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_91, &Arity_97);
  {
    ItemName_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_98, 0) = ((MR_Box) (SymName_90));
    MR_hl_field(0, ItemName_98, 1) = ((MR_Box) (Arity_97));
  }
  {
    ItemId_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_99, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_99, 1) = ((MR_Box) (ItemName_98));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_96, ItemId_99, HeadVar__6_83, &ItemRecompDeps0_100);
  {
    TypeCtor_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_101, 0) = ((MR_Box) (SymName_90));
    MR_hl_field(0, TypeCtor_101, 1) = ((MR_Box) (Arity_97));
  }
  parse_tree__equiv_type_parse_tree__replace_in_type_defn_13_p_0(HeadVar__2_79, HeadVar__3_80, TypeCtor_101, Context_94, TypeDefn0_92, &TypeDefn_102, TVarSet0_93, &TVarSet_103, ItemRecompDeps0_100, &ItemRecompDeps_104, HeadVar__8_85, HeadVar__9_86, HeadVar__10_87);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_99, ItemRecompDeps_104, HeadVar__6_83, HeadVar__7_84);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_82 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_90));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_91));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_102));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_103));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_94));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_95));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtor_16,
  MR_Word Context_17,
  MR_Word TypeDefn0_18,
  MR_Word * TypeDefn_19,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_36,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_23)
{
  switch (MR_tag((MR_Word) TypeDefn0_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_26 = (MR_Word) ((MR_Word) (TypeDefn0_18));
        MR_Word DetailsDu_27;
        MR_Word Ctors0_40 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_26, 0))));
        MR_Word MaybeCanon_41 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_26, 1))));
        MR_Word DirectArgFunctors_42 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_26, 2))));
        MR_Word TypeEqvMap_43 = ((MR_Word) ((MR_hl_field(0, Params_14, 1))));
        MR_Word Ctors_44;

        parse_tree__equiv_type__replace_in_ctors_location_10_p_0(TypeEqvMap_43, MaybeRecord_15, Ctors0_40, &Ctors_44, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_0_36, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39);
        {
          DetailsDu_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DetailsDu_27, 0) = ((MR_Box) (Ctors_44));
          MR_hl_field(0, DetailsDu_27, 1) = ((MR_Box) (MaybeCanon_41));
          MR_hl_field(0, DetailsDu_27, 2) = ((MR_Box) (DirectArgFunctors_42));
        }
        *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
        *TypeDefn_19 = (MR_Word) ((MR_Word) (DetailsDu_27));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub0_28 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_18), (MR_Integer) 1));
        MR_Word DetailsSub_29;
        MR_Word SuperType0_47 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_28, 0))));
        MR_Word Ctors0_48 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_28, 1))));
        MR_Word TypeEqvMap_49 = ((MR_Word) ((MR_hl_field(0, Params_14, 1))));
        MR_Word SuperType_50;
        MR_Word Ctors_52;
        MR_Word STATE_VARIABLE_TVarSet_1_53;
        MR_Word STATE_VARIABLE_ItemRecompDeps_1_54;
        MR_Word STATE_VARIABLE_UsedModules_1_55;
        MR_Word Var_51;

        parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_49, MaybeRecord_15, SuperType0_47, &SuperType_50, &Var_51, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_1_53, STATE_VARIABLE_ItemRecompDeps_0_36, &STATE_VARIABLE_ItemRecompDeps_1_54, STATE_VARIABLE_UsedModules_0_38, &STATE_VARIABLE_UsedModules_1_55);
        parse_tree__equiv_type__replace_in_ctors_location_10_p_0(TypeEqvMap_49, MaybeRecord_15, Ctors0_48, &Ctors_52, STATE_VARIABLE_TVarSet_1_53, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_1_54, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_1_55, STATE_VARIABLE_UsedModules_39);
        {
          DetailsSub_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DetailsSub_29, 0) = ((MR_Box) (SuperType_50));
          MR_hl_field(0, DetailsSub_29, 1) = ((MR_Box) (Ctors_52));
        }
        *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
        *TypeDefn_19 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_29)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver0_30 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_18), (MR_Integer) 2));
        MR_Word DetailsSolver_31;

        parse_tree__equiv_type_parse_tree__replace_in_type_defn_solver_13_p_0(Params_14, MaybeRecord_15, TypeCtor_16, Context_17, DetailsSolver0_30, &DetailsSolver_31, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_0_36, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_23);
        *TypeDefn_19 = (MR_Word) (MR_mkword(2, (MR_Word) (DetailsSolver_31)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn0_18, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_24 = ((MR_Word) ((MR_hl_field(3, TypeDefn0_18, 1))));
            MR_Word DetailsEqv_25;

            parse_tree__equiv_type_parse_tree__replace_in_type_defn_eqv_13_p_0(Params_14, MaybeRecord_15, TypeCtor_16, Context_17, DetailsEqv0_24, &DetailsEqv_25, STATE_VARIABLE_TVarSet_0_34, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_ItemRecompDeps_0_36, STATE_VARIABLE_ItemRecompDeps_37, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_23);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_19 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (DetailsEqv_25));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *TypeDefn_19 = TypeDefn0_18;
            *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_TVarSet_35 = STATE_VARIABLE_TVarSet_0_34;
            *STATE_VARIABLE_ItemRecompDeps_37 = STATE_VARIABLE_ItemRecompDeps_0_36;
            *STATE_VARIABLE_UsedModules_39 = STATE_VARIABLE_UsedModules_0_38;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_solver_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtor_16,
  MR_Word Context_17,
  MR_Word DetailsSolver0_18,
  MR_Word * DetailsSolver_19,
  MR_Word STATE_VARIABLE_TVarSet_0_40,
  MR_Word * STATE_VARIABLE_TVarSet_41,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_42,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * Specs_23)
{
  MR_Word SolverDetails0_24 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_18, 0))));
  MR_Word MaybeUserEqComp_25 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_18, 1))));
  MR_Word RepresentationType0_26 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_24, 0))));
  MR_Word GroundInst_27 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_24, 1))));
  MR_Word AnyInst_28 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_24, 2))));
  MR_Word MutableInfos0_29 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_24, 3))));
  MR_Word TypeEqvMap_30 = ((MR_Word) ((MR_hl_field(0, Params_14, 1))));
  MR_Word RepresentationType_31;
  MR_Word Circ_33;
  MR_Word CircTypes_34;
  MR_Word MutableInfos_38;
  MR_Word SolverDetails_39;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_48;
  MR_Word STATE_VARIABLE_UsedModules_1_49;
  MR_Word _Changed_32;

  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (TypeCtor_16));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_30, MaybeRecord_15, Var_46, RepresentationType0_26, &RepresentationType_31, &_Changed_32, &Circ_33, STATE_VARIABLE_TVarSet_0_40, STATE_VARIABLE_TVarSet_41, STATE_VARIABLE_ItemRecompDeps_0_42, &STATE_VARIABLE_ItemRecompDeps_1_48, STATE_VARIABLE_UsedModules_0_44, &STATE_VARIABLE_UsedModules_1_49);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_33, &CircTypes_34);
  if ((CircTypes_34 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Pieces_37;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_64;

    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (TypeCtor_16));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[13])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[10])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Pieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_37, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[9])));
      MR_hl_field(1, Pieces_37, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.replace_in_type_defn_solver\'/13"));
      MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Var_64, 3) = ((MR_Box) (Context_17));
      MR_hl_field(0, Var_64, 4) = ((MR_Box) (Pieces_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_64));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  parse_tree__equiv_type_parse_tree__replace_in_constraint_store_8_p_0(Params_14, MaybeRecord_15, MutableInfos0_29, &MutableInfos_38, STATE_VARIABLE_ItemRecompDeps_1_48, STATE_VARIABLE_ItemRecompDeps_43, STATE_VARIABLE_UsedModules_1_49, STATE_VARIABLE_UsedModules_45);
  {
    SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SolverDetails_39, 0) = ((MR_Box) (RepresentationType_31));
    MR_hl_field(0, SolverDetails_39, 1) = ((MR_Box) (GroundInst_27));
    MR_hl_field(0, SolverDetails_39, 2) = ((MR_Box) (AnyInst_28));
    MR_hl_field(0, SolverDetails_39, 3) = ((MR_Box) (MutableInfos_38));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSolver_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SolverDetails_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeUserEqComp_25));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_constraint_store_8_p_0(
  MR_Word Params_1,
  MR_Word MaybeRecord_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_5,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_6,
  MR_Word STATE_VARIABLE_UsedModules_0_7,
  MR_Word * STATE_VARIABLE_UsedModules_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_8 = STATE_VARIABLE_UsedModules_0_7;
    *STATE_VARIABLE_ItemRecompDeps_6 = STATE_VARIABLE_ItemRecompDeps_0_5;
  }
  else
  {
    MR_Word MutableInfo0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word MutableInfos0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word MutableInfo_21;
    MR_Word MutableInfos_22;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_29;
    MR_Word STATE_VARIABLE_UsedModules_1_30;
    MR_String MutName_31 = ((MR_String) ((MR_hl_field(0, MutableInfo0_19, 0))));
    MR_Word OrigType_32 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 1))));
    MR_Word Type0_33 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 2))));
    MR_Word OrigInst_34 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 3))));
    MR_Word Inst0_35 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 4))));
    MR_Word InitValue_36 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 5))));
    MR_Word Attrs_37 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 6))));
    MR_Word Varset_38 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 7))));
    MR_Word Context_39 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 8))));
    MR_Word SeqNum_40 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_19, 9))));
    MR_Word TypeEqvMap_41 = ((MR_Word) ((MR_hl_field(0, Params_1, 1))));
    MR_Word TVarSet0_42;
    MR_Word Type_43;
    MR_Word InstEqvMap_46;
    MR_Word Inst_47;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_48;
    MR_Word STATE_VARIABLE_UsedModules_1_49;
    MR_Word _TypeChanged_44;
    MR_Word _TVarSet_45;

    TVarSet0_42 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_41, MaybeRecord_2, Type0_33, &Type_43, &_TypeChanged_44, TVarSet0_42, &_TVarSet_45, STATE_VARIABLE_ItemRecompDeps_0_5, &STATE_VARIABLE_ItemRecompDeps_1_48, STATE_VARIABLE_UsedModules_0_7, &STATE_VARIABLE_UsedModules_1_49);
    InstEqvMap_46 = ((MR_Word) ((MR_hl_field(0, Params_1, 2))));
    parse_tree__equiv_type__replace_in_inst_8_p_0(InstEqvMap_46, MaybeRecord_2, Inst0_35, &Inst_47, STATE_VARIABLE_ItemRecompDeps_1_48, &STATE_VARIABLE_ItemRecompDeps_1_29, STATE_VARIABLE_UsedModules_1_49, &STATE_VARIABLE_UsedModules_1_30);
    {
      MutableInfo_21 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MutableInfo_21, 0) = ((MR_Box) (MutName_31));
      MR_hl_field(0, MutableInfo_21, 1) = ((MR_Box) (OrigType_32));
      MR_hl_field(0, MutableInfo_21, 2) = ((MR_Box) (Type_43));
      MR_hl_field(0, MutableInfo_21, 3) = ((MR_Box) (OrigInst_34));
      MR_hl_field(0, MutableInfo_21, 4) = ((MR_Box) (Inst_47));
      MR_hl_field(0, MutableInfo_21, 5) = ((MR_Box) (InitValue_36));
      MR_hl_field(0, MutableInfo_21, 6) = ((MR_Box) (Attrs_37));
      MR_hl_field(0, MutableInfo_21, 7) = ((MR_Box) (Varset_38));
      MR_hl_field(0, MutableInfo_21, 8) = ((MR_Box) (Context_39));
      MR_hl_field(0, MutableInfo_21, 9) = ((MR_Box) (SeqNum_40));
    }
    parse_tree__equiv_type_parse_tree__replace_in_constraint_store_8_p_0(Params_1, MaybeRecord_2, MutableInfos0_20, &MutableInfos_22, STATE_VARIABLE_ItemRecompDeps_1_29, STATE_VARIABLE_ItemRecompDeps_6, STATE_VARIABLE_UsedModules_1_30, STATE_VARIABLE_UsedModules_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MutableInfo_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (MutableInfos_22));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_defn_eqv_13_p_0(
  MR_Word Params_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtor_16,
  MR_Word Context_17,
  MR_Word DetailsEqv0_18,
  MR_Word * DetailsEqv_19,
  MR_Word STATE_VARIABLE_TVarSet_0_32,
  MR_Word * STATE_VARIABLE_TVarSet_33,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_34,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_23)
{
  MR_Word TypeBody0_24 = (MR_Word) (DetailsEqv0_18);
  MR_Word TypeEqvMap_25 = ((MR_Word) ((MR_hl_field(0, Params_14, 1))));
  MR_Word TypeBody_26;
  MR_Word Circ_28;
  MR_Word CircTypes_29;
  MR_Word Var_38;
  MR_Word Var_27;

  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (TypeCtor_16));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_25, MaybeRecord_15, Var_38, TypeBody0_24, &TypeBody_26, &Var_27, &Circ_28, STATE_VARIABLE_TVarSet_0_32, STATE_VARIABLE_TVarSet_33, STATE_VARIABLE_ItemRecompDeps_0_34, STATE_VARIABLE_ItemRecompDeps_35, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_28, &CircTypes_29);
  if ((CircTypes_29 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_43;
    MR_Word Pieces_48;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_63;
    MR_Word Var_64;

    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (TypeCtor_16));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
    Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[89])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[87])), Var_63);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_58);
    Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[85])), Var_53);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type_parse_tree.report_circular_eqv_type\'/2"));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Var_43, 3) = ((MR_Box) (Context_17));
      MR_hl_field(0, Var_43, 4) = ((MR_Box) (Pieces_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  *DetailsEqv_19 = (MR_Word) (TypeBody_26);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho9_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho30_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho30_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_type_spec_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_TypeRepnInfo_14;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type_parse_tree__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CheckedDefn_16;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_59;
  MR_Word conv1_STATE_VARIABLE_UsedModules_61;
  MR_Word conv0_STATE_VARIABLE_Specs_63;

  parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0(
  MR_Word Params_10,
  MR_Word IntForOptSpec0_11,
  MR_Word * IntForOptSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  switch (MR_tag((MR_Word) IntForOptSpec0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OrigParseTree0_16 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec0_11, 0))));
        MR_Word ReadWhy0_17 = ((MR_Unsigned) ((MR_hl_field(0, IntForOptSpec0_11, 1))) & (MR_Integer) 1);
        MR_Word ParseTree0_18;

        parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int0_9_p_0(Params_10, OrigParseTree0_16, &ParseTree0_18, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *IntForOptSpec_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree0_18));
          MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_17));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OrigParseTree1_19 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec0_11, 0))));
        MR_Word ReadWhy1_20 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec0_11, 1))) & (MR_Integer) 15);
        MR_Word ParseTree1_21;

        parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0(Params_10, OrigParseTree1_19, &ParseTree1_21, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntForOptSpec_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ParseTree1_21));
          MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_20));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OrigParseTree2_22 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec0_11, 0))));
        MR_Word ReadWhy2_23 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec0_11, 1))) & (MR_Integer) 3);
        MR_Word ParseTree2_24;
        MR_Word IntModuleName_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 0))));
        MR_Word IntModuleNameContext_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 1))));
        MR_Word MaybeVersionNumbers_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 2))));
        MR_Word InclMap_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 3))));
        MR_Word ImportUseMap_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 4))));
        MR_Word IntFIMSpecs_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 5))));
        MR_Word ImpFIMSpecs_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 6))));
        MR_Word TypeCtorCheckedMap0_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 7))));
        MR_Word IntTypeClasses0_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 10))));
        MR_Word IntInstances0_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 11))));
        MR_Word IntTypeRepnMap0_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 12))));
        MR_Word TypeCtorCheckedMap_44;
        MR_Word InstCtorCheckedMap_45 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 8))));
        MR_Word ModeCtorCheckedMap_46 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_22, 9))));
        MR_Word IntTypeClasses_47;
        MR_Word IntInstances_48;
        MR_Word IntTypeRepnMap_49;
        MR_Word Var_50;
        MR_Word STATE_VARIABLE_RecompInfo_1_51;
        MR_Word STATE_VARIABLE_UsedModules_1_52;
        MR_Word STATE_VARIABLE_Specs_1_53;
        MR_Word STATE_VARIABLE_RecompInfo_2_55;
        MR_Word STATE_VARIABLE_UsedModules_2_56;
        MR_Word STATE_VARIABLE_Specs_2_57;
        MR_Word STATE_VARIABLE_RecompInfo_3_59;
        MR_Word STATE_VARIABLE_UsedModules_3_60;
        MR_Word STATE_VARIABLE_Specs_3_61;
        MR_Word Var_62;
        MR_Word RevItems_72;
        MR_Word RevItems_76;
        MR_Box conv6_STATE_VARIABLE_RecompInfo_1_51;
        MR_Box conv5_STATE_VARIABLE_UsedModules_1_52;
        MR_Box conv4_STATE_VARIABLE_Specs_1_53;
        MR_Box conv13_STATE_VARIABLE_RecompInfo_26;
        MR_Box conv12_STATE_VARIABLE_UsedModules_28;
        MR_Box conv11_STATE_VARIABLE_Specs_30;

        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_6[1]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0_1));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (Params_10));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_50, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_50, TypeCtorCheckedMap0_40, &TypeCtorCheckedMap_44, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_25)), &conv6_STATE_VARIABLE_RecompInfo_1_51, ((MR_Box) (STATE_VARIABLE_UsedModules_0_27)), &conv5_STATE_VARIABLE_UsedModules_1_52, ((MR_Box) (STATE_VARIABLE_Specs_0_29)), &conv4_STATE_VARIABLE_Specs_1_53);
        STATE_VARIABLE_RecompInfo_1_51 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_51));
        STATE_VARIABLE_UsedModules_1_52 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_52));
        STATE_VARIABLE_Specs_1_53 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_53));
        parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_41, (MR_Word) ((MR_Unsigned) 0U), &RevItems_72, STATE_VARIABLE_RecompInfo_1_51, &STATE_VARIABLE_RecompInfo_2_55, STATE_VARIABLE_UsedModules_1_52, &STATE_VARIABLE_UsedModules_2_56, STATE_VARIABLE_Specs_1_53, &STATE_VARIABLE_Specs_2_57);
        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_72, &IntTypeClasses_47);
        parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_42, (MR_Word) ((MR_Unsigned) 0U), &RevItems_76, STATE_VARIABLE_RecompInfo_2_55, &STATE_VARIABLE_RecompInfo_3_59, STATE_VARIABLE_UsedModules_2_56, &STATE_VARIABLE_UsedModules_3_60, STATE_VARIABLE_Specs_2_57, &STATE_VARIABLE_Specs_3_61);
        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_76, &IntInstances_48);
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[5]));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0_2));
          MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_62, 3) = ((MR_Box) (Params_10));
          MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_62, IntTypeRepnMap0_43, &IntTypeRepnMap_49, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_59)), &conv13_STATE_VARIABLE_RecompInfo_26, ((MR_Box) (STATE_VARIABLE_UsedModules_3_60)), &conv12_STATE_VARIABLE_UsedModules_28, ((MR_Box) (STATE_VARIABLE_Specs_3_61)), &conv11_STATE_VARIABLE_Specs_30);
        *STATE_VARIABLE_RecompInfo_26 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_26));
        *STATE_VARIABLE_UsedModules_28 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_28));
        *STATE_VARIABLE_Specs_30 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_30));
        {
          ParseTree2_24 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ParseTree2_24, 0) = ((MR_Box) (IntModuleName_33));
          MR_hl_field(0, ParseTree2_24, 1) = ((MR_Box) (IntModuleNameContext_34));
          MR_hl_field(0, ParseTree2_24, 2) = ((MR_Box) (MaybeVersionNumbers_35));
          MR_hl_field(0, ParseTree2_24, 3) = ((MR_Box) (InclMap_36));
          MR_hl_field(0, ParseTree2_24, 4) = ((MR_Box) (ImportUseMap_37));
          MR_hl_field(0, ParseTree2_24, 5) = ((MR_Box) (IntFIMSpecs_38));
          MR_hl_field(0, ParseTree2_24, 6) = ((MR_Box) (ImpFIMSpecs_39));
          MR_hl_field(0, ParseTree2_24, 7) = ((MR_Box) (TypeCtorCheckedMap_44));
          MR_hl_field(0, ParseTree2_24, 8) = ((MR_Box) (InstCtorCheckedMap_45));
          MR_hl_field(0, ParseTree2_24, 9) = ((MR_Box) (ModeCtorCheckedMap_46));
          MR_hl_field(0, ParseTree2_24, 10) = ((MR_Box) (IntTypeClasses_47));
          MR_hl_field(0, ParseTree2_24, 11) = ((MR_Box) (IntInstances_48));
          MR_hl_field(0, ParseTree2_24, 12) = ((MR_Box) (IntTypeRepnMap_49));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntForOptSpec_12 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (ParseTree2_24));
          MR_hl_field(2, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_23));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_TypeRepnInfo_14;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type_parse_tree__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CheckedDefn_16;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_59;
  MR_Word conv1_STATE_VARIABLE_UsedModules_61;
  MR_Word conv0_STATE_VARIABLE_Specs_63;

  parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0(
  MR_Word Params_10,
  MR_Word OrigParseTreeInt1_11,
  MR_Word * ParseTreeInt1_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_47,
  MR_Word * STATE_VARIABLE_RecompInfo_48,
  MR_Word STATE_VARIABLE_UsedModules_0_49,
  MR_Word * STATE_VARIABLE_UsedModules_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  MR_Word IntModuleName_18 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 0))));
  MR_Word IntModuleNameContext_19 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 1))));
  MR_Word MaybeVersionNumbers_20 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 2))));
  MR_Word InclMap_21 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 3))));
  MR_Word ImportUseMap_22 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 4))));
  MR_Word IntFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 5))));
  MR_Word ImpFIMSpecs_24 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 6))));
  MR_Word TypeCtorCheckedMap0_25 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 7))));
  MR_Word IntTypeClasses0_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 10))));
  MR_Word IntInstances0_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 11))));
  MR_Word IntPredDecls0_30 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 12))));
  MR_Word IntModeDecls0_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 13))));
  MR_Word IntDeclPragmas0_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 14))));
  MR_Word IntDeclMarkers0_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 15))));
  MR_Word IntPromises_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 16))));
  MR_Word IntTypeRepnMap0_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 17))));
  MR_Word ImpTypeClasses0_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 18))));
  MR_Word TypeCtorCheckedMap_37;
  MR_Word InstCtorCheckedMap_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 8))));
  MR_Word ModeCtorCheckedMap_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_11, 9))));
  MR_Word IntTypeClasses_40;
  MR_Word IntInstances_41;
  MR_Word IntPredDecls_42;
  MR_Word IntModeDecls_43;
  MR_Word IntDeclPragmas_44;
  MR_Word IntTypeRepnMap_45;
  MR_Word ImpTypeClasses_46;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_RecompInfo_1_54;
  MR_Word STATE_VARIABLE_UsedModules_1_55;
  MR_Word STATE_VARIABLE_Specs_1_56;
  MR_Word STATE_VARIABLE_RecompInfo_2_58;
  MR_Word STATE_VARIABLE_UsedModules_2_59;
  MR_Word STATE_VARIABLE_Specs_2_60;
  MR_Word STATE_VARIABLE_RecompInfo_3_62;
  MR_Word STATE_VARIABLE_UsedModules_3_63;
  MR_Word STATE_VARIABLE_Specs_3_64;
  MR_Word STATE_VARIABLE_RecompInfo_4_66;
  MR_Word STATE_VARIABLE_UsedModules_4_67;
  MR_Word STATE_VARIABLE_Specs_4_68;
  MR_Word STATE_VARIABLE_RecompInfo_5_70;
  MR_Word STATE_VARIABLE_UsedModules_5_71;
  MR_Word STATE_VARIABLE_Specs_5_72;
  MR_Word STATE_VARIABLE_RecompInfo_6_74;
  MR_Word STATE_VARIABLE_UsedModules_6_75;
  MR_Word STATE_VARIABLE_Specs_6_76;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_RecompInfo_7_78;
  MR_Word STATE_VARIABLE_UsedModules_7_79;
  MR_Word STATE_VARIABLE_Specs_7_80;
  MR_Word RevItems_165;
  MR_Word RevItems_169;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_54;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_55;
  MR_Box conv4_STATE_VARIABLE_Specs_1_56;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_7_78;
  MR_Box conv12_STATE_VARIABLE_UsedModules_7_79;
  MR_Box conv11_STATE_VARIABLE_Specs_7_80;

  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_6[1]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0_1));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_53, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_53, TypeCtorCheckedMap0_25, &TypeCtorCheckedMap_37, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_47)), &conv6_STATE_VARIABLE_RecompInfo_1_54, ((MR_Box) (STATE_VARIABLE_UsedModules_0_49)), &conv5_STATE_VARIABLE_UsedModules_1_55, ((MR_Box) (STATE_VARIABLE_Specs_0_51)), &conv4_STATE_VARIABLE_Specs_1_56);
  STATE_VARIABLE_RecompInfo_1_54 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_54));
  STATE_VARIABLE_UsedModules_1_55 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_55));
  STATE_VARIABLE_Specs_1_56 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_56));
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_28, (MR_Word) ((MR_Unsigned) 0U), &RevItems_165, STATE_VARIABLE_RecompInfo_1_54, &STATE_VARIABLE_RecompInfo_2_58, STATE_VARIABLE_UsedModules_1_55, &STATE_VARIABLE_UsedModules_2_59, STATE_VARIABLE_Specs_1_56, &STATE_VARIABLE_Specs_2_60);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_165, &IntTypeClasses_40);
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_29, (MR_Word) ((MR_Unsigned) 0U), &RevItems_169, STATE_VARIABLE_RecompInfo_2_58, &STATE_VARIABLE_RecompInfo_3_62, STATE_VARIABLE_UsedModules_2_59, &STATE_VARIABLE_UsedModules_3_63, STATE_VARIABLE_Specs_2_60, &STATE_VARIABLE_Specs_3_64);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_169, &IntInstances_41);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntPredDecls0_30, &IntPredDecls_42, STATE_VARIABLE_RecompInfo_3_62, &STATE_VARIABLE_RecompInfo_4_66, STATE_VARIABLE_UsedModules_3_63, &STATE_VARIABLE_UsedModules_4_67, STATE_VARIABLE_Specs_3_64, &STATE_VARIABLE_Specs_4_68);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntModeDecls0_31, &IntModeDecls_43, STATE_VARIABLE_RecompInfo_4_66, &STATE_VARIABLE_RecompInfo_5_70, STATE_VARIABLE_UsedModules_4_67, &STATE_VARIABLE_UsedModules_5_71, STATE_VARIABLE_Specs_4_68, &STATE_VARIABLE_Specs_5_72);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntDeclPragmas0_32, &IntDeclPragmas_44, STATE_VARIABLE_RecompInfo_5_70, &STATE_VARIABLE_RecompInfo_6_74, STATE_VARIABLE_UsedModules_5_71, &STATE_VARIABLE_UsedModules_6_75, STATE_VARIABLE_Specs_5_72, &STATE_VARIABLE_Specs_6_76);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[5]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int1_9_p_0_2));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_77, IntTypeRepnMap0_35, &IntTypeRepnMap_45, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_74)), &conv13_STATE_VARIABLE_RecompInfo_7_78, ((MR_Box) (STATE_VARIABLE_UsedModules_6_75)), &conv12_STATE_VARIABLE_UsedModules_7_79, ((MR_Box) (STATE_VARIABLE_Specs_6_76)), &conv11_STATE_VARIABLE_Specs_7_80);
  STATE_VARIABLE_RecompInfo_7_78 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_7_78));
  STATE_VARIABLE_UsedModules_7_79 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_7_79));
  STATE_VARIABLE_Specs_7_80 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_7_80));
  parse_tree__equiv_type_parse_tree__replace_in_list__ho16_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpTypeClasses0_36, &ImpTypeClasses_46, STATE_VARIABLE_RecompInfo_7_78, STATE_VARIABLE_RecompInfo_48, STATE_VARIABLE_UsedModules_7_79, STATE_VARIABLE_UsedModules_50, STATE_VARIABLE_Specs_7_80, STATE_VARIABLE_Specs_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt1_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (IntModuleName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (IntModuleNameContext_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (ImportUseMap_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeCtorCheckedMap_37));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_38));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_39));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_40));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_41));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_42));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_43));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_44));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers0_33));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_34));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntTypeRepnMap_45));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpTypeClasses_46));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_TypeRepnInfo_14;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type_parse_tree__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CheckedDefn_16;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_59;
  MR_Word conv1_STATE_VARIABLE_UsedModules_61;
  MR_Word conv0_STATE_VARIABLE_Specs_63;

  parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0(
  MR_Word Params_10,
  MR_Word IndirectIntSpec0_11,
  MR_Word * IndirectIntSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_19,
  MR_Word * STATE_VARIABLE_RecompInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word OrigParseTree2_16 = ((MR_Word) ((MR_hl_field(0, IndirectIntSpec0_11, 0))));
  MR_Word ReadWhy2_17 = ((MR_Unsigned) ((MR_hl_field(0, IndirectIntSpec0_11, 1))) & (MR_Integer) 3);
  MR_Word ParseTree2_18;
  MR_Word IntModuleName_27 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 0))));
  MR_Word IntModuleNameContext_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 1))));
  MR_Word MaybeVersionNumbers_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 2))));
  MR_Word InclMap_30 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 3))));
  MR_Word ImportUseMap_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 4))));
  MR_Word IntFIMSpecs_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 5))));
  MR_Word ImpFIMSpecs_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 6))));
  MR_Word TypeCtorCheckedMap0_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 7))));
  MR_Word IntTypeClasses0_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 10))));
  MR_Word IntInstances0_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 11))));
  MR_Word IntTypeRepnMap0_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 12))));
  MR_Word TypeCtorCheckedMap_38;
  MR_Word InstCtorCheckedMap_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 8))));
  MR_Word ModeCtorCheckedMap_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_16, 9))));
  MR_Word IntTypeClasses_41;
  MR_Word IntInstances_42;
  MR_Word IntTypeRepnMap_43;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_RecompInfo_1_45;
  MR_Word STATE_VARIABLE_UsedModules_1_46;
  MR_Word STATE_VARIABLE_Specs_1_47;
  MR_Word STATE_VARIABLE_RecompInfo_2_49;
  MR_Word STATE_VARIABLE_UsedModules_2_50;
  MR_Word STATE_VARIABLE_Specs_2_51;
  MR_Word STATE_VARIABLE_RecompInfo_3_53;
  MR_Word STATE_VARIABLE_UsedModules_3_54;
  MR_Word STATE_VARIABLE_Specs_3_55;
  MR_Word Var_56;
  MR_Word RevItems_66;
  MR_Word RevItems_70;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_45;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_46;
  MR_Box conv4_STATE_VARIABLE_Specs_1_47;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_20;
  MR_Box conv12_STATE_VARIABLE_UsedModules_22;
  MR_Box conv11_STATE_VARIABLE_Specs_24;

  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_6[1]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_44, TypeCtorCheckedMap0_34, &TypeCtorCheckedMap_38, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_19)), &conv6_STATE_VARIABLE_RecompInfo_1_45, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv5_STATE_VARIABLE_UsedModules_1_46, ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv4_STATE_VARIABLE_Specs_1_47);
  STATE_VARIABLE_RecompInfo_1_45 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_45));
  STATE_VARIABLE_UsedModules_1_46 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_46));
  STATE_VARIABLE_Specs_1_47 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_47));
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_35, (MR_Word) ((MR_Unsigned) 0U), &RevItems_66, STATE_VARIABLE_RecompInfo_1_45, &STATE_VARIABLE_RecompInfo_2_49, STATE_VARIABLE_UsedModules_1_46, &STATE_VARIABLE_UsedModules_2_50, STATE_VARIABLE_Specs_1_47, &STATE_VARIABLE_Specs_2_51);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_66, &IntTypeClasses_41);
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_36, (MR_Word) ((MR_Unsigned) 0U), &RevItems_70, STATE_VARIABLE_RecompInfo_2_49, &STATE_VARIABLE_RecompInfo_3_53, STATE_VARIABLE_UsedModules_2_50, &STATE_VARIABLE_UsedModules_3_54, STATE_VARIABLE_Specs_2_51, &STATE_VARIABLE_Specs_3_55);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_70, &IntInstances_42);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[5]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0_2));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_56, IntTypeRepnMap0_37, &IntTypeRepnMap_43, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_53)), &conv13_STATE_VARIABLE_RecompInfo_20, ((MR_Box) (STATE_VARIABLE_UsedModules_3_54)), &conv12_STATE_VARIABLE_UsedModules_22, ((MR_Box) (STATE_VARIABLE_Specs_3_55)), &conv11_STATE_VARIABLE_Specs_24);
  *STATE_VARIABLE_RecompInfo_20 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_20));
  *STATE_VARIABLE_UsedModules_22 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_22));
  *STATE_VARIABLE_Specs_24 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_24));
  {
    ParseTree2_18 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTree2_18, 0) = ((MR_Box) (IntModuleName_27));
    MR_hl_field(0, ParseTree2_18, 1) = ((MR_Box) (IntModuleNameContext_28));
    MR_hl_field(0, ParseTree2_18, 2) = ((MR_Box) (MaybeVersionNumbers_29));
    MR_hl_field(0, ParseTree2_18, 3) = ((MR_Box) (InclMap_30));
    MR_hl_field(0, ParseTree2_18, 4) = ((MR_Box) (ImportUseMap_31));
    MR_hl_field(0, ParseTree2_18, 5) = ((MR_Box) (IntFIMSpecs_32));
    MR_hl_field(0, ParseTree2_18, 6) = ((MR_Box) (ImpFIMSpecs_33));
    MR_hl_field(0, ParseTree2_18, 7) = ((MR_Box) (TypeCtorCheckedMap_38));
    MR_hl_field(0, ParseTree2_18, 8) = ((MR_Box) (InstCtorCheckedMap_39));
    MR_hl_field(0, ParseTree2_18, 9) = ((MR_Box) (ModeCtorCheckedMap_40));
    MR_hl_field(0, ParseTree2_18, 10) = ((MR_Box) (IntTypeClasses_41));
    MR_hl_field(0, ParseTree2_18, 11) = ((MR_Box) (IntInstances_42));
    MR_hl_field(0, ParseTree2_18, 12) = ((MR_Box) (IntTypeRepnMap_43));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *IndirectIntSpec_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree2_18));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_17));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_TypeRepnInfo_14;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type_parse_tree__replace_in_type_repn_info_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_TypeRepnInfo_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeRepnInfo_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CheckedDefn_16;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_59;
  MR_Word conv1_STATE_VARIABLE_UsedModules_61;
  MR_Word conv0_STATE_VARIABLE_Specs_63;

  parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0(
  MR_Word Params_10,
  MR_Word DirectIntSpec0_11,
  MR_Word * DirectIntSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_19,
  MR_Word * STATE_VARIABLE_RecompInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word OrigParseTree1_16 = ((MR_Word) ((MR_hl_field(0, DirectIntSpec0_11, 0))));
  MR_Word ReadWhy1_17 = ((MR_Unsigned) ((MR_hl_field(0, DirectIntSpec0_11, 1))) & (MR_Integer) 15);
  MR_Word ParseTree1_18;
  MR_Word IntModuleName_27 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 0))));
  MR_Word IntModuleNameContext_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 1))));
  MR_Word MaybeVersionNumbers_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 2))));
  MR_Word InclMap_30 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 3))));
  MR_Word ImportUseMap_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 4))));
  MR_Word IntFIMSpecs_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 5))));
  MR_Word ImpFIMSpecs_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 6))));
  MR_Word TypeCtorCheckedMap0_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 7))));
  MR_Word IntTypeClasses0_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 10))));
  MR_Word IntInstances0_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 11))));
  MR_Word IntPredDecls0_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 12))));
  MR_Word IntModeDecls0_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 13))));
  MR_Word IntDeclPragmas0_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 14))));
  MR_Word IntDeclMarkers0_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 15))));
  MR_Word IntPromises_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 16))));
  MR_Word IntTypeRepnMap0_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 17))));
  MR_Word ImpTypeClasses0_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 18))));
  MR_Word TypeCtorCheckedMap_44;
  MR_Word InstCtorCheckedMap_45 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 8))));
  MR_Word ModeCtorCheckedMap_46 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_16, 9))));
  MR_Word IntTypeClasses_47;
  MR_Word IntInstances_48;
  MR_Word IntPredDecls_49;
  MR_Word IntModeDecls_50;
  MR_Word IntDeclPragmas_51;
  MR_Word IntTypeRepnMap_52;
  MR_Word ImpTypeClasses_53;
  MR_Word Var_54;
  MR_Word STATE_VARIABLE_RecompInfo_1_55;
  MR_Word STATE_VARIABLE_UsedModules_1_56;
  MR_Word STATE_VARIABLE_Specs_1_57;
  MR_Word STATE_VARIABLE_RecompInfo_2_59;
  MR_Word STATE_VARIABLE_UsedModules_2_60;
  MR_Word STATE_VARIABLE_Specs_2_61;
  MR_Word STATE_VARIABLE_RecompInfo_3_63;
  MR_Word STATE_VARIABLE_UsedModules_3_64;
  MR_Word STATE_VARIABLE_Specs_3_65;
  MR_Word STATE_VARIABLE_RecompInfo_4_67;
  MR_Word STATE_VARIABLE_UsedModules_4_68;
  MR_Word STATE_VARIABLE_Specs_4_69;
  MR_Word STATE_VARIABLE_RecompInfo_5_71;
  MR_Word STATE_VARIABLE_UsedModules_5_72;
  MR_Word STATE_VARIABLE_Specs_5_73;
  MR_Word STATE_VARIABLE_RecompInfo_6_75;
  MR_Word STATE_VARIABLE_UsedModules_6_76;
  MR_Word STATE_VARIABLE_Specs_6_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_RecompInfo_7_79;
  MR_Word STATE_VARIABLE_UsedModules_7_80;
  MR_Word STATE_VARIABLE_Specs_7_81;
  MR_Word RevItems_96;
  MR_Word RevItems_100;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_55;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_56;
  MR_Box conv4_STATE_VARIABLE_Specs_1_57;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_7_79;
  MR_Box conv12_STATE_VARIABLE_UsedModules_7_80;
  MR_Box conv11_STATE_VARIABLE_Specs_7_81;

  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_6[1]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_54, TypeCtorCheckedMap0_34, &TypeCtorCheckedMap_44, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_19)), &conv6_STATE_VARIABLE_RecompInfo_1_55, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv5_STATE_VARIABLE_UsedModules_1_56, ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv4_STATE_VARIABLE_Specs_1_57);
  STATE_VARIABLE_RecompInfo_1_55 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_55));
  STATE_VARIABLE_UsedModules_1_56 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_56));
  STATE_VARIABLE_Specs_1_57 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_57));
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_35, (MR_Word) ((MR_Unsigned) 0U), &RevItems_96, STATE_VARIABLE_RecompInfo_1_55, &STATE_VARIABLE_RecompInfo_2_59, STATE_VARIABLE_UsedModules_1_56, &STATE_VARIABLE_UsedModules_2_60, STATE_VARIABLE_Specs_1_57, &STATE_VARIABLE_Specs_2_61);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_96, &IntTypeClasses_47);
  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho24_12_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_36, (MR_Word) ((MR_Unsigned) 0U), &RevItems_100, STATE_VARIABLE_RecompInfo_2_59, &STATE_VARIABLE_RecompInfo_3_63, STATE_VARIABLE_UsedModules_2_60, &STATE_VARIABLE_UsedModules_3_64, STATE_VARIABLE_Specs_2_61, &STATE_VARIABLE_Specs_3_65);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_100, &IntInstances_48);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntPredDecls0_37, &IntPredDecls_49, STATE_VARIABLE_RecompInfo_3_63, &STATE_VARIABLE_RecompInfo_4_67, STATE_VARIABLE_UsedModules_3_64, &STATE_VARIABLE_UsedModules_4_68, STATE_VARIABLE_Specs_3_65, &STATE_VARIABLE_Specs_4_69);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntModeDecls0_38, &IntModeDecls_50, STATE_VARIABLE_RecompInfo_4_67, &STATE_VARIABLE_RecompInfo_5_71, STATE_VARIABLE_UsedModules_4_68, &STATE_VARIABLE_UsedModules_5_72, STATE_VARIABLE_Specs_4_69, &STATE_VARIABLE_Specs_5_73);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntDeclPragmas0_39, &IntDeclPragmas_51, STATE_VARIABLE_RecompInfo_5_71, &STATE_VARIABLE_RecompInfo_6_75, STATE_VARIABLE_UsedModules_5_72, &STATE_VARIABLE_UsedModules_6_76, STATE_VARIABLE_Specs_5_73, &STATE_VARIABLE_Specs_6_77);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[5]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0_2));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[3]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_78, IntTypeRepnMap0_42, &IntTypeRepnMap_52, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_75)), &conv13_STATE_VARIABLE_RecompInfo_7_79, ((MR_Box) (STATE_VARIABLE_UsedModules_6_76)), &conv12_STATE_VARIABLE_UsedModules_7_80, ((MR_Box) (STATE_VARIABLE_Specs_6_77)), &conv11_STATE_VARIABLE_Specs_7_81);
  STATE_VARIABLE_RecompInfo_7_79 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_7_79));
  STATE_VARIABLE_UsedModules_7_80 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_7_80));
  STATE_VARIABLE_Specs_7_81 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_7_81));
  parse_tree__equiv_type_parse_tree__replace_in_list__ho16_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpTypeClasses0_43, &ImpTypeClasses_53, STATE_VARIABLE_RecompInfo_7_79, STATE_VARIABLE_RecompInfo_20, STATE_VARIABLE_UsedModules_7_80, STATE_VARIABLE_UsedModules_22, STATE_VARIABLE_Specs_7_81, STATE_VARIABLE_Specs_24);
  {
    ParseTree1_18 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTree1_18, 0) = ((MR_Box) (IntModuleName_27));
    MR_hl_field(0, ParseTree1_18, 1) = ((MR_Box) (IntModuleNameContext_28));
    MR_hl_field(0, ParseTree1_18, 2) = ((MR_Box) (MaybeVersionNumbers_29));
    MR_hl_field(0, ParseTree1_18, 3) = ((MR_Box) (InclMap_30));
    MR_hl_field(0, ParseTree1_18, 4) = ((MR_Box) (ImportUseMap_31));
    MR_hl_field(0, ParseTree1_18, 5) = ((MR_Box) (IntFIMSpecs_32));
    MR_hl_field(0, ParseTree1_18, 6) = ((MR_Box) (ImpFIMSpecs_33));
    MR_hl_field(0, ParseTree1_18, 7) = ((MR_Box) (TypeCtorCheckedMap_44));
    MR_hl_field(0, ParseTree1_18, 8) = ((MR_Box) (InstCtorCheckedMap_45));
    MR_hl_field(0, ParseTree1_18, 9) = ((MR_Box) (ModeCtorCheckedMap_46));
    MR_hl_field(0, ParseTree1_18, 10) = ((MR_Box) (IntTypeClasses_47));
    MR_hl_field(0, ParseTree1_18, 11) = ((MR_Box) (IntInstances_48));
    MR_hl_field(0, ParseTree1_18, 12) = ((MR_Box) (IntPredDecls_49));
    MR_hl_field(0, ParseTree1_18, 13) = ((MR_Box) (IntModeDecls_50));
    MR_hl_field(0, ParseTree1_18, 14) = ((MR_Box) (IntDeclPragmas_51));
    MR_hl_field(0, ParseTree1_18, 15) = ((MR_Box) (IntDeclMarkers0_40));
    MR_hl_field(0, ParseTree1_18, 16) = ((MR_Box) (IntPromises_41));
    MR_hl_field(0, ParseTree1_18, 17) = ((MR_Box) (IntTypeRepnMap_52));
    MR_hl_field(0, ParseTree1_18, 18) = ((MR_Box) (ImpTypeClasses_53));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DirectIntSpec_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree1_18));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_17));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho16_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho23_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho23_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_abstract_typeclass_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_abstract_typeclass_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word TypeClassInfo0_12,
  MR_Word * TypeClassInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_34,
  MR_Word * STATE_VARIABLE_RecompInfo_35,
  MR_Word STATE_VARIABLE_UsedModules_0_36,
  MR_Word * STATE_VARIABLE_UsedModules_37,
  MR_Word * Specs_16)
{
  MR_Word ClassName_17 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 0))));
  MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 1))));
  MR_Word Constraints0_19 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 2))));
  MR_Word FunDeps_20 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 3))));
  MR_Word ClassInterface_21 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 4))));
  MR_Word TVarSet0_22 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 5))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 6))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 7))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  MR_Integer Arity_26;
  MR_Word ItemName_27;
  MR_Word ItemId_28;
  MR_Word ItemRecompDeps0_29;
  MR_Word TypeEqvMap_30;
  MR_Word Constraints_31;
  MR_Word TVarSet_32;
  MR_Word ItemRecompDeps_33;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), Vars_18, &Arity_26);
  {
    ItemName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_27, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, ItemName_27, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_28, 1) = ((MR_Box) (ItemName_27));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_25, ItemId_28, STATE_VARIABLE_RecompInfo_0_34, &ItemRecompDeps0_29);
  TypeEqvMap_30 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(TypeEqvMap_30, MaybeRecord_11, Constraints0_19, &Constraints_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps_33, STATE_VARIABLE_UsedModules_0_36, STATE_VARIABLE_UsedModules_37);
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_28, ItemRecompDeps_33, STATE_VARIABLE_RecompInfo_0_34, STATE_VARIABLE_RecompInfo_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *TypeClassInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (ClassInterface_21));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_24));
  }
  *Specs_16 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_ancestor_int_spec_9_p_0(
  MR_Word Params_10,
  MR_Word AncestorIntSpec0_11,
  MR_Word * AncestorIntSpec_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_19,
  MR_Word * STATE_VARIABLE_RecompInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word OrigParseTree0_16 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec0_11, 0))));
  MR_Word ReadWhy0_17 = ((MR_Unsigned) ((MR_hl_field(0, AncestorIntSpec0_11, 1))) & (MR_Integer) 1);
  MR_Word ParseTree0_18;

  parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int0_9_p_0(Params_10, OrigParseTree0_16, &ParseTree0_18, STATE_VARIABLE_RecompInfo_0_19, STATE_VARIABLE_RecompInfo_20, STATE_VARIABLE_UsedModules_0_21, STATE_VARIABLE_UsedModules_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *AncestorIntSpec_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree0_18));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_17));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int0_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CheckedDefn_16;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_59;
  MR_Word conv1_STATE_VARIABLE_UsedModules_61;
  MR_Word conv0_STATE_VARIABLE_Specs_63;

  parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int0_9_p_0(
  MR_Word Params_10,
  MR_Word OrigParseTreeInt0_11,
  MR_Word * ParseTreeInt0_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_55,
  MR_Word * STATE_VARIABLE_RecompInfo_56,
  MR_Word STATE_VARIABLE_UsedModules_0_57,
  MR_Word * STATE_VARIABLE_UsedModules_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  MR_Word IntModuleName_18 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 0))));
  MR_Word IntModuleNameContext_19 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 1))));
  MR_Word MaybeVersionNumbers_20 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 2))));
  MR_Word InclMap_21 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 3))));
  MR_Word ImportUseMap_22 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 4))));
  MR_Word IntFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 5))));
  MR_Word ImpFIMSpecs_24 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 6))));
  MR_Word TypeCtorCheckedMap0_25 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 7))));
  MR_Word IntTypeClasses0_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 10))));
  MR_Word IntInstances0_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 11))));
  MR_Word IntPredDecls0_30 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 12))));
  MR_Word IntModeDecls0_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 13))));
  MR_Word IntDeclPragmas0_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 14))));
  MR_Word IntDeclMarkers_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 15))));
  MR_Word IntPromises_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 16))));
  MR_Word ImpTypeClasses0_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 17))));
  MR_Word ImpInstances0_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 18))));
  MR_Word ImpPredDecls0_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 19))));
  MR_Word ImpModeDecls0_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 20))));
  MR_Word ImpDeclPragmas0_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 21))));
  MR_Word ImpDeclMarkers_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 22))));
  MR_Word ImpPromises_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 23))));
  MR_Word TypeCtorCheckedMap_42;
  MR_Word InstCtorCheckedMap_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 8))));
  MR_Word ModeCtorCheckedMap_44 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_11, 9))));
  MR_Word IntTypeClasses_45;
  MR_Word IntInstances_46;
  MR_Word IntPredDecls_47;
  MR_Word IntModeDecls_48;
  MR_Word IntDeclPragmas_49;
  MR_Word ImpTypeClasses_50;
  MR_Word ImpInstances_51;
  MR_Word ImpPredDecls_52;
  MR_Word ImpModeDecls_53;
  MR_Word ImpDeclPragmas_54;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_RecompInfo_1_62;
  MR_Word STATE_VARIABLE_UsedModules_1_63;
  MR_Word STATE_VARIABLE_Specs_1_64;
  MR_Word STATE_VARIABLE_RecompInfo_2_66;
  MR_Word STATE_VARIABLE_UsedModules_2_67;
  MR_Word STATE_VARIABLE_Specs_2_68;
  MR_Word STATE_VARIABLE_RecompInfo_3_70;
  MR_Word STATE_VARIABLE_UsedModules_3_71;
  MR_Word STATE_VARIABLE_Specs_3_72;
  MR_Word STATE_VARIABLE_RecompInfo_4_74;
  MR_Word STATE_VARIABLE_UsedModules_4_75;
  MR_Word STATE_VARIABLE_Specs_4_76;
  MR_Word STATE_VARIABLE_RecompInfo_5_78;
  MR_Word STATE_VARIABLE_UsedModules_5_79;
  MR_Word STATE_VARIABLE_Specs_5_80;
  MR_Word STATE_VARIABLE_RecompInfo_6_82;
  MR_Word STATE_VARIABLE_UsedModules_6_83;
  MR_Word STATE_VARIABLE_Specs_6_84;
  MR_Word STATE_VARIABLE_RecompInfo_7_86;
  MR_Word STATE_VARIABLE_UsedModules_7_87;
  MR_Word STATE_VARIABLE_Specs_7_88;
  MR_Word STATE_VARIABLE_RecompInfo_8_90;
  MR_Word STATE_VARIABLE_UsedModules_8_91;
  MR_Word STATE_VARIABLE_Specs_8_92;
  MR_Word STATE_VARIABLE_RecompInfo_9_94;
  MR_Word STATE_VARIABLE_UsedModules_9_95;
  MR_Word STATE_VARIABLE_Specs_9_96;
  MR_Word STATE_VARIABLE_RecompInfo_10_98;
  MR_Word STATE_VARIABLE_UsedModules_10_99;
  MR_Word STATE_VARIABLE_Specs_10_100;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_62;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_63;
  MR_Box conv4_STATE_VARIABLE_Specs_1_64;

  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_6[1]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_parse_tree_int0_9_p_0_1));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_61, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_61, TypeCtorCheckedMap0_25, &TypeCtorCheckedMap_42, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_55)), &conv6_STATE_VARIABLE_RecompInfo_1_62, ((MR_Box) (STATE_VARIABLE_UsedModules_0_57)), &conv5_STATE_VARIABLE_UsedModules_1_63, ((MR_Box) (STATE_VARIABLE_Specs_0_59)), &conv4_STATE_VARIABLE_Specs_1_64);
  STATE_VARIABLE_RecompInfo_1_62 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_62));
  STATE_VARIABLE_UsedModules_1_63 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_63));
  STATE_VARIABLE_Specs_1_64 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_64));
  parse_tree__equiv_type_parse_tree__replace_in_list__ho13_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntTypeClasses0_28, &IntTypeClasses_45, STATE_VARIABLE_RecompInfo_1_62, &STATE_VARIABLE_RecompInfo_2_66, STATE_VARIABLE_UsedModules_1_63, &STATE_VARIABLE_UsedModules_2_67, STATE_VARIABLE_Specs_1_64, &STATE_VARIABLE_Specs_2_68);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho15_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntInstances0_29, &IntInstances_46, STATE_VARIABLE_RecompInfo_2_66, &STATE_VARIABLE_RecompInfo_3_70, STATE_VARIABLE_UsedModules_2_67, &STATE_VARIABLE_UsedModules_3_71, STATE_VARIABLE_Specs_2_68, &STATE_VARIABLE_Specs_3_72);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntPredDecls0_30, &IntPredDecls_47, STATE_VARIABLE_RecompInfo_3_70, &STATE_VARIABLE_RecompInfo_4_74, STATE_VARIABLE_UsedModules_3_71, &STATE_VARIABLE_UsedModules_4_75, STATE_VARIABLE_Specs_3_72, &STATE_VARIABLE_Specs_4_76);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntModeDecls0_31, &IntModeDecls_48, STATE_VARIABLE_RecompInfo_4_74, &STATE_VARIABLE_RecompInfo_5_78, STATE_VARIABLE_UsedModules_4_75, &STATE_VARIABLE_UsedModules_5_79, STATE_VARIABLE_Specs_4_76, &STATE_VARIABLE_Specs_5_80);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), IntDeclPragmas0_32, &IntDeclPragmas_49, STATE_VARIABLE_RecompInfo_5_78, &STATE_VARIABLE_RecompInfo_6_82, STATE_VARIABLE_UsedModules_5_79, &STATE_VARIABLE_UsedModules_6_83, STATE_VARIABLE_Specs_5_80, &STATE_VARIABLE_Specs_6_84);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho13_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpTypeClasses0_35, &ImpTypeClasses_50, STATE_VARIABLE_RecompInfo_6_82, &STATE_VARIABLE_RecompInfo_7_86, STATE_VARIABLE_UsedModules_6_83, &STATE_VARIABLE_UsedModules_7_87, STATE_VARIABLE_Specs_6_84, &STATE_VARIABLE_Specs_7_88);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho15_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpInstances0_36, &ImpInstances_51, STATE_VARIABLE_RecompInfo_7_86, &STATE_VARIABLE_RecompInfo_8_90, STATE_VARIABLE_UsedModules_7_87, &STATE_VARIABLE_UsedModules_8_91, STATE_VARIABLE_Specs_7_88, &STATE_VARIABLE_Specs_8_92);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpPredDecls0_37, &ImpPredDecls_52, STATE_VARIABLE_RecompInfo_8_90, &STATE_VARIABLE_RecompInfo_9_94, STATE_VARIABLE_UsedModules_8_91, &STATE_VARIABLE_UsedModules_9_95, STATE_VARIABLE_Specs_8_92, &STATE_VARIABLE_Specs_9_96);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpModeDecls0_38, &ImpModeDecls_53, STATE_VARIABLE_RecompInfo_9_94, &STATE_VARIABLE_RecompInfo_10_98, STATE_VARIABLE_UsedModules_9_95, &STATE_VARIABLE_UsedModules_10_99, STATE_VARIABLE_Specs_9_96, &STATE_VARIABLE_Specs_10_100);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(Params_10, (MR_Word) ((MR_Unsigned) 0U), ImpDeclPragmas0_39, &ImpDeclPragmas_54, STATE_VARIABLE_RecompInfo_10_98, STATE_VARIABLE_RecompInfo_56, STATE_VARIABLE_UsedModules_10_99, STATE_VARIABLE_UsedModules_58, STATE_VARIABLE_Specs_10_100, STATE_VARIABLE_Specs_60);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt0_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (IntModuleName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (IntModuleNameContext_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (ImportUseMap_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeCtorCheckedMap_42));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_43));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_44));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_45));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_46));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_47));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_48));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_49));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers_33));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_34));
    MR_hl_field(0, base, 17) = ((MR_Box) (ImpTypeClasses_50));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpInstances_51));
    MR_hl_field(0, base, 19) = ((MR_Box) (ImpPredDecls_52));
    MR_hl_field(0, base, 20) = ((MR_Box) (ImpModeDecls_53));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpDeclPragmas_54));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpDeclMarkers_40));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPromises_41));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho15_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho24_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho24_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_abstract_instance_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_abstract_instance_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word InstanceInfo0_12,
  MR_Word * InstanceInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_38,
  MR_Word * STATE_VARIABLE_RecompInfo_39,
  MR_Word STATE_VARIABLE_UsedModules_0_40,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;
  MR_Word ClassName_16;
  MR_Word Types0_17;
  MR_Word OriginalTypes_18;
  MR_Word Constraints0_19;
  MR_Word InstanceBody_20;
  MR_Word TVarSet0_21;
  MR_Word ContainingModuleName_22;
  MR_Word Context_23;
  MR_Word SeqNum_24;
  MR_Word ModuleName_25;
  MR_Word ItemRecompDeps0_26;
  MR_Word TypeEqvMap_27;
  MR_Word Constraints_28;
  MR_Word TVarSet1_29;
  MR_Word ItemRecompDeps1_30;
  MR_Word Types_31;
  MR_Word TVarSet_34;
  MR_Word ItemRecompDeps_35;
  MR_Word ItemName_36;
  MR_Word ItemId_37;
  MR_Word STATE_VARIABLE_UsedModules_1_43;
  MR_Integer Var_45;
  MR_Word Var_32;
  MR_Word Var_33;

  *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  ClassName_16 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 0))));
  Types0_17 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 1))));
  OriginalTypes_18 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 2))));
  Constraints0_19 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 3))));
  InstanceBody_20 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 4))));
  TVarSet0_21 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 5))));
  ContainingModuleName_22 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 6))));
  Context_23 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 7))));
  SeqNum_24 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 8))));
  ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  succeeded = (STATE_VARIABLE_RecompInfo_0_38 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ContainingModuleName_22, ModuleName_25);
  if (succeeded)
    ItemRecompDeps0_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_42;

    Var_42 = mercury__set__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
    {
      ItemRecompDeps0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ItemRecompDeps0_26, 0) = ((MR_Box) (ModuleName_25));
      MR_hl_field(1, ItemRecompDeps0_26, 1) = ((MR_Box) (Var_42));
    }
  }
  TypeEqvMap_27 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(TypeEqvMap_27, MaybeRecord_11, Constraints0_19, &Constraints_28, TVarSet0_21, &TVarSet1_29, ItemRecompDeps0_26, &ItemRecompDeps1_30, STATE_VARIABLE_UsedModules_0_40, &STATE_VARIABLE_UsedModules_1_43);
  parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(TypeEqvMap_27, MaybeRecord_11, Types0_17, &Types_31, &Var_32, &Var_33, TVarSet1_29, &TVarSet_34, ItemRecompDeps1_30, &ItemRecompDeps_35, STATE_VARIABLE_UsedModules_1_43, STATE_VARIABLE_UsedModules_41);
  Var_45 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_17);
  {
    ItemName_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_36, 0) = ((MR_Box) (ClassName_16));
    MR_hl_field(0, ItemName_36, 1) = ((MR_Box) (Var_45));
  }
  {
    ItemId_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_37, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_37, 1) = ((MR_Box) (ItemName_36));
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_37, ItemRecompDeps_35, STATE_VARIABLE_RecompInfo_0_38, STATE_VARIABLE_RecompInfo_39);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *InstanceInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (OriginalTypes_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstanceBody_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_34));
    MR_hl_field(0, base, 6) = ((MR_Box) (ContainingModuleName_22));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_24));
  }
}

void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_type_repn_eqv_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word TypeRepnInfo0_7,
  MR_Word * TypeRepnInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_7, 0))));
  MR_Word ArgTypeVars_11 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_7, 1))));
  MR_Word Type0_12 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_7, 2))));
  MR_Word TVarSet0_13 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_7, 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_7, 4))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(0, TypeRepnInfo0_7, 5))));
  MR_Integer Arity_16;
  MR_Word TypeCtor_17;
  MR_Word Type_18;
  MR_Word Circ_20;
  MR_Word TVarSet_21;
  MR_Word CircTypes_24;
  MR_Word Var_32;
  MR_Word _Changed_19;
  MR_Word Var_22;
  MR_Word Var_23;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), ArgTypeVars_11, &Arity_16);
  {
    TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_17, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, TypeCtor_17, 1) = ((MR_Box) (Arity_16));
  }
  Var_32 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Type0_12, &Type_18, &_Changed_19, &Circ_20, TVarSet0_13, &TVarSet_21, (MR_Word) ((MR_Unsigned) 0U), &Var_22, Var_32, &Var_23);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_20, &CircTypes_24);
  if ((CircTypes_24 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  else
  {
    MR_Word Var_34;
    MR_Word Pieces_37;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_53;

    {
      Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_45, 1) = ((MR_Box) (TypeCtor_17));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
    Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[89])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[87])), Var_52);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
    Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[85])), Var_42);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type_parse_tree.report_circular_eqv_type\'/2"));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (Context_14));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (Pieces_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *TypeRepnInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_15));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv38_IntForOptSpec_12;
  MR_Word conv37_STATE_VARIABLE_RecompInfo_26;
  MR_Word conv36_STATE_VARIABLE_UsedModules_28;
  MR_Word conv35_STATE_VARIABLE_Specs_30;

  parse_tree__equiv_type_parse_tree__replace_in_int_for_opt_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv38_IntForOptSpec_12, ((MR_Word) (wrapper_arg_3)), &conv37_STATE_VARIABLE_RecompInfo_26, ((MR_Word) (wrapper_arg_5)), &conv36_STATE_VARIABLE_UsedModules_28, ((MR_Word) (wrapper_arg_7)), &conv35_STATE_VARIABLE_Specs_30);
  *wrapper_arg_2 = ((MR_Box) (conv38_IntForOptSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv37_STATE_VARIABLE_RecompInfo_26));
  *wrapper_arg_6 = ((MR_Box) (conv36_STATE_VARIABLE_UsedModules_28));
  *wrapper_arg_8 = ((MR_Box) (conv35_STATE_VARIABLE_Specs_30));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv31_ParseTreePlainOpt_12;
  MR_Word conv30_STATE_VARIABLE_RecompInfo_52;
  MR_Word conv29_STATE_VARIABLE_UsedModules_54;
  MR_Word conv28_STATE_VARIABLE_Specs_56;

  parse_tree__equiv_type_parse_tree__replace_in_parse_tree_plain_opt_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv31_ParseTreePlainOpt_12, ((MR_Word) (wrapper_arg_3)), &conv30_STATE_VARIABLE_RecompInfo_52, ((MR_Word) (wrapper_arg_5)), &conv29_STATE_VARIABLE_UsedModules_54, ((MR_Word) (wrapper_arg_7)), &conv28_STATE_VARIABLE_Specs_56);
  *wrapper_arg_2 = ((MR_Box) (conv31_ParseTreePlainOpt_12));
  *wrapper_arg_4 = ((MR_Box) (conv30_STATE_VARIABLE_RecompInfo_52));
  *wrapper_arg_6 = ((MR_Box) (conv29_STATE_VARIABLE_UsedModules_54));
  *wrapper_arg_8 = ((MR_Box) (conv28_STATE_VARIABLE_Specs_56));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_ParseTreeTransOpt_3;
  MR_Word conv23_RecompInfo_5;
  MR_Word conv22_UsedModules_7;
  MR_Word conv21_Specs_9;

  parse_tree__equiv_type_parse_tree__replace_in_parse_tree_trans_opt_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv24_ParseTreeTransOpt_3, ((MR_Word) (wrapper_arg_3)), &conv23_RecompInfo_5, ((MR_Word) (wrapper_arg_5)), &conv22_UsedModules_7, ((MR_Word) (wrapper_arg_7)), &conv21_Specs_9);
  *wrapper_arg_2 = ((MR_Box) (conv24_ParseTreeTransOpt_3));
  *wrapper_arg_4 = ((MR_Box) (conv23_RecompInfo_5));
  *wrapper_arg_6 = ((MR_Box) (conv22_UsedModules_7));
  *wrapper_arg_8 = ((MR_Box) (conv21_Specs_9));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_IndirectIntSpec_12;
  MR_Word conv16_STATE_VARIABLE_RecompInfo_20;
  MR_Word conv15_STATE_VARIABLE_UsedModules_22;
  MR_Word conv14_STATE_VARIABLE_Specs_24;

  parse_tree__equiv_type_parse_tree__replace_in_indirect_int2_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_IndirectIntSpec_12, ((MR_Word) (wrapper_arg_3)), &conv16_STATE_VARIABLE_RecompInfo_20, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_UsedModules_22, ((MR_Word) (wrapper_arg_7)), &conv14_STATE_VARIABLE_Specs_24);
  *wrapper_arg_2 = ((MR_Box) (conv17_IndirectIntSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_RecompInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_UsedModules_22));
  *wrapper_arg_8 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_DirectIntSpec_12;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_20;
  MR_Word conv8_STATE_VARIABLE_UsedModules_22;
  MR_Word conv7_STATE_VARIABLE_Specs_24;

  parse_tree__equiv_type_parse_tree__replace_in_direct_int1_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_DirectIntSpec_12, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_20, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_22, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_24);
  *wrapper_arg_2 = ((MR_Box) (conv10_DirectIntSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_22));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_AncestorIntSpec_12;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_20;
  MR_Word conv1_STATE_VARIABLE_UsedModules_22;
  MR_Word conv0_STATE_VARIABLE_Specs_24;

  parse_tree__equiv_type_parse_tree__replace_in_ancestor_int_spec_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_AncestorIntSpec_12, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_20, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_22, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_24);
  *wrapper_arg_2 = ((MR_Box) (conv3_AncestorIntSpec_12));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_22));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_24));
}

void MR_CALL 
parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0(
  MR_Word AugCompUnit0_10,
  MR_Word * AugCompUnit_11,
  MR_Word EventSpecMap0_12,
  MR_Word * EventSpecMap_13,
  MR_Word * TypeEqvMap_14,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word STATE_VARIABLE_RecompInfo_0_41,
  MR_Word * STATE_VARIABLE_RecompInfo_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_Word ParseTreeModuleSrc0_18 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 0))));
  MR_Word AncestorIntSpecs0_19 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 1))));
  MR_Word DirectInt1Specs0_20 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 2))));
  MR_Word IndirectInt2Specs0_21 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 3))));
  MR_Word PlainOpts0_22 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 4))));
  MR_Word TransOpts0_23 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 5))));
  MR_Word IntForOptSpecs0_24 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 6))));
  MR_Word ModuleVersionNumbers_26 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 8))));
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_18, 0))));
  MR_Word InstEqvMap_28;
  MR_Word Params_29;
  MR_Word ParseTreeModuleSrc_30;
  MR_Word AncestorIntSpecs_31;
  MR_Word DirectInt1Specs_32;
  MR_Word IndirectInt2Specs_33;
  MR_Word TransOpts_34;
  MR_Word PlainOpts_35;
  MR_Word IntForOptSpecs_36;
  MR_Word TypeRepnSpecs_37 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 7))));
  MR_Word EventSpecList0_38;
  MR_Word EventSpecList_39;
  MR_Word STATE_VARIABLE_UsedModules_1_44;
  MR_Word STATE_VARIABLE_RecompInfo_1_46;
  MR_Word STATE_VARIABLE_UsedModules_2_47;
  MR_Word STATE_VARIABLE_Specs_2_48;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_RecompInfo_2_50;
  MR_Word STATE_VARIABLE_UsedModules_3_51;
  MR_Word STATE_VARIABLE_Specs_3_52;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_RecompInfo_3_54;
  MR_Word STATE_VARIABLE_UsedModules_4_55;
  MR_Word STATE_VARIABLE_Specs_4_56;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_RecompInfo_4_58;
  MR_Word STATE_VARIABLE_UsedModules_5_59;
  MR_Word STATE_VARIABLE_Specs_5_60;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_RecompInfo_5_62;
  MR_Word STATE_VARIABLE_UsedModules_6_63;
  MR_Word STATE_VARIABLE_Specs_6_64;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_RecompInfo_6_66;
  MR_Word STATE_VARIABLE_UsedModules_7_67;
  MR_Word STATE_VARIABLE_Specs_7_68;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_UsedModules_8_71;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_2_50;
  MR_Box conv5_STATE_VARIABLE_UsedModules_3_51;
  MR_Box conv4_STATE_VARIABLE_Specs_3_52;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_3_54;
  MR_Box conv12_STATE_VARIABLE_UsedModules_4_55;
  MR_Box conv11_STATE_VARIABLE_Specs_4_56;
  MR_Box conv20_STATE_VARIABLE_RecompInfo_4_58;
  MR_Box conv19_STATE_VARIABLE_UsedModules_5_59;
  MR_Box conv18_STATE_VARIABLE_Specs_5_60;
  MR_Box conv27_STATE_VARIABLE_RecompInfo_5_62;
  MR_Box conv26_STATE_VARIABLE_UsedModules_6_63;
  MR_Box conv25_STATE_VARIABLE_Specs_6_64;
  MR_Box conv34_STATE_VARIABLE_RecompInfo_6_66;
  MR_Box conv33_STATE_VARIABLE_UsedModules_7_67;
  MR_Box conv32_STATE_VARIABLE_Specs_7_68;
  MR_Box conv41_STATE_VARIABLE_RecompInfo_42;
  MR_Box conv40_STATE_VARIABLE_UsedModules_8_71;
  MR_Box conv39_STATE_VARIABLE_Specs_43;

  parse_tree__build_eqv_maps__build_eqv_maps_in_aug_comp_unit_3_p_0(AugCompUnit0_10, TypeEqvMap_14, &InstEqvMap_28);
  {
    Params_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_29, 0) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Params_29, 1) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(0, Params_29, 2) = ((MR_Box) (InstEqvMap_28));
  }
  STATE_VARIABLE_UsedModules_1_44 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  parse_tree__equiv_type_parse_tree__replace_in_parse_tree_module_src_9_p_0(Params_29, ParseTreeModuleSrc0_18, &ParseTreeModuleSrc_30, STATE_VARIABLE_RecompInfo_0_41, &STATE_VARIABLE_RecompInfo_1_46, STATE_VARIABLE_UsedModules_1_44, &STATE_VARIABLE_UsedModules_2_47, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_2_48);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[1]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49, AncestorIntSpecs0_19, &AncestorIntSpecs_31, ((MR_Box) (STATE_VARIABLE_RecompInfo_1_46)), &conv6_STATE_VARIABLE_RecompInfo_2_50, ((MR_Box) (STATE_VARIABLE_UsedModules_2_47)), &conv5_STATE_VARIABLE_UsedModules_3_51, ((MR_Box) (STATE_VARIABLE_Specs_2_48)), &conv4_STATE_VARIABLE_Specs_3_52);
  STATE_VARIABLE_RecompInfo_2_50 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_2_50));
  STATE_VARIABLE_UsedModules_3_51 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_3_51));
  STATE_VARIABLE_Specs_3_52 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_3_52));
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[2]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_2));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_53, DirectInt1Specs0_20, &DirectInt1Specs_32, ((MR_Box) (STATE_VARIABLE_RecompInfo_2_50)), &conv13_STATE_VARIABLE_RecompInfo_3_54, ((MR_Box) (STATE_VARIABLE_UsedModules_3_51)), &conv12_STATE_VARIABLE_UsedModules_4_55, ((MR_Box) (STATE_VARIABLE_Specs_3_52)), &conv11_STATE_VARIABLE_Specs_4_56);
  STATE_VARIABLE_RecompInfo_3_54 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_3_54));
  STATE_VARIABLE_UsedModules_4_55 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_4_55));
  STATE_VARIABLE_Specs_4_56 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_4_56));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[3]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_3));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_57, IndirectInt2Specs0_21, &IndirectInt2Specs_33, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_54)), &conv20_STATE_VARIABLE_RecompInfo_4_58, ((MR_Box) (STATE_VARIABLE_UsedModules_4_55)), &conv19_STATE_VARIABLE_UsedModules_5_59, ((MR_Box) (STATE_VARIABLE_Specs_4_56)), &conv18_STATE_VARIABLE_Specs_5_60);
  STATE_VARIABLE_RecompInfo_4_58 = ((MR_Word) (conv20_STATE_VARIABLE_RecompInfo_4_58));
  STATE_VARIABLE_UsedModules_5_59 = ((MR_Word) (conv19_STATE_VARIABLE_UsedModules_5_59));
  STATE_VARIABLE_Specs_5_60 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_5_60));
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[4]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_4));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61, TransOpts0_23, &TransOpts_34, ((MR_Box) (STATE_VARIABLE_RecompInfo_4_58)), &conv27_STATE_VARIABLE_RecompInfo_5_62, ((MR_Box) (STATE_VARIABLE_UsedModules_5_59)), &conv26_STATE_VARIABLE_UsedModules_6_63, ((MR_Box) (STATE_VARIABLE_Specs_5_60)), &conv25_STATE_VARIABLE_Specs_6_64);
  STATE_VARIABLE_RecompInfo_5_62 = ((MR_Word) (conv27_STATE_VARIABLE_RecompInfo_5_62));
  STATE_VARIABLE_UsedModules_6_63 = ((MR_Word) (conv26_STATE_VARIABLE_UsedModules_6_63));
  STATE_VARIABLE_Specs_6_64 = ((MR_Word) (conv25_STATE_VARIABLE_Specs_6_64));
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[5]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_5));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_65, PlainOpts0_22, &PlainOpts_35, ((MR_Box) (STATE_VARIABLE_RecompInfo_5_62)), &conv34_STATE_VARIABLE_RecompInfo_6_66, ((MR_Box) (STATE_VARIABLE_UsedModules_6_63)), &conv33_STATE_VARIABLE_UsedModules_7_67, ((MR_Box) (STATE_VARIABLE_Specs_6_64)), &conv32_STATE_VARIABLE_Specs_7_68);
  STATE_VARIABLE_RecompInfo_6_66 = ((MR_Word) (conv34_STATE_VARIABLE_RecompInfo_6_66));
  STATE_VARIABLE_UsedModules_7_67 = ((MR_Word) (conv33_STATE_VARIABLE_UsedModules_7_67));
  STATE_VARIABLE_Specs_7_68 = ((MR_Word) (conv32_STATE_VARIABLE_Specs_7_68));
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[6]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__expand_eqv_types_insts_9_p_0_6));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (Params_29));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_69, IntForOptSpecs0_24, &IntForOptSpecs_36, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_66)), &conv41_STATE_VARIABLE_RecompInfo_42, ((MR_Box) (STATE_VARIABLE_UsedModules_7_67)), &conv40_STATE_VARIABLE_UsedModules_8_71, ((MR_Box) (STATE_VARIABLE_Specs_7_68)), &conv39_STATE_VARIABLE_Specs_43);
  *STATE_VARIABLE_RecompInfo_42 = ((MR_Word) (conv41_STATE_VARIABLE_RecompInfo_42));
  STATE_VARIABLE_UsedModules_8_71 = ((MR_Word) (conv40_STATE_VARIABLE_UsedModules_8_71));
  *STATE_VARIABLE_Specs_43 = ((MR_Word) (conv39_STATE_VARIABLE_Specs_43));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *AugCompUnit_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorIntSpecs_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectInt1Specs_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectInt2Specs_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (PlainOpts_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (TransOpts_34));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntForOptSpecs_36));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeRepnSpecs_37));
    MR_hl_field(0, base, 8) = ((MR_Box) (ModuleVersionNumbers_26));
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap0_12, &EventSpecList0_38);
  parse_tree__equiv_type_parse_tree__replace_in_event_specs_5_p_0(*TypeEqvMap_14, EventSpecList0_38, &EventSpecList_39, STATE_VARIABLE_UsedModules_8_71, STATE_VARIABLE_UsedModules_40);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_39, EventSpecMap_13);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_event_specs_5_p_0(
  MR_Word TypeEqvMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_UsedModules_0_4,
  MR_Word * STATE_VARIABLE_UsedModules_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_5 = STATE_VARIABLE_UsedModules_0_4;
  }
  else
  {
    MR_String Name_11;
    MR_Word EventSpec0_12;
    MR_Word NameSpecs0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word EventSpec_14;
    MR_Word NameSpecs_15;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_UsedModules_1_21;
    MR_Integer EventNumber_22;
    MR_String EventName_23;
    MR_Integer EventLineNumber_24;
    MR_Word Attrs0_25;
    MR_Word SyntAttrNumOrder_26;
    MR_Word Attrs_27;

    Name_11 = ((MR_String) ((MR_hl_field(0, Var_19, 0))));
    EventSpec0_12 = ((MR_Word) ((MR_hl_field(0, Var_19, 1))));
    EventNumber_22 = ((MR_Integer) ((MR_hl_field(0, EventSpec0_12, 0))));
    EventName_23 = ((MR_String) ((MR_hl_field(0, EventSpec0_12, 1))));
    EventLineNumber_24 = ((MR_Integer) ((MR_hl_field(0, EventSpec0_12, 2))));
    Attrs0_25 = ((MR_Word) ((MR_hl_field(0, EventSpec0_12, 3))));
    SyntAttrNumOrder_26 = ((MR_Word) ((MR_hl_field(0, EventSpec0_12, 4))));
    parse_tree__equiv_type_parse_tree__replace_in_event_attrs_5_p_0(TypeEqvMap_1, Attrs0_25, &Attrs_27, STATE_VARIABLE_UsedModules_0_4, &STATE_VARIABLE_UsedModules_1_21);
    {
      EventSpec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, EventSpec_14, 0) = ((MR_Box) (EventNumber_22));
      MR_hl_field(0, EventSpec_14, 1) = ((MR_Box) (EventName_23));
      MR_hl_field(0, EventSpec_14, 2) = ((MR_Box) (EventLineNumber_24));
      MR_hl_field(0, EventSpec_14, 3) = ((MR_Box) (Attrs_27));
      MR_hl_field(0, EventSpec_14, 4) = ((MR_Box) (SyntAttrNumOrder_26));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (Name_11));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (EventSpec_14));
    }
    parse_tree__equiv_type_parse_tree__replace_in_event_specs_5_p_0(TypeEqvMap_1, NameSpecs0_13, &NameSpecs_15, STATE_VARIABLE_UsedModules_1_21, STATE_VARIABLE_UsedModules_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (NameSpecs_15));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_event_attrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_UsedModules_0_4,
  MR_Word * STATE_VARIABLE_UsedModules_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_5 = STATE_VARIABLE_UsedModules_0_4;
  }
  else
  {
    MR_Word Attr0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Attrs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Attr_13;
    MR_Word Attrs_14;
    MR_Word STATE_VARIABLE_UsedModules_1_18;
    MR_Integer AttrNum_19 = ((MR_Integer) ((MR_hl_field(0, Attr0_11, 0))));
    MR_String AttrName_20 = ((MR_String) ((MR_hl_field(0, Attr0_11, 1))));
    MR_Word AttrType0_21 = ((MR_Word) ((MR_hl_field(0, Attr0_11, 2))));
    MR_Word AttrMode_22 = ((MR_Word) ((MR_hl_field(0, Attr0_11, 3))));
    MR_Word MaybeSynthCall_23 = ((MR_Word) ((MR_hl_field(0, Attr0_11, 4))));
    MR_Word TVarSet0_24;
    MR_Word AttrType_25;
    MR_Word _Changed_26;
    MR_Word _TVarSet_27;
    MR_Word _ItemRecompDeps_28;

    TVarSet0_24 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U), AttrType0_21, &AttrType_25, &_Changed_26, TVarSet0_24, &_TVarSet_27, (MR_Word) ((MR_Unsigned) 0U), &_ItemRecompDeps_28, STATE_VARIABLE_UsedModules_0_4, &STATE_VARIABLE_UsedModules_1_18);
    {
      Attr_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Attr_13, 0) = ((MR_Box) (AttrNum_19));
      MR_hl_field(0, Attr_13, 1) = ((MR_Box) (AttrName_20));
      MR_hl_field(0, Attr_13, 2) = ((MR_Box) (AttrType_25));
      MR_hl_field(0, Attr_13, 3) = ((MR_Box) (AttrMode_22));
      MR_hl_field(0, Attr_13, 4) = ((MR_Box) (MaybeSynthCall_23));
    }
    parse_tree__equiv_type_parse_tree__replace_in_event_attrs_5_p_0(HeadVar__1_1, Attrs0_12, &Attrs_14, STATE_VARIABLE_UsedModules_1_18, STATE_VARIABLE_UsedModules_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Attr_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Attrs_14));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_module_src_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_CheckedDefn_16;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_59;
  MR_Word conv1_STATE_VARIABLE_UsedModules_61;
  MR_Word conv0_STATE_VARIABLE_Specs_63;

  parse_tree__equiv_type_parse_tree__replace_in_type_ctor_checked_defn_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_59, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_61, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_59));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_61));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_63));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_parse_tree_module_src_9_p_0(
  MR_Word Params_10,
  MR_Word ParseTreeModuleSrc0_11,
  MR_Word * ParseTreeModuleSrc_12,
  MR_Word STATE_VARIABLE_RecompInfo_0_72,
  MR_Word * STATE_VARIABLE_RecompInfo_73,
  MR_Word STATE_VARIABLE_UsedModules_0_74,
  MR_Word * STATE_VARIABLE_UsedModules_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77)
{
  MR_Word MaybeRecordInt_16 = (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_3[0]));
  MR_Word MaybeRecordImp_17 = (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_3[1]));
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 0))));
  MR_Word ModuleNameContext_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 1))));
  MR_Word InclMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 2))));
  MR_Word ImportUseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 3))));
  MR_Word IntFIMSpecMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 4))));
  MR_Word ImpFIMSpecMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 5))));
  MR_Word IntSelfFIMLangs_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 6))));
  MR_Word ImpSelfFIMLangs_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 7))));
  MR_Word TypeCtorCheckedMap0_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 8))));
  MR_Word TypeErrSpecs_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 11))));
  MR_Word TypeWarnSpecs_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 12))));
  MR_Word InstModeErrSpecs_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 13))));
  MR_Word InstModeWarnSpecs_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 14))));
  MR_Word IntTypeClasses0_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 15))));
  MR_Word IntInstances0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 16))));
  MR_Word IntPredDecls0_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 17))));
  MR_Word IntModeDecls0_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 18))));
  MR_Word IntDeclPragmas0_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 19))));
  MR_Word IntDeclMarkers_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 20))));
  MR_Word IntPromises_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 21))));
  MR_Word IntBadPreds_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 22))));
  MR_Word ImpTypeClasses0_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 23))));
  MR_Word ImpInstances0_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 24))));
  MR_Word ImpPredDecls0_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 25))));
  MR_Word ImpModeDecls0_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 26))));
  MR_Word ImpForeignProcs0_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 28))));
  MR_Word ImpForeignExportEnums_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 29))));
  MR_Word ImpDeclPragmas0_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 30))));
  MR_Word ImpDeclMarkers_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 31))));
  MR_Word ImpImplPragmas_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 32))));
  MR_Word ImpImplMarkers_51 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 33))));
  MR_Word ImpPromises_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 34))));
  MR_Word ImpInitialises_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 35))));
  MR_Word ImpFinalises_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 36))));
  MR_Word ImpMutables0_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 37))));
  MR_Word TypeCtorCheckedMap_56;
  MR_Word InstCtorCheckedMap_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 9))));
  MR_Word ModeCtorCheckedMap_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 10))));
  MR_Word IntTypeClasses_59;
  MR_Word IntInstances_60;
  MR_Word IntPredDecls_61;
  MR_Word IntModeDecls_62;
  MR_Word IntDeclPragmas_63;
  MR_Word ImpTypeClasses_64;
  MR_Word ImpInstances_65;
  MR_Word ImpPredDecls_66;
  MR_Word ImpModeDecls_67;
  MR_Word ImpClauses_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_11, 27))));
  MR_Word ImpDeclPragmas_69;
  MR_Word ImpForeignProcs_70;
  MR_Word ImpMutables_71;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_RecompInfo_1_81;
  MR_Word STATE_VARIABLE_UsedModules_1_82;
  MR_Word STATE_VARIABLE_Specs_1_83;
  MR_Word STATE_VARIABLE_RecompInfo_2_85;
  MR_Word STATE_VARIABLE_UsedModules_2_86;
  MR_Word STATE_VARIABLE_Specs_2_87;
  MR_Word STATE_VARIABLE_RecompInfo_3_89;
  MR_Word STATE_VARIABLE_UsedModules_3_90;
  MR_Word STATE_VARIABLE_Specs_3_91;
  MR_Word STATE_VARIABLE_RecompInfo_4_93;
  MR_Word STATE_VARIABLE_UsedModules_4_94;
  MR_Word STATE_VARIABLE_Specs_4_95;
  MR_Word STATE_VARIABLE_RecompInfo_5_97;
  MR_Word STATE_VARIABLE_UsedModules_5_98;
  MR_Word STATE_VARIABLE_Specs_5_99;
  MR_Word STATE_VARIABLE_RecompInfo_6_101;
  MR_Word STATE_VARIABLE_UsedModules_6_102;
  MR_Word STATE_VARIABLE_Specs_6_103;
  MR_Word STATE_VARIABLE_RecompInfo_7_105;
  MR_Word STATE_VARIABLE_UsedModules_7_106;
  MR_Word STATE_VARIABLE_Specs_7_107;
  MR_Word STATE_VARIABLE_RecompInfo_8_109;
  MR_Word STATE_VARIABLE_UsedModules_8_110;
  MR_Word STATE_VARIABLE_Specs_8_111;
  MR_Word STATE_VARIABLE_RecompInfo_9_113;
  MR_Word STATE_VARIABLE_UsedModules_9_114;
  MR_Word STATE_VARIABLE_Specs_9_115;
  MR_Word STATE_VARIABLE_RecompInfo_10_117;
  MR_Word STATE_VARIABLE_UsedModules_10_118;
  MR_Word STATE_VARIABLE_Specs_10_119;
  MR_Word STATE_VARIABLE_RecompInfo_11_121;
  MR_Word STATE_VARIABLE_UsedModules_11_122;
  MR_Word STATE_VARIABLE_Specs_11_123;
  MR_Word STATE_VARIABLE_RecompInfo_12_125;
  MR_Word STATE_VARIABLE_UsedModules_12_126;
  MR_Word STATE_VARIABLE_Specs_12_127;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_81;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_82;
  MR_Box conv4_STATE_VARIABLE_Specs_1_83;

  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_6[1]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_parse_tree_module_src_9_p_0_1));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (Params_10));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (MaybeRecordInt_16));
    MR_hl_field(0, Var_80, 5) = ((MR_Box) (MaybeRecordImp_17));
  }
  mercury__map__map_values_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_80, TypeCtorCheckedMap0_26, &TypeCtorCheckedMap_56, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_72)), &conv6_STATE_VARIABLE_RecompInfo_1_81, ((MR_Box) (STATE_VARIABLE_UsedModules_0_74)), &conv5_STATE_VARIABLE_UsedModules_1_82, ((MR_Box) (STATE_VARIABLE_Specs_0_76)), &conv4_STATE_VARIABLE_Specs_1_83);
  STATE_VARIABLE_RecompInfo_1_81 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_81));
  STATE_VARIABLE_UsedModules_1_82 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_82));
  STATE_VARIABLE_Specs_1_83 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_83));
  parse_tree__equiv_type_parse_tree__replace_in_list__ho13_11_p_0(Params_10, MaybeRecordInt_16, IntTypeClasses0_33, &IntTypeClasses_59, STATE_VARIABLE_RecompInfo_1_81, &STATE_VARIABLE_RecompInfo_2_85, STATE_VARIABLE_UsedModules_1_82, &STATE_VARIABLE_UsedModules_2_86, STATE_VARIABLE_Specs_1_83, &STATE_VARIABLE_Specs_2_87);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho12_11_p_0(Params_10, MaybeRecordInt_16, IntInstances0_34, &IntInstances_60, STATE_VARIABLE_RecompInfo_2_85, &STATE_VARIABLE_RecompInfo_3_89, STATE_VARIABLE_UsedModules_2_86, &STATE_VARIABLE_UsedModules_3_90, STATE_VARIABLE_Specs_2_87, &STATE_VARIABLE_Specs_3_91);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(Params_10, MaybeRecordInt_16, IntPredDecls0_35, &IntPredDecls_61, STATE_VARIABLE_RecompInfo_3_89, &STATE_VARIABLE_RecompInfo_4_93, STATE_VARIABLE_UsedModules_3_90, &STATE_VARIABLE_UsedModules_4_94, STATE_VARIABLE_Specs_3_91, &STATE_VARIABLE_Specs_4_95);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(Params_10, MaybeRecordInt_16, IntModeDecls0_36, &IntModeDecls_62, STATE_VARIABLE_RecompInfo_4_93, &STATE_VARIABLE_RecompInfo_5_97, STATE_VARIABLE_UsedModules_4_94, &STATE_VARIABLE_UsedModules_5_98, STATE_VARIABLE_Specs_4_95, &STATE_VARIABLE_Specs_5_99);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(Params_10, MaybeRecordInt_16, IntDeclPragmas0_37, &IntDeclPragmas_63, STATE_VARIABLE_RecompInfo_5_97, &STATE_VARIABLE_RecompInfo_6_101, STATE_VARIABLE_UsedModules_5_98, &STATE_VARIABLE_UsedModules_6_102, STATE_VARIABLE_Specs_5_99, &STATE_VARIABLE_Specs_6_103);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho13_11_p_0(Params_10, MaybeRecordImp_17, ImpTypeClasses0_41, &ImpTypeClasses_64, STATE_VARIABLE_RecompInfo_6_101, &STATE_VARIABLE_RecompInfo_7_105, STATE_VARIABLE_UsedModules_6_102, &STATE_VARIABLE_UsedModules_7_106, STATE_VARIABLE_Specs_6_103, &STATE_VARIABLE_Specs_7_107);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho12_11_p_0(Params_10, MaybeRecordImp_17, ImpInstances0_42, &ImpInstances_65, STATE_VARIABLE_RecompInfo_7_105, &STATE_VARIABLE_RecompInfo_8_109, STATE_VARIABLE_UsedModules_7_106, &STATE_VARIABLE_UsedModules_8_110, STATE_VARIABLE_Specs_7_107, &STATE_VARIABLE_Specs_8_111);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(Params_10, MaybeRecordImp_17, ImpPredDecls0_43, &ImpPredDecls_66, STATE_VARIABLE_RecompInfo_8_109, &STATE_VARIABLE_RecompInfo_9_113, STATE_VARIABLE_UsedModules_8_110, &STATE_VARIABLE_UsedModules_9_114, STATE_VARIABLE_Specs_8_111, &STATE_VARIABLE_Specs_9_115);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(Params_10, MaybeRecordImp_17, ImpModeDecls0_44, &ImpModeDecls_67, STATE_VARIABLE_RecompInfo_9_113, &STATE_VARIABLE_RecompInfo_10_117, STATE_VARIABLE_UsedModules_9_114, &STATE_VARIABLE_UsedModules_10_118, STATE_VARIABLE_Specs_9_115, &STATE_VARIABLE_Specs_10_119);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(Params_10, MaybeRecordImp_17, ImpDeclPragmas0_48, &ImpDeclPragmas_69, STATE_VARIABLE_RecompInfo_10_117, &STATE_VARIABLE_RecompInfo_11_121, STATE_VARIABLE_UsedModules_10_118, &STATE_VARIABLE_UsedModules_11_122, STATE_VARIABLE_Specs_10_119, &STATE_VARIABLE_Specs_11_123);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho19_11_p_0(Params_10, MaybeRecordImp_17, ImpForeignProcs0_46, &ImpForeignProcs_70, STATE_VARIABLE_RecompInfo_11_121, &STATE_VARIABLE_RecompInfo_12_125, STATE_VARIABLE_UsedModules_11_122, &STATE_VARIABLE_UsedModules_12_126, STATE_VARIABLE_Specs_11_123, &STATE_VARIABLE_Specs_12_127);
  parse_tree__equiv_type_parse_tree__replace_in_list__ho18_11_p_0(Params_10, MaybeRecordImp_17, ImpMutables0_55, &ImpMutables_71, STATE_VARIABLE_RecompInfo_12_125, STATE_VARIABLE_RecompInfo_73, STATE_VARIABLE_UsedModules_12_126, STATE_VARIABLE_UsedModules_75, STATE_VARIABLE_Specs_12_127, STATE_VARIABLE_Specs_77);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_25));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeCtorCheckedMap_56));
    MR_hl_field(0, base, 9) = ((MR_Box) (InstCtorCheckedMap_57));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModeCtorCheckedMap_58));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeErrSpecs_29));
    MR_hl_field(0, base, 12) = ((MR_Box) (TypeWarnSpecs_30));
    MR_hl_field(0, base, 13) = ((MR_Box) (InstModeErrSpecs_31));
    MR_hl_field(0, base, 14) = ((MR_Box) (InstModeWarnSpecs_32));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntTypeClasses_59));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntInstances_60));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntPredDecls_61));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntModeDecls_62));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntDeclPragmas_63));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntDeclMarkers_38));
    MR_hl_field(0, base, 21) = ((MR_Box) (IntPromises_39));
    MR_hl_field(0, base, 22) = ((MR_Box) (IntBadPreds_40));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpTypeClasses_64));
    MR_hl_field(0, base, 24) = ((MR_Box) (ImpInstances_65));
    MR_hl_field(0, base, 25) = ((MR_Box) (ImpPredDecls_66));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpModeDecls_67));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpClauses_68));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpForeignProcs_70));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpForeignExportEnums_47));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpDeclPragmas_69));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpDeclMarkers_49));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpImplPragmas_50));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpImplMarkers_51));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpPromises_52));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpInitialises_53));
    MR_hl_field(0, base, 36) = ((MR_Box) (ImpFinalises_54));
    MR_hl_field(0, base, 37) = ((MR_Box) (ImpMutables_71));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho19_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho20_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho20_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_foreign_proc_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_foreign_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_20;
  MR_Word conv0_STATE_VARIABLE_UsedModules_22;

  parse_tree__equiv_type_parse_tree__replace_in_structure_sharing_pair_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ItemRecompDeps_20, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_22);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_20));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_foreign_proc_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word FPInfo0_12,
  MR_Word * FPInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_44,
  MR_Word * STATE_VARIABLE_RecompInfo_45,
  MR_Word STATE_VARIABLE_UsedModules_0_46,
  MR_Word * STATE_VARIABLE_UsedModules_47,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;
  MR_Word Attrs0_16;
  MR_Word PredSymName_17;
  MR_Word PredOrFunc_18;
  MR_Word ProcVars_19;
  MR_Word ProcVarset_20;
  MR_Word ProcInstVarset_21;
  MR_Word ProcImpl_22;
  MR_Word Context_23;
  MR_Word SeqNum_24;
  MR_Word ModuleName_25;
  MR_Word ItemName_26;
  MR_Word ItemId_27;
  MR_Word ItemRecompDeps0_28;
  MR_Word UserSharing0_29;
  MR_Word ItemRecompDeps_40;
  MR_Word Attrs_43;
  MR_Integer Var_48;
  MR_Word Sharing0_30;
  MR_Word Types0_32;
  MR_Word TVarSet0_33;
  MR_Word MaybeTypes0_31;
  MR_Word Var_50;

  *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  Attrs0_16 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 0))));
  PredSymName_17 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 1))));
  PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo0_12, 2))) & (MR_Integer) 1);
  ProcVars_19 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 3))));
  ProcVarset_20 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 4))));
  ProcInstVarset_21 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 5))));
  ProcImpl_22 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 6))));
  Context_23 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 7))));
  SeqNum_24 = ((MR_Word) ((MR_hl_field(0, FPInfo0_12, 8))));
  ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  Var_48 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), ProcVars_19);
  {
    ItemName_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_26, 0) = ((MR_Box) (PredSymName_17));
    MR_hl_field(0, ItemName_26, 1) = ((MR_Box) (Var_48));
  }
  {
    ItemId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 9));
    MR_hl_field(0, ItemId_27, 1) = ((MR_Box) (ItemName_26));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_25, ItemId_27, STATE_VARIABLE_RecompInfo_0_44, &ItemRecompDeps0_28);
  UserSharing0_29 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_16);
  succeeded = (UserSharing0_29 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Sharing0_30 = ((MR_Word) ((MR_hl_field(1, UserSharing0_29, 0))));
    MaybeTypes0_31 = ((MR_Word) ((MR_hl_field(1, UserSharing0_29, 1))));
    succeeded = (MaybeTypes0_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_50 = ((MR_Word) ((MR_hl_field(1, MaybeTypes0_31, 0))));
      Types0_32 = ((MR_Word) ((MR_hl_field(0, Var_50, 0))));
      TVarSet0_33 = ((MR_Word) ((MR_hl_field(0, Var_50, 1))));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word TypeEqvMap_34 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
    MR_Word Types_35;
    MR_Word TVarSet_37;
    MR_Word ItemRecompDeps1_38;
    MR_Word Sharing_39;
    MR_Word MaybeTypes_41;
    MR_Word UserSharing_42;
    MR_Word STATE_VARIABLE_UsedModules_1_51;
    MR_Word Var_53;
    MR_Word _AnythingChanged_36;

    parse_tree__equiv_type__replace_in_type_list_location_11_p_0(TypeEqvMap_34, MaybeRecord_11, Types0_32, &Types_35, &_AnythingChanged_36, TVarSet0_33, &TVarSet_37, ItemRecompDeps0_28, &ItemRecompDeps1_38, STATE_VARIABLE_UsedModules_0_46, &STATE_VARIABLE_UsedModules_1_51);
    switch (MR_tag((MR_Word) Sharing0_30)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          Sharing_39 = Sharing0_30;
          ItemRecompDeps_40 = ItemRecompDeps1_38;
          *STATE_VARIABLE_UsedModules_47 = STATE_VARIABLE_UsedModules_1_51;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingPairs0_59 = ((MR_Word) ((MR_hl_field(1, Sharing0_30, 0))));
          MR_Word SharingPairs_60;
          MR_Word Var_61;
          MR_Box conv4_ItemRecompDeps_40;
          MR_Box conv3_STATE_VARIABLE_UsedModules_47;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_7[0]));
            MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_foreign_proc_9_p_0_1));
            MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_61, 3) = ((MR_Box) (TypeEqvMap_34));
            MR_hl_field(0, Var_61, 4) = ((MR_Box) (MaybeRecord_11));
            MR_hl_field(0, Var_61, 5) = ((MR_Box) (TVarSet0_33));
          }
          mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_2[0]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_2[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_61, SharingPairs0_59, &SharingPairs_60, ((MR_Box) (ItemRecompDeps1_38)), &conv4_ItemRecompDeps_40, ((MR_Box) (STATE_VARIABLE_UsedModules_1_51)), &conv3_STATE_VARIABLE_UsedModules_47);
          ItemRecompDeps_40 = ((MR_Word) (conv4_ItemRecompDeps_40));
          *STATE_VARIABLE_UsedModules_47 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_47));
          {
            Sharing_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Sharing_39, 0) = ((MR_Box) (SharingPairs_60));
          }
        }
        break;
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (Types_35));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (TVarSet_37));
    }
    {
      MaybeTypes_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTypes_41, 0) = ((MR_Box) (Var_53));
    }
    {
      UserSharing_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UserSharing_42, 0) = ((MR_Box) (Sharing_39));
      MR_hl_field(1, UserSharing_42, 1) = ((MR_Box) (MaybeTypes_41));
    }
    parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_42, Attrs0_16, &Attrs_43);
  }
  else
  {
    Attrs_43 = Attrs0_16;
    ItemRecompDeps_40 = ItemRecompDeps0_28;
    *STATE_VARIABLE_UsedModules_47 = STATE_VARIABLE_UsedModules_0_46;
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_27, ItemRecompDeps_40, STATE_VARIABLE_RecompInfo_0_44, STATE_VARIABLE_RecompInfo_45);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *FPInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Attrs_43));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredSymName_17));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcVars_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcVarset_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (ProcInstVarset_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (ProcImpl_22));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho18_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho21_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho21_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_mutable_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_mutable_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word MutableInfo0_12,
  MR_Word * MutableInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_22,
  MR_Word * STATE_VARIABLE_RecompInfo_23,
  MR_Word STATE_VARIABLE_UsedModules_0_24,
  MR_Word * STATE_VARIABLE_UsedModules_25,
  MR_Word * HeadVar__9_9)
{
  MR_String MutName_16;
  MR_Word ModuleName_17;
  MR_Word QualName_18;
  MR_Word ItemId_19;
  MR_Word ItemRecompDeps0_20;
  MR_Word ItemRecompDeps_21;
  MR_Word Var_27;
  MR_String MutName_40;
  MR_Word OrigType_41;
  MR_Word Type0_42;
  MR_Word OrigInst_43;
  MR_Word Inst0_44;
  MR_Word InitValue_45;
  MR_Word Attrs_46;
  MR_Word Varset_47;
  MR_Word Context_48;
  MR_Word SeqNum_49;
  MR_Word TypeEqvMap_50;
  MR_Word TVarSet0_51;
  MR_Word Type_52;
  MR_Word InstEqvMap_55;
  MR_Word Inst_56;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_57;
  MR_Word STATE_VARIABLE_UsedModules_1_58;
  MR_Word _TypeChanged_53;
  MR_Word _TVarSet_54;

  *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  MutName_16 = ((MR_String) ((MR_hl_field(0, MutableInfo0_12, 0))));
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  {
    QualName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, QualName_18, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(1, QualName_18, 1) = ((MR_Box) (MutName_16));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (QualName_18));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    ItemId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_19, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 8));
    MR_hl_field(0, ItemId_19, 1) = ((MR_Box) (Var_27));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_17, ItemId_19, STATE_VARIABLE_RecompInfo_0_22, &ItemRecompDeps0_20);
  MutName_40 = ((MR_String) ((MR_hl_field(0, MutableInfo0_12, 0))));
  OrigType_41 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 1))));
  Type0_42 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 2))));
  OrigInst_43 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 3))));
  Inst0_44 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 4))));
  InitValue_45 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 5))));
  Attrs_46 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 6))));
  Varset_47 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 7))));
  Context_48 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 8))));
  SeqNum_49 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_12, 9))));
  TypeEqvMap_50 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  TVarSet0_51 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_50, MaybeRecord_11, Type0_42, &Type_52, &_TypeChanged_53, TVarSet0_51, &_TVarSet_54, ItemRecompDeps0_20, &STATE_VARIABLE_ItemRecompDeps_1_57, STATE_VARIABLE_UsedModules_0_24, &STATE_VARIABLE_UsedModules_1_58);
  InstEqvMap_55 = ((MR_Word) ((MR_hl_field(0, Params_10, 2))));
  parse_tree__equiv_type__replace_in_inst_8_p_0(InstEqvMap_55, MaybeRecord_11, Inst0_44, &Inst_56, STATE_VARIABLE_ItemRecompDeps_1_57, &ItemRecompDeps_21, STATE_VARIABLE_UsedModules_1_58, STATE_VARIABLE_UsedModules_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *MutableInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MutName_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigType_41));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_52));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigInst_43));
    MR_hl_field(0, base, 4) = ((MR_Box) (Inst_56));
    MR_hl_field(0, base, 5) = ((MR_Box) (InitValue_45));
    MR_hl_field(0, base, 6) = ((MR_Box) (Attrs_46));
    MR_hl_field(0, base, 7) = ((MR_Box) (Varset_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (Context_48));
    MR_hl_field(0, base, 9) = ((MR_Box) (SeqNum_49));
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_19, ItemRecompDeps_21, STATE_VARIABLE_RecompInfo_0_22, STATE_VARIABLE_RecompInfo_23);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho17_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho22_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho22_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Subst_14;
  MR_Word conv9_STATE_VARIABLE_TVarSet_23;
  MR_Word conv8_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Word conv7_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type_parse_tree__replace_in_subst_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_Subst_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv10_Subst_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_ItemRecompDeps_25));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Constraint_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_23;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_25));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word DeclPragma0_12,
  MR_Word * DeclPragma_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word * Specs_16)
{
  switch (MR_tag((MR_Word) DeclPragma0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *DeclPragma_13 = DeclPragma0_12;
        *Specs_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_30 = STATE_VARIABLE_RecompInfo_0_29;
        *STATE_VARIABLE_UsedModules_32 = STATE_VARIABLE_UsedModules_0_31;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DeclPragma0_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecConstr0_17 = ((MR_Word) ((MR_hl_field(3, DeclPragma0_12, 1))));
            MR_Word TypeSpecConstr_18;
            MR_Word PragmaModuleName_33;
            MR_Word OoMConstraints0_34;
            MR_Word ApplyToSupers_35;
            MR_Word OoMSubsts0_36;
            MR_Word TVarSet0_37;
            MR_Word GatheredItemIds0_38;
            MR_Word Context_39;
            MR_Word SeqNum_40;
            MR_Word HeadConstraint0_41;
            MR_Word TailConstraints0_42;
            MR_Word ModuleName_43;
            MR_Word ItemRecompDeps0_44;
            MR_Word TypeEqvMap_45;
            MR_Word HeadConstraint_46;
            MR_Word TVarSet1_47;
            MR_Word ItemRecompDeps1_48;
            MR_Word TailConstraints_49;
            MR_Word TVarSet2_50;
            MR_Word ItemRecompDeps2_51;
            MR_Word OoMConstraints_52;
            MR_Word HeadSubst0_53;
            MR_Word TailSubsts0_54;
            MR_Word HeadSubst_55;
            MR_Word TVarSet3_56;
            MR_Word ItemRecompDeps3_57;
            MR_Word TailSubsts_58;
            MR_Word TVarSet_59;
            MR_Word ItemRecompDeps_60;
            MR_Word OoMSubsts_61;
            MR_Word GatheredItemIds_62;
            MR_Word STATE_VARIABLE_UsedModules_1_64;
            MR_Word Var_65;
            MR_Word STATE_VARIABLE_UsedModules_2_66;
            MR_Word STATE_VARIABLE_UsedModules_3_67;
            MR_Word Var_68;
            MR_Word HeadSubst0_75;
            MR_Word TailSubsts0_76;
            MR_Word HeadSubst_77;
            MR_Word TailSubsts_78;
            MR_Box conv6_TVarSet2_50;
            MR_Box conv5_ItemRecompDeps2_51;
            MR_Box conv4_STATE_VARIABLE_UsedModules_2_66;
            MR_Box conv13_TVarSet_59;
            MR_Box conv12_ItemRecompDeps_60;
            MR_Box conv11_STATE_VARIABLE_UsedModules_32;

            *Specs_16 = (MR_Word) ((MR_Unsigned) 0U);
            PragmaModuleName_33 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 0))));
            OoMConstraints0_34 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 1))));
            ApplyToSupers_35 = ((MR_Unsigned) ((MR_hl_field(0, TypeSpecConstr0_17, 2))) & (MR_Integer) 1);
            OoMSubsts0_36 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 3))));
            TVarSet0_37 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 4))));
            GatheredItemIds0_38 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 5))));
            Context_39 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 6))));
            SeqNum_40 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_17, 7))));
            HeadConstraint0_41 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_34, 0))));
            TailConstraints0_42 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_34, 1))));
            ModuleName_43 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
            TypeEqvMap_45 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
            {
              ItemRecompDeps0_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ItemRecompDeps0_44, 0) = ((MR_Box) (ModuleName_43));
              MR_hl_field(1, ItemRecompDeps0_44, 1) = ((MR_Box) (GatheredItemIds0_38));
            }
            parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_constraint_location_10_p_0(TypeEqvMap_45, MaybeRecord_11, HeadConstraint0_41, &HeadConstraint_46, TVarSet0_37, &TVarSet1_47, ItemRecompDeps0_44, &ItemRecompDeps1_48, STATE_VARIABLE_UsedModules_0_31, &STATE_VARIABLE_UsedModules_1_64);
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[3]));
              MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0_1));
              MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_65, 3) = ((MR_Box) (TypeEqvMap_45));
              MR_hl_field(0, Var_65, 4) = ((MR_Box) (MaybeRecord_11));
            }
            mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_65, TailConstraints0_42, &TailConstraints_49, ((MR_Box) (TVarSet1_47)), &conv6_TVarSet2_50, ((MR_Box) (ItemRecompDeps1_48)), &conv5_ItemRecompDeps2_51, ((MR_Box) (STATE_VARIABLE_UsedModules_1_64)), &conv4_STATE_VARIABLE_UsedModules_2_66);
            TVarSet2_50 = ((MR_Word) (conv6_TVarSet2_50));
            ItemRecompDeps2_51 = ((MR_Word) (conv5_ItemRecompDeps2_51));
            STATE_VARIABLE_UsedModules_2_66 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_2_66));
            {
              OoMConstraints_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMConstraints_52, 0) = ((MR_Box) (HeadConstraint_46));
              MR_hl_field(0, OoMConstraints_52, 1) = ((MR_Box) (TailConstraints_49));
            }
            HeadSubst0_53 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_36, 0))));
            TailSubsts0_54 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_36, 1))));
            HeadSubst0_75 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_53, 0))));
            TailSubsts0_76 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_53, 1))));
            parse_tree__equiv_type_parse_tree__replace_in_tvar_substs_12_p_0(TypeEqvMap_45, MaybeRecord_11, HeadSubst0_75, &HeadSubst_77, TailSubsts0_76, &TailSubsts_78, TVarSet2_50, &TVarSet3_56, ItemRecompDeps2_51, &ItemRecompDeps3_57, STATE_VARIABLE_UsedModules_2_66, &STATE_VARIABLE_UsedModules_3_67);
            {
              HeadSubst_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadSubst_55, 0) = ((MR_Box) (HeadSubst_77));
              MR_hl_field(0, HeadSubst_55, 1) = ((MR_Box) (TailSubsts_78));
            }
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[4]));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_info_9_p_0_2));
              MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_68, 3) = ((MR_Box) (TypeEqvMap_45));
              MR_hl_field(0, Var_68, 4) = ((MR_Box) (MaybeRecord_11));
            }
            mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[6]), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_68, TailSubsts0_54, &TailSubsts_58, ((MR_Box) (TVarSet3_56)), &conv13_TVarSet_59, ((MR_Box) (ItemRecompDeps3_57)), &conv12_ItemRecompDeps_60, ((MR_Box) (STATE_VARIABLE_UsedModules_3_67)), &conv11_STATE_VARIABLE_UsedModules_32);
            TVarSet_59 = ((MR_Word) (conv13_TVarSet_59));
            ItemRecompDeps_60 = ((MR_Word) (conv12_ItemRecompDeps_60));
            *STATE_VARIABLE_UsedModules_32 = ((MR_Word) (conv11_STATE_VARIABLE_UsedModules_32));
            {
              OoMSubsts_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMSubsts_61, 0) = ((MR_Box) (HeadSubst_55));
              MR_hl_field(0, OoMSubsts_61, 1) = ((MR_Box) (TailSubsts_58));
            }
            if ((ItemRecompDeps_60 == (MR_Word) ((MR_Unsigned) 0U)))
              GatheredItemIds_62 = GatheredItemIds0_38;
            else
              GatheredItemIds_62 = ((MR_Word) ((MR_hl_field(1, ItemRecompDeps_60, 1))));
            {
              TypeSpecConstr_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecConstr_18, 0) = ((MR_Box) (PragmaModuleName_33));
              MR_hl_field(0, TypeSpecConstr_18, 1) = ((MR_Box) (OoMConstraints_52));
              MR_hl_field(0, TypeSpecConstr_18, 2) = (MR_Box) ((MR_Unsigned) (ApplyToSupers_35));
              MR_hl_field(0, TypeSpecConstr_18, 3) = ((MR_Box) (OoMSubsts_61));
              MR_hl_field(0, TypeSpecConstr_18, 4) = ((MR_Box) (TVarSet_59));
              MR_hl_field(0, TypeSpecConstr_18, 5) = ((MR_Box) (GatheredItemIds_62));
              MR_hl_field(0, TypeSpecConstr_18, 6) = ((MR_Box) (Context_39));
              MR_hl_field(0, TypeSpecConstr_18, 7) = ((MR_Box) (SeqNum_40));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *DeclPragma_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpecConstr_18));
            }
            *STATE_VARIABLE_RecompInfo_30 = STATE_VARIABLE_RecompInfo_0_29;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpec0_19 = ((MR_Word) ((MR_hl_field(3, DeclPragma0_12, 1))));
            MR_Word TypeSpec_20;

            parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_type_spec_9_p_0(Params_10, MaybeRecord_11, TypeSpec0_19, &TypeSpec_20, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, Specs_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *DeclPragma_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpec_20));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          {
            *DeclPragma_13 = DeclPragma0_12;
            *Specs_16 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_RecompInfo_30 = STATE_VARIABLE_RecompInfo_0_29;
            *STATE_VARIABLE_UsedModules_32 = STATE_VARIABLE_UsedModules_0_31;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_constraint_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_ConstraintArg_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_26;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_28;
  MR_Word conv0_STATE_VARIABLE_UsedModules_30;

  parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_type_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_ConstraintArg_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_26, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_28, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_30);
  *wrapper_arg_2 = ((MR_Box) (conv3_ConstraintArg_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_26));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_28));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_30));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_constraint_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 0))));
  MR_Word ConstraintArgs0_19 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 1))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 2))));
  MR_Word ConstraintArgs_21;
  MR_Word Var_28;
  MR_Box conv6_STATE_VARIABLE_TVarSet_23;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Box conv4_STATE_VARIABLE_UsedModules_27;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[2]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_var_or_ground_constraint_location_10_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (MaybeRecord_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_28, ConstraintArgs0_19, &ConstraintArgs_21, ((MR_Box) (STATE_VARIABLE_TVarSet_0_22)), &conv6_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_24)), &conv5_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_27);
  *STATE_VARIABLE_TVarSet_23 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_23));
  *STATE_VARIABLE_ItemRecompDeps_25 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_25));
  *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConstraintArgs_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_20));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_decl_pragma_type_spec_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word TypeSpecInfo0_12,
  MR_Word * TypeSpecInfo_13,
  MR_Word RecompInfo_14,
  MR_Word * RecompInfo_6,
  MR_Word STATE_VARIABLE_UsedModules_0_33,
  MR_Word * STATE_VARIABLE_UsedModules_34,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;
  MR_Word PFUMM_16;
  MR_Word PredSymName_17;
  MR_Word SrcModuleName_18;
  MR_Word Subst0_19;
  MR_Word TVarSet0_20;
  MR_Word GatheredItemIds0_21;
  MR_Word Context_22;
  MR_Word SeqNum_23;
  MR_Word ModuleName_24;
  MR_Word ItemRecompDeps0_26;
  MR_Word TypeEqvMap_27;
  MR_Word Subst_28;
  MR_Word TVarSet_29;
  MR_Word ItemRecompDeps_30;
  MR_Word GatheredItemIds_31;
  MR_Word HeadSubst0_41;
  MR_Word TailSubsts0_42;
  MR_Word HeadSubst_43;
  MR_Word TailSubsts_44;

  *RecompInfo_6 = RecompInfo_14;
  *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  PFUMM_16 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 0))));
  PredSymName_17 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 1))));
  SrcModuleName_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 2))));
  Subst0_19 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 3))));
  TVarSet0_20 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 4))));
  GatheredItemIds0_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 5))));
  Context_22 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 6))));
  SeqNum_23 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_12, 7))));
  ModuleName_24 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  succeeded = (RecompInfo_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    MR_Word Var_39;

    succeeded = ((MR_tag((MR_Word) PredSymName_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_39 = ((MR_Word) ((MR_hl_field(1, PredSymName_17, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_39);
    }
  }
  if (succeeded)
    ItemRecompDeps0_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      ItemRecompDeps0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ItemRecompDeps0_26, 0) = ((MR_Box) (ModuleName_24));
      MR_hl_field(1, ItemRecompDeps0_26, 1) = ((MR_Box) (GatheredItemIds0_21));
    }
  TypeEqvMap_27 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  HeadSubst0_41 = ((MR_Word) ((MR_hl_field(0, Subst0_19, 0))));
  TailSubsts0_42 = ((MR_Word) ((MR_hl_field(0, Subst0_19, 1))));
  parse_tree__equiv_type_parse_tree__replace_in_tvar_substs_12_p_0(TypeEqvMap_27, MaybeRecord_11, HeadSubst0_41, &HeadSubst_43, TailSubsts0_42, &TailSubsts_44, TVarSet0_20, &TVarSet_29, ItemRecompDeps0_26, &ItemRecompDeps_30, STATE_VARIABLE_UsedModules_0_33, STATE_VARIABLE_UsedModules_34);
  {
    Subst_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Subst_28, 0) = ((MR_Box) (HeadSubst_43));
    MR_hl_field(0, Subst_28, 1) = ((MR_Box) (TailSubsts_44));
  }
  if ((ItemRecompDeps_30 == (MR_Word) ((MR_Unsigned) 0U)))
    GatheredItemIds_31 = GatheredItemIds0_21;
  else
    GatheredItemIds_31 = ((MR_Word) ((MR_hl_field(1, ItemRecompDeps_30, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *TypeSpecInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PFUMM_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredSymName_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (SrcModuleName_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Subst_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (TVarSet_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (GatheredItemIds_31));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_22));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_23));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_tvar_substs_12_p_0(
  MR_Word TypeEqvMap_13,
  MR_Word MaybeRecord_14,
  MR_Word Subst0_15,
  MR_Word * Subst_16,
  MR_Word TailVarsTypes0_17,
  MR_Word * TailVarsTypes_18,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_32,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35)
{
  MR_Word HeadVar_22 = ((MR_Word) ((MR_hl_field(0, Subst0_15, 0))));
  MR_Word HeadType0_23 = ((MR_Word) ((MR_hl_field(0, Subst0_15, 1))));
  MR_Word HeadType_24;
  MR_Word STATE_VARIABLE_TVarSet_1_36;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_37;
  MR_Word STATE_VARIABLE_UsedModules_1_38;
  MR_Word Var_25;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_13, MaybeRecord_14, HeadType0_23, &HeadType_24, &Var_25, STATE_VARIABLE_TVarSet_0_30, &STATE_VARIABLE_TVarSet_1_36, STATE_VARIABLE_ItemRecompDeps_0_32, &STATE_VARIABLE_ItemRecompDeps_1_37, STATE_VARIABLE_UsedModules_0_34, &STATE_VARIABLE_UsedModules_1_38);
  if ((TailVarsTypes0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailVarsTypes_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_31 = STATE_VARIABLE_TVarSet_1_36;
    *STATE_VARIABLE_ItemRecompDeps_33 = STATE_VARIABLE_ItemRecompDeps_1_37;
    *STATE_VARIABLE_UsedModules_35 = STATE_VARIABLE_UsedModules_1_38;
  }
  else
  {
    MR_Word HeadTailVarType0_26 = ((MR_Word) ((MR_hl_field(1, TailVarsTypes0_17, 0))));
    MR_Word TailTailVarsTypes0_27 = ((MR_Word) ((MR_hl_field(1, TailVarsTypes0_17, 1))));
    MR_Word HeadTailVarType_28;
    MR_Word TailTailVarsTypes_29;

    parse_tree__equiv_type_parse_tree__replace_in_tvar_substs_12_p_0(TypeEqvMap_13, MaybeRecord_14, HeadTailVarType0_26, &HeadTailVarType_28, TailTailVarsTypes0_27, &TailTailVarsTypes_29, STATE_VARIABLE_TVarSet_1_36, STATE_VARIABLE_TVarSet_31, STATE_VARIABLE_ItemRecompDeps_1_37, STATE_VARIABLE_ItemRecompDeps_33, STATE_VARIABLE_UsedModules_1_38, STATE_VARIABLE_UsedModules_35);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailVarsTypes_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailVarType_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTailVarsTypes_29));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Subst_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadVar_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (HeadType_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho13_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho26_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_typeclass_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_typeclass_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Decl_14;
  MR_Word conv2_STATE_VARIABLE_ItemRecompDeps_50;
  MR_Word conv1_STATE_VARIABLE_UsedModules_52;
  MR_Word conv0_STATE_VARIABLE_Specs_54;

  parse_tree__equiv_type_parse_tree__replace_in_class_decl_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Decl_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ItemRecompDeps_50, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_52, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_54);
  *wrapper_arg_2 = ((MR_Box) (conv3_Decl_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ItemRecompDeps_50));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_52));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_54));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_typeclass_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word TypeClassInfo0_12,
  MR_Word * TypeClassInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_38,
  MR_Word * STATE_VARIABLE_RecompInfo_39,
  MR_Word STATE_VARIABLE_UsedModules_0_40,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word * Specs_16)
{
  MR_Word ClassName_17 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 0))));
  MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 1))));
  MR_Word Constraints0_19 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 2))));
  MR_Word FunDeps_20 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 3))));
  MR_Word ClassInterface0_21 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 4))));
  MR_Word TVarSet0_22 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 5))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 6))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo0_12, 7))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  MR_Integer Arity_26;
  MR_Word ItemName_27;
  MR_Word ItemId_28;
  MR_Word ItemRecompDeps0_29;
  MR_Word TypeEqvMap_30;
  MR_Word Constraints_31;
  MR_Word TVarSet_32;
  MR_Word ItemRecompDeps1_33;
  MR_Word ClassInterface_34;
  MR_Word ItemRecompDeps_35;
  MR_Word STATE_VARIABLE_UsedModules_1_43;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[2]), Vars_18, &Arity_26);
  {
    ItemName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_27, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, ItemName_27, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_28, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_28, 1) = ((MR_Box) (ItemName_27));
  }
  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_4_p_0(ModuleName_25, ItemId_28, STATE_VARIABLE_RecompInfo_0_38, &ItemRecompDeps0_29);
  TypeEqvMap_30 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(TypeEqvMap_30, MaybeRecord_11, Constraints0_19, &Constraints_31, TVarSet0_22, &TVarSet_32, ItemRecompDeps0_29, &ItemRecompDeps1_33, STATE_VARIABLE_UsedModules_0_40, &STATE_VARIABLE_UsedModules_1_43);
  if ((ClassInterface0_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ClassInterface_34 = (MR_Word) ((MR_Unsigned) 0U);
    ItemRecompDeps_35 = ItemRecompDeps1_33;
    *Specs_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_41 = STATE_VARIABLE_UsedModules_1_43;
  }
  else
  {
    MR_Word Methods0_36 = ((MR_Word) ((MR_hl_field(1, ClassInterface0_21, 0))));
    MR_Word Methods_37;
    MR_Word Var_51;
    MR_Box conv6_ItemRecompDeps_35;
    MR_Box conv5_STATE_VARIABLE_UsedModules_41;
    MR_Box conv4_Specs_16;

    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[1]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_typeclass_info_9_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (Params_10));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (MaybeRecord_11));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[1]), Var_51, Methods0_36, &Methods_37, ((MR_Box) (ItemRecompDeps1_33)), &conv6_ItemRecompDeps_35, ((MR_Box) (STATE_VARIABLE_UsedModules_1_43)), &conv5_STATE_VARIABLE_UsedModules_41, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_16);
    ItemRecompDeps_35 = ((MR_Word) (conv6_ItemRecompDeps_35));
    *STATE_VARIABLE_UsedModules_41 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_41));
    *Specs_16 = ((MR_Word) (conv4_Specs_16));
    {
      ClassInterface_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ClassInterface_34, 0) = ((MR_Box) (Methods_37));
    }
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_28, ItemRecompDeps_35, STATE_VARIABLE_RecompInfo_0_38, STATE_VARIABLE_RecompInfo_39);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *TypeClassInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (ClassInterface_34));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho12_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho27_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho27_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_instance_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_instance_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word InstanceInfo0_12,
  MR_Word * InstanceInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word STATE_VARIABLE_UsedModules_0_42,
  MR_Word * STATE_VARIABLE_UsedModules_43,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;
  MR_Word ClassName_16;
  MR_Word Types0_17;
  MR_Word OriginalTypes_18;
  MR_Word Constraints0_19;
  MR_Word InstanceBody0_20;
  MR_Word TVarSet0_21;
  MR_Word ContainingModuleName_22;
  MR_Word Context_23;
  MR_Word SeqNum_24;
  MR_Word ModuleName_25;
  MR_Word ItemRecompDeps0_26;
  MR_Word TypeEqvMap_27;
  MR_Word Constraints_28;
  MR_Word TVarSet1_29;
  MR_Word ItemRecompDeps1_30;
  MR_Word Types_31;
  MR_Word TVarSet_34;
  MR_Word ItemRecompDeps_35;
  MR_Word InstanceBody_36;
  MR_Word ItemName_38;
  MR_Word ItemId_39;
  MR_Word STATE_VARIABLE_UsedModules_1_45;
  MR_Integer Var_47;
  MR_Word Var_32;
  MR_Word Var_33;

  *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  ClassName_16 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 0))));
  Types0_17 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 1))));
  OriginalTypes_18 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 2))));
  Constraints0_19 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 3))));
  InstanceBody0_20 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 4))));
  TVarSet0_21 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 5))));
  ContainingModuleName_22 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 6))));
  Context_23 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 7))));
  SeqNum_24 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_12, 8))));
  ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  succeeded = (STATE_VARIABLE_RecompInfo_0_40 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ContainingModuleName_22, ModuleName_25);
  if (succeeded)
    ItemRecompDeps0_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_44;

    Var_44 = mercury__set__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
    {
      ItemRecompDeps0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ItemRecompDeps0_26, 0) = ((MR_Box) (ModuleName_25));
      MR_hl_field(1, ItemRecompDeps0_26, 1) = ((MR_Box) (Var_44));
    }
  }
  TypeEqvMap_27 = ((MR_Word) ((MR_hl_field(0, Params_10, 1))));
  parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(TypeEqvMap_27, MaybeRecord_11, Constraints0_19, &Constraints_28, TVarSet0_21, &TVarSet1_29, ItemRecompDeps0_26, &ItemRecompDeps1_30, STATE_VARIABLE_UsedModules_0_42, &STATE_VARIABLE_UsedModules_1_45);
  parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(TypeEqvMap_27, MaybeRecord_11, Types0_17, &Types_31, &Var_32, &Var_33, TVarSet1_29, &TVarSet_34, ItemRecompDeps1_30, &ItemRecompDeps_35, STATE_VARIABLE_UsedModules_1_45, STATE_VARIABLE_UsedModules_43);
  if ((InstanceBody0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    InstanceBody_36 = (MR_Word) ((MR_Unsigned) 0U);
  else
    InstanceBody_36 = InstanceBody0_20;
  Var_47 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_17);
  {
    ItemName_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_38, 0) = ((MR_Box) (ClassName_16));
    MR_hl_field(0, ItemName_38, 1) = ((MR_Box) (Var_47));
  }
  {
    ItemId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_39, 1) = ((MR_Box) (ItemName_38));
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_39, ItemRecompDeps_35, STATE_VARIABLE_RecompInfo_0_40, STATE_VARIABLE_RecompInfo_41);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *InstanceInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (OriginalTypes_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstanceBody_36));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_34));
    MR_hl_field(0, base, 6) = ((MR_Box) (ContainingModuleName_22));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho11_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho28_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho28_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_pred_decl_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_decl_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word PredDeclInfo0_12,
  MR_Word * PredDeclInfo_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_45,
  MR_Word * STATE_VARIABLE_RecompInfo_46,
  MR_Word STATE_VARIABLE_UsedModules_0_47,
  MR_Word * STATE_VARIABLE_UsedModules_48,
  MR_Word * Specs_16)
{
  MR_Word PredSymName_17 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 0))));
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredDeclInfo0_12, 1))) & (MR_Integer) 1);
  MR_Word TypesAndMaybeModes0_19 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 2))));
  MR_Word MaybeWithType0_20 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 3))));
  MR_Word MaybeWithInst0_21 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 4))));
  MR_Word MaybeDetism0_22 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 5))));
  MR_Word Origin_23 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 6))));
  MR_Word TVarSet0_24 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 7))));
  MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 8))));
  MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 9))));
  MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(0, PredDeclInfo0_12, 10))) & (MR_Integer) 3);
  MR_Word ClassContext0_28 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 11))));
  MR_Word Context_29 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 12))));
  MR_Word SeqNum_30 = ((MR_Word) ((MR_hl_field(0, PredDeclInfo0_12, 13))));
  MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  MR_Word ItemRecompDeps0_32;
  MR_Word ClassContext_33;
  MR_Word TypesAndMaybeModes_34;
  MR_Word TVarSet_35;
  MR_Word MaybeWithType_36;
  MR_Word MaybeWithInst_37;
  MR_Word MaybeDetism_38;
  MR_Word ItemRecompDeps_39;
  MR_Word ItemType_40;
  MR_Word PredFormArity_41;
  MR_Integer Arity_42;
  MR_Word ItemName_43;
  MR_Word ItemId_44;
  MR_Word Var_50;

  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_sym_name_4_p_0(ModuleName_31, PredSymName_17, STATE_VARIABLE_RecompInfo_0_45, &ItemRecompDeps0_32);
  parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0(Params_10, MaybeRecord_11, PredSymName_17, PredOrFunc_18, Context_29, ClassContext0_28, &ClassContext_33, TypesAndMaybeModes0_19, &TypesAndMaybeModes_34, TVarSet0_24, &TVarSet_35, MaybeWithType0_20, &MaybeWithType_36, MaybeWithInst0_21, &MaybeWithInst_37, MaybeDetism0_22, &MaybeDetism_38, ItemRecompDeps0_32, &ItemRecompDeps_39, STATE_VARIABLE_UsedModules_0_47, STATE_VARIABLE_UsedModules_48, Specs_16);
  ItemType_40 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_18);
  PredFormArity_41 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes_34);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &Var_50, PredFormArity_41);
  Arity_42 = (MR_Integer) (Var_50);
  {
    ItemName_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_43, 0) = ((MR_Box) (PredSymName_17));
    MR_hl_field(0, ItemName_43, 1) = ((MR_Box) (Arity_42));
  }
  {
    ItemId_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_44, 0) = (MR_Box) ((MR_Unsigned) (ItemType_40));
    MR_hl_field(0, ItemId_44, 1) = ((MR_Box) (ItemName_43));
  }
  recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_44, ItemRecompDeps_39, STATE_VARIABLE_RecompInfo_0_45, STATE_VARIABLE_RecompInfo_46);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    *PredDeclInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredSymName_17));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypesAndMaybeModes_34));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeWithType_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeWithInst_37));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeDetism_38));
    MR_hl_field(0, base, 6) = ((MR_Box) (Origin_23));
    MR_hl_field(0, base, 7) = ((MR_Box) (TVarSet_35));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstVarSet_25));
    MR_hl_field(0, base, 9) = ((MR_Box) (ExistQVars_26));
    MR_hl_field(0, base, 10) = (MR_Box) ((MR_Unsigned) (Purity_27));
    MR_hl_field(0, base, 11) = ((MR_Box) (ClassContext_33));
    MR_hl_field(0, base, 12) = ((MR_Box) (Context_29));
    MR_hl_field(0, base, 13) = ((MR_Box) (SeqNum_30));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__4_4;
  MR_Word conv10_HeadVar__5_5;
  MR_Word conv9_HeadVar__7_7;
  MR_Word conv8_HeadVar__9_9;
  MR_Word conv7_HeadVar__11_11;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_HeadVar__4_4, &conv10_HeadVar__5_5, ((MR_Word) (wrapper_arg_4)), &conv9_HeadVar__7_7, ((MR_Word) (wrapper_arg_6)), &conv8_HeadVar__9_9, ((MR_Word) (wrapper_arg_8)), &conv7_HeadVar__11_11);
  *wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__4_4));
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__5_5));
  *wrapper_arg_5 = ((MR_Box) (conv9_HeadVar__7_7));
  *wrapper_arg_7 = ((MR_Box) (conv8_HeadVar__9_9));
  *wrapper_arg_9 = ((MR_Box) (conv7_HeadVar__11_11));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_TypeAndMode_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_23;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type_parse_tree__replace_in_type_and_mode_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_TypeAndMode_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_TypeAndMode_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_25));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0(
  MR_Word Params_23,
  MR_Word MaybeRecord_24,
  MR_Word PredSymName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word ClassContext0_28,
  MR_Word * ClassContext_29,
  MR_Word TypesAndMaybeModes0_30,
  MR_Word * TypesAndMaybeModes_31,
  MR_Word STATE_VARIABLE_TVarSet_0_57,
  MR_Word * STATE_VARIABLE_TVarSet_58,
  MR_Word MaybeWithType0_33,
  MR_Word * MaybeWithType_34,
  MR_Word MaybeWithInst0_35,
  MR_Word * MaybeWithInst_36,
  MR_Word STATE_VARIABLE_MaybeDetism_0_59,
  MR_Word * STATE_VARIABLE_MaybeDetism_60,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_61,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_62,
  MR_Word STATE_VARIABLE_UsedModules_0_63,
  MR_Word * STATE_VARIABLE_UsedModules_64,
  MR_Word * STATE_VARIABLE_Specs_65)
{
  MR_bool succeeded;
  MR_Word TypeEqvMap_41 = ((MR_Word) ((MR_hl_field(0, Params_23, 1))));
  MR_Word TypesAndMaybeModes1_42;
  MR_Word ExtraTypes_43;
  MR_Word PredFormArity_44;
  MR_Word ExtraModes_47;
  MR_Word ModeSpecs_48;
  MR_Word STATE_VARIABLE_TVarSet_1_66;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_67;
  MR_Word STATE_VARIABLE_UsedModules_1_68;
  MR_Word STATE_VARIABLE_TVarSet_2_69;
  MR_Word STATE_VARIABLE_ItemRecompDeps_2_70;
  MR_Word STATE_VARIABLE_UsedModules_2_71;
  MR_Word STATE_VARIABLE_ItemRecompDeps_3_73;
  MR_Word STATE_VARIABLE_UsedModules_3_74;
  MR_Word STATE_VARIABLE_Specs_1_75;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_ItemRecompDeps_4_79;
  MR_Word STATE_VARIABLE_Specs_2_81;
  MR_Word Var_45;
  MR_Word Var_46;

  parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(TypeEqvMap_41, MaybeRecord_24, ClassContext0_28, ClassContext_29, STATE_VARIABLE_TVarSet_0_57, &STATE_VARIABLE_TVarSet_1_66, STATE_VARIABLE_ItemRecompDeps_0_61, &STATE_VARIABLE_ItemRecompDeps_1_67, STATE_VARIABLE_UsedModules_0_63, &STATE_VARIABLE_UsedModules_1_68);
  switch (MR_tag((MR_Word) TypesAndMaybeModes0_30)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TypesAndMaybeModes1_42 = TypesAndMaybeModes0_30;
        STATE_VARIABLE_TVarSet_2_69 = STATE_VARIABLE_TVarSet_1_66;
        STATE_VARIABLE_ItemRecompDeps_2_70 = STATE_VARIABLE_ItemRecompDeps_1_67;
        STATE_VARIABLE_UsedModules_2_71 = STATE_VARIABLE_UsedModules_1_68;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Types0_85 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes0_30, 0))));
        MR_Word Types_86;
        MR_Word Var_90;
        MR_Word Var_87;
        MR_Box conv14_STATE_VARIABLE_TVarSet_2_69;
        MR_Box conv13_STATE_VARIABLE_ItemRecompDeps_2_70;
        MR_Box conv12_STATE_VARIABLE_UsedModules_2_71;

        {
          Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_90, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_6[0]));
          MR_hl_field(0, Var_90, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0_2));
          MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_90, 3) = ((MR_Box) (TypeEqvMap_41));
          MR_hl_field(0, Var_90, 4) = ((MR_Box) (MaybeRecord_24));
        }
        mercury__list__map2_foldl3_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_90, Types0_85, &Types_86, &Var_87, ((MR_Box) (STATE_VARIABLE_TVarSet_1_66)), &conv14_STATE_VARIABLE_TVarSet_2_69, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_67)), &conv13_STATE_VARIABLE_ItemRecompDeps_2_70, ((MR_Box) (STATE_VARIABLE_UsedModules_1_68)), &conv12_STATE_VARIABLE_UsedModules_2_71);
        STATE_VARIABLE_TVarSet_2_69 = ((MR_Word) (conv14_STATE_VARIABLE_TVarSet_2_69));
        STATE_VARIABLE_ItemRecompDeps_2_70 = ((MR_Word) (conv13_STATE_VARIABLE_ItemRecompDeps_2_70));
        STATE_VARIABLE_UsedModules_2_71 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_2_71));
        {
          TypesAndMaybeModes1_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypesAndMaybeModes1_42, 0) = ((MR_Box) (Types_86));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypesAndModes0_88 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes0_30, 0))));
        MR_Word TypesAndModes_89;
        MR_Word Var_91;
        MR_Box conv6_STATE_VARIABLE_TVarSet_2_69;
        MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_2_70;
        MR_Box conv4_STATE_VARIABLE_UsedModules_2_71;

        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_91, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_5[0]));
          MR_hl_field(0, Var_91, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__replace_in_pred_types_and_maybe_modes_22_p_0_1));
          MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_91, 3) = ((MR_Box) (TypeEqvMap_41));
          MR_hl_field(0, Var_91, 4) = ((MR_Box) (MaybeRecord_24));
        }
        mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__equiv_type_parse_tree_scalar_common_1[5]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_91, TypesAndModes0_88, &TypesAndModes_89, ((MR_Box) (STATE_VARIABLE_TVarSet_1_66)), &conv6_STATE_VARIABLE_TVarSet_2_69, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_67)), &conv5_STATE_VARIABLE_ItemRecompDeps_2_70, ((MR_Box) (STATE_VARIABLE_UsedModules_1_68)), &conv4_STATE_VARIABLE_UsedModules_2_71);
        STATE_VARIABLE_TVarSet_2_69 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_2_69));
        STATE_VARIABLE_ItemRecompDeps_2_70 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_2_70));
        STATE_VARIABLE_UsedModules_2_71 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_2_71));
        {
          TypesAndMaybeModes1_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, TypesAndMaybeModes1_42, 0) = ((MR_Box) (TypesAndModes_89));
        }
      }
      break;
  }
  parse_tree__equiv_type_parse_tree__replace_in_with_type_14_p_0(TypeEqvMap_41, MaybeRecord_24, PredOrFunc_26, PredSymName_25, Context_27, MaybeWithType0_33, &ExtraTypes_43, STATE_VARIABLE_TVarSet_2_69, STATE_VARIABLE_TVarSet_58, STATE_VARIABLE_ItemRecompDeps_2_70, &STATE_VARIABLE_ItemRecompDeps_3_73, STATE_VARIABLE_UsedModules_2_71, &STATE_VARIABLE_UsedModules_3_74, &STATE_VARIABLE_Specs_1_75);
  PredFormArity_44 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes0_30);
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (PredOrFunc_26));
  }
  parse_tree__equiv_type_parse_tree__replace_in_with_inst_18_p_0(Params_23, MaybeRecord_24, PredSymName_25, PredFormArity_44, Context_27, (MR_Integer) 0, Var_77, &Var_45, MaybeWithInst0_35, &Var_46, &ExtraModes_47, STATE_VARIABLE_MaybeDetism_0_59, STATE_VARIABLE_MaybeDetism_60, STATE_VARIABLE_ItemRecompDeps_3_73, &STATE_VARIABLE_ItemRecompDeps_4_79, STATE_VARIABLE_UsedModules_3_74, STATE_VARIABLE_UsedModules_64, &ModeSpecs_48);
  STATE_VARIABLE_Specs_2_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), STATE_VARIABLE_Specs_1_75, ModeSpecs_48);
  if ((STATE_VARIABLE_Specs_2_81 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0(PredOrFunc_26, PredSymName_25, Context_27, ExtraTypes_43, ExtraModes_47, TypesAndMaybeModes1_42, TypesAndMaybeModes_31, STATE_VARIABLE_Specs_2_81, STATE_VARIABLE_Specs_65);
  else
  {
    *TypesAndMaybeModes_31 = TypesAndMaybeModes1_42;
    *STATE_VARIABLE_Specs_65 = STATE_VARIABLE_Specs_2_81;
  }
  if ((*STATE_VARIABLE_Specs_65 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeWithType_34 = (MR_Word) ((MR_Unsigned) 0U);
    *MaybeWithInst_36 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    *MaybeWithType_34 = MaybeWithType0_33;
    *MaybeWithInst_36 = MaybeWithInst0_35;
  }
  succeeded = (ExtraTypes_43 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExtraModes_47 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *STATE_VARIABLE_ItemRecompDeps_62 = STATE_VARIABLE_ItemRecompDeps_4_79;
  else
  {
    MR_Integer Arity_53 = (MR_Integer) (PredFormArity_44);
    MR_Word OrigItemType_54;
    MR_Word OrigItemName_55;
    MR_Word OrigItemId_56;

    OrigItemType_54 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_26);
    {
      OrigItemName_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigItemName_55, 0) = ((MR_Box) (PredSymName_25));
      MR_hl_field(0, OrigItemName_55, 1) = ((MR_Box) (Arity_53));
    }
    {
      OrigItemId_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigItemId_56, 0) = (MR_Box) ((MR_Unsigned) (OrigItemType_54));
      MR_hl_field(0, OrigItemId_56, 1) = ((MR_Box) (OrigItemName_55));
    }
    recompilation__record_uses__gather_item_recomp_dep_3_p_0(OrigItemId_56, STATE_VARIABLE_ItemRecompDeps_4_79, STATE_VARIABLE_ItemRecompDeps_62);
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_with_type_14_p_0(
  MR_Word TypeEqvMap_15,
  MR_Word MaybeRecord_16,
  MR_Word PredOrFunc_17,
  MR_Word PredSymName_18,
  MR_Word Context_19,
  MR_Word MaybeWithType0_20,
  MR_Word * ExtraTypes_21,
  MR_Word STATE_VARIABLE_TVarSet_0_33,
  MR_Word * STATE_VARIABLE_TVarSet_34,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_35,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_36,
  MR_Word STATE_VARIABLE_UsedModules_0_37,
  MR_Word * STATE_VARIABLE_UsedModules_38,
  MR_Word * Specs_25)
{
  MR_bool succeeded;

  if ((MaybeWithType0_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ExtraTypes_21 = (MR_Word) ((MR_Unsigned) 0U);
    *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_34 = STATE_VARIABLE_TVarSet_0_33;
    *STATE_VARIABLE_ItemRecompDeps_36 = STATE_VARIABLE_ItemRecompDeps_0_35;
    *STATE_VARIABLE_UsedModules_38 = STATE_VARIABLE_UsedModules_0_37;
  }
  else
  {
    MR_Word WithType0_26 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_20, 0))));
    MR_Word WithType_27;
    MR_Word Var_28;
    MR_Word ExtraTypesPrime_30;
    MR_Word Var_94;
    MR_Word _Purity_29;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(TypeEqvMap_15, MaybeRecord_16, WithType0_26, &WithType_27, &Var_28, STATE_VARIABLE_TVarSet_0_33, STATE_VARIABLE_TVarSet_34, STATE_VARIABLE_ItemRecompDeps_0_35, STATE_VARIABLE_ItemRecompDeps_36, STATE_VARIABLE_UsedModules_0_37, STATE_VARIABLE_UsedModules_38);
    succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(WithType_27, &_Purity_29, &Var_94, &ExtraTypesPrime_30);
    if (succeeded)
      succeeded = (PredOrFunc_17 == Var_94);
    if (succeeded)
    {
      *ExtraTypes_21 = ExtraTypesPrime_30;
      *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ExtraTypePieces_31;
      MR_Word ExtraTypeSpec_32;
      MR_Word Var_42;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_69;
      MR_Word Var_75;
      MR_Word Var_80;
      MR_Word Var_81;

      *ExtraTypes_21 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_46, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      }
      {
        Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_48, 1) = ((MR_Box) (PredSymName_18));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[66])));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[58])));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[69])));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[67])));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
      }
      Var_65 = parse_tree__error_spec__color_as_correct_1_f_0(Var_66);
      Var_81 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[71])));
      Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[53])), Var_80);
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_75);
      ExtraTypePieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_64);
      {
        ExtraTypeSpec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExtraTypeSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.replace_in_with_type\'/14"));
        MR_hl_field(0, ExtraTypeSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ExtraTypeSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(0, ExtraTypeSpec_32, 3) = ((MR_Box) (Context_19));
        MR_hl_field(0, ExtraTypeSpec_32, 4) = ((MR_Box) (ExtraTypePieces_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypeSpec_32));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__check_and_maybe_add_extra_types_and_modes__1839__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__equiv_type_parse_tree__IntroducedFrom__pred__check_and_maybe_add_extra_types_and_modes__1859__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word PredSymName_11,
  MR_Word Context_12,
  MR_Word ExtraTypes_13,
  MR_Word ExtraModes_14,
  MR_Word TypesAndMaybeModes1_15,
  MR_Word * TypesAndMaybeModes_16,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_bool succeeded = (ExtraTypes_13 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    succeeded = (ExtraModes_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *TypesAndMaybeModes_16 = TypesAndMaybeModes1_15;
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
  else
    switch (MR_tag((MR_Word) TypesAndMaybeModes1_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((ExtraModes_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *TypesAndMaybeModes_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypes_13));
          }
          *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
        }
        else
        {
          MR_Word MaybeExtraTypesAndModes_20;

          parse_tree__equiv_type_parse_tree__try_to_pair_extra_types_and_modes_6_p_0(PredOrFunc_10, PredSymName_11, Context_12, ExtraTypes_13, ExtraModes_14, &MaybeExtraTypesAndModes_20);
          if (((MR_tag((MR_Word) MaybeExtraTypesAndModes_20)) == (MR_Integer) 0))
          {
            MR_Word ExtraSpecs_22 = ((MR_Word) ((MR_hl_field(0, MaybeExtraTypesAndModes_20, 0))));
            MR_Word Var_34;

            *TypesAndMaybeModes_16 = TypesAndMaybeModes1_15;
            Var_34 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ExtraSpecs_22);
            *STATE_VARIABLE_Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_34, STATE_VARIABLE_Specs_0_31);
          }
          else
          {
            MR_Word ExtraTypesAndModes_21 = ((MR_Word) ((MR_hl_field(1, MaybeExtraTypesAndModes_20, 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *TypesAndMaybeModes_16 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (ExtraTypesAndModes_21));
            }
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Types1_23 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes1_15, 0))));
          MR_Word Var_35;

          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_4[1]));
            MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0_2));
            MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_35, 3) = ((MR_Box) (Types1_23));
            MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_not_3_p_0(Var_35, (MR_String) "predicate \140parse_tree.equiv_type_parse_tree.check_and_maybe_add_extra_types_and_modes\'/9", (MR_String) "Types1 = []");
          if ((ExtraModes_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Types_24;

            Types_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types1_23, ExtraTypes_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *TypesAndMaybeModes_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Types_24));
            }
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
          else
          {
            MR_Word Pieces_27;
            MR_Word Spec_28;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;

            *TypesAndMaybeModes_16 = TypesAndMaybeModes1_15;
            {
              Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_88, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
            }
            {
              Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, Var_90, 1) = ((MR_Box) (PredSymName_11));
            }
            {
              Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[57])));
            }
            {
              Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
              MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[55])));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_87));
            }
            Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[21])));
            Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[23])));
            Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[19])), Var_51);
            Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_40);
            {
              Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.check_and_maybe_add_extra_types_and_modes\'/9"));
              MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 52U));
              MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_12));
              MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_32 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_28));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypesAndModes1_29 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes1_15, 0))));
          MR_Word Var_67;
          MR_Word MaybeExtraTypesAndModes_77;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__equiv_type_parse_tree_scalar_common_4[0]));
            MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__equiv_type_parse_tree__check_and_maybe_add_extra_types_and_modes_9_p_0_1));
            MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_67, 3) = ((MR_Box) (TypesAndModes1_29));
            MR_hl_field(0, Var_67, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_not_3_p_0(Var_67, (MR_String) "predicate \140parse_tree.equiv_type_parse_tree.check_and_maybe_add_extra_types_and_modes\'/9", (MR_String) "TypesAndModes1 = []");
          parse_tree__equiv_type_parse_tree__try_to_pair_extra_types_and_modes_6_p_0(PredOrFunc_10, PredSymName_11, Context_12, ExtraTypes_13, ExtraModes_14, &MaybeExtraTypesAndModes_77);
          if (((MR_tag((MR_Word) MaybeExtraTypesAndModes_77)) == (MR_Integer) 0))
          {
            MR_Word Var_72;
            MR_Word ExtraSpecs_74 = ((MR_Word) ((MR_hl_field(0, MaybeExtraTypesAndModes_77, 0))));

            *TypesAndMaybeModes_16 = TypesAndMaybeModes1_15;
            Var_72 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ExtraSpecs_74);
            *STATE_VARIABLE_Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), Var_72, STATE_VARIABLE_Specs_0_31);
          }
          else
          {
            MR_Word TypesAndModes_30;
            MR_Word ExtraTypesAndModes_73 = ((MR_Word) ((MR_hl_field(1, MaybeExtraTypesAndModes_77, 0))));

            TypesAndModes_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes1_29, ExtraTypesAndModes_73);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *TypesAndMaybeModes_16 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (TypesAndModes_30));
            }
            *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
          }
        }
        break;
    }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__try_to_pair_extra_types_and_modes_6_p_0(
  MR_Word PredOrFunc_7,
  MR_Word PredSymName_8,
  MR_Word Context_9,
  MR_Word ExtraTypes_10,
  MR_Word ExtraModes_11,
  MR_Word * MaybeExtraTypesAndModes_12)
{
  MR_bool succeeded;
  MR_Integer NumExtraTypes_13;
  MR_Integer NumExtraModes_14;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraTypes_10, &NumExtraTypes_13);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraModes_11, &NumExtraModes_14);
  succeeded = (NumExtraTypes_13 == NumExtraModes_14);
  if (succeeded)
  {
    MR_Word ExtraTypesAndModes_15;

    parse_tree__equiv_type_parse_tree__pair_extra_types_and_modes_3_p_0(ExtraTypes_10, ExtraModes_11, &ExtraTypesAndModes_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeExtraTypesAndModes_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypesAndModes_15));
    }
  }
  else
  {
    MR_Word PrefixPieces_16;
    MR_Word Pieces_17;
    MR_Word Spec_18;
    MR_Word Var_124;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;

    {
      Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_135, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
    }
    {
      Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, Var_137, 1) = ((MR_Box) (PredSymName_8));
    }
    {
      Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_137));
      MR_hl_field(1, Var_136, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[57])));
    }
    {
      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
      MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
    }
    {
      PrefixPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PrefixPieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[55])));
      MR_hl_field(1, PrefixPieces_16, 1) = ((MR_Box) (Var_134));
    }
    succeeded = (ExtraTypes_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word Var_19;
      MR_Word Var_30;
      MR_Word Var_31;

      Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[33])));
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
      Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[29])), Var_30);
      Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_16, Var_19);
    }
    else
    {
      succeeded = (ExtraModes_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Var_42;
        MR_Word Var_59;
        MR_Word Var_60;

        Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[43])));
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[41])), Var_59);
        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_16, Var_42);
      }
      else
      {
        MR_Word Var_71;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_85;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_String Var_96;
        MR_Word Var_100;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_String Var_111;
        MR_Box conv0_Var_96;
        MR_Box conv1_Var_111;

        Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[49])));
        {
          Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_93, 1) = ((MR_Box) (NumExtraTypes_13));
        }
        conv0_Var_96 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraTypes_10, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
        Var_96 = ((MR_String) (conv0_Var_96));
        {
          Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_95, 1) = ((MR_Box) (Var_96));
        }
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
        }
        Var_91 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_92);
        {
          Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_108, 1) = ((MR_Box) (NumExtraModes_14));
        }
        conv1_Var_111 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraModes_11, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
        Var_111 = ((MR_String) (conv1_Var_111));
        {
          Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_110, 1) = ((MR_Box) (Var_111));
        }
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[54])));
        }
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
        }
        Var_106 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_107);
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[53])), Var_105);
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_100);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[51])), Var_90);
        Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_85);
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[47])), Var_79);
        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_16, Var_71);
      }
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.try_to_pair_extra_types_and_modes\'/6"));
      MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_124, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(0, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeExtraTypesAndModes_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_124));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__pair_extra_types_and_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.pair_extra_types_and_modes\'/3", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.pair_extra_types_and_modes\'/3", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Modes_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word TypesAndModes_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (Var_21));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (Mode_16));
      }
      parse_tree__equiv_type_parse_tree__pair_extra_types_and_modes_3_p_0(Var_20, Modes_17, &TypesAndModes_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (TypesAndModes_18));
      }
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list__ho10_11_p_0(
  MR_Word Params_12,
  MR_Word MaybeRecord_13,
  MR_Word Items0_15,
  MR_Word * Items_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word RevItems_20;

  parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho29_12_p_0(Params_12, MaybeRecord_13, Items0_15, (MR_Word) ((MR_Unsigned) 0U), &RevItems_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevItems_20, Items_16);
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_list_loop__ho29_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevItems_0_5,
  MR_Word * STATE_VARIABLE_RevItems_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_7,
  MR_Word * STATE_VARIABLE_RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
      *STATE_VARIABLE_RecompInfo_8 = STATE_VARIABLE_RecompInfo_0_7;
      *STATE_VARIABLE_RevItems_6 = STATE_VARIABLE_RevItems_0_5;
    }
    else
    {
      MR_Word Item0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Items0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Item_37;
      MR_Word ItemSpecs_38;
      MR_Word STATE_VARIABLE_RecompInfo_1_49;
      MR_Word STATE_VARIABLE_UsedModules_1_50;
      MR_Word STATE_VARIABLE_RevItems_1_51;
      MR_Word STATE_VARIABLE_Specs_1_52;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      parse_tree__equiv_type_parse_tree__replace_in_mode_decl_info_9_p_0(HeadVar__1_1, HeadVar__2_2, Item0_31, &Item_37, STATE_VARIABLE_RecompInfo_0_7, &STATE_VARIABLE_RecompInfo_1_49, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_1_50, &ItemSpecs_38);
      if ((ItemSpecs_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 0) = ((MR_Box) (Item_37));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_51, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_5));
        }
        STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        STATE_VARIABLE_Specs_1_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ItemSpecs_38, STATE_VARIABLE_Specs_0_11);
        STATE_VARIABLE_RevItems_1_51 = STATE_VARIABLE_RevItems_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Items0_32;
      next_value_of_STATE_VARIABLE_RevItems_0_5 = STATE_VARIABLE_RevItems_1_51;
      next_value_of_STATE_VARIABLE_RecompInfo_0_7 = STATE_VARIABLE_RecompInfo_1_49;
      next_value_of_STATE_VARIABLE_UsedModules_0_9 = STATE_VARIABLE_UsedModules_1_50;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_52;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevItems_0_5 = next_value_of_STATE_VARIABLE_RevItems_0_5;
      STATE_VARIABLE_RecompInfo_0_7 = next_value_of_STATE_VARIABLE_RecompInfo_0_7;
      STATE_VARIABLE_UsedModules_0_9 = next_value_of_STATE_VARIABLE_UsedModules_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_mode_decl_info_9_p_0(
  MR_Word Params_10,
  MR_Word MaybeRecord_11,
  MR_Word Info0_12,
  MR_Word * Info_13,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * Specs_16)
{
  MR_Word PredSymName_17 = ((MR_Word) ((MR_hl_field(0, Info0_12, 0))));
  MR_Word MaybePredOrFunc0_18 = ((MR_Word) ((MR_hl_field(0, Info0_12, 1))));
  MR_Word Modes0_19 = ((MR_Word) ((MR_hl_field(0, Info0_12, 2))));
  MR_Word WithInst0_20 = ((MR_Word) ((MR_hl_field(0, Info0_12, 3))));
  MR_Word MaybeDetism0_21 = ((MR_Word) ((MR_hl_field(0, Info0_12, 4))));
  MR_Word InstVarSet_22 = ((MR_Word) ((MR_hl_field(0, Info0_12, 5))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, Info0_12, 6))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, Info0_12, 7))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, Params_10, 0))));
  MR_Word ItemRecompDeps0_26;
  MR_Word PredFormArity_27;
  MR_Word MaybePredOrFunc_28;
  MR_Word WithInst_29;
  MR_Word ExtraModes_30;
  MR_Word MaybeDetism_31;
  MR_Word ItemRecompDeps_32;
  MR_Word Modes_33;

  recompilation__record_uses__maybe_start_gathering_item_recomp_deps_sym_name_4_p_0(ModuleName_25, PredSymName_17, STATE_VARIABLE_RecompInfo_0_42, &ItemRecompDeps0_26);
  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_19);
  parse_tree__equiv_type_parse_tree__replace_in_with_inst_18_p_0(Params_10, MaybeRecord_11, PredSymName_17, PredFormArity_27, Context_23, (MR_Integer) 1, MaybePredOrFunc0_18, &MaybePredOrFunc_28, WithInst0_20, &WithInst_29, &ExtraModes_30, MaybeDetism0_21, &MaybeDetism_31, ItemRecompDeps0_26, &ItemRecompDeps_32, STATE_VARIABLE_UsedModules_0_44, STATE_VARIABLE_UsedModules_45, Specs_16);
  if ((ExtraModes_30 == (MR_Word) ((MR_Unsigned) 0U)))
    Modes_33 = Modes0_19;
  else
    Modes_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_19, ExtraModes_30);
  if ((MaybePredOrFunc_28 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_RecompInfo_43 = STATE_VARIABLE_RecompInfo_0_42;
  else
  {
    MR_Word PredOrFunc_36 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_28, 0))));
    MR_Word ItemType_37;
    MR_Integer Arity_38;
    MR_Integer OrigArity_39;
    MR_Word ItemName_40;
    MR_Word ItemId_41;

    ItemType_37 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_36);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_33, &Arity_38);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_36, &OrigArity_39, Arity_38);
    {
      ItemName_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemName_40, 0) = ((MR_Box) (PredSymName_17));
      MR_hl_field(0, ItemName_40, 1) = ((MR_Box) (OrigArity_39));
    }
    {
      ItemId_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemId_41, 0) = (MR_Box) ((MR_Unsigned) (ItemType_37));
      MR_hl_field(0, ItemId_41, 1) = ((MR_Box) (ItemName_40));
    }
    recompilation__record_uses__finish_gathering_item_recomp_deps_4_p_0(ItemId_41, ItemRecompDeps_32, STATE_VARIABLE_RecompInfo_0_42, STATE_VARIABLE_RecompInfo_43);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredSymName_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybePredOrFunc_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (Modes_33));
    MR_hl_field(0, base, 3) = ((MR_Box) (WithInst_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeDetism_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (InstVarSet_22));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_23));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_24));
  }
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree__replace_in_with_inst_18_p_0(
  MR_Word Params_19,
  MR_Word MaybeRecord_20,
  MR_Word PredSymName_21,
  MR_Word PredFormArity_22,
  MR_Word Context_23,
  MR_Word DeclType_24,
  MR_Word MaybePredOrFunc0_25,
  MR_Word * MaybePredOrFunc_26,
  MR_Word MaybeWithInst0_27,
  MR_Word * MaybeWithInst_28,
  MR_Word * ExtraModes_29,
  MR_Word STATE_VARIABLE_MaybeDetism_0_53,
  MR_Word * STATE_VARIABLE_MaybeDetism_54,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_55,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_56,
  MR_Word STATE_VARIABLE_UsedModules_0_57,
  MR_Word * STATE_VARIABLE_UsedModules_58,
  MR_Word * Specs_33)
{
  MR_bool succeeded;

  if ((MaybeWithInst0_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeWithInst_28 = MaybeWithInst0_27;
    *MaybePredOrFunc_26 = MaybePredOrFunc0_25;
    *ExtraModes_29 = (MR_Word) ((MR_Unsigned) 0U);
    *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeDetism_54 = STATE_VARIABLE_MaybeDetism_0_53;
    *STATE_VARIABLE_ItemRecompDeps_56 = STATE_VARIABLE_ItemRecompDeps_0_55;
    *STATE_VARIABLE_UsedModules_58 = STATE_VARIABLE_UsedModules_0_57;
  }
  else
  {
    MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_27, 0))));
    MR_Word InstEqvMap_35 = ((MR_Word) ((MR_hl_field(0, Params_19, 2))));
    MR_Word WithInst_36;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_59;
    MR_Word PredOrFunc_40;
    MR_Word ExtraModes0_41;
    MR_Word DetPrime_43;
    MR_Word GroundInstInfo_38;
    MR_Word HOInst_39;

    parse_tree__equiv_type__replace_in_inst_8_p_0(InstEqvMap_35, MaybeRecord_20, WithInst0_34, &WithInst_36, STATE_VARIABLE_ItemRecompDeps_0_55, &STATE_VARIABLE_ItemRecompDeps_1_59, STATE_VARIABLE_UsedModules_0_57, STATE_VARIABLE_UsedModules_58);
    succeeded = ((MR_tag((MR_Word) WithInst_36)) == (MR_Integer) 1);
    if (succeeded)
    {
      GroundInstInfo_38 = ((MR_Word) ((MR_hl_field(1, WithInst_36, 1))));
      succeeded = (GroundInstInfo_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HOInst_39 = (MR_Word) (MR_body((MR_Word) (GroundInstInfo_38), (MR_Integer) 1));
        PredOrFunc_40 = ((MR_Unsigned) ((MR_hl_field(0, HOInst_39, 0))) & (MR_Integer) 1);
        ExtraModes0_41 = ((MR_Word) ((MR_hl_field(0, HOInst_39, 1))));
        DetPrime_43 = ((MR_Unsigned) ((MR_hl_field(0, HOInst_39, 3))) & (MR_Integer) 7);
        if ((MaybePredOrFunc0_25 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word Var_127 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc0_25, 0))));

          succeeded = (PredOrFunc_40 == Var_127);
        }
      }
    }
    if (succeeded)
    {
      MR_Word RecordedPredOrFunc_44;
      MR_Word ItemType_45;
      MR_Integer Arity_46;
      MR_Word ItemName_47;
      MR_Word OrigItemId_48;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeDetism_54 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DetPrime_43));
      }
      *MaybeWithInst_28 = (MR_Word) ((MR_Unsigned) 0U);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredOrFunc_26 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredOrFunc_40));
      }
      *ExtraModes_29 = ExtraModes0_41;
      if ((MaybePredOrFunc0_25 == (MR_Word) ((MR_Unsigned) 0U)))
        RecordedPredOrFunc_44 = (MR_Integer) 0;
      else
        RecordedPredOrFunc_44 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc0_25, 0))));
      ItemType_45 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(RecordedPredOrFunc_44);
      Arity_46 = (MR_Integer) (PredFormArity_22);
      {
        ItemName_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemName_47, 0) = ((MR_Box) (PredSymName_21));
        MR_hl_field(0, ItemName_47, 1) = ((MR_Box) (Arity_46));
      }
      {
        OrigItemId_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OrigItemId_48, 0) = (MR_Box) ((MR_Unsigned) (ItemType_45));
        MR_hl_field(0, OrigItemId_48, 1) = ((MR_Box) (ItemName_47));
      }
      recompilation__record_uses__gather_item_recomp_dep_3_p_0(OrigItemId_48, STATE_VARIABLE_ItemRecompDeps_1_59, STATE_VARIABLE_ItemRecompDeps_56);
      *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String DeclStr_49;
      MR_Word PredOrFuncPieces_50;
      MR_Word Pieces_51;
      MR_Word Spec_52;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_100;
      MR_Word Var_105;
      MR_Word Var_110;
      MR_Word Var_111;

      *ExtraModes_29 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybePredOrFunc_26 = MaybePredOrFunc0_25;
      *MaybeWithInst_28 = MaybeWithInst0_27;
      switch (DeclType_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          DeclStr_49 = (MR_String) "mode declaration";
          break;
        case (MR_Integer) 0:
          DeclStr_49 = (MR_String) "declaration";
          break;
      }
      if ((*MaybePredOrFunc_26 == (MR_Word) ((MR_Unsigned) 0U)))
        PredOrFuncPieces_50 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_63;
        MR_Word PredOrFunc_123 = ((MR_Word) ((MR_hl_field(1, *MaybePredOrFunc_26, 0))));

        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_63, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_123));
        }
        {
          PredOrFuncPieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredOrFuncPieces_50, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, PredOrFuncPieces_50, 1) = ((MR_Box) (*ExtraModes_29));
        }
      }
      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (DeclStr_49));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[74])));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_parse_tree_scalar_common_1[72])));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_77, 1) = ((MR_Box) (PredSymName_21));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[80])));
      }
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_50, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[83])));
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[81])), Var_100);
      Var_94 = parse_tree__error_spec__color_as_correct_1_f_0(Var_95);
      Var_111 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[71])));
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[11])));
      Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_parse_tree_scalar_common_1[53])), Var_110);
      Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_105);
      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, Var_93);
      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_50, Var_75);
      Pieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_74);
      {
        Spec_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type_parse_tree.replace_in_with_inst\'/18"));
        MR_hl_field(0, Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(0, Spec_52, 3) = ((MR_Box) (Context_23));
        MR_hl_field(0, Spec_52, 4) = ((MR_Box) (Pieces_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_33 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_ItemRecompDeps_56 = STATE_VARIABLE_ItemRecompDeps_1_59;
      *STATE_VARIABLE_MaybeDetism_54 = STATE_VARIABLE_MaybeDetism_0_53;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____equiv_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type_parse_tree____Unify____equiv_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____equiv_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type_parse_tree____Compare____equiv_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type_parse_tree____Unify____pred_or_func_decl_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type_parse_tree____Unify____pred_or_func_decl_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type_parse_tree____Compare____pred_or_func_decl_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type_parse_tree____Compare____pred_or_func_decl_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__equiv_type_parse_tree__init(void)
{
}

void mercury__parse_tree__equiv_type_parse_tree__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_equiv_params_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type_parse_tree__parse_tree__equiv_type_parse_tree__type_ctor_info_pred_or_func_decl_type_0);
}

void mercury__parse_tree__equiv_type_parse_tree__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__equiv_type_parse_tree__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.equiv_type_parse_tree.
