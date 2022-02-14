/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-2022-02-14
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0;

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

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_0;

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_ordinal_ordered_maybe_changed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_maybe_changed_0[2];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_changed_0[2];

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

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__2377__1_1_f_0(
  MR_Word LambdaHeadVar__1_227);

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__1725__1_1_f_0(
  MR_Word LambdaHeadVar__1_34);

static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_decl_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word Decl0_15,
  MR_Word * Decl_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_50,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_51,
  MR_Word STATE_VARIABLE_UsedModules_0_52,
  MR_Word * STATE_VARIABLE_UsedModules_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

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
  MR_Word STATE_VARIABLE_RecompInfo_0_52,
  MR_Word * STATE_VARIABLE_RecompInfo_53,
  MR_Word STATE_VARIABLE_UsedModules_0_54,
  MR_Word * STATE_VARIABLE_UsedModules_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

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
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1075__1__ho27_12_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1078__1__ho28_12_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho29_14_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1130__1__ho32_12_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho30_14_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1133__1__ho31_12_p_0(
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
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_trans_opt_11_p_0(
  MR_Word _ModuleName_12,
  MR_Word _TypeEqvMap_13,
  MR_Word _InstEqvMap_14,
  MR_Word STATE_VARIABLE_ParseTreeTransOpt_0_19,
  MR_Word * STATE_VARIABLE_ParseTreeTransOpt_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word STATE_VARIABLE_ParseTreeTransOpt_0_19,
  MR_Word * STATE_VARIABLE_ParseTreeTransOpt_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_plain_opt_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreePlainOpt_15,
  MR_Word * ParseTreePlainOpt_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_54,
  MR_Word * STATE_VARIABLE_RecompInfo_55,
  MR_Word STATE_VARIABLE_UsedModules_0_56,
  MR_Word * STATE_VARIABLE_UsedModules_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59);

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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_54_95_95_91_52_93_95_48_14_p_0(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_116_101_109_95_116_121_112_101_95_115_112_101_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Item0_16,
  MR_Word * Item_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho14_13_p_0(
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__921__1__ho34_12_p_0(
  MR_Word HeadVar__2_85,
  MR_Word HeadVar__3_86,
  MR_Word HeadVar__4_87,
  MR_Word HeadVar__5_88,
  MR_Word HeadVar__6_89,
  MR_Word * HeadVar__7_90,
  MR_Word HeadVar__8_91,
  MR_Word * HeadVar__9_92,
  MR_Word HeadVar__10_93,
  MR_Word * HeadVar__11_94,
  MR_Word * HeadVar__12_95);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_general__ho33_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22);

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
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
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
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Ctors0_13,
  MR_Word * Ctors_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27);

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
parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0_2(
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
parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0_1(
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
parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreeInt2_15,
  MR_Word * ParseTreeInt2_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

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
  MR_Word STATE_VARIABLE_RecompInfo_0_54,
  MR_Word * STATE_VARIABLE_RecompInfo_55,
  MR_Word STATE_VARIABLE_UsedModules_0_56,
  MR_Word * STATE_VARIABLE_UsedModules_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59);

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
  MR_Word STATE_VARIABLE_RecompInfo_0_63,
  MR_Word * STATE_VARIABLE_RecompInfo_64,
  MR_Word STATE_VARIABLE_UsedModules_0_65,
  MR_Word * STATE_VARIABLE_UsedModules_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68);

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
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12);

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
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0(
  MR_Word AncestorIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0(
  MR_Word ParseTreeInt0_8,
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
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
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
parse_tree__equiv_type__replace_in_event_specs_9_p_0(
  MR_Word TypeEqvMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_4,
  MR_Word * STATE_VARIABLE_RecompInfo_5,
  MR_Word STATE_VARIABLE_UsedModules_0_6,
  MR_Word * STATE_VARIABLE_UsedModules_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
parse_tree__equiv_type__replace_in_event_attrs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_4,
  MR_Word * STATE_VARIABLE_RecompInfo_5,
  MR_Word STATE_VARIABLE_UsedModules_0_6,
  MR_Word * STATE_VARIABLE_UsedModules_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

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
  MR_Word STATE_VARIABLE_RecompInfo_0_74,
  MR_Word * STATE_VARIABLE_RecompInfo_75,
  MR_Word STATE_VARIABLE_UsedModules_0_76,
  MR_Word * STATE_VARIABLE_UsedModules_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79);

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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_49_56_95_95_91_52_93_95_48_14_p_0(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_109_112_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word FPInfo0_16,
  MR_Word * FPInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word TVarSet_12,
  MR_Word SharingDomain0_13,
  MR_Word * SharingDomain_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_21,
  MR_Word STATE_VARIABLE_UsedModules_0_22,
  MR_Word * STATE_VARIABLE_UsedModules_23);

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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_7,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10);

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
  MR_Word STATE_VARIABLE_RecompInfo_0_40,
  MR_Word * STATE_VARIABLE_RecompInfo_41,
  MR_Word STATE_VARIABLE_UsedModules_0_42,
  MR_Word * STATE_VARIABLE_UsedModules_43,
  MR_Word * HeadVar__11_11);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word STATE_VARIABLE_Types_0_21,
  MR_Word * STATE_VARIABLE_Types_22,
  MR_Word * Changed_16,
  MR_Word * ContainsCirc_17,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_53_95_95_91_50_44_32_51_93_95_48_14_p_0(
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
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho16_13_p_0(
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
parse_tree__equiv_type__replace_in_list_loop__ho19_14_p_0(
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
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word InstEqvMap_12,
  MR_Word Info0_13,
  MR_Word * Info_14,
  MR_Word STATE_VARIABLE_ExpandedItems_0_32,
  MR_Word * STATE_VARIABLE_ExpandedItems_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35);

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
parse_tree__equiv_type__replace_in_list_loop__ho22_14_p_0(
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
  MR_Word STATE_VARIABLE_RecompInfo_0_39,
  MR_Word * STATE_VARIABLE_RecompInfo_40,
  MR_Word STATE_VARIABLE_UsedModules_0_41,
  MR_Word * STATE_VARIABLE_UsedModules_42,
  MR_Word * Specs_20);

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
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
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word ClassInterface0_15,
  MR_Word * ClassInterface_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_21,
  MR_Word STATE_VARIABLE_UsedModules_0_22,
  MR_Word * STATE_VARIABLE_UsedModules_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

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
parse_tree__equiv_type__replace_in_list_loop__ho24_14_p_0(
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
  MR_Word STATE_VARIABLE_RecompInfo_0_47,
  MR_Word * STATE_VARIABLE_RecompInfo_48,
  MR_Word STATE_VARIABLE_UsedModules_0_49,
  MR_Word * STATE_VARIABLE_UsedModules_50,
  MR_Word * Specs_20);

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
  MR_Word MaybeRecord_24,
  MR_Word PredName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word TypeEqvMap_28,
  MR_Word InstEqvMap_29,
  MR_Word ClassContext0_30,
  MR_Word * ClassContext_31,
  MR_Word TypesAndModes0_32,
  MR_Word * TypesAndModes_33,
  MR_Word STATE_VARIABLE_TVarSet_0_82,
  MR_Word * STATE_VARIABLE_TVarSet_83,
  MR_Word MaybeWithType0_35,
  MR_Word * MaybeWithType_36,
  MR_Word MaybeWithInst0_37,
  MR_Word * MaybeWithInst_38,
  MR_Word STATE_VARIABLE_MaybeDetism_0_84,
  MR_Word * STATE_VARIABLE_MaybeDetism_85,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_86,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_87,
  MR_Word STATE_VARIABLE_UsedModules_0_88,
  MR_Word * STATE_VARIABLE_UsedModules_89,
  MR_Word * STATE_VARIABLE_Specs_90);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
  MR_Word InstEqvMap_20,
  MR_Word PredName_21,
  MR_Integer OrigArity_22,
  MR_Word Context_23,
  MR_Word DeclType_24,
  MR_Word * ExtraModes_25,
  MR_Word MaybePredOrFunc0_26,
  MR_Word * MaybePredOrFunc_27,
  MR_Word MaybeWithInst0_28,
  MR_Word * MaybeWithInst_29,
  MR_Word STATE_VARIABLE_MaybeDetism_0_49,
  MR_Word * STATE_VARIABLE_MaybeDetism_50,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_51,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word * Specs_33);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word InstEqvMap_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_15,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_16,
  MR_Word STATE_VARIABLE_UsedModules_0_17,
  MR_Word * STATE_VARIABLE_UsedModules_18);

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
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0_1(
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
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_TypeAndModes_0_17,
  MR_Word * STATE_VARIABLE_TypeAndModes_18,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

static void MR_CALL 
parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
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
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
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
parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0_1(
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
parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_Constraints_0_17,
  MR_Word * STATE_VARIABLE_Constraints_18,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24);

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
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
  MR_Word MaybeRecord_14,
  MR_Word TypeEqvMap_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_TVarSet_0_42,
  MR_Word * STATE_VARIABLE_TVarSet_43,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_44,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_45,
  MR_Word STATE_VARIABLE_UsedModules_0_46,
  MR_Word * STATE_VARIABLE_UsedModules_47);

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
parse_tree__equiv_type__replace_type_ctor_18_p_0(
  MR_Word MaybeRecord_19,
  MR_Word TypeEqvMap_20,
  MR_Word TypeCtorsAlreadyExpanded_21,
  MR_Word Type0_22,
  MR_Word TypeCtor_23,
  MR_Word TArgs_24,
  MR_Word Kind_25,
  MR_Word * Type_26,
  MR_Word STATE_VARIABLE_Changed_0_47,
  MR_Word * STATE_VARIABLE_Changed_48,
  MR_Word STATE_VARIABLE_Circ_0_49,
  MR_Word * STATE_VARIABLE_Circ_50,
  MR_Word STATE_VARIABLE_TVarSet_0_51,
  MR_Word * STATE_VARIABLE_TVarSet_52,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_53,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56);

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
parse_tree__equiv_type____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_changed_0_0_10001(
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


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[25][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[46][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[2][7];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[3][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[8][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_8[2][12];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_9[1][16];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_10[6][8];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_11[2][6];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[25][3] = {
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
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[0])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[1])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[2])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[3])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[4])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_10[5])),
    ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_direct_int1_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_indirect_int2_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_int_for_opt_spec_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_11[0])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_11[1])),
    ((MR_Box) (parse_tree__equiv_type__build_eqv_maps_in_parse_tree_plain_opt_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[46][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: circular equivalence type"))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because its expansion contains"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have its equivalences fully expanded,"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the circular equivalence type"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the circular equivalence types"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: circular type expansion"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the representation of solver type"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected higher order"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type after \140with_type\140."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[15])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "annotations are incompatible;"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "they specify"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but only"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected higher order "))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst after \140with_inst\140."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[15])))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[2][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
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

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[3][13] = {
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
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
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
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[8][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
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
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_10[6][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
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

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
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

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

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

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "no_change",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_ordinal_ordered_maybe_changed_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_maybe_changed_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_maybe_changed_0_0
};

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____maybe_changed_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "maybe_changed",
  { parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_maybe_changed_0 },
  { parse_tree__equiv_type__parse_tree__equiv_type__enum_ordinal_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_changed_0,

};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0 = {
  (MR_String) "dont_record_sym_name_use",
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

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

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

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__2377__1_1_f_0(
  MR_Word LambdaHeadVar__1_227)
{
  MR_Word LambdaHeadVar__2_228;

  {
    LambdaHeadVar__2_228 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_228, 0) = ((MR_Box) (LambdaHeadVar__1_227));
  }
  return LambdaHeadVar__2_228;
}

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__1725__1_1_f_0(
  MR_Word LambdaHeadVar__1_34)
{
  MR_Word LambdaHeadVar__2_35;

  {
    LambdaHeadVar__2_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_35, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_35, 1) = ((MR_Box) (LambdaHeadVar__1_34));
  }
  return LambdaHeadVar__2_35;
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer Var_12 = (MR_Integer) (Var_11);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__equiv_type____Compare____maybe_changed_0_0(
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

MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

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
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Sel0_13, (MR_Integer) 0))));
    MR_Word Type_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_43;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_10, TypeEqvMap_11, (MR_Word) ((MR_Unsigned) 0U), Type0_19, &Type_20, &Var_21, &Var_43, TVarSet_12, &Var_22, STATE_VARIABLE_EquivTypeInfo_0_23, STATE_VARIABLE_EquivTypeInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Sel_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_20));
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

  parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Sel_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_26);
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
  MR_Word SSA0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
  MR_Word SSB0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
  MR_Word SSA_15;
  MR_Word SSB_16;
  MR_Word STATE_VARIABLE_EquivTypeInfo_23_23;
  MR_Word STATE_VARIABLE_UsedModules_24_24;
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SSA0_13, (MR_Integer) 0))));
  MR_Word Sel0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SSA0_13, (MR_Integer) 1))));
  MR_Word Sel_40;
  MR_Word Var_41;
  MR_Word Var_64;
  MR_Word Sel0_65;
  MR_Word Sel_66;
  MR_Box conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
  MR_Box conv3_STATE_VARIABLE_UsedModules_24_24;
  MR_Box conv6_STATE_VARIABLE_EquivTypeInfo_20;
  MR_Box conv5_STATE_VARIABLE_UsedModules_22;

  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (MaybeRecord_10));
    MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(MR_mktag(0), Var_41, 5) = ((MR_Box) (TVarSet_12));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Sel0_39, &Sel_40, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_19)), &conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (STATE_VARIABLE_UsedModules_0_21)), &conv3_STATE_VARIABLE_UsedModules_24_24);
  STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) (conv4_STATE_VARIABLE_EquivTypeInfo_23_23));
  STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_24_24));
  {
    SSA_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SSA_15, 0) = ((MR_Box) (Var_38));
    MR_hl_field(MR_mktag(0), SSA_15, 1) = ((MR_Box) (Sel_40));
  }
  Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SSB0_14, (MR_Integer) 0))));
  Sel0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SSB0_14, (MR_Integer) 1))));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_41, Sel0_65, &Sel_66, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_23_23)), &conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (STATE_VARIABLE_UsedModules_24_24)), &conv5_STATE_VARIABLE_UsedModules_22);
  *STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) (conv6_STATE_VARIABLE_EquivTypeInfo_20));
  *STATE_VARIABLE_UsedModules_22 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_22));
  {
    SSB_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SSB_16, 0) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(0), SSB_16, 1) = ((MR_Box) (Sel_66));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_5 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SSA_15));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SSB_16));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word TypeAndMode0_13,
  MR_Word * TypeAndMode_14,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  if (((MR_tag((MR_Word) TypeAndMode0_13)) == (MR_Integer) 1))
  {
    MR_Word Mode_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_13, (MR_Integer) 1))));
    MR_Word Type0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_13, (MR_Integer) 0))));
    MR_Word Type_36;
    MR_Word Var_22;
    MR_Word Var_51;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), Type0_35, &Type_36, &Var_22, &Var_51, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TypeAndMode_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Mode_21));
    }
  }
  else
  {
    MR_Word Type0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAndMode0_13, (MR_Integer) 0))));
    MR_Word Type_19;
    MR_Word Var_20;
    MR_Word Var_70;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), Type0_18, &Type_19, &Var_20, &Var_70, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *TypeAndMode_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Type_19));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_decl_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word Decl0_15,
  MR_Word * Decl_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_50,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_51,
  MR_Word STATE_VARIABLE_UsedModules_0_52,
  MR_Word * STATE_VARIABLE_UsedModules_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  if (((MR_tag((MR_Word) Decl0_15)) == (MR_Integer) 1))
  {
    MR_Word ModeInfo0_41 = (MR_Word) (MR_body((MR_Word) (Decl0_15), (MR_Integer) 1));
    MR_Word MaybePredOrFunc0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_41, (MR_Integer) 1))));
    MR_Word Modes0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_41, (MR_Integer) 2))));
    MR_Word ExtraModes_44;
    MR_Word MaybePredOrFunc_45;
    MR_Word Modes_46;
    MR_Word ModeInfo_49;
    MR_Integer Var_56;
    MR_Word PredName_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_41, (MR_Integer) 0))));
    MR_Word WithInst0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_41, (MR_Integer) 3))));
    MR_Word MaybeDetism0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_41, (MR_Integer) 4))));
    MR_Word InstVarSet_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_41, (MR_Integer) 5))));
    MR_Word Context_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_41, (MR_Integer) 6))));
    MR_Word WithInst_69;
    MR_Word MaybeDetism_70;
    MR_Word NewSpecs_71;

    Var_56 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_43);
    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(InstEqvMap_14, PredName_64, Var_56, Context_68, (MR_Integer) 1, &ExtraModes_44, MaybePredOrFunc0_42, &MaybePredOrFunc_45, WithInst0_65, &WithInst_69, MaybeDetism0_66, &MaybeDetism_70, STATE_VARIABLE_EquivTypeInfo_0_50, STATE_VARIABLE_EquivTypeInfo_51, STATE_VARIABLE_UsedModules_0_52, STATE_VARIABLE_UsedModules_53, &NewSpecs_71);
    if ((ExtraModes_44 == (MR_Word) ((MR_Unsigned) 0U)))
      Modes_46 = Modes0_43;
    else
      Modes_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_43, ExtraModes_44);
    *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_71, STATE_VARIABLE_Specs_0_54);
    {
      ModeInfo_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeInfo_49, 0) = ((MR_Box) (PredName_64));
      MR_hl_field(MR_mktag(0), ModeInfo_49, 1) = ((MR_Box) (MaybePredOrFunc_45));
      MR_hl_field(MR_mktag(0), ModeInfo_49, 2) = ((MR_Box) (Modes_46));
      MR_hl_field(MR_mktag(0), ModeInfo_49, 3) = ((MR_Box) (WithInst_69));
      MR_hl_field(MR_mktag(0), ModeInfo_49, 4) = ((MR_Box) (MaybeDetism_70));
      MR_hl_field(MR_mktag(0), ModeInfo_49, 5) = ((MR_Box) (InstVarSet_67));
      MR_hl_field(MR_mktag(0), ModeInfo_49, 6) = ((MR_Box) (Context_68));
    }
    *Decl_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ModeInfo_49)));
  }
  else
  {
    MR_Word PredOrFuncInfo0_20 = (MR_Word) ((MR_Word) (Decl0_15));
    MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 0))));
    MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 2))));
    MR_Word WithType0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 3))));
    MR_Word WithInst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 4))));
    MR_Word MaybeDetism0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 5))));
    MR_Word TVarSet0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 6))));
    MR_Word InstVarSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 7))));
    MR_Word ExistQVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 8))));
    MR_Word Purity_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 9))) & (MR_Integer) 3);
    MR_Word ClassContext0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 10))));
    MR_Word Context_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_20, (MR_Integer) 11))));
    MR_Word ClassContext_33;
    MR_Word TypesAndModes_34;
    MR_Word TVarSet_35;
    MR_Word WithType_36;
    MR_Word WithInst_37;
    MR_Word MaybeDetism_38;
    MR_Word NewSpecs_39;
    MR_Word PredOrFuncInfo_40;

    parse_tree__equiv_type__replace_in_pred_type_23_p_0(MaybeRecord_12, PredName_21, PredOrFunc_22, Context_32, TypeEqvMap_13, InstEqvMap_14, ClassContext0_31, &ClassContext_33, TypesAndModes0_23, &TypesAndModes_34, TVarSet0_27, &TVarSet_35, WithType0_24, &WithType_36, WithInst0_25, &WithInst_37, MaybeDetism0_26, &MaybeDetism_38, STATE_VARIABLE_EquivTypeInfo_0_50, STATE_VARIABLE_EquivTypeInfo_51, STATE_VARIABLE_UsedModules_0_52, STATE_VARIABLE_UsedModules_53, &NewSpecs_39);
    *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_39, STATE_VARIABLE_Specs_0_54);
    {
      PredOrFuncInfo_40 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 0) = ((MR_Box) (PredName_21));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 2) = ((MR_Box) (TypesAndModes_34));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 3) = ((MR_Box) (WithType_36));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 4) = ((MR_Box) (WithInst_37));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 5) = ((MR_Box) (MaybeDetism_38));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 6) = ((MR_Box) (TVarSet_35));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 7) = ((MR_Box) (InstVarSet_28));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 8) = ((MR_Box) (ExistQVars_29));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 9) = (MR_Box) ((MR_Unsigned) (Purity_30));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 10) = ((MR_Box) (ClassContext_33));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_40, 11) = ((MR_Box) (Context_32));
    }
    *Decl_16 = (MR_Word) ((MR_Word) (PredOrFuncInfo_40));
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
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_13, (MR_Integer) 0))));
  MR_Word ArgTypes0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_13, (MR_Integer) 1))));
  MR_Word ArgTypes_20;
  MR_Word Var_50;
  MR_Word Var_21;
  MR_Word Var_22;

  Var_50 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), ArgTypes0_19, &ArgTypes_20, &Var_21, Var_50, &Var_22, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_18));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypes_20));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_15,
  MR_Word * Info_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_52,
  MR_Word * STATE_VARIABLE_RecompInfo_53,
  MR_Word STATE_VARIABLE_UsedModules_0_54,
  MR_Word * STATE_VARIABLE_UsedModules_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_15, (MR_Integer) 0))));
  MR_Word ArgTypeVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_15, (MR_Integer) 1))));
  MR_Word TypeRepn0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_15, (MR_Integer) 2))));
  MR_Word TVarSet0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_15, (MR_Integer) 3))));
  MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_15, (MR_Integer) 4))));
  MR_Word SeqNum_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_15, (MR_Integer) 5))));
  MR_Integer Arity_26;
  MR_Word UsedTypeCtors0_27;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word TypeRepn_38;
  MR_Word ItemId_51;
  MR_Word Var_70;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_21, &Arity_26);
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, SymName_20, STATE_VARIABLE_RecompInfo_0_52, &UsedTypeCtors0_27);
  switch (MR_tag((MR_Word) TypeRepn0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TypeRepn_38 = TypeRepn0_22;
        TVarSet_33 = TVarSet0_23;
        UsedTypeCtors_34 = UsedTypeCtors0_27;
        *STATE_VARIABLE_UsedModules_55 = STATE_VARIABLE_UsedModules_0_54;
        *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeRepn0_22, (MR_Integer) 0))));
        MR_Word TypeCtor_29;
        MR_Word Type_30;
        MR_Word Circ_32;
        MR_Word CircTypes_35;
        MR_Word Var_64;
        MR_Word Var_31;

        {
          TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_29, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(MR_mktag(0), TypeCtor_29, 1) = ((MR_Box) (Arity_26));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (TypeCtor_29));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_13, TypeEqvMap_14, Var_64, Type0_28, &Type_30, &Var_31, &Circ_32, TVarSet0_23, &TVarSet_33, UsedTypeCtors0_27, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_54, STATE_VARIABLE_UsedModules_55);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_32, &CircTypes_35);
        if ((CircTypes_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
        else
        {
          MR_Word Var_68;
          MR_Word Pieces_82;
          MR_Word Var_85;
          MR_Word Var_86;

          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (TypeCtor_29));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[17])));
          }
          {
            Pieces_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[14])));
            MR_hl_field(MR_mktag(1), Pieces_82, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_68, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(MR_mktag(1), Var_68, 3) = ((MR_Box) (Context_24));
            MR_hl_field(MR_mktag(1), Var_68, 4) = ((MR_Box) (Pieces_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_57 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
          }
        }
        {
          TypeRepn_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TypeRepn_38, 0) = ((MR_Box) (Type_30));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SuperTypeCtor0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeRepn0_22, (MR_Integer) 0))));
        MR_Integer SuperTypeCtorArity_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SuperTypeCtor0_39, (MR_Integer) 1))));
        MR_Word VoidTypes_42;
        MR_Word SuperType0_43;
        MR_Word SuperType_44;
        MR_Word SuperTypeCtor_46;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word TypeCtor_72;
        MR_Word Circ_73;
        MR_Word CircTypes_74;
        MR_Word Var_45;

        Var_58 = parse_tree__builtin_lib_types__void_type_0_f_0();
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SuperTypeCtorArity_41, ((MR_Box) (Var_58)), &VoidTypes_42);
        parse_tree__prog_type__construct_type_3_p_0(SuperTypeCtor0_39, VoidTypes_42, &SuperType0_43);
        {
          TypeCtor_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_72, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(MR_mktag(0), TypeCtor_72, 1) = ((MR_Box) (Arity_26));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (TypeCtor_72));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_13, TypeEqvMap_14, Var_59, SuperType0_43, &SuperType_44, &Var_45, &Circ_73, TVarSet0_23, &TVarSet_33, UsedTypeCtors0_27, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_54, STATE_VARIABLE_UsedModules_55);
        parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_44, &SuperTypeCtor_46);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_73, &CircTypes_74);
        if ((CircTypes_74 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
        else
        {
          MR_Word Var_63;

          Var_63 = parse_tree__equiv_type__report_circular_eqv_type_2_f_0(TypeCtor_72, Context_24);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_57 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_56));
          }
        }
        {
          TypeRepn_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), TypeRepn_38, 0) = ((MR_Box) (SuperTypeCtor_46));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        TypeRepn_38 = TypeRepn0_22;
        TVarSet_33 = TVarSet0_23;
        UsedTypeCtors_34 = UsedTypeCtors0_27;
        *STATE_VARIABLE_UsedModules_55 = STATE_VARIABLE_UsedModules_0_54;
        *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
      }
      break;
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (SymName_20));
    MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Arity_26));
  }
  {
    ItemId_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_51, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ItemId_51, 1) = ((MR_Box) (Var_70));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_51, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_52, STATE_VARIABLE_RecompInfo_53);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_21));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeRepn_38));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_24));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_25));
  }
}

