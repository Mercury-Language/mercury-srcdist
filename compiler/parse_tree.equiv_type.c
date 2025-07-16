/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-2025-07-16
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


// :- module parse_tree.equiv_type.
// :- implementation.

/*
INIT mercury__parse_tree__equiv_type__init
ENDINIT
*/

#include "parse_tree.equiv_type.mih"


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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[2];

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0;

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1];

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1];

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3];

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0;

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1];

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1];

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0;

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1];

static const MR_DuArgLocn parse_tree__equiv_type__parse_tree__equiv_type__field_locns_maybe_record_sym_name_use_0_1[1];

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1;

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1];

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2];

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2];

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0;

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_ordinal_ordered_pred_or_func_decl_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2595__1_2_p_0(
  MR_Word Types1_64,
  MR_Word HeadVar__2_160);

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2615__1_2_p_0(
  MR_Word TypesAndModes1_70,
  MR_Word HeadVar__2_192);

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__1843__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____circ_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word TVarSet_12,
  MR_Word Sel0_13,
  MR_Word * Sel_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_23,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26);

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word TVarSet_12,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_19,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word TypeAndMode0_13,
  MR_Word * TypeAndMode_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Subst0_13,
  MR_Word * Subst_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ExpandedItems_0_24,
  MR_Word * STATE_VARIABLE_ExpandedItems_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_decl_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word Decl0_15,
  MR_Word * Decl_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_51,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

static void MR_CALL 
parse_tree__equiv_type__replace_in_var_or_ground_type_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Arg0_13,
  MR_Word * Arg_14,
  MR_Word STATE_VARIABLE_TVarSet_0_25,
  MR_Word * STATE_VARIABLE_TVarSet_26,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_27,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_28,
  MR_Word STATE_VARIABLE_UsedModules_0_29,
  MR_Word * STATE_VARIABLE_UsedModules_30);

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_15,
  MR_Word * Info_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_53,
  MR_Word * STATE_VARIABLE_RecompInfo_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58);

static MR_Word MR_CALL 
parse_tree__equiv_type__report_circular_eqv_type_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word Context_5);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecordInt_15,
  MR_Word MaybeRecordImp_16,
  MR_Word TypeEqvMap_17,
  MR_Word InstEqvMap_18,
  MR_Word CheckedDefn0_19,
  MR_Word * CheckedDefn_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_62,
  MR_Word * STATE_VARIABLE_RecompInfo_63,
  MR_Word STATE_VARIABLE_UsedModules_0_64,
  MR_Word * STATE_VARIABLE_UsedModules_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22);

static void MR_CALL 
parse_tree__equiv_type__replace_in_maybe__ho8_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word MaybeItem0_19,
  MR_Word * MaybeItem_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1080__1__ho31_12_p_0(
  MR_Word HeadVar__2_132,
  MR_Word HeadVar__3_133,
  MR_Word HeadVar__4_134,
  MR_Word HeadVar__5_135,
  MR_Word HeadVar__6_136,
  MR_Word * HeadVar__7_137,
  MR_Word HeadVar__8_138,
  MR_Word * HeadVar__9_139,
  MR_Word HeadVar__10_140,
  MR_Word * HeadVar__11_141,
  MR_Word * HeadVar__12_142);

static void MR_CALL 
parse_tree__equiv_type__replace_in_maybe__ho7_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word MaybeItem0_19,
  MR_Word * MaybeItem_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1083__1__ho32_12_p_0(
  MR_Word HeadVar__2_159,
  MR_Word HeadVar__3_160,
  MR_Word HeadVar__4_161,
  MR_Word HeadVar__5_162,
  MR_Word HeadVar__6_163,
  MR_Word * HeadVar__7_164,
  MR_Word HeadVar__8_165,
  MR_Word * HeadVar__9_166,
  MR_Word HeadVar__10_167,
  MR_Word * HeadVar__11_168,
  MR_Word * HeadVar__12_169);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho6_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho33_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1135__1__ho36_12_p_0(
  MR_Word HeadVar__2_249,
  MR_Word HeadVar__3_250,
  MR_Word HeadVar__4_251,
  MR_Word HeadVar__5_252,
  MR_Word HeadVar__6_253,
  MR_Word * HeadVar__7_254,
  MR_Word HeadVar__8_255,
  MR_Word * HeadVar__9_256,
  MR_Word HeadVar__10_257,
  MR_Word * HeadVar__11_258,
  MR_Word * HeadVar__12_259);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho5_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho34_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1138__1__ho35_12_p_0(
  MR_Word HeadVar__2_276,
  MR_Word HeadVar__3_277,
  MR_Word HeadVar__4_278,
  MR_Word HeadVar__5_279,
  MR_Word HeadVar__6_280,
  MR_Word * HeadVar__7_281,
  MR_Word HeadVar__8_282,
  MR_Word * HeadVar__9_283,
  MR_Word HeadVar__10_284,
  MR_Word * HeadVar__11_285,
  MR_Word * HeadVar__12_286);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_general__ho4_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_trans_opt_11_p_0(
  MR_Word _ModuleName_12,
  MR_Word _TypeEqvMap_13,
  MR_Word _InstEqvMap_14,
  MR_Word ParseTreeTransOpt_15,
  MR_Word * ParseTreeTransOpt_5,
  MR_Word RecompInfo_16,
  MR_Word * RecompInfo_7,
  MR_Word UsedModules_17,
  MR_Word * UsedModules_9,
  MR_Word Specs_18,
  MR_Word * Specs_11);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word ParseTreeTransOpt_15,
  MR_Word * ParseTreeTransOpt_5,
  MR_Word RecompInfo_16,
  MR_Word * RecompInfo_7,
  MR_Word UsedModules_17,
  MR_Word * UsedModules_9,
  MR_Word Specs_18,
  MR_Word * Specs_11);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_plain_opt_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreePlainOpt_15,
  MR_Word * ParseTreePlainOpt_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_55,
  MR_Word * STATE_VARIABLE_RecompInfo_56,
  MR_Word STATE_VARIABLE_UsedModules_0_57,
  MR_Word * STATE_VARIABLE_UsedModules_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_57_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho25_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__921__1__ho38_12_p_0(
  MR_Word HeadVar__2_83,
  MR_Word HeadVar__3_84,
  MR_Word HeadVar__4_85,
  MR_Word HeadVar__5_86,
  MR_Word HeadVar__6_87,
  MR_Word * HeadVar__7_88,
  MR_Word HeadVar__8_89,
  MR_Word * HeadVar__9_90,
  MR_Word HeadVar__10_91,
  MR_Word * HeadVar__11_92,
  MR_Word * HeadVar__12_93);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word TypeCtor_18,
  MR_Word Context_19,
  MR_Word TypeDefn0_20,
  MR_Word * TypeDefn_21,
  MR_Word STATE_VARIABLE_TVarSet_0_36,
  MR_Word * STATE_VARIABLE_TVarSet_37,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_38,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_39,
  MR_Word STATE_VARIABLE_UsedModules_0_40,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word * Specs_25);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word DetailsSub0_20,
  MR_Word * DetailsSub_21,
  MR_Word STATE_VARIABLE_TVarSet_0_31,
  MR_Word * STATE_VARIABLE_TVarSet_32,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_33,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_34,
  MR_Word STATE_VARIABLE_UsedModules_0_35,
  MR_Word * STATE_VARIABLE_UsedModules_36,
  MR_Word * Specs_25);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word DetailsDu0_20,
  MR_Word * DetailsDu_21,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_32,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35,
  MR_Word * Specs_25);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_101_113_118_95_95_91_51_93_95_48_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word TypeCtor_18,
  MR_Word Context_19,
  MR_Word DetailsEqv0_20,
  MR_Word * DetailsEqv_21,
  MR_Word STATE_VARIABLE_TVarSet_0_33,
  MR_Word * STATE_VARIABLE_TVarSet_34,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_35,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_36,
  MR_Word STATE_VARIABLE_UsedModules_0_37,
  MR_Word * STATE_VARIABLE_UsedModules_38,
  MR_Word * Specs_25);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_solver_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word TypeCtor_18,
  MR_Word Context_19,
  MR_Word DetailsSolver0_20,
  MR_Word * DetailsSolver_21,
  MR_Word STATE_VARIABLE_TVarSet_0_41,
  MR_Word * STATE_VARIABLE_TVarSet_42,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_43,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_25);

static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
  MR_Word MaybeRecord_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_6,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_7,
  MR_Word STATE_VARIABLE_UsedModules_0_8,
  MR_Word * STATE_VARIABLE_UsedModules_9);

static void MR_CALL 
parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0_2(
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
parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0_1(
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
parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word IntForOptSpec0_15,
  MR_Word * IntForOptSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_2(
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
parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreeInt1_15,
  MR_Word * ParseTreeInt1_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_51,
  MR_Word * STATE_VARIABLE_RecompInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

static void MR_CALL 
parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0_2(
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
parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0_1(
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
parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word IndirectIntSpec0_15,
  MR_Word * IndirectIntSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_23,
  MR_Word * STATE_VARIABLE_RecompInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0_2(
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
parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0_1(
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
parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word DirectIntSpec0_15,
  MR_Word * DirectIntSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_23,
  MR_Word * STATE_VARIABLE_RecompInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_54_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_51_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ancestor_int_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word AncestorIntSpec0_15,
  MR_Word * AncestorIntSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_23,
  MR_Word * STATE_VARIABLE_RecompInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreeInt0_15,
  MR_Word * ParseTreeInt0_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_59,
  MR_Word * STATE_VARIABLE_RecompInfo_60,
  MR_Word STATE_VARIABLE_UsedModules_0_61,
  MR_Word * STATE_VARIABLE_UsedModules_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_52_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstanceInfo0_16,
  MR_Word * InstanceInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word STATE_VARIABLE_UsedModules_0_42,
  MR_Word * STATE_VARIABLE_UsedModules_43,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_InstEqvMap_0_21,
  MR_Word * STATE_VARIABLE_InstEqvMap_22);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_InstEqvMap_0_21,
  MR_Word * STATE_VARIABLE_InstEqvMap_22);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_inst_defn_3_p_0(
  MR_Word ItemInstDefn_4,
  MR_Word STATE_VARIABLE_InstEqvMap_0_16,
  MR_Word * STATE_VARIABLE_InstEqvMap_17);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_34,
  MR_Word * STATE_VARIABLE_TypeEqvMap_35);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_34,
  MR_Word * STATE_VARIABLE_TypeEqvMap_35);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_15,
  MR_Word * STATE_VARIABLE_TypeEqvMap_16);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(
  MR_Word _ParseTreePlainOpt_6,
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0(
  MR_Word ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0(
  MR_Word IntForOptSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_15,
  MR_Word * STATE_VARIABLE_TypeEqvMap_16,
  MR_Word STATE_VARIABLE_InstEqvMap_0_17,
  MR_Word * STATE_VARIABLE_InstEqvMap_18);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0(
  MR_Word ParseTreeInt1_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0(
  MR_Word ReadWhy2_7,
  MR_Word ParseTreeInt2_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0(
  MR_Word IndirectIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0(
  MR_Word DirectIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0(
  MR_Word AncestorIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
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
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
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
parse_tree__equiv_type__replace_in_ctor_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_36,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Circ_0_6,
  MR_Word * STATE_VARIABLE_Circ_7,
  MR_Word STATE_VARIABLE_TVarSet_0_8,
  MR_Word * STATE_VARIABLE_TVarSet_9,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_10,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_11,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0_1(
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
parse_tree__equiv_type__replace_in_univ_exist_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_12(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_11(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_10(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_9(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_8(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_7(
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
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__equiv_type__replace_in_event_specs_5_p_0(
  MR_Word TypeEqvMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_UsedModules_0_4,
  MR_Word * STATE_VARIABLE_UsedModules_5);

static void MR_CALL 
parse_tree__equiv_type__replace_in_event_attrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_UsedModules_0_4,
  MR_Word * STATE_VARIABLE_UsedModules_5);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word InstEqvMap_12,
  MR_Word ParseTreeModuleSrc0_13,
  MR_Word * ParseTreeModuleSrc_14,
  MR_Word STATE_VARIABLE_RecompInfo_0_72,
  MR_Word * STATE_VARIABLE_RecompInfo_73,
  MR_Word STATE_VARIABLE_UsedModules_0_74,
  MR_Word * STATE_VARIABLE_UsedModules_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_57_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_48_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word FPInfo0_16,
  MR_Word * FPInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_44,
  MR_Word * STATE_VARIABLE_RecompInfo_45,
  MR_Word STATE_VARIABLE_UsedModules_0_46,
  MR_Word * STATE_VARIABLE_UsedModules_47,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_50_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_2(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word DeclPragma0_16,
  MR_Word * DeclPragma_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_33,
  MR_Word * STATE_VARIABLE_RecompInfo_34,
  MR_Word STATE_VARIABLE_UsedModules_0_35,
  MR_Word * STATE_VARIABLE_UsedModules_36,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word TypeSpecInfo0_16,
  MR_Word * TypeSpecInfo_17,
  MR_Word RecompInfo_18,
  MR_Word * RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_35,
  MR_Word * STATE_VARIABLE_UsedModules_36,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word TailVarsTypes0_18,
  MR_Word * TailVarsTypes_19,
  MR_Word STATE_VARIABLE_TVarSet_0_28,
  MR_Word * STATE_VARIABLE_TVarSet_29,
  MR_Word STATE_VARIABLE_ExpandedItems_0_30,
  MR_Word * STATE_VARIABLE_ExpandedItems_31,
  MR_Word STATE_VARIABLE_UsedModules_0_32,
  MR_Word * STATE_VARIABLE_UsedModules_33);

static void MR_CALL 
parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0_1(
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
parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_55_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstanceInfo0_16,
  MR_Word * InstanceInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_50_44_32_51_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_45,
  MR_Word * STATE_VARIABLE_RecompInfo_46,
  MR_Word STATE_VARIABLE_UsedModules_0_47,
  MR_Word * STATE_VARIABLE_UsedModules_48,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho18_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho21_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho13_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_2(
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
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
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
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word STATE_VARIABLE_UsedModules_0_42,
  MR_Word * STATE_VARIABLE_UsedModules_43,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho11_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho28_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_48,
  MR_Word * STATE_VARIABLE_RecompInfo_49,
  MR_Word STATE_VARIABLE_UsedModules_0_50,
  MR_Word * STATE_VARIABLE_UsedModules_51,
  MR_Word * Specs_20);

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0(
  MR_Word MaybeRecord_24,
  MR_Word PredName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word TypeEqvMap_28,
  MR_Word InstEqvMap_29,
  MR_Word ClassContext0_30,
  MR_Word * ClassContext_31,
  MR_Word TypesAndMaybeModes0_32,
  MR_Word * TypesAndMaybeModes_33,
  MR_Word STATE_VARIABLE_TVarSet_0_78,
  MR_Word * STATE_VARIABLE_TVarSet_79,
  MR_Word MaybeWithType0_35,
  MR_Word * MaybeWithType_36,
  MR_Word MaybeWithInst0_37,
  MR_Word * MaybeWithInst_38,
  MR_Word STATE_VARIABLE_MaybeDetism_0_80,
  MR_Word * STATE_VARIABLE_MaybeDetism_81,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_82,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_83,
  MR_Word STATE_VARIABLE_UsedModules_0_84,
  MR_Word * STATE_VARIABLE_UsedModules_85,
  MR_Word * STATE_VARIABLE_Specs_86);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_49_93_95_48_18_p_0(
  MR_Word InstEqvMap_20,
  MR_Word PredName_21,
  MR_Word PredFormArity_22,
  MR_Word Context_23,
  MR_Word DeclType_24,
  MR_Word MaybePredOrFunc0_25,
  MR_Word * MaybePredOrFunc_26,
  MR_Word MaybeWithInst0_27,
  MR_Word * MaybeWithInst_28,
  MR_Word * ExtraModes_29,
  MR_Word STATE_VARIABLE_MaybeDetism_0_52,
  MR_Word * STATE_VARIABLE_MaybeDetism_53,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_54,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_55,
  MR_Word STATE_VARIABLE_UsedModules_0_56,
  MR_Word * STATE_VARIABLE_UsedModules_57,
  MR_Word * Specs_33);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
  MR_Word InstEqvMap_11,
  MR_Word ExpandedInstCtors_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_2(
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
parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_1(
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
parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_TypeAndMaybeModes_0_22,
  MR_Word * STATE_VARIABLE_TypeAndMaybeModes_23,
  MR_Word STATE_VARIABLE_TVarSet_0_24,
  MR_Word * STATE_VARIABLE_TVarSet_25,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_26,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29);

static MR_Word MR_CALL 
parse_tree__equiv_type__pred_decl_error_prefix_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word PredName_5);

static void MR_CALL 
parse_tree__equiv_type__try_to_pair_extra_types_and_modes_6_p_0(
  MR_Word PredOrFunc_7,
  MR_Word PredName_8,
  MR_Word Context_9,
  MR_Word ExtraTypes_10,
  MR_Word ExtraModes_11,
  MR_Word * MaybeExtraTypesAndModes_12);

static void MR_CALL 
parse_tree__equiv_type__pair_extra_types_and_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0_1(
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
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Cs0_13,
  MR_Word * Cs_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word Type0_14,
  MR_Word * Type_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_TVarSet_0_21,
  MR_Word * STATE_VARIABLE_TVarSet_22,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_23,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_TVarSet_0_9,
  MR_Word * STATE_VARIABLE_TVarSet_10,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_11,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
  MR_Word MaybeRecord_14,
  MR_Word TypeEqvMap_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_TVarSet_0_41,
  MR_Word * STATE_VARIABLE_TVarSet_42,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_43,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46);

static void MR_CALL 
parse_tree__equiv_type__maybe_record_type_ctor_sym_name_use_4_p_0(
  MR_Word MaybeRecord_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0(
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____circ_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[26][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[105][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[2][7];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[6][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[9][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[3][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_8[2][12];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_9[1][16];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_10[6][8];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_11[2][6];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[26][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[0])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[1])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[2])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[3])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[4])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[5])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[2])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_11[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_11[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[105][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[5]))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[2]))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: equivalence type"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its expansion contains the"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot have its equivalences fully expanded,"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular equivalence type"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular equivalence types"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: circular type expansion"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the representation of solver type"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be a"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected the type after"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[40])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "higher order"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type,"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is not."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the declaration"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a \140with_inst\140 annotation,"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the declaration"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not specify"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the mode of any of the other arguments."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "accompanied by a \140with_type\140 annotation."))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the \140with_inst\140 annotation must be"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[67]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[66])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is missing."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this \140with_type\140 annotation"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[71]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "accompanied by a \140with_inst\140 annotation."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[73]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[64])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the \140with_type\140 annotation must be"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[75]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the mode of each argument, so"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[77]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the declaration specifies"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[79]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this \140with_inst\140 annotation"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[70])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "annotations are"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[85]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "incompatible,"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because they specify"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the declaration of"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[96]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[38])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected the inst after"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[97])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inst,"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[103]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[6][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__equiv_type__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[9][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_8[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_9[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_10[6][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_11[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_and_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__record_uses__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_circ_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____circ_types_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____circ_types_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "circ_types",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0 = {
  (MR_String) "eqv_inst_body",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0 };

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0 };

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_inst_body",
  { parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0 },
  { parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0 = {
  (MR_String) "eqv_type_body",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0 };

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0 };

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_type_body",
  { parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0 },
  { parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_inst_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "inst_eqv_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0 = {
  (MR_String) "do_not_record_sym_name_use",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0) };

static const MR_DuArgLocn parse_tree__equiv_type__parse_tree__equiv_type__field_locns_maybe_record_sym_name_use_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1 = {
  (MR_String) "record_sym_name_use",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1,
  NULL,
  parse_tree__equiv_type__parse_tree__equiv_type__field_locns_maybe_record_sym_name_use_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0 };

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1 };

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "maybe_record_sym_name_use",
  { parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0 },
  { parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0,

};

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_ordinal_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "pred_or_func_decl_type",
  { parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0 },
  { parse_tree__equiv_type__parse_tree__equiv_type__enum_ordinal_ordered_pred_or_func_decl_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_type_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "type_eqv_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2595__1_2_p_0(
  MR_Word Types1_64,
  MR_Word HeadVar__2_160)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[9]), ((MR_Box) (Types1_64)), ((MR_Box) (HeadVar__2_160)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2615__1_2_p_0(
  MR_Word TypesAndModes1_70,
  MR_Word HeadVar__2_192)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), ((MR_Box) (TypesAndModes1_70)), ((MR_Box) (HeadVar__2_192)));
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__1843__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  MR_Word LambdaHeadVar__2_56;

  {
    LambdaHeadVar__2_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_56, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, LambdaHeadVar__2_56, 1) = ((MR_Box) (LambdaHeadVar__1_55));
  }
  return LambdaHeadVar__2_56;
}

void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
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
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[13]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&parse_tree__equiv_type_scalar_common_2[13]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[12]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_data____Compare____mer_inst_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[12]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____circ_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[11]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word TVarSet_12,
  MR_Word Sel0_13,
  MR_Word * Sel_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_23,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26)
{
  if (((MR_tag((MR_Word) Sel0_13)) == (MR_Integer) 0))
  {
    *Sel_14 = Sel0_13;
    *STATE_VARIABLE_EquivTypeInfo_24 = STATE_VARIABLE_EquivTypeInfo_0_23;
    *STATE_VARIABLE_UsedModules_26 = STATE_VARIABLE_UsedModules_0_25;
  }
  else
  {
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(1, Sel0_13, 0))));
    MR_Word Type_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_27;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_10, TypeEqvMap_11, (MR_Word) ((MR_Unsigned) 0U), Type0_19, &Type_20, &Var_21, &Var_27, TVarSet_12, &Var_22, STATE_VARIABLE_EquivTypeInfo_0_23, STATE_VARIABLE_EquivTypeInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Sel_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_20));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_24;
  MR_Word conv0_STATE_VARIABLE_UsedModules_26;

  parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Sel_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_2 = ((MR_Box) (conv2_Sel_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_24));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word TVarSet_12,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_19,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_20,
  MR_Word STATE_VARIABLE_UsedModules_0_21,
  MR_Word * STATE_VARIABLE_UsedModules_22)
{
  MR_Word SSA0_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word SSB0_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word SSA_15;
  MR_Word SSB_16;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_23;
  MR_Word STATE_VARIABLE_UsedModules_1_24;
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, SSA0_13, 0))));
  MR_Word Sel0_26 = ((MR_Word) ((MR_hl_field(0, SSA0_13, 1))));
  MR_Word Sel_27;
  MR_Word Var_28;
  MR_Word Var_32;
  MR_Word Sel0_33;
  MR_Word Sel_34;
  MR_Box conv4_STATE_VARIABLE_EquivTypeInfo_1_23;
  MR_Box conv3_STATE_VARIABLE_UsedModules_1_24;
  MR_Box conv6_STATE_VARIABLE_EquivTypeInfo_20;
  MR_Box conv5_STATE_VARIABLE_UsedModules_22;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_8[1]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (MaybeRecord_10));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (TVarSet_12));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_28, Sel0_26, &Sel_27, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_19)), &conv4_STATE_VARIABLE_EquivTypeInfo_1_23, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv3_STATE_VARIABLE_UsedModules_1_24);
  STATE_VARIABLE_EquivTypeInfo_1_23 = ((MR_Word) (conv4_STATE_VARIABLE_EquivTypeInfo_1_23));
  STATE_VARIABLE_UsedModules_1_24 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_1_24));
  {
    SSA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SSA_15, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, SSA_15, 1) = ((MR_Box) (Sel_27));
  }
  Var_32 = ((MR_Word) ((MR_hl_field(0, SSB0_14, 0))));
  Sel0_33 = ((MR_Word) ((MR_hl_field(0, SSB0_14, 1))));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_28, Sel0_33, &Sel_34, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_1_23)), &conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (STATE_VARIABLE_UsedModules_1_24)), &conv5_STATE_VARIABLE_UsedModules_22);
  *STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) (conv6_STATE_VARIABLE_EquivTypeInfo_20));
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
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word TypeAndMode0_13,
  MR_Word * TypeAndMode_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word Type0_18 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_13, 0))));
  MR_Word Mode_19 = ((MR_Word) ((MR_hl_field(0, TypeAndMode0_13, 1))));
  MR_Word Type_20;
  MR_Word Var_21;
  MR_Word Var_28;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), Type0_18, &Type_20, &Var_21, &Var_28, STATE_VARIABLE_TVarSet_0_22, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_EquivTypeInfo_0_24, STATE_VARIABLE_EquivTypeInfo_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeAndMode_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Type_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Mode_19));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Subst0_13,
  MR_Word * Subst_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ExpandedItems_0_24,
  MR_Word * STATE_VARIABLE_ExpandedItems_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word HeadSubst0_18 = ((MR_Word) ((MR_hl_field(0, Subst0_13, 0))));
  MR_Word TailSubsts0_19 = ((MR_Word) ((MR_hl_field(0, Subst0_13, 1))));
  MR_Word HeadSubst_20;
  MR_Word TailSubsts_21;

  parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(MaybeRecord_11, TypeEqvMap_12, HeadSubst0_18, &HeadSubst_20, TailSubsts0_19, &TailSubsts_21, STATE_VARIABLE_TVarSet_0_22, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_ExpandedItems_0_24, STATE_VARIABLE_ExpandedItems_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Subst_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadSubst_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailSubsts_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_decl_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word Decl0_15,
  MR_Word * Decl_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_51,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  if (((MR_tag((MR_Word) Decl0_15)) == (MR_Integer) 1))
  {
    MR_Word ModeInfo0_41 = (MR_Word) (MR_body((MR_Word) (Decl0_15), (MR_Integer) 1));
    MR_Word MaybePredOrFunc0_42 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_41, 1))));
    MR_Word Modes0_43 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_41, 2))));
    MR_Word PredFormArity_44;
    MR_Word MaybePredOrFunc_45;
    MR_Word ExtraModes_46;
    MR_Word Modes_47;
    MR_Word ModeInfo_50;
    MR_Word PredName_64 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_41, 0))));
    MR_Word WithInst0_65 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_41, 3))));
    MR_Word MaybeDetism0_66 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_41, 4))));
    MR_Word InstVarSet_67 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_41, 5))));
    MR_Word Context_68 = ((MR_Word) ((MR_hl_field(0, ModeInfo0_41, 6))));
    MR_Word WithInst_69;
    MR_Word MaybeDetism_70;
    MR_Word NewSpecs_71;

    PredFormArity_44 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_43);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_49_93_95_48_18_p_0(InstEqvMap_14, PredName_64, PredFormArity_44, Context_68, (MR_Integer) 1, MaybePredOrFunc0_42, &MaybePredOrFunc_45, WithInst0_65, &WithInst_69, &ExtraModes_46, MaybeDetism0_66, &MaybeDetism_70, STATE_VARIABLE_EquivTypeInfo_0_51, STATE_VARIABLE_EquivTypeInfo_52, STATE_VARIABLE_UsedModules_0_53, STATE_VARIABLE_UsedModules_54, &NewSpecs_71);
    if ((ExtraModes_46 == (MR_Word) ((MR_Unsigned) 0U)))
      Modes_47 = Modes0_43;
    else
      Modes_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_43, ExtraModes_46);
    *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_71, STATE_VARIABLE_Specs_0_55);
    {
      ModeInfo_50 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModeInfo_50, 0) = ((MR_Box) (PredName_64));
      MR_hl_field(0, ModeInfo_50, 1) = ((MR_Box) (MaybePredOrFunc_45));
      MR_hl_field(0, ModeInfo_50, 2) = ((MR_Box) (Modes_47));
      MR_hl_field(0, ModeInfo_50, 3) = ((MR_Box) (WithInst_69));
      MR_hl_field(0, ModeInfo_50, 4) = ((MR_Box) (MaybeDetism_70));
      MR_hl_field(0, ModeInfo_50, 5) = ((MR_Box) (InstVarSet_67));
      MR_hl_field(0, ModeInfo_50, 6) = ((MR_Box) (Context_68));
    }
    *Decl_16 = (MR_Word) (MR_mkword(1, (MR_Word) (ModeInfo_50)));
  }
  else
  {
    MR_Word PredOrFuncInfo0_20 = (MR_Word) ((MR_Word) (Decl0_15));
    MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 0))));
    MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_20, 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_23 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 2))));
    MR_Word WithType0_24 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 3))));
    MR_Word WithInst0_25 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 4))));
    MR_Word MaybeDetism0_26 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 5))));
    MR_Word TVarSet0_27 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 6))));
    MR_Word InstVarSet_28 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 7))));
    MR_Word ExistQVars_29 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 8))));
    MR_Word Purity_30 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo0_20, 9))) & (MR_Integer) 3);
    MR_Word ClassContext0_31 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 10))));
    MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo0_20, 11))));
    MR_Word ClassContext_33;
    MR_Word TypesAndModes_34;
    MR_Word TVarSet_35;
    MR_Word WithType_36;
    MR_Word WithInst_37;
    MR_Word MaybeDetism_38;
    MR_Word NewSpecs_39;
    MR_Word PredOrFuncInfo_40;

    parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0(MaybeRecord_12, PredName_21, PredOrFunc_22, Context_32, TypeEqvMap_13, InstEqvMap_14, ClassContext0_31, &ClassContext_33, TypesAndModes0_23, &TypesAndModes_34, TVarSet0_27, &TVarSet_35, WithType0_24, &WithType_36, WithInst0_25, &WithInst_37, MaybeDetism0_26, &MaybeDetism_38, STATE_VARIABLE_EquivTypeInfo_0_51, STATE_VARIABLE_EquivTypeInfo_52, STATE_VARIABLE_UsedModules_0_53, STATE_VARIABLE_UsedModules_54, &NewSpecs_39);
    *STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_39, STATE_VARIABLE_Specs_0_55);
    {
      PredOrFuncInfo_40 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredOrFuncInfo_40, 0) = ((MR_Box) (PredName_21));
      MR_hl_field(0, PredOrFuncInfo_40, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
      MR_hl_field(0, PredOrFuncInfo_40, 2) = ((MR_Box) (TypesAndModes_34));
      MR_hl_field(0, PredOrFuncInfo_40, 3) = ((MR_Box) (WithType_36));
      MR_hl_field(0, PredOrFuncInfo_40, 4) = ((MR_Box) (WithInst_37));
      MR_hl_field(0, PredOrFuncInfo_40, 5) = ((MR_Box) (MaybeDetism_38));
      MR_hl_field(0, PredOrFuncInfo_40, 6) = ((MR_Box) (TVarSet_35));
      MR_hl_field(0, PredOrFuncInfo_40, 7) = ((MR_Box) (InstVarSet_28));
      MR_hl_field(0, PredOrFuncInfo_40, 8) = ((MR_Box) (ExistQVars_29));
      MR_hl_field(0, PredOrFuncInfo_40, 9) = (MR_Box) ((MR_Unsigned) (Purity_30));
      MR_hl_field(0, PredOrFuncInfo_40, 10) = ((MR_Box) (ClassContext_33));
      MR_hl_field(0, PredOrFuncInfo_40, 11) = ((MR_Box) (Context_32));
    }
    *Decl_16 = (MR_Word) ((MR_Word) (PredOrFuncInfo_40));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_var_or_ground_type_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Arg0_13,
  MR_Word * Arg_14,
  MR_Word STATE_VARIABLE_TVarSet_0_25,
  MR_Word * STATE_VARIABLE_TVarSet_26,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_27,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_28,
  MR_Word STATE_VARIABLE_UsedModules_0_29,
  MR_Word * STATE_VARIABLE_UsedModules_30)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Arg0_13)) == (MR_Integer) 1))
  {
    MR_Word GroundType0_20 = ((MR_Word) ((MR_hl_field(1, Arg0_13, 0))));
    MR_Word Type0_21 = (MR_Word) (GroundType0_20);
    MR_Word Type_22;
    MR_Word Var_23;
    MR_Word Var_36;
    MR_Word GroundType_24;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), Type0_21, &Type_22, &Var_23, &Var_36, STATE_VARIABLE_TVarSet_0_25, STATE_VARIABLE_TVarSet_26, STATE_VARIABLE_EquivTypeInfo_0_27, STATE_VARIABLE_EquivTypeInfo_28, STATE_VARIABLE_UsedModules_0_29, STATE_VARIABLE_UsedModules_30);
    succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_22, &GroundType_24);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Arg_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (GroundType_24));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type.replace_in_var_or_ground_type_location\'/10", (MR_String) "expanded ground type is not ground");
        return;
      }
  }
  else
  {
    *Arg_14 = Arg0_13;
    *STATE_VARIABLE_TVarSet_26 = STATE_VARIABLE_TVarSet_0_25;
    *STATE_VARIABLE_EquivTypeInfo_28 = STATE_VARIABLE_EquivTypeInfo_0_27;
    *STATE_VARIABLE_UsedModules_30 = STATE_VARIABLE_UsedModules_0_29;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 0))));
  MR_Word ArgTypes0_19 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 1))));
  MR_Word ArgTypes_20;
  MR_Word Var_30;
  MR_Word Var_21;
  MR_Word Var_22;

  Var_30 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), ArgTypes0_19, &ArgTypes_20, &Var_21, Var_30, &Var_22, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypes_20));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_15,
  MR_Word * Info_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_53,
  MR_Word * STATE_VARIABLE_RecompInfo_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58)
{
  MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(0, Info0_15, 0))));
  MR_Word ArgTypeVars_21 = ((MR_Word) ((MR_hl_field(0, Info0_15, 1))));
  MR_Word TypeRepn0_22 = ((MR_Word) ((MR_hl_field(0, Info0_15, 2))));
  MR_Word TVarSet0_23 = ((MR_Word) ((MR_hl_field(0, Info0_15, 3))));
  MR_Word Context_24 = ((MR_Word) ((MR_hl_field(0, Info0_15, 4))));
  MR_Word SeqNum_25 = ((MR_Word) ((MR_hl_field(0, Info0_15, 5))));
  MR_Integer Arity_26;
  MR_Word UsedTypeCtors0_27;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word TypeRepn_38;
  MR_Word ItemName_51;
  MR_Word ItemId_52;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_21, &Arity_26);
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, SymName_20, STATE_VARIABLE_RecompInfo_0_53, &UsedTypeCtors0_27);
  switch (MR_tag((MR_Word) TypeRepn0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        TypeRepn_38 = TypeRepn0_22;
        TVarSet_33 = TVarSet0_23;
        UsedTypeCtors_34 = UsedTypeCtors0_27;
        *STATE_VARIABLE_UsedModules_56 = STATE_VARIABLE_UsedModules_0_55;
        *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type0_28 = ((MR_Word) ((MR_hl_field(1, TypeRepn0_22, 0))));
        MR_Word TypeCtor_29;
        MR_Word Type_30;
        MR_Word Circ_32;
        MR_Word CircTypes_35;
        MR_Word Var_59;
        MR_Word Var_31;

        {
          TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_29, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(0, TypeCtor_29, 1) = ((MR_Box) (Arity_26));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (TypeCtor_29));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_13, TypeEqvMap_14, Var_59, Type0_28, &Type_30, &Var_31, &Circ_32, TVarSet0_23, &TVarSet_33, UsedTypeCtors0_27, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_55, STATE_VARIABLE_UsedModules_56);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_32, &CircTypes_35);
        if ((CircTypes_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
        else
        {
          MR_Word Var_63;
          MR_Word Pieces_79;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_89;
          MR_Word Var_94;
          MR_Word Var_95;

          {
            Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(3, Var_87, 1) = ((MR_Box) (TypeCtor_29));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_85 = parse_tree__error_spec__color_as_subject_1_f_0(Var_86);
          Var_95 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[19])));
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
          Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[17])), Var_94);
          Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_89);
          Pieces_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[15])), Var_84);
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
            MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, Var_63, 3) = ((MR_Box) (Context_24));
            MR_hl_field(0, Var_63, 4) = ((MR_Box) (Pieces_79));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_58 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_63));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
          }
        }
        {
          TypeRepn_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TypeRepn_38, 0) = ((MR_Box) (Type_30));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SuperTypeCtor0_39 = ((MR_Word) ((MR_hl_field(2, TypeRepn0_22, 0))));
        MR_Integer SuperTypeCtorArity_41 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor0_39, 1))));
        MR_Word VoidTypes_42;
        MR_Word SuperType0_43;
        MR_Word SuperType_44;
        MR_Word SuperTypeCtor_46;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word TypeCtor_72;
        MR_Word Circ_73;
        MR_Word CircTypes_74;
        MR_Word Var_45;

        Var_64 = parse_tree__builtin_lib_types__void_type_0_f_0();
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SuperTypeCtorArity_41, ((MR_Box) (Var_64)), &VoidTypes_42);
        parse_tree__prog_type_construct__construct_type_3_p_0(SuperTypeCtor0_39, VoidTypes_42, &SuperType0_43);
        {
          TypeCtor_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_72, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(0, TypeCtor_72, 1) = ((MR_Box) (Arity_26));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (TypeCtor_72));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_13, TypeEqvMap_14, Var_65, SuperType0_43, &SuperType_44, &Var_45, &Circ_73, TVarSet0_23, &TVarSet_33, UsedTypeCtors0_27, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_55, STATE_VARIABLE_UsedModules_56);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_44, &SuperTypeCtor_46);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_73, &CircTypes_74);
        if ((CircTypes_74 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
        else
        {
          MR_Word Var_69;

          Var_69 = parse_tree__equiv_type__report_circular_eqv_type_2_f_0(TypeCtor_72, Context_24);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_58 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_69));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_57));
          }
        }
        {
          TypeRepn_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, TypeRepn_38, 0) = ((MR_Box) (SuperTypeCtor_46));
        }
      }
      break;
  }
  {
    ItemName_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_51, 0) = ((MR_Box) (SymName_20));
    MR_hl_field(0, ItemName_51, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_52, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_52, 1) = ((MR_Box) (ItemName_51));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_52, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_53, STATE_VARIABLE_RecompInfo_54);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeRepn_38));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_25));
  }
}