static MR_Word MR_CALL 
parse_tree__equiv_type__report_circular_eqv_type_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word Context_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Var_10;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (TypeCtor_4));
  }
  {
    Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[17])));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[14])));
    MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_10));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_6, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
    MR_hl_field(MR_mktag(1), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(MR_mktag(1), Spec_6, 3) = ((MR_Box) (Context_5));
    MR_hl_field(MR_mktag(1), Spec_6, 4) = ((MR_Box) (Pieces_7));
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
    MR_Word SolverDefn0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_19, (MR_Integer) 0))));
    MR_Word SrcDefns0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_19, (MR_Integer) 1))));
    MR_Word SolverDefn_28;
    MR_Word MaybeIntDefn0_33;
    MR_Word MaybeImpDefn0_34;
    MR_Word MaybeIntDefn_35;
    MR_Word MaybeImpDefn_36;
    MR_Word SrcDefns_37;
    MR_Word STATE_VARIABLE_RecompInfo_95_95;
    MR_Word STATE_VARIABLE_UsedModules_96_96;
    MR_Word STATE_VARIABLE_Specs_97_97;
    MR_Word STATE_VARIABLE_RecompInfo_99_99;
    MR_Word STATE_VARIABLE_UsedModules_100_100;
    MR_Word STATE_VARIABLE_Specs_101_101;

    if (((MR_tag((MR_Word) SolverDefn0_24)) == (MR_Integer) 0))
    {
      SolverDefn_28 = SolverDefn0_24;
      STATE_VARIABLE_RecompInfo_95_95 = STATE_VARIABLE_RecompInfo_0_62;
      STATE_VARIABLE_UsedModules_96_96 = STATE_VARIABLE_UsedModules_0_64;
      STATE_VARIABLE_Specs_97_97 = STATE_VARIABLE_Specs_0_66;
    }
    else
    {
      MR_Word MaybeAbstractDefn0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefn0_24, (MR_Integer) 0))));
      MR_Word ItemSolverDefn0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefn0_24, (MR_Integer) 1))));
      MR_Word ItemSolverDefn_31;
      MR_Word SolverSpecs_32;

      parse_tree__equiv_type__replace_in_type_defn_info_general__ho4_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, InstEqvMap_18, ItemSolverDefn0_30, &ItemSolverDefn_31, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_95_95, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_96_96, &SolverSpecs_32);
      STATE_VARIABLE_Specs_97_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SolverSpecs_32, STATE_VARIABLE_Specs_0_66);
      {
        SolverDefn_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SolverDefn_28, 0) = ((MR_Box) (MaybeAbstractDefn0_29));
        MR_hl_field(MR_mktag(1), SolverDefn_28, 1) = ((MR_Box) (ItemSolverDefn_31));
      }
    }
    MaybeIntDefn0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_25, (MR_Integer) 0))));
    MaybeImpDefn0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_25, (MR_Integer) 1))));
    parse_tree__equiv_type__replace_in_maybe__ho8_13_p_0(ModuleName_14, MaybeRecordInt_15, TypeEqvMap_17, InstEqvMap_18, MaybeIntDefn0_33, &MaybeIntDefn_35, STATE_VARIABLE_RecompInfo_95_95, &STATE_VARIABLE_RecompInfo_99_99, STATE_VARIABLE_UsedModules_96_96, &STATE_VARIABLE_UsedModules_100_100, STATE_VARIABLE_Specs_97_97, &STATE_VARIABLE_Specs_101_101);
    parse_tree__equiv_type__replace_in_maybe__ho7_13_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, InstEqvMap_18, MaybeImpDefn0_34, &MaybeImpDefn_36, STATE_VARIABLE_RecompInfo_99_99, STATE_VARIABLE_RecompInfo_63, STATE_VARIABLE_UsedModules_100_100, STATE_VARIABLE_UsedModules_65, STATE_VARIABLE_Specs_101_101, STATE_VARIABLE_Specs_67);
    {
      SrcDefns_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcDefns_37, 0) = ((MR_Box) (MaybeIntDefn_35));
      MR_hl_field(MR_mktag(0), SrcDefns_37, 1) = ((MR_Box) (MaybeImpDefn_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CheckedDefn_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SolverDefn_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcDefns_37));
    }
  }
  else
  {
    MR_Word StdDefn0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn0_19, (MR_Integer) 0))));
    MR_Word StdDefn_43;
    MR_Word IntDefns0_57;
    MR_Word ImpDefns0_58;
    MR_Word ImpForeignEnums0_59;
    MR_Word IntDefns_60;
    MR_Word ImpDefns_61;
    MR_Word STATE_VARIABLE_RecompInfo_81_81;
    MR_Word STATE_VARIABLE_UsedModules_82_82;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word STATE_VARIABLE_RecompInfo_85_85;
    MR_Word STATE_VARIABLE_UsedModules_86_86;
    MR_Word STATE_VARIABLE_Specs_87_87;
    MR_Word SrcDefns0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn0_19, (MR_Integer) 1))));
    MR_Word SrcDefns_115;

    switch (MR_tag((MR_Word) StdDefn0_38)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Status_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn0_38, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ItemEqvDefn0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn0_38, (MR_Integer) 1))));
          MR_Word ItemEqvDefn_41;
          MR_Word EqvSpecs_42;

          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemEqvDefn0_40, &ItemEqvDefn_41, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_81_81, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_82_82, &EqvSpecs_42);
          STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EqvSpecs_42, STATE_VARIABLE_Specs_0_66);
          {
            StdDefn_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_43, 0) = (MR_Box) ((MR_Unsigned) (Status_39));
            MR_hl_field(MR_mktag(0), StdDefn_43, 1) = ((MR_Box) (ItemEqvDefn_41));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemSubDefn0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn0_38, (MR_Integer) 1))));
          MR_Word ItemSubDefn_45;
          MR_Word SubSpecs_46;
          MR_Word Status_108 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StdDefn0_38, (MR_Integer) 0))) & (MR_Integer) 3);

          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemSubDefn0_44, &ItemSubDefn_45, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_81_81, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_82_82, &SubSpecs_46);
          STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SubSpecs_46, STATE_VARIABLE_Specs_0_66);
          {
            StdDefn_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StdDefn_43, 0) = (MR_Box) ((MR_Unsigned) (Status_108));
            MR_hl_field(MR_mktag(1), StdDefn_43, 1) = ((MR_Box) (ItemSubDefn_45));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemDuDefn0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_38, (MR_Integer) 1))));
          MR_String HeadCtor_48 = ((MR_String) ((MR_hl_field(MR_mktag(2), StdDefn0_38, (MR_Integer) 2))));
          MR_Word TailCtors_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_38, (MR_Integer) 3))));
          MR_Word CJCsMaybeDefnOrEnum_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_38, (MR_Integer) 4))));
          MR_Word ItemDuDefn_51;
          MR_Word DuSpecs_52;
          MR_Word Status_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StdDefn0_38, (MR_Integer) 0))) & (MR_Integer) 3);

          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemDuDefn0_47, &ItemDuDefn_51, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_81_81, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_82_82, &DuSpecs_52);
          STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DuSpecs_52, STATE_VARIABLE_Specs_0_66);
          {
            StdDefn_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), StdDefn_43, 0) = (MR_Box) ((MR_Unsigned) (Status_109));
            MR_hl_field(MR_mktag(2), StdDefn_43, 1) = ((MR_Box) (ItemDuDefn_51));
            MR_hl_field(MR_mktag(2), StdDefn_43, 2) = ((MR_Box) (HeadCtor_48));
            MR_hl_field(MR_mktag(2), StdDefn_43, 3) = ((MR_Box) (TailCtors_49));
            MR_hl_field(MR_mktag(2), StdDefn_43, 4) = ((MR_Box) (CJCsMaybeDefnOrEnum_50));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdDefn0_38, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CJCsMaybeDefn_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_38, (MR_Integer) 3))));
              MR_Word Status_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn0_38, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ItemDuDefn0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_38, (MR_Integer) 2))));
              MR_Word ItemDuDefn_112;
              MR_Word DuSpecs_113;

              parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, ItemDuDefn0_111, &ItemDuDefn_112, STATE_VARIABLE_RecompInfo_0_62, &STATE_VARIABLE_RecompInfo_81_81, STATE_VARIABLE_UsedModules_0_64, &STATE_VARIABLE_UsedModules_82_82, &DuSpecs_113);
              STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DuSpecs_113, STATE_VARIABLE_Specs_0_66);
              {
                StdDefn_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), StdDefn_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), StdDefn_43, 1) = (MR_Box) ((MR_Unsigned) (Status_110));
                MR_hl_field(MR_mktag(3), StdDefn_43, 2) = ((MR_Box) (ItemDuDefn_112));
                MR_hl_field(MR_mktag(3), StdDefn_43, 3) = ((MR_Box) (CJCsMaybeDefn_53));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              StdDefn_43 = StdDefn0_38;
              STATE_VARIABLE_RecompInfo_81_81 = STATE_VARIABLE_RecompInfo_0_62;
              STATE_VARIABLE_UsedModules_82_82 = STATE_VARIABLE_UsedModules_0_64;
              STATE_VARIABLE_Specs_83_83 = STATE_VARIABLE_Specs_0_66;
            }
            break;
        }
        break;
    }
    IntDefns0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_114, (MR_Integer) 0))));
    ImpDefns0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_114, (MR_Integer) 1))));
    ImpForeignEnums0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_114, (MR_Integer) 2))));
    parse_tree__equiv_type__replace_in_list__ho6_13_p_0(ModuleName_14, MaybeRecordInt_15, TypeEqvMap_17, InstEqvMap_18, IntDefns0_57, &IntDefns_60, STATE_VARIABLE_RecompInfo_81_81, &STATE_VARIABLE_RecompInfo_85_85, STATE_VARIABLE_UsedModules_82_82, &STATE_VARIABLE_UsedModules_86_86, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_87_87);
    parse_tree__equiv_type__replace_in_list__ho5_13_p_0(ModuleName_14, MaybeRecordImp_16, TypeEqvMap_17, InstEqvMap_18, ImpDefns0_58, &ImpDefns_61, STATE_VARIABLE_RecompInfo_85_85, STATE_VARIABLE_RecompInfo_63, STATE_VARIABLE_UsedModules_86_86, STATE_VARIABLE_UsedModules_65, STATE_VARIABLE_Specs_87_87, STATE_VARIABLE_Specs_67);
    {
      SrcDefns_115 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcDefns_115, 0) = ((MR_Box) (IntDefns_60));
      MR_hl_field(MR_mktag(0), SrcDefns_115, 1) = ((MR_Box) (ImpDefns_61));
      MR_hl_field(MR_mktag(0), SrcDefns_115, 2) = ((MR_Box) (ImpForeignEnums0_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CheckedDefn_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdDefn_43));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SrcDefns_115));
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
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 5))));
  MR_Integer Arity_29;
  MR_Word TypeCtor_30;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemId_35;
  MR_Word Var_42;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  {
    TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_30, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), TypeCtor_30, 1) = ((MR_Box) (Arity_29));
  }
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_36, &UsedTypeCtors0_31);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_101_113_118_95_95_91_51_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeCtor_30, Context_27, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_22);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ItemId_35, 1) = ((MR_Box) (Var_42));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_35, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_36, STATE_VARIABLE_RecompInfo_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 5))));
  MR_Integer Arity_29;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemId_35;
  MR_Word Var_42;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_36, &UsedTypeCtors0_31);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_115_117_98_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_22);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ItemId_35, 1) = ((MR_Box) (Var_42));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_35, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_36, STATE_VARIABLE_RecompInfo_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_105_110_102_111_95_103_101_110_101_114_97_108_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 5))));
  MR_Integer Arity_29;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemId_35;
  MR_Word Var_42;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_36, &UsedTypeCtors0_31);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_22);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ItemId_35, 1) = ((MR_Box) (Var_42));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_35, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_36, STATE_VARIABLE_RecompInfo_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_28));
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
    MR_Word Item0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItem0_19, (MR_Integer) 0))));
    MR_Word Item_25;
    MR_Word ItemSpecs_26;

    parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1075__1__ho27_12_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Item0_24, &Item_25, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, &ItemSpecs_26);
    if ((ItemSpecs_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItem_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Item_25));
      }
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      *STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_26, STATE_VARIABLE_Specs_0_33);
      *MaybeItem_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1075__1__ho27_12_p_0(
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
  parse_tree__equiv_type__replace_in_type_defn_info_general__ho33_12_p_0(HeadVar__2_132, HeadVar__3_133, HeadVar__4_134, HeadVar__5_135, HeadVar__6_136, HeadVar__7_137, HeadVar__8_138, HeadVar__9_139, HeadVar__10_140, HeadVar__11_141, HeadVar__12_142);
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
    MR_Word Item0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItem0_19, (MR_Integer) 0))));
    MR_Word Item_25;
    MR_Word ItemSpecs_26;

    parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1078__1__ho28_12_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Item0_24, &Item_25, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, &ItemSpecs_26);
    if ((ItemSpecs_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItem_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Item_25));
      }
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      *STATE_VARIABLE_Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_26, STATE_VARIABLE_Specs_0_33);
      *MaybeItem_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1078__1__ho28_12_p_0(
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
  parse_tree__equiv_type__replace_in_type_defn_info_general__ho33_12_p_0(HeadVar__2_159, HeadVar__3_160, HeadVar__4_161, HeadVar__5_162, HeadVar__6_163, HeadVar__7_164, HeadVar__8_165, HeadVar__9_166, HeadVar__10_167, HeadVar__11_168, HeadVar__12_169);
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

  parse_tree__equiv_type__replace_in_list_loop__ho29_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho29_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1130__1__ho32_12_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1130__1__ho32_12_p_0(
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
  parse_tree__equiv_type__replace_in_type_defn_info_general__ho33_12_p_0(HeadVar__2_249, HeadVar__3_250, HeadVar__4_251, HeadVar__5_252, HeadVar__6_253, HeadVar__7_254, HeadVar__8_255, HeadVar__9_256, HeadVar__10_257, HeadVar__11_258, HeadVar__12_259);
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

  parse_tree__equiv_type__replace_in_list_loop__ho30_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho30_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1133__1__ho31_12_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_type_ctor_checked_defn__1133__1__ho31_12_p_0(
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
  parse_tree__equiv_type__replace_in_type_defn_info_general__ho33_12_p_0(HeadVar__2_276, HeadVar__3_277, HeadVar__4_278, HeadVar__5_279, HeadVar__6_280, HeadVar__7_281, HeadVar__8_282, HeadVar__9_283, HeadVar__10_284, HeadVar__11_285, HeadVar__12_286);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_general__ho4_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 5))));
  MR_Integer Arity_29;
  MR_Word TypeCtor_30;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemId_35;
  MR_Word Var_42;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  {
    TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_30, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), TypeCtor_30, 1) = ((MR_Box) (Arity_29));
  }
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_36, &UsedTypeCtors0_31);
  parse_tree__equiv_type__replace_in_type_defn_solver_14_p_0(MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, TypeCtor_30, Context_27, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_22);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ItemId_35, 1) = ((MR_Box) (Var_42));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_35, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_36, STATE_VARIABLE_RecompInfo_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_trans_opt_11_p_0(
  MR_Word _ModuleName_12,
  MR_Word _TypeEqvMap_13,
  MR_Word _InstEqvMap_14,
  MR_Word STATE_VARIABLE_ParseTreeTransOpt_0_19,
  MR_Word * STATE_VARIABLE_ParseTreeTransOpt_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(STATE_VARIABLE_ParseTreeTransOpt_0_19, STATE_VARIABLE_ParseTreeTransOpt_20, STATE_VARIABLE_RecompInfo_0_21, STATE_VARIABLE_RecompInfo_22, STATE_VARIABLE_UsedModules_0_23, STATE_VARIABLE_UsedModules_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word STATE_VARIABLE_ParseTreeTransOpt_0_19,
  MR_Word * STATE_VARIABLE_ParseTreeTransOpt_20,
  MR_Word STATE_VARIABLE_RecompInfo_0_21,
  MR_Word * STATE_VARIABLE_RecompInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  *STATE_VARIABLE_UsedModules_24 = STATE_VARIABLE_UsedModules_0_23;
  *STATE_VARIABLE_RecompInfo_22 = STATE_VARIABLE_RecompInfo_0_21;
  *STATE_VARIABLE_ParseTreeTransOpt_20 = STATE_VARIABLE_ParseTreeTransOpt_0_19;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_plain_opt_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreePlainOpt_15,
  MR_Word * ParseTreePlainOpt_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_54,
  MR_Word * STATE_VARIABLE_RecompInfo_55,
  MR_Word STATE_VARIABLE_UsedModules_0_56,
  MR_Word * STATE_VARIABLE_UsedModules_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
{
  MR_Word OptModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 0))));
  MR_Word OptModuleNameContext_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 1))));
  MR_Word UsedModuleNames_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 2))));
  MR_Word FIMSpecs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 3))));
  MR_Word TypeDefns0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 4))));
  MR_Word ForeignEnums_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 5))));
  MR_Word TypeClasses0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 8))));
  MR_Word Instances0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 9))));
  MR_Word PredDecls0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 10))));
  MR_Word ModeDecls0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 11))));
  MR_Word Clauses_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 12))));
  MR_Word ForeignProcs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 13))));
  MR_Word Promises_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 14))));
  MR_Word MarkerPragmas_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 15))));
  MR_Word TypeSpecs0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 16))));
  MR_Word UnusedArgs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 17))));
  MR_Word TermInfos_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 18))));
  MR_Word Term2Infos_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 19))));
  MR_Word Exceptions_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 20))));
  MR_Word Trailings_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 21))));
  MR_Word MMTablings_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 22))));
  MR_Word Sharings_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 23))));
  MR_Word Reuses_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 24))));
  MR_Word InstDefns_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 6))));
  MR_Word ModeDefns_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreePlainOpt_15, (MR_Integer) 7))));
  MR_Word TypeDefns_48;
  MR_Word TypeClasses_49;
  MR_Word Instances_50;
  MR_Word PredDecls_51;
  MR_Word ModeDecls_52;
  MR_Word TypeSpecs_53;
  MR_Word STATE_VARIABLE_RecompInfo_61_61;
  MR_Word STATE_VARIABLE_UsedModules_62_62;
  MR_Word STATE_VARIABLE_Specs_63_63;
  MR_Word STATE_VARIABLE_RecompInfo_66_66;
  MR_Word STATE_VARIABLE_UsedModules_67_67;
  MR_Word STATE_VARIABLE_Specs_68_68;
  MR_Word STATE_VARIABLE_RecompInfo_70_70;
  MR_Word STATE_VARIABLE_UsedModules_71_71;
  MR_Word STATE_VARIABLE_Specs_72_72;
  MR_Word STATE_VARIABLE_RecompInfo_74_74;
  MR_Word STATE_VARIABLE_UsedModules_75_75;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_Word STATE_VARIABLE_RecompInfo_78_78;
  MR_Word STATE_VARIABLE_UsedModules_79_79;
  MR_Word STATE_VARIABLE_Specs_80_80;

  parse_tree__equiv_type__replace_in_list__ho14_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, TypeDefns0_25, &TypeDefns_48, STATE_VARIABLE_RecompInfo_0_54, &STATE_VARIABLE_RecompInfo_61_61, STATE_VARIABLE_UsedModules_0_56, &STATE_VARIABLE_UsedModules_62_62, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_63_63);
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, TypeClasses0_29, &TypeClasses_49, STATE_VARIABLE_RecompInfo_61_61, &STATE_VARIABLE_RecompInfo_66_66, STATE_VARIABLE_UsedModules_62_62, &STATE_VARIABLE_UsedModules_67_67, STATE_VARIABLE_Specs_63_63, &STATE_VARIABLE_Specs_68_68);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, Instances0_30, &Instances_50, STATE_VARIABLE_RecompInfo_66_66, &STATE_VARIABLE_RecompInfo_70_70, STATE_VARIABLE_UsedModules_67_67, &STATE_VARIABLE_UsedModules_71_71, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_72_72);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, PredDecls0_31, &PredDecls_51, STATE_VARIABLE_RecompInfo_70_70, &STATE_VARIABLE_RecompInfo_74_74, STATE_VARIABLE_UsedModules_71_71, &STATE_VARIABLE_UsedModules_75_75, STATE_VARIABLE_Specs_72_72, &STATE_VARIABLE_Specs_76_76);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, ModeDecls0_32, &ModeDecls_52, STATE_VARIABLE_RecompInfo_74_74, &STATE_VARIABLE_RecompInfo_78_78, STATE_VARIABLE_UsedModules_75_75, &STATE_VARIABLE_UsedModules_79_79, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_80_80);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_57_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, TypeSpecs0_37, &TypeSpecs_53, STATE_VARIABLE_RecompInfo_78_78, STATE_VARIABLE_RecompInfo_55, STATE_VARIABLE_UsedModules_79_79, STATE_VARIABLE_UsedModules_57, STATE_VARIABLE_Specs_80_80, STATE_VARIABLE_Specs_59);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreePlainOpt_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptModuleName_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OptModuleNameContext_22));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (UsedModuleNames_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FIMSpecs_24));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TypeDefns_48));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ForeignEnums_26));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (InstDefns_46));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ModeDefns_47));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeClasses_49));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Instances_50));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (PredDecls_51));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ModeDecls_52));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Clauses_33));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ForeignProcs_34));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Promises_35));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (MarkerPragmas_36));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (TypeSpecs_53));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (UnusedArgs_38));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (TermInfos_39));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Term2Infos_40));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Exceptions_41));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Trailings_42));
    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (MMTablings_43));
    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Sharings_44));
    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Reuses_45));
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

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_54_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[9]), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_54_95_95_91_52_93_95_48_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_116_101_109_95_116_121_112_101_95_115_112_101_99_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_116_101_109_95_116_121_112_101_95_115_112_101_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Item0_16,
  MR_Word * Item_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_25,
  MR_Word * STATE_VARIABLE_RecompInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28,
  MR_Word * Specs_20)
{
  MR_bool succeeded;
  MR_Word TypeSpecInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item0_16, (MR_Integer) 0))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item0_16, (MR_Integer) 1))));
  MR_Word SeqNum_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Item0_16, (MR_Integer) 2))));
  MR_Word TypeSpecInfo_24;
  MR_Word PFUMM_43;
  MR_Word PredName_44;
  MR_Word NewName_45;
  MR_Word Subst0_46;
  MR_Word TVarSet0_47;
  MR_Word ItemIds0_48;
  MR_Word ExpandedItems0_50;
  MR_Word Subst_51;
  MR_Word TVarSet_52;
  MR_Word ExpandedItems_53;
  MR_Word ItemIds_54;

  *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
  PFUMM_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_21, (MR_Integer) 0))));
  PredName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_21, (MR_Integer) 1))));
  NewName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_21, (MR_Integer) 2))));
  Subst0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_21, (MR_Integer) 3))));
  TVarSet0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_21, (MR_Integer) 4))));
  ItemIds0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_21, (MR_Integer) 5))));
  succeeded = (STATE_VARIABLE_RecompInfo_0_25 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    MR_Word Var_57;

    succeeded = ((MR_tag((MR_Word) PredName_44)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredName_44, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_57);
    }
  }
  if (succeeded)
    ExpandedItems0_50 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      ExpandedItems0_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ExpandedItems0_50, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(1), ExpandedItems0_50, 1) = ((MR_Box) (ItemIds0_48));
    }
  parse_tree__equiv_type__replace_in_subst_10_p_0(MaybeRecord_13, TypeEqvMap_14, Subst0_46, &Subst_51, TVarSet0_47, &TVarSet_52, ExpandedItems0_50, &ExpandedItems_53, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
  if ((ExpandedItems_53 == (MR_Word) ((MR_Unsigned) 0U)))
    ItemIds_54 = ItemIds0_48;
  else
    ItemIds_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpandedItems_53, (MR_Integer) 1))));
  {
    TypeSpecInfo_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeSpecInfo_24, 0) = ((MR_Box) (PFUMM_43));
    MR_hl_field(MR_mktag(0), TypeSpecInfo_24, 1) = ((MR_Box) (PredName_44));
    MR_hl_field(MR_mktag(0), TypeSpecInfo_24, 2) = ((MR_Box) (NewName_45));
    MR_hl_field(MR_mktag(0), TypeSpecInfo_24, 3) = ((MR_Box) (Subst_51));
    MR_hl_field(MR_mktag(0), TypeSpecInfo_24, 4) = ((MR_Box) (TVarSet_52));
    MR_hl_field(MR_mktag(0), TypeSpecInfo_24, 5) = ((MR_Box) (ItemIds_54));
  }
  *STATE_VARIABLE_RecompInfo_26 = STATE_VARIABLE_RecompInfo_0_25;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Item_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeSpecInfo_24));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_22));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SeqNum_23));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho14_13_p_0(
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
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), RevItems_24, Items_20);
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__921__1__ho34_12_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_parse_tree_plain_opt__921__1__ho34_12_p_0(
  MR_Word HeadVar__2_85,
  MR_Word HeadVar__3_86,
  MR_Word HeadVar__4_87,
  MR_Word HeadVar__5_88,
  MR_Word HeadVar__6_89,
  MR_Word * HeadVar__7_90,
  MR_Word HeadVar__8_91,
  MR_Word * HeadVar__9_92,
  MR_Word HeadVar__10_93,
  MR_Word * HeadVar__11_94,
  MR_Word * HeadVar__12_95)
{
  parse_tree__equiv_type__replace_in_type_defn_info_general__ho33_12_p_0(HeadVar__2_85, HeadVar__3_86, HeadVar__4_87, HeadVar__5_88, HeadVar__6_89, HeadVar__7_90, HeadVar__8_91, HeadVar__9_92, HeadVar__10_93, HeadVar__11_94, HeadVar__12_95);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_general__ho33_12_p_0(
  MR_Word ModuleName_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeEqvMap_16,
  MR_Word InstEqvMap_17,
  MR_Word Info0_18,
  MR_Word * Info_19,
  MR_Word STATE_VARIABLE_RecompInfo_0_36,
  MR_Word * STATE_VARIABLE_RecompInfo_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39,
  MR_Word * Specs_22)
{
  MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 0))));
  MR_Word ArgTypeVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 1))));
  MR_Word TypeDefn0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 2))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 3))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 4))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_18, (MR_Integer) 5))));
  MR_Integer Arity_29;
  MR_Word TypeCtor_30;
  MR_Word UsedTypeCtors0_31;
  MR_Word TypeDefn_32;
  MR_Word TVarSet_33;
  MR_Word UsedTypeCtors_34;
  MR_Word ItemId_35;
  MR_Word Var_42;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), ArgTypeVars_24, &Arity_29);
  {
    TypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeCtor_30, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), TypeCtor_30, 1) = ((MR_Box) (Arity_29));
  }
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_14, SymName_23, STATE_VARIABLE_RecompInfo_0_36, &UsedTypeCtors0_31);
  parse_tree__equiv_type__replace_in_type_defn_14_p_0(MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, TypeCtor_30, Context_27, TypeDefn0_25, &TypeDefn_32, TVarSet0_26, &TVarSet_33, UsedTypeCtors0_31, &UsedTypeCtors_34, STATE_VARIABLE_UsedModules_0_38, STATE_VARIABLE_UsedModules_39, Specs_22);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_35, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ItemId_35, 1) = ((MR_Box) (Var_42));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_35, UsedTypeCtors_34, STATE_VARIABLE_RecompInfo_0_36, STATE_VARIABLE_RecompInfo_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_19 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_24));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_32));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_33));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_28));
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
        *TypeDefn_21 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSub_31)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DetailsSolver0_32 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_20), (MR_Integer) 2));
        MR_Word DetailsSolver_33;

        parse_tree__equiv_type__replace_in_type_defn_solver_14_p_0(MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, TypeCtor_18, Context_19, DetailsSolver0_32, &DetailsSolver_33, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37, STATE_VARIABLE_EquivTypeInfo_0_38, STATE_VARIABLE_EquivTypeInfo_39, STATE_VARIABLE_UsedModules_0_40, STATE_VARIABLE_UsedModules_41, Specs_25);
        *TypeDefn_21 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (DetailsSolver_33)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_20, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_20, (MR_Integer) 1))));
            MR_Word DetailsEqv_27;

            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_101_113_118_95_95_91_51_93_95_48_14_p_0(MaybeRecord_15, TypeEqvMap_16, TypeCtor_18, Context_19, DetailsEqv0_26, &DetailsEqv_27, STATE_VARIABLE_TVarSet_0_36, STATE_VARIABLE_TVarSet_37, STATE_VARIABLE_EquivTypeInfo_0_38, STATE_VARIABLE_EquivTypeInfo_39, STATE_VARIABLE_UsedModules_0_40, STATE_VARIABLE_UsedModules_41, Specs_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_21 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsEqv_27));
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
  MR_Word SuperType0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub0_20, (MR_Integer) 0))));
  MR_Word Ctors0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub0_20, (MR_Integer) 1))));
  MR_Word SuperType_28;
  MR_Word Ctors_30;
  MR_Word STATE_VARIABLE_TVarSet_37_37;
  MR_Word STATE_VARIABLE_EquivTypeInfo_38_38;
  MR_Word STATE_VARIABLE_UsedModules_39_39;
  MR_Word Var_29;
  MR_Word Var_57;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_15, TypeEqvMap_16, (MR_Word) ((MR_Unsigned) 0U), SuperType0_26, &SuperType_28, &Var_29, &Var_57, STATE_VARIABLE_TVarSet_0_31, &STATE_VARIABLE_TVarSet_37_37, STATE_VARIABLE_EquivTypeInfo_0_33, &STATE_VARIABLE_EquivTypeInfo_38_38, STATE_VARIABLE_UsedModules_0_35, &STATE_VARIABLE_UsedModules_39_39);
  parse_tree__equiv_type__replace_in_ctors_location_10_p_0(MaybeRecord_15, TypeEqvMap_16, Ctors0_27, &Ctors_30, STATE_VARIABLE_TVarSet_37_37, STATE_VARIABLE_TVarSet_32, STATE_VARIABLE_EquivTypeInfo_38_38, STATE_VARIABLE_EquivTypeInfo_34, STATE_VARIABLE_UsedModules_39_39, STATE_VARIABLE_UsedModules_36);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSub_21 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SuperType_28));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Ctors_30));
  }
  *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
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

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word Ctors0_13,
  MR_Word * Ctors_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_24,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word HeadCtor0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors0_13, (MR_Integer) 0))));
  MR_Word TailCtors0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors0_13, (MR_Integer) 1))));
  MR_Word HeadCtor_20;
  MR_Word TailCtors_21;
  MR_Word STATE_VARIABLE_TVarSet_28_28;
  MR_Word STATE_VARIABLE_EquivTypeInfo_29_29;
  MR_Word STATE_VARIABLE_UsedModules_30_30;
  MR_Word Var_31;
  MR_Box conv6_STATE_VARIABLE_TVarSet_23;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_25;
  MR_Box conv4_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(MaybeRecord_11, TypeEqvMap_12, HeadCtor0_18, &HeadCtor_20, STATE_VARIABLE_TVarSet_0_22, &STATE_VARIABLE_TVarSet_28_28, STATE_VARIABLE_EquivTypeInfo_0_24, &STATE_VARIABLE_EquivTypeInfo_29_29, STATE_VARIABLE_UsedModules_0_26, &STATE_VARIABLE_UsedModules_30_30);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[2]));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (TypeEqvMap_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_31, TailCtors0_19, &TailCtors_21, ((MR_Box) (STATE_VARIABLE_TVarSet_28_28)), &conv6_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_29_29)), &conv5_STATE_VARIABLE_EquivTypeInfo_25, ((MR_Box) (STATE_VARIABLE_UsedModules_30_30)), &conv4_STATE_VARIABLE_UsedModules_27);
  *STATE_VARIABLE_TVarSet_23 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_23));
  *STATE_VARIABLE_EquivTypeInfo_25 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_25));
  *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Ctors_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadCtor_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TailCtors_21));
  }
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

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
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
  MR_Word Ctors0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_20, (MR_Integer) 0))));
  MR_Word MaybeCanon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_20, (MR_Integer) 1))));
  MR_Word DirectArgFunctors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_20, (MR_Integer) 2))));
  MR_Word Ctors_29;
  MR_Word HeadCtor0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors0_26, (MR_Integer) 0))));
  MR_Word TailCtors0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctors0_26, (MR_Integer) 1))));
  MR_Word HeadCtor_54;
  MR_Word TailCtors_55;
  MR_Word STATE_VARIABLE_TVarSet_28_56;
  MR_Word STATE_VARIABLE_EquivTypeInfo_29_57;
  MR_Word STATE_VARIABLE_UsedModules_30_58;
  MR_Word Var_59;
  MR_Box conv6_STATE_VARIABLE_TVarSet_31;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_35;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(MaybeRecord_15, TypeEqvMap_16, HeadCtor0_52, &HeadCtor_54, STATE_VARIABLE_TVarSet_0_30, &STATE_VARIABLE_TVarSet_28_56, STATE_VARIABLE_EquivTypeInfo_0_32, &STATE_VARIABLE_EquivTypeInfo_29_57, STATE_VARIABLE_UsedModules_0_34, &STATE_VARIABLE_UsedModules_30_58);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[2]));
    MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_116_121_112_101_95_100_101_102_110_95_100_117_95_95_91_51_44_32_52_44_32_53_93_95_48_14_p_0_1));
    MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (MaybeRecord_15));
    MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (TypeEqvMap_16));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_59, TailCtors0_53, &TailCtors_55, ((MR_Box) (STATE_VARIABLE_TVarSet_28_56)), &conv6_STATE_VARIABLE_TVarSet_31, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_29_57)), &conv5_STATE_VARIABLE_EquivTypeInfo_33, ((MR_Box) (STATE_VARIABLE_UsedModules_30_58)), &conv4_STATE_VARIABLE_UsedModules_35);
  *STATE_VARIABLE_TVarSet_31 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_31));
  *STATE_VARIABLE_EquivTypeInfo_33 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_33));
  *STATE_VARIABLE_UsedModules_35 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_35));
  {
    Ctors_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Ctors_29, 0) = ((MR_Box) (HeadCtor_54));
    MR_hl_field(MR_mktag(0), Ctors_29, 1) = ((MR_Box) (TailCtors_55));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *DetailsDu_21 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ctors_29));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeCanon_27));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DirectArgFunctors_28));
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
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (TypeCtor_18));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_15, TypeEqvMap_16, Var_39, TypeBody0_26, &TypeBody_27, &Var_28, &Circ_29, STATE_VARIABLE_TVarSet_0_33, STATE_VARIABLE_TVarSet_34, STATE_VARIABLE_EquivTypeInfo_0_35, STATE_VARIABLE_EquivTypeInfo_36, STATE_VARIABLE_UsedModules_0_37, STATE_VARIABLE_UsedModules_38);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_29, &CircTypes_30);
  if ((CircTypes_30 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_44;
    MR_Word Pieces_50;
    MR_Word Var_53;
    MR_Word Var_54;

    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (TypeCtor_18));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[17])));
    }
    {
      Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[14])));
      MR_hl_field(MR_mktag(1), Pieces_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_44, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(MR_mktag(1), Var_44, 3) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(1), Var_44, 4) = ((MR_Box) (Pieces_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word SolverDetails0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_20, (MR_Integer) 0))));
  MR_Word MaybeUserEqComp_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_20, (MR_Integer) 1))));
  MR_Word RepresentationType0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_26, (MR_Integer) 0))));
  MR_Word GroundInst_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_26, (MR_Integer) 1))));
  MR_Word AnyInst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_26, (MR_Integer) 2))));
  MR_Word MutableInfos0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDetails0_26, (MR_Integer) 3))));
  MR_Word RepresentationType_32;
  MR_Word Circ_34;
  MR_Word CircTypes_35;
  MR_Word MutableInfos_39;
  MR_Word SolverDetails_40;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_EquivTypeInfo_49_49;
  MR_Word STATE_VARIABLE_UsedModules_50_50;
  MR_Word _Changed_33;

  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (TypeCtor_18));
    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_15, TypeEqvMap_16, Var_47, RepresentationType0_28, &RepresentationType_32, &_Changed_33, &Circ_34, STATE_VARIABLE_TVarSet_0_41, STATE_VARIABLE_TVarSet_42, STATE_VARIABLE_EquivTypeInfo_0_43, &STATE_VARIABLE_EquivTypeInfo_49_49, STATE_VARIABLE_UsedModules_0_45, &STATE_VARIABLE_UsedModules_50_50);
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
      Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (TypeCtor_18));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[17])));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[27])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[26])));
      MR_hl_field(MR_mktag(1), Pieces_38, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_solver\'/14"));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_65, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(MR_mktag(1), Var_65, 3) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(1), Var_65, 4) = ((MR_Box) (Pieces_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  parse_tree__equiv_type__replace_in_constraint_store_9_p_0(MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, MutableInfos0_31, &MutableInfos_39, STATE_VARIABLE_EquivTypeInfo_49_49, STATE_VARIABLE_EquivTypeInfo_44, STATE_VARIABLE_UsedModules_50_50, STATE_VARIABLE_UsedModules_46);
  {
    SolverDetails_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SolverDetails_40, 0) = ((MR_Box) (RepresentationType_32));
    MR_hl_field(MR_mktag(0), SolverDetails_40, 1) = ((MR_Box) (GroundInst_29));
    MR_hl_field(MR_mktag(0), SolverDetails_40, 2) = ((MR_Box) (AnyInst_30));
    MR_hl_field(MR_mktag(0), SolverDetails_40, 3) = ((MR_Box) (MutableInfos_39));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DetailsSolver_21 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SolverDetails_40));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeUserEqComp_27));
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
    MR_Word MutableInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word MutableInfos0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word MutableInfo_24;
    MR_Word MutableInfos_25;
    MR_Word STATE_VARIABLE_EquivTypeInfo_32_32;
    MR_Word STATE_VARIABLE_UsedModules_33_33;

    parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(MaybeRecord_1, TypeEqvMap_2, InstEqvMap_3, MutableInfo0_22, &MutableInfo_24, STATE_VARIABLE_EquivTypeInfo_0_6, &STATE_VARIABLE_EquivTypeInfo_32_32, STATE_VARIABLE_UsedModules_0_8, &STATE_VARIABLE_UsedModules_33_33);
    parse_tree__equiv_type__replace_in_constraint_store_9_p_0(MaybeRecord_1, TypeEqvMap_2, InstEqvMap_3, MutableInfos0_23, &MutableInfos_25, STATE_VARIABLE_EquivTypeInfo_32_32, STATE_VARIABLE_EquivTypeInfo_7, STATE_VARIABLE_UsedModules_33_33, STATE_VARIABLE_UsedModules_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MutableInfo_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MutableInfos_25));
    }
  }
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
        MR_Word OrigParseTree0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptSpec0_15, (MR_Integer) 0))));
        MR_Word ReadWhy0_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntForOptSpec0_15, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ParseTree0_22;

        parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree0_20, &ParseTree0_22, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *IntForOptSpec_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTree0_22));
          MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_21));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OrigParseTree1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntForOptSpec0_15, (MR_Integer) 0))));
        MR_Word ReadWhy1_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntForOptSpec0_15, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Word ParseTree1_25;

        parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree1_23, &ParseTree1_25, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntForOptSpec_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ParseTree1_25));
          MR_hl_field(MR_mktag(1), base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_24));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OrigParseTree2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IntForOptSpec0_15, (MR_Integer) 0))));
        MR_Word ReadWhy2_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), IntForOptSpec0_15, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word ParseTree2_28;

        parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree2_26, &ParseTree2_28, STATE_VARIABLE_RecompInfo_0_29, STATE_VARIABLE_RecompInfo_30, STATE_VARIABLE_UsedModules_0_31, STATE_VARIABLE_UsedModules_32, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IntForOptSpec_16 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ParseTree2_28));
          MR_hl_field(MR_mktag(2), base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_27));
        }
      }
      break;
  }
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
  MR_Word OrigParseTree2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectIntSpec0_15, (MR_Integer) 0))));
  MR_Word ReadWhy2_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IndirectIntSpec0_15, (MR_Integer) 1))) & (MR_Integer) 3);
  MR_Word ParseTree2_22;

  parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree2_20, &ParseTree2_22, STATE_VARIABLE_RecompInfo_0_23, STATE_VARIABLE_RecompInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *IndirectIntSpec_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTree2_22));
    MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy2_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0_2(
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
  MR_Word conv9_STATE_VARIABLE_RecompInfo_53;
  MR_Word conv8_STATE_VARIABLE_UsedModules_55;
  MR_Word conv7_STATE_VARIABLE_Specs_57;

  parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Info_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_53, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_55, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_57);
  *wrapper_arg_2 = ((MR_Box) (conv10_Info_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_53));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_55));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_57));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0_1(
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
  *wrapper_arg_2 = ((MR_Box) (conv3_CheckedDefn_20));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_RecompInfo_63));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_65));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_67));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0(
  MR_Word ModuleName_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word OrigParseTreeInt2_15,
  MR_Word * ParseTreeInt2_16,
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  MR_Word IntModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 0))));
  MR_Word IntModuleNameContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 1))));
  MR_Word MaybeVersionNumbers_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 2))));
  MR_Word IntInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 3))));
  MR_Word InclMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 4))));
  MR_Word IntUsedMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 5))));
  MR_Word ImportUseMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 6))));
  MR_Word IntFIMSpecs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 7))));
  MR_Word ImpFIMSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 8))));
  MR_Word TypeCtorCheckedMap0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 9))));
  MR_Word IntTypeClasses0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 12))));
  MR_Word IntInstances0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 13))));
  MR_Word IntTypeRepnMap0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 14))));
  MR_Word TypeCtorCheckedMap_37;
  MR_Word InstCtorCheckedMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 10))));
  MR_Word ModeCtorCheckedMap_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt2_15, (MR_Integer) 11))));
  MR_Word IntTypeClasses_40;
  MR_Word IntInstances_41;
  MR_Word IntTypeRepnMap_42;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_RecompInfo_50_50;
  MR_Word STATE_VARIABLE_UsedModules_51_51;
  MR_Word STATE_VARIABLE_Specs_52_52;
  MR_Word STATE_VARIABLE_RecompInfo_54_54;
  MR_Word STATE_VARIABLE_UsedModules_55_55;
  MR_Word STATE_VARIABLE_Specs_56_56;
  MR_Word STATE_VARIABLE_RecompInfo_58_58;
  MR_Word STATE_VARIABLE_UsedModules_59_59;
  MR_Word STATE_VARIABLE_Specs_60_60;
  MR_Word Var_61;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_50_50;
  MR_Box conv5_STATE_VARIABLE_UsedModules_51_51;
  MR_Box conv4_STATE_VARIABLE_Specs_52_52;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_44;
  MR_Box conv12_STATE_VARIABLE_UsedModules_46;
  MR_Box conv11_STATE_VARIABLE_Specs_48;

  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0_1));
    MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_49, 6) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(MR_mktag(0), Var_49, 7) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_49, TypeCtorCheckedMap0_31, &TypeCtorCheckedMap_37, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_43)), &conv6_STATE_VARIABLE_RecompInfo_50_50, ((MR_Box) (STATE_VARIABLE_UsedModules_0_45)), &conv5_STATE_VARIABLE_UsedModules_51_51, ((MR_Box) (STATE_VARIABLE_Specs_0_47)), &conv4_STATE_VARIABLE_Specs_52_52);
  STATE_VARIABLE_RecompInfo_50_50 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_50_50));
  STATE_VARIABLE_UsedModules_51_51 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_51_51));
  STATE_VARIABLE_Specs_52_52 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_52_52));
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_34, &IntTypeClasses_40, STATE_VARIABLE_RecompInfo_50_50, &STATE_VARIABLE_RecompInfo_54_54, STATE_VARIABLE_UsedModules_51_51, &STATE_VARIABLE_UsedModules_55_55, STATE_VARIABLE_Specs_52_52, &STATE_VARIABLE_Specs_56_56);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_35, &IntInstances_41, STATE_VARIABLE_RecompInfo_54_54, &STATE_VARIABLE_RecompInfo_58_58, STATE_VARIABLE_UsedModules_55_55, &STATE_VARIABLE_UsedModules_59_59, STATE_VARIABLE_Specs_56_56, &STATE_VARIABLE_Specs_60_60);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[7]));
    MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int2_11_p_0_2));
    MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (TypeEqvMap_13));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__equiv_type_scalar_common_2[8]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[8]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_61, IntTypeRepnMap0_36, &IntTypeRepnMap_42, ((MR_Box) (STATE_VARIABLE_RecompInfo_58_58)), &conv13_STATE_VARIABLE_RecompInfo_44, ((MR_Box) (STATE_VARIABLE_UsedModules_59_59)), &conv12_STATE_VARIABLE_UsedModules_46, ((MR_Box) (STATE_VARIABLE_Specs_60_60)), &conv11_STATE_VARIABLE_Specs_48);
  *STATE_VARIABLE_RecompInfo_44 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_44));
  *STATE_VARIABLE_UsedModules_46 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_46));
  *STATE_VARIABLE_Specs_48 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_48));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt2_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (IntModuleName_22));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IntModuleNameContext_23));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_24));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_25));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_26));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntUsedMap_27));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ImportUseMap_28));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntFIMSpecs_29));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpFIMSpecs_30));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (TypeCtorCheckedMap_37));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (InstCtorCheckedMap_38));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ModeCtorCheckedMap_39));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntTypeClasses_40));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (IntInstances_41));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeRepnMap_42));
  }
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
  MR_Word OrigParseTree1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectIntSpec0_15, (MR_Integer) 0))));
  MR_Word ReadWhy1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DirectIntSpec0_15, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word ParseTree1_22;

  parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree1_20, &ParseTree1_22, STATE_VARIABLE_RecompInfo_0_23, STATE_VARIABLE_RecompInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *DirectIntSpec_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTree1_22));
    MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy1_21));
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
  MR_Word conv9_STATE_VARIABLE_RecompInfo_53;
  MR_Word conv8_STATE_VARIABLE_UsedModules_55;
  MR_Word conv7_STATE_VARIABLE_Specs_57;

  parse_tree__equiv_type__replace_in_type_repn_info_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_Info_16, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_RecompInfo_53, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UsedModules_55, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_Specs_57);
  *wrapper_arg_2 = ((MR_Box) (conv10_Info_16));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_RecompInfo_53));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UsedModules_55));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_57));
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
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
  MR_Word STATE_VARIABLE_RecompInfo_0_54,
  MR_Word * STATE_VARIABLE_RecompInfo_55,
  MR_Word STATE_VARIABLE_UsedModules_0_56,
  MR_Word * STATE_VARIABLE_UsedModules_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
{
  MR_Word IntModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 0))));
  MR_Word IntModuleNameContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 1))));
  MR_Word MaybeVersionNumbers_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 2))));
  MR_Word IntInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 3))));
  MR_Word ImpInclMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 4))));
  MR_Word InclMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 5))));
  MR_Word IntUseMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 6))));
  MR_Word ImpUseMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 7))));
  MR_Word ImportUseMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 8))));
  MR_Word IntFIMSpecs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 9))));
  MR_Word ImpFIMSpecs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 10))));
  MR_Word TypeCtorCheckedMap0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 11))));
  MR_Word IntTypeClasses0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 14))));
  MR_Word IntInstances0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 15))));
  MR_Word IntPredDecls0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 16))));
  MR_Word IntModeDecls0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 17))));
  MR_Word IntDeclPragmas0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 18))));
  MR_Word IntPromises_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 19))));
  MR_Word IntTypeRepnMap0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 20))));
  MR_Word ImpTypeClasses0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 21))));
  MR_Word TypeCtorCheckedMap_44;
  MR_Word InstCtorCheckedMap_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 12))));
  MR_Word ModeCtorCheckedMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt1_15, (MR_Integer) 13))));
  MR_Word IntTypeClasses_47;
  MR_Word IntInstances_48;
  MR_Word IntPredDecls_49;
  MR_Word IntModeDecls_50;
  MR_Word IntDeclPragmas_51;
  MR_Word IntTypeRepnMap_52;
  MR_Word ImpTypeClasses_53;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_RecompInfo_61_61;
  MR_Word STATE_VARIABLE_UsedModules_62_62;
  MR_Word STATE_VARIABLE_Specs_63_63;
  MR_Word STATE_VARIABLE_RecompInfo_65_65;
  MR_Word STATE_VARIABLE_UsedModules_66_66;
  MR_Word STATE_VARIABLE_Specs_67_67;
  MR_Word STATE_VARIABLE_RecompInfo_69_69;
  MR_Word STATE_VARIABLE_UsedModules_70_70;
  MR_Word STATE_VARIABLE_Specs_71_71;
  MR_Word STATE_VARIABLE_RecompInfo_73_73;
  MR_Word STATE_VARIABLE_UsedModules_74_74;
  MR_Word STATE_VARIABLE_Specs_75_75;
  MR_Word STATE_VARIABLE_RecompInfo_77_77;
  MR_Word STATE_VARIABLE_UsedModules_78_78;
  MR_Word STATE_VARIABLE_Specs_79_79;
  MR_Word STATE_VARIABLE_RecompInfo_81_81;
  MR_Word STATE_VARIABLE_UsedModules_82_82;
  MR_Word STATE_VARIABLE_Specs_83_83;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_RecompInfo_85_85;
  MR_Word STATE_VARIABLE_UsedModules_86_86;
  MR_Word STATE_VARIABLE_Specs_87_87;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_61_61;
  MR_Box conv5_STATE_VARIABLE_UsedModules_62_62;
  MR_Box conv4_STATE_VARIABLE_Specs_63_63;
  MR_Box conv13_STATE_VARIABLE_RecompInfo_85_85;
  MR_Box conv12_STATE_VARIABLE_UsedModules_86_86;
  MR_Box conv11_STATE_VARIABLE_Specs_87_87;

  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_1));
    MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_60, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_60, 6) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(MR_mktag(0), Var_60, 7) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_60, TypeCtorCheckedMap0_33, &TypeCtorCheckedMap_44, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_54)), &conv6_STATE_VARIABLE_RecompInfo_61_61, ((MR_Box) (STATE_VARIABLE_UsedModules_0_56)), &conv5_STATE_VARIABLE_UsedModules_62_62, ((MR_Box) (STATE_VARIABLE_Specs_0_58)), &conv4_STATE_VARIABLE_Specs_63_63);
  STATE_VARIABLE_RecompInfo_61_61 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_61_61));
  STATE_VARIABLE_UsedModules_62_62 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_62_62));
  STATE_VARIABLE_Specs_63_63 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_63_63));
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_36, &IntTypeClasses_47, STATE_VARIABLE_RecompInfo_61_61, &STATE_VARIABLE_RecompInfo_65_65, STATE_VARIABLE_UsedModules_62_62, &STATE_VARIABLE_UsedModules_66_66, STATE_VARIABLE_Specs_63_63, &STATE_VARIABLE_Specs_67_67);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_37, &IntInstances_48, STATE_VARIABLE_RecompInfo_65_65, &STATE_VARIABLE_RecompInfo_69_69, STATE_VARIABLE_UsedModules_66_66, &STATE_VARIABLE_UsedModules_70_70, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_71_71);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntPredDecls0_38, &IntPredDecls_49, STATE_VARIABLE_RecompInfo_69_69, &STATE_VARIABLE_RecompInfo_73_73, STATE_VARIABLE_UsedModules_70_70, &STATE_VARIABLE_UsedModules_74_74, STATE_VARIABLE_Specs_71_71, &STATE_VARIABLE_Specs_75_75);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, IntModeDecls0_39, &IntModeDecls_50, STATE_VARIABLE_RecompInfo_73_73, &STATE_VARIABLE_RecompInfo_77_77, STATE_VARIABLE_UsedModules_74_74, &STATE_VARIABLE_UsedModules_78_78, STATE_VARIABLE_Specs_75_75, &STATE_VARIABLE_Specs_79_79);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntDeclPragmas0_40, &IntDeclPragmas_51, STATE_VARIABLE_RecompInfo_77_77, &STATE_VARIABLE_RecompInfo_81_81, STATE_VARIABLE_UsedModules_78_78, &STATE_VARIABLE_UsedModules_82_82, STATE_VARIABLE_Specs_79_79, &STATE_VARIABLE_Specs_83_83);
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[7]));
    MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int1_11_p_0_2));
    MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_84, 5) = ((MR_Box) (TypeEqvMap_13));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__equiv_type_scalar_common_2[8]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[8]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_84, IntTypeRepnMap0_42, &IntTypeRepnMap_52, ((MR_Box) (STATE_VARIABLE_RecompInfo_81_81)), &conv13_STATE_VARIABLE_RecompInfo_85_85, ((MR_Box) (STATE_VARIABLE_UsedModules_82_82)), &conv12_STATE_VARIABLE_UsedModules_86_86, ((MR_Box) (STATE_VARIABLE_Specs_83_83)), &conv11_STATE_VARIABLE_Specs_87_87);
  STATE_VARIABLE_RecompInfo_85_85 = ((MR_Word) (conv13_STATE_VARIABLE_RecompInfo_85_85));
  STATE_VARIABLE_UsedModules_86_86 = ((MR_Word) (conv12_STATE_VARIABLE_UsedModules_86_86));
  STATE_VARIABLE_Specs_87_87 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_87_87));
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, ImpTypeClasses0_43, &ImpTypeClasses_53, STATE_VARIABLE_RecompInfo_85_85, STATE_VARIABLE_RecompInfo_55, STATE_VARIABLE_UsedModules_86_86, STATE_VARIABLE_UsedModules_57, STATE_VARIABLE_Specs_87_87, STATE_VARIABLE_Specs_59);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt1_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (IntModuleName_22));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IntModuleNameContext_23));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_24));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_25));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_26));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_27));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_28));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpUseMap_29));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImportUseMap_30));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntFIMSpecs_31));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpFIMSpecs_32));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (TypeCtorCheckedMap_44));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (InstCtorCheckedMap_45));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ModeCtorCheckedMap_46));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeClasses_47));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntInstances_48));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntPredDecls_49));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDecls_50));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntDeclPragmas_51));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntPromises_41));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntTypeRepnMap_52));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpTypeClasses_53));
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
  MR_Word OrigParseTree0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorIntSpec0_15, (MR_Integer) 0))));
  MR_Word ReadWhy0_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AncestorIntSpec0_15, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word ParseTree0_22;

  parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0(ModuleName_12, TypeEqvMap_13, InstEqvMap_14, OrigParseTree0_20, &ParseTree0_22, STATE_VARIABLE_RecompInfo_0_23, STATE_VARIABLE_RecompInfo_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *AncestorIntSpec_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTree0_22));
    MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (ReadWhy0_21));
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
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
  MR_Word STATE_VARIABLE_RecompInfo_0_63,
  MR_Word * STATE_VARIABLE_RecompInfo_64,
  MR_Word STATE_VARIABLE_UsedModules_0_65,
  MR_Word * STATE_VARIABLE_UsedModules_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  MR_Word IntModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 0))));
  MR_Word IntModuleNameContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 1))));
  MR_Word MaybeVersionNumbers_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 2))));
  MR_Word IntInclMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 3))));
  MR_Word ImpInclMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 4))));
  MR_Word InclMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 5))));
  MR_Word IntImportMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 6))));
  MR_Word IntUseMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 7))));
  MR_Word ImpImportMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 8))));
  MR_Word ImpUseMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 9))));
  MR_Word ImportUseMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 10))));
  MR_Word IntFIMSpecs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 11))));
  MR_Word ImpFIMSpecs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 12))));
  MR_Word TypeCtorCheckedMap0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 13))));
  MR_Word IntTypeClasses0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 16))));
  MR_Word IntInstances0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 17))));
  MR_Word IntPredDecls0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 18))));
  MR_Word IntModeDecls0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 19))));
  MR_Word IntDeclPragmas0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 20))));
  MR_Word IntPromises_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 21))));
  MR_Word ImpTypeClasses0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 22))));
  MR_Word ImpInstances0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 23))));
  MR_Word ImpPredDecls0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 24))));
  MR_Word ImpModeDecls0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 25))));
  MR_Word ImpDeclPragmas0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 26))));
  MR_Word ImpPromises_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 27))));
  MR_Word TypeCtorCheckedMap_50;
  MR_Word InstCtorCheckedMap_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 14))));
  MR_Word ModeCtorCheckedMap_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigParseTreeInt0_15, (MR_Integer) 15))));
  MR_Word IntTypeClasses_53;
  MR_Word IntInstances_54;
  MR_Word IntPredDecls_55;
  MR_Word IntModeDecls_56;
  MR_Word IntDeclPragmas_57;
  MR_Word ImpTypeClasses_58;
  MR_Word ImpInstances_59;
  MR_Word ImpPredDecls_60;
  MR_Word ImpModeDecls_61;
  MR_Word ImpDeclPragmas_62;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_RecompInfo_70_70;
  MR_Word STATE_VARIABLE_UsedModules_71_71;
  MR_Word STATE_VARIABLE_Specs_72_72;
  MR_Word STATE_VARIABLE_RecompInfo_74_74;
  MR_Word STATE_VARIABLE_UsedModules_75_75;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_Word STATE_VARIABLE_RecompInfo_78_78;
  MR_Word STATE_VARIABLE_UsedModules_79_79;
  MR_Word STATE_VARIABLE_Specs_80_80;
  MR_Word STATE_VARIABLE_RecompInfo_82_82;
  MR_Word STATE_VARIABLE_UsedModules_83_83;
  MR_Word STATE_VARIABLE_Specs_84_84;
  MR_Word STATE_VARIABLE_RecompInfo_86_86;
  MR_Word STATE_VARIABLE_UsedModules_87_87;
  MR_Word STATE_VARIABLE_Specs_88_88;
  MR_Word STATE_VARIABLE_RecompInfo_90_90;
  MR_Word STATE_VARIABLE_UsedModules_91_91;
  MR_Word STATE_VARIABLE_Specs_92_92;
  MR_Word STATE_VARIABLE_RecompInfo_94_94;
  MR_Word STATE_VARIABLE_UsedModules_95_95;
  MR_Word STATE_VARIABLE_Specs_96_96;
  MR_Word STATE_VARIABLE_RecompInfo_98_98;
  MR_Word STATE_VARIABLE_UsedModules_99_99;
  MR_Word STATE_VARIABLE_Specs_100_100;
  MR_Word STATE_VARIABLE_RecompInfo_102_102;
  MR_Word STATE_VARIABLE_UsedModules_103_103;
  MR_Word STATE_VARIABLE_Specs_104_104;
  MR_Word STATE_VARIABLE_RecompInfo_106_106;
  MR_Word STATE_VARIABLE_UsedModules_107_107;
  MR_Word STATE_VARIABLE_Specs_108_108;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_70_70;
  MR_Box conv5_STATE_VARIABLE_UsedModules_71_71;
  MR_Box conv4_STATE_VARIABLE_Specs_72_72;

  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_int0_11_p_0_1));
    MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ModuleName_12));
    MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(MR_mktag(0), Var_69, 7) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_69, TypeCtorCheckedMap0_35, &TypeCtorCheckedMap_50, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_63)), &conv6_STATE_VARIABLE_RecompInfo_70_70, ((MR_Box) (STATE_VARIABLE_UsedModules_0_65)), &conv5_STATE_VARIABLE_UsedModules_71_71, ((MR_Box) (STATE_VARIABLE_Specs_0_67)), &conv4_STATE_VARIABLE_Specs_72_72);
  STATE_VARIABLE_RecompInfo_70_70 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_70_70));
  STATE_VARIABLE_UsedModules_71_71 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_71_71));
  STATE_VARIABLE_Specs_72_72 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_72_72));
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntTypeClasses0_38, &IntTypeClasses_53, STATE_VARIABLE_RecompInfo_70_70, &STATE_VARIABLE_RecompInfo_74_74, STATE_VARIABLE_UsedModules_71_71, &STATE_VARIABLE_UsedModules_75_75, STATE_VARIABLE_Specs_72_72, &STATE_VARIABLE_Specs_76_76);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntInstances0_39, &IntInstances_54, STATE_VARIABLE_RecompInfo_74_74, &STATE_VARIABLE_RecompInfo_78_78, STATE_VARIABLE_UsedModules_75_75, &STATE_VARIABLE_UsedModules_79_79, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_80_80);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, IntPredDecls0_40, &IntPredDecls_55, STATE_VARIABLE_RecompInfo_78_78, &STATE_VARIABLE_RecompInfo_82_82, STATE_VARIABLE_UsedModules_79_79, &STATE_VARIABLE_UsedModules_83_83, STATE_VARIABLE_Specs_80_80, &STATE_VARIABLE_Specs_84_84);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, IntModeDecls0_41, &IntModeDecls_56, STATE_VARIABLE_RecompInfo_82_82, &STATE_VARIABLE_RecompInfo_86_86, STATE_VARIABLE_UsedModules_83_83, &STATE_VARIABLE_UsedModules_87_87, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_88_88);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, IntDeclPragmas0_42, &IntDeclPragmas_57, STATE_VARIABLE_RecompInfo_86_86, &STATE_VARIABLE_RecompInfo_90_90, STATE_VARIABLE_UsedModules_87_87, &STATE_VARIABLE_UsedModules_91_91, STATE_VARIABLE_Specs_88_88, &STATE_VARIABLE_Specs_92_92);
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, ImpTypeClasses0_44, &ImpTypeClasses_58, STATE_VARIABLE_RecompInfo_90_90, &STATE_VARIABLE_RecompInfo_94_94, STATE_VARIABLE_UsedModules_91_91, &STATE_VARIABLE_UsedModules_95_95, STATE_VARIABLE_Specs_92_92, &STATE_VARIABLE_Specs_96_96);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, ImpInstances0_45, &ImpInstances_59, STATE_VARIABLE_RecompInfo_94_94, &STATE_VARIABLE_RecompInfo_98_98, STATE_VARIABLE_UsedModules_95_95, &STATE_VARIABLE_UsedModules_99_99, STATE_VARIABLE_Specs_96_96, &STATE_VARIABLE_Specs_100_100);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, InstEqvMap_14, ImpPredDecls0_46, &ImpPredDecls_60, STATE_VARIABLE_RecompInfo_98_98, &STATE_VARIABLE_RecompInfo_102_102, STATE_VARIABLE_UsedModules_99_99, &STATE_VARIABLE_UsedModules_103_103, STATE_VARIABLE_Specs_100_100, &STATE_VARIABLE_Specs_104_104);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_12, InstEqvMap_14, ImpModeDecls0_47, &ImpModeDecls_61, STATE_VARIABLE_RecompInfo_102_102, &STATE_VARIABLE_RecompInfo_106_106, STATE_VARIABLE_UsedModules_103_103, &STATE_VARIABLE_UsedModules_107_107, STATE_VARIABLE_Specs_104_104, &STATE_VARIABLE_Specs_108_108);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_12, (MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_13, ImpDeclPragmas0_48, &ImpDeclPragmas_62, STATE_VARIABLE_RecompInfo_106_106, STATE_VARIABLE_RecompInfo_64, STATE_VARIABLE_UsedModules_107_107, STATE_VARIABLE_UsedModules_66, STATE_VARIABLE_Specs_108_108, STATE_VARIABLE_Specs_68);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (28 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt0_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (IntModuleName_22));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IntModuleNameContext_23));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_24));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_25));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_26));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_27));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntImportMap_28));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntUseMap_29));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpImportMap_30));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpUseMap_31));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImportUseMap_32));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntFIMSpecs_33));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ImpFIMSpecs_34));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (TypeCtorCheckedMap_50));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (InstCtorCheckedMap_51));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ModeCtorCheckedMap_52));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntTypeClasses_53));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntInstances_54));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntPredDecls_55));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntModeDecls_56));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntDeclPragmas_57));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPromises_43));
    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeClasses_58));
    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpInstances_59));
    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpPredDecls_60));
    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpModeDecls_61));
    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpDeclPragmas_62));
    MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpPromises_49));
  }
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_InstEqvMap_0_21,
  MR_Word * STATE_VARIABLE_InstEqvMap_22)
{
  MR_Word StdInstDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn_6, (MR_Integer) 0))));
  MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdInstDefn_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ItemInstDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdInstDefn_8, (MR_Integer) 1))));
  MR_Word InstParams_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_11, (MR_Integer) 1))));
  MR_Word MaybeAbstractInstDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_11, (MR_Integer) 3))));

  if ((MaybeAbstractInstDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstEqvMap_22 = STATE_VARIABLE_InstEqvMap_0_21;
  else
  {
    MR_Word InstDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_15, (MR_Integer) 0))));

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
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (InstParams_13));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (EqvInst_20));
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
  MR_Word StdInstDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn_6, (MR_Integer) 0))));
  MR_Word ItemInstDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdInstDefn_8, (MR_Integer) 1))));
  MR_Word InstParams_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_11, (MR_Integer) 1))));
  MR_Word MaybeAbstractInstDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_11, (MR_Integer) 3))));

  if ((MaybeAbstractInstDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_InstEqvMap_22 = STATE_VARIABLE_InstEqvMap_0_21;
  else
  {
    MR_Word InstDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_15, (MR_Integer) 0))));
    MR_Word EqvInst_20 = (MR_Word) (InstDefn_19);
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (InstParams_13));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (EqvInst_20));
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
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_4, (MR_Integer) 0))));
  MR_Word InstParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_4, (MR_Integer) 1))));
  MR_Word InstDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_4, (MR_Integer) 3))));
  MR_Word EqvInst_13;
  MR_Word Var_18;

  succeeded = (InstDefn_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstDefn_9, (MR_Integer) 0))));
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
      MR_hl_field(MR_mktag(0), InstCtor_15, 0) = ((MR_Box) (Name_6));
      MR_hl_field(MR_mktag(0), InstCtor_15, 1) = ((MR_Box) (Arity_14));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (InstParams_7));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (EqvInst_13));
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
    MR_Word StdTypeDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) StdTypeDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdTypeDefn_10, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ItemTypeDefnEqv_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdTypeDefn_10, (MR_Integer) 1))));

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
                MR_Word TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnEqv_13, (MR_Integer) 1))));
                MR_Word TypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnEqv_13, (MR_Integer) 2))));
                MR_Word TVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnEqv_13, (MR_Integer) 3))));
                MR_Word EqvType_20 = (MR_Word) (TypeDefn_16);
                MR_Word Var_36;

                {
                  Var_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (TVarSet_17));
                  MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (TypeParams_15));
                  MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (EqvType_20));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdTypeDefn_10, (MR_Integer) 0))))) {
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
    MR_Word StdTypeDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) StdTypeDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ItemTypeDefnEqv_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdTypeDefn_10, (MR_Integer) 1))));
          MR_Word TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnEqv_13, (MR_Integer) 1))));
          MR_Word TypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnEqv_13, (MR_Integer) 2))));
          MR_Word TVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnEqv_13, (MR_Integer) 3))));
          MR_Word EqvType_20 = (MR_Word) (TypeDefn_16);
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (TVarSet_17));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (TypeParams_15));
            MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (EqvType_20));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdTypeDefn_10, (MR_Integer) 0))))) {
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
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 0))));
  MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 1))));
  MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 2))));
  MR_Word TVarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 3))));
  MR_Word EqvType_12;
  MR_Word Var_17;

  succeeded = ((((MR_tag((MR_Word) TypeDefn_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 1))));
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
      MR_hl_field(MR_mktag(0), TypeCtor_14, 0) = ((MR_Box) (Name_6));
      MR_hl_field(MR_mktag(0), TypeCtor_14, 1) = ((MR_Box) (Arity_13));
    }
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (TVarSet_9));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (TypeParams_7));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (EqvType_12));
    }
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (Var_18)), STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16);
  }
  else
    *STATE_VARIABLE_TypeEqvMap_16 = STATE_VARIABLE_TypeEqvMap_0_15;
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(
  MR_Word _ParseTreePlainOpt_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12)
{
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_TypeEqvMap_0_9, STATE_VARIABLE_TypeEqvMap_10, STATE_VARIABLE_InstEqvMap_0_11, STATE_VARIABLE_InstEqvMap_12);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_TypeEqvMap_0_9,
  MR_Word * STATE_VARIABLE_TypeEqvMap_10,
  MR_Word STATE_VARIABLE_InstEqvMap_0_11,
  MR_Word * STATE_VARIABLE_InstEqvMap_12)
{
  *STATE_VARIABLE_InstEqvMap_12 = STATE_VARIABLE_InstEqvMap_0_11;
  *STATE_VARIABLE_TypeEqvMap_10 = STATE_VARIABLE_TypeEqvMap_0_9;
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
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_6, (MR_Integer) 4))));
  MR_Word Var_17;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_10;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_12;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[3]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[23]), Var_14, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_9)), &conv1_STATE_VARIABLE_TypeEqvMap_10);
  *STATE_VARIABLE_TypeEqvMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_10));
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_6, (MR_Integer) 6))));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[4]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[24]), Var_17, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_11)), &conv3_STATE_VARIABLE_InstEqvMap_12);
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

  parse_tree__equiv_type__build_eqv_maps_in_inst_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstEqvMap_22);
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

  parse_tree__equiv_type__build_eqv_maps_in_type_ctor_checked_defns_int_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeEqvMap_35);
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
        MR_Word ParseTreeInt0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptSpec_6, (MR_Integer) 0))));

        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0(ParseTreeInt0_9, STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16, STATE_VARIABLE_InstEqvMap_0_17, STATE_VARIABLE_InstEqvMap_18);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntForOptSpec_6, (MR_Integer) 0))));
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_11, (MR_Integer) 11))));
        MR_Word Var_37;
        MR_Box conv1_STATE_VARIABLE_TypeEqvMap_16;
        MR_Box conv3_STATE_VARIABLE_InstEqvMap_18;

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[21]), Var_34, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_15)), &conv1_STATE_VARIABLE_TypeEqvMap_16);
        *STATE_VARIABLE_TypeEqvMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_16));
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_11, (MR_Integer) 12))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[22]), Var_37, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_17)), &conv3_STATE_VARIABLE_InstEqvMap_18);
        *STATE_VARIABLE_InstEqvMap_18 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_18));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IntForOptSpec_6, (MR_Integer) 0))));
        MR_Word ReadWhy2_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), IntForOptSpec_6, (MR_Integer) 1))) & (MR_Integer) 3);

        parse_tree__equiv_type__build_eqv_maps_in_parse_tree_int2_6_p_0(ReadWhy2_14, ParseTreeInt2_13, STATE_VARIABLE_TypeEqvMap_0_15, STATE_VARIABLE_TypeEqvMap_16, STATE_VARIABLE_InstEqvMap_0_17, STATE_VARIABLE_InstEqvMap_18);
      }
      break;
  }
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
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 9))));
        MR_Word Var_19;
        MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
        MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[19]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
        *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 10))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[20]), Var_19, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
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
  MR_Word ParseTreeInt2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectIntSpec_6, (MR_Integer) 0))));
  MR_Word ReadWhy2_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IndirectIntSpec_6, (MR_Integer) 1))) & (MR_Integer) 3);

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
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_9, (MR_Integer) 9))));
        MR_Word Var_29;
        MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
        MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[17]), Var_26, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
        *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_9, (MR_Integer) 10))));
        mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[18]), Var_29, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
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
  MR_Word ParseTreeInt1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectIntSpec_6, (MR_Integer) 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_9, (MR_Integer) 11))));
  MR_Word Var_29;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[15]), Var_26, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_9, (MR_Integer) 12))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[16]), Var_29, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
  *STATE_VARIABLE_InstEqvMap_14 = ((MR_Word) (conv3_STATE_VARIABLE_InstEqvMap_14));
}

static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_ancestor_int_spec_5_p_0(
  MR_Word AncestorIntSpec_6,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14)
{
  MR_Word ParseTreeInt0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorIntSpec_6, (MR_Integer) 0))));

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0(ParseTreeInt0_9, STATE_VARIABLE_TypeEqvMap_0_11, STATE_VARIABLE_TypeEqvMap_12, STATE_VARIABLE_InstEqvMap_0_13, STATE_VARIABLE_InstEqvMap_14);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0_2(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0_1(
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_112_97_114_115_101_95_116_114_101_101_95_105_110_116_48_95_95_91_49_93_95_48_6_p_0(
  MR_Word ParseTreeInt0_8,
  MR_Word STATE_VARIABLE_TypeEqvMap_0_11,
  MR_Word * STATE_VARIABLE_TypeEqvMap_12,
  MR_Word STATE_VARIABLE_InstEqvMap_0_13,
  MR_Word * STATE_VARIABLE_InstEqvMap_14)
{
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 13))));
  MR_Word Var_19;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_12;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_14;

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[13]), Var_16, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_11)), &conv1_STATE_VARIABLE_TypeEqvMap_12);
  *STATE_VARIABLE_TypeEqvMap_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_12));
  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 14))));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[14]), Var_19, ((MR_Box) (STATE_VARIABLE_InstEqvMap_0_13)), &conv3_STATE_VARIABLE_InstEqvMap_14);
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

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
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
  MR_Word HeadCtor0_37;
  MR_Word TailCtors0_38;
  MR_Word HeadCtor_39;
  MR_Word TailCtors_40;
  MR_Word STATE_VARIABLE_TVarSet_28_41;
  MR_Word STATE_VARIABLE_EquivTypeInfo_29_42;
  MR_Word STATE_VARIABLE_UsedModules_30_43;
  MR_Word Var_44;
  MR_Box conv6_STATE_VARIABLE_TVarSet_16;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_18;
  MR_Box conv4_Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  HeadCtor0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Ctors_0_13, (MR_Integer) 0))));
  TailCtors0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Ctors_0_13, (MR_Integer) 1))));
  parse_tree__equiv_type__replace_in_ctor_10_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_8, HeadCtor0_37, &HeadCtor_39, STATE_VARIABLE_TVarSet_0_15, &STATE_VARIABLE_TVarSet_28_41, STATE_VARIABLE_EquivTypeInfo_0_17, &STATE_VARIABLE_EquivTypeInfo_29_42, Var_23, &STATE_VARIABLE_UsedModules_30_43);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[2]));
    MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (TypeEqvMap_8));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_44, TailCtors0_38, &TailCtors_40, ((MR_Box) (STATE_VARIABLE_TVarSet_28_41)), &conv6_STATE_VARIABLE_TVarSet_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_29_42)), &conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (STATE_VARIABLE_UsedModules_30_43)), &conv4_Var_12);
  *STATE_VARIABLE_TVarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_16));
  *STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_18));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Ctors_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadCtor_39));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TailCtors_40));
  }
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
  uint32_t Ordinal_18 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 0)));
  MR_Word MaybeExistConstraints0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 1))));
  MR_Word CtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 2))));
  MR_Word CtorArgs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 3))));
  MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 4))));
  MR_Word Ctxt_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_13, (MR_Integer) 5))));
  MR_Word CtorArgs_24;
  MR_Word MaybeExistConstraints_26;
  MR_Word STATE_VARIABLE_TVarSet_40_40;
  MR_Word STATE_VARIABLE_EquivTypeInfo_41_41;
  MR_Word STATE_VARIABLE_UsedModules_42_42;
  MR_Word Var_63;
  MR_Word Var_25;

  Var_63 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(MaybeRecord_11, TypeEqvMap_12, (MR_Word) ((MR_Unsigned) 0U), CtorArgs0_21, &CtorArgs_24, Var_63, &Var_25, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_40_40, STATE_VARIABLE_EquivTypeInfo_0_36, &STATE_VARIABLE_EquivTypeInfo_41_41, STATE_VARIABLE_UsedModules_0_38, &STATE_VARIABLE_UsedModules_42_42);
  if ((MaybeExistConstraints0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_35 = STATE_VARIABLE_TVarSet_40_40;
    *STATE_VARIABLE_EquivTypeInfo_37 = STATE_VARIABLE_EquivTypeInfo_41_41;
    *STATE_VARIABLE_UsedModules_39 = STATE_VARIABLE_UsedModules_42_42;
  }
  else
  {
    MR_Word ExistConstraints0_27 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_19), (MR_Integer) 1));
    MR_Word ExistQVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_27, (MR_Integer) 0))));
    MR_Word Constraints0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_27, (MR_Integer) 1))));
    MR_Word UnconstrainedExistQTVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_27, (MR_Integer) 2))));
    MR_Word ConstrainedExistQTVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_27, (MR_Integer) 3))));
    MR_Word Constraints_32;
    MR_Word ExistConstraints_33;

    parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0(MaybeRecord_11, TypeEqvMap_12, Constraints0_29, &Constraints_32, STATE_VARIABLE_TVarSet_40_40, STATE_VARIABLE_TVarSet_35, STATE_VARIABLE_EquivTypeInfo_41_41, STATE_VARIABLE_EquivTypeInfo_37, STATE_VARIABLE_UsedModules_42_42, STATE_VARIABLE_UsedModules_39);
    {
      ExistConstraints_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExistConstraints_33, 0) = ((MR_Box) (ExistQVars_28));
      MR_hl_field(MR_mktag(0), ExistConstraints_33, 1) = ((MR_Box) (Constraints_32));
      MR_hl_field(MR_mktag(0), ExistConstraints_33, 2) = ((MR_Box) (UnconstrainedExistQTVars_30));
      MR_hl_field(MR_mktag(0), ExistConstraints_33, 3) = ((MR_Box) (ConstrainedExistQTVars_31));
    }
    MaybeExistConstraints_26 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_33)));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Ctor_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (Ordinal_18));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeExistConstraints_26));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CtorName_20));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CtorArgs_24));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Arity_22));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Ctxt_23));
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
    MR_Word Arg0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Args0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Arg_34;
    MR_Word Args_35;
    MR_Word Name_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_32, (MR_Integer) 0))));
    MR_Word Type0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_32, (MR_Integer) 1))));
    MR_Word Context_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_32, (MR_Integer) 2))));
    MR_Word Type_43;
    MR_Word TypeCirc_45;
    MR_Word STATE_VARIABLE_TVarSet_54_54;
    MR_Word STATE_VARIABLE_EquivTypeInfo_55_55;
    MR_Word STATE_VARIABLE_UsedModules_56_56;
    MR_Word STATE_VARIABLE_Circ_57_57;
    MR_Word Var_44;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Type0_41, &Type_43, &Var_44, &TypeCirc_45, STATE_VARIABLE_TVarSet_0_8, &STATE_VARIABLE_TVarSet_54_54, STATE_VARIABLE_EquivTypeInfo_0_10, &STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_56_56);
    {
      Arg_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_34, 0) = ((MR_Box) (Name_40));
      MR_hl_field(MR_mktag(0), Arg_34, 1) = ((MR_Box) (Type_43));
      MR_hl_field(MR_mktag(0), Arg_34, 2) = ((MR_Box) (Context_42));
    }
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCirc_45, STATE_VARIABLE_Circ_0_6, &STATE_VARIABLE_Circ_57_57);
    parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Args0_33, &Args_35, STATE_VARIABLE_Circ_57_57, STATE_VARIABLE_Circ_7, STATE_VARIABLE_TVarSet_54_54, STATE_VARIABLE_TVarSet_9, STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_EquivTypeInfo_11, STATE_VARIABLE_UsedModules_56_56, STATE_VARIABLE_UsedModules_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_34));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_35));
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

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
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
  MR_Word Var_38;
  MR_Box conv6_STATE_VARIABLE_TVarSet_16;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_18;
  MR_Box conv4_Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (TypeEqvMap_8));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_38, STATE_VARIABLE_Constraints_0_13, STATE_VARIABLE_Constraints_14, ((MR_Box) (STATE_VARIABLE_TVarSet_0_15)), &conv6_STATE_VARIABLE_TVarSet_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_17)), &conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (Var_23)), &conv4_Var_12);
  *STATE_VARIABLE_TVarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_16));
  *STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_18));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
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

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word Cs0_9,
  MR_Word * Cs_10,
  MR_Word STATE_VARIABLE_TVarSet_0_14,
  MR_Word * STATE_VARIABLE_TVarSet_15,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_16,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_17)
{
  MR_Word Var_21;
  MR_Word UnivCs0_35;
  MR_Word ExistCs0_36;
  MR_Word UnivCs_37;
  MR_Word ExistCs_38;
  MR_Word STATE_VARIABLE_TVarSet_28_39;
  MR_Word STATE_VARIABLE_EquivTypeInfo_29_40;
  MR_Word STATE_VARIABLE_UsedModules_30_41;
  MR_Word Var_59;
  MR_Box conv6_STATE_VARIABLE_TVarSet_28_39;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
  MR_Box conv4_STATE_VARIABLE_UsedModules_30_41;
  MR_Word Var_13;

  Var_21 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  UnivCs0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_9, (MR_Integer) 0))));
  ExistCs0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_9, (MR_Integer) 1))));
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (TypeEqvMap_8));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_59, UnivCs0_35, &UnivCs_37, ((MR_Box) (STATE_VARIABLE_TVarSet_0_14)), &conv6_STATE_VARIABLE_TVarSet_28_39, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_16)), &conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (Var_21)), &conv4_STATE_VARIABLE_UsedModules_30_41);
  STATE_VARIABLE_TVarSet_28_39 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_28_39));
  STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_29_40));
  STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_30_41));
  parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_8, ExistCs0_36, &ExistCs_38, STATE_VARIABLE_TVarSet_28_39, STATE_VARIABLE_TVarSet_15, STATE_VARIABLE_EquivTypeInfo_29_40, STATE_VARIABLE_EquivTypeInfo_17, STATE_VARIABLE_UsedModules_30_41, &Var_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Cs_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_37));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_38));
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
  MR_Word Var_44;
  MR_Word Var_14;
  MR_Word Var_41;

  Var_25 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  Var_44 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_15, STATE_VARIABLE_Types_16, Changed_11, Var_44, &Var_41, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_EquivTypeInfo_0_19, STATE_VARIABLE_EquivTypeInfo_20, Var_25, &Var_14);
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
  MR_Word conv0_LambdaHeadVar__2_35;

  conv0_LambdaHeadVar__2_35 = parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__1725__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_35));
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
    MR_Word HeadCircTypeCtor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CircTypes_20, (MR_Integer) 0))));
    MR_Word TailCircTypeCtors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CircTypes_20, (MR_Integer) 1))));
    MR_Word Spec_23;
    MR_String TypeStr_38;
    MR_Word MainPieces_39;
    MR_Word CircSpecs_40;
    MR_Word Pieces_45;
    MR_Word Var_49;
    MR_Word Var_50;

    TypeStr_38 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet0_10, (MR_Integer) 0, Type0_12);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (TypeStr_38));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[22])));
    }
    {
      MainPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[18])));
      MR_hl_field(MR_mktag(1), MainPieces_39, 1) = ((MR_Box) (Var_49));
    }
    if ((TailCircTypeCtors_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_77;
      MR_Word Var_78;

      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (HeadCircTypeCtor_21));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[17])));
      }
      {
        CircSpecs_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CircSpecs_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[23])));
        MR_hl_field(MR_mktag(1), CircSpecs_40, 1) = ((MR_Box) (Var_77));
      }
    }
    else
    {
      MR_Word TypeCtorPieces_43;
      MR_Word Var_66;
      MR_Word Var_67;

      TypeCtorPieces_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[12]), CircTypes_20);
      Var_67 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", TypeCtorPieces_43);
      Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_67, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[17])));
      CircSpecs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[25])), Var_66);
    }
    Pieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_39, CircSpecs_40);
    {
      Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_contains_circular_eqv_type\'/5"));
      MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
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
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 0))));
  MR_Word ArgTypeVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 1))));
  MR_Word Type0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 2))));
  MR_Word TVarSet0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 4))));
  MR_Word SeqNum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 5))));
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
    MR_hl_field(MR_mktag(0), TypeCtor_17, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(MR_mktag(0), TypeCtor_17, 1) = ((MR_Box) (Arity_16));
  }
  Var_32 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), TypeEqvMap_6, (MR_Word) ((MR_Unsigned) 0U), Type0_12, &Type_18, &_Changed_19, &Circ_20, TVarSet0_13, &TVarSet_21, (MR_Word) ((MR_Unsigned) 0U), &Var_22, Var_32, &Var_23);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_20, &CircTypes_24);
  if ((CircTypes_24 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  else
  {
    MR_Word Var_34;
    MR_Word Pieces_40;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (TypeCtor_17));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[17])));
    }
    {
      Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[14])));
      MR_hl_field(MR_mktag(1), Pieces_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_circular_eqv_type\'/2"));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_34, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(MR_mktag(1), Var_34, 3) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(1), Var_34, 4) = ((MR_Box) (Pieces_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Info_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypeVars_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_18));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TVarSet_21));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_14));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SeqNum_15));
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

  parse_tree__equiv_type__replace_in_int_for_opt_spec_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv62_IntForOptSpec_16, ((MR_Word) (wrapper_arg_3)), &conv61_STATE_VARIABLE_RecompInfo_30, ((MR_Word) (wrapper_arg_5)), &conv60_STATE_VARIABLE_UsedModules_32, ((MR_Word) (wrapper_arg_7)), &conv59_STATE_VARIABLE_Specs_34);
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
  MR_Word conv54_STATE_VARIABLE_RecompInfo_55;
  MR_Word conv53_STATE_VARIABLE_UsedModules_57;
  MR_Word conv52_STATE_VARIABLE_Specs_59;

  parse_tree__equiv_type__replace_in_parse_tree_plain_opt_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv55_ParseTreePlainOpt_16, ((MR_Word) (wrapper_arg_3)), &conv54_STATE_VARIABLE_RecompInfo_55, ((MR_Word) (wrapper_arg_5)), &conv53_STATE_VARIABLE_UsedModules_57, ((MR_Word) (wrapper_arg_7)), &conv52_STATE_VARIABLE_Specs_59);
  *wrapper_arg_2 = ((MR_Box) (conv55_ParseTreePlainOpt_16));
  *wrapper_arg_4 = ((MR_Box) (conv54_STATE_VARIABLE_RecompInfo_55));
  *wrapper_arg_6 = ((MR_Box) (conv53_STATE_VARIABLE_UsedModules_57));
  *wrapper_arg_8 = ((MR_Box) (conv52_STATE_VARIABLE_Specs_59));
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
  MR_Word conv48_STATE_VARIABLE_ParseTreeTransOpt_20;
  MR_Word conv47_STATE_VARIABLE_RecompInfo_22;
  MR_Word conv46_STATE_VARIABLE_UsedModules_24;
  MR_Word conv45_STATE_VARIABLE_Specs_26;

  parse_tree__equiv_type__replace_in_parse_tree_trans_opt_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv48_STATE_VARIABLE_ParseTreeTransOpt_20, ((MR_Word) (wrapper_arg_3)), &conv47_STATE_VARIABLE_RecompInfo_22, ((MR_Word) (wrapper_arg_5)), &conv46_STATE_VARIABLE_UsedModules_24, ((MR_Word) (wrapper_arg_7)), &conv45_STATE_VARIABLE_Specs_26);
  *wrapper_arg_2 = ((MR_Box) (conv48_STATE_VARIABLE_ParseTreeTransOpt_20));
  *wrapper_arg_4 = ((MR_Box) (conv47_STATE_VARIABLE_RecompInfo_22));
  *wrapper_arg_6 = ((MR_Box) (conv46_STATE_VARIABLE_UsedModules_24));
  *wrapper_arg_8 = ((MR_Box) (conv45_STATE_VARIABLE_Specs_26));
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

  parse_tree__equiv_type__replace_in_indirect_int2_spec_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv41_IndirectIntSpec_16, ((MR_Word) (wrapper_arg_3)), &conv40_STATE_VARIABLE_RecompInfo_24, ((MR_Word) (wrapper_arg_5)), &conv39_STATE_VARIABLE_UsedModules_26, ((MR_Word) (wrapper_arg_7)), &conv38_STATE_VARIABLE_Specs_28);
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

  parse_tree__equiv_type__replace_in_direct_int1_spec_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv34_DirectIntSpec_16, ((MR_Word) (wrapper_arg_3)), &conv33_STATE_VARIABLE_RecompInfo_24, ((MR_Word) (wrapper_arg_5)), &conv32_STATE_VARIABLE_UsedModules_26, ((MR_Word) (wrapper_arg_7)), &conv31_STATE_VARIABLE_Specs_28);
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

  parse_tree__equiv_type__replace_in_ancestor_int_spec_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv27_AncestorIntSpec_16, ((MR_Word) (wrapper_arg_3)), &conv26_STATE_VARIABLE_RecompInfo_24, ((MR_Word) (wrapper_arg_5)), &conv25_STATE_VARIABLE_UsedModules_26, ((MR_Word) (wrapper_arg_7)), &conv24_STATE_VARIABLE_Specs_28);
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
  MR_Word conv17_STATE_VARIABLE_TypeEqvMap_10;
  MR_Word conv16_STATE_VARIABLE_InstEqvMap_12;

  parse_tree__equiv_type__build_eqv_maps_in_parse_tree_trans_opt_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_TypeEqvMap_10, ((MR_Word) (wrapper_arg_4)), &conv16_STATE_VARIABLE_InstEqvMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_TypeEqvMap_10));
  *wrapper_arg_5 = ((MR_Box) (conv16_STATE_VARIABLE_InstEqvMap_12));
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
  MR_Word ParseTreeModuleSrc0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 1))));
  MR_Word DirectInt1Specs0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 3))));
  MR_Word PlainOpts0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 4))));
  MR_Word TransOpts0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 5))));
  MR_Word IntForOptSpecs0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 6))));
  MR_Word ModuleVersionNumbers_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 8))));
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_18, (MR_Integer) 0))));
  MR_Word InstEqvMap_28;
  MR_Word ParseTreeModuleSrc_29;
  MR_Word AncestorIntSpecs_30;
  MR_Word DirectInt1Specs_31;
  MR_Word IndirectInt2Specs_32;
  MR_Word TransOpts_33;
  MR_Word PlainOpts_34;
  MR_Word IntForOptSpecs_35;
  MR_Word TypeRepnSpecs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_10, (MR_Integer) 7))));
  MR_Word EventSpecList0_37;
  MR_Word EventSpecList_38;
  MR_Word STATE_VARIABLE_TypeEqvMap_43_43;
  MR_Word STATE_VARIABLE_InstEqvMap_44_44;
  MR_Word STATE_VARIABLE_TypeEqvMap_45_45;
  MR_Word STATE_VARIABLE_InstEqvMap_46_46;
  MR_Word STATE_VARIABLE_TypeEqvMap_48_48;
  MR_Word STATE_VARIABLE_InstEqvMap_49_49;
  MR_Word STATE_VARIABLE_TypeEqvMap_51_51;
  MR_Word STATE_VARIABLE_InstEqvMap_52_52;
  MR_Word STATE_VARIABLE_TypeEqvMap_54_54;
  MR_Word STATE_VARIABLE_InstEqvMap_55_55;
  MR_Word STATE_VARIABLE_TypeEqvMap_57_57;
  MR_Word STATE_VARIABLE_InstEqvMap_58_58;
  MR_Word STATE_VARIABLE_TypeEqvMap_60_60;
  MR_Word STATE_VARIABLE_InstEqvMap_61_61;
  MR_Word STATE_VARIABLE_UsedModules_65_65;
  MR_Word STATE_VARIABLE_RecompInfo_67_67;
  MR_Word STATE_VARIABLE_UsedModules_68_68;
  MR_Word STATE_VARIABLE_Specs_69_69;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_RecompInfo_71_71;
  MR_Word STATE_VARIABLE_UsedModules_72_72;
  MR_Word STATE_VARIABLE_Specs_73_73;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_RecompInfo_75_75;
  MR_Word STATE_VARIABLE_UsedModules_76_76;
  MR_Word STATE_VARIABLE_Specs_77_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_RecompInfo_79_79;
  MR_Word STATE_VARIABLE_UsedModules_80_80;
  MR_Word STATE_VARIABLE_Specs_81_81;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_RecompInfo_83_83;
  MR_Word STATE_VARIABLE_UsedModules_84_84;
  MR_Word STATE_VARIABLE_Specs_85_85;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_RecompInfo_87_87;
  MR_Word STATE_VARIABLE_UsedModules_88_88;
  MR_Word STATE_VARIABLE_Specs_89_89;
  MR_Word Var_90;
  MR_Word STATE_VARIABLE_RecompInfo_91_91;
  MR_Word STATE_VARIABLE_UsedModules_92_92;
  MR_Word STATE_VARIABLE_Specs_93_93;
  MR_Box conv3_STATE_VARIABLE_TypeEqvMap_48_48;
  MR_Box conv2_STATE_VARIABLE_InstEqvMap_49_49;
  MR_Box conv7_STATE_VARIABLE_TypeEqvMap_51_51;
  MR_Box conv6_STATE_VARIABLE_InstEqvMap_52_52;
  MR_Box conv11_STATE_VARIABLE_TypeEqvMap_54_54;
  MR_Box conv10_STATE_VARIABLE_InstEqvMap_55_55;
  MR_Box conv15_STATE_VARIABLE_TypeEqvMap_57_57;
  MR_Box conv14_STATE_VARIABLE_InstEqvMap_58_58;
  MR_Box conv19_STATE_VARIABLE_TypeEqvMap_60_60;
  MR_Box conv18_STATE_VARIABLE_InstEqvMap_61_61;
  MR_Box conv23_TypeEqvMap_14;
  MR_Box conv22_InstEqvMap_28;
  MR_Box conv30_STATE_VARIABLE_RecompInfo_71_71;
  MR_Box conv29_STATE_VARIABLE_UsedModules_72_72;
  MR_Box conv28_STATE_VARIABLE_Specs_73_73;
  MR_Box conv37_STATE_VARIABLE_RecompInfo_75_75;
  MR_Box conv36_STATE_VARIABLE_UsedModules_76_76;
  MR_Box conv35_STATE_VARIABLE_Specs_77_77;
  MR_Box conv44_STATE_VARIABLE_RecompInfo_79_79;
  MR_Box conv43_STATE_VARIABLE_UsedModules_80_80;
  MR_Box conv42_STATE_VARIABLE_Specs_81_81;
  MR_Box conv51_STATE_VARIABLE_RecompInfo_83_83;
  MR_Box conv50_STATE_VARIABLE_UsedModules_84_84;
  MR_Box conv49_STATE_VARIABLE_Specs_85_85;
  MR_Box conv58_STATE_VARIABLE_RecompInfo_87_87;
  MR_Box conv57_STATE_VARIABLE_UsedModules_88_88;
  MR_Box conv56_STATE_VARIABLE_Specs_89_89;
  MR_Box conv65_STATE_VARIABLE_RecompInfo_91_91;
  MR_Box conv64_STATE_VARIABLE_UsedModules_92_92;
  MR_Box conv63_STATE_VARIABLE_Specs_93_93;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), &STATE_VARIABLE_TypeEqvMap_43_43);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0), &STATE_VARIABLE_InstEqvMap_44_44);
  parse_tree__equiv_type__build_eqv_maps_in_parse_tree_module_src_5_p_0(ParseTreeModuleSrc0_18, STATE_VARIABLE_TypeEqvMap_43_43, &STATE_VARIABLE_TypeEqvMap_45_45, STATE_VARIABLE_InstEqvMap_44_44, &STATE_VARIABLE_InstEqvMap_46_46);
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[6]), AncestorIntSpecs0_19, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_45_45)), &conv3_STATE_VARIABLE_TypeEqvMap_48_48, ((MR_Box) (STATE_VARIABLE_InstEqvMap_46_46)), &conv2_STATE_VARIABLE_InstEqvMap_49_49);
  STATE_VARIABLE_TypeEqvMap_48_48 = ((MR_Word) (conv3_STATE_VARIABLE_TypeEqvMap_48_48));
  STATE_VARIABLE_InstEqvMap_49_49 = ((MR_Word) (conv2_STATE_VARIABLE_InstEqvMap_49_49));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[7]), DirectInt1Specs0_20, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_48_48)), &conv7_STATE_VARIABLE_TypeEqvMap_51_51, ((MR_Box) (STATE_VARIABLE_InstEqvMap_49_49)), &conv6_STATE_VARIABLE_InstEqvMap_52_52);
  STATE_VARIABLE_TypeEqvMap_51_51 = ((MR_Word) (conv7_STATE_VARIABLE_TypeEqvMap_51_51));
  STATE_VARIABLE_InstEqvMap_52_52 = ((MR_Word) (conv6_STATE_VARIABLE_InstEqvMap_52_52));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[8]), IndirectInt2Specs0_21, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_51_51)), &conv11_STATE_VARIABLE_TypeEqvMap_54_54, ((MR_Box) (STATE_VARIABLE_InstEqvMap_52_52)), &conv10_STATE_VARIABLE_InstEqvMap_55_55);
  STATE_VARIABLE_TypeEqvMap_54_54 = ((MR_Word) (conv11_STATE_VARIABLE_TypeEqvMap_54_54));
  STATE_VARIABLE_InstEqvMap_55_55 = ((MR_Word) (conv10_STATE_VARIABLE_InstEqvMap_55_55));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[9]), PlainOpts0_22, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_54_54)), &conv15_STATE_VARIABLE_TypeEqvMap_57_57, ((MR_Box) (STATE_VARIABLE_InstEqvMap_55_55)), &conv14_STATE_VARIABLE_InstEqvMap_58_58);
  STATE_VARIABLE_TypeEqvMap_57_57 = ((MR_Word) (conv15_STATE_VARIABLE_TypeEqvMap_57_57));
  STATE_VARIABLE_InstEqvMap_58_58 = ((MR_Word) (conv14_STATE_VARIABLE_InstEqvMap_58_58));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[10]), TransOpts0_23, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_57_57)), &conv19_STATE_VARIABLE_TypeEqvMap_60_60, ((MR_Box) (STATE_VARIABLE_InstEqvMap_58_58)), &conv18_STATE_VARIABLE_InstEqvMap_61_61);
  STATE_VARIABLE_TypeEqvMap_60_60 = ((MR_Word) (conv19_STATE_VARIABLE_TypeEqvMap_60_60));
  STATE_VARIABLE_InstEqvMap_61_61 = ((MR_Word) (conv18_STATE_VARIABLE_InstEqvMap_61_61));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[11]), IntForOptSpecs0_24, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_60_60)), &conv23_TypeEqvMap_14, ((MR_Box) (STATE_VARIABLE_InstEqvMap_61_61)), &conv22_InstEqvMap_28);
  *TypeEqvMap_14 = ((MR_Word) (conv23_TypeEqvMap_14));
  InstEqvMap_28 = ((MR_Word) (conv22_InstEqvMap_28));
  STATE_VARIABLE_UsedModules_65_65 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0(*TypeEqvMap_14, InstEqvMap_28, ParseTreeModuleSrc0_18, &ParseTreeModuleSrc_29, STATE_VARIABLE_RecompInfo_0_40, &STATE_VARIABLE_RecompInfo_67_67, STATE_VARIABLE_UsedModules_65_65, &STATE_VARIABLE_UsedModules_68_68, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_69_69);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_7));
    MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(MR_mktag(0), Var_70, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_70, AncestorIntSpecs0_19, &AncestorIntSpecs_30, ((MR_Box) (STATE_VARIABLE_RecompInfo_67_67)), &conv30_STATE_VARIABLE_RecompInfo_71_71, ((MR_Box) (STATE_VARIABLE_UsedModules_68_68)), &conv29_STATE_VARIABLE_UsedModules_72_72, ((MR_Box) (STATE_VARIABLE_Specs_69_69)), &conv28_STATE_VARIABLE_Specs_73_73);
  STATE_VARIABLE_RecompInfo_71_71 = ((MR_Word) (conv30_STATE_VARIABLE_RecompInfo_71_71));
  STATE_VARIABLE_UsedModules_72_72 = ((MR_Word) (conv29_STATE_VARIABLE_UsedModules_72_72));
  STATE_VARIABLE_Specs_73_73 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_73_73));
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[2]));
    MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_8));
    MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(MR_mktag(0), Var_74, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_74, DirectInt1Specs0_20, &DirectInt1Specs_31, ((MR_Box) (STATE_VARIABLE_RecompInfo_71_71)), &conv37_STATE_VARIABLE_RecompInfo_75_75, ((MR_Box) (STATE_VARIABLE_UsedModules_72_72)), &conv36_STATE_VARIABLE_UsedModules_76_76, ((MR_Box) (STATE_VARIABLE_Specs_73_73)), &conv35_STATE_VARIABLE_Specs_77_77);
  STATE_VARIABLE_RecompInfo_75_75 = ((MR_Word) (conv37_STATE_VARIABLE_RecompInfo_75_75));
  STATE_VARIABLE_UsedModules_76_76 = ((MR_Word) (conv36_STATE_VARIABLE_UsedModules_76_76));
  STATE_VARIABLE_Specs_77_77 = ((MR_Word) (conv35_STATE_VARIABLE_Specs_77_77));
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[3]));
    MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_9));
    MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(MR_mktag(0), Var_78, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_78, IndirectInt2Specs0_21, &IndirectInt2Specs_32, ((MR_Box) (STATE_VARIABLE_RecompInfo_75_75)), &conv44_STATE_VARIABLE_RecompInfo_79_79, ((MR_Box) (STATE_VARIABLE_UsedModules_76_76)), &conv43_STATE_VARIABLE_UsedModules_80_80, ((MR_Box) (STATE_VARIABLE_Specs_77_77)), &conv42_STATE_VARIABLE_Specs_81_81);
  STATE_VARIABLE_RecompInfo_79_79 = ((MR_Word) (conv44_STATE_VARIABLE_RecompInfo_79_79));
  STATE_VARIABLE_UsedModules_80_80 = ((MR_Word) (conv43_STATE_VARIABLE_UsedModules_80_80));
  STATE_VARIABLE_Specs_81_81 = ((MR_Word) (conv42_STATE_VARIABLE_Specs_81_81));
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[4]));
    MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_10));
    MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_82, TransOpts0_23, &TransOpts_33, ((MR_Box) (STATE_VARIABLE_RecompInfo_79_79)), &conv51_STATE_VARIABLE_RecompInfo_83_83, ((MR_Box) (STATE_VARIABLE_UsedModules_80_80)), &conv50_STATE_VARIABLE_UsedModules_84_84, ((MR_Box) (STATE_VARIABLE_Specs_81_81)), &conv49_STATE_VARIABLE_Specs_85_85);
  STATE_VARIABLE_RecompInfo_83_83 = ((MR_Word) (conv51_STATE_VARIABLE_RecompInfo_83_83));
  STATE_VARIABLE_UsedModules_84_84 = ((MR_Word) (conv50_STATE_VARIABLE_UsedModules_84_84));
  STATE_VARIABLE_Specs_85_85 = ((MR_Word) (conv49_STATE_VARIABLE_Specs_85_85));
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[5]));
    MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_11));
    MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_86, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(MR_mktag(0), Var_86, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(MR_mktag(0), Var_86, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_86, PlainOpts0_22, &PlainOpts_34, ((MR_Box) (STATE_VARIABLE_RecompInfo_83_83)), &conv58_STATE_VARIABLE_RecompInfo_87_87, ((MR_Box) (STATE_VARIABLE_UsedModules_84_84)), &conv57_STATE_VARIABLE_UsedModules_88_88, ((MR_Box) (STATE_VARIABLE_Specs_85_85)), &conv56_STATE_VARIABLE_Specs_89_89);
  STATE_VARIABLE_RecompInfo_87_87 = ((MR_Word) (conv58_STATE_VARIABLE_RecompInfo_87_87));
  STATE_VARIABLE_UsedModules_88_88 = ((MR_Word) (conv57_STATE_VARIABLE_UsedModules_88_88));
  STATE_VARIABLE_Specs_89_89 = ((MR_Word) (conv56_STATE_VARIABLE_Specs_89_89));
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[6]));
    MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (parse_tree__equiv_type__expand_eqv_types_insts_9_p_0_12));
    MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ModuleName_27));
    MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (*TypeEqvMap_14));
    MR_hl_field(MR_mktag(0), Var_90, 5) = ((MR_Box) (InstEqvMap_28));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_90, IntForOptSpecs0_24, &IntForOptSpecs_35, ((MR_Box) (STATE_VARIABLE_RecompInfo_87_87)), &conv65_STATE_VARIABLE_RecompInfo_91_91, ((MR_Box) (STATE_VARIABLE_UsedModules_88_88)), &conv64_STATE_VARIABLE_UsedModules_92_92, ((MR_Box) (STATE_VARIABLE_Specs_89_89)), &conv63_STATE_VARIABLE_Specs_93_93);
  STATE_VARIABLE_RecompInfo_91_91 = ((MR_Word) (conv65_STATE_VARIABLE_RecompInfo_91_91));
  STATE_VARIABLE_UsedModules_92_92 = ((MR_Word) (conv64_STATE_VARIABLE_UsedModules_92_92));
  STATE_VARIABLE_Specs_93_93 = ((MR_Word) (conv63_STATE_VARIABLE_Specs_93_93));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *AugCompUnit_11 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ParseTreeModuleSrc_29));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AncestorIntSpecs_30));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DirectInt1Specs_31));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IndirectInt2Specs_32));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PlainOpts_34));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TransOpts_33));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntForOptSpecs_35));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeRepnSpecs_36));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ModuleVersionNumbers_26));
  }
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap0_12, &EventSpecList0_37);
  parse_tree__equiv_type__replace_in_event_specs_9_p_0(*TypeEqvMap_14, EventSpecList0_37, &EventSpecList_38, STATE_VARIABLE_RecompInfo_91_91, STATE_VARIABLE_RecompInfo_41, STATE_VARIABLE_UsedModules_92_92, STATE_VARIABLE_UsedModules_39, STATE_VARIABLE_Specs_93_93, STATE_VARIABLE_Specs_42);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecList_38, EventSpecMap_13);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_event_specs_9_p_0(
  MR_Word TypeEqvMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_4,
  MR_Word * STATE_VARIABLE_RecompInfo_5,
  MR_Word STATE_VARIABLE_UsedModules_0_6,
  MR_Word * STATE_VARIABLE_UsedModules_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    *STATE_VARIABLE_UsedModules_7 = STATE_VARIABLE_UsedModules_0_6;
    *STATE_VARIABLE_RecompInfo_5 = STATE_VARIABLE_RecompInfo_0_4;
  }
  else
  {
    MR_String Name_21;
    MR_Word EventSpec0_22;
    MR_Word NameSpecs0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word EventSpec_24;
    MR_Word NameSpecs_25;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_RecompInfo_37_37;
    MR_Word STATE_VARIABLE_UsedModules_38_38;
    MR_Word STATE_VARIABLE_Specs_39_39;
    MR_Integer EventNumber_55;
    MR_String EventName_56;
    MR_Integer EventLineNumber_57;
    MR_Word Attrs0_58;
    MR_Word SyntAttrNumOrder_59;
    MR_Word Attrs_60;

    Name_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
    EventSpec0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
    EventNumber_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec0_22, (MR_Integer) 0))));
    EventName_56 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSpec0_22, (MR_Integer) 1))));
    EventLineNumber_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec0_22, (MR_Integer) 2))));
    Attrs0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec0_22, (MR_Integer) 3))));
    SyntAttrNumOrder_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec0_22, (MR_Integer) 4))));
    parse_tree__equiv_type__replace_in_event_attrs_9_p_0(TypeEqvMap_1, Attrs0_58, &Attrs_60, STATE_VARIABLE_RecompInfo_0_4, &STATE_VARIABLE_RecompInfo_37_37, STATE_VARIABLE_UsedModules_0_6, &STATE_VARIABLE_UsedModules_38_38, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_39_39);
    {
      EventSpec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventSpec_24, 0) = ((MR_Box) (EventNumber_55));
      MR_hl_field(MR_mktag(0), EventSpec_24, 1) = ((MR_Box) (EventName_56));
      MR_hl_field(MR_mktag(0), EventSpec_24, 2) = ((MR_Box) (EventLineNumber_57));
      MR_hl_field(MR_mktag(0), EventSpec_24, 3) = ((MR_Box) (Attrs_60));
      MR_hl_field(MR_mktag(0), EventSpec_24, 4) = ((MR_Box) (SyntAttrNumOrder_59));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Name_21));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (EventSpec_24));
    }
    parse_tree__equiv_type__replace_in_event_specs_9_p_0(TypeEqvMap_1, NameSpecs0_23, &NameSpecs_25, STATE_VARIABLE_RecompInfo_37_37, STATE_VARIABLE_RecompInfo_5, STATE_VARIABLE_UsedModules_38_38, STATE_VARIABLE_UsedModules_7, STATE_VARIABLE_Specs_39_39, STATE_VARIABLE_Specs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NameSpecs_25));
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_event_attrs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_RecompInfo_0_4,
  MR_Word * STATE_VARIABLE_RecompInfo_5,
  MR_Word STATE_VARIABLE_UsedModules_0_6,
  MR_Word * STATE_VARIABLE_UsedModules_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    *STATE_VARIABLE_UsedModules_7 = STATE_VARIABLE_UsedModules_0_6;
    *STATE_VARIABLE_RecompInfo_5 = STATE_VARIABLE_RecompInfo_0_4;
  }
  else
  {
    MR_Word Attr0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Attrs0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Attr_23;
    MR_Word Attrs_24;
    MR_Word STATE_VARIABLE_UsedModules_35_35;
    MR_Integer AttrNum_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr0_21, (MR_Integer) 0))));
    MR_String AttrName_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), Attr0_21, (MR_Integer) 1))));
    MR_Word AttrType0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_21, (MR_Integer) 2))));
    MR_Word AttrMode_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_21, (MR_Integer) 3))));
    MR_Word MaybeSynthCall_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_21, (MR_Integer) 4))));
    MR_Word TVarSet0_57;
    MR_Word AttrType_58;
    MR_Word _Changed_59;
    MR_Word _TVarSet_60;
    MR_Word _EquivTypeInfo_61;
    MR_Word Var_80;

    TVarSet0_57 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U), AttrType0_54, &AttrType_58, &_Changed_59, &Var_80, TVarSet0_57, &_TVarSet_60, (MR_Word) ((MR_Unsigned) 0U), &_EquivTypeInfo_61, STATE_VARIABLE_UsedModules_0_6, &STATE_VARIABLE_UsedModules_35_35);
    {
      Attr_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Attr_23, 0) = ((MR_Box) (AttrNum_52));
      MR_hl_field(MR_mktag(0), Attr_23, 1) = ((MR_Box) (AttrName_53));
      MR_hl_field(MR_mktag(0), Attr_23, 2) = ((MR_Box) (AttrType_58));
      MR_hl_field(MR_mktag(0), Attr_23, 3) = ((MR_Box) (AttrMode_55));
      MR_hl_field(MR_mktag(0), Attr_23, 4) = ((MR_Box) (MaybeSynthCall_56));
    }
    parse_tree__equiv_type__replace_in_event_attrs_9_p_0(HeadVar__1_1, Attrs0_22, &Attrs_24, STATE_VARIABLE_RecompInfo_0_4, STATE_VARIABLE_RecompInfo_5, STATE_VARIABLE_UsedModules_35_35, STATE_VARIABLE_UsedModules_7, STATE_VARIABLE_Specs_0_8, STATE_VARIABLE_Specs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Attr_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Attrs_24));
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

  parse_tree__equiv_type__replace_in_type_ctor_checked_defn_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_CheckedDefn_20, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_RecompInfo_63, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_65, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_67);
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
  MR_Word STATE_VARIABLE_RecompInfo_0_74,
  MR_Word * STATE_VARIABLE_RecompInfo_75,
  MR_Word STATE_VARIABLE_UsedModules_0_76,
  MR_Word * STATE_VARIABLE_UsedModules_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79)
{
  MR_Word MaybeRecordInt_18 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_3[0]));
  MR_Word MaybeRecordImp_19 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_3[1]));
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 0))));
  MR_Word ModuleNameContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 1))));
  MR_Word IntInclMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 2))));
  MR_Word ImpInclMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 3))));
  MR_Word InclMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 4))));
  MR_Word IntImportMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 5))));
  MR_Word IntUseMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 6))));
  MR_Word ImpImportMap_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 7))));
  MR_Word ImpUseMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 8))));
  MR_Word ImportUseMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 9))));
  MR_Word IntFIMSpecMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 10))));
  MR_Word ImpFIMSpecMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 11))));
  MR_Word IntSelfFIMLangs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 12))));
  MR_Word ImpSelfFIMLangs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 13))));
  MR_Word TypeCtorCheckedMap0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 14))));
  MR_Word TypeSpecs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 17))));
  MR_Word InstModeSpecs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 18))));
  MR_Word IntTypeClasses0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 19))));
  MR_Word IntInstances0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 20))));
  MR_Word IntPredDecls0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 21))));
  MR_Word IntModeDecls0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 22))));
  MR_Word IntDeclPragmas0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 23))));
  MR_Word IntPromises_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 24))));
  MR_Word IntBadPreds_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 25))));
  MR_Word ImpTypeClasses0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 26))));
  MR_Word ImpInstances0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 27))));
  MR_Word ImpPredDecls0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 28))));
  MR_Word ImpModeDecls0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 29))));
  MR_Word ImpForeignExportEnums_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 31))));
  MR_Word ImpDeclPragmas0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 32))));
  MR_Word ImpImplPragmas0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 33))));
  MR_Word ImpPromises_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 34))));
  MR_Word ImpInitialises_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 35))));
  MR_Word ImpFinalises_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 36))));
  MR_Word ImpMutables0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 37))));
  MR_Word TypeCtorCheckedMap_58;
  MR_Word InstCtorCheckedMap_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 15))));
  MR_Word ModeCtorCheckedMap_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 16))));
  MR_Word IntTypeClasses_61;
  MR_Word IntInstances_62;
  MR_Word IntPredDecls_63;
  MR_Word IntModeDecls_64;
  MR_Word IntDeclPragmas_65;
  MR_Word ImpTypeClasses_66;
  MR_Word ImpInstances_67;
  MR_Word ImpPredDecls_68;
  MR_Word ImpModeDecls_69;
  MR_Word ImpClauses_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_13, (MR_Integer) 30))));
  MR_Word ImpDeclPragmas_71;
  MR_Word ImpImplPragmas_72;
  MR_Word ImpMutables_73;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_RecompInfo_83_83;
  MR_Word STATE_VARIABLE_UsedModules_84_84;
  MR_Word STATE_VARIABLE_Specs_85_85;
  MR_Word STATE_VARIABLE_RecompInfo_87_87;
  MR_Word STATE_VARIABLE_UsedModules_88_88;
  MR_Word STATE_VARIABLE_Specs_89_89;
  MR_Word STATE_VARIABLE_RecompInfo_91_91;
  MR_Word STATE_VARIABLE_UsedModules_92_92;
  MR_Word STATE_VARIABLE_Specs_93_93;
  MR_Word STATE_VARIABLE_RecompInfo_95_95;
  MR_Word STATE_VARIABLE_UsedModules_96_96;
  MR_Word STATE_VARIABLE_Specs_97_97;
  MR_Word STATE_VARIABLE_RecompInfo_99_99;
  MR_Word STATE_VARIABLE_UsedModules_100_100;
  MR_Word STATE_VARIABLE_Specs_101_101;
  MR_Word STATE_VARIABLE_RecompInfo_103_103;
  MR_Word STATE_VARIABLE_UsedModules_104_104;
  MR_Word STATE_VARIABLE_Specs_105_105;
  MR_Word STATE_VARIABLE_RecompInfo_107_107;
  MR_Word STATE_VARIABLE_UsedModules_108_108;
  MR_Word STATE_VARIABLE_Specs_109_109;
  MR_Word STATE_VARIABLE_RecompInfo_111_111;
  MR_Word STATE_VARIABLE_UsedModules_112_112;
  MR_Word STATE_VARIABLE_Specs_113_113;
  MR_Word STATE_VARIABLE_RecompInfo_115_115;
  MR_Word STATE_VARIABLE_UsedModules_116_116;
  MR_Word STATE_VARIABLE_Specs_117_117;
  MR_Word STATE_VARIABLE_RecompInfo_119_119;
  MR_Word STATE_VARIABLE_UsedModules_120_120;
  MR_Word STATE_VARIABLE_Specs_121_121;
  MR_Word STATE_VARIABLE_RecompInfo_123_123;
  MR_Word STATE_VARIABLE_UsedModules_124_124;
  MR_Word STATE_VARIABLE_Specs_125_125;
  MR_Word STATE_VARIABLE_RecompInfo_127_127;
  MR_Word STATE_VARIABLE_UsedModules_128_128;
  MR_Word STATE_VARIABLE_Specs_129_129;
  MR_Box conv6_STATE_VARIABLE_RecompInfo_83_83;
  MR_Box conv5_STATE_VARIABLE_UsedModules_84_84;
  MR_Box conv4_STATE_VARIABLE_Specs_85_85;

  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_parse_tree_module_src_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (ModuleName_20));
    MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (MaybeRecordInt_18));
    MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (MaybeRecordImp_19));
    MR_hl_field(MR_mktag(0), Var_82, 6) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(MR_mktag(0), Var_82, 7) = ((MR_Box) (InstEqvMap_12));
  }
  mercury__map__map_values_foldl3_9_p_3((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_82, TypeCtorCheckedMap0_34, &TypeCtorCheckedMap_58, ((MR_Box) (STATE_VARIABLE_RecompInfo_0_74)), &conv6_STATE_VARIABLE_RecompInfo_83_83, ((MR_Box) (STATE_VARIABLE_UsedModules_0_76)), &conv5_STATE_VARIABLE_UsedModules_84_84, ((MR_Box) (STATE_VARIABLE_Specs_0_78)), &conv4_STATE_VARIABLE_Specs_85_85);
  STATE_VARIABLE_RecompInfo_83_83 = ((MR_Word) (conv6_STATE_VARIABLE_RecompInfo_83_83));
  STATE_VARIABLE_UsedModules_84_84 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_84_84));
  STATE_VARIABLE_Specs_85_85 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_85_85));
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, InstEqvMap_12, IntTypeClasses0_39, &IntTypeClasses_61, STATE_VARIABLE_RecompInfo_83_83, &STATE_VARIABLE_RecompInfo_87_87, STATE_VARIABLE_UsedModules_84_84, &STATE_VARIABLE_UsedModules_88_88, STATE_VARIABLE_Specs_85_85, &STATE_VARIABLE_Specs_89_89);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, IntInstances0_40, &IntInstances_62, STATE_VARIABLE_RecompInfo_87_87, &STATE_VARIABLE_RecompInfo_91_91, STATE_VARIABLE_UsedModules_88_88, &STATE_VARIABLE_UsedModules_92_92, STATE_VARIABLE_Specs_89_89, &STATE_VARIABLE_Specs_93_93);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, InstEqvMap_12, IntPredDecls0_41, &IntPredDecls_63, STATE_VARIABLE_RecompInfo_91_91, &STATE_VARIABLE_RecompInfo_95_95, STATE_VARIABLE_UsedModules_92_92, &STATE_VARIABLE_UsedModules_96_96, STATE_VARIABLE_Specs_93_93, &STATE_VARIABLE_Specs_97_97);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_20, InstEqvMap_12, IntModeDecls0_42, &IntModeDecls_64, STATE_VARIABLE_RecompInfo_95_95, &STATE_VARIABLE_RecompInfo_99_99, STATE_VARIABLE_UsedModules_96_96, &STATE_VARIABLE_UsedModules_100_100, STATE_VARIABLE_Specs_97_97, &STATE_VARIABLE_Specs_101_101);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordInt_18, TypeEqvMap_11, IntDeclPragmas0_43, &IntDeclPragmas_65, STATE_VARIABLE_RecompInfo_99_99, &STATE_VARIABLE_RecompInfo_103_103, STATE_VARIABLE_UsedModules_100_100, &STATE_VARIABLE_UsedModules_104_104, STATE_VARIABLE_Specs_101_101, &STATE_VARIABLE_Specs_105_105);
  parse_tree__equiv_type__replace_in_list__ho13_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, InstEqvMap_12, ImpTypeClasses0_46, &ImpTypeClasses_66, STATE_VARIABLE_RecompInfo_103_103, &STATE_VARIABLE_RecompInfo_107_107, STATE_VARIABLE_UsedModules_104_104, &STATE_VARIABLE_UsedModules_108_108, STATE_VARIABLE_Specs_105_105, &STATE_VARIABLE_Specs_109_109);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_50_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, ImpInstances0_47, &ImpInstances_67, STATE_VARIABLE_RecompInfo_107_107, &STATE_VARIABLE_RecompInfo_111_111, STATE_VARIABLE_UsedModules_108_108, &STATE_VARIABLE_UsedModules_112_112, STATE_VARIABLE_Specs_109_109, &STATE_VARIABLE_Specs_113_113);
  parse_tree__equiv_type__replace_in_list__ho11_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, InstEqvMap_12, ImpPredDecls0_48, &ImpPredDecls_68, STATE_VARIABLE_RecompInfo_111_111, &STATE_VARIABLE_RecompInfo_115_115, STATE_VARIABLE_UsedModules_112_112, &STATE_VARIABLE_UsedModules_116_116, STATE_VARIABLE_Specs_113_113, &STATE_VARIABLE_Specs_117_117);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_48_95_95_91_50_44_32_51_93_95_48_13_p_0(ModuleName_20, InstEqvMap_12, ImpModeDecls0_49, &ImpModeDecls_69, STATE_VARIABLE_RecompInfo_115_115, &STATE_VARIABLE_RecompInfo_119_119, STATE_VARIABLE_UsedModules_116_116, &STATE_VARIABLE_UsedModules_120_120, STATE_VARIABLE_Specs_117_117, &STATE_VARIABLE_Specs_121_121);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, ImpDeclPragmas0_52, &ImpDeclPragmas_71, STATE_VARIABLE_RecompInfo_119_119, &STATE_VARIABLE_RecompInfo_123_123, STATE_VARIABLE_UsedModules_120_120, &STATE_VARIABLE_UsedModules_124_124, STATE_VARIABLE_Specs_121_121, &STATE_VARIABLE_Specs_125_125);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_52_93_95_48_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, ImpImplPragmas0_53, &ImpImplPragmas_72, STATE_VARIABLE_RecompInfo_123_123, &STATE_VARIABLE_RecompInfo_127_127, STATE_VARIABLE_UsedModules_124_124, &STATE_VARIABLE_UsedModules_128_128, STATE_VARIABLE_Specs_125_125, &STATE_VARIABLE_Specs_129_129);
  parse_tree__equiv_type__replace_in_list__ho16_13_p_0(ModuleName_20, MaybeRecordImp_19, TypeEqvMap_11, InstEqvMap_12, ImpMutables0_57, &ImpMutables_73, STATE_VARIABLE_RecompInfo_127_127, STATE_VARIABLE_RecompInfo_75, STATE_VARIABLE_UsedModules_128_128, STATE_VARIABLE_UsedModules_77, STATE_VARIABLE_Specs_129_129, STATE_VARIABLE_Specs_79);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeModuleSrc_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_21));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_22));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ImpInclMap_23));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_24));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportMap_25));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_26));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportMap_27));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUseMap_28));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImportUseMap_29));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntFIMSpecMap_30));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpFIMSpecMap_31));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntSelfFIMLangs_32));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ImpSelfFIMLangs_33));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (TypeCtorCheckedMap_58));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (InstCtorCheckedMap_59));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (ModeCtorCheckedMap_60));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (TypeSpecs_37));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (InstModeSpecs_38));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntTypeClasses_61));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntInstances_62));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPredDecls_63));
    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntModeDecls_64));
    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (IntDeclPragmas_65));
    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (IntPromises_44));
    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (IntBadPreds_45));
    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpTypeClasses_66));
    MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpInstances_67));
    MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (ImpPredDecls_68));
    MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (ImpModeDecls_69));
    MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (ImpClauses_70));
    MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (ImpForeignExportEnums_51));
    MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (ImpDeclPragmas_71));
    MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (ImpImplPragmas_72));
    MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (ImpPromises_54));
    MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (ImpInitialises_55));
    MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (ImpFinalises_56));
    MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (ImpMutables_73));
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

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_49_56_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[7]), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_49_56_95_95_91_52_93_95_48_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_109_112_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_109_112_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_20)
{
  MR_Word Pragma0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
  MR_Word SeqNum_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) Pragma0_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Info_17 = Info0_16;
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_44 = STATE_VARIABLE_RecompInfo_0_43;
        *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo0_24 = (MR_Word) (MR_body((MR_Word) (Pragma0_21), (MR_Integer) 2));
        MR_Word FPInfo_25;
        MR_Word Pragma_26;

        parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(ModuleName_12, MaybeRecord_13, TypeEqvMap_14, FPInfo0_24, &FPInfo_25, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
        Pragma_26 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FPInfo_25)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Info_17 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pragma_26));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_22));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SeqNum_23));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        *Info_17 = Info0_16;
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_44 = STATE_VARIABLE_RecompInfo_0_43;
        *STATE_VARIABLE_UsedModules_46 = STATE_VARIABLE_UsedModules_0_45;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word FPInfo0_16,
  MR_Word * FPInfo_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_42,
  MR_Word * STATE_VARIABLE_RecompInfo_43,
  MR_Word STATE_VARIABLE_UsedModules_0_44,
  MR_Word * STATE_VARIABLE_UsedModules_45,
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
  MR_Word UserSharing0_28;
  MR_Word Attrs_39;
  MR_Integer Arity_40;
  MR_Word ItemId_41;
  MR_Word STATE_VARIABLE_EquivTypeInfo_46_46;
  MR_Word STATE_VARIABLE_EquivTypeInfo_50_50;
  MR_Word Var_54;
  MR_Word Sharing0_29;
  MR_Word Types0_31;
  MR_Word TVarSet0_32;
  MR_Word MaybeTypes0_30;
  MR_Word Var_47;

  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  Attrs0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_16, (MR_Integer) 0))));
  PName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_16, (MR_Integer) 1))));
  PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo0_16, (MR_Integer) 2))) & (MR_Integer) 1);
  ProcVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_16, (MR_Integer) 3))));
  ProcVarset_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_16, (MR_Integer) 4))));
  ProcInstVarset_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_16, (MR_Integer) 5))));
  ProcImpl_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_16, (MR_Integer) 6))));
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, PName_21, STATE_VARIABLE_RecompInfo_0_42, &STATE_VARIABLE_EquivTypeInfo_46_46);
  UserSharing0_28 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_20);
  succeeded = (UserSharing0_28 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Sharing0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_28, (MR_Integer) 0))));
    MaybeTypes0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_28, (MR_Integer) 1))));
    succeeded = (MaybeTypes0_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypes0_30, (MR_Integer) 0))));
      Types0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
      TVarSet0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Types_33;
    MR_Word TVarSet_35;
    MR_Word Sharing_36;
    MR_Word MaybeTypes_37;
    MR_Word UserSharing_38;
    MR_Word STATE_VARIABLE_EquivTypeInfo_48_48;
    MR_Word STATE_VARIABLE_UsedModules_49_49;
    MR_Word Var_52;
    MR_Word Var_75;
    MR_Word _AnythingChanged_34;
    MR_Word Var_72;

    Var_75 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), Types0_31, &Types_33, &_AnythingChanged_34, Var_75, &Var_72, TVarSet0_32, &TVarSet_35, STATE_VARIABLE_EquivTypeInfo_46_46, &STATE_VARIABLE_EquivTypeInfo_48_48, STATE_VARIABLE_UsedModules_0_44, &STATE_VARIABLE_UsedModules_49_49);
    parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(MaybeRecord_13, TypeEqvMap_14, TVarSet0_32, Sharing0_29, &Sharing_36, STATE_VARIABLE_EquivTypeInfo_48_48, &STATE_VARIABLE_EquivTypeInfo_50_50, STATE_VARIABLE_UsedModules_49_49, STATE_VARIABLE_UsedModules_45);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Types_33));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (TVarSet_35));
    }
    {
      MaybeTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypes_37, 0) = ((MR_Box) (Var_52));
    }
    {
      UserSharing_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UserSharing_38, 0) = ((MR_Box) (Sharing_36));
      MR_hl_field(MR_mktag(1), UserSharing_38, 1) = ((MR_Box) (MaybeTypes_37));
    }
    parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_38, Attrs0_20, &Attrs_39);
  }
  else
  {
    Attrs_39 = Attrs0_20;
    STATE_VARIABLE_EquivTypeInfo_50_50 = STATE_VARIABLE_EquivTypeInfo_46_46;
    *STATE_VARIABLE_UsedModules_45 = STATE_VARIABLE_UsedModules_0_44;
  }
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), ProcVars_23, &Arity_40);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (PName_21));
    MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Arity_40));
  }
  {
    ItemId_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_41, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 9));
    MR_hl_field(MR_mktag(0), ItemId_41, 1) = ((MR_Box) (Var_54));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_41, STATE_VARIABLE_EquivTypeInfo_50_50, STATE_VARIABLE_RecompInfo_0_42, STATE_VARIABLE_RecompInfo_43);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *FPInfo_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Attrs_39));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PName_21));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ProcVars_23));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ProcVarset_24));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ProcInstVarset_25));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ProcImpl_26));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
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

  parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_UsedModules_22);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_20));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_22));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word TVarSet_12,
  MR_Word SharingDomain0_13,
  MR_Word * SharingDomain_14,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_21,
  MR_Word STATE_VARIABLE_UsedModules_0_22,
  MR_Word * STATE_VARIABLE_UsedModules_23)
{
  switch (MR_tag((MR_Word) SharingDomain0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *SharingDomain_14 = SharingDomain0_13;
        *STATE_VARIABLE_EquivTypeInfo_21 = STATE_VARIABLE_EquivTypeInfo_0_20;
        *STATE_VARIABLE_UsedModules_23 = STATE_VARIABLE_UsedModules_0_22;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SharingPairs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SharingDomain0_13, (MR_Integer) 0))));
        MR_Word SharingPairs_19;
        MR_Word Var_24;
        MR_Box conv4_STATE_VARIABLE_EquivTypeInfo_21;
        MR_Box conv3_STATE_VARIABLE_UsedModules_23;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (MaybeRecord_10));
          MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (TypeEqvMap_11));
          MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (TVarSet_12));
        }
        mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_24, SharingPairs0_18, &SharingPairs_19, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_20)), &conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (STATE_VARIABLE_UsedModules_0_22)), &conv3_STATE_VARIABLE_UsedModules_23);
        *STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) (conv4_STATE_VARIABLE_EquivTypeInfo_21));
        *STATE_VARIABLE_UsedModules_23 = ((MR_Word) (conv3_STATE_VARIABLE_UsedModules_23));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *SharingDomain_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SharingPairs_19));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *SharingDomain_14 = SharingDomain0_13;
        *STATE_VARIABLE_EquivTypeInfo_21 = STATE_VARIABLE_EquivTypeInfo_0_20;
        *STATE_VARIABLE_UsedModules_23 = STATE_VARIABLE_UsedModules_0_22;
      }
      break;
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

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_48_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[6]), RevItems_24, Items_20);
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_100_101_99_108_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
  MR_Word ModuleName_12,
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word Info0_16,
  MR_Word * Info_17,
  MR_Word STATE_VARIABLE_RecompInfo_0_37,
  MR_Word * STATE_VARIABLE_RecompInfo_38,
  MR_Word STATE_VARIABLE_UsedModules_0_39,
  MR_Word * STATE_VARIABLE_UsedModules_40,
  MR_Word * Specs_20)
{
  MR_bool succeeded;
  MR_Word Pragma0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
  MR_Word SeqNum_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) Pragma0_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Info_17 = Info0_16;
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_38 = STATE_VARIABLE_RecompInfo_0_37;
        *STATE_VARIABLE_UsedModules_40 = STATE_VARIABLE_UsedModules_0_39;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeSpecInfo0_24 = (MR_Word) (MR_body((MR_Word) (Pragma0_21), (MR_Integer) 2));
        MR_Word TypeSpecInfo_25;
        MR_Word Pragma_26;
        MR_Word PFUMM_55;
        MR_Word PredName_56;
        MR_Word NewName_57;
        MR_Word Subst0_58;
        MR_Word TVarSet0_59;
        MR_Word ItemIds0_60;
        MR_Word ExpandedItems0_62;
        MR_Word Subst_63;
        MR_Word TVarSet_64;
        MR_Word ExpandedItems_65;
        MR_Word ItemIds_66;

        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        PFUMM_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 0))));
        PredName_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 1))));
        NewName_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 2))));
        Subst0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 3))));
        TVarSet0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 4))));
        ItemIds0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_24, (MR_Integer) 5))));
        succeeded = (STATE_VARIABLE_RecompInfo_0_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (!(succeeded))
        {
          MR_Word Var_69;

          succeeded = ((MR_tag((MR_Word) PredName_56)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredName_56, (MR_Integer) 0))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_69);
          }
        }
        if (succeeded)
          ExpandedItems0_62 = (MR_Word) ((MR_Unsigned) 0U);
        else
          {
            ExpandedItems0_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExpandedItems0_62, 0) = ((MR_Box) (ModuleName_12));
            MR_hl_field(MR_mktag(1), ExpandedItems0_62, 1) = ((MR_Box) (ItemIds0_60));
          }
        parse_tree__equiv_type__replace_in_subst_10_p_0(MaybeRecord_13, TypeEqvMap_14, Subst0_58, &Subst_63, TVarSet0_59, &TVarSet_64, ExpandedItems0_62, &ExpandedItems_65, STATE_VARIABLE_UsedModules_0_39, STATE_VARIABLE_UsedModules_40);
        if ((ExpandedItems_65 == (MR_Word) ((MR_Unsigned) 0U)))
          ItemIds_66 = ItemIds0_60;
        else
          ItemIds_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpandedItems_65, (MR_Integer) 1))));
        {
          TypeSpecInfo_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeSpecInfo_25, 0) = ((MR_Box) (PFUMM_55));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_25, 1) = ((MR_Box) (PredName_56));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_25, 2) = ((MR_Box) (NewName_57));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_25, 3) = ((MR_Box) (Subst_63));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_25, 4) = ((MR_Box) (TVarSet_64));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_25, 5) = ((MR_Box) (ItemIds_66));
        }
        *STATE_VARIABLE_RecompInfo_38 = STATE_VARIABLE_RecompInfo_0_37;
        Pragma_26 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (TypeSpecInfo_25)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Info_17 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Pragma_26));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_22));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SeqNum_23));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        *Info_17 = Info0_16;
        *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RecompInfo_38 = STATE_VARIABLE_RecompInfo_0_37;
        *STATE_VARIABLE_UsedModules_40 = STATE_VARIABLE_UsedModules_0_39;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TVarSet_0_5,
  MR_Word * STATE_VARIABLE_TVarSet_6,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_7,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_8,
  MR_Word STATE_VARIABLE_UsedModules_0_9,
  MR_Word * STATE_VARIABLE_UsedModules_10)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_10 = STATE_VARIABLE_UsedModules_0_9;
    *STATE_VARIABLE_EquivTypeInfo_8 = STATE_VARIABLE_EquivTypeInfo_0_7;
    *STATE_VARIABLE_TVarSet_6 = STATE_VARIABLE_TVarSet_0_5;
  }
  else
  {
    MR_Word Var_24;
    MR_Word Type0_25;
    MR_Word Subst0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_27;
    MR_Word Subst_28;
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_TVarSet_41_41;
    MR_Word STATE_VARIABLE_EquivTypeInfo_42_42;
    MR_Word STATE_VARIABLE_UsedModules_43_43;
    MR_Word Var_32;
    MR_Word Var_61;

    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
    Type0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Word) ((MR_Unsigned) 0U), Type0_25, &Type_27, &Var_32, &Var_61, STATE_VARIABLE_TVarSet_0_5, &STATE_VARIABLE_TVarSet_41_41, STATE_VARIABLE_EquivTypeInfo_0_7, &STATE_VARIABLE_EquivTypeInfo_42_42, STATE_VARIABLE_UsedModules_0_9, &STATE_VARIABLE_UsedModules_43_43);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Type_27));
    }
    parse_tree__equiv_type__replace_in_subst_10_p_0(HeadVar__1_1, HeadVar__2_2, Subst0_26, &Subst_28, STATE_VARIABLE_TVarSet_41_41, STATE_VARIABLE_TVarSet_6, STATE_VARIABLE_EquivTypeInfo_42_42, STATE_VARIABLE_EquivTypeInfo_8, STATE_VARIABLE_UsedModules_43_43, STATE_VARIABLE_UsedModules_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Subst_28));
    }
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

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_51_95_95_91_52_93_95_48_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), RevItems_24, Items_20);
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
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
  MR_Integer Arity_38;
  MR_Word ItemId_39;
  MR_Word STATE_VARIABLE_UsedModules_45_45;
  MR_Word Var_48;
  MR_Word Var_67;
  MR_Box conv6_TVarSet1_31;
  MR_Box conv5_UsedTypeCtors1_32;
  MR_Box conv4_STATE_VARIABLE_UsedModules_45_45;
  MR_Word Var_34;
  MR_Word Var_35;

  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  ClassName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 0))));
  Types0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 1))));
  OriginalTypes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 2))));
  Constraints0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 3))));
  InstanceBody_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 4))));
  TVarSet0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 5))));
  ContainingModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 6))));
  Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 7))));
  SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo0_16, (MR_Integer) 8))));
  succeeded = (STATE_VARIABLE_RecompInfo_0_40 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ContainingModuleName_26, ModuleName_12);
  if (succeeded)
    UsedTypeCtors0_29 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_44;

    Var_44 = mercury__set__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0));
    {
      UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UsedTypeCtors0_29, 0) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(1), UsedTypeCtors0_29, 1) = ((MR_Box) (Var_44));
    }
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
    MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (MaybeRecord_13));
    MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (TypeEqvMap_14));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_67, Constraints0_23, &Constraints_30, ((MR_Box) (TVarSet0_25)), &conv6_TVarSet1_31, ((MR_Box) (UsedTypeCtors0_29)), &conv5_UsedTypeCtors1_32, ((MR_Box) (STATE_VARIABLE_UsedModules_0_42)), &conv4_STATE_VARIABLE_UsedModules_45_45);
  TVarSet1_31 = ((MR_Word) (conv6_TVarSet1_31));
  UsedTypeCtors1_32 = ((MR_Word) (conv5_UsedTypeCtors1_32));
  STATE_VARIABLE_UsedModules_45_45 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_45_45));
  parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(MaybeRecord_13, TypeEqvMap_14, Types0_21, &Types_33, &Var_34, &Var_35, TVarSet1_31, &TVarSet_36, UsedTypeCtors1_32, &UsedTypeCtors_37, STATE_VARIABLE_UsedModules_45_45, STATE_VARIABLE_UsedModules_43);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_21, &Arity_38);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (ClassName_20));
    MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Arity_38));
  }
  {
    ItemId_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), ItemId_39, 1) = ((MR_Box) (Var_48));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_39, UsedTypeCtors_37, STATE_VARIABLE_RecompInfo_0_40, STATE_VARIABLE_RecompInfo_41);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *InstanceInfo_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Types_33));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OriginalTypes_22));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Constraints_30));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InstanceBody_24));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TVarSet_36));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ContainingModuleName_26));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
  MR_Word MaybeRecord_13,
  MR_Word TypeEqvMap_14,
  MR_Word STATE_VARIABLE_Types_0_21,
  MR_Word * STATE_VARIABLE_Types_22,
  MR_Word * Changed_16,
  MR_Word * ContainsCirc_17,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_25,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  MR_Word Var_31;

  Var_31 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_13, TypeEqvMap_14, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_21, STATE_VARIABLE_Types_22, Changed_16, Var_31, ContainsCirc_17, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_EquivTypeInfo_0_25, STATE_VARIABLE_EquivTypeInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
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

  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_53_95_95_91_50_44_32_51_93_95_48_14_p_0(ModuleName_14, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_108_105_115_116_95_108_111_111_112_95_95_104_111_50_53_95_95_91_50_44_32_51_93_95_48_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(HeadVar__1_1, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
  MR_Word STATE_VARIABLE_RecompInfo_0_43,
  MR_Word * STATE_VARIABLE_RecompInfo_44,
  MR_Word STATE_VARIABLE_UsedModules_0_45,
  MR_Word * STATE_VARIABLE_UsedModules_46,
  MR_Word * Specs_20)
{
  MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
  MR_Word MaybePredOrFunc0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
  MR_Word Modes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
  MR_Word WithInst0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
  MR_Word MaybeDetism0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 4))));
  MR_Word InstVarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 5))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 6))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 7))));
  MR_Word ExpandedItems0_29;
  MR_Word ExtraModes_30;
  MR_Word MaybePredOrFunc_31;
  MR_Word WithInst_32;
  MR_Word MaybeDetism_33;
  MR_Word ExpandedItems_34;
  MR_Word Modes_35;
  MR_Integer Var_47;

  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, PredName_21, STATE_VARIABLE_RecompInfo_0_43, &ExpandedItems0_29);
  Var_47 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_23);
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(InstEqvMap_15, PredName_21, Var_47, Context_27, (MR_Integer) 1, &ExtraModes_30, MaybePredOrFunc0_22, &MaybePredOrFunc_31, WithInst0_24, &WithInst_32, MaybeDetism0_25, &MaybeDetism_33, ExpandedItems0_29, &ExpandedItems_34, STATE_VARIABLE_UsedModules_0_45, STATE_VARIABLE_UsedModules_46, Specs_20);
  if ((ExtraModes_30 == (MR_Word) ((MR_Unsigned) 0U)))
    Modes_35 = Modes0_23;
  else
    Modes_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_23, ExtraModes_30);
  if ((MaybePredOrFunc_31 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_RecompInfo_44 = STATE_VARIABLE_RecompInfo_0_43;
  else
  {
    MR_Word PredOrFunc_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_31, (MR_Integer) 0))));
    MR_Word ItemType_39;
    MR_Integer Arity_40;
    MR_Integer OrigArity_41;
    MR_Word ItemId_42;
    MR_Word Var_50;

    ItemType_39 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_38);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_35, &Arity_40);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_38, &OrigArity_41, Arity_40);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (PredName_21));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (OrigArity_41));
    }
    {
      ItemId_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemId_42, 0) = (MR_Box) ((MR_Unsigned) (ItemType_39));
      MR_hl_field(MR_mktag(0), ItemId_42, 1) = ((MR_Box) (Var_50));
    }
    recompilation__finish_recording_expanded_items_4_p_0(ItemId_42, ExpandedItems_34, STATE_VARIABLE_RecompInfo_0_43, STATE_VARIABLE_RecompInfo_44);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredName_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybePredOrFunc_31));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Modes_35));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (WithInst_32));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeDetism_33));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InstVarSet_26));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list__ho16_13_p_0(
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

  parse_tree__equiv_type__replace_in_list_loop__ho19_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho19_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__replace_in_mutable_info_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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

  *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
  MutName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
  {
    QualName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), QualName_21, 0) = ((MR_Box) (ModuleName_12));
    MR_hl_field(MR_mktag(1), QualName_21, 1) = ((MR_Box) (MutName_20));
  }
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, QualName_21, STATE_VARIABLE_RecompInfo_0_25, &ExpandedItems0_22);
  parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(MaybeRecord_13, TypeEqvMap_14, InstEqvMap_15, Info0_16, Info_17, ExpandedItems0_22, &ExpandedItems_23, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (QualName_21));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    ItemId_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_24, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 8));
    MR_hl_field(MR_mktag(0), ItemId_24, 1) = ((MR_Box) (Var_31));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_24, ExpandedItems_23, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
  MR_Word MaybeRecord_10,
  MR_Word TypeEqvMap_11,
  MR_Word InstEqvMap_12,
  MR_Word Info0_13,
  MR_Word * Info_14,
  MR_Word STATE_VARIABLE_ExpandedItems_0_32,
  MR_Word * STATE_VARIABLE_ExpandedItems_33,
  MR_Word STATE_VARIABLE_UsedModules_0_34,
  MR_Word * STATE_VARIABLE_UsedModules_35)
{
  MR_String MutName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 0))));
  MR_Word OrigType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 1))));
  MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 2))));
  MR_Word OrigInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 3))));
  MR_Word Inst0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 4))));
  MR_Word InitValue_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 5))));
  MR_Word Attrs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 6))));
  MR_Word Varset_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 7))));
  MR_Word Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 8))));
  MR_Word SeqNum_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_13, (MR_Integer) 9))));
  MR_Word TVarSet0_27;
  MR_Word Type_28;
  MR_Word Inst_31;
  MR_Word STATE_VARIABLE_ExpandedItems_36_36;
  MR_Word STATE_VARIABLE_UsedModules_37_37;
  MR_Word Var_70;
  MR_Word _TypeChanged_29;
  MR_Word _TVarSet_30;
  MR_Word Var_55;

  TVarSet0_27 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_10, TypeEqvMap_11, (MR_Word) ((MR_Unsigned) 0U), Type0_19, &Type_28, &_TypeChanged_29, &Var_55, TVarSet0_27, &_TVarSet_30, STATE_VARIABLE_ExpandedItems_0_32, &STATE_VARIABLE_ExpandedItems_36_36, STATE_VARIABLE_UsedModules_0_34, &STATE_VARIABLE_UsedModules_37_37);
  Var_70 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(InstEqvMap_12, Var_70, Inst0_21, &Inst_31, STATE_VARIABLE_ExpandedItems_36_36, STATE_VARIABLE_ExpandedItems_33, STATE_VARIABLE_UsedModules_37_37, STATE_VARIABLE_UsedModules_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *Info_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MutName_17));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigType_18));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_28));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigInst_20));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Inst_31));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InitValue_22));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Attrs_23));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Varset_24));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Context_25));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (SeqNum_26));
  }
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

  parse_tree__equiv_type__replace_in_list_loop__ho22_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho22_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
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
  MR_Word STATE_VARIABLE_RecompInfo_0_39,
  MR_Word * STATE_VARIABLE_RecompInfo_40,
  MR_Word STATE_VARIABLE_UsedModules_0_41,
  MR_Word * STATE_VARIABLE_UsedModules_42,
  MR_Word * Specs_20)
{
  MR_Word ClassName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
  MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))));
  MR_Word Constraints0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
  MR_Word FunDeps_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
  MR_Word ClassInterface0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 4))));
  MR_Word TVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 5))));
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 6))));
  MR_Word SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 7))));
  MR_Integer Arity_29;
  MR_Word ExpandedItems0_30;
  MR_Word Constraints_31;
  MR_Word TVarSet_32;
  MR_Word ExpandedItems1_33;
  MR_Word ClassInterface_34;
  MR_Word ExpandedItems_35;
  MR_Word ItemId_38;
  MR_Word STATE_VARIABLE_UsedModules_43_43;
  MR_Word Var_47;
  MR_Word Var_64;
  MR_Box conv6_TVarSet_32;
  MR_Box conv5_ExpandedItems1_33;
  MR_Box conv4_STATE_VARIABLE_UsedModules_43_43;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), Vars_22, &Arity_29);
  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, ClassName_21, STATE_VARIABLE_RecompInfo_0_39, &ExpandedItems0_30);
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
    MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (MaybeRecord_13));
    MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (TypeEqvMap_14));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_64, Constraints0_23, &Constraints_31, ((MR_Box) (TVarSet0_26)), &conv6_TVarSet_32, ((MR_Box) (ExpandedItems0_30)), &conv5_ExpandedItems1_33, ((MR_Box) (STATE_VARIABLE_UsedModules_0_41)), &conv4_STATE_VARIABLE_UsedModules_43_43);
  TVarSet_32 = ((MR_Word) (conv6_TVarSet_32));
  ExpandedItems1_33 = ((MR_Word) (conv5_ExpandedItems1_33));
  STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_43_43));
  if ((ClassInterface0_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ClassInterface_34 = (MR_Word) ((MR_Unsigned) 0U);
    ExpandedItems_35 = ExpandedItems1_33;
    *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_42 = STATE_VARIABLE_UsedModules_43_43;
  }
  else
  {
    MR_Word Methods0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassInterface0_25, (MR_Integer) 0))));
    MR_Word Methods_37;

    parse_tree__equiv_type__replace_in_class_interface_11_p_0(MaybeRecord_13, TypeEqvMap_14, InstEqvMap_15, Methods0_36, &Methods_37, ExpandedItems1_33, &ExpandedItems_35, STATE_VARIABLE_UsedModules_43_43, STATE_VARIABLE_UsedModules_42, (MR_Word) ((MR_Unsigned) 0U), Specs_20);
    {
      ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClassInterface_34, 0) = ((MR_Box) (Methods_37));
    }
  }
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ClassName_21));
    MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Arity_29));
  }
  {
    ItemId_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_38, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), ItemId_38, 1) = ((MR_Box) (Var_47));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_38, ExpandedItems_35, STATE_VARIABLE_RecompInfo_0_39, STATE_VARIABLE_RecompInfo_40);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Vars_22));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Constraints_31));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FunDeps_24));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ClassInterface_34));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TVarSet_32));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_27));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SeqNum_28));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
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
  MR_Word conv3_Decl_16;
  MR_Word conv2_STATE_VARIABLE_EquivTypeInfo_51;
  MR_Word conv1_STATE_VARIABLE_UsedModules_53;
  MR_Word conv0_STATE_VARIABLE_Specs_55;

  parse_tree__equiv_type__replace_in_class_decl_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_Decl_16, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_EquivTypeInfo_51, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_UsedModules_53, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_55);
  *wrapper_arg_2 = ((MR_Box) (conv3_Decl_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_EquivTypeInfo_51));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_UsedModules_53));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_55));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
  MR_Word MaybeRecord_12,
  MR_Word TypeEqvMap_13,
  MR_Word InstEqvMap_14,
  MR_Word ClassInterface0_15,
  MR_Word * ClassInterface_16,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_21,
  MR_Word STATE_VARIABLE_UsedModules_0_22,
  MR_Word * STATE_VARIABLE_UsedModules_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word Var_26;
  MR_Box conv6_STATE_VARIABLE_EquivTypeInfo_21;
  MR_Box conv5_STATE_VARIABLE_UsedModules_23;
  MR_Box conv4_STATE_VARIABLE_Specs_25;

  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
    MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (MaybeRecord_12));
    MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (TypeEqvMap_13));
    MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (InstEqvMap_14));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[1]), Var_26, ClassInterface0_15, ClassInterface_16, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_20)), &conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (STATE_VARIABLE_UsedModules_0_22)), &conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (STATE_VARIABLE_Specs_0_24)), &conv4_STATE_VARIABLE_Specs_25);
  *STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) (conv6_STATE_VARIABLE_EquivTypeInfo_21));
  *STATE_VARIABLE_UsedModules_23 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModules_23));
  *STATE_VARIABLE_Specs_25 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_25));
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

  parse_tree__equiv_type__replace_in_list_loop__ho24_14_p_0(ModuleName_14, MaybeRecord_15, TypeEqvMap_16, InstEqvMap_17, Items0_19, (MR_Word) ((MR_Unsigned) 0U), &RevItems_24, STATE_VARIABLE_RecompInfo_0_25, STATE_VARIABLE_RecompInfo_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), RevItems_24, Items_20);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_list_loop__ho24_14_p_0(
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
      MR_Word Item0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Items0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Item_43;
      MR_Word ItemSpecs_44;
      MR_Word STATE_VARIABLE_RecompInfo_55_55;
      MR_Word STATE_VARIABLE_UsedModules_56_56;
      MR_Word STATE_VARIABLE_Specs_57_57;
      MR_Word STATE_VARIABLE_RevItems_58_58;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevItems_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RecompInfo_0_9;
      MR_Word next_value_of_STATE_VARIABLE_UsedModules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Item0_37, &Item_43, STATE_VARIABLE_RecompInfo_0_9, &STATE_VARIABLE_RecompInfo_55_55, STATE_VARIABLE_UsedModules_0_11, &STATE_VARIABLE_UsedModules_56_56, &ItemSpecs_44);
      if ((ItemSpecs_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_RevItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 0) = ((MR_Box) (Item_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevItems_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevItems_0_7));
        }
        STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ItemSpecs_44, STATE_VARIABLE_Specs_0_13);
        STATE_VARIABLE_RevItems_58_58 = STATE_VARIABLE_RevItems_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Items0_38;
      next_value_of_STATE_VARIABLE_RevItems_0_7 = STATE_VARIABLE_RevItems_58_58;
      next_value_of_STATE_VARIABLE_RecompInfo_0_9 = STATE_VARIABLE_RecompInfo_55_55;
      next_value_of_STATE_VARIABLE_UsedModules_0_11 = STATE_VARIABLE_UsedModules_56_56;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_57_57;
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
  MR_Word STATE_VARIABLE_RecompInfo_0_47,
  MR_Word * STATE_VARIABLE_RecompInfo_48,
  MR_Word STATE_VARIABLE_UsedModules_0_49,
  MR_Word * STATE_VARIABLE_UsedModules_50,
  MR_Word * Specs_20)
{
  MR_Word PredName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 0))));
  MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndModes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 2))));
  MR_Word MaybeWithType0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 3))));
  MR_Word MaybeWithInst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 4))));
  MR_Word MaybeDetism0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 5))));
  MR_Word Origin_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 6))));
  MR_Word TVarSet0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 7))));
  MR_Word InstVarSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 8))));
  MR_Word ExistQVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 9))));
  MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 10))) & (MR_Integer) 3);
  MR_Word ClassContext0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 11))));
  MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 12))));
  MR_Word SeqNum_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_16, (MR_Integer) 13))));
  MR_Word ExpandedItems0_35;
  MR_Word ClassContext_36;
  MR_Word TypesAndModes_37;
  MR_Word TVarSet_38;
  MR_Word MaybeWithType_39;
  MR_Word MaybeWithInst_40;
  MR_Word MaybeDetism_41;
  MR_Word ExpandedItems_42;
  MR_Word ItemType_43;
  MR_Integer Arity_44;
  MR_Integer OrigArity_45;
  MR_Word ItemId_46;
  MR_Word Var_52;

  recompilation__maybe_start_recording_expanded_items_4_p_0(ModuleName_12, PredName_21, STATE_VARIABLE_RecompInfo_0_47, &ExpandedItems0_35);
  parse_tree__equiv_type__replace_in_pred_type_23_p_0(MaybeRecord_13, PredName_21, PredOrFunc_22, Context_33, TypeEqvMap_14, InstEqvMap_15, ClassContext0_32, &ClassContext_36, TypesAndModes0_23, &TypesAndModes_37, TVarSet0_28, &TVarSet_38, MaybeWithType0_24, &MaybeWithType_39, MaybeWithInst0_25, &MaybeWithInst_40, MaybeDetism0_26, &MaybeDetism_41, ExpandedItems0_35, &ExpandedItems_42, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50, Specs_20);
  ItemType_43 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_22);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_37, &Arity_44);
  parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_22, &OrigArity_45, Arity_44);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (PredName_21));
    MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (OrigArity_45));
  }
  {
    ItemId_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ItemId_46, 0) = (MR_Box) ((MR_Unsigned) (ItemType_43));
    MR_hl_field(MR_mktag(0), ItemId_46, 1) = ((MR_Box) (Var_52));
  }
  recompilation__finish_recording_expanded_items_4_p_0(ItemId_46, ExpandedItems_42, STATE_VARIABLE_RecompInfo_0_47, STATE_VARIABLE_RecompInfo_48);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    *Info_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredName_21));
    MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypesAndModes_37));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeWithType_39));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeWithInst_40));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeDetism_41));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Origin_27));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TVarSet_38));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (InstVarSet_29));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ExistQVars_30));
    MR_hl_field(MR_mktag(0), base, 10) = (MR_Box) ((MR_Unsigned) (Purity_31));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ClassContext_36));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Context_33));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (SeqNum_34));
  }
}

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_228;

  conv0_LambdaHeadVar__2_228 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__2377__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_228));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
  MR_Word MaybeRecord_24,
  MR_Word PredName_25,
  MR_Word PredOrFunc_26,
  MR_Word Context_27,
  MR_Word TypeEqvMap_28,
  MR_Word InstEqvMap_29,
  MR_Word ClassContext0_30,
  MR_Word * ClassContext_31,
  MR_Word TypesAndModes0_32,
  MR_Word * TypesAndModes_33,
  MR_Word STATE_VARIABLE_TVarSet_0_82,
  MR_Word * STATE_VARIABLE_TVarSet_83,
  MR_Word MaybeWithType0_35,
  MR_Word * MaybeWithType_36,
  MR_Word MaybeWithInst0_37,
  MR_Word * MaybeWithInst_38,
  MR_Word STATE_VARIABLE_MaybeDetism_0_84,
  MR_Word * STATE_VARIABLE_MaybeDetism_85,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_86,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_87,
  MR_Word STATE_VARIABLE_UsedModules_0_88,
  MR_Word * STATE_VARIABLE_UsedModules_89,
  MR_Word * STATE_VARIABLE_Specs_90)
{
  MR_bool succeeded;
  MR_Word TypesAndModes1_43;
  MR_Word ExtraTypes_50;
  MR_Word ExtraModes_53;
  MR_Word ModeSpecs_56;
  MR_Word ExtraTypesAndModes_59;
  MR_Word STATE_VARIABLE_TVarSet_91_91;
  MR_Word STATE_VARIABLE_EquivTypeInfo_92_92;
  MR_Word STATE_VARIABLE_UsedModules_93_93;
  MR_Word STATE_VARIABLE_TVarSet_94_94;
  MR_Word STATE_VARIABLE_EquivTypeInfo_95_95;
  MR_Word STATE_VARIABLE_UsedModules_96_96;
  MR_Word STATE_VARIABLE_EquivTypeInfo_99_99;
  MR_Word STATE_VARIABLE_UsedModules_100_100;
  MR_Word STATE_VARIABLE_Specs_101_101;
  MR_Integer Var_129;
  MR_Word Var_131;
  MR_Word STATE_VARIABLE_EquivTypeInfo_133_133;
  MR_Word STATE_VARIABLE_Specs_135_135;
  MR_Word Var_54;
  MR_Word Var_55;

  parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(MaybeRecord_24, TypeEqvMap_28, ClassContext0_30, ClassContext_31, STATE_VARIABLE_TVarSet_0_82, &STATE_VARIABLE_TVarSet_91_91, STATE_VARIABLE_EquivTypeInfo_0_86, &STATE_VARIABLE_EquivTypeInfo_92_92, STATE_VARIABLE_UsedModules_0_88, &STATE_VARIABLE_UsedModules_93_93);
  parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(MaybeRecord_24, TypeEqvMap_28, TypesAndModes0_32, &TypesAndModes1_43, STATE_VARIABLE_TVarSet_91_91, &STATE_VARIABLE_TVarSet_94_94, STATE_VARIABLE_EquivTypeInfo_92_92, &STATE_VARIABLE_EquivTypeInfo_95_95, STATE_VARIABLE_UsedModules_93_93, &STATE_VARIABLE_UsedModules_96_96);
  if ((MaybeWithType0_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ExtraTypes_50 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_101_101 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_83 = STATE_VARIABLE_TVarSet_94_94;
    STATE_VARIABLE_EquivTypeInfo_99_99 = STATE_VARIABLE_EquivTypeInfo_95_95;
    STATE_VARIABLE_UsedModules_100_100 = STATE_VARIABLE_UsedModules_96_96;
  }
  else
  {
    MR_Word WithType0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_35, (MR_Integer) 0))));
    MR_Word WithType_45;
    MR_Word Var_46;
    MR_Word ExtraTypesPrime_49;
    MR_Word Var_247;
    MR_Word _Purity_47;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(MaybeRecord_24, TypeEqvMap_28, WithType0_44, &WithType_45, &Var_46, STATE_VARIABLE_TVarSet_94_94, STATE_VARIABLE_TVarSet_83, STATE_VARIABLE_EquivTypeInfo_95_95, &STATE_VARIABLE_EquivTypeInfo_99_99, STATE_VARIABLE_UsedModules_96_96, &STATE_VARIABLE_UsedModules_100_100);
    succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(WithType_45, &_Purity_47, &Var_247, &ExtraTypesPrime_49);
    if (succeeded)
      succeeded = (PredOrFunc_26 == Var_247);
    if (succeeded)
    {
      ExtraTypes_50 = ExtraTypesPrime_49;
      STATE_VARIABLE_Specs_101_101 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Pieces1_51;
      MR_Word Spec1_52;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_111;
      MR_Word Var_113;
      MR_Word Var_116;

      ExtraTypes_50 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_105, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
      }
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (PredName_25));
      }
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[32])));
      }
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[30])));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[29])));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_111));
      }
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_108));
      }
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_106));
      }
      {
        Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[28])));
        MR_hl_field(MR_mktag(1), Pieces1_51, 1) = ((MR_Box) (Var_104));
      }
      {
        Spec1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec1_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_type\'/23"));
        MR_hl_field(MR_mktag(1), Spec1_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec1_52, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(MR_mktag(1), Spec1_52, 3) = ((MR_Box) (Context_27));
        MR_hl_field(MR_mktag(1), Spec1_52, 4) = ((MR_Box) (Pieces1_51));
      }
      {
        STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (Spec1_52));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (ExtraTypes_50));
      }
    }
  }
  Var_129 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_32);
  {
    Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (PredOrFunc_26));
  }
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(InstEqvMap_29, PredName_25, Var_129, Context_27, (MR_Integer) 0, &ExtraModes_53, Var_131, &Var_54, MaybeWithInst0_37, &Var_55, STATE_VARIABLE_MaybeDetism_0_84, STATE_VARIABLE_MaybeDetism_85, STATE_VARIABLE_EquivTypeInfo_99_99, &STATE_VARIABLE_EquivTypeInfo_133_133, STATE_VARIABLE_UsedModules_100_100, STATE_VARIABLE_UsedModules_89, &ModeSpecs_56);
  STATE_VARIABLE_Specs_135_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_101_101, ModeSpecs_56);
  if ((STATE_VARIABLE_Specs_135_135 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((ExtraModes_53 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ExtraTypesAndModes_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[5]), ExtraTypes_50);
      *STATE_VARIABLE_Specs_90 = STATE_VARIABLE_Specs_135_135;
      *MaybeWithType_36 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybeWithInst_38 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word LeftOverExtraTypes_63;
      MR_Word LeftOverExtraModes_64;

      parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(ExtraTypes_50, ExtraModes_53, &ExtraTypesAndModes_59, &LeftOverExtraTypes_63, &LeftOverExtraModes_64);
      if ((LeftOverExtraTypes_63 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((LeftOverExtraModes_64 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_90 = STATE_VARIABLE_Specs_135_135;
        else
        {
          MR_Integer NumExtraTypes_67;
          MR_Integer NumExtraModes_68;
          MR_Word Pieces2_69;
          MR_Word Spec2_70;
          MR_Word Var_184;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_191;
          MR_Word Var_193;
          MR_Word Var_196;
          MR_Word Var_199;
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_Word Var_205;
          MR_String Var_206;
          MR_Word Var_209;
          MR_Word Var_212;
          MR_Word Var_213;
          MR_Word Var_214;
          MR_Word Var_215;
          MR_String Var_216;
          MR_Box conv1_Var_206;
          MR_Box conv2_Var_216;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraTypes_50, &NumExtraTypes_67);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraModes_53, &NumExtraModes_68);
          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) ((MR_Unsigned) 27U));
            MR_hl_field(MR_mktag(3), Var_185, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
          }
          {
            Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (PredName_25));
          }
          {
            Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_203, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_203, 1) = ((MR_Box) (NumExtraModes_68));
          }
          conv1_Var_206 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraModes_53, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
          Var_206 = ((MR_String) (conv1_Var_206));
          {
            Var_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_205, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_205, 1) = ((MR_Box) (Var_206));
          }
          {
            Var_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_213, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_213, 1) = ((MR_Box) (NumExtraTypes_67));
          }
          conv2_Var_216 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraTypes_50, ((MR_Box) ((MR_String) "type.")), ((MR_Box) ((MR_String) "types.")));
          Var_216 = ((MR_String) (conv2_Var_216));
          {
            Var_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_215, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_215, 1) = ((MR_Box) (Var_216));
          }
          {
            Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_215));
            MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[15])));
          }
          {
            Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_213));
            MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_214));
          }
          {
            Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[36])));
            MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_212));
          }
          {
            Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (Var_205));
            MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_209));
          }
          {
            Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Var_203));
            MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_204));
          }
          {
            Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[35])));
            MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_202));
          }
          {
            Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[34])));
            MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_199));
          }
          {
            Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[33])));
            MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_196));
          }
          {
            Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_193));
          }
          {
            Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[29])));
            MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_191));
          }
          {
            Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
            MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (Var_188));
          }
          {
            Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
            MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_186));
          }
          {
            Pieces2_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces2_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[28])));
            MR_hl_field(MR_mktag(1), Pieces2_69, 1) = ((MR_Box) (Var_184));
          }
          {
            Spec2_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec2_70, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_type\'/23"));
            MR_hl_field(MR_mktag(1), Spec2_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec2_70, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(MR_mktag(1), Spec2_70, 3) = ((MR_Box) (Context_27));
            MR_hl_field(MR_mktag(1), Spec2_70, 4) = ((MR_Box) (Pieces2_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_90 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec2_70));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_135_135));
          }
        }
      else
      if ((LeftOverExtraModes_64 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_147;
        MR_Word Var_149;
        MR_Word Var_152;
        MR_Word Var_155;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_String Var_162;
        MR_Word Var_165;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_String Var_172;
        MR_Integer NumExtraTypes_234;
        MR_Integer NumExtraModes_235;
        MR_Word Pieces2_236;
        MR_Word Spec2_237;
        MR_Box conv3_Var_162;
        MR_Box conv4_Var_172;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraTypes_50, &NumExtraTypes_234);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraModes_53, &NumExtraModes_235);
        {
          Var_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_141, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_141, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
        }
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (PredName_25));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_159, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_159, 1) = ((MR_Box) (NumExtraTypes_234));
        }
        conv3_Var_162 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraTypes_50, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
        Var_162 = ((MR_String) (conv3_Var_162));
        {
          Var_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_161, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_161, 1) = ((MR_Box) (Var_162));
        }
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (NumExtraModes_235));
        }
        conv4_Var_172 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraModes_53, ((MR_Box) ((MR_String) "mode.")), ((MR_Box) ((MR_String) "modes.")));
        Var_172 = ((MR_String) (conv4_Var_172));
        {
          Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (Var_172));
        }
        {
          Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
          MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[15])));
        }
        {
          Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_170));
        }
        {
          Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[36])));
          MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_168));
        }
        {
          Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_165));
        }
        {
          Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
          MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_160));
        }
        {
          Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[35])));
          MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_158));
        }
        {
          Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[34])));
          MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_155));
        }
        {
          Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[33])));
          MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_152));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_149));
        }
        {
          Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[29])));
          MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_144));
        }
        {
          Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_141));
          MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
        }
        {
          Pieces2_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces2_236, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[28])));
          MR_hl_field(MR_mktag(1), Pieces2_236, 1) = ((MR_Box) (Var_140));
        }
        {
          Spec2_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec2_237, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_type\'/23"));
          MR_hl_field(MR_mktag(1), Spec2_237, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec2_237, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(MR_mktag(1), Spec2_237, 3) = ((MR_Box) (Context_27));
          MR_hl_field(MR_mktag(1), Spec2_237, 4) = ((MR_Box) (Pieces2_236));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_90 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec2_237));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_135_135));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_type\'/23", (MR_String) "both types and modes left over");
          return;
        }
      if ((*STATE_VARIABLE_Specs_90 == (MR_Word) ((MR_Unsigned) 0U)))
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
    ExtraTypesAndModes_59 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_90 = STATE_VARIABLE_Specs_135_135;
    *MaybeWithType_36 = MaybeWithType0_35;
    *MaybeWithInst_38 = MaybeWithInst0_37;
  }
  if ((ExtraTypesAndModes_59 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TypesAndModes_33 = TypesAndModes1_43;
    *STATE_VARIABLE_EquivTypeInfo_87 = STATE_VARIABLE_EquivTypeInfo_133_133;
  }
  else
  {
    MR_Word OrigItemId_81;
    MR_Word Var_229;
    MR_Word Var_230;
    MR_Integer Var_231;

    Var_229 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_26);
    Var_231 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_32);
    {
      Var_230 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_230, 0) = ((MR_Box) (PredName_25));
      MR_hl_field(MR_mktag(0), Var_230, 1) = ((MR_Box) (Var_231));
    }
    {
      OrigItemId_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigItemId_81, 0) = (MR_Box) ((MR_Unsigned) (Var_229));
      MR_hl_field(MR_mktag(0), OrigItemId_81, 1) = ((MR_Box) (Var_230));
    }
    recompilation__record_expanded_item_3_p_0(OrigItemId_81, STATE_VARIABLE_EquivTypeInfo_133_133, STATE_VARIABLE_EquivTypeInfo_87);
    *TypesAndModes_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes1_43, ExtraTypesAndModes_59);
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
  MR_Word InstEqvMap_20,
  MR_Word PredName_21,
  MR_Integer OrigArity_22,
  MR_Word Context_23,
  MR_Word DeclType_24,
  MR_Word * ExtraModes_25,
  MR_Word MaybePredOrFunc0_26,
  MR_Word * MaybePredOrFunc_27,
  MR_Word MaybeWithInst0_28,
  MR_Word * MaybeWithInst_29,
  MR_Word STATE_VARIABLE_MaybeDetism_0_49,
  MR_Word * STATE_VARIABLE_MaybeDetism_50,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_51,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_52,
  MR_Word STATE_VARIABLE_UsedModules_0_53,
  MR_Word * STATE_VARIABLE_UsedModules_54,
  MR_Word * Specs_33)
{
  MR_bool succeeded;

  if ((MaybeWithInst0_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeWithInst_29 = MaybeWithInst0_28;
    *MaybePredOrFunc_27 = MaybePredOrFunc0_26;
    *ExtraModes_25 = (MR_Word) ((MR_Unsigned) 0U);
    *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MaybeDetism_50 = STATE_VARIABLE_MaybeDetism_0_49;
    *STATE_VARIABLE_EquivTypeInfo_52 = STATE_VARIABLE_EquivTypeInfo_0_51;
    *STATE_VARIABLE_UsedModules_54 = STATE_VARIABLE_UsedModules_0_53;
  }
  else
  {
    MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_28, (MR_Integer) 0))));
    MR_Word WithInst_35;
    MR_Word STATE_VARIABLE_EquivTypeInfo_55_55;
    MR_Word PredOrFunc_39;
    MR_Word ExtraModes0_40;
    MR_Word DetPrime_42;
    MR_Word GroundInstInfo_37;
    MR_Word HOInst_38;

    parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(InstEqvMap_20, WithInst0_34, &WithInst_35, STATE_VARIABLE_EquivTypeInfo_0_51, &STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_UsedModules_0_53, STATE_VARIABLE_UsedModules_54);
    succeeded = ((((MR_tag((MR_Word) WithInst_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      GroundInstInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), WithInst_35, (MR_Integer) 2))));
      succeeded = (GroundInstInfo_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HOInst_38 = (MR_Word) (MR_body((MR_Word) (GroundInstInfo_37), (MR_Integer) 1));
        PredOrFunc_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HOInst_38, (MR_Integer) 0))) & (MR_Integer) 1);
        ExtraModes0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HOInst_38, (MR_Integer) 1))));
        DetPrime_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HOInst_38, (MR_Integer) 3))) & (MR_Integer) 7);
        if ((MaybePredOrFunc0_26 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc0_26, (MR_Integer) 0))));

          succeeded = (PredOrFunc_39 == Var_100);
        }
      }
    }
    if (succeeded)
    {
      MR_Word RecordedPredOrFunc_43;
      MR_Word OrigItemId_44;
      MR_Word Var_58;
      MR_Word Var_59;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MaybeDetism_50 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DetPrime_42));
      }
      *MaybeWithInst_29 = (MR_Word) ((MR_Unsigned) 0U);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredOrFunc_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredOrFunc_39));
      }
      *ExtraModes_25 = ExtraModes0_40;
      if ((MaybePredOrFunc0_26 == (MR_Word) ((MR_Unsigned) 0U)))
        RecordedPredOrFunc_43 = (MR_Integer) 0;
      else
        RecordedPredOrFunc_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc0_26, (MR_Integer) 0))));
      Var_58 = recompilation__pred_or_func_to_item_type_1_f_0(RecordedPredOrFunc_43);
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (PredName_21));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (OrigArity_22));
      }
      {
        OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OrigItemId_44, 0) = (MR_Box) ((MR_Unsigned) (Var_58));
        MR_hl_field(MR_mktag(0), OrigItemId_44, 1) = ((MR_Box) (Var_59));
      }
      recompilation__record_expanded_item_3_p_0(OrigItemId_44, STATE_VARIABLE_EquivTypeInfo_55_55, STATE_VARIABLE_EquivTypeInfo_52);
      *Specs_33 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String DeclStr_45;
      MR_Word PredOrFuncPieces_46;
      MR_Word Pieces_47;
      MR_Word Spec_48;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_85;

      *ExtraModes_25 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybePredOrFunc_27 = MaybePredOrFunc0_26;
      *MaybeWithInst_29 = MaybeWithInst0_28;
      switch (DeclType_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          DeclStr_45 = (MR_String) "mode declaration";
          break;
        case (MR_Integer) 0:
          DeclStr_45 = (MR_String) "declaration";
          break;
      }
      if ((*MaybePredOrFunc_27 == (MR_Word) ((MR_Unsigned) 0U)))
        PredOrFuncPieces_46 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_61;
        MR_Word PredOrFunc_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), *MaybePredOrFunc_27, (MR_Integer) 0))));

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_96));
        }
        {
          PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredOrFuncPieces_46, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), PredOrFuncPieces_46, 1) = ((MR_Box) (*ExtraModes_25));
        }
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (DeclStr_45));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[39])));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_2[37])));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (PredName_21));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[43])));
      }
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrFuncPieces_46, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_2[45])));
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_74, Var_85);
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrFuncPieces_46, Var_73);
      Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_63, Var_72);
      {
        Spec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_mode\'/18"));
        MR_hl_field(MR_mktag(1), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(MR_mktag(1), Spec_48, 3) = ((MR_Box) (Context_23));
        MR_hl_field(MR_mktag(1), Spec_48, 4) = ((MR_Box) (Pieces_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_33 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_48));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_EquivTypeInfo_52 = STATE_VARIABLE_EquivTypeInfo_55_55;
      *STATE_VARIABLE_MaybeDetism_50 = STATE_VARIABLE_MaybeDetism_0_49;
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
  MR_Word InstEqvMap_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_15,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_16,
  MR_Word STATE_VARIABLE_UsedModules_0_17,
  MR_Word * STATE_VARIABLE_UsedModules_18)
{
  MR_Word Var_19;

  Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(InstEqvMap_10, Var_19, Inst0_11, Inst_12, STATE_VARIABLE_EquivTypeInfo_0_15, STATE_VARIABLE_EquivTypeInfo_16, STATE_VARIABLE_UsedModules_0_17, STATE_VARIABLE_UsedModules_18);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Inst0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word SymName_17;
    MR_Word ArgInsts_18;
    MR_Word Var_29;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
        ArgInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word InstCtor_19;
      MR_Integer Var_30;

      Var_30 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_18);
      {
        InstCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InstCtor_19, 0) = ((MR_Box) (SymName_17));
        MR_hl_field(MR_mktag(0), InstCtor_19, 1) = ((MR_Box) (Var_30));
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
          EqvInstParams_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvInstBody_20, (MR_Integer) 0))));
          EqvInst_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvInstBody_20, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Inst1_23;
          MR_Word InstCtorItem_24;
          MR_Word Var_31;
          MR_Word STATE_VARIABLE_EquivTypeInfo_32_32;
          MR_Word Var_34;
          MR_Word next_value_of_ExpandedInstCtors_12;
          MR_Word next_value_of_Inst0_13;
          MR_Word next_value_of_STATE_VARIABLE_EquivTypeInfo_0_25;

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(EqvInstParams_21, ArgInsts_18, EqvInst_22, &Inst1_23);
          InstCtorItem_24 = recompilation__inst_ctor_to_item_name_1_f_0(InstCtor_19);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (InstCtorItem_24));
          }
          recompilation__record_expanded_item_3_p_0(Var_31, STATE_VARIABLE_EquivTypeInfo_0_25, &STATE_VARIABLE_EquivTypeInfo_32_32);
          Var_34 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ExpandedInstCtors_12, ((MR_Box) (InstCtor_19)));
          // direct tailcall eliminated
          ;
          next_value_of_ExpandedInstCtors_12 = Var_34;
          next_value_of_Inst0_13 = Inst1_23;
          next_value_of_STATE_VARIABLE_EquivTypeInfo_0_25 = STATE_VARIABLE_EquivTypeInfo_32_32;
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
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_EquivTypeInfo_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_TypeAndMode_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_TypeAndMode_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_TypeAndModes_0_17,
  MR_Word * STATE_VARIABLE_TypeAndModes_18,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  MR_Word Var_25;
  MR_Box conv6_STATE_VARIABLE_TVarSet_20;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_22;
  MR_Box conv4_STATE_VARIABLE_UsedModules_24;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_types_and_modes_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeEqvMap_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, STATE_VARIABLE_TypeAndModes_0_17, STATE_VARIABLE_TypeAndModes_18, ((MR_Box) (STATE_VARIABLE_TVarSet_0_19)), &conv6_STATE_VARIABLE_TVarSet_20, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_21)), &conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (STATE_VARIABLE_UsedModules_0_23)), &conv4_STATE_VARIABLE_UsedModules_24);
  *STATE_VARIABLE_TVarSet_20 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_20));
  *STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_22));
  *STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_24));
}