static MR_Word MR_CALL 
parse_tree__equiv_type__report_circular_eqv_type_2_f_0(
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
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[19])));
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[17])), Var_22);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_17);
  Pieces_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[15])), Var_12);
  {
    Spec_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
    MR_hl_field(0, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_6, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_6, 4) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecordInt_15,
  MR_Word MaybeRecordImp_16,
  MR_Word TypeEqvMap_17,
  MR_Word InstEqvMap_18,
  MR_Word CheckedDefn0_19,
  MR_Word * CheckedDefn_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_62,
  MR_Word * STATE_VARIABLE_RecompInfo_63,
  MR_Word STATE_VARIABLE_UsedModules_0_64,
  MR_Word * STATE_VARIABLE_UsedModules_65,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67)
{
  if (((MR_tag((MR_Word) CheckedDefn0_19)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_24 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_19, 0))));
    MR_Word SrcDefns0_25 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_19, 1))));
    MR_Word SolverDefn_28;
    MR_Word MaybeIntDefn0_33;
    MR_Word MaybeImpDefn0_34;
    MR_Word MaybeIntDefn_35;
    MR_Word MaybeImpDefn_36;
    MR_Word SrcDefns_37;
    MR_Word STATE_VARIABLE_RecompInfo_1_69;
    MR_Word STATE_VARIABLE_UsedModules_1_70;
    MR_Word STATE_VARIABLE_Specs_1_71;
    MR_Word STATE_VARIABLE_RecompInfo_2_73;
    MR_Word STATE_VARIABLE_UsedModules_2_74;
    MR_Word STATE_VARIABLE_Specs_2_75;

    if (((MR_tag((MR_Word) SolverDefn0_24)) == (MR_Integer) 0))
    {
      SolverDefn_28 = SolverDefn0_24;
      STATE_VARIABLE_RecompInfo_1_69 = STATE_VARIABLE_RecompInfo_0_62;
      STATE_VARIABLE_UsedModules_1_70 = STATE_VARIABLE_UsedModules_0_64;
      STATE_VARIABLE_Specs_1_71 = STATE_VARIABLE_Specs_0_66;
    }
    else
    {
      MR_Word MaybeAbstractDefn0_29 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_24, 0))));
      MR_Word ItemSolverDefn0_30 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_24, 1))));
      MR_Word ItemSolverDefn_31;
      MR_Word SolverSpecs_32;

      parse_tree__equiv_type__replace_in_type_defn_info_general__ho4_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, InstEqvMap_18, ItemSolverDefn0_30, &ItemSolverDefn_31, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_1_69, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_1_70, &SolverSpecs_32);
      STATE_VARIABLE_Specs_1_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SolverSpecs_32, STATE_VARIABLE_Specs_0_66);
      {
        SolverDefn_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SolverDefn_28, 0) = ((MR_Box) (MaybeAbstractDefn0_29));
        MR_hl_field(1, SolverDefn_28, 1) = ((MR_Box) (ItemSolverDefn_31));
      }
    }
    MaybeIntDefn0_33 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_25, 0))));
    MaybeImpDefn0_34 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_25, 1))));
    parse_tree__equiv_type__replace_in_maybe__ho8_13_p_0(ModuleName_14, MaybeRecordInt_15, TypeEqvMap_17, InstEqvMap_18, MaybeIntDefn0_33, &MaybeIntDefn_35, STATE_VARIABLE_RecompInfo_1_69, &STATE_VARIABLE_RecompInfo_2_73, STATE_VARIABLE_UsedModules_1_70, &STATE_VARIABLE_UsedModules_2_74, STATE_VARIABLE_Specs_1_71, &STATE_VARIABLE_Specs_2_75);
    parse_tree__equiv_type__replace_in_maybe__ho7_13_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, InstEqvMap_18, MaybeImpDefn0_34, &MaybeImpDefn_36, STATE_VARIABLE_RecompInfo_2_73, STATE_VARIABLE_RecompInfo_63, STATE_VARIABLE_UsedModules_2_74, STATE_VARIABLE_UsedModules_65, STATE_VARIABLE_Specs_2_75, STATE_VARIABLE_Specs_67);
    {
      SrcDefns_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_37, 0) = ((MR_Box) (MaybeIntDefn_35));
      MR_hl_field(0, SrcDefns_37, 1) = ((MR_Box) (MaybeImpDefn_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CheckedDefn_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SolverDefn_28));
      MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_37));
    }
  }
  else
  {
    MR_Word StdDefn0_38 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_19, 0))));
    MR_Word StdDefn_43;
    MR_Word IntDefns0_57;
    MR_Word ImpDefns0_58;
    MR_Word ImpForeignEnums0_59;
    MR_Word IntDefns_60;
    MR_Word ImpDefns_61;
    MR_Word STATE_VARIABLE_RecompInfo_4_83;
    MR_Word STATE_VARIABLE_UsedModules_4_84;
    MR_Word STATE_VARIABLE_Specs_4_85;
    MR_Word STATE_VARIABLE_RecompInfo_8_99;
    MR_Word STATE_VARIABLE_UsedModules_8_100;
    MR_Word STATE_VARIABLE_Specs_8_101;
    MR_Word SrcDefns0_114 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_19, 1))));
    MR_Word SrcDefns_115;

    switch (MR_tag((MR_Word) StdDefn0_38)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Status_39 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_38, 0))) & (MR_Integer) 3);
          MR_Word ItemEqvDefn0_40 = ((MR_Word) ((MR_hl_field(0, StdDefn0_38, 1))));
          MR_Word ItemEqvDefn_41;
          MR_Word EqvSpecs_42;

          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemEqvDefn0_40, &ItemEqvDefn_41, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_4_83, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_4_84, &EqvSpecs_42);
          STATE_VARIABLE_Specs_4_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EqvSpecs_42, STATE_VARIABLE_Specs_0_66);
          {
            StdDefn_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StdDefn_43, 0) = (MR_Box) ((MR_Unsigned) (Status_39));
            MR_hl_field(0, StdDefn_43, 1) = ((MR_Box) (ItemEqvDefn_41));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSubDefn0_44 = ((MR_Word) ((MR_hl_field(1, StdDefn0_38, 1))));
          MR_Word ItemSubDefn_45;
          MR_Word SubSpecs_46;
          MR_Word Status_108 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn0_38, 0))) & (MR_Integer) 3);

          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemSubDefn0_44, &ItemSubDefn_45, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_4_83, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_4_84, &SubSpecs_46);
          STATE_VARIABLE_Specs_4_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SubSpecs_46, STATE_VARIABLE_Specs_0_66);
          {
            StdDefn_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, StdDefn_43, 0) = (MR_Box) ((MR_Unsigned) (Status_108));
            MR_hl_field(1, StdDefn_43, 1) = ((MR_Box) (ItemSubDefn_45));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemDuDefn0_47 = ((MR_Word) ((MR_hl_field(2, StdDefn0_38, 1))));
          MR_String HeadCtor_48 = ((MR_String) ((MR_hl_field(2, StdDefn0_38, 2))));
          MR_Word TailCtors_49 = ((MR_Word) ((MR_hl_field(2, StdDefn0_38, 3))));
          MR_Word CJCsMaybeDefnOrEnum_50 = ((MR_Word) ((MR_hl_field(2, StdDefn0_38, 4))));
          MR_Word ItemDuDefn_51;
          MR_Word DuSpecs_52;
          MR_Word Status_109 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn0_38, 0))) & (MR_Integer) 3);

          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemDuDefn0_47, &ItemDuDefn_51, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_4_83, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_4_84, &DuSpecs_52);
          STATE_VARIABLE_Specs_4_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DuSpecs_52, STATE_VARIABLE_Specs_0_66);
          {
            StdDefn_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, StdDefn_43, 0) = (MR_Box) ((MR_Unsigned) (Status_109));
            MR_hl_field(2, StdDefn_43, 1) = ((MR_Box) (ItemDuDefn_51));
            MR_hl_field(2, StdDefn_43, 2) = ((MR_Box) (HeadCtor_48));
            MR_hl_field(2, StdDefn_43, 3) = ((MR_Box) (TailCtors_49));
            MR_hl_field(2, StdDefn_43, 4) = ((MR_Box) (CJCsMaybeDefnOrEnum_50));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn0_38, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CJCsMaybeDefn_53 = ((MR_Word) ((MR_hl_field(3, StdDefn0_38, 3))));
              MR_Word Status_110 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_38, 1))) & (MR_Integer) 3);
              MR_Word ItemDuDefn0_111 = ((MR_Word) ((MR_hl_field(3, StdDefn0_38, 2))));
              MR_Word ItemDuDefn_112;
              MR_Word DuSpecs_113;

              parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemDuDefn0_111, &ItemDuDefn_112, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_4_83, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_4_84, &DuSpecs_113);
              STATE_VARIABLE_Specs_4_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DuSpecs_113, STATE_VARIABLE_Specs_0_66);
              {
                StdDefn_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, StdDefn_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, StdDefn_43, 1) = (MR_Box) ((MR_Unsigned) (Status_110));
                MR_hl_field(3, StdDefn_43, 2) = ((MR_Box) (ItemDuDefn_112));
                MR_hl_field(3, StdDefn_43, 3) = ((MR_Box) (CJCsMaybeDefn_53));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              StdDefn_43 = StdDefn0_38;
              STATE_VARIABLE_RecompInfo_4_83 = STATE_VARIABLE_RecompInfo_0_62;
              STATE_VARIABLE_UsedModules_4_84 = STATE_VARIABLE_UsedModules_0_64;
              STATE_VARIABLE_Specs_4_85 = STATE_VARIABLE_Specs_0_66;
            }
            break;
        }
        break;
    }
    IntDefns0_57 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_114, 0))));
    ImpDefns0_58 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_114, 1))));
    ImpForeignEnums0_59 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_114, 2))));
    parse_tree__equiv_type__replace_in_list__ho6_13_p_0(ModuleName_14, MaybeRecordInt_15, TypeEqvMap_17, InstEqvMap_18, IntDefns0_57, &IntDefns_60, STATE_VARIABLE_RecompInfo_4_83, &STATE_VARIABLE_RecompInfo_8_99, STATE_VARIABLE_UsedModules_4_84, &STATE_VARIABLE_UsedModules_8_100, STATE_VARIABLE_Specs_4_85, &STATE_VARIABLE_Specs_8_101);
    parse_tree__equiv_type__replace_in_list__ho5_13_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, InstEqvMap_18, ImpDefns0_58, &ImpDefns_61, STATE_VARIABLE_RecompInfo_8_99, STATE_VARIABLE_RecompInfo_63, STATE_VARIABLE_UsedModules_8_100, STATE_VARIABLE_UsedModules_65, STATE_VARIABLE_Specs_8_101, STATE_VARIABLE_Specs_67);
    {
      SrcDefns_115 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefns_115, 0) = ((MR_Box) (IntDefns_60));
      MR_hl_field(0, SrcDefns_115, 1) = ((MR_Box) (ImpDefns_61));
      MR_hl_field(0, SrcDefns_115, 2) = ((MR_Box) (ImpForeignEnums0_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CheckedDefn_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StdDefn_43));
      MR_hl_field(1, base, 1) = ((MR_Box) (SrcDefns_115));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, Info0_18, 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(0, Info0_18, 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(0, Info0_18, 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(0, Info0_18, 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Info0_18, 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Info0_18, 5))));
  MR_Integer Arity_29;
  MR_Word TypeCtor_30;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemName_35;
  MR_Word ItemId_36;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  {
    TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_30, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, TypeCtor_30, 1) = ((MR_Box) (Arity_29));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_37, &UsedTypeCtors0_31);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_101_113_118_95_95_91_51_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeCtor_30, Context_27, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_39, STATE_VARIABLE_UsedModules_40, Specs_22);
  {
    ItemName_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_35, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, ItemName_35, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_36, 1) = ((MR_Box) (ItemName_35));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_36, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_37, STATE_VARIABLE_RecompInfo_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, Info0_18, 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(0, Info0_18, 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(0, Info0_18, 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(0, Info0_18, 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Info0_18, 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Info0_18, 5))));
  MR_Integer Arity_29;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemName_35;
  MR_Word ItemId_36;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_37, &UsedTypeCtors0_31);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_39, STATE_VARIABLE_UsedModules_40, Specs_22);
  {
    ItemName_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_35, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, ItemName_35, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_36, 1) = ((MR_Box) (ItemName_35));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_36, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_37, STATE_VARIABLE_RecompInfo_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, Info0_18, 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(0, Info0_18, 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(0, Info0_18, 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(0, Info0_18, 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Info0_18, 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Info0_18, 5))));
  MR_Integer Arity_29;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemName_35;
  MR_Word ItemId_36;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_37, &UsedTypeCtors0_31);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_39, STATE_VARIABLE_UsedModules_40, Specs_22);
  {
    ItemName_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_35, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, ItemName_35, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_36, 1) = ((MR_Box) (ItemName_35));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_36, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_37, STATE_VARIABLE_RecompInfo_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_maybe__ho8_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word MaybeItem0_19,
  MR_Word * MaybeItem_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  if ((MaybeItem0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeItem_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RecompInfo_30 = STATE_VARIABLE_RecompInfo_0_29;
    *STATE_VARIABLE_UsedModules_32 = STATE_VARIABLE_UsedModules_0_31;
    *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
  }
  else
  {
    MR_Word Item0_24 = ((MR_Word) ((MR_hl_field(1, MaybeItem0_19, 0))));
    MR_Word Item_25;
    MR_Word ItemSpecs_26;

    parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1080__1__ho31_12_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Item0_24, &Item_25, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, &ItemSpecs_26);
    if ((ItemSpecs_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItem_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Item_25));
      }
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      *STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_26, STATE_VARIABLE_Specs_0_33);
      *MaybeItem_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1080__1__ho31_12_p_0(
  MR_Word HeadVar__2_132,
  MR_Word HeadVar__3_133,
  MR_Word HeadVar__4_134,
  MR_Word HeadVar__5_135,
  MR_Word HeadVar__6_136,
  MR_Word * HeadVar__7_137,
  MR_Word HeadVar__8_138,
  MR_Word * HeadVar__9_139,
  MR_Word HeadVar__10_140,
  MR_Word * HeadVar__11_141,
  MR_Word * HeadVar__12_142)
{
  MR_Word SymName_145 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_136, 0))));
  MR_Word ArgTypeVars_146 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_136, 1))));
  MR_Word TypeDefn0_147 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_136, 2))));
  MR_Word TVarSet0_148 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_136, 3))));
  MR_Word Context_149 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_136, 4))));
  MR_Word SeqNum_150 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_136, 5))));
  MR_Integer Arity_151;
  MR_Word TypeCtor_152;
  MR_Word UsedTypeCtors0_153;
  MR_Word TypeDefn_154;
  MR_Word TVarSet_155;
  MR_Word UsedTypeCtors_156;
  MR_Word ItemName_157;
  MR_Word ItemId_158;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_146, &Arity_151);
  {
    TypeCtor_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_152, 0) = ((MR_Box) (SymName_145));
    MR_hl_field(0, TypeCtor_152, 1) = ((MR_Box) (Arity_151));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(HeadVar__2_132, SymName_145, HeadVar__8_138, &UsedTypeCtors0_153);
  parse_tree__equiv_type__replace_in_type_defn_14_p_0(HeadVar__3_133, HeadVar__4_134, HeadVar__5_135, TypeCtor_152, Context_149, TypeDefn0_147, &TypeDefn_154, TVarSet0_148, &TVarSet_155, UsedTypeCtors0_153, &UsedTypeCtors_156, HeadVar__10_140, HeadVar__11_141, HeadVar__12_142);
  {
    ItemName_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_157, 0) = ((MR_Box) (SymName_145));
    MR_hl_field(0, ItemName_157, 1) = ((MR_Box) (Arity_151));
  }
  {
    ItemId_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_158, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_158, 1) = ((MR_Box) (ItemName_157));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_158, UsedTypeCtors_156, HeadVar__8_138, HeadVar__9_139);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_137 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_145));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_146));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_154));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_155));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_149));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_150));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_maybe__ho7_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word MaybeItem0_19,
  MR_Word * MaybeItem_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  if ((MaybeItem0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeItem_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_RecompInfo_30 = STATE_VARIABLE_RecompInfo_0_29;
    *STATE_VARIABLE_UsedModules_32 = STATE_VARIABLE_UsedModules_0_31;
    *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
  }
  else
  {
    MR_Word Item0_24 = ((MR_Word) ((MR_hl_field(1, MaybeItem0_19, 0))));
    MR_Word Item_25;
    MR_Word ItemSpecs_26;

    parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1083__1__ho32_12_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Item0_24, &Item_25, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, &ItemSpecs_26);
    if ((ItemSpecs_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItem_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Item_25));
      }
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      *STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_26, STATE_VARIABLE_Specs_0_33);
      *MaybeItem_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1083__1__ho32_12_p_0(
  MR_Word HeadVar__2_159,
  MR_Word HeadVar__3_160,
  MR_Word HeadVar__4_161,
  MR_Word HeadVar__5_162,
  MR_Word HeadVar__6_163,
  MR_Word * HeadVar__7_164,
  MR_Word HeadVar__8_165,
  MR_Word * HeadVar__9_166,
  MR_Word HeadVar__10_167,
  MR_Word * HeadVar__11_168,
  MR_Word * HeadVar__12_169)
{
  MR_Word SymName_172 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_163, 0))));
  MR_Word ArgTypeVars_173 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_163, 1))));
  MR_Word TypeDefn0_174 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_163, 2))));
  MR_Word TVarSet0_175 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_163, 3))));
  MR_Word Context_176 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_163, 4))));
  MR_Word SeqNum_177 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_163, 5))));
  MR_Integer Arity_178;
  MR_Word TypeCtor_179;
  MR_Word UsedTypeCtors0_180;
  MR_Word TypeDefn_181;
  MR_Word TVarSet_182;
  MR_Word UsedTypeCtors_183;
  MR_Word ItemName_184;
  MR_Word ItemId_185;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_173, &Arity_178);
  {
    TypeCtor_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_179, 0) = ((MR_Box) (SymName_172));
    MR_hl_field(0, TypeCtor_179, 1) = ((MR_Box) (Arity_178));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(HeadVar__2_159, SymName_172, HeadVar__8_165, &UsedTypeCtors0_180);
  parse_tree__equiv_type__replace_in_type_defn_14_p_0(HeadVar__3_160, HeadVar__4_161, HeadVar__5_162, TypeCtor_179, Context_176, TypeDefn0_174, &TypeDefn_181, TVarSet0_175, &TVarSet_182, UsedTypeCtors0_180, &UsedTypeCtors_183, HeadVar__10_167, HeadVar__11_168, HeadVar__12_169);
  {
    ItemName_184 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_184, 0) = ((MR_Box) (SymName_172));
    MR_hl_field(0, ItemName_184, 1) = ((MR_Box) (Arity_178));
  }
  {
    ItemId_185 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_185, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_185, 1) = ((MR_Box) (ItemName_184));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_185, UsedTypeCtors_183, HeadVar__8_165, HeadVar__9_166);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_164 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_172));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_173));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_181));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_182));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_176));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_177));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho6_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__replace_in_list_loop__ho33_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho33_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1135__1__ho36_12_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1135__1__ho36_12_p_0(
  MR_Word HeadVar__2_249,
  MR_Word HeadVar__3_250,
  MR_Word HeadVar__4_251,
  MR_Word HeadVar__5_252,
  MR_Word HeadVar__6_253,
  MR_Word * HeadVar__7_254,
  MR_Word HeadVar__8_255,
  MR_Word * HeadVar__9_256,
  MR_Word HeadVar__10_257,
  MR_Word * HeadVar__11_258,
  MR_Word * HeadVar__12_259)
{
  MR_Word SymName_262 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_253, 0))));
  MR_Word ArgTypeVars_263 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_253, 1))));
  MR_Word TypeDefn0_264 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_253, 2))));
  MR_Word TVarSet0_265 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_253, 3))));
  MR_Word Context_266 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_253, 4))));
  MR_Word SeqNum_267 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_253, 5))));
  MR_Integer Arity_268;
  MR_Word TypeCtor_269;
  MR_Word UsedTypeCtors0_270;
  MR_Word TypeDefn_271;
  MR_Word TVarSet_272;
  MR_Word UsedTypeCtors_273;
  MR_Word ItemName_274;
  MR_Word ItemId_275;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_263, &Arity_268);
  {
    TypeCtor_269 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_269, 0) = ((MR_Box) (SymName_262));
    MR_hl_field(0, TypeCtor_269, 1) = ((MR_Box) (Arity_268));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(HeadVar__2_249, SymName_262, HeadVar__8_255, &UsedTypeCtors0_270);
  parse_tree__equiv_type__replace_in_type_defn_14_p_0(HeadVar__3_250, HeadVar__4_251, HeadVar__5_252, TypeCtor_269, Context_266, TypeDefn0_264, &TypeDefn_271, TVarSet0_265, &TVarSet_272, UsedTypeCtors0_270, &UsedTypeCtors_273, HeadVar__10_257, HeadVar__11_258, HeadVar__12_259);
  {
    ItemName_274 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_274, 0) = ((MR_Box) (SymName_262));
    MR_hl_field(0, ItemName_274, 1) = ((MR_Box) (Arity_268));
  }
  {
    ItemId_275 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_275, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_275, 1) = ((MR_Box) (ItemName_274));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_275, UsedTypeCtors_273, HeadVar__8_255, HeadVar__9_256);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_254 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_262));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_263));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_271));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_272));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_266));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_267));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho5_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__replace_in_list_loop__ho34_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho34_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1138__1__ho35_12_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1138__1__ho35_12_p_0(
  MR_Word HeadVar__2_276,
  MR_Word HeadVar__3_277,
  MR_Word HeadVar__4_278,
  MR_Word HeadVar__5_279,
  MR_Word HeadVar__6_280,
  MR_Word * HeadVar__7_281,
  MR_Word HeadVar__8_282,
  MR_Word * HeadVar__9_283,
  MR_Word HeadVar__10_284,
  MR_Word * HeadVar__11_285,
  MR_Word * HeadVar__12_286)
{
  MR_Word SymName_289 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_280, 0))));
  MR_Word ArgTypeVars_290 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_280, 1))));
  MR_Word TypeDefn0_291 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_280, 2))));
  MR_Word TVarSet0_292 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_280, 3))));
  MR_Word Context_293 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_280, 4))));
  MR_Word SeqNum_294 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_280, 5))));
  MR_Integer Arity_295;
  MR_Word TypeCtor_296;
  MR_Word UsedTypeCtors0_297;
  MR_Word TypeDefn_298;
  MR_Word TVarSet_299;
  MR_Word UsedTypeCtors_300;
  MR_Word ItemName_301;
  MR_Word ItemId_302;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_290, &Arity_295);
  {
    TypeCtor_296 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_296, 0) = ((MR_Box) (SymName_289));
    MR_hl_field(0, TypeCtor_296, 1) = ((MR_Box) (Arity_295));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(HeadVar__2_276, SymName_289, HeadVar__8_282, &UsedTypeCtors0_297);
  parse_tree__equiv_type__replace_in_type_defn_14_p_0(HeadVar__3_277, HeadVar__4_278, HeadVar__5_279, TypeCtor_296, Context_293, TypeDefn0_291, &TypeDefn_298, TVarSet0_292, &TVarSet_299, UsedTypeCtors0_297, &UsedTypeCtors_300, HeadVar__10_284, HeadVar__11_285, HeadVar__12_286);
  {
    ItemName_301 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_301, 0) = ((MR_Box) (SymName_289));
    MR_hl_field(0, ItemName_301, 1) = ((MR_Box) (Arity_295));
  }
  {
    ItemId_302 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_302, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_302, 1) = ((MR_Box) (ItemName_301));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_302, UsedTypeCtors_300, HeadVar__8_282, HeadVar__9_283);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_281 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_289));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_290));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_298));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_299));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_293));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_294));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_general__ho4_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, Info0_18, 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(0, Info0_18, 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(0, Info0_18, 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(0, Info0_18, 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Info0_18, 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Info0_18, 5))));
  MR_Integer Arity_29;
  MR_Word TypeCtor_30;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemName_35;
  MR_Word ItemId_36;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  {
    TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_30, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, TypeCtor_30, 1) = ((MR_Box) (Arity_29));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_37, &UsedTypeCtors0_31);
  parse_tree__equiv_type__replace_in_type_defn_solver_14_p_0(MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, TypeCtor_30, Context_27, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_39, STATE_VARIABLE_UsedModules_40, Specs_22);
  {
    ItemName_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_35, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, ItemName_35, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_36, 1) = ((MR_Box) (ItemName_35));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_36, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_37, STATE_VARIABLE_RecompInfo_38);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_trans_opt_11_p_0(
  MR_Word _ModuleName_12,
  MR_Word _TypeEqvMap_13,
  MR_Word _InstEqvMap_14,
  MR_Word ParseTreeTransOpt_15,
  MR_Word * ParseTreeTransOpt_5,
  MR_Word RecompInfo_16,
  MR_Word * RecompInfo_7,
  MR_Word UsedModules_17,
  MR_Word * UsedModules_9,
  MR_Word Specs_18,
  MR_Word * Specs_11)
{
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(ParseTreeTransOpt_15, ParseTreeTransOpt_5, RecompInfo_16, RecompInfo_7, UsedModules_17, UsedModules_9, Specs_18, Specs_11);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word ParseTreeTransOpt_15,
  MR_Word * ParseTreeTransOpt_5,
  MR_Word RecompInfo_16,
  MR_Word * RecompInfo_7,
  MR_Word UsedModules_17,
  MR_Word * UsedModules_9,
  MR_Word Specs_18,
  MR_Word * Specs_11)
{
  *ParseTreeTransOpt_5 = ParseTreeTransOpt_15;
  *RecompInfo_7 = RecompInfo_16;
  *UsedModules_9 = UsedModules_17;
  *Specs_11 = Specs_18;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_plain_opt_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreePlainOpt_15,
  MR_Word * ParseTreePlainOpt_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_55,
  MR_Word * STATE_VARIABLE_RecompInfo_56,
  MR_Word STATE_VARIABLE_UsedModules_0_57,
  MR_Word * STATE_VARIABLE_UsedModules_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  MR_Word OptModuleName_21 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 0))));
  MR_Word OptModuleNameContext_22 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 1))));
  MR_Word UsedModuleNames_23 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 2))));
  MR_Word FIMSpecs_24 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 3))));
  MR_Word TypeDefns0_25 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 4))));
  MR_Word ForeignEnums_26 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 5))));
  MR_Word TypeClasses0_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 8))));
  MR_Word Instances0_30 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 9))));
  MR_Word PredDecls0_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 10))));
  MR_Word ModeDecls0_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 11))));
  MR_Word Clauses_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 12))));
  MR_Word ForeignProcs_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 13))));
  MR_Word Promises_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 14))));
  MR_Word DeclMarkers_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 15))));
  MR_Word ImplMarkers_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 16))));
  MR_Word TypeSpecs0_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 17))));
  MR_Word UnusedArgs_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 18))));
  MR_Word TermInfos_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 19))));
  MR_Word Term2Infos_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 20))));
  MR_Word Exceptions_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 21))));
  MR_Word Trailings_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 22))));
  MR_Word MMTablings_44 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 23))));
  MR_Word Sharings_45 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 24))));
  MR_Word Reuses_46 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 25))));
  MR_Word InstDefns_47 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 6))));
  MR_Word ModeDefns_48 = ((MR_Word) ((MR_hl_field(0, OrigParseTreePlainOpt_15, 7))));
  MR_Word TypeDefns_49;
  MR_Word TypeClasses_50;
  MR_Word Instances_51;
  MR_Word PredDecls_52;
  MR_Word ModeDecls_53;
  MR_Word TypeSpecs_54;
  MR_Word STATE_VARIABLE_RecompInfo_1_62;
  MR_Word STATE_VARIABLE_UsedModules_1_63;
  MR_Word STATE_VARIABLE_Specs_1_64;
  MR_Word STATE_VARIABLE_RecompInfo_2_67;
  MR_Word STATE_VARIABLE_UsedModules_2_68;
  MR_Word STATE_VARIABLE_Specs_2_69;
  MR_Word STATE_VARIABLE_RecompInfo_3_71;
  MR_Word STATE_VARIABLE_UsedModules_3_72;
  MR_Word STATE_VARIABLE_Specs_3_73;
  MR_Word STATE_VARIABLE_RecompInfo_4_75;
  MR_Word STATE_VARIABLE_UsedModules_4_76;
  MR_Word STATE_VARIABLE_Specs_4_77;
  MR_Word STATE_VARIABLE_RecompInfo_5_79;
  MR_Word STATE_VARIABLE_UsedModules_5_80;
  MR_Word STATE_VARIABLE_Specs_5_81;
  MR_Word RevItems_171;
  MR_Word RevItems_176;
  MR_Word RevItems_180;

  parse_tree__equiv_type__replace_in_list_loop__ho25_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, TypeDefns0_25, (MR_Word) ((MR_Unsigned) 0U), &RevItems_171, STATE_VARIABLE_RecompInfo_0_55, &STATE_VARIABLE_RecompInfo_1_62, STATE_VARIABLE_UsedModules_0_57, &STATE_VARIABLE_UsedModules_1_63, STATE_VARIABLE_Specs_0_59, &STATE_VARIABLE_Specs_1_64);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), RevItems_171, &TypeDefns_49);
  parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, TypeClasses0_29, (MR_Word) ((MR_Unsigned) 0U), &RevItems_176, STATE_VARIABLE_RecompInfo_1_62, &STATE_VARIABLE_RecompInfo_2_67, STATE_VARIABLE_UsedModules_1_63, &STATE_VARIABLE_UsedModules_2_68, STATE_VARIABLE_Specs_1_64, &STATE_VARIABLE_Specs_2_69);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_176, &TypeClasses_50);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_55_95_95_91_52_93_95_48_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, Instances0_30, (MR_Word) ((MR_Unsigned) 0U), &RevItems_180, STATE_VARIABLE_RecompInfo_2_67, &STATE_VARIABLE_RecompInfo_3_71, STATE_VARIABLE_UsedModules_2_68, &STATE_VARIABLE_UsedModules_3_72, STATE_VARIABLE_Specs_2_69, &STATE_VARIABLE_Specs_3_73);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevItems_180, &Instances_51);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, PredDecls0_31, &PredDecls_52, STATE_VARIABLE_RecompInfo_3_71, &STATE_VARIABLE_RecompInfo_4_75, STATE_VARIABLE_UsedModules_3_72, &STATE_VARIABLE_UsedModules_4_76, STATE_VARIABLE_Specs_3_73, &STATE_VARIABLE_Specs_4_77);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, ModeDecls0_32, &ModeDecls_53, STATE_VARIABLE_RecompInfo_4_75, &STATE_VARIABLE_RecompInfo_5_79, STATE_VARIABLE_UsedModules_4_76, &STATE_VARIABLE_UsedModules_5_80, STATE_VARIABLE_Specs_4_77, &STATE_VARIABLE_Specs_5_81);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_57_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, TypeSpecs0_38, &TypeSpecs_54, STATE_VARIABLE_RecompInfo_5_79, STATE_VARIABLE_RecompInfo_56, STATE_VARIABLE_UsedModules_5_80, STATE_VARIABLE_UsedModules_58, STATE_VARIABLE_Specs_5_81, STATE_VARIABLE_Specs_60);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (26 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OptModuleName_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (OptModuleNameContext_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (UsedModuleNames_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (FIMSpecs_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeDefns_49));
    MR_hl_field(0, base, 5) = ((MR_Box) (ForeignEnums_26));
    MR_hl_field(0, base, 6) = ((MR_Box) (InstDefns_47));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModeDefns_48));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeClasses_50));
    MR_hl_field(0, base, 9) = ((MR_Box) (Instances_51));
    MR_hl_field(0, base, 10) = ((MR_Box) (PredDecls_52));
    MR_hl_field(0, base, 11) = ((MR_Box) (ModeDecls_53));
    MR_hl_field(0, base, 12) = ((MR_Box) (Clauses_33));
    MR_hl_field(0, base, 13) = ((MR_Box) (ForeignProcs_34));
    MR_hl_field(0, base, 14) = ((MR_Box) (Promises_35));
    MR_hl_field(0, base, 15) = ((MR_Box) (DeclMarkers_36));
    MR_hl_field(0, base, 16) = ((MR_Box) (ImplMarkers_37));
    MR_hl_field(0, base, 17) = ((MR_Box) (TypeSpecs_54));
    MR_hl_field(0, base, 18) = ((MR_Box) (UnusedArgs_39));
    MR_hl_field(0, base, 19) = ((MR_Box) (TermInfos_40));
    MR_hl_field(0, base, 20) = ((MR_Box) (Term2Infos_41));
    MR_hl_field(0, base, 21) = ((MR_Box) (Exceptions_42));
    MR_hl_field(0, base, 22) = ((MR_Box) (Trailings_43));
    MR_hl_field(0, base, 23) = ((MR_Box) (MMTablings_44));
    MR_hl_field(0, base, 24) = ((MR_Box) (Sharings_45));
    MR_hl_field(0, base, 25) = ((MR_Box) (Reuses_46));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_57_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_51_48_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho25_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__921__1__ho38_12_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__921__1__ho38_12_p_0(
  MR_Word HeadVar__2_83,
  MR_Word HeadVar__3_84,
  MR_Word HeadVar__4_85,
  MR_Word HeadVar__5_86,
  MR_Word HeadVar__6_87,
  MR_Word * HeadVar__7_88,
  MR_Word HeadVar__8_89,
  MR_Word * HeadVar__9_90,
  MR_Word HeadVar__10_91,
  MR_Word * HeadVar__11_92,
  MR_Word * HeadVar__12_93)
{
  MR_Word SymName_96 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_87, 0))));
  MR_Word ArgTypeVars_97 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_87, 1))));
  MR_Word TypeDefn0_98 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_87, 2))));
  MR_Word TVarSet0_99 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_87, 3))));
  MR_Word Context_100 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_87, 4))));
  MR_Word SeqNum_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_87, 5))));
  MR_Integer Arity_102;
  MR_Word TypeCtor_103;
  MR_Word UsedTypeCtors0_104;
  MR_Word TypeDefn_105;
  MR_Word TVarSet_106;
  MR_Word UsedTypeCtors_107;
  MR_Word ItemName_108;
  MR_Word ItemId_109;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_97, &Arity_102);
  {
    TypeCtor_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_103, 0) = ((MR_Box) (SymName_96));
    MR_hl_field(0, TypeCtor_103, 1) = ((MR_Box) (Arity_102));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(HeadVar__2_83, SymName_96, HeadVar__8_89, &UsedTypeCtors0_104);
  parse_tree__equiv_type__replace_in_type_defn_14_p_0(HeadVar__3_84, HeadVar__4_85, HeadVar__5_86, TypeCtor_103, Context_100, TypeDefn0_98, &TypeDefn_105, TVarSet0_99, &TVarSet_106, UsedTypeCtors0_104, &UsedTypeCtors_107, HeadVar__10_91, HeadVar__11_92, HeadVar__12_93);
  {
    ItemName_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_108, 0) = ((MR_Box) (SymName_96));
    MR_hl_field(0, ItemName_108, 1) = ((MR_Box) (Arity_102));
  }
  {
    ItemId_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_109, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ItemId_109, 1) = ((MR_Box) (ItemName_108));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_109, UsedTypeCtors_107, HeadVar__8_89, HeadVar__9_90);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_88 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_96));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_97));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_105));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_106));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_100));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_101));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word TypeCtor_18,
  MR_Word Context_19,
  MR_Word TypeDefn0_20,
  MR_Word * TypeDefn_21,
  MR_Word STATE_VARIABLE_TVarSet_0_36,
  MR_Word * STATE_VARIABLE_TVarSet_37,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_38,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_39,
  MR_Word STATE_VARIABLE_UsedModules_0_40,
  MR_Word * STATE_VARIABLE_UsedModules_41,
  MR_Word * Specs_25)
{
  switch (MR_tag((MR_Word) TypeDefn0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_28 = (MR_Word) ((MR_Word) (TypeDefn0_20));
        MR_Word DetailsDu_29;

        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, DetailsDu0_28, &DetailsDu_29, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37, STATE_VARIABLE_EquivTypeInfo_0_38, STATE_VARIABLE_EquivTypeInfo_39, STATE_VARIABLE_UsedModules_0_40, STATE_VARIABLE_UsedModules_41, Specs_25);
        *TypeDefn_21 = (MR_Word) ((MR_Word) (DetailsDu_29));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub0_30 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_20), (MR_Integer) 1));
        MR_Word DetailsSub_31;

        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, DetailsSub0_30, &DetailsSub_31, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37, STATE_VARIABLE_EquivTypeInfo_0_38, STATE_VARIABLE_EquivTypeInfo_39, STATE_VARIABLE_UsedModules_0_40, STATE_VARIABLE_UsedModules_41, Specs_25);
        *TypeDefn_21 = (MR_Word) (MR_mkword(1, (MR_Word) (DetailsSub_31)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver0_32 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_20), (MR_Integer) 2));
        MR_Word DetailsSolver_33;

        parse_tree__equiv_type__replace_in_type_defn_solver_14_p_0(MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, TypeCtor_18, Context_19, DetailsSolver0_32, &DetailsSolver_33, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37, STATE_VARIABLE_EquivTypeInfo_0_38, STATE_VARIABLE_EquivTypeInfo_39, STATE_VARIABLE_UsedModules_0_40, STATE_VARIABLE_UsedModules_41, Specs_25);
        *TypeDefn_21 = (MR_Word) (MR_mkword(2, (MR_Word) (DetailsSolver_33)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn0_20, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_26 = ((MR_Word) ((MR_hl_field(3, TypeDefn0_20, 1))));
            MR_Word DetailsEqv_27;

            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_101_113_118_95_95_91_51_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeCtor_18, Context_19, DetailsEqv0_26, &DetailsEqv_27, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37, STATE_VARIABLE_EquivTypeInfo_0_38, STATE_VARIABLE_EquivTypeInfo_39, STATE_VARIABLE_UsedModules_0_40, STATE_VARIABLE_UsedModules_41, Specs_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_21 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (DetailsEqv_27));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *TypeDefn_21 = TypeDefn0_20;
            *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_TVarSet_37 = STATE_VARIABLE_TVarSet_0_36;
            *STATE_VARIABLE_EquivTypeInfo_39 = STATE_VARIABLE_EquivTypeInfo_0_38;
            *STATE_VARIABLE_UsedModules_41 = STATE_VARIABLE_UsedModules_0_40;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0_1(
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
  MR_Word conv3_Ctor_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_35;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_37;
  MR_Word conv0_STATE_VARIABLE_UsedModules_39;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word DetailsSub0_20,
  MR_Word * DetailsSub_21,
  MR_Word STATE_VARIABLE_TVarSet_0_31,
  MR_Word * STATE_VARIABLE_TVarSet_32,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_33,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_34,
  MR_Word STATE_VARIABLE_UsedModules_0_35,
  MR_Word * STATE_VARIABLE_UsedModules_36,
  MR_Word * Specs_25)
{
  MR_Word SuperType0_26 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_20, 0))));
  MR_Word Ctors0_27 = ((MR_Word) ((MR_hl_field(0, DetailsSub0_20, 1))));
  MR_Word SuperType_28;
  MR_Word Ctors_30;
  MR_Word STATE_VARIABLE_TVarSet_1_37;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_38;
  MR_Word STATE_VARIABLE_UsedModules_1_39;
  MR_Word HeadCtor0_42;
  MR_Word TailCtors0_43;
  MR_Word HeadCtor_44;
  MR_Word TailCtors_45;
  MR_Word STATE_VARIABLE_TVarSet_1_46;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_47;
  MR_Word STATE_VARIABLE_UsedModules_1_48;
  MR_Word Var_49;
  MR_Word Var_29;
  MR_Word Var_40;
  MR_Box conv6_STATE_VARIABLE_TVarSet_32;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_34;
  MR_Box conv4_STATE_VARIABLE_UsedModules_36;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_15, TypeEqvMap_16, (MR_Word) ((MR_Unsigned) 0U), SuperType0_26, &SuperType_28, &Var_29, &Var_40, STATE_VARIABLE_TVarSet_0_31, &STATE_VARIABLE_TVarSet_1_37, STATE_VARIABLE_EquivTypeInfo_0_33, &STATE_VARIABLE_EquivTypeInfo_1_38, STATE_VARIABLE_UsedModules_0_35, &STATE_VARIABLE_UsedModules_1_39);
  HeadCtor0_42 = ((MR_Word) ((MR_hl_field(0, Ctors0_27, 0))));
  TailCtors0_43 = ((MR_Word) ((MR_hl_field(0, Ctors0_27, 1))));
  parse_tree__equiv_type__replace_in_ctor_10_p_0(MaybeRecord_15, TypeEqvMap_16, HeadCtor0_42, &HeadCtor_44, STATE_VARIABLE_TVarSet_1_37, &STATE_VARIABLE_TVarSet_1_46, STATE_VARIABLE_EquivTypeInfo_1_38, &STATE_VARIABLE_EquivTypeInfo_1_47, STATE_VARIABLE_UsedModules_1_39, &STATE_VARIABLE_UsedModules_1_48);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[5]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (MaybeRecord_15));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (TypeEqvMap_16));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_49, TailCtors0_43, &TailCtors_45, ((MR_Box) (STATE_VARIABLE_TVarSet_1_46)), &conv6_STATE_VARIABLE_TVarSet_32, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_1_47)), &conv5_STATE_VARIABLE_EquivTypeInfo_34, ((MR_Box) (STATE_VARIABLE_UsedModules_1_48)), &conv4_STATE_VARIABLE_UsedModules_36);
  *STATE_VARIABLE_TVarSet_32 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_32));
  *STATE_VARIABLE_EquivTypeInfo_34 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_34));
  *STATE_VARIABLE_UsedModules_36 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_36));
  {
    Ctors_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Ctors_30, 0) = ((MR_Box) (HeadCtor_44));
    MR_hl_field(0, Ctors_30, 1) = ((MR_Box) (TailCtors_45));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSub_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SuperType_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (Ctors_30));
  }
  *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0_1(
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
  MR_Word conv3_Ctor_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_35;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_37;
  MR_Word conv0_STATE_VARIABLE_UsedModules_39;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word DetailsDu0_20,
  MR_Word * DetailsDu_21,
  MR_Word STATE_VARIABLE_TVarSet_0_30,
  MR_Word * STATE_VARIABLE_TVarSet_31,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_32,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35,
  MR_Word * Specs_25)
{
  MR_Word Ctors0_26 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_20, 0))));
  MR_Word MaybeCanon_27 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_20, 1))));
  MR_Word DirectArgFunctors_28 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_20, 2))));
  MR_Word Ctors_29;
  MR_Word HeadCtor0_36 = ((MR_Word) ((MR_hl_field(0, Ctors0_26, 0))));
  MR_Word TailCtors0_37 = ((MR_Word) ((MR_hl_field(0, Ctors0_26, 1))));
  MR_Word HeadCtor_38;
  MR_Word TailCtors_39;
  MR_Word STATE_VARIABLE_TVarSet_1_40;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_41;
  MR_Word STATE_VARIABLE_UsedModules_1_42;
  MR_Word Var_43;
  MR_Box conv6_STATE_VARIABLE_TVarSet_31;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_35;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(MaybeRecord_15, TypeEqvMap_16, HeadCtor0_36, &HeadCtor_38, STATE_VARIABLE_TVarSet_0_30, &STATE_VARIABLE_TVarSet_1_40, STATE_VARIABLE_EquivTypeInfo_0_32, &STATE_VARIABLE_EquivTypeInfo_1_41, STATE_VARIABLE_UsedModules_0_34, &STATE_VARIABLE_UsedModules_1_42);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[5]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (MaybeRecord_15));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) (TypeEqvMap_16));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_43, TailCtors0_37, &TailCtors_39, ((MR_Box) (STATE_VARIABLE_TVarSet_1_40)), &conv6_STATE_VARIABLE_TVarSet_31, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_1_41)), &conv5_STATE_VARIABLE_EquivTypeInfo_33, ((MR_Box) (STATE_VARIABLE_UsedModules_1_42)), &conv4_STATE_VARIABLE_UsedModules_35);
  *STATE_VARIABLE_TVarSet_31 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_31));
  *STATE_VARIABLE_EquivTypeInfo_33 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_33));
  *STATE_VARIABLE_UsedModules_35 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_35));
  {
    Ctors_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Ctors_29, 0) = ((MR_Box) (HeadCtor_38));
    MR_hl_field(0, Ctors_29, 1) = ((MR_Box) (TailCtors_39));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DetailsDu_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Ctors_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeCanon_27));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectArgFunctors_28));
  }
  *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_101_113_118_95_95_91_51_93_95_48_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word TypeCtor_18,
  MR_Word Context_19,
  MR_Word DetailsEqv0_20,
  MR_Word * DetailsEqv_21,
  MR_Word STATE_VARIABLE_TVarSet_0_33,
  MR_Word * STATE_VARIABLE_TVarSet_34,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_35,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_36,
  MR_Word STATE_VARIABLE_UsedModules_0_37,
  MR_Word * STATE_VARIABLE_UsedModules_38,
  MR_Word * Specs_25)
{
  MR_Word TypeBody0_26 = (MR_Word) (DetailsEqv0_20);
  MR_Word TypeBody_27;
  MR_Word Circ_29;
  MR_Word CircTypes_30;
  MR_Word Var_39;
  MR_Word Var_28;

  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (TypeCtor_18));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_15, TypeEqvMap_16, Var_39, TypeBody0_26, &TypeBody_27, &Var_28, &Circ_29, STATE_VARIABLE_TVarSet_0_33, STATE_VARIABLE_TVarSet_34, STATE_VARIABLE_EquivTypeInfo_0_35, STATE_VARIABLE_EquivTypeInfo_36, STATE_VARIABLE_UsedModules_0_37, STATE_VARIABLE_UsedModules_38);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_29, &CircTypes_30);
  if ((CircTypes_30 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_44;
    MR_Word Pieces_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_62;
    MR_Word Var_63;

    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (TypeCtor_18));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_53 = parse_tree__error_spec__color_as_subject_1_f_0(Var_54);
    Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[19])));
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[17])), Var_62);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, Var_57);
    Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[15])), Var_52);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Context_19));
      MR_hl_field(0, Var_44, 4) = ((MR_Box) (Pieces_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  *DetailsEqv_21 = (MR_Word) (TypeBody_27);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_solver_14_p_0(
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word TypeCtor_18,
  MR_Word Context_19,
  MR_Word DetailsSolver0_20,
  MR_Word * DetailsSolver_21,
  MR_Word STATE_VARIABLE_TVarSet_0_41,
  MR_Word * STATE_VARIABLE_TVarSet_42,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_43,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_25)
{
  MR_Word SolverDetails0_26 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_20, 0))));
  MR_Word MaybeUserEqComp_27 = ((MR_Word) ((MR_hl_field(0, DetailsSolver0_20, 1))));
  MR_Word RepresentationType0_28 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_26, 0))));
  MR_Word GroundInst_29 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_26, 1))));
  MR_Word AnyInst_30 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_26, 2))));
  MR_Word MutableInfos0_31 = ((MR_Word) ((MR_hl_field(0, SolverDetails0_26, 3))));
  MR_Word RepresentationType_32;
  MR_Word Circ_34;
  MR_Word CircTypes_35;
  MR_Word MutableInfos_39;
  MR_Word SolverDetails_40;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_49;
  MR_Word STATE_VARIABLE_UsedModules_1_50;
  MR_Word _Changed_33;

  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (TypeCtor_18));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_15, TypeEqvMap_16, Var_47, RepresentationType0_28, &RepresentationType_32, &_Changed_33, &Circ_34, STATE_VARIABLE_TVarSet_0_41, STATE_VARIABLE_TVarSet_42, STATE_VARIABLE_EquivTypeInfo_0_43, &STATE_VARIABLE_EquivTypeInfo_1_49, STATE_VARIABLE_UsedModules_0_45, &STATE_VARIABLE_UsedModules_1_50);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_34, &CircTypes_35);
  if ((CircTypes_35 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Pieces_38;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_65;

    {
      Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_58, 1) = ((MR_Box) (TypeCtor_18));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[35])));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[34])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Pieces_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[33])));
      MR_hl_field(1, Pieces_38, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_solver\'/14"));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (Context_19));
      MR_hl_field(0, Var_65, 4) = ((MR_Box) (Pieces_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  parse_tree__equiv_type__replace_in_constraint_store_9_p_0(MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, MutableInfos0_31, &MutableInfos_39, STATE_VARIABLE_EquivTypeInfo_1_49, STATE_VARIABLE_EquivTypeInfo_44, STATE_VARIABLE_UsedModules_1_50, STATE_VARIABLE_UsedModules_46);
  {
    SolverDetails_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SolverDetails_40, 0) = ((MR_Box) (RepresentationType_32));
    MR_hl_field(0, SolverDetails_40, 1) = ((MR_Box) (GroundInst_29));
    MR_hl_field(0, SolverDetails_40, 2) = ((MR_Box) (AnyInst_30));
    MR_hl_field(0, SolverDetails_40, 3) = ((MR_Box) (MutableInfos_39));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSolver_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SolverDetails_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeUserEqComp_27));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
  MR_Word MaybeRecord_1,
  MR_Word TypeEqvMap_2,
  MR_Word InstEqvMap_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_6,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_7,
  MR_Word STATE_VARIABLE_UsedModules_0_8,
  MR_Word * STATE_VARIABLE_UsedModules_9)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_9 = STATE_VARIABLE_UsedModules_0_8;
    *STATE_VARIABLE_EquivTypeInfo_7 = STATE_VARIABLE_EquivTypeInfo_0_6;
  }
  else
  {
    MR_Word MutableInfo0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word MutableInfos0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word MutableInfo_24;
    MR_Word MutableInfos_25;
    MR_Word STATE_VARIABLE_EquivTypeInfo_1_32;
    MR_Word STATE_VARIABLE_UsedModules_1_33;
    MR_String MutName_34 = ((MR_String) ((MR_hl_field(0, MutableInfo0_22, 0))));
    MR_Word OrigType_35 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 1))));
    MR_Word Type0_36 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 2))));
    MR_Word OrigInst_37 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 3))));
    MR_Word Inst0_38 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 4))));
    MR_Word InitValue_39 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 5))));
    MR_Word Attrs_40 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 6))));
    MR_Word Varset_41 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 7))));
    MR_Word Context_42 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 8))));
    MR_Word SeqNum_43 = ((MR_Word) ((MR_hl_field(0, MutableInfo0_22, 9))));
    MR_Word TVarSet0_44;
    MR_Word Type_45;
    MR_Word Inst_48;
    MR_Word STATE_VARIABLE_ExpandedItems_1_49;
    MR_Word STATE_VARIABLE_UsedModules_1_50;
    MR_Word Var_54;
    MR_Word _TypeChanged_46;
    MR_Word _TVarSet_47;
    MR_Word Var_52;

    TVarSet0_44 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_1, TypeEqvMap_2, (MR_Word) ((MR_Unsigned) 0U), Type0_36, &Type_45, &_TypeChanged_46, &Var_52, TVarSet0_44, &_TVarSet_47, STATE_VARIABLE_EquivTypeInfo_0_6, &STATE_VARIABLE_ExpandedItems_1_49, STATE_VARIABLE_UsedModules_0_8, &STATE_VARIABLE_UsedModules_1_50);
    Var_54 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(InstEqvMap_3, Var_54, Inst0_38, &Inst_48, STATE_VARIABLE_ExpandedItems_1_49, &STATE_VARIABLE_EquivTypeInfo_1_32, STATE_VARIABLE_UsedModules_1_50, &STATE_VARIABLE_UsedModules_1_33);
    {
      MutableInfo_24 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MutableInfo_24, 0) = ((MR_Box) (MutName_34));
      MR_hl_field(0, MutableInfo_24, 1) = ((MR_Box) (OrigType_35));
      MR_hl_field(0, MutableInfo_24, 2) = ((MR_Box) (Type_45));
      MR_hl_field(0, MutableInfo_24, 3) = ((MR_Box) (OrigInst_37));
      MR_hl_field(0, MutableInfo_24, 4) = ((MR_Box) (Inst_48));
      MR_hl_field(0, MutableInfo_24, 5) = ((MR_Box) (InitValue_39));
      MR_hl_field(0, MutableInfo_24, 6) = ((MR_Box) (Attrs_40));
      MR_hl_field(0, MutableInfo_24, 7) = ((MR_Box) (Varset_41));
      MR_hl_field(0, MutableInfo_24, 8) = ((MR_Box) (Context_42));
      MR_hl_field(0, MutableInfo_24, 9) = ((MR_Box) (SeqNum_43));
    }
    parse_tree__equiv_type__replace_in_constraint_store_9_p_0(MaybeRecord_1, TypeEqvMap_2, InstEqvMap_3, MutableInfos0_23, &MutableInfos_25, STATE_VARIABLE_EquivTypeInfo_1_32, STATE_VARIABLE_EquivTypeInfo_7, STATE_VARIABLE_UsedModules_1_33, STATE_VARIABLE_UsedModules_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MutableInfo_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (MutableInfos_25));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0_2(
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
  MR_Word conv10_Info_16;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Info_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_Info_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0_1(
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
  MR_Word conv3_CheckedDefn_20;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_63;
  MR_Word conv1_STATE_VARIABLE_UsedModules_65;
  MR_Word conv0_STATE_VARIABLE_Specs_67;

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_63));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_65));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_67));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word IntForOptSpec0_15,
  MR_Word * IntForOptSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_29,
  MR_Word * STATE_VARIABLE_RecompInfo_30,
  MR_Word STATE_VARIABLE_UsedModules_0_31,
  MR_Word * STATE_VARIABLE_UsedModules_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  switch (MR_tag((MR_Word) IntForOptSpec0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OrigParseTree0_20 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec0_15, 0))));
        MR_Word ReadWhy0_21 = ((MR_Unsigned) ((MR_hl_field(0, IntForOptSpec0_15, 1))) & (MR_Integer) 1);
        MR_Word ParseTree0_22;

        parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree0_20, &ParseTree0_22, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *IntForOptSpec_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree0_22));
          MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_21));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OrigParseTree1_23 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec0_15, 0))));
        MR_Word ReadWhy1_24 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec0_15, 1))) & (MR_Integer) 7);
        MR_Word ParseTree1_25;

        parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree1_23, &ParseTree1_25, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntForOptSpec_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ParseTree1_25));
          MR_hl_field(1, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_24));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OrigParseTree2_26 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec0_15, 0))));
        MR_Word ReadWhy2_27 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec0_15, 1))) & (MR_Integer) 3);
        MR_Word ParseTree2_28;
        MR_Word IntModuleName_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 0))));
        MR_Word IntModuleNameContext_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 1))));
        MR_Word MaybeVersionNumbers_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 2))));
        MR_Word InclMap_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 3))));
        MR_Word ImportUseMap_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 4))));
        MR_Word IntFIMSpecs_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 5))));
        MR_Word ImpFIMSpecs_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 6))));
        MR_Word TypeCtorCheckedMap0_44 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 7))));
        MR_Word IntTypeClasses0_45 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 10))));
        MR_Word IntInstances0_46 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 11))));
        MR_Word IntTypeRepnMap0_47 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 12))));
        MR_Word TypeCtorCheckedMap_48;
        MR_Word InstCtorCheckedMap_49 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 8))));
        MR_Word ModeCtorCheckedMap_50 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_26, 9))));
        MR_Word IntTypeClasses_51;
        MR_Word IntInstances_52;
        MR_Word IntTypeRepnMap_53;
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
        MR_Word Var_66;
        MR_Word RevItems_76;
        MR_Word RevItems_80;
        MR_Box conv6_STATE_VARIABLE_RecompInfo_1_55;
        MR_Box conv5_STATE_VARIABLE_UsedModules_1_56;
        MR_Box conv4_STATE_VARIABLE_Specs_1_57;
        MR_Box conv13_STATE_VARIABLE_RecompInfo_30;
        MR_Box conv12_STATE_VARIABLE_UsedModules_32;
        MR_Box conv11_STATE_VARIABLE_Specs_34;

        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0_1));
          MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_54, 3) = ((MR_Box) (ModuleName_12));
          MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_54, 6) = ((MR_Box) (TypeEqvMap_13));
          MR_hl_field(0, Var_54, 7) = ((MR_Box) (InstEqvMap_14));
        }
        mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_54, TypeCtorCheckedMap0_44, &TypeCtorCheckedMap_48, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_29)), &conv6_STATE_VARIABLE_RecompInfo_1_55, ((MR_Box) (STATE_VARIABLE_UsedModules_0_31)), &conv5_STATE_VARIABLE_UsedModules_1_56, ((MR_Box) (STATE_VARIABLE_Specs_0_33)), &conv4_STATE_VARIABLE_Specs_1_57);
        STATE_VARIABLE_RecompInfo_1_55 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_55));
        STATE_VARIABLE_UsedModules_1_56 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_56));
        STATE_VARIABLE_Specs_1_57 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_57));
        parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_45, (MR_Word) ((MR_Unsigned) 0U), &RevItems_76, STATE_VARIABLE_RecompInfo_1_55, &STATE_VARIABLE_RecompInfo_2_59, STATE_VARIABLE_UsedModules_1_56, &STATE_VARIABLE_UsedModules_2_60, STATE_VARIABLE_Specs_1_57, &STATE_VARIABLE_Specs_2_61);
        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_76, &IntTypeClasses_51);
        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_52_95_95_91_52_93_95_48_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_46, (MR_Word) ((MR_Unsigned) 0U), &RevItems_80, STATE_VARIABLE_RecompInfo_2_59, &STATE_VARIABLE_RecompInfo_3_63, STATE_VARIABLE_UsedModules_2_60, &STATE_VARIABLE_UsedModules_3_64, STATE_VARIABLE_Specs_2_61, &STATE_VARIABLE_Specs_3_65);
        mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_80, &IntInstances_52);
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_66, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[8]));
          MR_hl_field(0, Var_66, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0_2));
          MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_66, 3) = ((MR_Box) (ModuleName_12));
          MR_hl_field(0, Var_66, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_66, 5) = ((MR_Box) (TypeEqvMap_13));
        }
        mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_66, IntTypeRepnMap0_47, &IntTypeRepnMap_53, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_63)), &conv13_STATE_VARIABLE_RecompInfo_30, ((MR_Box) (STATE_VARIABLE_UsedModules_3_64)), &conv12_STATE_VARIABLE_UsedModules_32, ((MR_Box) (STATE_VARIABLE_Specs_3_65)), &conv11_STATE_VARIABLE_Specs_34);
        *STATE_VARIABLE_RecompInfo_30 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_30));
        *STATE_VARIABLE_UsedModules_32 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_32));
        *STATE_VARIABLE_Specs_34 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_34));
        {
          ParseTree2_28 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ParseTree2_28, 0) = ((MR_Box) (IntModuleName_37));
          MR_hl_field(0, ParseTree2_28, 1) = ((MR_Box) (IntModuleNameContext_38));
          MR_hl_field(0, ParseTree2_28, 2) = ((MR_Box) (MaybeVersionNumbers_39));
          MR_hl_field(0, ParseTree2_28, 3) = ((MR_Box) (InclMap_40));
          MR_hl_field(0, ParseTree2_28, 4) = ((MR_Box) (ImportUseMap_41));
          MR_hl_field(0, ParseTree2_28, 5) = ((MR_Box) (IntFIMSpecs_42));
          MR_hl_field(0, ParseTree2_28, 6) = ((MR_Box) (ImpFIMSpecs_43));
          MR_hl_field(0, ParseTree2_28, 7) = ((MR_Box) (TypeCtorCheckedMap_48));
          MR_hl_field(0, ParseTree2_28, 8) = ((MR_Box) (InstCtorCheckedMap_49));
          MR_hl_field(0, ParseTree2_28, 9) = ((MR_Box) (ModeCtorCheckedMap_50));
          MR_hl_field(0, ParseTree2_28, 10) = ((MR_Box) (IntTypeClasses_51));
          MR_hl_field(0, ParseTree2_28, 11) = ((MR_Box) (IntInstances_52));
          MR_hl_field(0, ParseTree2_28, 12) = ((MR_Box) (IntTypeRepnMap_53));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntForOptSpec_16 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (ParseTree2_28));
          MR_hl_field(2, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_27));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_2(
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
  MR_Word conv10_Info_16;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Info_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_Info_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_1(
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
  MR_Word conv3_CheckedDefn_20;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_63;
  MR_Word conv1_STATE_VARIABLE_UsedModules_65;
  MR_Word conv0_STATE_VARIABLE_Specs_67;

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_63));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_65));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_67));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreeInt1_15,
  MR_Word * ParseTreeInt1_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_51,
  MR_Word * STATE_VARIABLE_RecompInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_Word IntModuleName_22 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 0))));
  MR_Word IntModuleNameContext_23 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 1))));
  MR_Word MaybeVersionNumbers_24 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 2))));
  MR_Word InclMap_25 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 3))));
  MR_Word ImportUseMap_26 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 4))));
  MR_Word IntFIMSpecs_27 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 5))));
  MR_Word ImpFIMSpecs_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 6))));
  MR_Word TypeCtorCheckedMap0_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 7))));
  MR_Word IntTypeClasses0_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 10))));
  MR_Word IntInstances0_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 11))));
  MR_Word IntPredDecls0_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 12))));
  MR_Word IntModeDecls0_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 13))));
  MR_Word IntDeclPragmas0_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 14))));
  MR_Word IntDeclMarkers0_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 15))));
  MR_Word IntPromises_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 16))));
  MR_Word IntTypeRepnMap0_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 17))));
  MR_Word ImpTypeClasses0_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 18))));
  MR_Word TypeCtorCheckedMap_41;
  MR_Word InstCtorCheckedMap_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 8))));
  MR_Word ModeCtorCheckedMap_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt1_15, 9))));
  MR_Word IntTypeClasses_44;
  MR_Word IntInstances_45;
  MR_Word IntPredDecls_46;
  MR_Word IntModeDecls_47;
  MR_Word IntDeclPragmas_48;
  MR_Word IntTypeRepnMap_49;
  MR_Word ImpTypeClasses_50;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_RecompInfo_1_58;
  MR_Word STATE_VARIABLE_UsedModules_1_59;
  MR_Word STATE_VARIABLE_Specs_1_60;
  MR_Word STATE_VARIABLE_RecompInfo_2_62;
  MR_Word STATE_VARIABLE_UsedModules_2_63;
  MR_Word STATE_VARIABLE_Specs_2_64;
  MR_Word STATE_VARIABLE_RecompInfo_3_66;
  MR_Word STATE_VARIABLE_UsedModules_3_67;
  MR_Word STATE_VARIABLE_Specs_3_68;
  MR_Word STATE_VARIABLE_RecompInfo_4_70;
  MR_Word STATE_VARIABLE_UsedModules_4_71;
  MR_Word STATE_VARIABLE_Specs_4_72;
  MR_Word STATE_VARIABLE_RecompInfo_5_74;
  MR_Word STATE_VARIABLE_UsedModules_5_75;
  MR_Word STATE_VARIABLE_Specs_5_76;
  MR_Word STATE_VARIABLE_RecompInfo_6_78;
  MR_Word STATE_VARIABLE_UsedModules_6_79;
  MR_Word STATE_VARIABLE_Specs_6_80;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_RecompInfo_7_82;
  MR_Word STATE_VARIABLE_UsedModules_7_83;
  MR_Word STATE_VARIABLE_Specs_7_84;
  MR_Word RevItems_181;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_58;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_59;
  MR_Box conv4_STATE_VARIABLE_Specs_1_60;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_7_82;
  MR_Box conv12_STATE_VARIABLE_UsedModules_7_83;
  MR_Box conv11_STATE_VARIABLE_Specs_7_84;

  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_1));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_57, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_57, 6) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(0, Var_57, 7) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_57, TypeCtorCheckedMap0_29, &TypeCtorCheckedMap_41, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_51)), &conv6_STATE_VARIABLE_RecompInfo_1_58, ((MR_Box) (STATE_VARIABLE_UsedModules_0_53)), &conv5_STATE_VARIABLE_UsedModules_1_59, ((MR_Box) (STATE_VARIABLE_Specs_0_55)), &conv4_STATE_VARIABLE_Specs_1_60);
  STATE_VARIABLE_RecompInfo_1_58 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_58));
  STATE_VARIABLE_UsedModules_1_59 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_59));
  STATE_VARIABLE_Specs_1_60 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_60));
  parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_32, (MR_Word) ((MR_Unsigned) 0U), &RevItems_181, STATE_VARIABLE_RecompInfo_1_58, &STATE_VARIABLE_RecompInfo_2_62, STATE_VARIABLE_UsedModules_1_59, &STATE_VARIABLE_UsedModules_2_63, STATE_VARIABLE_Specs_1_60, &STATE_VARIABLE_Specs_2_64);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_181, &IntTypeClasses_44);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_33, &IntInstances_45, STATE_VARIABLE_RecompInfo_2_62, &STATE_VARIABLE_RecompInfo_3_66, STATE_VARIABLE_UsedModules_2_63, &STATE_VARIABLE_UsedModules_3_67, STATE_VARIABLE_Specs_2_64, &STATE_VARIABLE_Specs_3_68);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntPredDecls0_34, &IntPredDecls_46, STATE_VARIABLE_RecompInfo_3_66, &STATE_VARIABLE_RecompInfo_4_70, STATE_VARIABLE_UsedModules_3_67, &STATE_VARIABLE_UsedModules_4_71, STATE_VARIABLE_Specs_3_68, &STATE_VARIABLE_Specs_4_72);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, IntModeDecls0_35, &IntModeDecls_47, STATE_VARIABLE_RecompInfo_4_70, &STATE_VARIABLE_RecompInfo_5_74, STATE_VARIABLE_UsedModules_4_71, &STATE_VARIABLE_UsedModules_5_75, STATE_VARIABLE_Specs_4_72, &STATE_VARIABLE_Specs_5_76);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntDeclPragmas0_36, &IntDeclPragmas_48, STATE_VARIABLE_RecompInfo_5_74, &STATE_VARIABLE_RecompInfo_6_78, STATE_VARIABLE_UsedModules_5_75, &STATE_VARIABLE_UsedModules_6_79, STATE_VARIABLE_Specs_5_76, &STATE_VARIABLE_Specs_6_80);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[8]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_2));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_81, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_81, 5) = ((MR_Box) (TypeEqvMap_13));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_81, IntTypeRepnMap0_39, &IntTypeRepnMap_49, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_78)), &conv13_STATE_VARIABLE_RecompInfo_7_82, ((MR_Box) (STATE_VARIABLE_UsedModules_6_79)), &conv12_STATE_VARIABLE_UsedModules_7_83, ((MR_Box) (STATE_VARIABLE_Specs_6_80)), &conv11_STATE_VARIABLE_Specs_7_84);
  STATE_VARIABLE_RecompInfo_7_82 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_7_82));
  STATE_VARIABLE_UsedModules_7_83 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_7_83));
  STATE_VARIABLE_Specs_7_84 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_7_84));
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_54_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, ImpTypeClasses0_40, &ImpTypeClasses_50, STATE_VARIABLE_RecompInfo_7_82, STATE_VARIABLE_RecompInfo_52, STATE_VARIABLE_UsedModules_7_83, STATE_VARIABLE_UsedModules_54, STATE_VARIABLE_Specs_7_84, STATE_VARIABLE_Specs_56);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt1_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (IntModuleName_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (IntModuleNameContext_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (ImportUseMap_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_27));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_28));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeCtorCheckedMap_41));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_42));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_43));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_44));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_45));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_46));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_47));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_48));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers0_37));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_38));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntTypeRepnMap_49));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpTypeClasses_50));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0_2(
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
  MR_Word conv10_Info_16;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Info_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_Info_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0_1(
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
  MR_Word conv3_CheckedDefn_20;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_63;
  MR_Word conv1_STATE_VARIABLE_UsedModules_65;
  MR_Word conv0_STATE_VARIABLE_Specs_67;

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_63));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_65));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_67));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word IndirectIntSpec0_15,
  MR_Word * IndirectIntSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_23,
  MR_Word * STATE_VARIABLE_RecompInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word OrigParseTree2_20 = ((MR_Word) ((MR_hl_field(0, IndirectIntSpec0_15, 0))));
  MR_Word ReadWhy2_21 = ((MR_Unsigned) ((MR_hl_field(0, IndirectIntSpec0_15, 1))) & (MR_Integer) 3);
  MR_Word ParseTree2_22;
  MR_Word IntModuleName_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 0))));
  MR_Word IntModuleNameContext_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 1))));
  MR_Word MaybeVersionNumbers_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 2))));
  MR_Word InclMap_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 3))));
  MR_Word ImportUseMap_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 4))));
  MR_Word IntFIMSpecs_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 5))));
  MR_Word ImpFIMSpecs_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 6))));
  MR_Word TypeCtorCheckedMap0_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 7))));
  MR_Word IntTypeClasses0_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 10))));
  MR_Word IntInstances0_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 11))));
  MR_Word IntTypeRepnMap0_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 12))));
  MR_Word TypeCtorCheckedMap_42;
  MR_Word InstCtorCheckedMap_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 8))));
  MR_Word ModeCtorCheckedMap_44 = ((MR_Word) ((MR_hl_field(0, OrigParseTree2_20, 9))));
  MR_Word IntTypeClasses_45;
  MR_Word IntInstances_46;
  MR_Word IntTypeRepnMap_47;
  MR_Word Var_48;
  MR_Word STATE_VARIABLE_RecompInfo_1_49;
  MR_Word STATE_VARIABLE_UsedModules_1_50;
  MR_Word STATE_VARIABLE_Specs_1_51;
  MR_Word STATE_VARIABLE_RecompInfo_2_53;
  MR_Word STATE_VARIABLE_UsedModules_2_54;
  MR_Word STATE_VARIABLE_Specs_2_55;
  MR_Word STATE_VARIABLE_RecompInfo_3_57;
  MR_Word STATE_VARIABLE_UsedModules_3_58;
  MR_Word STATE_VARIABLE_Specs_3_59;
  MR_Word Var_60;
  MR_Word RevItems_70;
  MR_Word RevItems_74;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_49;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_50;
  MR_Box conv4_STATE_VARIABLE_Specs_1_51;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_24;
  MR_Box conv12_STATE_VARIABLE_UsedModules_26;
  MR_Box conv11_STATE_VARIABLE_Specs_28;

  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0_1));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_48, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_48, 6) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(0, Var_48, 7) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_48, TypeCtorCheckedMap0_38, &TypeCtorCheckedMap_42, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_23)), &conv6_STATE_VARIABLE_RecompInfo_1_49, ((MR_Box) (STATE_VARIABLE_UsedModules_0_25)), &conv5_STATE_VARIABLE_UsedModules_1_50, ((MR_Box) (STATE_VARIABLE_Specs_0_27)), &conv4_STATE_VARIABLE_Specs_1_51);
  STATE_VARIABLE_RecompInfo_1_49 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_49));
  STATE_VARIABLE_UsedModules_1_50 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_50));
  STATE_VARIABLE_Specs_1_51 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_51));
  parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_39, (MR_Word) ((MR_Unsigned) 0U), &RevItems_70, STATE_VARIABLE_RecompInfo_1_49, &STATE_VARIABLE_RecompInfo_2_53, STATE_VARIABLE_UsedModules_1_50, &STATE_VARIABLE_UsedModules_2_54, STATE_VARIABLE_Specs_1_51, &STATE_VARIABLE_Specs_2_55);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_70, &IntTypeClasses_45);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_52_95_95_91_52_93_95_48_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_40, (MR_Word) ((MR_Unsigned) 0U), &RevItems_74, STATE_VARIABLE_RecompInfo_2_53, &STATE_VARIABLE_RecompInfo_3_57, STATE_VARIABLE_UsedModules_2_54, &STATE_VARIABLE_UsedModules_3_58, STATE_VARIABLE_Specs_2_55, &STATE_VARIABLE_Specs_3_59);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_74, &IntInstances_46);
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[8]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0_2));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_60, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_60, 5) = ((MR_Box) (TypeEqvMap_13));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_60, IntTypeRepnMap0_41, &IntTypeRepnMap_47, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_57)), &conv13_STATE_VARIABLE_RecompInfo_24, ((MR_Box) (STATE_VARIABLE_UsedModules_3_58)), &conv12_STATE_VARIABLE_UsedModules_26, ((MR_Box) (STATE_VARIABLE_Specs_3_59)), &conv11_STATE_VARIABLE_Specs_28);
  *STATE_VARIABLE_RecompInfo_24 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_24));
  *STATE_VARIABLE_UsedModules_26 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_26));
  *STATE_VARIABLE_Specs_28 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_28));
  {
    ParseTree2_22 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTree2_22, 0) = ((MR_Box) (IntModuleName_31));
    MR_hl_field(0, ParseTree2_22, 1) = ((MR_Box) (IntModuleNameContext_32));
    MR_hl_field(0, ParseTree2_22, 2) = ((MR_Box) (MaybeVersionNumbers_33));
    MR_hl_field(0, ParseTree2_22, 3) = ((MR_Box) (InclMap_34));
    MR_hl_field(0, ParseTree2_22, 4) = ((MR_Box) (ImportUseMap_35));
    MR_hl_field(0, ParseTree2_22, 5) = ((MR_Box) (IntFIMSpecs_36));
    MR_hl_field(0, ParseTree2_22, 6) = ((MR_Box) (ImpFIMSpecs_37));
    MR_hl_field(0, ParseTree2_22, 7) = ((MR_Box) (TypeCtorCheckedMap_42));
    MR_hl_field(0, ParseTree2_22, 8) = ((MR_Box) (InstCtorCheckedMap_43));
    MR_hl_field(0, ParseTree2_22, 9) = ((MR_Box) (ModeCtorCheckedMap_44));
    MR_hl_field(0, ParseTree2_22, 10) = ((MR_Box) (IntTypeClasses_45));
    MR_hl_field(0, ParseTree2_22, 11) = ((MR_Box) (IntInstances_46));
    MR_hl_field(0, ParseTree2_22, 12) = ((MR_Box) (IntTypeRepnMap_47));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *IndirectIntSpec_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree2_22));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0_2(
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
  MR_Word conv10_Info_16;
  MR_Word conv9_STATE_VARIABLE_RecompInfo_54;
  MR_Word conv8_STATE_VARIABLE_UsedModules_56;
  MR_Word conv7_STATE_VARIABLE_Specs_58;

  parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Info_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_54, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_56, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_58);
  *wrapper_arg_2 = ((MR_Box) (conv10_Info_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_54));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_56));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_58));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0_1(
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
  MR_Word conv3_CheckedDefn_20;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_63;
  MR_Word conv1_STATE_VARIABLE_UsedModules_65;
  MR_Word conv0_STATE_VARIABLE_Specs_67;

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_63));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_65));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_67));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word DirectIntSpec0_15,
  MR_Word * DirectIntSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_23,
  MR_Word * STATE_VARIABLE_RecompInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word OrigParseTree1_20 = ((MR_Word) ((MR_hl_field(0, DirectIntSpec0_15, 0))));
  MR_Word ReadWhy1_21 = ((MR_Unsigned) ((MR_hl_field(0, DirectIntSpec0_15, 1))) & (MR_Integer) 7);
  MR_Word ParseTree1_22;
  MR_Word IntModuleName_31 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 0))));
  MR_Word IntModuleNameContext_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 1))));
  MR_Word MaybeVersionNumbers_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 2))));
  MR_Word InclMap_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 3))));
  MR_Word ImportUseMap_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 4))));
  MR_Word IntFIMSpecs_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 5))));
  MR_Word ImpFIMSpecs_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 6))));
  MR_Word TypeCtorCheckedMap0_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 7))));
  MR_Word IntTypeClasses0_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 10))));
  MR_Word IntInstances0_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 11))));
  MR_Word IntPredDecls0_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 12))));
  MR_Word IntModeDecls0_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 13))));
  MR_Word IntDeclPragmas0_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 14))));
  MR_Word IntDeclMarkers0_44 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 15))));
  MR_Word IntPromises_45 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 16))));
  MR_Word IntTypeRepnMap0_46 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 17))));
  MR_Word ImpTypeClasses0_47 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 18))));
  MR_Word TypeCtorCheckedMap_48;
  MR_Word InstCtorCheckedMap_49 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 8))));
  MR_Word ModeCtorCheckedMap_50 = ((MR_Word) ((MR_hl_field(0, OrigParseTree1_20, 9))));
  MR_Word IntTypeClasses_51;
  MR_Word IntInstances_52;
  MR_Word IntPredDecls_53;
  MR_Word IntModeDecls_54;
  MR_Word IntDeclPragmas_55;
  MR_Word IntTypeRepnMap_56;
  MR_Word ImpTypeClasses_57;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_RecompInfo_1_59;
  MR_Word STATE_VARIABLE_UsedModules_1_60;
  MR_Word STATE_VARIABLE_Specs_1_61;
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
  MR_Word STATE_VARIABLE_RecompInfo_6_79;
  MR_Word STATE_VARIABLE_UsedModules_6_80;
  MR_Word STATE_VARIABLE_Specs_6_81;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_RecompInfo_7_83;
  MR_Word STATE_VARIABLE_UsedModules_7_84;
  MR_Word STATE_VARIABLE_Specs_7_85;
  MR_Word RevItems_100;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_59;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_60;
  MR_Box conv4_STATE_VARIABLE_Specs_1_61;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_7_83;
  MR_Box conv12_STATE_VARIABLE_UsedModules_7_84;
  MR_Box conv11_STATE_VARIABLE_Specs_7_85;

  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0_1));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_58, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_58, 6) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(0, Var_58, 7) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_58, TypeCtorCheckedMap0_38, &TypeCtorCheckedMap_48, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_23)), &conv6_STATE_VARIABLE_RecompInfo_1_59, ((MR_Box) (STATE_VARIABLE_UsedModules_0_25)), &conv5_STATE_VARIABLE_UsedModules_1_60, ((MR_Box) (STATE_VARIABLE_Specs_0_27)), &conv4_STATE_VARIABLE_Specs_1_61);
  STATE_VARIABLE_RecompInfo_1_59 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_59));
  STATE_VARIABLE_UsedModules_1_60 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_60));
  STATE_VARIABLE_Specs_1_61 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_61));
  parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_39, (MR_Word) ((MR_Unsigned) 0U), &RevItems_100, STATE_VARIABLE_RecompInfo_1_59, &STATE_VARIABLE_RecompInfo_2_63, STATE_VARIABLE_UsedModules_1_60, &STATE_VARIABLE_UsedModules_2_64, STATE_VARIABLE_Specs_1_61, &STATE_VARIABLE_Specs_2_65);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_100, &IntTypeClasses_51);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_40, &IntInstances_52, STATE_VARIABLE_RecompInfo_2_63, &STATE_VARIABLE_RecompInfo_3_67, STATE_VARIABLE_UsedModules_2_64, &STATE_VARIABLE_UsedModules_3_68, STATE_VARIABLE_Specs_2_65, &STATE_VARIABLE_Specs_3_69);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntPredDecls0_41, &IntPredDecls_53, STATE_VARIABLE_RecompInfo_3_67, &STATE_VARIABLE_RecompInfo_4_71, STATE_VARIABLE_UsedModules_3_68, &STATE_VARIABLE_UsedModules_4_72, STATE_VARIABLE_Specs_3_69, &STATE_VARIABLE_Specs_4_73);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, IntModeDecls0_42, &IntModeDecls_54, STATE_VARIABLE_RecompInfo_4_71, &STATE_VARIABLE_RecompInfo_5_75, STATE_VARIABLE_UsedModules_4_72, &STATE_VARIABLE_UsedModules_5_76, STATE_VARIABLE_Specs_4_73, &STATE_VARIABLE_Specs_5_77);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntDeclPragmas0_43, &IntDeclPragmas_55, STATE_VARIABLE_RecompInfo_5_75, &STATE_VARIABLE_RecompInfo_6_79, STATE_VARIABLE_UsedModules_5_76, &STATE_VARIABLE_UsedModules_6_80, STATE_VARIABLE_Specs_5_77, &STATE_VARIABLE_Specs_6_81);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[8]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0_2));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_82, 5) = ((MR_Box) (TypeEqvMap_13));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_82, IntTypeRepnMap0_46, &IntTypeRepnMap_56, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_79)), &conv13_STATE_VARIABLE_RecompInfo_7_83, ((MR_Box) (STATE_VARIABLE_UsedModules_6_80)), &conv12_STATE_VARIABLE_UsedModules_7_84, ((MR_Box) (STATE_VARIABLE_Specs_6_81)), &conv11_STATE_VARIABLE_Specs_7_85);
  STATE_VARIABLE_RecompInfo_7_83 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_7_83));
  STATE_VARIABLE_UsedModules_7_84 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_7_84));
  STATE_VARIABLE_Specs_7_85 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_7_85));
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_54_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, ImpTypeClasses0_47, &ImpTypeClasses_57, STATE_VARIABLE_RecompInfo_7_83, STATE_VARIABLE_RecompInfo_24, STATE_VARIABLE_UsedModules_7_84, STATE_VARIABLE_UsedModules_26, STATE_VARIABLE_Specs_7_85, STATE_VARIABLE_Specs_28);
  {
    ParseTree1_22 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTree1_22, 0) = ((MR_Box) (IntModuleName_31));
    MR_hl_field(0, ParseTree1_22, 1) = ((MR_Box) (IntModuleNameContext_32));
    MR_hl_field(0, ParseTree1_22, 2) = ((MR_Box) (MaybeVersionNumbers_33));
    MR_hl_field(0, ParseTree1_22, 3) = ((MR_Box) (InclMap_34));
    MR_hl_field(0, ParseTree1_22, 4) = ((MR_Box) (ImportUseMap_35));
    MR_hl_field(0, ParseTree1_22, 5) = ((MR_Box) (IntFIMSpecs_36));
    MR_hl_field(0, ParseTree1_22, 6) = ((MR_Box) (ImpFIMSpecs_37));
    MR_hl_field(0, ParseTree1_22, 7) = ((MR_Box) (TypeCtorCheckedMap_48));
    MR_hl_field(0, ParseTree1_22, 8) = ((MR_Box) (InstCtorCheckedMap_49));
    MR_hl_field(0, ParseTree1_22, 9) = ((MR_Box) (ModeCtorCheckedMap_50));
    MR_hl_field(0, ParseTree1_22, 10) = ((MR_Box) (IntTypeClasses_51));
    MR_hl_field(0, ParseTree1_22, 11) = ((MR_Box) (IntInstances_52));
    MR_hl_field(0, ParseTree1_22, 12) = ((MR_Box) (IntPredDecls_53));
    MR_hl_field(0, ParseTree1_22, 13) = ((MR_Box) (IntModeDecls_54));
    MR_hl_field(0, ParseTree1_22, 14) = ((MR_Box) (IntDeclPragmas_55));
    MR_hl_field(0, ParseTree1_22, 15) = ((MR_Box) (IntDeclMarkers0_44));
    MR_hl_field(0, ParseTree1_22, 16) = ((MR_Box) (IntPromises_45));
    MR_hl_field(0, ParseTree1_22, 17) = ((MR_Box) (IntTypeRepnMap_56));
    MR_hl_field(0, ParseTree1_22, 18) = ((MR_Box) (ImpTypeClasses_57));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DirectIntSpec_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree1_22));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_54_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_51_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_typeclass_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_51_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_20)
{
  MR_Word ClassName_21 = ((MR_Word) ((MR_hl_field(0, Info0_16, 0))));
  MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(0, Info0_16, 1))));
  MR_Word Constraints0_23 = ((MR_Word) ((MR_hl_field(0, Info0_16, 2))));
  MR_Word FunDeps_24 = ((MR_Word) ((MR_hl_field(0, Info0_16, 3))));
  MR_Word ClassInterface_25 = ((MR_Word) ((MR_hl_field(0, Info0_16, 4))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(0, Info0_16, 5))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Info0_16, 6))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Info0_16, 7))));
  MR_Integer Arity_29;
  MR_Word ExpandedItems0_30;
  MR_Word Constraints_31;
  MR_Word TVarSet_32;
  MR_Word ExpandedItems_33;
  MR_Word ItemName_34;
  MR_Word ItemId_35;
  MR_Word Var_43;
  MR_Box conv6_TVarSet_32;
  MR_Box conv5_ExpandedItems_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_39;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), Vars_22, &Arity_29);
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, ClassName_21, STATE_VARIABLE_RecompInfo_0_36, &ExpandedItems0_30);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (MaybeRecord_13));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) (TypeEqvMap_14));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_43, Constraints0_23, &Constraints_31, ((MR_Box) (TVarSet0_26)), &conv6_TVarSet_32, ((MR_Box) (ExpandedItems0_30)), &conv5_ExpandedItems_33, ((MR_Box) (STATE_VARIABLE_UsedModules_0_38)), &conv4_STATE_VARIABLE_UsedModules_39);
  TVarSet_32 = ((MR_Word) (conv6_TVarSet_32));
  ExpandedItems_33 = ((MR_Word) (conv5_ExpandedItems_33));
  *STATE_VARIABLE_UsedModules_39 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_39));
  *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
  {
    ItemName_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_34, 0) = ((MR_Box) (ClassName_21));
    MR_hl_field(0, ItemName_34, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_35, 1) = ((MR_Box) (ItemName_34));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_35, ExpandedItems_33, STATE_VARIABLE_RecompInfo_0_36, STATE_VARIABLE_RecompInfo_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (ClassInterface_25));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ancestor_int_spec_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word AncestorIntSpec0_15,
  MR_Word * AncestorIntSpec_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_23,
  MR_Word * STATE_VARIABLE_RecompInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word OrigParseTree0_20 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec0_15, 0))));
  MR_Word ReadWhy0_21 = ((MR_Unsigned) ((MR_hl_field(0, AncestorIntSpec0_15, 1))) & (MR_Integer) 1);
  MR_Word ParseTree0_22;

  parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree0_20, &ParseTree0_22, STATE_VARIABLE_RecompInfo_0_23, STATE_VARIABLE_RecompInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *AncestorIntSpec_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTree0_22));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0_1(
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
  MR_Word conv3_CheckedDefn_20;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_63;
  MR_Word conv1_STATE_VARIABLE_UsedModules_65;
  MR_Word conv0_STATE_VARIABLE_Specs_67;

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_63));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_65));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_67));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreeInt0_15,
  MR_Word * ParseTreeInt0_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_59,
  MR_Word * STATE_VARIABLE_RecompInfo_60,
  MR_Word STATE_VARIABLE_UsedModules_0_61,
  MR_Word * STATE_VARIABLE_UsedModules_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  MR_Word IntModuleName_22 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 0))));
  MR_Word IntModuleNameContext_23 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 1))));
  MR_Word MaybeVersionNumbers_24 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 2))));
  MR_Word InclMap_25 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 3))));
  MR_Word ImportUseMap_26 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 4))));
  MR_Word IntFIMSpecs_27 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 5))));
  MR_Word ImpFIMSpecs_28 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 6))));
  MR_Word TypeCtorCheckedMap0_29 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 7))));
  MR_Word IntTypeClasses0_32 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 10))));
  MR_Word IntInstances0_33 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 11))));
  MR_Word IntPredDecls0_34 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 12))));
  MR_Word IntModeDecls0_35 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 13))));
  MR_Word IntDeclPragmas0_36 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 14))));
  MR_Word IntDeclMarkers_37 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 15))));
  MR_Word IntPromises_38 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 16))));
  MR_Word ImpTypeClasses0_39 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 17))));
  MR_Word ImpInstances0_40 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 18))));
  MR_Word ImpPredDecls0_41 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 19))));
  MR_Word ImpModeDecls0_42 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 20))));
  MR_Word ImpDeclPragmas0_43 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 21))));
  MR_Word ImpDeclMarkers_44 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 22))));
  MR_Word ImpPromises_45 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 23))));
  MR_Word TypeCtorCheckedMap_46;
  MR_Word InstCtorCheckedMap_47 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 8))));
  MR_Word ModeCtorCheckedMap_48 = ((MR_Word) ((MR_hl_field(0, OrigParseTreeInt0_15, 9))));
  MR_Word IntTypeClasses_49;
  MR_Word IntInstances_50;
  MR_Word IntPredDecls_51;
  MR_Word IntModeDecls_52;
  MR_Word IntDeclPragmas_53;
  MR_Word ImpTypeClasses_54;
  MR_Word ImpInstances_55;
  MR_Word ImpPredDecls_56;
  MR_Word ImpModeDecls_57;
  MR_Word ImpDeclPragmas_58;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_RecompInfo_1_66;
  MR_Word STATE_VARIABLE_UsedModules_1_67;
  MR_Word STATE_VARIABLE_Specs_1_68;
  MR_Word STATE_VARIABLE_RecompInfo_2_70;
  MR_Word STATE_VARIABLE_UsedModules_2_71;
  MR_Word STATE_VARIABLE_Specs_2_72;
  MR_Word STATE_VARIABLE_RecompInfo_3_74;
  MR_Word STATE_VARIABLE_UsedModules_3_75;
  MR_Word STATE_VARIABLE_Specs_3_76;
  MR_Word STATE_VARIABLE_RecompInfo_4_78;
  MR_Word STATE_VARIABLE_UsedModules_4_79;
  MR_Word STATE_VARIABLE_Specs_4_80;
  MR_Word STATE_VARIABLE_RecompInfo_5_82;
  MR_Word STATE_VARIABLE_UsedModules_5_83;
  MR_Word STATE_VARIABLE_Specs_5_84;
  MR_Word STATE_VARIABLE_RecompInfo_6_86;
  MR_Word STATE_VARIABLE_UsedModules_6_87;
  MR_Word STATE_VARIABLE_Specs_6_88;
  MR_Word STATE_VARIABLE_RecompInfo_7_90;
  MR_Word STATE_VARIABLE_UsedModules_7_91;
  MR_Word STATE_VARIABLE_Specs_7_92;
  MR_Word STATE_VARIABLE_RecompInfo_8_94;
  MR_Word STATE_VARIABLE_UsedModules_8_95;
  MR_Word STATE_VARIABLE_Specs_8_96;
  MR_Word STATE_VARIABLE_RecompInfo_9_98;
  MR_Word STATE_VARIABLE_UsedModules_9_99;
  MR_Word STATE_VARIABLE_Specs_9_100;
  MR_Word STATE_VARIABLE_RecompInfo_10_102;
  MR_Word STATE_VARIABLE_UsedModules_10_103;
  MR_Word STATE_VARIABLE_Specs_10_104;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_1_66;
  MR_Box conv5_STATE_VARIABLE_UsedModules_1_67;
  MR_Box conv4_STATE_VARIABLE_Specs_1_68;

  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0_1));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_65, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_65, 6) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(0, Var_65, 7) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_65, TypeCtorCheckedMap0_29, &TypeCtorCheckedMap_46, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_59)), &conv6_STATE_VARIABLE_RecompInfo_1_66, ((MR_Box) (STATE_VARIABLE_UsedModules_0_61)), &conv5_STATE_VARIABLE_UsedModules_1_67, ((MR_Box) (STATE_VARIABLE_Specs_0_63)), &conv4_STATE_VARIABLE_Specs_1_68);
  STATE_VARIABLE_RecompInfo_1_66 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_66));
  STATE_VARIABLE_UsedModules_1_67 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_67));
  STATE_VARIABLE_Specs_1_68 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_68));
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_32, &IntTypeClasses_49, STATE_VARIABLE_RecompInfo_1_66, &STATE_VARIABLE_RecompInfo_2_70, STATE_VARIABLE_UsedModules_1_67, &STATE_VARIABLE_UsedModules_2_71, STATE_VARIABLE_Specs_1_68, &STATE_VARIABLE_Specs_2_72);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_33, &IntInstances_50, STATE_VARIABLE_RecompInfo_2_70, &STATE_VARIABLE_RecompInfo_3_74, STATE_VARIABLE_UsedModules_2_71, &STATE_VARIABLE_UsedModules_3_75, STATE_VARIABLE_Specs_2_72, &STATE_VARIABLE_Specs_3_76);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntPredDecls0_34, &IntPredDecls_51, STATE_VARIABLE_RecompInfo_3_74, &STATE_VARIABLE_RecompInfo_4_78, STATE_VARIABLE_UsedModules_3_75, &STATE_VARIABLE_UsedModules_4_79, STATE_VARIABLE_Specs_3_76, &STATE_VARIABLE_Specs_4_80);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, IntModeDecls0_35, &IntModeDecls_52, STATE_VARIABLE_RecompInfo_4_78, &STATE_VARIABLE_RecompInfo_5_82, STATE_VARIABLE_UsedModules_4_79, &STATE_VARIABLE_UsedModules_5_83, STATE_VARIABLE_Specs_4_80, &STATE_VARIABLE_Specs_5_84);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntDeclPragmas0_36, &IntDeclPragmas_53, STATE_VARIABLE_RecompInfo_5_82, &STATE_VARIABLE_RecompInfo_6_86, STATE_VARIABLE_UsedModules_5_83, &STATE_VARIABLE_UsedModules_6_87, STATE_VARIABLE_Specs_5_84, &STATE_VARIABLE_Specs_6_88);
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, ImpTypeClasses0_39, &ImpTypeClasses_54, STATE_VARIABLE_RecompInfo_6_86, &STATE_VARIABLE_RecompInfo_7_90, STATE_VARIABLE_UsedModules_6_87, &STATE_VARIABLE_UsedModules_7_91, STATE_VARIABLE_Specs_6_88, &STATE_VARIABLE_Specs_7_92);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, ImpInstances0_40, &ImpInstances_55, STATE_VARIABLE_RecompInfo_7_90, &STATE_VARIABLE_RecompInfo_8_94, STATE_VARIABLE_UsedModules_7_91, &STATE_VARIABLE_UsedModules_8_95, STATE_VARIABLE_Specs_7_92, &STATE_VARIABLE_Specs_8_96);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, ImpPredDecls0_41, &ImpPredDecls_56, STATE_VARIABLE_RecompInfo_8_94, &STATE_VARIABLE_RecompInfo_9_98, STATE_VARIABLE_UsedModules_8_95, &STATE_VARIABLE_UsedModules_9_99, STATE_VARIABLE_Specs_8_96, &STATE_VARIABLE_Specs_9_100);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, ImpModeDecls0_42, &ImpModeDecls_57, STATE_VARIABLE_RecompInfo_9_98, &STATE_VARIABLE_RecompInfo_10_102, STATE_VARIABLE_UsedModules_9_99, &STATE_VARIABLE_UsedModules_10_103, STATE_VARIABLE_Specs_9_100, &STATE_VARIABLE_Specs_10_104);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, ImpDeclPragmas0_43, &ImpDeclPragmas_58, STATE_VARIABLE_RecompInfo_10_102, STATE_VARIABLE_RecompInfo_60, STATE_VARIABLE_UsedModules_10_103, STATE_VARIABLE_UsedModules_62, STATE_VARIABLE_Specs_10_104, STATE_VARIABLE_Specs_64);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt0_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (IntModuleName_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (IntModuleNameContext_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (ImportUseMap_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_27));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_28));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeCtorCheckedMap_46));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_47));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_48));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_49));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_50));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_51));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_52));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_53));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntDeclMarkers_37));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntPromises_38));
    MR_hl_field(0, base, 17) = ((MR_Box) (ImpTypeClasses_54));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpInstances_55));
    MR_hl_field(0, base, 19) = ((MR_Box) (ImpPredDecls_56));
    MR_hl_field(0, base, 20) = ((MR_Box) (ImpModeDecls_57));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpDeclPragmas_58));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpDeclMarkers_44));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPromises_45));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_52_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_52_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstanceInfo0_16,
  MR_Word * InstanceInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word STATE_VARIABLE_UsedModules_0_42,
  MR_Word * STATE_VARIABLE_UsedModules_43,
  MR_Word * HeadVar__11_11)
{
  MR_bool succeeded;
  MR_Word ClassName_20;
  MR_Word Types0_21;
  MR_Word OriginalTypes_22;
  MR_Word Constraints0_23;
  MR_Word InstanceBody_24;
  MR_Word TVarSet0_25;
  MR_Word ContainingModuleName_26;
  MR_Word Context_27;
  MR_Word SeqNum_28;
  MR_Word UsedTypeCtors0_29;
  MR_Word Constraints_30;
  MR_Word TVarSet1_31;
  MR_Word UsedTypeCtors1_32;
  MR_Word Types_33;
  MR_Word TVarSet_36;
  MR_Word UsedTypeCtors_37;
  MR_Word ItemName_38;
  MR_Word ItemId_39;
  MR_Word STATE_VARIABLE_UsedModules_1_45;
  MR_Integer Var_47;
  MR_Word Var_52;
  MR_Word Var_58;
  MR_Box conv6_TVarSet1_31;
  MR_Box conv5_UsedTypeCtors1_32;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_45;
  MR_Word Var_34;
  MR_Word Var_35;

  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  ClassName_20 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 0))));
  Types0_21 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 1))));
  OriginalTypes_22 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 2))));
  Constraints0_23 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 3))));
  InstanceBody_24 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 4))));
  TVarSet0_25 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 5))));
  ContainingModuleName_26 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 6))));
  Context_27 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 7))));
  SeqNum_28 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 8))));
  succeeded = (STATE_VARIABLE_RecompInfo_0_40 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ContainingModuleName_26, ModuleName_12);
  if (succeeded)
    UsedTypeCtors0_29 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_44;

    Var_44 = mercury__set__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
    {
      UsedTypeCtors0_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UsedTypeCtors0_29, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(1, UsedTypeCtors0_29, 1) = ((MR_Box) (Var_44));
    }
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_97_98_115_116_114_97_99_116_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (MaybeRecord_13));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (TypeEqvMap_14));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_52, Constraints0_23, &Constraints_30, ((MR_Box) (TVarSet0_25)), &conv6_TVarSet1_31, ((MR_Box) (UsedTypeCtors0_29)), &conv5_UsedTypeCtors1_32, ((MR_Box) (STATE_VARIABLE_UsedModules_0_42)), &conv4_STATE_VARIABLE_UsedModules_1_45);
  TVarSet1_31 = ((MR_Word) (conv6_TVarSet1_31));
  UsedTypeCtors1_32 = ((MR_Word) (conv5_UsedTypeCtors1_32));
  STATE_VARIABLE_UsedModules_1_45 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_45));
  Var_58 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), Types0_21, &Types_33, &Var_34, Var_58, &Var_35, TVarSet1_31, &TVarSet_36, UsedTypeCtors1_32, &UsedTypeCtors_37, STATE_VARIABLE_UsedModules_1_45, STATE_VARIABLE_UsedModules_43);
  Var_47 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_21);
  {
    ItemName_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_38, 0) = ((MR_Box) (ClassName_20));
    MR_hl_field(0, ItemName_38, 1) = ((MR_Box) (Var_47));
  }
  {
    ItemId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_39, 1) = ((MR_Box) (ItemName_38));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_39, UsedTypeCtors_37, STATE_VARIABLE_RecompInfo_0_40, STATE_VARIABLE_RecompInfo_41);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *InstanceInfo_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (OriginalTypes_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstanceBody_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (ContainingModuleName_26));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_InstEqvMap_0_21,
  MR_Word * STATE_VARIABLE_InstEqvMap_22)
{
  MR_Word StdInstDefn_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_6, 0))));
  MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(0, StdInstDefn_8, 0))) & (MR_Integer) 3);
  MR_Word ItemInstDefn_11 = ((MR_Word) ((MR_hl_field(0, StdInstDefn_8, 1))));
  MR_Word InstParams_13 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_11, 1))));
  MR_Word MaybeAbstractInstDefn_15 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_11, 3))));

  if ((MaybeAbstractInstDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstEqvMap_22 = STATE_VARIABLE_InstEqvMap_0_21;
  else
  {
    MR_Word InstDefn_19 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_15, 0))));

    switch (Status_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_InstEqvMap_22 = STATE_VARIABLE_InstEqvMap_0_21;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_InstEqvMap_22 = STATE_VARIABLE_InstEqvMap_0_21;
        break;
      case (MR_Integer) 0:
        {
          MR_Word EqvInst_20 = (MR_Word) (InstDefn_19);
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_23, 0) = ((MR_Box) (InstParams_13));
            MR_hl_field(0, Var_23, 1) = ((MR_Box) (EqvInst_20));
          }
          mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (Var_23)), STATE_VARIABLE_InstEqvMap_0_21, STATE_VARIABLE_InstEqvMap_22);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_InstEqvMap_0_21,
  MR_Word * STATE_VARIABLE_InstEqvMap_22)
{
  MR_Word StdInstDefn_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_6, 0))));
  MR_Word ItemInstDefn_11 = ((MR_Word) ((MR_hl_field(0, StdInstDefn_8, 1))));
  MR_Word InstParams_13 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_11, 1))));
  MR_Word MaybeAbstractInstDefn_15 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_11, 3))));

  if ((MaybeAbstractInstDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstEqvMap_22 = STATE_VARIABLE_InstEqvMap_0_21;
  else
  {
    MR_Word InstDefn_19 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_15, 0))));
    MR_Word EqvInst_20 = (MR_Word) (InstDefn_19);
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (InstParams_13));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (EqvInst_20));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (Var_23)), STATE_VARIABLE_InstEqvMap_0_21, STATE_VARIABLE_InstEqvMap_22);
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_inst_defn_3_p_0(
  MR_Word ItemInstDefn_4,
  MR_Word STATE_VARIABLE_InstEqvMap_0_16,
  MR_Word * STATE_VARIABLE_InstEqvMap_17)
{
  MR_bool succeeded;
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_4, 0))));
  MR_Word InstParams_7 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_4, 1))));
  MR_Word InstDefn_9 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_4, 3))));
  MR_Word EqvInst_13;
  MR_Word Var_18;

  succeeded = (InstDefn_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(1, InstDefn_9, 0))));
    EqvInst_13 = (MR_Word) (Var_18);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Arity_14;
    MR_Word InstCtor_15;
    MR_Word Var_19;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[5]), InstParams_7, &Arity_14);
    {
      InstCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InstCtor_15, 0) = ((MR_Box) (Name_6));
      MR_hl_field(0, InstCtor_15, 1) = ((MR_Box) (Arity_14));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (InstParams_7));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (EqvInst_13));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), ((MR_Box) (InstCtor_15)), ((MR_Box) (Var_19)), STATE_VARIABLE_InstEqvMap_0_16, STATE_VARIABLE_InstEqvMap_17);
  }
  else
    *STATE_VARIABLE_InstEqvMap_17 = STATE_VARIABLE_InstEqvMap_0_16;
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_34,
  MR_Word * STATE_VARIABLE_TypeEqvMap_35)
{
  if (((MR_tag((MR_Word) CheckedDefn_6)) == (MR_Integer) 0))
    *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
  else
  {
    MR_Word StdTypeDefn_10 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_6, 0))));

    switch (MR_tag((MR_Word) StdTypeDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, StdTypeDefn_10, 0))) & (MR_Integer) 3);
          MR_Word ItemTypeDefnEqv_13 = ((MR_Word) ((MR_hl_field(0, StdTypeDefn_10, 1))));

          switch (Status_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
              break;
            case (MR_Integer) 0:
              {
                MR_Word TypeParams_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnEqv_13, 1))));
                MR_Word TypeDefn_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnEqv_13, 2))));
                MR_Word TVarSet_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnEqv_13, 3))));
                MR_Word EqvType_20 = (MR_Word) (TypeDefn_16);
                MR_Word Var_36;

                {
                  Var_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_36, 0) = ((MR_Box) (TVarSet_17));
                  MR_hl_field(0, Var_36, 1) = ((MR_Box) (TypeParams_15));
                  MR_hl_field(0, Var_36, 2) = ((MR_Box) (EqvType_20));
                }
                mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (Var_36)), STATE_VARIABLE_TypeEqvMap_0_34, STATE_VARIABLE_TypeEqvMap_35);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdTypeDefn_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_34,
  MR_Word * STATE_VARIABLE_TypeEqvMap_35)
{
  if (((MR_tag((MR_Word) CheckedDefn_6)) == (MR_Integer) 0))
    *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
  else
  {
    MR_Word StdTypeDefn_10 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_6, 0))));

    switch (MR_tag((MR_Word) StdTypeDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ItemTypeDefnEqv_13 = ((MR_Word) ((MR_hl_field(0, StdTypeDefn_10, 1))));
          MR_Word TypeParams_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnEqv_13, 1))));
          MR_Word TypeDefn_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnEqv_13, 2))));
          MR_Word TVarSet_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnEqv_13, 3))));
          MR_Word EqvType_20 = (MR_Word) (TypeDefn_16);
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_36, 0) = ((MR_Box) (TVarSet_17));
            MR_hl_field(0, Var_36, 1) = ((MR_Box) (TypeParams_15));
            MR_hl_field(0, Var_36, 2) = ((MR_Box) (EqvType_20));
          }
          mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (Var_36)), STATE_VARIABLE_TypeEqvMap_0_34, STATE_VARIABLE_TypeEqvMap_35);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdTypeDefn_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_TypeEqvMap_35 = STATE_VARIABLE_TypeEqvMap_0_34;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_type_defn_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_15,
  MR_Word * STATE_VARIABLE_TypeEqvMap_16)
{
  MR_bool succeeded;
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, 0))));
  MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, 1))));
  MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, 2))));
  MR_Word TVarSet_9 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, 3))));
  MR_Word EqvType_12;
  MR_Word Var_17;

  succeeded = ((((MR_tag((MR_Word) TypeDefn_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeDefn_8, 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(3, TypeDefn_8, 1))));
    EqvType_12 = (MR_Word) (Var_17);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Arity_13;
    MR_Word TypeCtor_14;
    MR_Word Var_18;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), TypeParams_7, &Arity_13);
    {
      TypeCtor_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_14, 0) = ((MR_Box) (Name_6));
      MR_hl_field(0, TypeCtor_14, 1) = ((MR_Box) (Arity_13));
    }
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (TVarSet_9));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (TypeParams_7));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) (EqvType_12));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (Var_18)), STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16);
  }
  else
    *STATE_VARIABLE_TypeEqvMap_16 = STATE_VARIABLE_TypeEqvMap_0_15;
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(
  MR_Word _ParseTreePlainOpt_6,
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5)
{
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(TypeEqvMap_7, TypeEqvMap_3, InstEqvMap_8, InstEqvMap_5);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeEqvMap_7,
  MR_Word * TypeEqvMap_3,
  MR_Word InstEqvMap_8,
  MR_Word * InstEqvMap_5)
{
  *TypeEqvMap_3 = TypeEqvMap_7;
  *InstEqvMap_5 = InstEqvMap_8;
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_17;

  parse_tree__equiv_type__build_eqv_maps_in_inst_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_InstEqvMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_17));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_16;

  parse_tree__equiv_type__build_eqv_maps_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeEqvMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_16));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0(
  MR_Word ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12)
{
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_6, 4))));
  MR_Word Var_17;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_10;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_12;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[24]), Var_14, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_9)), &conv1_STATE_VARIABLE_TypeEqvMap_10);
  *STATE_VARIABLE_TypeEqvMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_10));
  Var_17 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_6, 6))));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[4]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[25]), Var_17, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_11)), &conv3_STATE_VARIABLE_InstEqvMap_12);
  *STATE_VARIABLE_InstEqvMap_12 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_12));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0(
  MR_Word IntForOptSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_15,
  MR_Word * STATE_VARIABLE_TypeEqvMap_16,
  MR_Word STATE_VARIABLE_InstEqvMap_0_17,
  MR_Word * STATE_VARIABLE_InstEqvMap_18)
{
  switch (MR_tag((MR_Word) IntForOptSpec_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_9 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_6, 0))));
        MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_9, 7))));
        MR_Word Var_22;
        MR_Box conv1_STATE_VARIABLE_TypeEqvMap_16;
        MR_Box conv3_STATE_VARIABLE_InstEqvMap_18;

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[22]), Var_20, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_15)), &conv1_STATE_VARIABLE_TypeEqvMap_16);
        *STATE_VARIABLE_TypeEqvMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_16));
        Var_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_9, 8))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[23]), Var_22, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_17)), &conv3_STATE_VARIABLE_InstEqvMap_18);
        *STATE_VARIABLE_InstEqvMap_18 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_18));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_11 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_6, 0))));

        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0(ParseTreeInt1_11, STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16, STATE_VARIABLE_InstEqvMap_0_17, STATE_VARIABLE_InstEqvMap_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_13 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_6, 0))));
        MR_Word ReadWhy2_14 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec_6, 1))) & (MR_Integer) 3);

        parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0(ReadWhy2_14, ParseTreeInt2_13, STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16, STATE_VARIABLE_InstEqvMap_0_17, STATE_VARIABLE_InstEqvMap_18);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_49_95_95_91_49_93_95_48_6_p_0(
  MR_Word ParseTreeInt1_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14)
{
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 7))));
  MR_Word Var_19;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[20]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[21]), Var_19, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
  *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0(
  MR_Word ReadWhy2_7,
  MR_Word ParseTreeInt2_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14)
{
  switch (ReadWhy2_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_TypeEqvMap_12 = STATE_VARIABLE_TypeEqvMap_0_11;
        *STATE_VARIABLE_InstEqvMap_14 = STATE_VARIABLE_InstEqvMap_0_13;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, 7))));
        MR_Word Var_19;
        MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
        MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[18]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
        *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
        Var_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, 8))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[19]), Var_19, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
        *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0(
  MR_Word IndirectIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14)
{
  MR_Word ParseTreeInt2_9 = ((MR_Word) ((MR_hl_field(0, IndirectIntSpec_6, 0))));
  MR_Word ReadWhy2_10 = ((MR_Unsigned) ((MR_hl_field(0, IndirectIntSpec_6, 1))) & (MR_Integer) 3);

  switch (ReadWhy2_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_TypeEqvMap_12 = STATE_VARIABLE_TypeEqvMap_0_11;
        *STATE_VARIABLE_InstEqvMap_14 = STATE_VARIABLE_InstEqvMap_0_13;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_9, 7))));
        MR_Word Var_18;
        MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
        MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[16]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
        *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
        Var_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_9, 8))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[17]), Var_18, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
        *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0(
  MR_Word DirectIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14)
{
  MR_Word ParseTreeInt1_9 = ((MR_Word) ((MR_hl_field(0, DirectIntSpec_6, 0))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_9, 7))));
  MR_Word Var_18;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[14]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_9, 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[15]), Var_18, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
  *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0(
  MR_Word AncestorIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14)
{
  MR_Word ParseTreeInt0_9 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_6, 0))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_9, 7))));
  MR_Word Var_18;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[12]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_9, 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[13]), Var_18, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
  *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
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
  MR_Word conv3_Ctor_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_35;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_37;
  MR_Word conv0_STATE_VARIABLE_UsedModules_39;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Ctors_0_13,
  MR_Word * STATE_VARIABLE_Ctors_14,
  MR_Word STATE_VARIABLE_TVarSet_0_15,
  MR_Word * STATE_VARIABLE_TVarSet_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_17,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_18)
{
  MR_Word Var_23;
  MR_Word HeadCtor0_24;
  MR_Word TailCtors0_25;
  MR_Word HeadCtor_26;
  MR_Word TailCtors_27;
  MR_Word STATE_VARIABLE_TVarSet_1_28;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_29;
  MR_Word STATE_VARIABLE_UsedModules_1_30;
  MR_Word Var_31;
  MR_Box conv6_STATE_VARIABLE_TVarSet_16;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_18;
  MR_Box conv4_Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  HeadCtor0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Ctors_0_13, 0))));
  TailCtors0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Ctors_0_13, 1))));
  parse_tree__equiv_type__replace_in_ctor_10_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_8, HeadCtor0_24, &HeadCtor_26, STATE_VARIABLE_TVarSet_0_15, &STATE_VARIABLE_TVarSet_1_28, STATE_VARIABLE_EquivTypeInfo_0_17, &STATE_VARIABLE_EquivTypeInfo_1_29, Var_23, &STATE_VARIABLE_UsedModules_1_30);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[5]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (TypeEqvMap_8));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_31, TailCtors0_25, &TailCtors_27, ((MR_Box) (STATE_VARIABLE_TVarSet_1_28)), &conv6_STATE_VARIABLE_TVarSet_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_1_29)), &conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (STATE_VARIABLE_UsedModules_1_30)), &conv4_Var_12);
  *STATE_VARIABLE_TVarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_16));
  *STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_18));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Ctors_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadCtor_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailCtors_27));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_36,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39)
{
  uint32_t Ordinal_18 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_13, 0)));
  MR_Word MaybeExistConstraints0_19 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 1))));
  MR_Word CtorName_20 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 2))));
  MR_Word CtorArgs0_21 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 3))));
  MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, Ctor0_13, 4))));
  MR_Word Ctxt_23 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 5))));
  MR_Word CtorArgs_24;
  MR_Word MaybeExistConstraints_26;
  MR_Word STATE_VARIABLE_TVarSet_1_40;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_41;
  MR_Word STATE_VARIABLE_UsedModules_1_42;
  MR_Word Var_44;
  MR_Word Var_25;

  Var_44 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), CtorArgs0_21, &CtorArgs_24, Var_44, &Var_25, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_1_40, STATE_VARIABLE_EquivTypeInfo_0_36, &STATE_VARIABLE_EquivTypeInfo_1_41, STATE_VARIABLE_UsedModules_0_38, &STATE_VARIABLE_UsedModules_1_42);
  if ((MaybeExistConstraints0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_35 = STATE_VARIABLE_TVarSet_1_40;
    *STATE_VARIABLE_EquivTypeInfo_37 = STATE_VARIABLE_EquivTypeInfo_1_41;
    *STATE_VARIABLE_UsedModules_39 = STATE_VARIABLE_UsedModules_1_42;
  }
  else
  {
    MR_Word ExistConstraints0_27 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_19), (MR_Integer) 1));
    MR_Word ExistQVars_28 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 0))));
    MR_Word Constraints0_29 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 1))));
    MR_Word UnconstrainedExistQTVars_30 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 2))));
    MR_Word ConstrainedExistQTVars_31 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 3))));
    MR_Word Constraints_32;
    MR_Word ExistConstraints_33;
    MR_Word Var_46;
    MR_Box conv6_STATE_VARIABLE_TVarSet_35;
    MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_37;
    MR_Box conv4_STATE_VARIABLE_UsedModules_39;

    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (MaybeRecord_11));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) (TypeEqvMap_12));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_46, Constraints0_29, &Constraints_32, ((MR_Box) (STATE_VARIABLE_TVarSet_1_40)), &conv6_STATE_VARIABLE_TVarSet_35, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_1_41)), &conv5_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Box) (STATE_VARIABLE_UsedModules_1_42)), &conv4_STATE_VARIABLE_UsedModules_39);
    *STATE_VARIABLE_TVarSet_35 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_35));
    *STATE_VARIABLE_EquivTypeInfo_37 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_37));
    *STATE_VARIABLE_UsedModules_39 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_39));
    {
      ExistConstraints_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_33, 0) = ((MR_Box) (ExistQVars_28));
      MR_hl_field(0, ExistConstraints_33, 1) = ((MR_Box) (Constraints_32));
      MR_hl_field(0, ExistConstraints_33, 2) = ((MR_Box) (UnconstrainedExistQTVars_30));
      MR_hl_field(0, ExistConstraints_33, 3) = ((MR_Box) (ConstrainedExistQTVars_31));
    }
    MaybeExistConstraints_26 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_33)));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Ctor_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MR_Word) (Ordinal_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeExistConstraints_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (CtorName_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (CtorArgs_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (Arity_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (Ctxt_23));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Circ_0_6,
  MR_Word * STATE_VARIABLE_Circ_7,
  MR_Word STATE_VARIABLE_TVarSet_0_8,
  MR_Word * STATE_VARIABLE_TVarSet_9,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_10,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_11,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_13 = STATE_VARIABLE_UsedModules_0_12;
    *STATE_VARIABLE_EquivTypeInfo_11 = STATE_VARIABLE_EquivTypeInfo_0_10;
    *STATE_VARIABLE_TVarSet_9 = STATE_VARIABLE_TVarSet_0_8;
    *STATE_VARIABLE_Circ_7 = STATE_VARIABLE_Circ_0_6;
  }
  else
  {
    MR_Word Arg0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Args0_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Arg_34;
    MR_Word Args_35;
    MR_Word Name_40 = ((MR_Word) ((MR_hl_field(0, Arg0_32, 0))));
    MR_Word Type0_41 = ((MR_Word) ((MR_hl_field(0, Arg0_32, 1))));
    MR_Word Context_42 = ((MR_Word) ((MR_hl_field(0, Arg0_32, 2))));
    MR_Word Type_43;
    MR_Word TypeCirc_45;
    MR_Word STATE_VARIABLE_TVarSet_1_54;
    MR_Word STATE_VARIABLE_EquivTypeInfo_1_55;
    MR_Word STATE_VARIABLE_UsedModules_1_56;
    MR_Word STATE_VARIABLE_Circ_1_57;
    MR_Word Var_44;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Type0_41, &Type_43, &Var_44, &TypeCirc_45, STATE_VARIABLE_TVarSet_0_8, &STATE_VARIABLE_TVarSet_1_54, STATE_VARIABLE_EquivTypeInfo_0_10, &STATE_VARIABLE_EquivTypeInfo_1_55, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_1_56);
    {
      Arg_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_34, 0) = ((MR_Box) (Name_40));
      MR_hl_field(0, Arg_34, 1) = ((MR_Box) (Type_43));
      MR_hl_field(0, Arg_34, 2) = ((MR_Box) (Context_42));
    }
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCirc_45, STATE_VARIABLE_Circ_0_6, &STATE_VARIABLE_Circ_1_57);
    parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Args0_33, &Args_35, STATE_VARIABLE_Circ_1_57, STATE_VARIABLE_Circ_7, STATE_VARIABLE_TVarSet_1_54, STATE_VARIABLE_TVarSet_9, STATE_VARIABLE_EquivTypeInfo_1_55, STATE_VARIABLE_EquivTypeInfo_11, STATE_VARIABLE_UsedModules_1_56, STATE_VARIABLE_UsedModules_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_35));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Constraints_0_13,
  MR_Word * STATE_VARIABLE_Constraints_14,
  MR_Word STATE_VARIABLE_TVarSet_0_15,
  MR_Word * STATE_VARIABLE_TVarSet_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_17,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_18)
{
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Box conv6_STATE_VARIABLE_TVarSet_16;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_18;
  MR_Box conv4_Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) (TypeEqvMap_8));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_24, STATE_VARIABLE_Constraints_0_13, STATE_VARIABLE_Constraints_14, ((MR_Box) (STATE_VARIABLE_TVarSet_0_15)), &conv6_STATE_VARIABLE_TVarSet_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_17)), &conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (Var_23)), &conv4_Var_12);
  *STATE_VARIABLE_TVarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_16));
  *STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_18));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_7_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word Cs0_9,
  MR_Word * Cs_10,
  MR_Word STATE_VARIABLE_TVarSet_0_14,
  MR_Word * STATE_VARIABLE_TVarSet_15,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_16,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_17)
{
  MR_Word Var_21;
  MR_Word UnivCs0_22;
  MR_Word ExistCs0_23;
  MR_Word UnivCs_24;
  MR_Word ExistCs_25;
  MR_Word STATE_VARIABLE_TVarSet_1_26;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_27;
  MR_Word STATE_VARIABLE_UsedModules_1_28;
  MR_Word Var_29;
  MR_Box conv6_STATE_VARIABLE_TVarSet_1_26;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_1_27;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_28;
  MR_Box conv9_STATE_VARIABLE_TVarSet_15;
  MR_Box conv8_STATE_VARIABLE_EquivTypeInfo_17;
  MR_Box conv7_Var_13;

  Var_21 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  UnivCs0_22 = ((MR_Word) ((MR_hl_field(0, Cs0_9, 0))));
  ExistCs0_23 = ((MR_Word) ((MR_hl_field(0, Cs0_9, 1))));
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_univ_exist_constraints_7_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (TypeEqvMap_8));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_29, UnivCs0_22, &UnivCs_24, ((MR_Box) (STATE_VARIABLE_TVarSet_0_14)), &conv6_STATE_VARIABLE_TVarSet_1_26, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_16)), &conv5_STATE_VARIABLE_EquivTypeInfo_1_27, ((MR_Box) (Var_21)), &conv4_STATE_VARIABLE_UsedModules_1_28);
  STATE_VARIABLE_TVarSet_1_26 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_1_26));
  STATE_VARIABLE_EquivTypeInfo_1_27 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_1_27));
  STATE_VARIABLE_UsedModules_1_28 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_28));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_29, ExistCs0_23, &ExistCs_25, ((MR_Box) (STATE_VARIABLE_TVarSet_1_26)), &conv9_STATE_VARIABLE_TVarSet_15, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_1_27)), &conv8_STATE_VARIABLE_EquivTypeInfo_17, ((MR_Box) (STATE_VARIABLE_UsedModules_1_28)), &conv7_Var_13);
  *STATE_VARIABLE_TVarSet_15 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_15));
  *STATE_VARIABLE_EquivTypeInfo_17 = ((MR_Word) (conv8_STATE_VARIABLE_EquivTypeInfo_17));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Cs_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_25));
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word STATE_VARIABLE_Types_0_15,
  MR_Word * STATE_VARIABLE_Types_16,
  MR_Word * Changed_11,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_19,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_20)
{
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_14;
  MR_Word Var_26;

  Var_25 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  Var_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_15, STATE_VARIABLE_Types_16, Changed_11, Var_28, &Var_26, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_EquivTypeInfo_0_19, STATE_VARIABLE_EquivTypeInfo_20, Var_25, &Var_14);
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Type0_10,
  MR_Word * Type_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_19,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_20)
{
  MR_Word Var_25;
  MR_Word _Circ_15;
  MR_Word Var_16;

  Var_25 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), Type0_10, Type_11, Changed_12, &_Circ_15, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_EquivTypeInfo_0_19, STATE_VARIABLE_EquivTypeInfo_20, Var_25, &Var_16);
}

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_56;

  conv0_LambdaHeadVar__2_56 = parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__1843__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_56));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word TVarSet0_10,
  MR_Word Context_11,
  MR_Word Type0_12,
  MR_Word * Type_13,
  MR_Word * Changed_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word Circ_16;
  MR_Word CircTypes_20;
  MR_Word Var_29;
  MR_Word _TVarSet_17;
  MR_Word Var_18;
  MR_Word Var_19;

  Var_29 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), Type0_12, Type_13, Changed_14, &Circ_16, TVarSet0_10, &_TVarSet_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18, Var_29, &Var_19);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_16, &CircTypes_20);
  if ((CircTypes_20 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  else
  {
    MR_Word HeadCircTypeCtor_21 = ((MR_Word) ((MR_hl_field(1, CircTypes_20, 0))));
    MR_Word TailCircTypeCtors_22 = ((MR_Word) ((MR_hl_field(1, CircTypes_20, 1))));
    MR_Word Spec_23;
    MR_String TypeStr_31;
    MR_Word MainPieces_32;
    MR_Word CircSpecs_33;
    MR_Word Pieces_35;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;

    TypeStr_31 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet0_10, (MR_Integer) 0, Type0_12);
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (TypeStr_31));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_40 = parse_tree__error_spec__color_as_subject_1_f_0(Var_41);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[26])));
    MainPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[22])), Var_39);
    if ((TailCircTypeCtors_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;

      Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[28])));
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (HeadCircTypeCtor_21));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[30])));
      }
      Var_47 = parse_tree__error_spec__color_as_subject_1_f_0(Var_48);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
      CircSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_46);
    }
    else
    {
      MR_Word TypeCtorPieces_34;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_57;

      TypeCtorPieces_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[11]), CircTypes_20);
      Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[32])));
      Var_57 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[30])), TypeCtorPieces_34);
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
      CircSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_56);
    }
    Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_32, CircSpecs_33);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_contains_circular_eqv_type\'/5"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_repn_eqv_5_p_0(
  MR_Word TypeEqvMap_6,
  MR_Word Info0_7,
  MR_Word * Info_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, Info0_7, 0))));
  MR_Word ArgTypeVars_11 = ((MR_Word) ((MR_hl_field(0, Info0_7, 1))));
  MR_Word Type0_12 = ((MR_Word) ((MR_hl_field(0, Info0_7, 2))));
  MR_Word TVarSet0_13 = ((MR_Word) ((MR_hl_field(0, Info0_7, 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, Info0_7, 4))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(0, Info0_7, 5))));
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

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_11, &Arity_16);
  {
    TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_17, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, TypeCtor_17, 1) = ((MR_Box) (Arity_16));
  }
  Var_32 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_6, (MR_Word) ((MR_Unsigned) 0U), Type0_12, &Type_18, &_Changed_19, &Circ_20, TVarSet0_13, &TVarSet_21, (MR_Word) ((MR_Unsigned) 0U), &Var_22, Var_32, &Var_23);
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
    Var_53 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[19])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[17])), Var_52);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
    Pieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[15])), Var_42);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Unsigned) 48U));
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
    *Info_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypeVars_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (TVarSet_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Context_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (SeqNum_15));
  }
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_12(
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
  MR_Word conv62_IntForOptSpec_16;
  MR_Word conv61_STATE_VARIABLE_RecompInfo_30;
  MR_Word conv60_STATE_VARIABLE_UsedModules_32;
  MR_Word conv59_STATE_VARIABLE_Specs_34;

  parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv62_IntForOptSpec_16, ((MR_Word) (wrapper_arg_3)), &conv61_STATE_VARIABLE_RecompInfo_30, ((MR_Word) (wrapper_arg_5)), &conv60_STATE_VARIABLE_UsedModules_32, ((MR_Word) (wrapper_arg_7)), &conv59_STATE_VARIABLE_Specs_34);
  *wrapper_arg_2 = ((MR_Box) (conv62_IntForOptSpec_16));
  *wrapper_arg_4 = ((MR_Box) (conv61_STATE_VARIABLE_RecompInfo_30));
  *wrapper_arg_6 = ((MR_Box) (conv60_STATE_VARIABLE_UsedModules_32));
  *wrapper_arg_8 = ((MR_Box) (conv59_STATE_VARIABLE_Specs_34));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_11(
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
  MR_Word conv55_ParseTreePlainOpt_16;
  MR_Word conv54_STATE_VARIABLE_RecompInfo_56;
  MR_Word conv53_STATE_VARIABLE_UsedModules_58;
  MR_Word conv52_STATE_VARIABLE_Specs_60;

  parse_tree__equiv_type__replace_in_parse_tree_plain_opt_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv55_ParseTreePlainOpt_16, ((MR_Word) (wrapper_arg_3)), &conv54_STATE_VARIABLE_RecompInfo_56, ((MR_Word) (wrapper_arg_5)), &conv53_STATE_VARIABLE_UsedModules_58, ((MR_Word) (wrapper_arg_7)), &conv52_STATE_VARIABLE_Specs_60);
  *wrapper_arg_2 = ((MR_Box) (conv55_ParseTreePlainOpt_16));
  *wrapper_arg_4 = ((MR_Box) (conv54_STATE_VARIABLE_RecompInfo_56));
  *wrapper_arg_6 = ((MR_Box) (conv53_STATE_VARIABLE_UsedModules_58));
  *wrapper_arg_8 = ((MR_Box) (conv52_STATE_VARIABLE_Specs_60));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_10(
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
  MR_Word conv48_ParseTreeTransOpt_5;
  MR_Word conv47_RecompInfo_7;
  MR_Word conv46_UsedModules_9;
  MR_Word conv45_Specs_11;

  parse_tree__equiv_type__replace_in_parse_tree_trans_opt_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv48_ParseTreeTransOpt_5, ((MR_Word) (wrapper_arg_3)), &conv47_RecompInfo_7, ((MR_Word) (wrapper_arg_5)), &conv46_UsedModules_9, ((MR_Word) (wrapper_arg_7)), &conv45_Specs_11);
  *wrapper_arg_2 = ((MR_Box) (conv48_ParseTreeTransOpt_5));
  *wrapper_arg_4 = ((MR_Box) (conv47_RecompInfo_7));
  *wrapper_arg_6 = ((MR_Box) (conv46_UsedModules_9));
  *wrapper_arg_8 = ((MR_Box) (conv45_Specs_11));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_9(
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
  MR_Word conv41_IndirectIntSpec_16;
  MR_Word conv40_STATE_VARIABLE_RecompInfo_24;
  MR_Word conv39_STATE_VARIABLE_UsedModules_26;
  MR_Word conv38_STATE_VARIABLE_Specs_28;

  parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv41_IndirectIntSpec_16, ((MR_Word) (wrapper_arg_3)), &conv40_STATE_VARIABLE_RecompInfo_24, ((MR_Word) (wrapper_arg_5)), &conv39_STATE_VARIABLE_UsedModules_26, ((MR_Word) (wrapper_arg_7)), &conv38_STATE_VARIABLE_Specs_28);
  *wrapper_arg_2 = ((MR_Box) (conv41_IndirectIntSpec_16));
  *wrapper_arg_4 = ((MR_Box) (conv40_STATE_VARIABLE_RecompInfo_24));
  *wrapper_arg_6 = ((MR_Box) (conv39_STATE_VARIABLE_UsedModules_26));
  *wrapper_arg_8 = ((MR_Box) (conv38_STATE_VARIABLE_Specs_28));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_8(
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
  MR_Word conv34_DirectIntSpec_16;
  MR_Word conv33_STATE_VARIABLE_RecompInfo_24;
  MR_Word conv32_STATE_VARIABLE_UsedModules_26;
  MR_Word conv31_STATE_VARIABLE_Specs_28;

  parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv34_DirectIntSpec_16, ((MR_Word) (wrapper_arg_3)), &conv33_STATE_VARIABLE_RecompInfo_24, ((MR_Word) (wrapper_arg_5)), &conv32_STATE_VARIABLE_UsedModules_26, ((MR_Word) (wrapper_arg_7)), &conv31_STATE_VARIABLE_Specs_28);
  *wrapper_arg_2 = ((MR_Box) (conv34_DirectIntSpec_16));
  *wrapper_arg_4 = ((MR_Box) (conv33_STATE_VARIABLE_RecompInfo_24));
  *wrapper_arg_6 = ((MR_Box) (conv32_STATE_VARIABLE_UsedModules_26));
  *wrapper_arg_8 = ((MR_Box) (conv31_STATE_VARIABLE_Specs_28));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_7(
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
  MR_Word conv27_AncestorIntSpec_16;
  MR_Word conv26_STATE_VARIABLE_RecompInfo_24;
  MR_Word conv25_STATE_VARIABLE_UsedModules_26;
  MR_Word conv24_STATE_VARIABLE_Specs_28;

  parse_tree__equiv_type__replace_in_ancestor_int_spec_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv27_AncestorIntSpec_16, ((MR_Word) (wrapper_arg_3)), &conv26_STATE_VARIABLE_RecompInfo_24, ((MR_Word) (wrapper_arg_5)), &conv25_STATE_VARIABLE_UsedModules_26, ((MR_Word) (wrapper_arg_7)), &conv24_STATE_VARIABLE_Specs_28);
  *wrapper_arg_2 = ((MR_Box) (conv27_AncestorIntSpec_16));
  *wrapper_arg_4 = ((MR_Box) (conv26_STATE_VARIABLE_RecompInfo_24));
  *wrapper_arg_6 = ((MR_Box) (conv25_STATE_VARIABLE_UsedModules_26));
  *wrapper_arg_8 = ((MR_Box) (conv24_STATE_VARIABLE_Specs_28));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv21_STATE_VARIABLE_TypeEqvMap_16;
  MR_Word conv20_STATE_VARIABLE_InstEqvMap_18;

  parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_STATE_VARIABLE_TypeEqvMap_16, ((MR_Word) (wrapper_arg_4)), &conv20_STATE_VARIABLE_InstEqvMap_18);
  *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_TypeEqvMap_16));
  *wrapper_arg_5 = ((MR_Box) (conv20_STATE_VARIABLE_InstEqvMap_18));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_TypeEqvMap_3;
  MR_Word conv16_InstEqvMap_5;

  parse_tree__equiv_type__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_TypeEqvMap_3, ((MR_Word) (wrapper_arg_4)), &conv16_InstEqvMap_5);
  *wrapper_arg_3 = ((MR_Box) (conv17_TypeEqvMap_3));
  *wrapper_arg_5 = ((MR_Box) (conv16_InstEqvMap_5));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_TypeEqvMap_10;
  MR_Word conv12_STATE_VARIABLE_InstEqvMap_12;

  parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_TypeEqvMap_10, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_InstEqvMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_TypeEqvMap_10));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_InstEqvMap_12));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_TypeEqvMap_12;
  MR_Word conv8_STATE_VARIABLE_InstEqvMap_14;

  parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_TypeEqvMap_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_InstEqvMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_TypeEqvMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_TypeEqvMap_12;
  MR_Word conv4_STATE_VARIABLE_InstEqvMap_14;

  parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TypeEqvMap_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_InstEqvMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TypeEqvMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeEqvMap_12;
  MR_Word conv0_STATE_VARIABLE_InstEqvMap_14;

  parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeEqvMap_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_InstEqvMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_InstEqvMap_14));
}