static void MR_CALL 
parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = HeadVar__2_2;
    }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = HeadVar__1_1;
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Mode_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TypesAndModes_16;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Mode_14));
      }
      parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(Var_20, Modes_15, &TypesAndModes_16, HeadVar__4_4, HeadVar__5_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypesAndModes_16));
      }
    }
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
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

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
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
  MR_Word UnivCs0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_13, (MR_Integer) 0))));
  MR_Word ExistCs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cs0_13, (MR_Integer) 1))));
  MR_Word UnivCs_20;
  MR_Word ExistCs_21;
  MR_Word STATE_VARIABLE_TVarSet_28_28;
  MR_Word STATE_VARIABLE_EquivTypeInfo_29_29;
  MR_Word STATE_VARIABLE_UsedModules_30_30;
  MR_Word Var_48;
  MR_Box conv6_STATE_VARIABLE_TVarSet_28_28;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
  MR_Box conv4_STATE_VARIABLE_UsedModules_30_30;

  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (TypeEqvMap_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_48, UnivCs0_18, &UnivCs_20, ((MR_Box) (STATE_VARIABLE_TVarSet_0_22)), &conv6_STATE_VARIABLE_TVarSet_28_28, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_24)), &conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_30_30);
  STATE_VARIABLE_TVarSet_28_28 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_28_28));
  STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_29_29));
  STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_30_30));
  parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0(MaybeRecord_11, TypeEqvMap_12, ExistCs0_19, &ExistCs_21, STATE_VARIABLE_TVarSet_28_28, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_EquivTypeInfo_29_29, STATE_VARIABLE_EquivTypeInfo_25, STATE_VARIABLE_UsedModules_30_30, STATE_VARIABLE_UsedModules_27);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Cs_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0_1(
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

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_EquivTypeInfo_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0(
  MR_Word MaybeRecord_11,
  MR_Word TypeEqvMap_12,
  MR_Word STATE_VARIABLE_Constraints_0_17,
  MR_Word * STATE_VARIABLE_Constraints_18,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_21,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  MR_Word Var_25;
  MR_Box conv6_STATE_VARIABLE_TVarSet_20;
  MR_Box conv5_STATE_VARIABLE_EquivTypeInfo_22;
  MR_Box conv4_STATE_VARIABLE_UsedModules_24;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_location_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MaybeRecord_11));
    MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (TypeEqvMap_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[10]), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expand_info_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0), Var_25, STATE_VARIABLE_Constraints_0_17, STATE_VARIABLE_Constraints_18, ((MR_Box) (STATE_VARIABLE_TVarSet_0_19)), &conv6_STATE_VARIABLE_TVarSet_20, ((MR_Box) (STATE_VARIABLE_EquivTypeInfo_0_21)), &conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (STATE_VARIABLE_UsedModules_0_23)), &conv4_STATE_VARIABLE_UsedModules_24);
  *STATE_VARIABLE_TVarSet_20 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_20));
  *STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) (conv5_STATE_VARIABLE_EquivTypeInfo_22));
  *STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_24));
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
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
  MR_Word MaybeRecord_14,
  MR_Word TypeEqvMap_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_TVarSet_0_42,
  MR_Word * STATE_VARIABLE_TVarSet_43,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_44,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_45,
  MR_Word STATE_VARIABLE_UsedModules_0_46,
  MR_Word * STATE_VARIABLE_UsedModules_47)
{
  switch (MR_tag((MR_Word) Type0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_43 = STATE_VARIABLE_TVarSet_0_42;
        *STATE_VARIABLE_EquivTypeInfo_45 = STATE_VARIABLE_EquivTypeInfo_0_44;
        *STATE_VARIABLE_UsedModules_47 = STATE_VARIABLE_UsedModules_0_46;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_17, (MR_Integer) 0))));
        MR_Word TArgs0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_17, (MR_Integer) 1))));
        MR_Word TArgs_28;
        MR_Word ArgsChanged_29;
        MR_Word Circ0_30;
        MR_Integer Arity_31;
        MR_Word TypeCtor_32;
        MR_Word Var_63;
        MR_Word STATE_VARIABLE_TVarSet_64_64;
        MR_Word STATE_VARIABLE_EquivTypeInfo_65_65;
        MR_Word STATE_VARIABLE_UsedModules_66_66;
        MR_Word Kind_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_17, (MR_Integer) 2))));

        Var_63 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, TArgs0_27, &TArgs_28, &ArgsChanged_29, Var_63, &Circ0_30, STATE_VARIABLE_TVarSet_0_42, &STATE_VARIABLE_TVarSet_64_64, STATE_VARIABLE_EquivTypeInfo_0_44, &STATE_VARIABLE_EquivTypeInfo_65_65, STATE_VARIABLE_UsedModules_0_46, &STATE_VARIABLE_UsedModules_66_66);
        Arity_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TArgs_28);
        {
          TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_32, 0) = ((MR_Box) (SymName_26));
          MR_hl_field(MR_mktag(0), TypeCtor_32, 1) = ((MR_Box) (Arity_31));
        }
        parse_tree__equiv_type__replace_type_ctor_18_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Type0_17, TypeCtor_32, TArgs_28, Kind_70, Type_18, ArgsChanged_29, Changed_19, Circ0_30, Circ_20, STATE_VARIABLE_TVarSet_64_64, STATE_VARIABLE_TVarSet_43, STATE_VARIABLE_EquivTypeInfo_65_65, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_66_66, STATE_VARIABLE_UsedModules_47);
      }
      break;
    case (MR_Integer) 2:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_43 = STATE_VARIABLE_TVarSet_0_42;
        *STATE_VARIABLE_EquivTypeInfo_45 = STATE_VARIABLE_EquivTypeInfo_0_44;
        *STATE_VARIABLE_UsedModules_47 = STATE_VARIABLE_UsedModules_0_46;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_55;
            MR_Word Kind_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 2))));
            MR_Word Args0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 1))));
            MR_Word Args_73;

            Var_55 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_72, &Args_73, Changed_19, Var_55, Circ_20, STATE_VARIABLE_TVarSet_0_42, STATE_VARIABLE_TVarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Args_73));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_71));
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
            MR_Word PorF_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 2))));
            MR_Word HOInstInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 3))));
            MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word Args_39;
            MR_Word Var_59;

            Var_59 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_35, &Args_39, Changed_19, Var_59, Circ_20, STATE_VARIABLE_TVarSet_0_42, STATE_VARIABLE_TVarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (PorF_34));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_39));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_36));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_37));
                  MR_hl_field(MR_mktag(3), base, 5) = NULL;
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
            MR_Word Var_51;
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 1))));
            MR_Word Kind_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 3))));
            MR_Word Args0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 2))));
            MR_Word Args_77;

            Var_51 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, Args0_76, &Args_77, Changed_19, Var_51, Circ_20, STATE_VARIABLE_TVarSet_0_42, STATE_VARIABLE_TVarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_74));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_77));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_75));
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
            MR_Word RawType0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 1))));
            MR_Word RawType_41;
            MR_Word Kind_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_17, (MR_Integer) 2))));

            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_14, TypeEqvMap_15, TypeCtorsAlreadyExpanded_16, RawType0_40, &RawType_41, Changed_19, Circ_20, STATE_VARIABLE_TVarSet_0_42, STATE_VARIABLE_TVarSet_43, STATE_VARIABLE_EquivTypeInfo_0_44, STATE_VARIABLE_EquivTypeInfo_45, STATE_VARIABLE_UsedModules_0_46, STATE_VARIABLE_UsedModules_47);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RawType_41));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_78));
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
    MR_Word Type0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Types0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Type_42;
    MR_Word HeadChanged_43;
    MR_Word HeadCirc_44;
    MR_Word Types_45;
    MR_Word TailChanged_46;
    MR_Word STATE_VARIABLE_TVarSet_55_55;
    MR_Word STATE_VARIABLE_EquivTypeInfo_56_56;
    MR_Word STATE_VARIABLE_UsedModules_57_57;
    MR_Word STATE_VARIABLE_Circ_58_58;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Type0_34, &Type_42, &HeadChanged_43, &HeadCirc_44, STATE_VARIABLE_TVarSet_0_9, &STATE_VARIABLE_TVarSet_55_55, STATE_VARIABLE_EquivTypeInfo_0_11, &STATE_VARIABLE_EquivTypeInfo_56_56, STATE_VARIABLE_UsedModules_0_13, &STATE_VARIABLE_UsedModules_57_57);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), HeadCirc_44, HeadVar__7_7, &STATE_VARIABLE_Circ_58_58);
    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Types0_35, &Types_45, &TailChanged_46, STATE_VARIABLE_Circ_58_58, HeadVar__8_8, STATE_VARIABLE_TVarSet_55_55, STATE_VARIABLE_TVarSet_10, STATE_VARIABLE_EquivTypeInfo_56_56, STATE_VARIABLE_EquivTypeInfo_12, STATE_VARIABLE_UsedModules_57_57, STATE_VARIABLE_UsedModules_14);
    succeeded = (HeadChanged_43 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (TailChanged_46 == (MR_Integer) 1);
    if (succeeded)
    {
      *HeadVar__6_6 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_42));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types_45));
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
parse_tree__equiv_type__replace_type_ctor_18_p_0(
  MR_Word MaybeRecord_19,
  MR_Word TypeEqvMap_20,
  MR_Word TypeCtorsAlreadyExpanded_21,
  MR_Word Type0_22,
  MR_Word TypeCtor_23,
  MR_Word TArgs_24,
  MR_Word Kind_25,
  MR_Word * Type_26,
  MR_Word STATE_VARIABLE_Changed_0_47,
  MR_Word * STATE_VARIABLE_Changed_48,
  MR_Word STATE_VARIABLE_Circ_0_49,
  MR_Word * STATE_VARIABLE_Circ_50,
  MR_Word STATE_VARIABLE_TVarSet_0_51,
  MR_Word * STATE_VARIABLE_TVarSet_52,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_53,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56)
{
  MR_bool succeeded;
  MR_Word AlreadyExpanded_32;
  MR_Word NewCirc_33;
  MR_Word Args0_36;
  MR_Word Body0_37;
  MR_Word Renaming_38;
  MR_Word STATE_VARIABLE_TVarSet_57_57;
  MR_Word EqvTypeBody_34;
  MR_Word EqvTVarSet_35;
  MR_Box conv0_EqvTypeBody_34;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_23)), TypeCtorsAlreadyExpanded_21);
  if (succeeded)
  {
    AlreadyExpanded_32 = (MR_Integer) 1;
    NewCirc_33 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_23)));
  }
  else
  {
    AlreadyExpanded_32 = (MR_Integer) 0;
    NewCirc_33 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), TypeEqvMap_20, ((MR_Box) (TypeCtor_23)), &conv0_EqvTypeBody_34);
  if (succeeded)
  {
    EqvTypeBody_34 = ((MR_Word) (conv0_EqvTypeBody_34));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    EqvTVarSet_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_34, (MR_Integer) 0))));
    Args0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_34, (MR_Integer) 1))));
    Body0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvTypeBody_34, (MR_Integer) 2))));
    parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(STATE_VARIABLE_TVarSet_0_51, EqvTVarSet_35, &STATE_VARIABLE_TVarSet_57_57, &Renaming_38);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), STATE_VARIABLE_Circ_0_49);
    if (succeeded)
      succeeded = (AlreadyExpanded_32 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Args_39;
    MR_Word Body1_40;
    MR_Word TypeCtorItem_41;
    MR_Word Subst_42;
    MR_Word Body_43;
    MR_Word STATE_VARIABLE_UsedModules_58_58;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_EquivTypeInfo_61_61;
    MR_Word Var_63;
    MR_Word Var_44;

    if ((MaybeRecord_19 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_UsedModules_58_58 = STATE_VARIABLE_UsedModules_0_55;
    else
    {
      MR_Word Visibility_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeRecord_19, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word TypeCtorSymName_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_23, (MR_Integer) 0))));

      parse_tree__prog_data_used_modules__record_sym_name_module_as_used_4_p_0(Visibility_82, TypeCtorSymName_83, STATE_VARIABLE_UsedModules_0_55, &STATE_VARIABLE_UsedModules_58_58);
    }
    *STATE_VARIABLE_Changed_48 = (MR_Integer) 1;
    mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), (MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), Args0_36, Renaming_38, &Args_39);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_38, Body0_37, &Body1_40);
    TypeCtorItem_41 = recompilation__type_ctor_to_item_name_1_f_0(TypeCtor_23);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (TypeCtorItem_41));
    }
    recompilation__record_expanded_item_3_p_0(Var_60, STATE_VARIABLE_EquivTypeInfo_0_53, &STATE_VARIABLE_EquivTypeInfo_61_61);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_2[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_39, TArgs_24, &Subst_42);
    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_42, Body1_40, &Body_43);
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (TypeCtor_23));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (TypeCtorsAlreadyExpanded_21));
    }
    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(MaybeRecord_19, TypeEqvMap_20, Var_63, Body_43, Type_26, &Var_44, STATE_VARIABLE_Circ_50, STATE_VARIABLE_TVarSet_57_57, STATE_VARIABLE_TVarSet_52, STATE_VARIABLE_EquivTypeInfo_61_61, STATE_VARIABLE_EquivTypeInfo_54, STATE_VARIABLE_UsedModules_58_58, STATE_VARIABLE_UsedModules_56);
  }
  else
  {
    switch (STATE_VARIABLE_Changed_0_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word SymName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_23, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_26 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TArgs_24));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_25));
          }
        }
        break;
      case (MR_Integer) 0:
        *Type_26 = Type0_22;
        break;
    }
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewCirc_33, STATE_VARIABLE_Circ_0_49, STATE_VARIABLE_Circ_50);
    *STATE_VARIABLE_UsedModules_56 = STATE_VARIABLE_UsedModules_0_55;
    *STATE_VARIABLE_EquivTypeInfo_54 = STATE_VARIABLE_EquivTypeInfo_0_53;
    *STATE_VARIABLE_TVarSet_52 = STATE_VARIABLE_TVarSet_0_51;
    *STATE_VARIABLE_Changed_48 = STATE_VARIABLE_Changed_0_47;
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
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 14))));
  MR_Word Var_17;
  MR_Box conv1_STATE_VARIABLE_TypeEqvMap_10;
  MR_Box conv3_STATE_VARIABLE_InstEqvMap_12;

  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[3]), Var_14, ((MR_Box) (STATE_VARIABLE_TypeEqvMap_0_9)), &conv1_STATE_VARIABLE_TypeEqvMap_10);
  *STATE_VARIABLE_TypeEqvMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_TypeEqvMap_10));
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 15))));
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
parse_tree__equiv_type____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____maybe_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____maybe_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_changed_0);
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