void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(
  MR_Word AugCompUnit0_10,
  MR_Word * AugCompUnit_11,
  MR_Word EventSpecMap0_12,
  MR_Word * EventSpecMap_13,
  MR_Word * TypeEqvMap_14,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word * STATE_VARIABLE_Specs_42)
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
  MR_Word ParseTreeModuleSrc_29;
  MR_Word AncestorIntSpecs_30;
  MR_Word DirectInt1Specs_31;
  MR_Word IndirectInt2Specs_32;
  MR_Word TransOpts_33;
  MR_Word PlainOpts_34;
  MR_Word IntForOptSpecs_35;
  MR_Word TypeRepnSpecs_36 = ((MR_Word) ((MR_hl_field(0, AugCompUnit0_10, 7))));
  MR_Word EventSpecList0_37;
  MR_Word EventSpecList_38;
  MR_Word STATE_VARIABLE_TypeEqvMap_1_43;
  MR_Word STATE_VARIABLE_InstEqvMap_1_44;
  MR_Word STATE_VARIABLE_TypeEqvMap_2_45;
  MR_Word STATE_VARIABLE_InstEqvMap_2_46;
  MR_Word STATE_VARIABLE_TypeEqvMap_3_48;
  MR_Word STATE_VARIABLE_InstEqvMap_3_49;
  MR_Word STATE_VARIABLE_TypeEqvMap_4_51;
  MR_Word STATE_VARIABLE_InstEqvMap_4_52;
  MR_Word STATE_VARIABLE_TypeEqvMap_5_54;
  MR_Word STATE_VARIABLE_InstEqvMap_5_55;
  MR_Word STATE_VARIABLE_TypeEqvMap_6_57;
  MR_Word STATE_VARIABLE_InstEqvMap_6_58;
  MR_Word STATE_VARIABLE_TypeEqvMap_7_60;
  MR_Word STATE_VARIABLE_InstEqvMap_7_61;
  MR_Word STATE_VARIABLE_UsedModules_1_65;
  MR_Word STATE_VARIABLE_RecompInfo_1_67;
  MR_Word STATE_VARIABLE_UsedModules_2_68;
  MR_Word STATE_VARIABLE_Specs_2_69;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_RecompInfo_2_71;
  MR_Word STATE_VARIABLE_UsedModules_3_72;
  MR_Word STATE_VARIABLE_Specs_3_73;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_RecompInfo_3_75;
  MR_Word STATE_VARIABLE_UsedModules_4_76;
  MR_Word STATE_VARIABLE_Specs_4_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_RecompInfo_4_79;
  MR_Word STATE_VARIABLE_UsedModules_5_80;
  MR_Word STATE_VARIABLE_Specs_5_81;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_RecompInfo_5_83;
  MR_Word STATE_VARIABLE_UsedModules_6_84;
  MR_Word STATE_VARIABLE_Specs_6_85;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_RecompInfo_6_87;
  MR_Word STATE_VARIABLE_UsedModules_7_88;
  MR_Word STATE_VARIABLE_Specs_7_89;
  MR_Word Var_90;
  MR_Word STATE_VARIABLE_UsedModules_8_92;
  MR_Box conv3_STATE_VARIABLE_TypeEqvMap_3_48;
  MR_Box conv2_STATE_VARIABLE_InstEqvMap_3_49;
  MR_Box conv7_STATE_VARIABLE_TypeEqvMap_4_51;
  MR_Box conv6_STATE_VARIABLE_InstEqvMap_4_52;
  MR_Box conv11_STATE_VARIABLE_TypeEqvMap_5_54;
  MR_Box conv10_STATE_VARIABLE_InstEqvMap_5_55;
  MR_Box conv15_STATE_VARIABLE_TypeEqvMap_6_57;
  MR_Box conv14_STATE_VARIABLE_InstEqvMap_6_58;
  MR_Box conv19_STATE_VARIABLE_TypeEqvMap_7_60;
  MR_Box conv18_STATE_VARIABLE_InstEqvMap_7_61;
  MR_Box conv23_TypeEqvMap_14;
  MR_Box conv22_InstEqvMap_28;
  MR_Box conv30_STATE_VARIABLE_RecompInfo_2_71;
  MR_Box conv29_STATE_VARIABLE_UsedModules_3_72;
  MR_Box conv28_STATE_VARIABLE_Specs_3_73;
  MR_Box conv37_STATE_VARIABLE_RecompInfo_3_75;
  MR_Box conv36_STATE_VARIABLE_UsedModules_4_76;
  MR_Box conv35_STATE_VARIABLE_Specs_4_77;
  MR_Box conv44_STATE_VARIABLE_RecompInfo_4_79;
  MR_Box conv43_STATE_VARIABLE_UsedModules_5_80;
  MR_Box conv42_STATE_VARIABLE_Specs_5_81;
  MR_Box conv51_STATE_VARIABLE_RecompInfo_5_83;
  MR_Box conv50_STATE_VARIABLE_UsedModules_6_84;
  MR_Box conv49_STATE_VARIABLE_Specs_6_85;
  MR_Box conv58_STATE_VARIABLE_RecompInfo_6_87;
  MR_Box conv57_STATE_VARIABLE_UsedModules_7_88;
  MR_Box conv56_STATE_VARIABLE_Specs_7_89;
  MR_Box conv65_STATE_VARIABLE_RecompInfo_41;
  MR_Box conv64_STATE_VARIABLE_UsedModules_8_92;
  MR_Box conv63_STATE_VARIABLE_Specs_42;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), &STATE_VARIABLE_TypeEqvMap_1_43);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), &STATE_VARIABLE_InstEqvMap_1_44);
  parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0(ParseTreeModuleSrc0_18, STATE_VARIABLE_TypeEqvMap_1_43, &STATE_VARIABLE_TypeEqvMap_2_45, STATE_VARIABLE_InstEqvMap_1_44, &STATE_VARIABLE_InstEqvMap_2_46);
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), AncestorIntSpecs0_19, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_2_45)), &conv3_STATE_VARIABLE_TypeEqvMap_3_48, ((MR_Box) (STATE_VARIABLE_InstEqvMap_2_46)), &conv2_STATE_VARIABLE_InstEqvMap_3_49);
  STATE_VARIABLE_TypeEqvMap_3_48 = ((MR_Word) (conv3_STATE_VARIABLE_TypeEqvMap_3_48));
  STATE_VARIABLE_InstEqvMap_3_49 = ((MR_Word) (conv2_STATE_VARIABLE_InstEqvMap_3_49));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), DirectInt1Specs0_20, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_3_48)), &conv7_STATE_VARIABLE_TypeEqvMap_4_51, ((MR_Box) (STATE_VARIABLE_InstEqvMap_3_49)), &conv6_STATE_VARIABLE_InstEqvMap_4_52);
  STATE_VARIABLE_TypeEqvMap_4_51 = ((MR_Word) (conv7_STATE_VARIABLE_TypeEqvMap_4_51));
  STATE_VARIABLE_InstEqvMap_4_52 = ((MR_Word) (conv6_STATE_VARIABLE_InstEqvMap_4_52));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), IndirectInt2Specs0_21, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_4_51)), &conv11_STATE_VARIABLE_TypeEqvMap_5_54, ((MR_Box) (STATE_VARIABLE_InstEqvMap_4_52)), &conv10_STATE_VARIABLE_InstEqvMap_5_55);
  STATE_VARIABLE_TypeEqvMap_5_54 = ((MR_Word) (conv11_STATE_VARIABLE_TypeEqvMap_5_54));
  STATE_VARIABLE_InstEqvMap_5_55 = ((MR_Word) (conv10_STATE_VARIABLE_InstEqvMap_5_55));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[8]), PlainOpts0_22, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_5_54)), &conv15_STATE_VARIABLE_TypeEqvMap_6_57, ((MR_Box) (STATE_VARIABLE_InstEqvMap_5_55)), &conv14_STATE_VARIABLE_InstEqvMap_6_58);
  STATE_VARIABLE_TypeEqvMap_6_57 = ((MR_Word) (conv15_STATE_VARIABLE_TypeEqvMap_6_57));
  STATE_VARIABLE_InstEqvMap_6_58 = ((MR_Word) (conv14_STATE_VARIABLE_InstEqvMap_6_58));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[9]), TransOpts0_23, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_6_57)), &conv19_STATE_VARIABLE_TypeEqvMap_7_60, ((MR_Box) (STATE_VARIABLE_InstEqvMap_6_58)), &conv18_STATE_VARIABLE_InstEqvMap_7_61);
  STATE_VARIABLE_TypeEqvMap_7_60 = ((MR_Word) (conv19_STATE_VARIABLE_TypeEqvMap_7_60));
  STATE_VARIABLE_InstEqvMap_7_61 = ((MR_Word) (conv18_STATE_VARIABLE_InstEqvMap_7_61));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[10]), IntForOptSpecs0_24, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_7_60)), &conv23_TypeEqvMap_14, ((MR_Box) (STATE_VARIABLE_InstEqvMap_7_61)), &conv22_InstEqvMap_28);
  *TypeEqvMap_14 = ((MR_Word) (conv23_TypeEqvMap_14));
  InstEqvMap_28 = ((MR_Word) (conv22_InstEqvMap_28));
  STATE_VARIABLE_UsedModules_1_65 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0(*TypeEqvMap_14, InstEqvMap_28, ParseTreeModuleSrc0_18, &ParseTreeModuleSrc_29, STATE_VARIABLE_RecompInfo_0_40, &STATE_VARIABLE_RecompInfo_1_67, STATE_VARIABLE_UsedModules_1_65, &STATE_VARIABLE_UsedModules_2_68, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_2_69);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[2]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_7));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(0, Var_70, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_70, AncestorIntSpecs0_19, &AncestorIntSpecs_30, ((MR_Box) (STATE_VARIABLE_RecompInfo_1_67)), &conv30_STATE_VARIABLE_RecompInfo_2_71, ((MR_Box) (STATE_VARIABLE_UsedModules_2_68)), &conv29_STATE_VARIABLE_UsedModules_3_72, ((MR_Box) (STATE_VARIABLE_Specs_2_69)), &conv28_STATE_VARIABLE_Specs_3_73);
  STATE_VARIABLE_RecompInfo_2_71 = ((MR_Word) (conv30_STATE_VARIABLE_RecompInfo_2_71));
  STATE_VARIABLE_UsedModules_3_72 = ((MR_Word) (conv29_STATE_VARIABLE_UsedModules_3_72));
  STATE_VARIABLE_Specs_3_73 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_3_73));
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[3]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_8));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(0, Var_74, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_74, DirectInt1Specs0_20, &DirectInt1Specs_31, ((MR_Box) (STATE_VARIABLE_RecompInfo_2_71)), &conv37_STATE_VARIABLE_RecompInfo_3_75, ((MR_Box) (STATE_VARIABLE_UsedModules_3_72)), &conv36_STATE_VARIABLE_UsedModules_4_76, ((MR_Box) (STATE_VARIABLE_Specs_3_73)), &conv35_STATE_VARIABLE_Specs_4_77);
  STATE_VARIABLE_RecompInfo_3_75 = ((MR_Word) (conv37_STATE_VARIABLE_RecompInfo_3_75));
  STATE_VARIABLE_UsedModules_4_76 = ((MR_Word) (conv36_STATE_VARIABLE_UsedModules_4_76));
  STATE_VARIABLE_Specs_4_77 = ((MR_Word) (conv35_STATE_VARIABLE_Specs_4_77));
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[4]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_9));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Var_78, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(0, Var_78, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_78, IndirectInt2Specs0_21, &IndirectInt2Specs_32, ((MR_Box) (STATE_VARIABLE_RecompInfo_3_75)), &conv44_STATE_VARIABLE_RecompInfo_4_79, ((MR_Box) (STATE_VARIABLE_UsedModules_4_76)), &conv43_STATE_VARIABLE_UsedModules_5_80, ((MR_Box) (STATE_VARIABLE_Specs_4_77)), &conv42_STATE_VARIABLE_Specs_5_81);
  STATE_VARIABLE_RecompInfo_4_79 = ((MR_Word) (conv44_STATE_VARIABLE_RecompInfo_4_79));
  STATE_VARIABLE_UsedModules_5_80 = ((MR_Word) (conv43_STATE_VARIABLE_UsedModules_5_80));
  STATE_VARIABLE_Specs_5_81 = ((MR_Word) (conv42_STATE_VARIABLE_Specs_5_81));
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[5]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_10));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(0, Var_82, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_82, TransOpts0_23, &TransOpts_33, ((MR_Box) (STATE_VARIABLE_RecompInfo_4_79)), &conv51_STATE_VARIABLE_RecompInfo_5_83, ((MR_Box) (STATE_VARIABLE_UsedModules_5_80)), &conv50_STATE_VARIABLE_UsedModules_6_84, ((MR_Box) (STATE_VARIABLE_Specs_5_81)), &conv49_STATE_VARIABLE_Specs_6_85);
  STATE_VARIABLE_RecompInfo_5_83 = ((MR_Word) (conv51_STATE_VARIABLE_RecompInfo_5_83));
  STATE_VARIABLE_UsedModules_6_84 = ((MR_Word) (conv50_STATE_VARIABLE_UsedModules_6_84));
  STATE_VARIABLE_Specs_6_85 = ((MR_Word) (conv49_STATE_VARIABLE_Specs_6_85));
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[6]));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_11));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_86, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Var_86, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(0, Var_86, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_86, PlainOpts0_22, &PlainOpts_34, ((MR_Box) (STATE_VARIABLE_RecompInfo_5_83)), &conv58_STATE_VARIABLE_RecompInfo_6_87, ((MR_Box) (STATE_VARIABLE_UsedModules_6_84)), &conv57_STATE_VARIABLE_UsedModules_7_88, ((MR_Box) (STATE_VARIABLE_Specs_6_85)), &conv56_STATE_VARIABLE_Specs_7_89);
  STATE_VARIABLE_RecompInfo_6_87 = ((MR_Word) (conv58_STATE_VARIABLE_RecompInfo_6_87));
  STATE_VARIABLE_UsedModules_7_88 = ((MR_Word) (conv57_STATE_VARIABLE_UsedModules_7_88));
  STATE_VARIABLE_Specs_7_89 = ((MR_Word) (conv56_STATE_VARIABLE_Specs_7_89));
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[7]));
    MR_hl_field(0, Var_90, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_12));
    MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_90, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, Var_90, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(0, Var_90, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_90, IntForOptSpecs0_24, &IntForOptSpecs_35, ((MR_Box) (STATE_VARIABLE_RecompInfo_6_87)), &conv65_STATE_VARIABLE_RecompInfo_41, ((MR_Box) (STATE_VARIABLE_UsedModules_7_88)), &conv64_STATE_VARIABLE_UsedModules_8_92, ((MR_Box) (STATE_VARIABLE_Specs_7_89)), &conv63_STATE_VARIABLE_Specs_42);
  *STATE_VARIABLE_RecompInfo_41 = ((MR_Word) (conv65_STATE_VARIABLE_RecompInfo_41));
  STATE_VARIABLE_UsedModules_8_92 = ((MR_Word) (conv64_STATE_VARIABLE_UsedModules_8_92));
  *STATE_VARIABLE_Specs_42 = ((MR_Word) (conv63_STATE_VARIABLE_Specs_42));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *AugCompUnit_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ParseTreeModuleSrc_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (AncestorIntSpecs_30));
    MR_hl_field(0, base, 2) = ((MR_Box) (DirectInt1Specs_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (IndirectInt2Specs_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (PlainOpts_34));
    MR_hl_field(0, base, 5) = ((MR_Box) (TransOpts_33));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntForOptSpecs_35));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeRepnSpecs_36));
    MR_hl_field(0, base, 8) = ((MR_Box) (ModuleVersionNumbers_26));
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap0_12, &EventSpecList0_37);
  parse_tree__equiv_type__replace_in_event_specs_5_p_0(*TypeEqvMap_14, EventSpecList0_37, &EventSpecList_38, STATE_VARIABLE_UsedModules_8_92, STATE_VARIABLE_UsedModules_39);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_38, EventSpecMap_13);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_event_specs_5_p_0(
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
    parse_tree__equiv_type__replace_in_event_attrs_5_p_0(TypeEqvMap_1, Attrs0_25, &Attrs_27, STATE_VARIABLE_UsedModules_0_4, &STATE_VARIABLE_UsedModules_1_21);
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
    parse_tree__equiv_type__replace_in_event_specs_5_p_0(TypeEqvMap_1, NameSpecs0_13, &NameSpecs_15, STATE_VARIABLE_UsedModules_1_21, STATE_VARIABLE_UsedModules_5);
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
parse_tree__equiv_type__replace_in_event_attrs_5_p_0(
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
    MR_Word _EquivTypeInfo_28;
    MR_Word Var_32;

    TVarSet0_24 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U), AttrType0_21, &AttrType_25, &_Changed_26, &Var_32, TVarSet0_24, &_TVarSet_27, (MR_Word) ((MR_Unsigned) 0U), &_EquivTypeInfo_28, STATE_VARIABLE_UsedModules_0_4, &STATE_VARIABLE_UsedModules_1_18);
    {
      Attr_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Attr_13, 0) = ((MR_Box) (AttrNum_19));
      MR_hl_field(0, Attr_13, 1) = ((MR_Box) (AttrName_20));
      MR_hl_field(0, Attr_13, 2) = ((MR_Box) (AttrType_25));
      MR_hl_field(0, Attr_13, 3) = ((MR_Box) (AttrMode_22));
      MR_hl_field(0, Attr_13, 4) = ((MR_Box) (MaybeSynthCall_23));
    }
    parse_tree__equiv_type__replace_in_event_attrs_5_p_0(HeadVar__1_1, Attrs0_12, &Attrs_14, STATE_VARIABLE_UsedModules_1_18, STATE_VARIABLE_UsedModules_5);
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
parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0_1(
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
  MR_Word conv3_CheckedDefn_20;
  MR_Word conv2_STATE_VARIABLE_RecompInfo_63;
  MR_Word conv1_STATE_VARIABLE_UsedModules_65;
  MR_Word conv0_STATE_VARIABLE_Specs_67;

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_63));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_65));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_67));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word InstEqvMap_12,
  MR_Word ParseTreeModuleSrc0_13,
  MR_Word * ParseTreeModuleSrc_14,
  MR_Word STATE_VARIABLE_RecompInfo_0_72,
  MR_Word * STATE_VARIABLE_RecompInfo_73,
  MR_Word STATE_VARIABLE_UsedModules_0_74,
  MR_Word * STATE_VARIABLE_UsedModules_75,
  MR_Word STATE_VARIABLE_Specs_0_76,
  MR_Word * STATE_VARIABLE_Specs_77)
{
  MR_Word MaybeRecordInt_18 = (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_3[0]));
  MR_Word MaybeRecordImp_19 = (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_3[1]));
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 0))));
  MR_Word ModuleNameContext_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 1))));
  MR_Word InclMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 2))));
  MR_Word ImportUseMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 3))));
  MR_Word IntFIMSpecMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 4))));
  MR_Word ImpFIMSpecMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 5))));
  MR_Word IntSelfFIMLangs_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 6))));
  MR_Word ImpSelfFIMLangs_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 7))));
  MR_Word TypeCtorCheckedMap0_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 8))));
  MR_Word TypeSpecs_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 11))));
  MR_Word InstModeSpecs_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 12))));
  MR_Word IntTypeClasses0_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 13))));
  MR_Word IntInstances0_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 14))));
  MR_Word IntPredDecls0_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 15))));
  MR_Word IntModeDecls0_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 16))));
  MR_Word IntDeclPragmas0_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 17))));
  MR_Word IntDeclMarkers_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 18))));
  MR_Word IntPromises_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 19))));
  MR_Word IntBadPreds_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 20))));
  MR_Word ImpTypeClasses0_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 21))));
  MR_Word ImpInstances0_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 22))));
  MR_Word ImpPredDecls0_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 23))));
  MR_Word ImpModeDecls0_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 24))));
  MR_Word ImpForeignProcs0_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 26))));
  MR_Word ImpForeignExportEnums_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 27))));
  MR_Word ImpDeclPragmas0_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 28))));
  MR_Word ImpDeclMarkers_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 29))));
  MR_Word ImpImplPragmas_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 30))));
  MR_Word ImpImplMarkers_51 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 31))));
  MR_Word ImpPromises_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 32))));
  MR_Word ImpInitialises_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 33))));
  MR_Word ImpFinalises_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 34))));
  MR_Word ImpMutables0_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 35))));
  MR_Word TypeCtorCheckedMap_56;
  MR_Word InstCtorCheckedMap_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 9))));
  MR_Word ModeCtorCheckedMap_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 10))));
  MR_Word IntTypeClasses_59;
  MR_Word IntInstances_60;
  MR_Word IntPredDecls_61;
  MR_Word IntModeDecls_62;
  MR_Word IntDeclPragmas_63;
  MR_Word ImpTypeClasses_64;
  MR_Word ImpInstances_65;
  MR_Word ImpPredDecls_66;
  MR_Word ImpModeDecls_67;
  MR_Word ImpClauses_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_13, 25))));
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
    Var_80 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0_1));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (ModuleName_20));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (MaybeRecordInt_18));
    MR_hl_field(0, Var_80, 5) = ((MR_Box) (MaybeRecordImp_19));
    MR_hl_field(0, Var_80, 6) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_80, 7) = ((MR_Box) (InstEqvMap_12));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_80, TypeCtorCheckedMap0_28, &TypeCtorCheckedMap_56, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_72)), &conv6_STATE_VARIABLE_RecompInfo_1_81, ((MR_Box) (STATE_VARIABLE_UsedModules_0_74)), &conv5_STATE_VARIABLE_UsedModules_1_82, ((MR_Box) (STATE_VARIABLE_Specs_0_76)), &conv4_STATE_VARIABLE_Specs_1_83);
  STATE_VARIABLE_RecompInfo_1_81 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_1_81));
  STATE_VARIABLE_UsedModules_1_82 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_1_82));
  STATE_VARIABLE_Specs_1_83 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_83));
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, InstEqvMap_12, IntTypeClasses0_33, &IntTypeClasses_59, STATE_VARIABLE_RecompInfo_1_81, &STATE_VARIABLE_RecompInfo_2_85, STATE_VARIABLE_UsedModules_1_82, &STATE_VARIABLE_UsedModules_2_86, STATE_VARIABLE_Specs_1_83, &STATE_VARIABLE_Specs_2_87);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, IntInstances0_34, &IntInstances_60, STATE_VARIABLE_RecompInfo_2_85, &STATE_VARIABLE_RecompInfo_3_89, STATE_VARIABLE_UsedModules_2_86, &STATE_VARIABLE_UsedModules_3_90, STATE_VARIABLE_Specs_2_87, &STATE_VARIABLE_Specs_3_91);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, InstEqvMap_12, IntPredDecls0_35, &IntPredDecls_61, STATE_VARIABLE_RecompInfo_3_89, &STATE_VARIABLE_RecompInfo_4_93, STATE_VARIABLE_UsedModules_3_90, &STATE_VARIABLE_UsedModules_4_94, STATE_VARIABLE_Specs_3_91, &STATE_VARIABLE_Specs_4_95);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_20, InstEqvMap_12, IntModeDecls0_36, &IntModeDecls_62, STATE_VARIABLE_RecompInfo_4_93, &STATE_VARIABLE_RecompInfo_5_97, STATE_VARIABLE_UsedModules_4_94, &STATE_VARIABLE_UsedModules_5_98, STATE_VARIABLE_Specs_4_95, &STATE_VARIABLE_Specs_5_99);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, IntDeclPragmas0_37, &IntDeclPragmas_63, STATE_VARIABLE_RecompInfo_5_97, &STATE_VARIABLE_RecompInfo_6_101, STATE_VARIABLE_UsedModules_5_98, &STATE_VARIABLE_UsedModules_6_102, STATE_VARIABLE_Specs_5_99, &STATE_VARIABLE_Specs_6_103);
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, InstEqvMap_12, ImpTypeClasses0_41, &ImpTypeClasses_64, STATE_VARIABLE_RecompInfo_6_101, &STATE_VARIABLE_RecompInfo_7_105, STATE_VARIABLE_UsedModules_6_102, &STATE_VARIABLE_UsedModules_7_106, STATE_VARIABLE_Specs_6_103, &STATE_VARIABLE_Specs_7_107);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, ImpInstances0_42, &ImpInstances_65, STATE_VARIABLE_RecompInfo_7_105, &STATE_VARIABLE_RecompInfo_8_109, STATE_VARIABLE_UsedModules_7_106, &STATE_VARIABLE_UsedModules_8_110, STATE_VARIABLE_Specs_7_107, &STATE_VARIABLE_Specs_8_111);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, InstEqvMap_12, ImpPredDecls0_43, &ImpPredDecls_66, STATE_VARIABLE_RecompInfo_8_109, &STATE_VARIABLE_RecompInfo_9_113, STATE_VARIABLE_UsedModules_8_110, &STATE_VARIABLE_UsedModules_9_114, STATE_VARIABLE_Specs_8_111, &STATE_VARIABLE_Specs_9_115);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_20, InstEqvMap_12, ImpModeDecls0_44, &ImpModeDecls_67, STATE_VARIABLE_RecompInfo_9_113, &STATE_VARIABLE_RecompInfo_10_117, STATE_VARIABLE_UsedModules_9_114, &STATE_VARIABLE_UsedModules_10_118, STATE_VARIABLE_Specs_9_115, &STATE_VARIABLE_Specs_10_119);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, ImpDeclPragmas0_48, &ImpDeclPragmas_69, STATE_VARIABLE_RecompInfo_10_117, &STATE_VARIABLE_RecompInfo_11_121, STATE_VARIABLE_UsedModules_10_118, &STATE_VARIABLE_UsedModules_11_122, STATE_VARIABLE_Specs_10_119, &STATE_VARIABLE_Specs_11_123);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_57_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, ImpForeignProcs0_46, &ImpForeignProcs_70, STATE_VARIABLE_RecompInfo_11_121, &STATE_VARIABLE_RecompInfo_12_125, STATE_VARIABLE_UsedModules_11_122, &STATE_VARIABLE_UsedModules_12_126, STATE_VARIABLE_Specs_11_123, &STATE_VARIABLE_Specs_12_127);
  parse_tree__equiv_type__replace_in_list__ho18_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, InstEqvMap_12, ImpMutables0_55, &ImpMutables_71, STATE_VARIABLE_RecompInfo_12_125, STATE_VARIABLE_RecompInfo_73, STATE_VARIABLE_UsedModules_12_126, STATE_VARIABLE_UsedModules_75, STATE_VARIABLE_Specs_12_127, STATE_VARIABLE_Specs_77);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_25));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_26));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_27));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeCtorCheckedMap_56));
    MR_hl_field(0, base, 9) = ((MR_Box) (InstCtorCheckedMap_57));
    MR_hl_field(0, base, 10) = ((MR_Box) (ModeCtorCheckedMap_58));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeSpecs_31));
    MR_hl_field(0, base, 12) = ((MR_Box) (InstModeSpecs_32));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntTypeClasses_59));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntInstances_60));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntPredDecls_61));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntModeDecls_62));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntDeclPragmas_63));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntDeclMarkers_38));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntPromises_39));
    MR_hl_field(0, base, 20) = ((MR_Box) (IntBadPreds_40));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpTypeClasses_64));
    MR_hl_field(0, base, 22) = ((MR_Box) (ImpInstances_65));
    MR_hl_field(0, base, 23) = ((MR_Box) (ImpPredDecls_66));
    MR_hl_field(0, base, 24) = ((MR_Box) (ImpModeDecls_67));
    MR_hl_field(0, base, 25) = ((MR_Box) (ImpClauses_68));
    MR_hl_field(0, base, 26) = ((MR_Box) (ImpForeignProcs_70));
    MR_hl_field(0, base, 27) = ((MR_Box) (ImpForeignExportEnums_47));
    MR_hl_field(0, base, 28) = ((MR_Box) (ImpDeclPragmas_69));
    MR_hl_field(0, base, 29) = ((MR_Box) (ImpDeclMarkers_49));
    MR_hl_field(0, base, 30) = ((MR_Box) (ImpImplPragmas_50));
    MR_hl_field(0, base, 31) = ((MR_Box) (ImpImplMarkers_51));
    MR_hl_field(0, base, 32) = ((MR_Box) (ImpPromises_52));
    MR_hl_field(0, base, 33) = ((MR_Box) (ImpInitialises_53));
    MR_hl_field(0, base, 34) = ((MR_Box) (ImpFinalises_54));
    MR_hl_field(0, base, 35) = ((MR_Box) (ImpMutables_71));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_57_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_48_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_48_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_20;
  MR_Word conv0_STATE_VARIABLE_UsedModules_22;

  parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_22);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word FPInfo0_16,
  MR_Word * FPInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_44,
  MR_Word * STATE_VARIABLE_RecompInfo_45,
  MR_Word STATE_VARIABLE_UsedModules_0_46,
  MR_Word * STATE_VARIABLE_UsedModules_47,
  MR_Word * HeadVar__11_11)
{
  MR_bool succeeded;
  MR_Word Attrs0_20;
  MR_Word PName_21;
  MR_Word PredOrFunc_22;
  MR_Word ProcVars_23;
  MR_Word ProcVarset_24;
  MR_Word ProcInstVarset_25;
  MR_Word ProcImpl_26;
  MR_Word Context_27;
  MR_Word SeqNum_28;
  MR_Word UserSharing0_30;
  MR_Word Attrs_41;
  MR_Word ItemName_42;
  MR_Word ItemId_43;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_48;
  MR_Word STATE_VARIABLE_EquivTypeInfo_3_52;
  MR_Integer Var_55;
  MR_Word Sharing0_31;
  MR_Word Types0_33;
  MR_Word TVarSet0_34;
  MR_Word MaybeTypes0_32;
  MR_Word Var_49;

  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  Attrs0_20 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 0))));
  PName_21 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 1))));
  PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo0_16, 2))) & (MR_Integer) 1);
  ProcVars_23 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 3))));
  ProcVarset_24 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 4))));
  ProcInstVarset_25 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 5))));
  ProcImpl_26 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 6))));
  Context_27 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 7))));
  SeqNum_28 = ((MR_Word) ((MR_hl_field(0, FPInfo0_16, 8))));
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, PName_21, STATE_VARIABLE_RecompInfo_0_44, &STATE_VARIABLE_EquivTypeInfo_1_48);
  UserSharing0_30 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_20);
  succeeded = (UserSharing0_30 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Sharing0_31 = ((MR_Word) ((MR_hl_field(1, UserSharing0_30, 0))));
    MaybeTypes0_32 = ((MR_Word) ((MR_hl_field(1, UserSharing0_30, 1))));
    succeeded = (MaybeTypes0_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_49 = ((MR_Word) ((MR_hl_field(1, MaybeTypes0_32, 0))));
      Types0_33 = ((MR_Word) ((MR_hl_field(0, Var_49, 0))));
      TVarSet0_34 = ((MR_Word) ((MR_hl_field(0, Var_49, 1))));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Types_35;
    MR_Word TVarSet_37;
    MR_Word Sharing_38;
    MR_Word MaybeTypes_39;
    MR_Word UserSharing_40;
    MR_Word STATE_VARIABLE_EquivTypeInfo_2_50;
    MR_Word STATE_VARIABLE_UsedModules_1_51;
    MR_Word Var_54;
    MR_Word Var_60;
    MR_Word _AnythingChanged_36;
    MR_Word Var_58;

    Var_60 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), Types0_33, &Types_35, &_AnythingChanged_36, Var_60, &Var_58, TVarSet0_34, &TVarSet_37, STATE_VARIABLE_EquivTypeInfo_1_48, &STATE_VARIABLE_EquivTypeInfo_2_50, STATE_VARIABLE_UsedModules_0_46, &STATE_VARIABLE_UsedModules_1_51);
    switch (MR_tag((MR_Word) Sharing0_31)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          Sharing_38 = Sharing0_31;
          STATE_VARIABLE_EquivTypeInfo_3_52 = STATE_VARIABLE_EquivTypeInfo_2_50;
          *STATE_VARIABLE_UsedModules_47 = STATE_VARIABLE_UsedModules_1_51;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SharingPairs0_62 = ((MR_Word) ((MR_hl_field(1, Sharing0_31, 0))));
          MR_Word SharingPairs_63;
          MR_Word Var_64;
          MR_Box conv4_STATE_VARIABLE_EquivTypeInfo_3_52;
          MR_Box conv3_STATE_VARIABLE_UsedModules_47;

          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_8[0]));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0_1));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_64, 3) = ((MR_Box) (MaybeRecord_13));
            MR_hl_field(0, Var_64, 4) = ((MR_Box) (TypeEqvMap_14));
            MR_hl_field(0, Var_64, 5) = ((MR_Box) (TVarSet0_34));
          }
          mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_64, SharingPairs0_62, &SharingPairs_63, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_2_50)), &conv4_STATE_VARIABLE_EquivTypeInfo_3_52, ((MR_Box) (STATE_VARIABLE_UsedModules_1_51)), &conv3_STATE_VARIABLE_UsedModules_47);
          STATE_VARIABLE_EquivTypeInfo_3_52 = ((MR_Word) (conv4_STATE_VARIABLE_EquivTypeInfo_3_52));
          *STATE_VARIABLE_UsedModules_47 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_47));
          {
            Sharing_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Sharing_38, 0) = ((MR_Box) (SharingPairs_63));
          }
        }
        break;
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (Types_35));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (TVarSet_37));
    }
    {
      MaybeTypes_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTypes_39, 0) = ((MR_Box) (Var_54));
    }
    {
      UserSharing_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UserSharing_40, 0) = ((MR_Box) (Sharing_38));
      MR_hl_field(1, UserSharing_40, 1) = ((MR_Box) (MaybeTypes_39));
    }
    parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_40, Attrs0_20, &Attrs_41);
  }
  else
  {
    Attrs_41 = Attrs0_20;
    STATE_VARIABLE_EquivTypeInfo_3_52 = STATE_VARIABLE_EquivTypeInfo_1_48;
    *STATE_VARIABLE_UsedModules_47 = STATE_VARIABLE_UsedModules_0_46;
  }
  Var_55 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), ProcVars_23);
  {
    ItemName_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_42, 0) = ((MR_Box) (PName_21));
    MR_hl_field(0, ItemName_42, 1) = ((MR_Box) (Var_55));
  }
  {
    ItemId_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_43, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 9));
    MR_hl_field(0, ItemId_43, 1) = ((MR_Box) (ItemName_42));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_43, STATE_VARIABLE_EquivTypeInfo_3_52, STATE_VARIABLE_RecompInfo_0_44, STATE_VARIABLE_RecompInfo_45);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *FPInfo_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Attrs_41));
    MR_hl_field(0, base, 1) = ((MR_Box) (PName_21));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (ProcVars_23));
    MR_hl_field(0, base, 4) = ((MR_Box) (ProcVarset_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (ProcInstVarset_25));
    MR_hl_field(0, base, 6) = ((MR_Box) (ProcImpl_26));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_50_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_50_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_2(
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
  MR_Word conv8_STATE_VARIABLE_ExpandedItems_25;
  MR_Word conv7_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type__replace_in_subst_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_Subst_14, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_ExpandedItems_25, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv10_Subst_14));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_ExpandedItems_25));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_25;
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_25));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word DeclPragma0_16,
  MR_Word * DeclPragma_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_33,
  MR_Word * STATE_VARIABLE_RecompInfo_34,
  MR_Word STATE_VARIABLE_UsedModules_0_35,
  MR_Word * STATE_VARIABLE_UsedModules_36,
  MR_Word * Specs_20)
{
  switch (MR_tag((MR_Word) DeclPragma0_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *DeclPragma_17 = DeclPragma0_16;
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_34 = STATE_VARIABLE_RecompInfo_0_33;
        *STATE_VARIABLE_UsedModules_36 = STATE_VARIABLE_UsedModules_0_35;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DeclPragma0_16, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeSpecConstr0_21 = ((MR_Word) ((MR_hl_field(3, DeclPragma0_16, 1))));
            MR_Word TypeSpecConstr_22;
            MR_Word PragmaModuleName_37;
            MR_Word OoMConstraints0_38;
            MR_Word ApplyToSupers_39;
            MR_Word OoMSubsts0_40;
            MR_Word TVarSet0_41;
            MR_Word ItemIds0_42;
            MR_Word Context_43;
            MR_Word SeqNum_44;
            MR_Word HeadConstraint0_45;
            MR_Word TailConstraints0_46;
            MR_Word ExpandedItems0_47;
            MR_Word HeadConstraint_48;
            MR_Word TVarSet1_49;
            MR_Word ExpandedItems1_50;
            MR_Word TailConstraints_51;
            MR_Word TVarSet2_52;
            MR_Word ExpandedItems2_53;
            MR_Word OoMConstraints_54;
            MR_Word HeadSubst0_55;
            MR_Word TailSubsts0_56;
            MR_Word HeadSubst_57;
            MR_Word TVarSet3_58;
            MR_Word ExpandedItems3_59;
            MR_Word TailSubsts_60;
            MR_Word TVarSet_61;
            MR_Word ExpandedItems_62;
            MR_Word OoMSubsts_63;
            MR_Word ItemIds_64;
            MR_Word STATE_VARIABLE_UsedModules_1_66;
            MR_Word Var_67;
            MR_Word STATE_VARIABLE_UsedModules_2_68;
            MR_Word STATE_VARIABLE_UsedModules_3_69;
            MR_Word Var_70;
            MR_Word HeadSubst0_76;
            MR_Word TailSubsts0_77;
            MR_Word HeadSubst_78;
            MR_Word TailSubsts_79;
            MR_Box conv6_TVarSet2_52;
            MR_Box conv5_ExpandedItems2_53;
            MR_Box conv4_STATE_VARIABLE_UsedModules_2_68;
            MR_Box conv13_TVarSet_61;
            MR_Box conv12_ExpandedItems_62;
            MR_Box conv11_STATE_VARIABLE_UsedModules_36;

            *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
            PragmaModuleName_37 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_21, 0))));
            OoMConstraints0_38 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_21, 1))));
            ApplyToSupers_39 = ((MR_Unsigned) ((MR_hl_field(0, TypeSpecConstr0_21, 2))) & (MR_Integer) 1);
            OoMSubsts0_40 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_21, 3))));
            TVarSet0_41 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_21, 4))));
            ItemIds0_42 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_21, 5))));
            Context_43 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_21, 6))));
            SeqNum_44 = ((MR_Word) ((MR_hl_field(0, TypeSpecConstr0_21, 7))));
            HeadConstraint0_45 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_38, 0))));
            TailConstraints0_46 = ((MR_Word) ((MR_hl_field(0, OoMConstraints0_38, 1))));
            {
              ExpandedItems0_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ExpandedItems0_47, 0) = ((MR_Box) (ModuleName_12));
              MR_hl_field(1, ExpandedItems0_47, 1) = ((MR_Box) (ItemIds0_42));
            }
            parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0(MaybeRecord_13, TypeEqvMap_14, HeadConstraint0_45, &HeadConstraint_48, TVarSet0_41, &TVarSet1_49, ExpandedItems0_47, &ExpandedItems1_50, STATE_VARIABLE_UsedModules_0_35, &STATE_VARIABLE_UsedModules_1_66);
            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[3]));
              MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
              MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_67, 3) = ((MR_Box) (MaybeRecord_13));
              MR_hl_field(0, Var_67, 4) = ((MR_Box) (TypeEqvMap_14));
            }
            mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_67, TailConstraints0_46, &TailConstraints_51, ((MR_Box) (TVarSet1_49)), &conv6_TVarSet2_52, ((MR_Box) (ExpandedItems1_50)), &conv5_ExpandedItems2_53, ((MR_Box) (STATE_VARIABLE_UsedModules_1_66)), &conv4_STATE_VARIABLE_UsedModules_2_68);
            TVarSet2_52 = ((MR_Word) (conv6_TVarSet2_52));
            ExpandedItems2_53 = ((MR_Word) (conv5_ExpandedItems2_53));
            STATE_VARIABLE_UsedModules_2_68 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_2_68));
            {
              OoMConstraints_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMConstraints_54, 0) = ((MR_Box) (HeadConstraint_48));
              MR_hl_field(0, OoMConstraints_54, 1) = ((MR_Box) (TailConstraints_51));
            }
            HeadSubst0_55 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_40, 0))));
            TailSubsts0_56 = ((MR_Word) ((MR_hl_field(0, OoMSubsts0_40, 1))));
            HeadSubst0_76 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_55, 0))));
            TailSubsts0_77 = ((MR_Word) ((MR_hl_field(0, HeadSubst0_55, 1))));
            parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(MaybeRecord_13, TypeEqvMap_14, HeadSubst0_76, &HeadSubst_78, TailSubsts0_77, &TailSubsts_79, TVarSet2_52, &TVarSet3_58, ExpandedItems2_53, &ExpandedItems3_59, STATE_VARIABLE_UsedModules_2_68, &STATE_VARIABLE_UsedModules_3_69);
            {
              HeadSubst_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadSubst_57, 0) = ((MR_Box) (HeadSubst_78));
              MR_hl_field(0, HeadSubst_57, 1) = ((MR_Box) (TailSubsts_79));
            }
            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_70, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[4]));
              MR_hl_field(0, Var_70, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_2));
              MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_70, 3) = ((MR_Box) (MaybeRecord_13));
              MR_hl_field(0, Var_70, 4) = ((MR_Box) (TypeEqvMap_14));
            }
            mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__equiv_type_scalar_common_2[8]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[8]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_70, TailSubsts0_56, &TailSubsts_60, ((MR_Box) (TVarSet3_58)), &conv13_TVarSet_61, ((MR_Box) (ExpandedItems3_59)), &conv12_ExpandedItems_62, ((MR_Box) (STATE_VARIABLE_UsedModules_3_69)), &conv11_STATE_VARIABLE_UsedModules_36);
            TVarSet_61 = ((MR_Word) (conv13_TVarSet_61));
            ExpandedItems_62 = ((MR_Word) (conv12_ExpandedItems_62));
            *STATE_VARIABLE_UsedModules_36 = ((MR_Word) (conv11_STATE_VARIABLE_UsedModules_36));
            {
              OoMSubsts_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, OoMSubsts_63, 0) = ((MR_Box) (HeadSubst_57));
              MR_hl_field(0, OoMSubsts_63, 1) = ((MR_Box) (TailSubsts_60));
            }
            if ((ExpandedItems_62 == (MR_Word) ((MR_Unsigned) 0U)))
              ItemIds_64 = ItemIds0_42;
            else
              ItemIds_64 = ((MR_Word) ((MR_hl_field(1, ExpandedItems_62, 1))));
            {
              TypeSpecConstr_22 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeSpecConstr_22, 0) = ((MR_Box) (PragmaModuleName_37));
              MR_hl_field(0, TypeSpecConstr_22, 1) = ((MR_Box) (OoMConstraints_54));
              MR_hl_field(0, TypeSpecConstr_22, 2) = (MR_Box) ((MR_Unsigned) (ApplyToSupers_39));
              MR_hl_field(0, TypeSpecConstr_22, 3) = ((MR_Box) (OoMSubsts_63));
              MR_hl_field(0, TypeSpecConstr_22, 4) = ((MR_Box) (TVarSet_61));
              MR_hl_field(0, TypeSpecConstr_22, 5) = ((MR_Box) (ItemIds_64));
              MR_hl_field(0, TypeSpecConstr_22, 6) = ((MR_Box) (Context_43));
              MR_hl_field(0, TypeSpecConstr_22, 7) = ((MR_Box) (SeqNum_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *DeclPragma_17 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpecConstr_22));
            }
            *STATE_VARIABLE_RecompInfo_34 = STATE_VARIABLE_RecompInfo_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeSpec0_23 = ((MR_Word) ((MR_hl_field(3, DeclPragma0_16, 1))));
            MR_Word TypeSpec_24;

            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_52_93_95_48_11_p_0(ModuleName_12, MaybeRecord_13, TypeEqvMap_14, TypeSpec0_23, &TypeSpec_24, STATE_VARIABLE_RecompInfo_0_33, STATE_VARIABLE_RecompInfo_34, STATE_VARIABLE_UsedModules_0_35, STATE_VARIABLE_UsedModules_36, Specs_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *DeclPragma_17 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (TypeSpec_24));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          {
            *DeclPragma_17 = DeclPragma0_16;
            *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_RecompInfo_34 = STATE_VARIABLE_RecompInfo_0_33;
            *STATE_VARIABLE_UsedModules_36 = STATE_VARIABLE_UsedModules_0_35;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_116_121_112_101_95_115_112_101_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word TypeSpecInfo0_16,
  MR_Word * TypeSpecInfo_17,
  MR_Word RecompInfo_18,
  MR_Word * RecompInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_35,
  MR_Word * STATE_VARIABLE_UsedModules_36,
  MR_Word * HeadVar__11_11)
{
  MR_bool succeeded;
  MR_Word PFUMM_20;
  MR_Word PredName_21;
  MR_Word NewName_22;
  MR_Word Subst0_23;
  MR_Word TVarSet0_24;
  MR_Word ItemIds0_25;
  MR_Word Context_26;
  MR_Word SeqNum_27;
  MR_Word ExpandedItems0_29;
  MR_Word Subst_30;
  MR_Word TVarSet_31;
  MR_Word ExpandedItems_32;
  MR_Word ItemIds_33;
  MR_Word HeadSubst0_39;
  MR_Word TailSubsts0_40;
  MR_Word HeadSubst_41;
  MR_Word TailSubsts_42;

  *RecompInfo_8 = RecompInfo_18;
  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  PFUMM_20 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 0))));
  PredName_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 1))));
  NewName_22 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 2))));
  Subst0_23 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 3))));
  TVarSet0_24 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 4))));
  ItemIds0_25 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 5))));
  Context_26 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 6))));
  SeqNum_27 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_16, 7))));
  succeeded = (RecompInfo_18 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    MR_Word Var_37;

    succeeded = ((MR_tag((MR_Word) PredName_21)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(1, PredName_21, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_37);
    }
  }
  if (succeeded)
    ExpandedItems0_29 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      ExpandedItems0_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExpandedItems0_29, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(1, ExpandedItems0_29, 1) = ((MR_Box) (ItemIds0_25));
    }
  HeadSubst0_39 = ((MR_Word) ((MR_hl_field(0, Subst0_23, 0))));
  TailSubsts0_40 = ((MR_Word) ((MR_hl_field(0, Subst0_23, 1))));
  parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(MaybeRecord_13, TypeEqvMap_14, HeadSubst0_39, &HeadSubst_41, TailSubsts0_40, &TailSubsts_42, TVarSet0_24, &TVarSet_31, ExpandedItems0_29, &ExpandedItems_32, STATE_VARIABLE_UsedModules_0_35, STATE_VARIABLE_UsedModules_36);
  {
    Subst_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Subst_30, 0) = ((MR_Box) (HeadSubst_41));
    MR_hl_field(0, Subst_30, 1) = ((MR_Box) (TailSubsts_42));
  }
  if ((ExpandedItems_32 == (MR_Word) ((MR_Unsigned) 0U)))
    ItemIds_33 = ItemIds0_25;
  else
    ItemIds_33 = ((MR_Word) ((MR_hl_field(1, ExpandedItems_32, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *TypeSpecInfo_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PFUMM_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredName_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (NewName_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (Subst_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (TVarSet_31));
    MR_hl_field(0, base, 5) = ((MR_Box) (ItemIds_33));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_26));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_27));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word TailVarsTypes0_18,
  MR_Word * TailVarsTypes_19,
  MR_Word STATE_VARIABLE_TVarSet_0_28,
  MR_Word * STATE_VARIABLE_TVarSet_29,
  MR_Word STATE_VARIABLE_ExpandedItems_0_30,
  MR_Word * STATE_VARIABLE_ExpandedItems_31,
  MR_Word STATE_VARIABLE_UsedModules_0_32,
  MR_Word * STATE_VARIABLE_UsedModules_33)
{
  MR_Word HeadVar_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word HeadType0_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word HeadType_17;
  MR_Word STATE_VARIABLE_TVarSet_1_34;
  MR_Word STATE_VARIABLE_ExpandedItems_1_35;
  MR_Word STATE_VARIABLE_UsedModules_1_36;
  MR_Word Var_23;
  MR_Word Var_37;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), HeadType0_16, &HeadType_17, &Var_23, &Var_37, STATE_VARIABLE_TVarSet_0_28, &STATE_VARIABLE_TVarSet_1_34, STATE_VARIABLE_ExpandedItems_0_30, &STATE_VARIABLE_ExpandedItems_1_35, STATE_VARIABLE_UsedModules_0_32, &STATE_VARIABLE_UsedModules_1_36);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadVar_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (HeadType_17));
  }
  if ((TailVarsTypes0_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TailVarsTypes_19 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_29 = STATE_VARIABLE_TVarSet_1_34;
    *STATE_VARIABLE_ExpandedItems_31 = STATE_VARIABLE_ExpandedItems_1_35;
    *STATE_VARIABLE_UsedModules_33 = STATE_VARIABLE_UsedModules_1_36;
  }
  else
  {
    MR_Word HeadTailVarType0_24 = ((MR_Word) ((MR_hl_field(1, TailVarsTypes0_18, 0))));
    MR_Word TailTailVarsTypes0_25 = ((MR_Word) ((MR_hl_field(1, TailVarsTypes0_18, 1))));
    MR_Word HeadTailVarType_26;
    MR_Word TailTailVarsTypes_27;

    parse_tree__equiv_type__replace_in_tvar_substs_12_p_0(MaybeRecord_13, TypeEqvMap_14, HeadTailVarType0_24, &HeadTailVarType_26, TailTailVarsTypes0_25, &TailTailVarsTypes_27, STATE_VARIABLE_TVarSet_1_34, STATE_VARIABLE_TVarSet_29, STATE_VARIABLE_ExpandedItems_1_35, STATE_VARIABLE_ExpandedItems_31, STATE_VARIABLE_UsedModules_1_36, STATE_VARIABLE_UsedModules_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TailVarsTypes_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadTailVarType_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailTailVarsTypes_27));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0_1(
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
  MR_Word conv3_Arg_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_26;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_28;
  MR_Word conv0_STATE_VARIABLE_UsedModules_30;

  parse_tree__equiv_type__replace_in_var_or_ground_type_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Arg_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_26, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_28, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_30);
  *wrapper_arg_2 = ((MR_Box) (conv3_Arg_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_26));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_28));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_30));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 0))));
  MR_Word Args0_19 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 1))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 2))));
  MR_Word Args_21;
  MR_Word Var_28;
  MR_Box conv6_STATE_VARIABLE_TVarSet_23;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_25;
  MR_Box conv4_STATE_VARIABLE_UsedModules_27;

  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[2]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_var_or_ground_constraint_location_10_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (TypeEqvMap_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_var_or_ground_type_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_28, Args0_19, &Args_21, ((MR_Box) (STATE_VARIABLE_TVarSet_0_22)), &conv6_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_24)), &conv5_STATE_VARIABLE_EquivTypeInfo_25, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_27);
  *STATE_VARIABLE_TVarSet_23 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_23));
  *STATE_VARIABLE_EquivTypeInfo_25 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_25));
  *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Args_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_20));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_55_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_55_95_95_91_52_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstanceInfo0_16,
  MR_Word * InstanceInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * HeadVar__11_11)
{
  MR_bool succeeded;
  MR_Word ClassName_20;
  MR_Word Types0_21;
  MR_Word OriginalTypes_22;
  MR_Word Constraints0_23;
  MR_Word InstanceBody0_24;
  MR_Word TVarSet0_25;
  MR_Word ContainingModuleName_26;
  MR_Word Context_27;
  MR_Word SeqNum_28;
  MR_Word UsedTypeCtors0_29;
  MR_Word Constraints_30;
  MR_Word TVarSet1_31;
  MR_Word UsedTypeCtors1_32;
  MR_Word Types_33;
  MR_Word TVarSet_36;
  MR_Word UsedTypeCtors_37;
  MR_Word InstanceBody_38;
  MR_Word ItemName_40;
  MR_Word ItemId_41;
  MR_Word STATE_VARIABLE_UsedModules_1_47;
  MR_Integer Var_49;
  MR_Word Var_54;
  MR_Word Var_60;
  MR_Box conv6_TVarSet1_31;
  MR_Box conv5_UsedTypeCtors1_32;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_47;
  MR_Word Var_34;
  MR_Word Var_35;

  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  ClassName_20 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 0))));
  Types0_21 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 1))));
  OriginalTypes_22 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 2))));
  Constraints0_23 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 3))));
  InstanceBody0_24 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 4))));
  TVarSet0_25 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 5))));
  ContainingModuleName_26 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 6))));
  Context_27 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 7))));
  SeqNum_28 = ((MR_Word) ((MR_hl_field(0, InstanceInfo0_16, 8))));
  succeeded = (STATE_VARIABLE_RecompInfo_0_42 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ContainingModuleName_26, ModuleName_12);
  if (succeeded)
    UsedTypeCtors0_29 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_46;

    Var_46 = mercury__set__init_0_f_0((MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0));
    {
      UsedTypeCtors0_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UsedTypeCtors0_29, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(1, UsedTypeCtors0_29, 1) = ((MR_Box) (Var_46));
    }
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (MaybeRecord_13));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (TypeEqvMap_14));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_54, Constraints0_23, &Constraints_30, ((MR_Box) (TVarSet0_25)), &conv6_TVarSet1_31, ((MR_Box) (UsedTypeCtors0_29)), &conv5_UsedTypeCtors1_32, ((MR_Box) (STATE_VARIABLE_UsedModules_0_44)), &conv4_STATE_VARIABLE_UsedModules_1_47);
  TVarSet1_31 = ((MR_Word) (conv6_TVarSet1_31));
  UsedTypeCtors1_32 = ((MR_Word) (conv5_UsedTypeCtors1_32));
  STATE_VARIABLE_UsedModules_1_47 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_47));
  Var_60 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), Types0_21, &Types_33, &Var_34, Var_60, &Var_35, TVarSet1_31, &TVarSet_36, UsedTypeCtors1_32, &UsedTypeCtors_37, STATE_VARIABLE_UsedModules_1_47, STATE_VARIABLE_UsedModules_45);
  if ((InstanceBody0_24 == (MR_Word) ((MR_Unsigned) 0U)))
    InstanceBody_38 = (MR_Word) ((MR_Unsigned) 0U);
  else
    InstanceBody_38 = InstanceBody0_24;
  Var_49 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_21);
  {
    ItemName_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_40, 0) = ((MR_Box) (ClassName_20));
    MR_hl_field(0, ItemName_40, 1) = ((MR_Box) (Var_49));
  }
  {
    ItemId_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_41, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_41, 1) = ((MR_Box) (ItemName_40));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_41, UsedTypeCtors_37, STATE_VARIABLE_RecompInfo_0_42, STATE_VARIABLE_RecompInfo_43);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *InstanceInfo_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (Types_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (OriginalTypes_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (Constraints_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (InstanceBody_38));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (ContainingModuleName_26));
    MR_hl_field(0, base, 7) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 8) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(
  MR_Word ModuleName_14,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_50_44_32_51_93_95_48_14_p_0(ModuleName_14, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_57_95_95_91_50_44_32_51_93_95_48_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(HeadVar__1_1, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_45,
  MR_Word * STATE_VARIABLE_RecompInfo_46,
  MR_Word STATE_VARIABLE_UsedModules_0_47,
  MR_Word * STATE_VARIABLE_UsedModules_48,
  MR_Word * Specs_20)
{
  MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(0, Info0_16, 0))));
  MR_Word MaybePredOrFunc0_22 = ((MR_Word) ((MR_hl_field(0, Info0_16, 1))));
  MR_Word Modes0_23 = ((MR_Word) ((MR_hl_field(0, Info0_16, 2))));
  MR_Word WithInst0_24 = ((MR_Word) ((MR_hl_field(0, Info0_16, 3))));
  MR_Word MaybeDetism0_25 = ((MR_Word) ((MR_hl_field(0, Info0_16, 4))));
  MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(0, Info0_16, 5))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Info0_16, 6))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Info0_16, 7))));
  MR_Word ExpandedItems0_29;
  MR_Word PredFormArity_30;
  MR_Word MaybePredOrFunc_31;
  MR_Word WithInst_32;
  MR_Word ExtraModes_33;
  MR_Word MaybeDetism_34;
  MR_Word ExpandedItems_35;
  MR_Word Modes_36;

  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, PredName_21, STATE_VARIABLE_RecompInfo_0_45, &ExpandedItems0_29);
  PredFormArity_30 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_23);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_49_93_95_48_18_p_0(InstEqvMap_15, PredName_21, PredFormArity_30, Context_27, (MR_Integer) 1, MaybePredOrFunc0_22, &MaybePredOrFunc_31, WithInst0_24, &WithInst_32, &ExtraModes_33, MaybeDetism0_25, &MaybeDetism_34, ExpandedItems0_29, &ExpandedItems_35, STATE_VARIABLE_UsedModules_0_47, STATE_VARIABLE_UsedModules_48, Specs_20);
  if ((ExtraModes_33 == (MR_Word) ((MR_Unsigned) 0U)))
    Modes_36 = Modes0_23;
  else
    Modes_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_23, ExtraModes_33);
  if ((MaybePredOrFunc_31 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_RecompInfo_46 = STATE_VARIABLE_RecompInfo_0_45;
  else
  {
    MR_Word PredOrFunc_39 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_31, 0))));
    MR_Word ItemType_40;
    MR_Integer Arity_41;
    MR_Integer OrigArity_42;
    MR_Word ItemName_43;
    MR_Word ItemId_44;

    ItemType_40 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_39);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_36, &Arity_41);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_39, &OrigArity_42, Arity_41);
    {
      ItemName_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemName_43, 0) = ((MR_Box) (PredName_21));
      MR_hl_field(0, ItemName_43, 1) = ((MR_Box) (OrigArity_42));
    }
    {
      ItemId_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemId_44, 0) = (MR_Box) ((MR_Unsigned) (ItemType_40));
      MR_hl_field(0, ItemId_44, 1) = ((MR_Box) (ItemName_43));
    }
    recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_44, ExpandedItems_35, STATE_VARIABLE_RecompInfo_0_45, STATE_VARIABLE_RecompInfo_46);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredName_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybePredOrFunc_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (Modes_36));
    MR_hl_field(0, base, 3) = ((MR_Box) (WithInst_32));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeDetism_34));
    MR_hl_field(0, base, 5) = ((MR_Box) (InstVarSet_26));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho18_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__replace_in_list_loop__ho21_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho21_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__replace_in_mutable_info_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word * HeadVar__11_11)
{
  MR_String MutName_20;
  MR_Word QualName_21;
  MR_Word ExpandedItems0_22;
  MR_Word ExpandedItems_23;
  MR_Word ItemId_24;
  MR_Word Var_31;
  MR_String MutName_42;
  MR_Word OrigType_43;
  MR_Word Type0_44;
  MR_Word OrigInst_45;
  MR_Word Inst0_46;
  MR_Word InitValue_47;
  MR_Word Attrs_48;
  MR_Word Varset_49;
  MR_Word Context_50;
  MR_Word SeqNum_51;
  MR_Word TVarSet0_52;
  MR_Word Type_53;
  MR_Word Inst_56;
  MR_Word STATE_VARIABLE_ExpandedItems_1_57;
  MR_Word STATE_VARIABLE_UsedModules_1_58;
  MR_Word Var_62;
  MR_Word _TypeChanged_54;
  MR_Word _TVarSet_55;
  MR_Word Var_60;

  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  MutName_20 = ((MR_String) ((MR_hl_field(0, Info0_16, 0))));
  {
    QualName_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, QualName_21, 0) = ((MR_Box) (ModuleName_12));
    MR_hl_field(1, QualName_21, 1) = ((MR_Box) (MutName_20));
  }
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, QualName_21, STATE_VARIABLE_RecompInfo_0_25, &ExpandedItems0_22);
  MutName_42 = ((MR_String) ((MR_hl_field(0, Info0_16, 0))));
  OrigType_43 = ((MR_Word) ((MR_hl_field(0, Info0_16, 1))));
  Type0_44 = ((MR_Word) ((MR_hl_field(0, Info0_16, 2))));
  OrigInst_45 = ((MR_Word) ((MR_hl_field(0, Info0_16, 3))));
  Inst0_46 = ((MR_Word) ((MR_hl_field(0, Info0_16, 4))));
  InitValue_47 = ((MR_Word) ((MR_hl_field(0, Info0_16, 5))));
  Attrs_48 = ((MR_Word) ((MR_hl_field(0, Info0_16, 6))));
  Varset_49 = ((MR_Word) ((MR_hl_field(0, Info0_16, 7))));
  Context_50 = ((MR_Word) ((MR_hl_field(0, Info0_16, 8))));
  SeqNum_51 = ((MR_Word) ((MR_hl_field(0, Info0_16, 9))));
  TVarSet0_52 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), Type0_44, &Type_53, &_TypeChanged_54, &Var_60, TVarSet0_52, &_TVarSet_55, ExpandedItems0_22, &STATE_VARIABLE_ExpandedItems_1_57, STATE_VARIABLE_UsedModules_0_27, &STATE_VARIABLE_UsedModules_1_58);
  Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(InstEqvMap_15, Var_62, Inst0_46, &Inst_56, STATE_VARIABLE_ExpandedItems_1_57, &ExpandedItems_23, STATE_VARIABLE_UsedModules_1_58, STATE_VARIABLE_UsedModules_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MutName_42));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigType_43));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_53));
    MR_hl_field(0, base, 3) = ((MR_Box) (OrigInst_45));
    MR_hl_field(0, base, 4) = ((MR_Box) (Inst_56));
    MR_hl_field(0, base, 5) = ((MR_Box) (InitValue_47));
    MR_hl_field(0, base, 6) = ((MR_Box) (Attrs_48));
    MR_hl_field(0, base, 7) = ((MR_Box) (Varset_49));
    MR_hl_field(0, base, 8) = ((MR_Box) (Context_50));
    MR_hl_field(0, base, 9) = ((MR_Box) (SeqNum_51));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (QualName_21));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    ItemId_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_24, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 8));
    MR_hl_field(0, ItemId_24, 1) = ((MR_Box) (Var_31));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_24, ExpandedItems_23, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho13_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho26_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_2(
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
  MR_Word conv10_Decl_16;
  MR_Word conv9_STATE_VARIABLE_EquivTypeInfo_52;
  MR_Word conv8_STATE_VARIABLE_UsedModules_54;
  MR_Word conv7_STATE_VARIABLE_Specs_56;

  parse_tree__equiv_type__replace_in_class_decl_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Decl_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_EquivTypeInfo_52, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_54, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_56);
  *wrapper_arg_2 = ((MR_Box) (conv10_Decl_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_EquivTypeInfo_52));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_54));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_56));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word STATE_VARIABLE_UsedModules_0_42,
  MR_Word * STATE_VARIABLE_UsedModules_43,
  MR_Word * Specs_20)
{
  MR_Word ClassName_21 = ((MR_Word) ((MR_hl_field(0, Info0_16, 0))));
  MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(0, Info0_16, 1))));
  MR_Word Constraints0_23 = ((MR_Word) ((MR_hl_field(0, Info0_16, 2))));
  MR_Word FunDeps_24 = ((MR_Word) ((MR_hl_field(0, Info0_16, 3))));
  MR_Word ClassInterface0_25 = ((MR_Word) ((MR_hl_field(0, Info0_16, 4))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(0, Info0_16, 5))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, Info0_16, 6))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(0, Info0_16, 7))));
  MR_Integer Arity_29;
  MR_Word ExpandedItems0_30;
  MR_Word Constraints_31;
  MR_Word TVarSet_32;
  MR_Word ExpandedItems1_33;
  MR_Word ClassInterface_34;
  MR_Word ExpandedItems_35;
  MR_Word ItemName_38;
  MR_Word ItemId_39;
  MR_Word STATE_VARIABLE_UsedModules_1_44;
  MR_Word Var_49;
  MR_Box conv6_TVarSet_32;
  MR_Box conv5_ExpandedItems1_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_44;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), Vars_22, &Arity_29);
  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, ClassName_21, STATE_VARIABLE_RecompInfo_0_40, &ExpandedItems0_30);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (MaybeRecord_13));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (TypeEqvMap_14));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_49, Constraints0_23, &Constraints_31, ((MR_Box) (TVarSet0_26)), &conv6_TVarSet_32, ((MR_Box) (ExpandedItems0_30)), &conv5_ExpandedItems1_33, ((MR_Box) (STATE_VARIABLE_UsedModules_0_42)), &conv4_STATE_VARIABLE_UsedModules_1_44);
  TVarSet_32 = ((MR_Word) (conv6_TVarSet_32));
  ExpandedItems1_33 = ((MR_Word) (conv5_ExpandedItems1_33));
  STATE_VARIABLE_UsedModules_1_44 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_44));
  if ((ClassInterface0_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ClassInterface_34 = (MR_Word) ((MR_Unsigned) 0U);
    ExpandedItems_35 = ExpandedItems1_33;
    *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_43 = STATE_VARIABLE_UsedModules_1_44;
  }
  else
  {
    MR_Word Methods0_36 = ((MR_Word) ((MR_hl_field(1, ClassInterface0_25, 0))));
    MR_Word Methods_37;
    MR_Word Var_54;
    MR_Box conv13_ExpandedItems_35;
    MR_Box conv12_STATE_VARIABLE_UsedModules_43;
    MR_Box conv11_Specs_20;

    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_2));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (MaybeRecord_13));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) (TypeEqvMap_14));
      MR_hl_field(0, Var_54, 5) = ((MR_Box) (InstEqvMap_15));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), Var_54, Methods0_36, &Methods_37, ((MR_Box) (ExpandedItems1_33)), &conv13_ExpandedItems_35, ((MR_Box) (STATE_VARIABLE_UsedModules_1_44)), &conv12_STATE_VARIABLE_UsedModules_43, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_Specs_20);
    ExpandedItems_35 = ((MR_Word) (conv13_ExpandedItems_35));
    *STATE_VARIABLE_UsedModules_43 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_43));
    *Specs_20 = ((MR_Word) (conv11_Specs_20));
    {
      ClassInterface_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ClassInterface_34, 0) = ((MR_Box) (Methods_37));
    }
  }
  {
    ItemName_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_38, 0) = ((MR_Box) (ClassName_21));
    MR_hl_field(0, ItemName_38, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(0, ItemId_39, 1) = ((MR_Box) (ItemName_38));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_39, ExpandedItems_35, STATE_VARIABLE_RecompInfo_0_40, STATE_VARIABLE_RecompInfo_41);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (Vars_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Constraints_31));
    MR_hl_field(0, base, 3) = ((MR_Box) (FunDeps_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (ClassInterface_34));
    MR_hl_field(0, base, 5) = ((MR_Box) (TVarSet_32));
    MR_hl_field(0, base, 6) = ((MR_Box) (Context_27));
    MR_hl_field(0, base, 7) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho11_13_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Items0_19,
  MR_Word * Items_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word RevItems_24;

  parse_tree__equiv_type__replace_in_list_loop__ho28_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho28_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevItems_0_7,
  MR_Word * STATE_VARIABLE_RevItems_8,
  MR_Word STATE_VARIABLE_RecompInfo_0_9,
  MR_Word * STATE_VARIABLE_RecompInfo_10,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
      *STATE_VARIABLE_RecompInfo_10 = STATE_VARIABLE_RecompInfo_0_9;
      *STATE_VARIABLE_RevItems_8 = STATE_VARIABLE_RevItems_0_7;
    }
    else
    {
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_1_55;
      MR_Word STATE_VARIABLE_UsedModules_1_56;
      MR_Word STATE_VARIABLE_RevItems_1_57;
      MR_Word STATE_VARIABLE_Specs_1_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_1_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_1_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 0) = ((MR_Box) (Item_43));
          MR_hl_field(1, STATE_VARIABLE_RevItems_1_57, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_1_58 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_1_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_1_57 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_1_57;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_1_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_1_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_1_58;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevItems_0_7 = next_value_of_STATE_VARIABLE_RevItems_0_7;
      STATE_VARIABLE_RecompInfo_0_9 = next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      STATE_VARIABLE_UsedModules_0_11 = next_value_of_STATE_VARIABLE_UsedModules_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word InstEqvMap_15,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_48,
  MR_Word * STATE_VARIABLE_RecompInfo_49,
  MR_Word STATE_VARIABLE_UsedModules_0_50,
  MR_Word * STATE_VARIABLE_UsedModules_51,
  MR_Word * Specs_20)
{
  MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(0, Info0_16, 0))));
  MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(0, Info0_16, 1))) & (MR_Integer) 1);
  MR_Word TypesAndMaybeModes0_23 = ((MR_Word) ((MR_hl_field(0, Info0_16, 2))));
  MR_Word MaybeWithType0_24 = ((MR_Word) ((MR_hl_field(0, Info0_16, 3))));
  MR_Word MaybeWithInst0_25 = ((MR_Word) ((MR_hl_field(0, Info0_16, 4))));
  MR_Word MaybeDetism0_26 = ((MR_Word) ((MR_hl_field(0, Info0_16, 5))));
  MR_Word Origin_27 = ((MR_Word) ((MR_hl_field(0, Info0_16, 6))));
  MR_Word TVarSet0_28 = ((MR_Word) ((MR_hl_field(0, Info0_16, 7))));
  MR_Word InstVarSet_29 = ((MR_Word) ((MR_hl_field(0, Info0_16, 8))));
  MR_Word ExistQVars_30 = ((MR_Word) ((MR_hl_field(0, Info0_16, 9))));
  MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(0, Info0_16, 10))) & (MR_Integer) 3);
  MR_Word ClassContext0_32 = ((MR_Word) ((MR_hl_field(0, Info0_16, 11))));
  MR_Word Context_33 = ((MR_Word) ((MR_hl_field(0, Info0_16, 12))));
  MR_Word SeqNum_34 = ((MR_Word) ((MR_hl_field(0, Info0_16, 13))));
  MR_Word ExpandedItems0_35;
  MR_Word ClassContext_36;
  MR_Word TypesAndMaybeModes_37;
  MR_Word TVarSet_38;
  MR_Word MaybeWithType_39;
  MR_Word MaybeWithInst_40;
  MR_Word MaybeDetism_41;
  MR_Word ExpandedItems_42;
  MR_Word ItemType_43;
  MR_Word PredFormArity_44;
  MR_Integer Arity_45;
  MR_Word ItemName_46;
  MR_Word ItemId_47;
  MR_Word Var_53;

  recompilation__record_uses__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, PredName_21, STATE_VARIABLE_RecompInfo_0_48, &ExpandedItems0_35);
  parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0(MaybeRecord_13, PredName_21, PredOrFunc_22, Context_33, TypeEqvMap_14, InstEqvMap_15, ClassContext0_32, &ClassContext_36, TypesAndMaybeModes0_23, &TypesAndMaybeModes_37, TVarSet0_28, &TVarSet_38, MaybeWithType0_24, &MaybeWithType_39, MaybeWithInst0_25, &MaybeWithInst_40, MaybeDetism0_26, &MaybeDetism_41, ExpandedItems0_35, &ExpandedItems_42, STATE_VARIABLE_UsedModules_0_50, STATE_VARIABLE_UsedModules_51, Specs_20);
  ItemType_43 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_22);
  PredFormArity_44 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes_37);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_22, &Var_53, PredFormArity_44);
  Arity_45 = (MR_Integer) (Var_53);
  {
    ItemName_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemName_46, 0) = ((MR_Box) (PredName_21));
    MR_hl_field(0, ItemName_46, 1) = ((MR_Box) (Arity_45));
  }
  {
    ItemId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ItemId_47, 0) = (MR_Box) ((MR_Unsigned) (ItemType_43));
    MR_hl_field(0, ItemId_47, 1) = ((MR_Box) (ItemName_46));
  }
  recompilation__record_uses__finish_recording_expanded_items_4_p_0(ItemId_47, ExpandedItems_42, STATE_VARIABLE_RecompInfo_0_48, STATE_VARIABLE_RecompInfo_49);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredName_21));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypesAndMaybeModes_37));
    MR_hl_field(0, base, 3) = ((MR_Box) (MaybeWithType_39));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeWithInst_40));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeDetism_41));
    MR_hl_field(0, base, 6) = ((MR_Box) (Origin_27));
    MR_hl_field(0, base, 7) = ((MR_Box) (TVarSet_38));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstVarSet_29));
    MR_hl_field(0, base, 9) = ((MR_Box) (ExistQVars_30));
    MR_hl_field(0, base, 10) = (MR_Box) ((MR_Unsigned) (Purity_31));
    MR_hl_field(0, base, 11) = ((MR_Box) (ClassContext_36));
    MR_hl_field(0, base, 12) = ((MR_Box) (Context_33));
    MR_hl_field(0, base, 13) = ((MR_Box) (SeqNum_34));
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2595__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_pred_types_and_maybe_modes__2615__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0(
  MR_Word MaybeRecord_24,
  MR_Word PredName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word TypeEqvMap_28,
  MR_Word InstEqvMap_29,
  MR_Word ClassContext0_30,
  MR_Word * ClassContext_31,
  MR_Word TypesAndMaybeModes0_32,
  MR_Word * TypesAndMaybeModes_33,
  MR_Word STATE_VARIABLE_TVarSet_0_78,
  MR_Word * STATE_VARIABLE_TVarSet_79,
  MR_Word MaybeWithType0_35,
  MR_Word * MaybeWithType_36,
  MR_Word MaybeWithInst0_37,
  MR_Word * MaybeWithInst_38,
  MR_Word STATE_VARIABLE_MaybeDetism_0_80,
  MR_Word * STATE_VARIABLE_MaybeDetism_81,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_82,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_83,
  MR_Word STATE_VARIABLE_UsedModules_0_84,
  MR_Word * STATE_VARIABLE_UsedModules_85,
  MR_Word * STATE_VARIABLE_Specs_86)
{
  MR_bool succeeded;
  MR_Word TypesAndMaybeModes1_43;
  MR_Word ExtraTypes_49;
  MR_Word PredFormArity_52;
  MR_Word ExtraModes_55;
  MR_Word ModeSpecs_56;
  MR_Word STATE_VARIABLE_TVarSet_1_87;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_88;
  MR_Word STATE_VARIABLE_UsedModules_1_89;
  MR_Word STATE_VARIABLE_TVarSet_2_90;
  MR_Word STATE_VARIABLE_EquivTypeInfo_2_91;
  MR_Word STATE_VARIABLE_UsedModules_2_92;
  MR_Word STATE_VARIABLE_EquivTypeInfo_3_94;
  MR_Word STATE_VARIABLE_UsedModules_3_95;
  MR_Word STATE_VARIABLE_Specs_1_96;
  MR_Word Var_151;
  MR_Word STATE_VARIABLE_EquivTypeInfo_4_153;
  MR_Word STATE_VARIABLE_Specs_4_155;
  MR_Word Var_53;
  MR_Word Var_54;

  parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(MaybeRecord_24, TypeEqvMap_28, ClassContext0_30, ClassContext_31, STATE_VARIABLE_TVarSet_0_78, &STATE_VARIABLE_TVarSet_1_87, STATE_VARIABLE_EquivTypeInfo_0_82, &STATE_VARIABLE_EquivTypeInfo_1_88, STATE_VARIABLE_UsedModules_0_84, &STATE_VARIABLE_UsedModules_1_89);
  parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0(MaybeRecord_24, TypeEqvMap_28, TypesAndMaybeModes0_32, &TypesAndMaybeModes1_43, STATE_VARIABLE_TVarSet_1_87, &STATE_VARIABLE_TVarSet_2_90, STATE_VARIABLE_EquivTypeInfo_1_88, &STATE_VARIABLE_EquivTypeInfo_2_91, STATE_VARIABLE_UsedModules_1_89, &STATE_VARIABLE_UsedModules_2_92);
  if ((MaybeWithType0_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ExtraTypes_49 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_1_96 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_79 = STATE_VARIABLE_TVarSet_2_90;
    STATE_VARIABLE_EquivTypeInfo_3_94 = STATE_VARIABLE_EquivTypeInfo_2_91;
    STATE_VARIABLE_UsedModules_3_95 = STATE_VARIABLE_UsedModules_2_92;
  }
  else
  {
    MR_Word WithType0_44 = ((MR_Word) ((MR_hl_field(1, MaybeWithType0_35, 0))));
    MR_Word WithType_45;
    MR_Word Var_46;
    MR_Word ExtraTypesPrime_48;
    MR_Word Var_207;
    MR_Word _Purity_47;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(MaybeRecord_24, TypeEqvMap_28, WithType0_44, &WithType_45, &Var_46, STATE_VARIABLE_TVarSet_2_90, STATE_VARIABLE_TVarSet_79, STATE_VARIABLE_EquivTypeInfo_2_91, &STATE_VARIABLE_EquivTypeInfo_3_94, STATE_VARIABLE_UsedModules_2_92, &STATE_VARIABLE_UsedModules_3_95);
    succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(WithType_45, &_Purity_47, &Var_207, &ExtraTypesPrime_48);
    if (succeeded)
      succeeded = (PredOrFunc_26 == Var_207);
    if (succeeded)
    {
      ExtraTypes_49 = ExtraTypesPrime_48;
      STATE_VARIABLE_Specs_1_96 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ExtraTypePieces_50;
      MR_Word ExtraTypeSpec_51;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_124;
      MR_Word Var_130;
      MR_Word Var_135;
      MR_Word Var_136;

      ExtraTypes_49 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_101, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
      }
      {
        Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_103, 1) = ((MR_Box) (PredName_25));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[45])));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[36])));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
      }
      {
        Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_124, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[48])));
      }
      {
        Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_121, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[46])));
        MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
      }
      Var_120 = parse_tree__error_spec__color_as_correct_1_f_0(Var_121);
      Var_136 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[52])));
      Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
      Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[50])), Var_135);
      Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_120, Var_130);
      ExtraTypePieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_119);
      {
        ExtraTypeSpec_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExtraTypeSpec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/23"));
        MR_hl_field(0, ExtraTypeSpec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ExtraTypeSpec_51, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, ExtraTypeSpec_51, 3) = ((MR_Box) (Context_27));
        MR_hl_field(0, ExtraTypeSpec_51, 4) = ((MR_Box) (ExtraTypePieces_50));
      }
      {
        STATE_VARIABLE_Specs_1_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_96, 0) = ((MR_Box) (ExtraTypeSpec_51));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  PredFormArity_52 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes0_32);
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (PredOrFunc_26));
  }
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_49_93_95_48_18_p_0(InstEqvMap_29, PredName_25, PredFormArity_52, Context_27, (MR_Integer) 0, Var_151, &Var_53, MaybeWithInst0_37, &Var_54, &ExtraModes_55, STATE_VARIABLE_MaybeDetism_0_80, STATE_VARIABLE_MaybeDetism_81, STATE_VARIABLE_EquivTypeInfo_3_94, &STATE_VARIABLE_EquivTypeInfo_4_153, STATE_VARIABLE_UsedModules_3_95, STATE_VARIABLE_UsedModules_85, &ModeSpecs_56);
  STATE_VARIABLE_Specs_4_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_1_96, ModeSpecs_56);
  if ((STATE_VARIABLE_Specs_4_155 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (ExtraTypes_49 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExtraModes_55 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *TypesAndMaybeModes_33 = TypesAndMaybeModes1_43;
      *STATE_VARIABLE_Specs_86 = STATE_VARIABLE_Specs_4_155;
    }
    else
      switch (MR_tag((MR_Word) TypesAndMaybeModes1_43)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((ExtraModes_55 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *TypesAndMaybeModes_33 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypes_49));
            }
            *STATE_VARIABLE_Specs_86 = STATE_VARIABLE_Specs_4_155;
          }
          else
          {
            MR_Word MaybeExtraTypesAndModes_61;

            parse_tree__equiv_type__try_to_pair_extra_types_and_modes_6_p_0(PredOrFunc_26, PredName_25, Context_27, ExtraTypes_49, ExtraModes_55, &MaybeExtraTypesAndModes_61);
            if (((MR_tag((MR_Word) MaybeExtraTypesAndModes_61)) == (MR_Integer) 0))
            {
              MR_Word ExtraSpecs_63 = ((MR_Word) ((MR_hl_field(0, MaybeExtraTypesAndModes_61, 0))));

              *TypesAndMaybeModes_33 = TypesAndMaybeModes1_43;
              *STATE_VARIABLE_Specs_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ExtraSpecs_63, STATE_VARIABLE_Specs_4_155);
            }
            else
            {
              MR_Word ExtraTypesAndModes_62 = ((MR_Word) ((MR_hl_field(1, MaybeExtraTypesAndModes_61, 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *TypesAndMaybeModes_33 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (ExtraTypesAndModes_62));
              }
              *STATE_VARIABLE_Specs_86 = STATE_VARIABLE_Specs_4_155;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Types1_64 = ((MR_Word) ((MR_hl_field(1, TypesAndMaybeModes1_43, 0))));
            MR_Word Var_157;

            {
              Var_157 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_157, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[1]));
              MR_hl_field(0, Var_157, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0_2));
              MR_hl_field(0, Var_157, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_157, 3) = ((MR_Box) (Types1_64));
              MR_hl_field(0, Var_157, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_not_3_p_0(Var_157, (MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/23", (MR_String) "Types1 = []");
            if ((ExtraModes_55 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Types_65;

              Types_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types1_64, ExtraTypes_49);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *TypesAndMaybeModes_33 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Types_65));
              }
              *STATE_VARIABLE_Specs_86 = STATE_VARIABLE_Specs_4_155;
            }
            else
            {
              MR_Word Pieces_68;
              MR_Word Spec_69;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Word Var_173;
              MR_Word Var_174;

              *TypesAndMaybeModes_33 = TypesAndMaybeModes1_43;
              Var_161 = parse_tree__equiv_type__pred_decl_error_prefix_2_f_0(PredOrFunc_26, PredName_25);
              Var_174 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[60])));
              Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[62])));
              Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[58])), Var_173);
              Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_161, Var_162);
              {
                Spec_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_69, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/23"));
                MR_hl_field(0, Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(0, Spec_69, 3) = ((MR_Box) (Context_27));
                MR_hl_field(0, Spec_69, 4) = ((MR_Box) (Pieces_68));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_86 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_69));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_4_155));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypesAndModes1_70 = ((MR_Word) ((MR_hl_field(2, TypesAndMaybeModes1_43, 0))));
            MR_Word Var_189;
            MR_Word MaybeExtraTypesAndModes_199;

            {
              Var_189 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_189, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[0]));
              MR_hl_field(0, Var_189, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_pred_types_and_maybe_modes_23_p_0_1));
              MR_hl_field(0, Var_189, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_189, 3) = ((MR_Box) (TypesAndModes1_70));
              MR_hl_field(0, Var_189, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_not_3_p_0(Var_189, (MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_types_and_maybe_modes\'/23", (MR_String) "TypesAndModes1 = []");
            parse_tree__equiv_type__try_to_pair_extra_types_and_modes_6_p_0(PredOrFunc_26, PredName_25, Context_27, ExtraTypes_49, ExtraModes_55, &MaybeExtraTypesAndModes_199);
            if (((MR_tag((MR_Word) MaybeExtraTypesAndModes_199)) == (MR_Integer) 0))
            {
              MR_Word ExtraSpecs_196 = ((MR_Word) ((MR_hl_field(0, MaybeExtraTypesAndModes_199, 0))));

              *TypesAndMaybeModes_33 = TypesAndMaybeModes1_43;
              *STATE_VARIABLE_Specs_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ExtraSpecs_196, STATE_VARIABLE_Specs_4_155);
            }
            else
            {
              MR_Word TypesAndModes_71;
              MR_Word ExtraTypesAndModes_195 = ((MR_Word) ((MR_hl_field(1, MaybeExtraTypesAndModes_199, 0))));

              TypesAndModes_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes1_70, ExtraTypesAndModes_195);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *TypesAndMaybeModes_33 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (TypesAndModes_71));
              }
              *STATE_VARIABLE_Specs_86 = STATE_VARIABLE_Specs_4_155;
            }
          }
          break;
      }
    if ((*STATE_VARIABLE_Specs_86 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeWithType_36 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybeWithInst_38 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      *MaybeWithType_36 = MaybeWithType0_35;
      *MaybeWithInst_38 = MaybeWithInst0_37;
    }
  }
  else
  {
    *TypesAndMaybeModes_33 = TypesAndMaybeModes1_43;
    *STATE_VARIABLE_Specs_86 = STATE_VARIABLE_Specs_4_155;
    *MaybeWithType_36 = MaybeWithType0_35;
    *MaybeWithInst_38 = MaybeWithInst0_37;
  }
  succeeded = (ExtraTypes_49 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExtraModes_55 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *STATE_VARIABLE_EquivTypeInfo_83 = STATE_VARIABLE_EquivTypeInfo_4_153;
  else
  {
    MR_Integer Arity_74 = (MR_Integer) (PredFormArity_52);
    MR_Word OrigItemType_75;
    MR_Word OrigItemName_76;
    MR_Word OrigItemId_77;

    OrigItemType_75 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_26);
    {
      OrigItemName_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigItemName_76, 0) = ((MR_Box) (PredName_25));
      MR_hl_field(0, OrigItemName_76, 1) = ((MR_Box) (Arity_74));
    }
    {
      OrigItemId_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigItemId_77, 0) = (MR_Box) ((MR_Unsigned) (OrigItemType_75));
      MR_hl_field(0, OrigItemId_77, 1) = ((MR_Box) (OrigItemName_76));
    }
    recompilation__record_uses__record_expanded_item_3_p_0(OrigItemId_77, STATE_VARIABLE_EquivTypeInfo_4_153, STATE_VARIABLE_EquivTypeInfo_83);
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_119_105_116_104_95_105_110_115_116_95_95_91_49_93_95_48_18_p_0(
  MR_Word InstEqvMap_20,
  MR_Word PredName_21,
  MR_Word PredFormArity_22,
  MR_Word Context_23,
  MR_Word DeclType_24,
  MR_Word MaybePredOrFunc0_25,
  MR_Word * MaybePredOrFunc_26,
  MR_Word MaybeWithInst0_27,
  MR_Word * MaybeWithInst_28,
  MR_Word * ExtraModes_29,
  MR_Word STATE_VARIABLE_MaybeDetism_0_52,
  MR_Word * STATE_VARIABLE_MaybeDetism_53,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_54,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_55,
  MR_Word STATE_VARIABLE_UsedModules_0_56,
  MR_Word * STATE_VARIABLE_UsedModules_57,
  MR_Word * Specs_33)
{
  MR_bool succeeded;

  if ((MaybeWithInst0_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeWithInst_28 = MaybeWithInst0_27;
    *MaybePredOrFunc_26 = MaybePredOrFunc0_25;
    *ExtraModes_29 = (MR_Word) ((MR_Unsigned) 0U);
    *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeDetism_53 = STATE_VARIABLE_MaybeDetism_0_52;
    *STATE_VARIABLE_EquivTypeInfo_55 = STATE_VARIABLE_EquivTypeInfo_0_54;
    *STATE_VARIABLE_UsedModules_57 = STATE_VARIABLE_UsedModules_0_56;
  }
  else
  {
    MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(1, MaybeWithInst0_27, 0))));
    MR_Word WithInst_35;
    MR_Word STATE_VARIABLE_EquivTypeInfo_1_58;
    MR_Word Var_125;
    MR_Word PredOrFunc_39;
    MR_Word ExtraModes0_40;
    MR_Word DetPrime_42;
    MR_Word GroundInstInfo_37;
    MR_Word HOInst_38;

    Var_125 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(InstEqvMap_20, Var_125, WithInst0_34, &WithInst_35, STATE_VARIABLE_EquivTypeInfo_0_54, &STATE_VARIABLE_EquivTypeInfo_1_58, STATE_VARIABLE_UsedModules_0_56, STATE_VARIABLE_UsedModules_57);
    succeeded = ((MR_tag((MR_Word) WithInst_35)) == (MR_Integer) 1);
    if (succeeded)
    {
      GroundInstInfo_37 = ((MR_Word) ((MR_hl_field(1, WithInst_35, 1))));
      succeeded = (GroundInstInfo_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HOInst_38 = (MR_Word) (MR_body((MR_Word) (GroundInstInfo_37), (MR_Integer) 1));
        PredOrFunc_39 = ((MR_Unsigned) ((MR_hl_field(0, HOInst_38, 0))) & (MR_Integer) 1);
        ExtraModes0_40 = ((MR_Word) ((MR_hl_field(0, HOInst_38, 1))));
        DetPrime_42 = ((MR_Unsigned) ((MR_hl_field(0, HOInst_38, 3))) & (MR_Integer) 7);
        if ((MaybePredOrFunc0_25 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word Var_124 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc0_25, 0))));

          succeeded = (PredOrFunc_39 == Var_124);
        }
      }
    }
    if (succeeded)
    {
      MR_Word RecordedPredOrFunc_43;
      MR_Word ItemType_44;
      MR_Integer Arity_45;
      MR_Word ItemName_46;
      MR_Word OrigItemId_47;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeDetism_53 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DetPrime_42));
      }
      *MaybeWithInst_28 = (MR_Word) ((MR_Unsigned) 0U);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredOrFunc_26 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredOrFunc_39));
      }
      *ExtraModes_29 = ExtraModes0_40;
      if ((MaybePredOrFunc0_25 == (MR_Word) ((MR_Unsigned) 0U)))
        RecordedPredOrFunc_43 = (MR_Integer) 0;
      else
        RecordedPredOrFunc_43 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc0_25, 0))));
      ItemType_44 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(RecordedPredOrFunc_43);
      Arity_45 = (MR_Integer) (PredFormArity_22);
      {
        ItemName_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemName_46, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(0, ItemName_46, 1) = ((MR_Box) (Arity_45));
      }
      {
        OrigItemId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OrigItemId_47, 0) = (MR_Box) ((MR_Unsigned) (ItemType_44));
        MR_hl_field(0, OrigItemId_47, 1) = ((MR_Box) (ItemName_46));
      }
      recompilation__record_uses__record_expanded_item_3_p_0(OrigItemId_47, STATE_VARIABLE_EquivTypeInfo_1_58, STATE_VARIABLE_EquivTypeInfo_55);
      *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String DeclStr_48;
      MR_Word PredOrFuncPieces_49;
      MR_Word Pieces_50;
      MR_Word Spec_51;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_99;
      MR_Word Var_104;
      MR_Word Var_109;
      MR_Word Var_110;

      *ExtraModes_29 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybePredOrFunc_26 = MaybePredOrFunc0_25;
      *MaybeWithInst_28 = MaybeWithInst0_27;
      switch (DeclType_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          DeclStr_48 = (MR_String) "mode declaration";
          break;
        case (MR_Integer) 0:
          DeclStr_48 = (MR_String) "declaration";
          break;
      }
      if ((*MaybePredOrFunc_26 == (MR_Word) ((MR_Unsigned) 0U)))
        PredOrFuncPieces_49 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_62;
        MR_Word PredOrFunc_122 = ((MR_Word) ((MR_hl_field(1, *MaybePredOrFunc_26, 0))));

        {
          Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_62, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_122));
        }
        {
          PredOrFuncPieces_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredOrFuncPieces_49, 0) = ((MR_Box) (Var_62));
          MR_hl_field(1, PredOrFuncPieces_49, 1) = ((MR_Box) (*ExtraModes_29));
        }
      }
      {
        Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_68, 1) = ((MR_Box) (DeclStr_48));
      }
      {
        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[95])));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[93])));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_76, 1) = ((MR_Box) (PredName_21));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[101])));
      }
      Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_49, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[104])));
      Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[102])), Var_99);
      Var_93 = parse_tree__error_spec__color_as_correct_1_f_0(Var_94);
      Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[52])));
      Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
      Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[50])), Var_109);
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_104);
      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_92);
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_49, Var_74);
      Pieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_73);
      {
        Spec_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_with_inst\'/18"));
        MR_hl_field(0, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_51, 3) = ((MR_Box) (Context_23));
        MR_hl_field(0, Spec_51, 4) = ((MR_Box) (Pieces_50));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_33 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_51));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_EquivTypeInfo_55 = STATE_VARIABLE_EquivTypeInfo_1_58;
      *STATE_VARIABLE_MaybeDetism_53 = STATE_VARIABLE_MaybeDetism_0_52;
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
  MR_Word InstEqvMap_11,
  MR_Word ExpandedInstCtors_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Inst0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst0_13, 0)))) == (MR_Integer) 0)));
    MR_Word SymName_17;
    MR_Word ArgInsts_18;
    MR_Word Var_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(3, Inst0_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        SymName_17 = ((MR_Word) ((MR_hl_field(0, Var_29, 0))));
        ArgInsts_18 = ((MR_Word) ((MR_hl_field(0, Var_29, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word InstCtor_19;
      MR_Integer Var_30;

      Var_30 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_18);
      {
        InstCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InstCtor_19, 0) = ((MR_Box) (SymName_17));
        MR_hl_field(0, InstCtor_19, 1) = ((MR_Box) (Var_30));
      }
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_19)), ExpandedInstCtors_12);
      if (succeeded)
      {
        *Inst_14 = Inst0_13;
        *STATE_VARIABLE_UsedModules_28 = STATE_VARIABLE_UsedModules_0_27;
        *STATE_VARIABLE_EquivTypeInfo_26 = STATE_VARIABLE_EquivTypeInfo_0_25;
      }
      else
      {
        MR_Word EqvInstParams_21;
        MR_Word EqvInst_22;
        MR_Word EqvInstBody_20;
        MR_Box conv0_EqvInstBody_20;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), InstEqvMap_11, ((MR_Box) (InstCtor_19)), &conv0_EqvInstBody_20);
        if (succeeded)
        {
          EqvInstBody_20 = ((MR_Word) (conv0_EqvInstBody_20));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          EqvInstParams_21 = ((MR_Word) ((MR_hl_field(0, EqvInstBody_20, 0))));
          EqvInst_22 = ((MR_Word) ((MR_hl_field(0, EqvInstBody_20, 1))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Inst1_23;
          MR_Word InstCtorItem_24;
          MR_Word Var_31;
          MR_Word STATE_VARIABLE_EquivTypeInfo_1_32;
          MR_Word Var_34;
          MR_Word next_value_of_ExpandedInstCtors_12;
          MR_Word next_value_of_Inst0_13;
          MR_Word next_value_of_STATE_VARIABLE_EquivTypeInfo_0_25;

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(EqvInstParams_21, ArgInsts_18, EqvInst_22, &Inst1_23);
          InstCtorItem_24 = recompilation__item_types__inst_ctor_to_recomp_item_name_1_f_0(InstCtor_19);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            MR_hl_field(0, Var_31, 1) = ((MR_Box) (InstCtorItem_24));
          }
          recompilation__record_uses__record_expanded_item_3_p_0(Var_31, STATE_VARIABLE_EquivTypeInfo_0_25, &STATE_VARIABLE_EquivTypeInfo_1_32);
          Var_34 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ExpandedInstCtors_12, ((MR_Box) (InstCtor_19)));
          // direct tailcall eliminated
          ;
          next_value_of_ExpandedInstCtors_12 = Var_34;
          next_value_of_Inst0_13 = Inst1_23;
          next_value_of_STATE_VARIABLE_EquivTypeInfo_0_25 = STATE_VARIABLE_EquivTypeInfo_1_32;
          ExpandedInstCtors_12 = next_value_of_ExpandedInstCtors_12;
          Inst0_13 = next_value_of_Inst0_13;
          STATE_VARIABLE_EquivTypeInfo_0_25 = next_value_of_STATE_VARIABLE_EquivTypeInfo_0_25;
          continue;
        }
        else
        {
          *Inst_14 = Inst0_13;
          *STATE_VARIABLE_UsedModules_28 = STATE_VARIABLE_UsedModules_0_27;
          *STATE_VARIABLE_EquivTypeInfo_26 = STATE_VARIABLE_EquivTypeInfo_0_25;
        }
      }
    }
    else
    {
      *Inst_14 = Inst0_13;
      *STATE_VARIABLE_UsedModules_28 = STATE_VARIABLE_UsedModules_0_27;
      *STATE_VARIABLE_EquivTypeInfo_26 = STATE_VARIABLE_EquivTypeInfo_0_25;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_2(
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
  MR_Word conv11_Type_15;
  MR_Word conv10_Changed_16;
  MR_Word conv9_STATE_VARIABLE_TVarSet_22;
  MR_Word conv8_STATE_VARIABLE_EquivTypeInfo_24;
  MR_Word conv7_STATE_VARIABLE_UsedModules_26;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_Type_15, &conv10_Changed_16, ((MR_Word) (wrapper_arg_4)), &conv9_STATE_VARIABLE_TVarSet_22, ((MR_Word) (wrapper_arg_6)), &conv8_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) (wrapper_arg_8)), &conv7_STATE_VARIABLE_UsedModules_26);
  *wrapper_arg_2 = ((MR_Box) (conv11_Type_15));
  *wrapper_arg_3 = ((MR_Box) (conv10_Changed_16));
  *wrapper_arg_5 = ((MR_Box) (conv9_STATE_VARIABLE_TVarSet_22));
  *wrapper_arg_7 = ((MR_Box) (conv8_STATE_VARIABLE_EquivTypeInfo_24));
  *wrapper_arg_9 = ((MR_Box) (conv7_STATE_VARIABLE_UsedModules_26));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_25;
  MR_Word conv0_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_TypeAndMode_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_TypeAndMode_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_25));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_27));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_TypeAndMaybeModes_0_22,
  MR_Word * STATE_VARIABLE_TypeAndMaybeModes_23,
  MR_Word STATE_VARIABLE_TVarSet_0_24,
  MR_Word * STATE_VARIABLE_TVarSet_25,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_26,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_TypeAndMaybeModes_0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_TypeAndMaybeModes_23 = STATE_VARIABLE_TypeAndMaybeModes_0_22;
        *STATE_VARIABLE_TVarSet_25 = STATE_VARIABLE_TVarSet_0_24;
        *STATE_VARIABLE_EquivTypeInfo_27 = STATE_VARIABLE_EquivTypeInfo_0_26;
        *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Types0_17 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TypeAndMaybeModes_0_22, 0))));
        MR_Word Types_18;
        MR_Word Var_30;
        MR_Word Var_19;
        MR_Box conv14_STATE_VARIABLE_TVarSet_25;
        MR_Box conv13_STATE_VARIABLE_EquivTypeInfo_27;
        MR_Box conv12_STATE_VARIABLE_UsedModules_29;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_2));
          MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_30, 3) = ((MR_Box) (MaybeRecord_11));
          MR_hl_field(0, Var_30, 4) = ((MR_Box) (TypeEqvMap_12));
        }
        mercury__list__map2_foldl3_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_changed_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_30, Types0_17, &Types_18, &Var_19, ((MR_Box) (STATE_VARIABLE_TVarSet_0_24)), &conv14_STATE_VARIABLE_TVarSet_25, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_26)), &conv13_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Box) (STATE_VARIABLE_UsedModules_0_28)), &conv12_STATE_VARIABLE_UsedModules_29);
        *STATE_VARIABLE_TVarSet_25 = ((MR_Word) (conv14_STATE_VARIABLE_TVarSet_25));
        *STATE_VARIABLE_EquivTypeInfo_27 = ((MR_Word) (conv13_STATE_VARIABLE_EquivTypeInfo_27));
        *STATE_VARIABLE_UsedModules_29 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_29));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_TypeAndMaybeModes_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Types_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypesAndModes0_20 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_TypeAndMaybeModes_0_22, 0))));
        MR_Word TypesAndModes_21;
        MR_Word Var_35;
        MR_Box conv6_STATE_VARIABLE_TVarSet_25;
        MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_27;
        MR_Box conv4_STATE_VARIABLE_UsedModules_29;

        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_types_and_maybe_modes_10_p_0_1));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) (MaybeRecord_11));
          MR_hl_field(0, Var_35, 4) = ((MR_Box) (TypeEqvMap_12));
        }
        mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_35, TypesAndModes0_20, &TypesAndModes_21, ((MR_Box) (STATE_VARIABLE_TVarSet_0_24)), &conv6_STATE_VARIABLE_TVarSet_25, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_26)), &conv5_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Box) (STATE_VARIABLE_UsedModules_0_28)), &conv4_STATE_VARIABLE_UsedModules_29);
        *STATE_VARIABLE_TVarSet_25 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_25));
        *STATE_VARIABLE_EquivTypeInfo_27 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_27));
        *STATE_VARIABLE_UsedModules_29 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_29));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_TypeAndMaybeModes_23 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (TypesAndModes_21));
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__equiv_type__pred_decl_error_prefix_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word PredName_5)
{
  MR_Word PrefixPieces_6;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  {
    Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_10, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_4));
  }
  {
    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_12, 1) = ((MR_Box) (PredName_5));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[92])));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
  }
  {
    PrefixPieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrefixPieces_6, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[91])));
    MR_hl_field(1, PrefixPieces_6, 1) = ((MR_Box) (Var_9));
  }
  return PrefixPieces_6;
}

static void MR_CALL 
parse_tree__equiv_type__try_to_pair_extra_types_and_modes_6_p_0(
  MR_Word PredOrFunc_7,
  MR_Word PredName_8,
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

    parse_tree__equiv_type__pair_extra_types_and_modes_3_p_0(ExtraTypes_10, ExtraModes_11, &ExtraTypesAndModes_15);
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
      MR_hl_field(3, Var_137, 1) = ((MR_Box) (PredName_8));
    }
    {
      Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_137));
      MR_hl_field(1, Var_136, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[92])));
    }
    {
      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
      MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
    }
    {
      PrefixPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PrefixPieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_2[91])));
      MR_hl_field(1, PrefixPieces_16, 1) = ((MR_Box) (Var_134));
    }
    succeeded = (ExtraTypes_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word Var_19;
      MR_Word Var_30;
      MR_Word Var_31;

      Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[72])));
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
      Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[68])), Var_30);
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

        Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[82])));
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[80])), Var_59);
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

        Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[88])));
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
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[30])));
        }
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
        }
        Var_106 = parse_tree__error_spec__color_as_inconsistent_1_f_0(Var_107);
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[20])));
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[50])), Var_105);
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, Var_100);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[90])), Var_90);
        Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_85);
        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_2[86])), Var_79);
        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_16, Var_71);
      }
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.try_to_pair_extra_types_and_modes\'/6"));
      MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_124, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
parse_tree__equiv_type__pair_extra_types_and_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type.pair_extra_types_and_modes\'/3", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type.pair_extra_types_and_modes\'/3", (MR_String) "list length mismatch");
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
      parse_tree__equiv_type__pair_extra_types_and_modes_3_p_0(Var_20, Modes_17, &TypesAndModes_18);
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
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Cs0_13,
  MR_Word * Cs_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word UnivCs0_18 = ((MR_Word) ((MR_hl_field(0, Cs0_13, 0))));
  MR_Word ExistCs0_19 = ((MR_Word) ((MR_hl_field(0, Cs0_13, 1))));
  MR_Word UnivCs_20;
  MR_Word ExistCs_21;
  MR_Word STATE_VARIABLE_TVarSet_1_28;
  MR_Word STATE_VARIABLE_EquivTypeInfo_1_29;
  MR_Word STATE_VARIABLE_UsedModules_1_30;
  MR_Word Var_31;
  MR_Box conv6_STATE_VARIABLE_TVarSet_1_28;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_1_29;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_30;
  MR_Box conv9_STATE_VARIABLE_TVarSet_23;
  MR_Box conv8_STATE_VARIABLE_EquivTypeInfo_25;
  MR_Box conv7_STATE_VARIABLE_UsedModules_27;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (TypeEqvMap_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_31, UnivCs0_18, &UnivCs_20, ((MR_Box) (STATE_VARIABLE_TVarSet_0_22)), &conv6_STATE_VARIABLE_TVarSet_1_28, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_24)), &conv5_STATE_VARIABLE_EquivTypeInfo_1_29, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_1_30);
  STATE_VARIABLE_TVarSet_1_28 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_1_28));
  STATE_VARIABLE_EquivTypeInfo_1_29 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_1_29));
  STATE_VARIABLE_UsedModules_1_30 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_30));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_31, ExistCs0_19, &ExistCs_21, ((MR_Box) (STATE_VARIABLE_TVarSet_1_28)), &conv9_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_1_29)), &conv8_STATE_VARIABLE_EquivTypeInfo_25, ((MR_Box) (STATE_VARIABLE_UsedModules_1_30)), &conv7_STATE_VARIABLE_UsedModules_27);
  *STATE_VARIABLE_TVarSet_23 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_23));
  *STATE_VARIABLE_EquivTypeInfo_25 = ((MR_Word) (conv8_STATE_VARIABLE_EquivTypeInfo_25));
  *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Cs_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word Type0_14,
  MR_Word * Type_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_TVarSet_0_21,
  MR_Word * STATE_VARIABLE_TVarSet_22,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_23,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26)
{
  MR_Word Var_20;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_12, TypeEqvMap_13, (MR_Word) ((MR_Unsigned) 0U), Type0_14, Type_15, Changed_16, &Var_20, STATE_VARIABLE_TVarSet_0_21, STATE_VARIABLE_TVarSet_22, STATE_VARIABLE_EquivTypeInfo_0_23, STATE_VARIABLE_EquivTypeInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_TVarSet_0_9,
  MR_Word * STATE_VARIABLE_TVarSet_10,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_11,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_UsedModules_14 = STATE_VARIABLE_UsedModules_0_13;
    *STATE_VARIABLE_EquivTypeInfo_12 = STATE_VARIABLE_EquivTypeInfo_0_11;
    *STATE_VARIABLE_TVarSet_10 = STATE_VARIABLE_TVarSet_0_9;
    *HeadVar__8_8 = HeadVar__7_7;
  }
  else
  {
    MR_Word HeadType0_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word TailTypes0_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word HeadType_42;
    MR_Word HeadChanged_43;
    MR_Word HeadCirc_44;
    MR_Word TailTypes_45;
    MR_Word TailChanged_46;
    MR_Word STATE_VARIABLE_TVarSet_1_55;
    MR_Word STATE_VARIABLE_EquivTypeInfo_1_56;
    MR_Word STATE_VARIABLE_UsedModules_1_57;
    MR_Word STATE_VARIABLE_Circ_1_58;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadType0_34, &HeadType_42, &HeadChanged_43, &HeadCirc_44, STATE_VARIABLE_TVarSet_0_9, &STATE_VARIABLE_TVarSet_1_55, STATE_VARIABLE_EquivTypeInfo_0_11, &STATE_VARIABLE_EquivTypeInfo_1_56, STATE_VARIABLE_UsedModules_0_13, &STATE_VARIABLE_UsedModules_1_57);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), HeadCirc_44, HeadVar__7_7, &STATE_VARIABLE_Circ_1_58);
    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TailTypes0_35, &TailTypes_45, &TailChanged_46, STATE_VARIABLE_Circ_1_58, HeadVar__8_8, STATE_VARIABLE_TVarSet_1_55, STATE_VARIABLE_TVarSet_10, STATE_VARIABLE_EquivTypeInfo_1_56, STATE_VARIABLE_EquivTypeInfo_12, STATE_VARIABLE_UsedModules_1_57, STATE_VARIABLE_UsedModules_14);
    succeeded = (HeadChanged_43 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (TailChanged_46 == (MR_Integer) 1);
    if (succeeded)
    {
      *HeadVar__6_6 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadType_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailTypes_45));
      }
    }
    else
    {
      *HeadVar__6_6 = (MR_Integer) 0;
      *HeadVar__5_5 = HeadVar__4_4;
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
  MR_Word MaybeRecord_14,
  MR_Word TypeEqvMap_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_TVarSet_0_41,
  MR_Word * STATE_VARIABLE_TVarSet_42,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_43,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_42 = STATE_VARIABLE_TVarSet_0_41;
        *STATE_VARIABLE_EquivTypeInfo_44 = STATE_VARIABLE_EquivTypeInfo_0_43;
        *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(1, Type0_17, 0))));
        MR_Word TArgs0_27 = ((MR_Word) ((MR_hl_field(1, Type0_17, 1))));
        MR_Word TArgs_28;
        MR_Word ArgsChanged_29;
        MR_Word Circ0_30;
        MR_Integer Arity_31;
        MR_Word TypeCtor_32;
        MR_Word Var_47;
        MR_Word STATE_VARIABLE_TVarSet_1_48;
        MR_Word STATE_VARIABLE_EquivTypeInfo_1_49;
        MR_Word STATE_VARIABLE_UsedModules_1_50;
        MR_Word Kind_69 = ((MR_Word) ((MR_hl_field(1, Type0_17, 2))));
        MR_Word AlreadyExpanded_85;
        MR_Word NewCirc_86;
        MR_Word Args0_89;
        MR_Word Body0_90;
        MR_Word Renaming_91;
        MR_Word STATE_VARIABLE_TVarSet_1_100;
        MR_Word EqvTypeBody_87;
        MR_Word EqvTVarSet_88;
        MR_Box conv0_EqvTypeBody_87;

        Var_47 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, TArgs0_27, &TArgs_28, &ArgsChanged_29, Var_47, &Circ0_30, STATE_VARIABLE_TVarSet_0_41, &STATE_VARIABLE_TVarSet_1_48, STATE_VARIABLE_EquivTypeInfo_0_43, &STATE_VARIABLE_EquivTypeInfo_1_49, STATE_VARIABLE_UsedModules_0_45, &STATE_VARIABLE_UsedModules_1_50);
        Arity_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TArgs_28);
        {
          TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_32, 0) = ((MR_Box) (SymName_26));
          MR_hl_field(0, TypeCtor_32, 1) = ((MR_Box) (Arity_31));
        }
        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_32)), TypeCtorsAlreadyExpanded_16);
        if (succeeded)
        {
          AlreadyExpanded_85 = (MR_Integer) 1;
          NewCirc_86 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_32)));
        }
        else
        {
          AlreadyExpanded_85 = (MR_Integer) 0;
          NewCirc_86 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), TypeEqvMap_15, ((MR_Box) (TypeCtor_32)), &conv0_EqvTypeBody_87);
        if (succeeded)
        {
          EqvTypeBody_87 = ((MR_Word) (conv0_EqvTypeBody_87));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          EqvTVarSet_88 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_87, 0))));
          Args0_89 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_87, 1))));
          Body0_90 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_87, 2))));
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(STATE_VARIABLE_TVarSet_1_48, EqvTVarSet_88, &STATE_VARIABLE_TVarSet_1_100, &Renaming_91);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ0_30);
          if (succeeded)
            succeeded = (AlreadyExpanded_85 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Args_92;
          MR_Word Body1_93;
          MR_Word TypeCtorItem_94;
          MR_Word Subst_95;
          MR_Word Body_96;
          MR_Word STATE_VARIABLE_UsedModules_1_101;
          MR_Word Var_102;
          MR_Word STATE_VARIABLE_EquivTypeInfo_1_103;
          MR_Word Var_105;
          MR_Word Var_97;

          parse_tree__equiv_type__maybe_record_type_ctor_sym_name_use_4_p_0(MaybeRecord_14, TypeCtor_32, STATE_VARIABLE_UsedModules_1_50, &STATE_VARIABLE_UsedModules_1_101);
          *Changed_19 = (MR_Integer) 1;
          mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), Args0_89, Renaming_91, &Args_92);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_91, Body0_90, &Body1_93);
          TypeCtorItem_94 = recompilation__item_types__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_32);
          {
            Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_102, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_102, 1) = ((MR_Box) (TypeCtorItem_94));
          }
          recompilation__record_uses__record_expanded_item_3_p_0(Var_102, STATE_VARIABLE_EquivTypeInfo_1_49, &STATE_VARIABLE_EquivTypeInfo_1_103);
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_92, TArgs_28, &Subst_95);
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_95, Body1_93, &Body_96);
          {
            Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_105, 0) = ((MR_Box) (TypeCtor_32));
            MR_hl_field(1, Var_105, 1) = ((MR_Box) (TypeCtorsAlreadyExpanded_16));
          }
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_14, TypeEqvMap_15, Var_105, Body_96, Type_18, &Var_97, Circ_20, STATE_VARIABLE_TVarSet_1_100, STATE_VARIABLE_TVarSet_42, STATE_VARIABLE_EquivTypeInfo_1_103, STATE_VARIABLE_EquivTypeInfo_44, STATE_VARIABLE_UsedModules_1_101, STATE_VARIABLE_UsedModules_46);
        }
        else
        {
          switch (ArgsChanged_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word SymName_98 = ((MR_Word) ((MR_hl_field(0, TypeCtor_32, 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (SymName_98));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TArgs_28));
                  MR_hl_field(1, base, 2) = ((MR_Box) (Kind_69));
                }
              }
              break;
            case (MR_Integer) 0:
              *Type_18 = Type0_17;
              break;
          }
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewCirc_86, Circ0_30, Circ_20);
          *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_1_50;
          *STATE_VARIABLE_EquivTypeInfo_44 = STATE_VARIABLE_EquivTypeInfo_1_49;
          *STATE_VARIABLE_TVarSet_42 = STATE_VARIABLE_TVarSet_1_48;
          *Changed_19 = ArgsChanged_29;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_42 = STATE_VARIABLE_TVarSet_0_41;
        *STATE_VARIABLE_EquivTypeInfo_44 = STATE_VARIABLE_EquivTypeInfo_0_43;
        *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_17, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_58;
            MR_Word Kind_70 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));
            MR_Word Args0_71 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word Args_72;

            Var_58 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_71, &Args_72, Changed_19, Var_58, Circ_20, STATE_VARIABLE_TVarSet_0_41, STATE_VARIABLE_TVarSet_42, STATE_VARIABLE_EquivTypeInfo_0_43, STATE_VARIABLE_EquivTypeInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Args_72));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Kind_70));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_34 = ((MR_Unsigned) ((MR_hl_field(3, Type0_17, 1))) & (MR_Integer) 1);
            MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));
            MR_Word HOInstInfo_36 = ((MR_Word) ((MR_hl_field(3, Type0_17, 3))));
            MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(3, Type0_17, 4))) & (MR_Integer) 3);
            MR_Word Args_38;
            MR_Word Var_54;

            Var_54 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_35, &Args_38, Changed_19, Var_54, Circ_20, STATE_VARIABLE_TVarSet_0_41, STATE_VARIABLE_TVarSet_42, STATE_VARIABLE_EquivTypeInfo_0_43, STATE_VARIABLE_EquivTypeInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_34));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Args_38));
                  MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_36));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_37));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_62;
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word Kind_74 = ((MR_Word) ((MR_hl_field(3, Type0_17, 3))));
            MR_Word Args0_75 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));
            MR_Word Args_76;

            Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_75, &Args_76, Changed_19, Var_62, Circ_20, STATE_VARIABLE_TVarSet_0_41, STATE_VARIABLE_TVarSet_42, STATE_VARIABLE_EquivTypeInfo_0_43, STATE_VARIABLE_EquivTypeInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_73));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Args_76));
                  MR_hl_field(3, base, 3) = ((MR_Box) (Kind_74));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word RawType0_39 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word RawType_40;
            MR_Word Kind_77 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));

            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, RawType0_39, &RawType_40, Changed_19, Circ_20, STATE_VARIABLE_TVarSet_0_41, STATE_VARIABLE_TVarSet_42, STATE_VARIABLE_EquivTypeInfo_0_43, STATE_VARIABLE_EquivTypeInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (RawType_40));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Kind_77));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__maybe_record_type_ctor_sym_name_use_4_p_0(
  MR_Word MaybeRecord_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_UsedModules_0_11,
  MR_Word * STATE_VARIABLE_UsedModules_12)
{
  if ((MaybeRecord_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UsedModules_12 = STATE_VARIABLE_UsedModules_0_11;
  else
  {
    MR_Word Visibility_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybeRecord_5, 0))) & (MR_Integer) 1);
    MR_Word TypeCtorSymName_9 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, 0))));

    parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_8, TypeCtorSymName_9, STATE_VARIABLE_UsedModules_0_11, STATE_VARIABLE_UsedModules_12);
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstEqvMap_22;

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstEqvMap_22));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeEqvMap_35;

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_imp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeEqvMap_35));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0(
  MR_Word ParseTreeModuleSrc_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12)
{
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 8))));
  MR_Word Var_17;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_10;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_12;

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), Var_14, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_9)), &conv1_STATE_VARIABLE_TypeEqvMap_10);
  *STATE_VARIABLE_TypeEqvMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_10));
  Var_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 9))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[4]), Var_17, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_11)), &conv3_STATE_VARIABLE_InstEqvMap_12);
  *STATE_VARIABLE_InstEqvMap_12 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_12));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____circ_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____circ_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____circ_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____eqv_type_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____inst_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____inst_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____type_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____type_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__equiv_type__init(void)
{
}

void mercury__parse_tree__equiv_type__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_circ_types_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_inst_eqv_map_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_type_eqv_map_0);
}

void mercury__parse_tree__equiv_type__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__equiv_type__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.equiv_type.
